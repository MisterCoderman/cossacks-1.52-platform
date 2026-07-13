#include "recomp.h"

/* ProcessAI @ 0x10181000 (16 bytes, 3 insns) */
void f_10181000(void) {
  FTRACE(0x10181000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10181000 call dword ptr [0x10196500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196500))), 0x10181006u);
  /* 10181006 mov dword ptr [0x101962b4], eax */
  w32((uint32_t)(0x101962b4), (EAX));
  /* 1018100b jmp 0x10186d40 */
  f_10186d40(); return;
}

/* InitAI @ 0x10181010 (5593 bytes, 1469 insns) */
void f_10181010(void) {
  FTRACE(0x10181010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10181010 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181015 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10181018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018101a je 0x10181078 */
  if (C.zf) goto L_10181078;
  /* 1018101c push 0x1018fef8 */
  push32((uint32_t)(0x1018fef8u));
  /* 10181021 push 0x10196088 */
  push32((uint32_t)(0x10196088u));
  /* 10181026 call eax */
  call_ind((uint32_t)(EAX), 0x10181028u);
  /* 10181028 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018102d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181032 je 0x10181078 */
  if (C.zf) goto L_10181078;
  /* 10181034 push 0x1018fef0 */
  push32((uint32_t)(0x1018fef0u));
  /* 10181039 push 0x10196028 */
  push32((uint32_t)(0x10196028u));
  /* 1018103e call eax */
  call_ind((uint32_t)(EAX), 0x10181040u);
  /* 10181040 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018104a je 0x10181078 */
  if (C.zf) goto L_10181078;
  /* 1018104c push 0x1018fee8 */
  push32((uint32_t)(0x1018fee8u));
  /* 10181051 push 0x10196080 */
  push32((uint32_t)(0x10196080u));
  /* 10181056 call eax */
  call_ind((uint32_t)(EAX), 0x10181058u);
  /* 10181058 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181062 je 0x10181078 */
  if (C.zf) goto L_10181078;
  /* 10181064 push 0x1018fee0 */
  push32((uint32_t)(0x1018fee0u));
  /* 10181069 push 0x10196090 */
  push32((uint32_t)(0x10196090u));
  /* 1018106e call eax */
  call_ind((uint32_t)(EAX), 0x10181070u);
  /* 10181070 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10181078:;
  /* 10181078 mov ecx, dword ptr [0x101963f8] */
  ECX = (r32((uint32_t)(0x101963f8)));
  /* 1018107e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10181080 je 0x10181096 */
  if (C.zf) goto L_10181096;
  /* 10181082 push 0x1018fed4 */
  push32((uint32_t)(0x1018fed4u));
  /* 10181087 push 0x10193690 */
  push32((uint32_t)(0x10193690u));
  /* 1018108c call ecx */
  call_ind((uint32_t)(ECX), 0x1018108eu);
  /* 1018108e mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10181096:;
  /* 10181096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181098 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 1018109e push 0x1018fec0 */
  push32((uint32_t)(0x1018fec0u));
  /* 101810a3 push 0x10193900 */
  push32((uint32_t)(0x10193900u));
  /* 101810a8 call eax */
  call_ind((uint32_t)(EAX), 0x101810aau);
  /* 101810aa mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101810af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101810b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101810b4 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 101810ba push 0x1018feac */
  push32((uint32_t)(0x1018feacu));
  /* 101810bf push 0x101938f8 */
  push32((uint32_t)(0x101938f8u));
  /* 101810c4 call eax */
  call_ind((uint32_t)(EAX), 0x101810c6u);
  /* 101810c6 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101810cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101810ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101810d0 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 101810d6 push 0x1018fe98 */
  push32((uint32_t)(0x1018fe98u));
  /* 101810db push 0x101938f0 */
  push32((uint32_t)(0x101938f0u));
  /* 101810e0 call eax */
  call_ind((uint32_t)(EAX), 0x101810e2u);
  /* 101810e2 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101810e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101810ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101810ec je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 101810f2 push 0x1018fe84 */
  push32((uint32_t)(0x1018fe84u));
  /* 101810f7 push 0x10193938 */
  push32((uint32_t)(0x10193938u));
  /* 101810fc call eax */
  call_ind((uint32_t)(EAX), 0x101810feu);
  /* 101810fe mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181108 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 1018110e push 0x1018fe70 */
  push32((uint32_t)(0x1018fe70u));
  /* 10181113 push 0x10193928 */
  push32((uint32_t)(0x10193928u));
  /* 10181118 call eax */
  call_ind((uint32_t)(EAX), 0x1018111au);
  /* 1018111a mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018111f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181124 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 1018112a push 0x1018fe5c */
  push32((uint32_t)(0x1018fe5cu));
  /* 1018112f push 0x10193920 */
  push32((uint32_t)(0x10193920u));
  /* 10181134 call eax */
  call_ind((uint32_t)(EAX), 0x10181136u);
  /* 10181136 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018113b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181140 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 10181146 push 0x1018fe48 */
  push32((uint32_t)(0x1018fe48u));
  /* 1018114b push 0x101936d8 */
  push32((uint32_t)(0x101936d8u));
  /* 10181150 call eax */
  call_ind((uint32_t)(EAX), 0x10181152u);
  /* 10181152 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018115a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018115c je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 10181162 push 0x1018fe34 */
  push32((uint32_t)(0x1018fe34u));
  /* 10181167 push 0x101936c8 */
  push32((uint32_t)(0x101936c8u));
  /* 1018116c call eax */
  call_ind((uint32_t)(EAX), 0x1018116eu);
  /* 1018116e mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181178 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 1018117e push 0x1018fe20 */
  push32((uint32_t)(0x1018fe20u));
  /* 10181183 push 0x101938c0 */
  push32((uint32_t)(0x101938c0u));
  /* 10181188 call eax */
  call_ind((uint32_t)(EAX), 0x1018118au);
  /* 1018118a mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181194 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 1018119a push 0x1018fe0c */
  push32((uint32_t)(0x1018fe0cu));
  /* 1018119f push 0x101938b8 */
  push32((uint32_t)(0x101938b8u));
  /* 101811a4 call eax */
  call_ind((uint32_t)(EAX), 0x101811a6u);
  /* 101811a6 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101811ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101811ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101811b0 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 101811b6 push 0x1018fdf8 */
  push32((uint32_t)(0x1018fdf8u));
  /* 101811bb push 0x101938b0 */
  push32((uint32_t)(0x101938b0u));
  /* 101811c0 call eax */
  call_ind((uint32_t)(EAX), 0x101811c2u);
  /* 101811c2 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101811c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101811ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101811cc je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 101811d2 push 0x1018fde4 */
  push32((uint32_t)(0x1018fde4u));
  /* 101811d7 push 0x101938a8 */
  push32((uint32_t)(0x101938a8u));
  /* 101811dc call eax */
  call_ind((uint32_t)(EAX), 0x101811deu);
  /* 101811de mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101811e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101811e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101811e8 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 101811ee push 0x1018fec0 */
  push32((uint32_t)(0x1018fec0u));
  /* 101811f3 push 0x10193900 */
  push32((uint32_t)(0x10193900u));
  /* 101811f8 call eax */
  call_ind((uint32_t)(EAX), 0x101811fau);
  /* 101811fa mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101811ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181204 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 1018120a push 0x1018feac */
  push32((uint32_t)(0x1018feacu));
  /* 1018120f push 0x101938f8 */
  push32((uint32_t)(0x101938f8u));
  /* 10181214 call eax */
  call_ind((uint32_t)(EAX), 0x10181216u);
  /* 10181216 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018121b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018121e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181220 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 10181226 push 0x1018fe98 */
  push32((uint32_t)(0x1018fe98u));
  /* 1018122b push 0x101938f0 */
  push32((uint32_t)(0x101938f0u));
  /* 10181230 call eax */
  call_ind((uint32_t)(EAX), 0x10181232u);
  /* 10181232 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018123c je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 10181242 push 0x1018fe84 */
  push32((uint32_t)(0x1018fe84u));
  /* 10181247 push 0x10193938 */
  push32((uint32_t)(0x10193938u));
  /* 1018124c call eax */
  call_ind((uint32_t)(EAX), 0x1018124eu);
  /* 1018124e mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181258 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 1018125e push 0x1018fe70 */
  push32((uint32_t)(0x1018fe70u));
  /* 10181263 push 0x10193928 */
  push32((uint32_t)(0x10193928u));
  /* 10181268 call eax */
  call_ind((uint32_t)(EAX), 0x1018126au);
  /* 1018126a mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181274 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 1018127a push 0x1018fe5c */
  push32((uint32_t)(0x1018fe5cu));
  /* 1018127f push 0x10193920 */
  push32((uint32_t)(0x10193920u));
  /* 10181284 call eax */
  call_ind((uint32_t)(EAX), 0x10181286u);
  /* 10181286 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018128e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181290 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 10181296 push 0x1018fe48 */
  push32((uint32_t)(0x1018fe48u));
  /* 1018129b push 0x101936d8 */
  push32((uint32_t)(0x101936d8u));
  /* 101812a0 call eax */
  call_ind((uint32_t)(EAX), 0x101812a2u);
  /* 101812a2 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101812a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101812aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101812ac je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 101812ae push 0x1018fe34 */
  push32((uint32_t)(0x1018fe34u));
  /* 101812b3 push 0x101936c8 */
  push32((uint32_t)(0x101936c8u));
  /* 101812b8 call eax */
  call_ind((uint32_t)(EAX), 0x101812bau);
  /* 101812ba mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101812bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101812c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101812c4 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 101812c6 push 0x1018fe20 */
  push32((uint32_t)(0x1018fe20u));
  /* 101812cb push 0x101938c0 */
  push32((uint32_t)(0x101938c0u));
  /* 101812d0 call eax */
  call_ind((uint32_t)(EAX), 0x101812d2u);
  /* 101812d2 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101812d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101812da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101812dc je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 101812de push 0x1018fe0c */
  push32((uint32_t)(0x1018fe0cu));
  /* 101812e3 push 0x101938b8 */
  push32((uint32_t)(0x101938b8u));
  /* 101812e8 call eax */
  call_ind((uint32_t)(EAX), 0x101812eau);
  /* 101812ea mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101812ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101812f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101812f4 je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 101812f6 push 0x1018fdf8 */
  push32((uint32_t)(0x1018fdf8u));
  /* 101812fb push 0x101938b0 */
  push32((uint32_t)(0x101938b0u));
  /* 10181300 call eax */
  call_ind((uint32_t)(EAX), 0x10181302u);
  /* 10181302 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018130c je 0x10181322 */
  if (C.zf) goto L_10181322;
  /* 1018130e push 0x1018fde4 */
  push32((uint32_t)(0x1018fde4u));
  /* 10181313 push 0x101938a8 */
  push32((uint32_t)(0x101938a8u));
  /* 10181318 call eax */
  call_ind((uint32_t)(EAX), 0x1018131au);
  /* 1018131a mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10181322:;
  /* 10181322 mov ecx, dword ptr [0x101963f8] */
  ECX = (r32((uint32_t)(0x101963f8)));
  /* 10181328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1018132a je 0x10181340 */
  if (C.zf) goto L_10181340;
  /* 1018132c push 0x1018fdd4 */
  push32((uint32_t)(0x1018fdd4u));
  /* 10181331 push 0x10193680 */
  push32((uint32_t)(0x10193680u));
  /* 10181336 call ecx */
  call_ind((uint32_t)(ECX), 0x10181338u);
  /* 10181338 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018133d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10181340:;
  /* 10181340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181342 je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 10181348 push 0x1018fdc0 */
  push32((uint32_t)(0x1018fdc0u));
  /* 1018134d push 0x10193658 */
  push32((uint32_t)(0x10193658u));
  /* 10181352 call eax */
  call_ind((uint32_t)(EAX), 0x10181354u);
  /* 10181354 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018135c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018135e je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 10181364 push 0x1018fda8 */
  push32((uint32_t)(0x1018fda8u));
  /* 10181369 push 0x10193650 */
  push32((uint32_t)(0x10193650u));
  /* 1018136e call eax */
  call_ind((uint32_t)(EAX), 0x10181370u);
  /* 10181370 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018137a je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 10181380 push 0x1018fd90 */
  push32((uint32_t)(0x1018fd90u));
  /* 10181385 push 0x10193648 */
  push32((uint32_t)(0x10193648u));
  /* 1018138a call eax */
  call_ind((uint32_t)(EAX), 0x1018138cu);
  /* 1018138c mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181396 je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 1018139c push 0x1018fd78 */
  push32((uint32_t)(0x1018fd78u));
  /* 101813a1 push 0x10196318 */
  push32((uint32_t)(0x10196318u));
  /* 101813a6 call eax */
  call_ind((uint32_t)(EAX), 0x101813a8u);
  /* 101813a8 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101813ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101813b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101813b2 je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 101813b8 push 0x1018fd60 */
  push32((uint32_t)(0x1018fd60u));
  /* 101813bd push 0x10196310 */
  push32((uint32_t)(0x10196310u));
  /* 101813c2 call eax */
  call_ind((uint32_t)(EAX), 0x101813c4u);
  /* 101813c4 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101813c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101813cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101813ce je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 101813d4 push 0x1018fd48 */
  push32((uint32_t)(0x1018fd48u));
  /* 101813d9 push 0x10196308 */
  push32((uint32_t)(0x10196308u));
  /* 101813de call eax */
  call_ind((uint32_t)(EAX), 0x101813e0u);
  /* 101813e0 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101813e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101813e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101813ea je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 101813f0 push 0x1018fd34 */
  push32((uint32_t)(0x1018fd34u));
  /* 101813f5 push 0x10196390 */
  push32((uint32_t)(0x10196390u));
  /* 101813fa call eax */
  call_ind((uint32_t)(EAX), 0x101813fcu);
  /* 101813fc mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181406 je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 1018140c push 0x1018fd1c */
  push32((uint32_t)(0x1018fd1cu));
  /* 10181411 push 0x10196388 */
  push32((uint32_t)(0x10196388u));
  /* 10181416 call eax */
  call_ind((uint32_t)(EAX), 0x10181418u);
  /* 10181418 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018141d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181422 je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 10181428 push 0x1018fd04 */
  push32((uint32_t)(0x1018fd04u));
  /* 1018142d push 0x101963d8 */
  push32((uint32_t)(0x101963d8u));
  /* 10181432 call eax */
  call_ind((uint32_t)(EAX), 0x10181434u);
  /* 10181434 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018143c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018143e je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 10181444 push 0x1018fcec */
  push32((uint32_t)(0x1018fcecu));
  /* 10181449 push 0x101963d0 */
  push32((uint32_t)(0x101963d0u));
  /* 1018144e call eax */
  call_ind((uint32_t)(EAX), 0x10181450u);
  /* 10181450 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018145a je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 10181460 push 0x1018fcd4 */
  push32((uint32_t)(0x1018fcd4u));
  /* 10181465 push 0x101963c8 */
  push32((uint32_t)(0x101963c8u));
  /* 1018146a call eax */
  call_ind((uint32_t)(EAX), 0x1018146cu);
  /* 1018146c mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181476 je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 1018147c push 0x1018fcbc */
  push32((uint32_t)(0x1018fcbcu));
  /* 10181481 push 0x101963c0 */
  push32((uint32_t)(0x101963c0u));
  /* 10181486 call eax */
  call_ind((uint32_t)(EAX), 0x10181488u);
  /* 10181488 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018148d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181492 je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 10181498 push 0x1018fdc0 */
  push32((uint32_t)(0x1018fdc0u));
  /* 1018149d push 0x10193658 */
  push32((uint32_t)(0x10193658u));
  /* 101814a2 call eax */
  call_ind((uint32_t)(EAX), 0x101814a4u);
  /* 101814a4 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101814a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101814ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101814ae je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 101814b4 push 0x1018fda8 */
  push32((uint32_t)(0x1018fda8u));
  /* 101814b9 push 0x10193650 */
  push32((uint32_t)(0x10193650u));
  /* 101814be call eax */
  call_ind((uint32_t)(EAX), 0x101814c0u);
  /* 101814c0 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101814c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101814c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101814ca je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 101814d0 push 0x1018fd90 */
  push32((uint32_t)(0x1018fd90u));
  /* 101814d5 push 0x10193648 */
  push32((uint32_t)(0x10193648u));
  /* 101814da call eax */
  call_ind((uint32_t)(EAX), 0x101814dcu);
  /* 101814dc mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101814e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101814e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101814e6 je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 101814ec push 0x1018fd78 */
  push32((uint32_t)(0x1018fd78u));
  /* 101814f1 push 0x10196318 */
  push32((uint32_t)(0x10196318u));
  /* 101814f6 call eax */
  call_ind((uint32_t)(EAX), 0x101814f8u);
  /* 101814f8 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101814fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181502 je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 10181508 push 0x1018fd60 */
  push32((uint32_t)(0x1018fd60u));
  /* 1018150d push 0x10196310 */
  push32((uint32_t)(0x10196310u));
  /* 10181512 call eax */
  call_ind((uint32_t)(EAX), 0x10181514u);
  /* 10181514 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018151e je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 10181524 push 0x1018fd48 */
  push32((uint32_t)(0x1018fd48u));
  /* 10181529 push 0x10196308 */
  push32((uint32_t)(0x10196308u));
  /* 1018152e call eax */
  call_ind((uint32_t)(EAX), 0x10181530u);
  /* 10181530 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018153a je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 10181540 push 0x1018fd34 */
  push32((uint32_t)(0x1018fd34u));
  /* 10181545 push 0x10196390 */
  push32((uint32_t)(0x10196390u));
  /* 1018154a call eax */
  call_ind((uint32_t)(EAX), 0x1018154cu);
  /* 1018154c mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181556 je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 10181558 push 0x1018fd1c */
  push32((uint32_t)(0x1018fd1cu));
  /* 1018155d push 0x10196388 */
  push32((uint32_t)(0x10196388u));
  /* 10181562 call eax */
  call_ind((uint32_t)(EAX), 0x10181564u);
  /* 10181564 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018156c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018156e je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 10181570 push 0x1018fd04 */
  push32((uint32_t)(0x1018fd04u));
  /* 10181575 push 0x101963d8 */
  push32((uint32_t)(0x101963d8u));
  /* 1018157a call eax */
  call_ind((uint32_t)(EAX), 0x1018157cu);
  /* 1018157c mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181586 je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 10181588 push 0x1018fcec */
  push32((uint32_t)(0x1018fcecu));
  /* 1018158d push 0x101963d0 */
  push32((uint32_t)(0x101963d0u));
  /* 10181592 call eax */
  call_ind((uint32_t)(EAX), 0x10181594u);
  /* 10181594 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018159e je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 101815a0 push 0x1018fcd4 */
  push32((uint32_t)(0x1018fcd4u));
  /* 101815a5 push 0x101963c8 */
  push32((uint32_t)(0x101963c8u));
  /* 101815aa call eax */
  call_ind((uint32_t)(EAX), 0x101815acu);
  /* 101815ac mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101815b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101815b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101815b6 je 0x101815c7 */
  if (C.zf) goto L_101815c7;
  /* 101815b8 push 0x1018fcbc */
  push32((uint32_t)(0x1018fcbcu));
  /* 101815bd push 0x101963c0 */
  push32((uint32_t)(0x101963c0u));
  /* 101815c2 call eax */
  call_ind((uint32_t)(EAX), 0x101815c4u);
  /* 101815c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101815c7:;
  /* 101815c7 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101815cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101815ce je 0x101815df */
  if (C.zf) goto L_101815df;
  /* 101815d0 push 0x1018fca8 */
  push32((uint32_t)(0x1018fca8u));
  /* 101815d5 push 0x10195fe0 */
  push32((uint32_t)(0x10195fe0u));
  /* 101815da call eax */
  call_ind((uint32_t)(EAX), 0x101815dcu);
  /* 101815dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101815df:;
  /* 101815df call dword ptr [0x10196500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196500))), 0x101815e5u);
  /* 101815e5 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 101815e8 mov dword ptr [0x101962b4], eax */
  w32((uint32_t)(0x101962b4), (EAX));
  /* 101815ed lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101815f0 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101815f3 lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 101815f6 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 101815f9 mov dword ptr [eax + 0x10193af0], 0 */
  w32((uint32_t)(EAX + 0x10193af0), (0x0u));
  /* 10181603 mov dword ptr [eax + 0x10193c84], 0 */
  w32((uint32_t)(EAX + 0x10193c84), (0x0u));
  /* 1018160d call 0x101826c0 */
  push32(0x10181612u); f_101826c0();
  /* 10181612 mov edx, dword ptr [0x101962b4] */
  EDX = (r32((uint32_t)(0x101962b4)));
  /* 10181618 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1018161d mov dword ptr [edx*4 + 0x10195f98], eax */
  w32((uint32_t)(EDX*4 + 0x10195f98), (EAX));
  /* 10181624 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018162b je 0x1018163c */
  if (C.zf) goto L_1018163c;
  /* 1018162d push 0x1018fc8c */
  push32((uint32_t)(0x1018fc8cu));
  /* 10181632 push 0x101960d0 */
  push32((uint32_t)(0x101960d0u));
  /* 10181637 call eax */
  call_ind((uint32_t)(EAX), 0x10181639u);
  /* 10181639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018163c:;
  /* 1018163c mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181643 je 0x10181654 */
  if (C.zf) goto L_10181654;
  /* 10181645 push 0x1018fc78 */
  push32((uint32_t)(0x1018fc78u));
  /* 1018164a push 0x10193888 */
  push32((uint32_t)(0x10193888u));
  /* 1018164f call eax */
  call_ind((uint32_t)(EAX), 0x10181651u);
  /* 10181651 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10181654:;
  /* 10181654 push ebp */
  push32((uint32_t)(EBP));
  /* 10181655 push esi */
  push32((uint32_t)(ESI));
  /* 10181656 push edi */
  push32((uint32_t)(EDI));
  /* 10181657 call 0x101826c0 */
  push32(0x1018165cu); f_101826c0();
  /* 1018165c mov edx, eax */
  EDX = (EAX);
  /* 1018165e and eax, 6 */
  { uint32_t _r=(EAX)&(0x6u); EAX = (_r); fl_logic(_r,32); }
  /* 10181661 cmp al, 2 */
  { uint32_t _a=(AL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10181663 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 10181667 mov edi, 0x1018fed4 */
  EDI = (0x1018fed4u);
  /* 1018166c je 0x10181673 */
  if (C.zf) goto L_10181673;
  /* 1018166e mov edi, 0x1018fc68 */
  EDI = (0x1018fc68u);
L_10181673:;
  /* 10181673 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10181676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10181678 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1018167a not ecx */
  ECX = (~(ECX));
  /* 1018167c sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018167e and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 10181681 mov eax, ecx */
  EAX = (ECX);
  /* 10181683 mov esi, edi */
  ESI = (EDI);
  /* 10181685 mov edi, ebp */
  EDI = (EBP);
  /* 10181687 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1018168a rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1018168c mov ecx, eax */
  ECX = (EAX);
  /* 1018168e and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10181691 cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10181694 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 10181696 lea edx, [esp + 0x3c] */
  EDX = ((uint32_t)(ESP + 0x3c));
  /* 1018169a mov edi, 0x1018fc58 */
  EDI = (0x1018fc58u);
  /* 1018169f je 0x101816a6 */
  if (C.zf) goto L_101816a6;
  /* 101816a1 mov edi, 0x1018fc48 */
  EDI = (0x1018fc48u);
L_101816a6:;
  /* 101816a6 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101816a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101816ab repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 101816ad not ecx */
  ECX = (~(ECX));
  /* 101816af sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101816b1 mov eax, ecx */
  EAX = (ECX);
  /* 101816b3 mov esi, edi */
  ESI = (EDI);
  /* 101816b5 mov edi, edx */
  EDI = (EDX);
  /* 101816b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101816ba rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101816bc mov ecx, eax */
  ECX = (EAX);
  /* 101816be mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101816c3 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101816c6 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 101816c8 pop edi */
  EDI = (pop32());
  /* 101816c9 pop esi */
  ESI = (pop32());
  /* 101816ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101816cc pop ebp */
  EBP = (pop32());
  /* 101816cd je 0x10181713 */
  if (C.zf) goto L_10181713;
  /* 101816cf push 0x1018fc30 */
  push32((uint32_t)(0x1018fc30u));
  /* 101816d4 push 0x10196278 */
  push32((uint32_t)(0x10196278u));
  /* 101816d9 call eax */
  call_ind((uint32_t)(EAX), 0x101816dbu);
  /* 101816db mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101816e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101816e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101816e5 je 0x10181713 */
  if (C.zf) goto L_10181713;
  /* 101816e7 push 0x1018fc18 */
  push32((uint32_t)(0x1018fc18u));
  /* 101816ec push 0x10196328 */
  push32((uint32_t)(0x10196328u));
  /* 101816f1 call eax */
  call_ind((uint32_t)(EAX), 0x101816f3u);
  /* 101816f3 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101816f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101816fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101816fd je 0x10181713 */
  if (C.zf) goto L_10181713;
  /* 101816ff push 0x1018fc04 */
  push32((uint32_t)(0x1018fc04u));
  /* 10181704 push 0x10193700 */
  push32((uint32_t)(0x10193700u));
  /* 10181709 call eax */
  call_ind((uint32_t)(EAX), 0x1018170bu);
  /* 1018170b mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10181713:;
  /* 10181713 mov ecx, dword ptr [0x101963fc] */
  ECX = (r32((uint32_t)(0x101963fc)));
  /* 10181719 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1018171b je 0x10181749 */
  if (C.zf) goto L_10181749;
  /* 1018171d push 0x1018fbec */
  push32((uint32_t)(0x1018fbecu));
  /* 10181722 push 0x10196260 */
  push32((uint32_t)(0x10196260u));
  /* 10181727 call ecx */
  call_ind((uint32_t)(ECX), 0x10181729u);
  /* 10181729 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018172e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181731 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181733 je 0x10181744 */
  if (C.zf) goto L_10181744;
  /* 10181735 push 0x1018fbd4 */
  push32((uint32_t)(0x1018fbd4u));
  /* 1018173a push 0x10195fc8 */
  push32((uint32_t)(0x10195fc8u));
  /* 1018173f call eax */
  call_ind((uint32_t)(EAX), 0x10181741u);
  /* 10181741 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10181744:;
  /* 10181744 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
L_10181749:;
  /* 10181749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018174b je 0x1018175c */
  if (C.zf) goto L_1018175c;
  /* 1018174d push 0x1018fbc0 */
  push32((uint32_t)(0x1018fbc0u));
  /* 10181752 push 0x10193640 */
  push32((uint32_t)(0x10193640u));
  /* 10181757 call eax */
  call_ind((uint32_t)(EAX), 0x10181759u);
  /* 10181759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018175c:;
  /* 1018175c push 0x1018fbac */
  push32((uint32_t)(0x1018fbacu));
  /* 10181761 call 0x10182690 */
  push32(0x10181766u); f_10182690();
  /* 10181766 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 1018176b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018176e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181770 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 10181776 push 0x1018fbac */
  push32((uint32_t)(0x1018fbacu));
  /* 1018177b push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 10181780 call eax */
  call_ind((uint32_t)(EAX), 0x10181782u);
  /* 10181782 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181787 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018178a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018178c je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 10181792 push 0x1018fb94 */
  push32((uint32_t)(0x1018fb94u));
  /* 10181797 push 0x10196190 */
  push32((uint32_t)(0x10196190u));
  /* 1018179c call eax */
  call_ind((uint32_t)(EAX), 0x1018179eu);
  /* 1018179e mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101817a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101817a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101817a8 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 101817ae push 0x1018fb80 */
  push32((uint32_t)(0x1018fb80u));
  /* 101817b3 push 0x10196160 */
  push32((uint32_t)(0x10196160u));
  /* 101817b8 call eax */
  call_ind((uint32_t)(EAX), 0x101817bau);
  /* 101817ba mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101817bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101817c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101817c4 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 101817ca push 0x1018fb6c */
  push32((uint32_t)(0x1018fb6cu));
  /* 101817cf push 0x101960e0 */
  push32((uint32_t)(0x101960e0u));
  /* 101817d4 call eax */
  call_ind((uint32_t)(EAX), 0x101817d6u);
  /* 101817d6 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101817db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101817de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101817e0 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 101817e6 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 101817ea push ecx */
  push32((uint32_t)(ECX));
  /* 101817eb push 0x101963b0 */
  push32((uint32_t)(0x101963b0u));
  /* 101817f0 call eax */
  call_ind((uint32_t)(EAX), 0x101817f2u);
  /* 101817f2 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101817f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101817fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101817fc je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 10181802 push 0x1018fb60 */
  push32((uint32_t)(0x1018fb60u));
  /* 10181807 push 0x10196330 */
  push32((uint32_t)(0x10196330u));
  /* 1018180c call eax */
  call_ind((uint32_t)(EAX), 0x1018180eu);
  /* 1018180e mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181813 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181818 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 1018181e lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10181822 push edx */
  push32((uint32_t)(EDX));
  /* 10181823 push 0x10195f80 */
  push32((uint32_t)(0x10195f80u));
  /* 10181828 call eax */
  call_ind((uint32_t)(EAX), 0x1018182au);
  /* 1018182a mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 1018182f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181834 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 1018183a push 0x1018fb54 */
  push32((uint32_t)(0x1018fb54u));
  /* 1018183f push 0x10196370 */
  push32((uint32_t)(0x10196370u));
  /* 10181844 call eax */
  call_ind((uint32_t)(EAX), 0x10181846u);
  /* 10181846 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 1018184b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018184e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181850 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 10181856 push 0x1018fb48 */
  push32((uint32_t)(0x1018fb48u));
  /* 1018185b push 0x10193668 */
  push32((uint32_t)(0x10193668u));
  /* 10181860 call eax */
  call_ind((uint32_t)(EAX), 0x10181862u);
  /* 10181862 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018186a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018186c je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 10181872 push 0x1018fb38 */
  push32((uint32_t)(0x1018fb38u));
  /* 10181877 push 0x101938c8 */
  push32((uint32_t)(0x101938c8u));
  /* 1018187c call eax */
  call_ind((uint32_t)(EAX), 0x1018187eu);
  /* 1018187e mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181883 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181888 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 1018188e push 0x1018fb2c */
  push32((uint32_t)(0x1018fb2cu));
  /* 10181893 push 0x101961f0 */
  push32((uint32_t)(0x101961f0u));
  /* 10181898 call eax */
  call_ind((uint32_t)(EAX), 0x1018189au);
  /* 1018189a mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 1018189f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101818a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101818a4 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 101818aa push 0x1018fb18 */
  push32((uint32_t)(0x1018fb18u));
  /* 101818af push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 101818b4 call eax */
  call_ind((uint32_t)(EAX), 0x101818b6u);
  /* 101818b6 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101818bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101818be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101818c0 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 101818c6 push 0x1018fb0c */
  push32((uint32_t)(0x1018fb0cu));
  /* 101818cb push 0x10195fd8 */
  push32((uint32_t)(0x10195fd8u));
  /* 101818d0 call eax */
  call_ind((uint32_t)(EAX), 0x101818d2u);
  /* 101818d2 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101818d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101818da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101818dc je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 101818e2 push 0x1018faf8 */
  push32((uint32_t)(0x1018faf8u));
  /* 101818e7 push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 101818ec call eax */
  call_ind((uint32_t)(EAX), 0x101818eeu);
  /* 101818ee mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101818f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101818f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101818f8 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 101818fe push 0x1018fae8 */
  push32((uint32_t)(0x1018fae8u));
  /* 10181903 push 0x10196258 */
  push32((uint32_t)(0x10196258u));
  /* 10181908 call eax */
  call_ind((uint32_t)(EAX), 0x1018190au);
  /* 1018190a mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 1018190f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181912 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181914 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 1018191a push 0x1018fadc */
  push32((uint32_t)(0x1018fadcu));
  /* 1018191f push 0x10195fd0 */
  push32((uint32_t)(0x10195fd0u));
  /* 10181924 call eax */
  call_ind((uint32_t)(EAX), 0x10181926u);
  /* 10181926 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 1018192b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018192e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181930 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 10181936 push 0x1018facc */
  push32((uint32_t)(0x1018faccu));
  /* 1018193b push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 10181940 call eax */
  call_ind((uint32_t)(EAX), 0x10181942u);
  /* 10181942 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181947 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018194a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018194c je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 10181952 push 0x1018fab8 */
  push32((uint32_t)(0x1018fab8u));
  /* 10181957 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 1018195c call eax */
  call_ind((uint32_t)(EAX), 0x1018195eu);
  /* 1018195e mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181966 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181968 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 1018196e push 0x1018faa4 */
  push32((uint32_t)(0x1018faa4u));
  /* 10181973 push 0x10195fe8 */
  push32((uint32_t)(0x10195fe8u));
  /* 10181978 call eax */
  call_ind((uint32_t)(EAX), 0x1018197au);
  /* 1018197a mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 1018197f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181982 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181984 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 1018198a push 0x1018fa8c */
  push32((uint32_t)(0x1018fa8cu));
  /* 1018198f push 0x10193618 */
  push32((uint32_t)(0x10193618u));
  /* 10181994 call eax */
  call_ind((uint32_t)(EAX), 0x10181996u);
  /* 10181996 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 1018199b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018199e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101819a0 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 101819a6 push 0x1018fa80 */
  push32((uint32_t)(0x1018fa80u));
  /* 101819ab push 0x10193878 */
  push32((uint32_t)(0x10193878u));
  /* 101819b0 call eax */
  call_ind((uint32_t)(EAX), 0x101819b2u);
  /* 101819b2 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101819b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101819ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101819bc je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 101819c2 push 0x1018fa74 */
  push32((uint32_t)(0x1018fa74u));
  /* 101819c7 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 101819cc call eax */
  call_ind((uint32_t)(EAX), 0x101819ceu);
  /* 101819ce mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101819d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101819d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101819d8 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 101819de push 0x1018fa64 */
  push32((uint32_t)(0x1018fa64u));
  /* 101819e3 push 0x101961e8 */
  push32((uint32_t)(0x101961e8u));
  /* 101819e8 call eax */
  call_ind((uint32_t)(EAX), 0x101819eau);
  /* 101819ea mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 101819ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101819f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101819f4 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 101819fa push 0x1018fa54 */
  push32((uint32_t)(0x1018fa54u));
  /* 101819ff push 0x101960f8 */
  push32((uint32_t)(0x101960f8u));
  /* 10181a04 call eax */
  call_ind((uint32_t)(EAX), 0x10181a06u);
  /* 10181a06 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181a0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181a10 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 10181a16 push 0x1018fa48 */
  push32((uint32_t)(0x1018fa48u));
  /* 10181a1b push 0x101962d8 */
  push32((uint32_t)(0x101962d8u));
  /* 10181a20 call eax */
  call_ind((uint32_t)(EAX), 0x10181a22u);
  /* 10181a22 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181a27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181a2c je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 10181a2e push 0x1018fa3c */
  push32((uint32_t)(0x1018fa3cu));
  /* 10181a33 push 0x101938e8 */
  push32((uint32_t)(0x101938e8u));
  /* 10181a38 call eax */
  call_ind((uint32_t)(EAX), 0x10181a3au);
  /* 10181a3a mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181a3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181a44 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 10181a46 push 0x1018fa30 */
  push32((uint32_t)(0x1018fa30u));
  /* 10181a4b push 0x10195f90 */
  push32((uint32_t)(0x10195f90u));
  /* 10181a50 call eax */
  call_ind((uint32_t)(EAX), 0x10181a52u);
  /* 10181a52 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181a57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181a5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181a5c je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 10181a5e push 0x1018fa24 */
  push32((uint32_t)(0x1018fa24u));
  /* 10181a63 push 0x10196398 */
  push32((uint32_t)(0x10196398u));
  /* 10181a68 call eax */
  call_ind((uint32_t)(EAX), 0x10181a6au);
  /* 10181a6a mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181a6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181a72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181a74 je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 10181a76 push 0x1018fa18 */
  push32((uint32_t)(0x1018fa18u));
  /* 10181a7b push 0x10195f88 */
  push32((uint32_t)(0x10195f88u));
  /* 10181a80 call eax */
  call_ind((uint32_t)(EAX), 0x10181a82u);
  /* 10181a82 mov eax, dword ptr [0x101963f8] */
  EAX = (r32((uint32_t)(0x101963f8)));
  /* 10181a87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181a8c je 0x10181a9d */
  if (C.zf) goto L_10181a9d;
  /* 10181a8e push 0x1018fa08 */
  push32((uint32_t)(0x1018fa08u));
  /* 10181a93 push 0x101938a0 */
  push32((uint32_t)(0x101938a0u));
  /* 10181a98 call eax */
  call_ind((uint32_t)(EAX), 0x10181a9au);
  /* 10181a9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10181a9d:;
  /* 10181a9d mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181aa4 je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181aaa push 0x1018f9f4 */
  push32((uint32_t)(0x1018f9f4u));
  /* 10181aaf push 0x10196378 */
  push32((uint32_t)(0x10196378u));
  /* 10181ab4 call eax */
  call_ind((uint32_t)(EAX), 0x10181ab6u);
  /* 10181ab6 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181abb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181abe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181ac0 je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181ac6 push 0x1018f9e0 */
  push32((uint32_t)(0x1018f9e0u));
  /* 10181acb push 0x10196100 */
  push32((uint32_t)(0x10196100u));
  /* 10181ad0 call eax */
  call_ind((uint32_t)(EAX), 0x10181ad2u);
  /* 10181ad2 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181ad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181ada test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181adc je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181ae2 push 0x1018f9d8 */
  push32((uint32_t)(0x1018f9d8u));
  /* 10181ae7 push 0x10193660 */
  push32((uint32_t)(0x10193660u));
  /* 10181aec call eax */
  call_ind((uint32_t)(EAX), 0x10181aeeu);
  /* 10181aee mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181af3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181af6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181af8 je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181afe push 0x1018f9c0 */
  push32((uint32_t)(0x1018f9c0u));
  /* 10181b03 push 0x10196350 */
  push32((uint32_t)(0x10196350u));
  /* 10181b08 call eax */
  call_ind((uint32_t)(EAX), 0x10181b0au);
  /* 10181b0a mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181b0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181b12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181b14 je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181b1a push 0x1018f9a8 */
  push32((uint32_t)(0x1018f9a8u));
  /* 10181b1f push 0x10196358 */
  push32((uint32_t)(0x10196358u));
  /* 10181b24 call eax */
  call_ind((uint32_t)(EAX), 0x10181b26u);
  /* 10181b26 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181b2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181b2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181b30 je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181b36 push 0x1018f990 */
  push32((uint32_t)(0x1018f990u));
  /* 10181b3b push 0x10196340 */
  push32((uint32_t)(0x10196340u));
  /* 10181b40 call eax */
  call_ind((uint32_t)(EAX), 0x10181b42u);
  /* 10181b42 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181b47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181b4c je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181b52 push 0x1018f978 */
  push32((uint32_t)(0x1018f978u));
  /* 10181b57 push 0x10196348 */
  push32((uint32_t)(0x10196348u));
  /* 10181b5c call eax */
  call_ind((uint32_t)(EAX), 0x10181b5eu);
  /* 10181b5e mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181b63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181b66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181b68 je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181b6e push 0x1018f960 */
  push32((uint32_t)(0x1018f960u));
  /* 10181b73 push 0x10196360 */
  push32((uint32_t)(0x10196360u));
  /* 10181b78 call eax */
  call_ind((uint32_t)(EAX), 0x10181b7au);
  /* 10181b7a mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181b7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181b82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181b84 je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181b8a push 0x1018f948 */
  push32((uint32_t)(0x1018f948u));
  /* 10181b8f push 0x10196298 */
  push32((uint32_t)(0x10196298u));
  /* 10181b94 call eax */
  call_ind((uint32_t)(EAX), 0x10181b96u);
  /* 10181b96 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181b9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181b9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181ba0 je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181ba6 push 0x1018f930 */
  push32((uint32_t)(0x1018f930u));
  /* 10181bab push 0x10196280 */
  push32((uint32_t)(0x10196280u));
  /* 10181bb0 call eax */
  call_ind((uint32_t)(EAX), 0x10181bb2u);
  /* 10181bb2 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181bb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181bba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181bbc je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181bc2 push 0x1018f918 */
  push32((uint32_t)(0x1018f918u));
  /* 10181bc7 push 0x10196288 */
  push32((uint32_t)(0x10196288u));
  /* 10181bcc call eax */
  call_ind((uint32_t)(EAX), 0x10181bceu);
  /* 10181bce mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181bd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181bd8 je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181bde push 0x1018f900 */
  push32((uint32_t)(0x1018f900u));
  /* 10181be3 push 0x101962a0 */
  push32((uint32_t)(0x101962a0u));
  /* 10181be8 call eax */
  call_ind((uint32_t)(EAX), 0x10181beau);
  /* 10181bea mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181bef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181bf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181bf4 je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181bfa push 0x1018f8e8 */
  push32((uint32_t)(0x1018f8e8u));
  /* 10181bff push 0x101962a8 */
  push32((uint32_t)(0x101962a8u));
  /* 10181c04 call eax */
  call_ind((uint32_t)(EAX), 0x10181c06u);
  /* 10181c06 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181c0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181c0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181c10 je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181c16 push 0x1018f8d0 */
  push32((uint32_t)(0x1018f8d0u));
  /* 10181c1b push 0x10193910 */
  push32((uint32_t)(0x10193910u));
  /* 10181c20 call eax */
  call_ind((uint32_t)(EAX), 0x10181c22u);
  /* 10181c22 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181c27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181c2c je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181c2e push 0x1018f8b4 */
  push32((uint32_t)(0x1018f8b4u));
  /* 10181c33 push 0x10193918 */
  push32((uint32_t)(0x10193918u));
  /* 10181c38 call eax */
  call_ind((uint32_t)(EAX), 0x10181c3au);
  /* 10181c3a mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181c42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181c44 je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181c46 push 0x1018f898 */
  push32((uint32_t)(0x1018f898u));
  /* 10181c4b push 0x10193908 */
  push32((uint32_t)(0x10193908u));
  /* 10181c50 call eax */
  call_ind((uint32_t)(EAX), 0x10181c52u);
  /* 10181c52 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181c57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181c5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181c5c je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181c5e push 0x1018f880 */
  push32((uint32_t)(0x1018f880u));
  /* 10181c63 push 0x10195f78 */
  push32((uint32_t)(0x10195f78u));
  /* 10181c68 call eax */
  call_ind((uint32_t)(EAX), 0x10181c6au);
  /* 10181c6a mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181c6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181c72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181c74 je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181c76 push 0x1018f864 */
  push32((uint32_t)(0x1018f864u));
  /* 10181c7b push 0x10195f68 */
  push32((uint32_t)(0x10195f68u));
  /* 10181c80 call eax */
  call_ind((uint32_t)(EAX), 0x10181c82u);
  /* 10181c82 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181c87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181c8c je 0x10181c9d */
  if (C.zf) goto L_10181c9d;
  /* 10181c8e push 0x1018f848 */
  push32((uint32_t)(0x1018f848u));
  /* 10181c93 push 0x10195f70 */
  push32((uint32_t)(0x10195f70u));
  /* 10181c98 call eax */
  call_ind((uint32_t)(EAX), 0x10181c9au);
  /* 10181c9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10181c9d:;
  /* 10181c9d lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 10181ca1 push 0x1018f840 */
  push32((uint32_t)(0x1018f840u));
  /* 10181ca6 push eax */
  push32((uint32_t)(EAX));
  /* 10181ca7 call 0x10182f30 */
  push32(0x10181cacu); f_10182f30();
  /* 10181cac push eax */
  push32((uint32_t)(EAX));
  /* 10181cad push 0x10196018 */
  push32((uint32_t)(0x10196018u));
  /* 10181cb2 call 0x101826a0 */
  push32(0x10181cb7u); f_101826a0();
  /* 10181cb7 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 10181cbb push 0x1018f838 */
  push32((uint32_t)(0x1018f838u));
  /* 10181cc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10181cc1 call 0x10182f30 */
  push32(0x10181cc6u); f_10182f30();
  /* 10181cc6 push eax */
  push32((uint32_t)(EAX));
  /* 10181cc7 push 0x10196010 */
  push32((uint32_t)(0x10196010u));
  /* 10181ccc call 0x101826a0 */
  push32(0x10181cd1u); f_101826a0();
  /* 10181cd1 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 10181cd5 push 0x1018f830 */
  push32((uint32_t)(0x1018f830u));
  /* 10181cda push edx */
  push32((uint32_t)(EDX));
  /* 10181cdb call 0x10182f30 */
  push32(0x10181ce0u); f_10182f30();
  /* 10181ce0 push eax */
  push32((uint32_t)(EAX));
  /* 10181ce1 push 0x10196008 */
  push32((uint32_t)(0x10196008u));
  /* 10181ce6 call 0x101826a0 */
  push32(0x10181cebu); f_101826a0();
  /* 10181ceb lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10181cef push 0x1018f828 */
  push32((uint32_t)(0x1018f828u));
  /* 10181cf4 push eax */
  push32((uint32_t)(EAX));
  /* 10181cf5 call 0x10182f30 */
  push32(0x10181cfau); f_10182f30();
  /* 10181cfa push eax */
  push32((uint32_t)(EAX));
  /* 10181cfb push 0x10196000 */
  push32((uint32_t)(0x10196000u));
  /* 10181d00 call 0x101826a0 */
  push32(0x10181d05u); f_101826a0();
  /* 10181d05 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181d08 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 10181d0c push 0x1018f820 */
  push32((uint32_t)(0x1018f820u));
  /* 10181d11 push ecx */
  push32((uint32_t)(ECX));
  /* 10181d12 call 0x10182f30 */
  push32(0x10181d17u); f_10182f30();
  /* 10181d17 push eax */
  push32((uint32_t)(EAX));
  /* 10181d18 push 0x10195ff8 */
  push32((uint32_t)(0x10195ff8u));
  /* 10181d1d call 0x101826a0 */
  push32(0x10181d22u); f_101826a0();
  /* 10181d22 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 10181d26 push 0x1018f818 */
  push32((uint32_t)(0x1018f818u));
  /* 10181d2b push edx */
  push32((uint32_t)(EDX));
  /* 10181d2c call 0x10182f30 */
  push32(0x10181d31u); f_10182f30();
  /* 10181d31 push eax */
  push32((uint32_t)(EAX));
  /* 10181d32 push 0x10195ff0 */
  push32((uint32_t)(0x10195ff0u));
  /* 10181d37 call 0x101826a0 */
  push32(0x10181d3cu); f_101826a0();
  /* 10181d3c lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 10181d40 push 0x1018f810 */
  push32((uint32_t)(0x1018f810u));
  /* 10181d45 push eax */
  push32((uint32_t)(EAX));
  /* 10181d46 call 0x10182f30 */
  push32(0x10181d4bu); f_10182f30();
  /* 10181d4b push eax */
  push32((uint32_t)(EAX));
  /* 10181d4c push 0x10196130 */
  push32((uint32_t)(0x10196130u));
  /* 10181d51 call 0x101826a0 */
  push32(0x10181d56u); f_101826a0();
  /* 10181d56 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10181d5a push 0x1018f808 */
  push32((uint32_t)(0x1018f808u));
  /* 10181d5f push ecx */
  push32((uint32_t)(ECX));
  /* 10181d60 call 0x10182f30 */
  push32(0x10181d65u); f_10182f30();
  /* 10181d65 push eax */
  push32((uint32_t)(EAX));
  /* 10181d66 push 0x10196128 */
  push32((uint32_t)(0x10196128u));
  /* 10181d6b call 0x101826a0 */
  push32(0x10181d70u); f_101826a0();
  /* 10181d70 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181d73 lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 10181d77 push 0x1018f800 */
  push32((uint32_t)(0x1018f800u));
  /* 10181d7c push edx */
  push32((uint32_t)(EDX));
  /* 10181d7d call 0x10182f30 */
  push32(0x10181d82u); f_10182f30();
  /* 10181d82 push eax */
  push32((uint32_t)(EAX));
  /* 10181d83 push 0x10196120 */
  push32((uint32_t)(0x10196120u));
  /* 10181d88 call 0x101826a0 */
  push32(0x10181d8du); f_101826a0();
  /* 10181d8d lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 10181d91 push 0x1018f7f8 */
  push32((uint32_t)(0x1018f7f8u));
  /* 10181d96 push eax */
  push32((uint32_t)(EAX));
  /* 10181d97 call 0x10182f30 */
  push32(0x10181d9cu); f_10182f30();
  /* 10181d9c push eax */
  push32((uint32_t)(EAX));
  /* 10181d9d push 0x10196118 */
  push32((uint32_t)(0x10196118u));
  /* 10181da2 call 0x101826a0 */
  push32(0x10181da7u); f_101826a0();
  /* 10181da7 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 10181dab push 0x1018f7f0 */
  push32((uint32_t)(0x1018f7f0u));
  /* 10181db0 push ecx */
  push32((uint32_t)(ECX));
  /* 10181db1 call 0x10182f30 */
  push32(0x10181db6u); f_10182f30();
  /* 10181db6 push eax */
  push32((uint32_t)(EAX));
  /* 10181db7 push 0x10196108 */
  push32((uint32_t)(0x10196108u));
  /* 10181dbc call 0x101826a0 */
  push32(0x10181dc1u); f_101826a0();
  /* 10181dc1 push 0x1018f7e8 */
  push32((uint32_t)(0x1018f7e8u));
  /* 10181dc6 lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 10181dca push edx */
  push32((uint32_t)(EDX));
  /* 10181dcb call 0x10182f30 */
  push32(0x10181dd0u); f_10182f30();
  /* 10181dd0 push eax */
  push32((uint32_t)(EAX));
  /* 10181dd1 push 0x10196158 */
  push32((uint32_t)(0x10196158u));
  /* 10181dd6 call 0x101826a0 */
  push32(0x10181ddbu); f_101826a0();
  /* 10181ddb mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181de0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181de3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181de5 je 0x10181f1a */
  if (C.zf) goto L_10181f1a;
  /* 10181deb push 0x1018f7d4 */
  push32((uint32_t)(0x1018f7d4u));
  /* 10181df0 push 0x101936b8 */
  push32((uint32_t)(0x101936b8u));
  /* 10181df5 call eax */
  call_ind((uint32_t)(EAX), 0x10181df7u);
  /* 10181df7 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181dfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181dff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181e01 je 0x10181f1a */
  if (C.zf) goto L_10181f1a;
  /* 10181e07 push 0x1018f7c0 */
  push32((uint32_t)(0x1018f7c0u));
  /* 10181e0c push 0x101936b0 */
  push32((uint32_t)(0x101936b0u));
  /* 10181e11 call eax */
  call_ind((uint32_t)(EAX), 0x10181e13u);
  /* 10181e13 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181e18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181e1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181e1d je 0x10181f1a */
  if (C.zf) goto L_10181f1a;
  /* 10181e23 push 0x1018f7ac */
  push32((uint32_t)(0x1018f7acu));
  /* 10181e28 push 0x101936a8 */
  push32((uint32_t)(0x101936a8u));
  /* 10181e2d call eax */
  call_ind((uint32_t)(EAX), 0x10181e2fu);
  /* 10181e2f mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181e34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181e37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181e39 je 0x10181f1a */
  if (C.zf) goto L_10181f1a;
  /* 10181e3f push 0x1018f798 */
  push32((uint32_t)(0x1018f798u));
  /* 10181e44 push 0x101936a0 */
  push32((uint32_t)(0x101936a0u));
  /* 10181e49 call eax */
  call_ind((uint32_t)(EAX), 0x10181e4bu);
  /* 10181e4b mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181e50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181e53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181e55 je 0x10181f1a */
  if (C.zf) goto L_10181f1a;
  /* 10181e5b push 0x1018f784 */
  push32((uint32_t)(0x1018f784u));
  /* 10181e60 push 0x10193678 */
  push32((uint32_t)(0x10193678u));
  /* 10181e65 call eax */
  call_ind((uint32_t)(EAX), 0x10181e67u);
  /* 10181e67 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181e6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181e6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181e71 je 0x10181f1a */
  if (C.zf) goto L_10181f1a;
  /* 10181e77 push 0x1018f770 */
  push32((uint32_t)(0x1018f770u));
  /* 10181e7c push 0x10193670 */
  push32((uint32_t)(0x10193670u));
  /* 10181e81 call eax */
  call_ind((uint32_t)(EAX), 0x10181e83u);
  /* 10181e83 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181e88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181e8d je 0x10181f1a */
  if (C.zf) goto L_10181f1a;
  /* 10181e93 push 0x1018f75c */
  push32((uint32_t)(0x1018f75cu));
  /* 10181e98 push 0x10193748 */
  push32((uint32_t)(0x10193748u));
  /* 10181e9d call eax */
  call_ind((uint32_t)(EAX), 0x10181e9fu);
  /* 10181e9f mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181ea4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181ea7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181ea9 je 0x10181f1a */
  if (C.zf) goto L_10181f1a;
  /* 10181eab push 0x1018f748 */
  push32((uint32_t)(0x1018f748u));
  /* 10181eb0 push 0x10193740 */
  push32((uint32_t)(0x10193740u));
  /* 10181eb5 call eax */
  call_ind((uint32_t)(EAX), 0x10181eb7u);
  /* 10181eb7 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181ebc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181ebf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181ec1 je 0x10181f1a */
  if (C.zf) goto L_10181f1a;
  /* 10181ec3 push 0x1018f734 */
  push32((uint32_t)(0x1018f734u));
  /* 10181ec8 push 0x10193738 */
  push32((uint32_t)(0x10193738u));
  /* 10181ecd call eax */
  call_ind((uint32_t)(EAX), 0x10181ecfu);
  /* 10181ecf mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181ed4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181ed7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181ed9 je 0x10181f1a */
  if (C.zf) goto L_10181f1a;
  /* 10181edb push 0x1018f720 */
  push32((uint32_t)(0x1018f720u));
  /* 10181ee0 push 0x10193720 */
  push32((uint32_t)(0x10193720u));
  /* 10181ee5 call eax */
  call_ind((uint32_t)(EAX), 0x10181ee7u);
  /* 10181ee7 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181eec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181eef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181ef1 je 0x10181f1a */
  if (C.zf) goto L_10181f1a;
  /* 10181ef3 push 0x1018f70c */
  push32((uint32_t)(0x1018f70cu));
  /* 10181ef8 push 0x10193718 */
  push32((uint32_t)(0x10193718u));
  /* 10181efd call eax */
  call_ind((uint32_t)(EAX), 0x10181effu);
  /* 10181eff mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10181f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181f07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10181f09 je 0x10181f1a */
  if (C.zf) goto L_10181f1a;
  /* 10181f0b push 0x1018f6f8 */
  push32((uint32_t)(0x1018f6f8u));
  /* 10181f10 push 0x10193710 */
  push32((uint32_t)(0x10193710u));
  /* 10181f15 call eax */
  call_ind((uint32_t)(EAX), 0x10181f17u);
  /* 10181f17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10181f1a:;
  /* 10181f1a lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10181f1e push 0x1018f840 */
  push32((uint32_t)(0x1018f840u));
  /* 10181f23 push eax */
  push32((uint32_t)(EAX));
  /* 10181f24 call 0x10182f30 */
  push32(0x10181f29u); f_10182f30();
  /* 10181f29 push eax */
  push32((uint32_t)(EAX));
  /* 10181f2a push 0x101936e0 */
  push32((uint32_t)(0x101936e0u));
  /* 10181f2f call 0x101826a0 */
  push32(0x10181f34u); f_101826a0();
  /* 10181f34 lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 10181f38 push 0x1018f838 */
  push32((uint32_t)(0x1018f838u));
  /* 10181f3d push ecx */
  push32((uint32_t)(ECX));
  /* 10181f3e call 0x10182f30 */
  push32(0x10181f43u); f_10182f30();
  /* 10181f43 push eax */
  push32((uint32_t)(EAX));
  /* 10181f44 push 0x101936e8 */
  push32((uint32_t)(0x101936e8u));
  /* 10181f49 call 0x101826a0 */
  push32(0x10181f4eu); f_101826a0();
  /* 10181f4e lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 10181f52 push 0x1018f830 */
  push32((uint32_t)(0x1018f830u));
  /* 10181f57 push edx */
  push32((uint32_t)(EDX));
  /* 10181f58 call 0x10182f30 */
  push32(0x10181f5du); f_10182f30();
  /* 10181f5d push eax */
  push32((uint32_t)(EAX));
  /* 10181f5e push 0x101936f0 */
  push32((uint32_t)(0x101936f0u));
  /* 10181f63 call 0x101826a0 */
  push32(0x10181f68u); f_101826a0();
  /* 10181f68 lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 10181f6c push 0x1018f828 */
  push32((uint32_t)(0x1018f828u));
  /* 10181f71 push eax */
  push32((uint32_t)(EAX));
  /* 10181f72 call 0x10182f30 */
  push32(0x10181f77u); f_10182f30();
  /* 10181f77 push eax */
  push32((uint32_t)(EAX));
  /* 10181f78 push 0x101936f8 */
  push32((uint32_t)(0x101936f8u));
  /* 10181f7d call 0x101826a0 */
  push32(0x10181f82u); f_101826a0();
  /* 10181f82 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181f85 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10181f89 push 0x1018f820 */
  push32((uint32_t)(0x1018f820u));
  /* 10181f8e push ecx */
  push32((uint32_t)(ECX));
  /* 10181f8f call 0x10182f30 */
  push32(0x10181f94u); f_10182f30();
  /* 10181f94 push eax */
  push32((uint32_t)(EAX));
  /* 10181f95 push 0x101936c0 */
  push32((uint32_t)(0x101936c0u));
  /* 10181f9a call 0x101826a0 */
  push32(0x10181f9fu); f_101826a0();
  /* 10181f9f lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 10181fa3 push 0x1018f818 */
  push32((uint32_t)(0x1018f818u));
  /* 10181fa8 push edx */
  push32((uint32_t)(EDX));
  /* 10181fa9 call 0x10182f30 */
  push32(0x10181faeu); f_10182f30();
  /* 10181fae push eax */
  push32((uint32_t)(EAX));
  /* 10181faf push 0x101936d0 */
  push32((uint32_t)(0x101936d0u));
  /* 10181fb4 call 0x101826a0 */
  push32(0x10181fb9u); f_101826a0();
  /* 10181fb9 lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 10181fbd push 0x1018f810 */
  push32((uint32_t)(0x1018f810u));
  /* 10181fc2 push eax */
  push32((uint32_t)(EAX));
  /* 10181fc3 call 0x10182f30 */
  push32(0x10181fc8u); f_10182f30();
  /* 10181fc8 push eax */
  push32((uint32_t)(EAX));
  /* 10181fc9 push 0x10193788 */
  push32((uint32_t)(0x10193788u));
  /* 10181fce call 0x101826a0 */
  push32(0x10181fd3u); f_101826a0();
  /* 10181fd3 lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 10181fd7 push 0x1018f808 */
  push32((uint32_t)(0x1018f808u));
  /* 10181fdc push ecx */
  push32((uint32_t)(ECX));
  /* 10181fdd call 0x10182f30 */
  push32(0x10181fe2u); f_10182f30();
  /* 10181fe2 push eax */
  push32((uint32_t)(EAX));
  /* 10181fe3 push 0x10193790 */
  push32((uint32_t)(0x10193790u));
  /* 10181fe8 call 0x101826a0 */
  push32(0x10181fedu); f_101826a0();
  /* 10181fed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10181ff0 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10181ff4 push 0x1018f800 */
  push32((uint32_t)(0x1018f800u));
  /* 10181ff9 push edx */
  push32((uint32_t)(EDX));
  /* 10181ffa call 0x10182f30 */
  push32(0x10181fffu); f_10182f30();
  /* 10181fff push eax */
  push32((uint32_t)(EAX));
  /* 10182000 push 0x10193798 */
  push32((uint32_t)(0x10193798u));
  /* 10182005 call 0x101826a0 */
  push32(0x1018200au); f_101826a0();
  /* 1018200a lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 1018200e push 0x1018f7f8 */
  push32((uint32_t)(0x1018f7f8u));
  /* 10182013 push eax */
  push32((uint32_t)(EAX));
  /* 10182014 call 0x10182f30 */
  push32(0x10182019u); f_10182f30();
  /* 10182019 push eax */
  push32((uint32_t)(EAX));
  /* 1018201a push 0x10193770 */
  push32((uint32_t)(0x10193770u));
  /* 1018201f call 0x101826a0 */
  push32(0x10182024u); f_101826a0();
  /* 10182024 lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 10182028 push 0x1018f7f0 */
  push32((uint32_t)(0x1018f7f0u));
  /* 1018202d push ecx */
  push32((uint32_t)(ECX));
  /* 1018202e call 0x10182f30 */
  push32(0x10182033u); f_10182f30();
  /* 10182033 push eax */
  push32((uint32_t)(EAX));
  /* 10182034 push 0x10193778 */
  push32((uint32_t)(0x10193778u));
  /* 10182039 call 0x101826a0 */
  push32(0x1018203eu); f_101826a0();
  /* 1018203e push 0x1018f7e8 */
  push32((uint32_t)(0x1018f7e8u));
  /* 10182043 lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 10182047 push edx */
  push32((uint32_t)(EDX));
  /* 10182048 call 0x10182f30 */
  push32(0x1018204du); f_10182f30();
  /* 1018204d push eax */
  push32((uint32_t)(EAX));
  /* 1018204e push 0x10193780 */
  push32((uint32_t)(0x10193780u));
  /* 10182053 call 0x101826a0 */
  push32(0x10182058u); f_101826a0();
  /* 10182058 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018205d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182062 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182068 push 0x1018f6e8 */
  push32((uint32_t)(0x1018f6e8u));
  /* 1018206d push 0x101961d8 */
  push32((uint32_t)(0x101961d8u));
  /* 10182072 call eax */
  call_ind((uint32_t)(EAX), 0x10182074u);
  /* 10182074 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018207c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018207e je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182084 push 0x1018f6d4 */
  push32((uint32_t)(0x1018f6d4u));
  /* 10182089 push 0x101961d0 */
  push32((uint32_t)(0x101961d0u));
  /* 1018208e call eax */
  call_ind((uint32_t)(EAX), 0x10182090u);
  /* 10182090 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182095 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018209a je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101820a0 push 0x1018f6c0 */
  push32((uint32_t)(0x1018f6c0u));
  /* 101820a5 push 0x101961a0 */
  push32((uint32_t)(0x101961a0u));
  /* 101820aa call eax */
  call_ind((uint32_t)(EAX), 0x101820acu);
  /* 101820ac mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101820b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101820b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101820b6 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101820bc push 0x1018f6ac */
  push32((uint32_t)(0x1018f6acu));
  /* 101820c1 push 0x10196198 */
  push32((uint32_t)(0x10196198u));
  /* 101820c6 call eax */
  call_ind((uint32_t)(EAX), 0x101820c8u);
  /* 101820c8 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101820cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101820d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101820d2 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101820d8 push 0x1018f698 */
  push32((uint32_t)(0x1018f698u));
  /* 101820dd push 0x101961a8 */
  push32((uint32_t)(0x101961a8u));
  /* 101820e2 call eax */
  call_ind((uint32_t)(EAX), 0x101820e4u);
  /* 101820e4 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101820e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101820ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101820ee je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101820f4 push 0x1018f684 */
  push32((uint32_t)(0x1018f684u));
  /* 101820f9 push 0x10196098 */
  push32((uint32_t)(0x10196098u));
  /* 101820fe call eax */
  call_ind((uint32_t)(EAX), 0x10182100u);
  /* 10182100 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018210a je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182110 push 0x1018f670 */
  push32((uint32_t)(0x1018f670u));
  /* 10182115 push 0x101960a0 */
  push32((uint32_t)(0x101960a0u));
  /* 1018211a call eax */
  call_ind((uint32_t)(EAX), 0x1018211cu);
  /* 1018211c mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182126 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 1018212c push 0x1018f65c */
  push32((uint32_t)(0x1018f65cu));
  /* 10182131 push 0x101960a8 */
  push32((uint32_t)(0x101960a8u));
  /* 10182136 call eax */
  call_ind((uint32_t)(EAX), 0x10182138u);
  /* 10182138 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018213d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182142 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182148 push 0x1018f648 */
  push32((uint32_t)(0x1018f648u));
  /* 1018214d push 0x101960b0 */
  push32((uint32_t)(0x101960b0u));
  /* 10182152 call eax */
  call_ind((uint32_t)(EAX), 0x10182154u);
  /* 10182154 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182159 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018215c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018215e je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182164 push 0x1018f640 */
  push32((uint32_t)(0x1018f640u));
  /* 10182169 push 0x101961b8 */
  push32((uint32_t)(0x101961b8u));
  /* 1018216e call eax */
  call_ind((uint32_t)(EAX), 0x10182170u);
  /* 10182170 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182175 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182178 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018217a je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182180 push 0x1018f638 */
  push32((uint32_t)(0x1018f638u));
  /* 10182185 push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 1018218a call eax */
  call_ind((uint32_t)(EAX), 0x1018218cu);
  /* 1018218c mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182194 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182196 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 1018219c push 0x1018f630 */
  push32((uint32_t)(0x1018f630u));
  /* 101821a1 push 0x10193958 */
  push32((uint32_t)(0x10193958u));
  /* 101821a6 call eax */
  call_ind((uint32_t)(EAX), 0x101821a8u);
  /* 101821a8 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101821ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101821b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101821b2 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101821b8 push 0x1018f628 */
  push32((uint32_t)(0x1018f628u));
  /* 101821bd push 0x10196078 */
  push32((uint32_t)(0x10196078u));
  /* 101821c2 call eax */
  call_ind((uint32_t)(EAX), 0x101821c4u);
  /* 101821c4 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101821c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101821cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101821ce je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101821d4 push 0x1018f620 */
  push32((uint32_t)(0x1018f620u));
  /* 101821d9 push 0x10196030 */
  push32((uint32_t)(0x10196030u));
  /* 101821de call eax */
  call_ind((uint32_t)(EAX), 0x101821e0u);
  /* 101821e0 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101821e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101821e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101821ea je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101821f0 push 0x1018f618 */
  push32((uint32_t)(0x1018f618u));
  /* 101821f5 push 0x10196038 */
  push32((uint32_t)(0x10196038u));
  /* 101821fa call eax */
  call_ind((uint32_t)(EAX), 0x101821fcu);
  /* 101821fc mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182206 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 1018220c push 0x1018f610 */
  push32((uint32_t)(0x1018f610u));
  /* 10182211 push 0x10196040 */
  push32((uint32_t)(0x10196040u));
  /* 10182216 call eax */
  call_ind((uint32_t)(EAX), 0x10182218u);
  /* 10182218 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018221d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182220 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182222 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182228 push 0x1018f608 */
  push32((uint32_t)(0x1018f608u));
  /* 1018222d push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 10182232 call eax */
  call_ind((uint32_t)(EAX), 0x10182234u);
  /* 10182234 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018223c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018223e je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182244 push 0x1018f600 */
  push32((uint32_t)(0x1018f600u));
  /* 10182249 push 0x10196110 */
  push32((uint32_t)(0x10196110u));
  /* 1018224e call eax */
  call_ind((uint32_t)(EAX), 0x10182250u);
  /* 10182250 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182258 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018225a je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182260 push 0x1018f5f8 */
  push32((uint32_t)(0x1018f5f8u));
  /* 10182265 push 0x10196150 */
  push32((uint32_t)(0x10196150u));
  /* 1018226a call eax */
  call_ind((uint32_t)(EAX), 0x1018226cu);
  /* 1018226c mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182274 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182276 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 1018227c push 0x1018f5f0 */
  push32((uint32_t)(0x1018f5f0u));
  /* 10182281 push 0x10196208 */
  push32((uint32_t)(0x10196208u));
  /* 10182286 call eax */
  call_ind((uint32_t)(EAX), 0x10182288u);
  /* 10182288 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018228d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182290 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182292 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182298 push 0x1018f5e8 */
  push32((uint32_t)(0x1018f5e8u));
  /* 1018229d push 0x10196210 */
  push32((uint32_t)(0x10196210u));
  /* 101822a2 call eax */
  call_ind((uint32_t)(EAX), 0x101822a4u);
  /* 101822a4 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101822a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101822ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101822ae je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101822b4 push 0x1018f5e0 */
  push32((uint32_t)(0x1018f5e0u));
  /* 101822b9 push 0x10196168 */
  push32((uint32_t)(0x10196168u));
  /* 101822be call eax */
  call_ind((uint32_t)(EAX), 0x101822c0u);
  /* 101822c0 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101822c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101822c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101822ca je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101822d0 push 0x1018f5d8 */
  push32((uint32_t)(0x1018f5d8u));
  /* 101822d5 push 0x10196178 */
  push32((uint32_t)(0x10196178u));
  /* 101822da call eax */
  call_ind((uint32_t)(EAX), 0x101822dcu);
  /* 101822dc mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101822e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101822e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101822e6 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101822ec push 0x1018f5d0 */
  push32((uint32_t)(0x1018f5d0u));
  /* 101822f1 push 0x10196180 */
  push32((uint32_t)(0x10196180u));
  /* 101822f6 call eax */
  call_ind((uint32_t)(EAX), 0x101822f8u);
  /* 101822f8 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101822fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182300 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182302 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182308 push 0x1018f5c8 */
  push32((uint32_t)(0x1018f5c8u));
  /* 1018230d push 0x10196170 */
  push32((uint32_t)(0x10196170u));
  /* 10182312 call eax */
  call_ind((uint32_t)(EAX), 0x10182314u);
  /* 10182314 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018231c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018231e je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182324 push 0x1018f5c0 */
  push32((uint32_t)(0x1018f5c0u));
  /* 10182329 push 0x10193950 */
  push32((uint32_t)(0x10193950u));
  /* 1018232e call eax */
  call_ind((uint32_t)(EAX), 0x10182330u);
  /* 10182330 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018233a je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182340 push 0x1018f5b8 */
  push32((uint32_t)(0x1018f5b8u));
  /* 10182345 push 0x101938e0 */
  push32((uint32_t)(0x101938e0u));
  /* 1018234a call eax */
  call_ind((uint32_t)(EAX), 0x1018234cu);
  /* 1018234c mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182354 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182356 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 1018235c push 0x1018f5b0 */
  push32((uint32_t)(0x1018f5b0u));
  /* 10182361 push 0x101937a0 */
  push32((uint32_t)(0x101937a0u));
  /* 10182366 call eax */
  call_ind((uint32_t)(EAX), 0x10182368u);
  /* 10182368 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018236d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182372 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182378 push 0x1018f5a8 */
  push32((uint32_t)(0x1018f5a8u));
  /* 1018237d push 0x101960f0 */
  push32((uint32_t)(0x101960f0u));
  /* 10182382 call eax */
  call_ind((uint32_t)(EAX), 0x10182384u);
  /* 10182384 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018238c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018238e je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182394 push 0x1018f5a0 */
  push32((uint32_t)(0x1018f5a0u));
  /* 10182399 push 0x10193940 */
  push32((uint32_t)(0x10193940u));
  /* 1018239e call eax */
  call_ind((uint32_t)(EAX), 0x101823a0u);
  /* 101823a0 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101823a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101823a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101823aa je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101823b0 push 0x1018f598 */
  push32((uint32_t)(0x1018f598u));
  /* 101823b5 push 0x101961f8 */
  push32((uint32_t)(0x101961f8u));
  /* 101823ba call eax */
  call_ind((uint32_t)(EAX), 0x101823bcu);
  /* 101823bc mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101823c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101823c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101823c6 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101823cc push 0x1018f590 */
  push32((uint32_t)(0x1018f590u));
  /* 101823d1 push 0x10196200 */
  push32((uint32_t)(0x10196200u));
  /* 101823d6 call eax */
  call_ind((uint32_t)(EAX), 0x101823d8u);
  /* 101823d8 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101823dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101823e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101823e2 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101823e8 push 0x1018f588 */
  push32((uint32_t)(0x1018f588u));
  /* 101823ed push 0x10193870 */
  push32((uint32_t)(0x10193870u));
  /* 101823f2 call eax */
  call_ind((uint32_t)(EAX), 0x101823f4u);
  /* 101823f4 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101823f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101823fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101823fe je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182404 push 0x1018f580 */
  push32((uint32_t)(0x1018f580u));
  /* 10182409 push 0x10193880 */
  push32((uint32_t)(0x10193880u));
  /* 1018240e call eax */
  call_ind((uint32_t)(EAX), 0x10182410u);
  /* 10182410 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018241a je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182420 push 0x1018f578 */
  push32((uint32_t)(0x1018f578u));
  /* 10182425 push 0x10193768 */
  push32((uint32_t)(0x10193768u));
  /* 1018242a call eax */
  call_ind((uint32_t)(EAX), 0x1018242cu);
  /* 1018242c mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182436 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 1018243c push 0x1018f570 */
  push32((uint32_t)(0x1018f570u));
  /* 10182441 push 0x10193628 */
  push32((uint32_t)(0x10193628u));
  /* 10182446 call eax */
  call_ind((uint32_t)(EAX), 0x10182448u);
  /* 10182448 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 1018244d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182450 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182452 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182458 push 0x1018f568 */
  push32((uint32_t)(0x1018f568u));
  /* 1018245d push 0x10193708 */
  push32((uint32_t)(0x10193708u));
  /* 10182462 call eax */
  call_ind((uint32_t)(EAX), 0x10182464u);
  /* 10182464 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182469 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018246c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018246e je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182474 push 0x1018f560 */
  push32((uint32_t)(0x1018f560u));
  /* 10182479 push 0x10193630 */
  push32((uint32_t)(0x10193630u));
  /* 1018247e call eax */
  call_ind((uint32_t)(EAX), 0x10182480u);
  /* 10182480 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182488 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018248a je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182490 push 0x1018f54c */
  push32((uint32_t)(0x1018f54cu));
  /* 10182495 push 0x101962e8 */
  push32((uint32_t)(0x101962e8u));
  /* 1018249a call eax */
  call_ind((uint32_t)(EAX), 0x1018249cu);
  /* 1018249c mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101824a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101824a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101824a6 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101824a8 push 0x1018f538 */
  push32((uint32_t)(0x1018f538u));
  /* 101824ad push 0x101962d0 */
  push32((uint32_t)(0x101962d0u));
  /* 101824b2 call eax */
  call_ind((uint32_t)(EAX), 0x101824b4u);
  /* 101824b4 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101824b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101824bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101824be je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101824c0 push 0x1018f524 */
  push32((uint32_t)(0x1018f524u));
  /* 101824c5 push 0x101962e0 */
  push32((uint32_t)(0x101962e0u));
  /* 101824ca call eax */
  call_ind((uint32_t)(EAX), 0x101824ccu);
  /* 101824cc mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101824d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101824d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101824d6 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101824d8 push 0x1018f510 */
  push32((uint32_t)(0x1018f510u));
  /* 101824dd push 0x101962c0 */
  push32((uint32_t)(0x101962c0u));
  /* 101824e2 call eax */
  call_ind((uint32_t)(EAX), 0x101824e4u);
  /* 101824e4 mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 101824e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101824ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101824ee je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 101824f0 push 0x1018f4fc */
  push32((uint32_t)(0x1018f4fcu));
  /* 101824f5 push 0x101962c8 */
  push32((uint32_t)(0x101962c8u));
  /* 101824fa call eax */
  call_ind((uint32_t)(EAX), 0x101824fcu);
  /* 101824fc mov eax, dword ptr [0x101963fc] */
  EAX = (r32((uint32_t)(0x101963fc)));
  /* 10182501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182504 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182506 je 0x10182517 */
  if (C.zf) goto L_10182517;
  /* 10182508 push 0x1018f4e8 */
  push32((uint32_t)(0x1018f4e8u));
  /* 1018250d push 0x101962b8 */
  push32((uint32_t)(0x101962b8u));
  /* 10182512 call eax */
  call_ind((uint32_t)(EAX), 0x10182514u);
  /* 10182514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10182517:;
  /* 10182517 push 4 */
  push32((uint32_t)(0x4u));
  /* 10182519 push 4 */
  push32((uint32_t)(0x4u));
  /* 1018251b push 9 */
  push32((uint32_t)(0x9u));
  /* 1018251d call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x10182523u);
  /* 10182523 push 6 */
  push32((uint32_t)(0x6u));
  /* 10182525 call dword ptr [0x10196520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196520))), 0x1018252bu);
  /* 1018252b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018252d push 0x1018f4d4 */
  push32((uint32_t)(0x1018f4d4u));
  /* 10182532 push 0 */
  push32((uint32_t)(0x0u));
  /* 10182534 call dword ptr [0x10196524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196524))), 0x1018253au);
  /* 1018253a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018253c push 0x1018f4c0 */
  push32((uint32_t)(0x1018f4c0u));
  /* 10182541 push 1 */
  push32((uint32_t)(0x1u));
  /* 10182543 call dword ptr [0x10196524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196524))), 0x10182549u);
  /* 10182549 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018254b push 0x1018f4ac */
  push32((uint32_t)(0x1018f4acu));
  /* 10182550 push 2 */
  push32((uint32_t)(0x2u));
  /* 10182552 call dword ptr [0x10196524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196524))), 0x10182558u);
  /* 10182558 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018255a push 0x1018f498 */
  push32((uint32_t)(0x1018f498u));
  /* 1018255f push 3 */
  push32((uint32_t)(0x3u));
  /* 10182561 call dword ptr [0x10196524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196524))), 0x10182567u);
  /* 10182567 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018256a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018256c push 0x1018f484 */
  push32((uint32_t)(0x1018f484u));
  /* 10182571 push 4 */
  push32((uint32_t)(0x4u));
  /* 10182573 call dword ptr [0x10196524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196524))), 0x10182579u);
  /* 10182579 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018257b push 0x1018f470 */
  push32((uint32_t)(0x1018f470u));
  /* 10182580 push 5 */
  push32((uint32_t)(0x5u));
  /* 10182582 call dword ptr [0x10196524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196524))), 0x10182588u);
  /* 10182588 push 0x1018fb94 */
  push32((uint32_t)(0x1018fb94u));
  /* 1018258d call dword ptr [0x10196560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196560))), 0x10182593u);
  /* 10182593 push 0x1018f464 */
  push32((uint32_t)(0x1018f464u));
  /* 10182598 call dword ptr [0x1019655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019655c))), 0x1018259eu);
  /* 1018259e push 0x1018f454 */
  push32((uint32_t)(0x1018f454u));
  /* 101825a3 call dword ptr [0x10196564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196564))), 0x101825a9u);
  /* 101825a9 push 0x1018f448 */
  push32((uint32_t)(0x1018f448u));
  /* 101825ae call dword ptr [0x1019656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019656c))), 0x101825b4u);
  /* 101825b4 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101825b9 call dword ptr [0x10196528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196528))), 0x101825bfu);
  /* 101825bf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101825c1 call dword ptr [0x1019652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019652c))), 0x101825c7u);
  /* 101825c7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101825c9 call dword ptr [0x10196530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196530))), 0x101825cfu);
  /* 101825cf push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 101825d4 call dword ptr [0x10196534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196534))), 0x101825dau);
  /* 101825da push 5 */
  push32((uint32_t)(0x5u));
  /* 101825dc call dword ptr [0x10196538] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196538))), 0x101825e2u);
  /* 101825e2 add esp, 0x9c */
  { uint32_t _a=(ESP),_b=(0x9cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101825e8 ret  */
  ESPCHK(0x10181010u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f0 @ 0x101825f0 (20 bytes, 7 insns) */
void f_101825f0(void) {
  FTRACE(0x101825f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101825f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101825f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101825f8 push eax */
  push32((uint32_t)(EAX));
  /* 101825f9 push ecx */
  push32((uint32_t)(ECX));
  /* 101825fa call dword ptr [0x10196510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196510))), 0x10182600u);
  /* 10182600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182603 ret  */
  ESPCHK(0x101825f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x10182610 (25 bytes, 9 insns) */
void f_10182610(void) {
  FTRACE(0x10182610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182610 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10182614 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10182618 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018261c push eax */
  push32((uint32_t)(EAX));
  /* 1018261d push ecx */
  push32((uint32_t)(ECX));
  /* 1018261e push edx */
  push32((uint32_t)(EDX));
  /* 1018261f call dword ptr [0x1019651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019651c))), 0x10182625u);
  /* 10182625 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182628 ret  */
  ESPCHK(0x10182610u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x10182630 (6 bytes, 1 insns) */
void f_10182630(void) {
  FTRACE(0x10182630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182630 jmp dword ptr [0x10196548] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10196548)))); return;
}

/* FUN_10002640 @ 0x10182640 (20 bytes, 7 insns) */
void f_10182640(void) {
  FTRACE(0x10182640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182640 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10182644 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10182648 push eax */
  push32((uint32_t)(EAX));
  /* 10182649 push ecx */
  push32((uint32_t)(ECX));
  /* 1018264a call dword ptr [0x10196568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196568))), 0x10182650u);
  /* 10182650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182653 ret  */
  ESPCHK(0x10182640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002660 @ 0x10182660 (6 bytes, 1 insns) */
void f_10182660(void) {
  FTRACE(0x10182660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182660 jmp dword ptr [0x10196574] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10196574)))); return;
}

/* FUN_10002670 @ 0x10182670 (6 bytes, 1 insns) */
void f_10182670(void) {
  FTRACE(0x10182670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182670 jmp dword ptr [0x10196578] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10196578)))); return;
}

/* FUN_10002680 @ 0x10182680 (6 bytes, 1 insns) */
void f_10182680(void) {
  FTRACE(0x10182680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182680 jmp dword ptr [0x10196580] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10196580)))); return;
}

/* FUN_10002690 @ 0x10182690 (13 bytes, 5 insns) */
void f_10182690(void) {
  FTRACE(0x10182690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182690 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10182694 push eax */
  push32((uint32_t)(EAX));
  /* 10182695 call dword ptr [0x10196584] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196584))), 0x1018269bu);
  /* 1018269b pop ecx */
  ECX = (pop32());
  /* 1018269c ret  */
  ESPCHK(0x10182690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x101826a0 (20 bytes, 7 insns) */
void f_101826a0(void) {
  FTRACE(0x101826a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101826a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101826a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101826a8 push eax */
  push32((uint32_t)(EAX));
  /* 101826a9 push ecx */
  push32((uint32_t)(ECX));
  /* 101826aa call dword ptr [0x10196588] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196588))), 0x101826b0u);
  /* 101826b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101826b3 ret  */
  ESPCHK(0x101826a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c0 @ 0x101826c0 (6 bytes, 1 insns) */
void f_101826c0(void) {
  FTRACE(0x101826c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101826c0 jmp dword ptr [0x1019658c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1019658c)))); return;
}

/* FUN_100026d0 @ 0x101826d0 (20 bytes, 7 insns) */
void f_101826d0(void) {
  FTRACE(0x101826d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101826d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101826d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101826d8 push eax */
  push32((uint32_t)(EAX));
  /* 101826d9 push ecx */
  push32((uint32_t)(ECX));
  /* 101826da call dword ptr [0x10196268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196268))), 0x101826e0u);
  /* 101826e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101826e3 ret  */
  ESPCHK(0x101826d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x101826f0 (15 bytes, 5 insns) */
void f_101826f0(void) {
  FTRACE(0x101826f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101826f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101826f4 push eax */
  push32((uint32_t)(EAX));
  /* 101826f5 call dword ptr [0x101962b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101962b0))), 0x101826fbu);
  /* 101826fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101826fe ret  */
  ESPCHK(0x101826f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10182700 (20 bytes, 7 insns) */
void f_10182700(void) {
  FTRACE(0x10182700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182700 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10182704 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10182708 push eax */
  push32((uint32_t)(EAX));
  /* 10182709 push ecx */
  push32((uint32_t)(ECX));
  /* 1018270a call dword ptr [0x10193730] */
  call_ind((uint32_t)(r32((uint32_t)(0x10193730))), 0x10182710u);
  /* 10182710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182713 ret  */
  ESPCHK(0x10182700u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x10182720 (13 bytes, 5 insns) */
void f_10182720(void) {
  FTRACE(0x10182720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182720 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10182724 push eax */
  push32((uint32_t)(EAX));
  /* 10182725 call dword ptr [0x101938d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101938d0))), 0x1018272bu);
  /* 1018272b pop ecx */
  ECX = (pop32());
  /* 1018272c ret  */
  ESPCHK(0x10182720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x10182730 (15 bytes, 5 insns) */
void f_10182730(void) {
  FTRACE(0x10182730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182730 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10182734 push eax */
  push32((uint32_t)(EAX));
  /* 10182735 call dword ptr [0x10196590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196590))), 0x1018273bu);
  /* 1018273b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018273e ret  */
  ESPCHK(0x10182730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10182740 (25 bytes, 9 insns) */
void f_10182740(void) {
  FTRACE(0x10182740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182740 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10182744 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10182748 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018274c push eax */
  push32((uint32_t)(EAX));
  /* 1018274d push ecx */
  push32((uint32_t)(ECX));
  /* 1018274e push edx */
  push32((uint32_t)(EDX));
  /* 1018274f call dword ptr [0x10195fc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10195fc0))), 0x10182755u);
  /* 10182755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182758 ret  */
  ESPCHK(0x10182740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x10182760 (13 bytes, 5 insns) */
void f_10182760(void) {
  FTRACE(0x10182760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182760 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10182764 push eax */
  push32((uint32_t)(EAX));
  /* 10182765 call dword ptr [0x10193930] */
  call_ind((uint32_t)(r32((uint32_t)(0x10193930))), 0x1018276bu);
  /* 1018276b pop ecx */
  ECX = (pop32());
  /* 1018276c ret  */
  ESPCHK(0x10182760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x10182770 (6 bytes, 1 insns) */
void f_10182770(void) {
  FTRACE(0x10182770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182770 jmp dword ptr [0x10196248] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10196248)))); return;
}

/* FUN_10002780 @ 0x10182780 (6 bytes, 1 insns) */
void f_10182780(void) {
  FTRACE(0x10182780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182780 jmp dword ptr [0x10193948] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10193948)))); return;
}

/* FUN_10002790 @ 0x10182790 (82 bytes, 28 insns) */
void f_10182790(void) {
  FTRACE(0x10182790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182790 mov eax, dword ptr [0x101963e0] */
  EAX = (r32((uint32_t)(0x101963e0)));
  /* 10182795 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018279b push esi */
  push32((uint32_t)(ESI));
  /* 1018279c push edi */
  push32((uint32_t)(EDI));
  /* 1018279d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 101827a4 push edi */
  push32((uint32_t)(EDI));
  /* 101827a5 push eax */
  push32((uint32_t)(EAX));
  /* 101827a6 call dword ptr [0x1018e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e088))), 0x101827acu);
  /* 101827ac mov esi, eax */
  ESI = (EAX);
  /* 101827ae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101827b0 jne 0x101827d7 */
  if (!C.zf) goto L_101827d7;
  /* 101827b2 push edi */
  push32((uint32_t)(EDI));
  /* 101827b3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 101827b7 push 0x1018ff10 */
  push32((uint32_t)(0x1018ff10u));
  /* 101827bc push ecx */
  push32((uint32_t)(ECX));
  /* 101827bd call 0x10186e70 */
  push32(0x101827c2u); f_10186e70();
  /* 101827c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101827c5 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 101827c9 push esi */
  push32((uint32_t)(ESI));
  /* 101827ca push 0x1018ff00 */
  push32((uint32_t)(0x1018ff00u));
  /* 101827cf push edx */
  push32((uint32_t)(EDX));
  /* 101827d0 push esi */
  push32((uint32_t)(ESI));
  /* 101827d1 call dword ptr [0x1018e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0dc))), 0x101827d7u);
L_101827d7:;
  /* 101827d7 mov eax, esi */
  EAX = (ESI);
  /* 101827d9 pop edi */
  EDI = (pop32());
  /* 101827da pop esi */
  ESI = (pop32());
  /* 101827db add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101827e1 ret  */
  ESPCHK(0x10182790u, _esp0);
  ESP += 4; return;
}

/* FUN_100027f0 @ 0x101827f0 (1844 bytes, 376 insns) */
void f_101827f0(void) {
  FTRACE(0x101827f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101827f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101827f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101827f5 jne 0x10182f1c */
  if (!C.zf) goto L_10182f1c;
  /* 101827fb push 0x10190664 */
  push32((uint32_t)(0x10190664u));
  /* 10182800 call dword ptr [0x1018e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e004))), 0x10182806u);
  /* 10182806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10182808 mov dword ptr [0x101963e0], eax */
  w32((uint32_t)(0x101963e0), (EAX));
  /* 1018280d jne 0x10182829 */
  if (!C.zf) goto L_10182829;
  /* 1018280f push eax */
  push32((uint32_t)(EAX));
  /* 10182810 push 0x1019065c */
  push32((uint32_t)(0x1019065cu));
  /* 10182815 push 0x10190644 */
  push32((uint32_t)(0x10190644u));
  /* 1018281a push eax */
  push32((uint32_t)(EAX));
  /* 1018281b call dword ptr [0x1018e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0dc))), 0x10182821u);
  /* 10182821 mov eax, 1 */
  EAX = (0x1u);
  /* 10182826 ret 0xc */
  ESPCHK(0x101827f0u, _esp0);
  ESP += 16; return;
L_10182829:;
  /* 10182829 push 0x10190634 */
  push32((uint32_t)(0x10190634u));
  /* 1018282e call 0x10182790 */
  push32(0x10182833u); f_10182790();
  /* 10182833 push 0x10190624 */
  push32((uint32_t)(0x10190624u));
  /* 10182838 mov dword ptr [0x101963e4], eax */
  w32((uint32_t)(0x101963e4), (EAX));
  /* 1018283d call 0x10182790 */
  push32(0x10182842u); f_10182790();
  /* 10182842 push 0x10190614 */
  push32((uint32_t)(0x10190614u));
  /* 10182847 mov dword ptr [0x101963e8], eax */
  w32((uint32_t)(0x101963e8), (EAX));
  /* 1018284c call 0x10182790 */
  push32(0x10182851u); f_10182790();
  /* 10182851 push 0x10190608 */
  push32((uint32_t)(0x10190608u));
  /* 10182856 mov dword ptr [0x101963ec], eax */
  w32((uint32_t)(0x101963ec), (EAX));
  /* 1018285b call 0x10182790 */
  push32(0x10182860u); f_10182790();
  /* 10182860 push 0x101905f8 */
  push32((uint32_t)(0x101905f8u));
  /* 10182865 mov dword ptr [0x101963f0], eax */
  w32((uint32_t)(0x101963f0), (EAX));
  /* 1018286a call 0x10182790 */
  push32(0x1018286fu); f_10182790();
  /* 1018286f push 0x101905e4 */
  push32((uint32_t)(0x101905e4u));
  /* 10182874 mov dword ptr [0x101963f4], eax */
  w32((uint32_t)(0x101963f4), (EAX));
  /* 10182879 call 0x10182790 */
  push32(0x1018287eu); f_10182790();
  /* 1018287e push 0x101905d4 */
  push32((uint32_t)(0x101905d4u));
  /* 10182883 mov dword ptr [0x101963f8], eax */
  w32((uint32_t)(0x101963f8), (EAX));
  /* 10182888 call 0x10182790 */
  push32(0x1018288du); f_10182790();
  /* 1018288d push 0x101905c4 */
  push32((uint32_t)(0x101905c4u));
  /* 10182892 mov dword ptr [0x101963fc], eax */
  w32((uint32_t)(0x101963fc), (EAX));
  /* 10182897 call 0x10182790 */
  push32(0x1018289cu); f_10182790();
  /* 1018289c push 0x101905b0 */
  push32((uint32_t)(0x101905b0u));
  /* 101828a1 mov dword ptr [0x10196400], eax */
  w32((uint32_t)(0x10196400), (EAX));
  /* 101828a6 call 0x10182790 */
  push32(0x101828abu); f_10182790();
  /* 101828ab push 0x1019059c */
  push32((uint32_t)(0x1019059cu));
  /* 101828b0 mov dword ptr [0x10196404], eax */
  w32((uint32_t)(0x10196404), (EAX));
  /* 101828b5 call 0x10182790 */
  push32(0x101828bau); f_10182790();
  /* 101828ba push 0x1019058c */
  push32((uint32_t)(0x1019058cu));
  /* 101828bf mov dword ptr [0x10196408], eax */
  w32((uint32_t)(0x10196408), (EAX));
  /* 101828c4 call 0x10182790 */
  push32(0x101828c9u); f_10182790();
  /* 101828c9 push 0x1019057c */
  push32((uint32_t)(0x1019057cu));
  /* 101828ce mov dword ptr [0x1019640c], eax */
  w32((uint32_t)(0x1019640c), (EAX));
  /* 101828d3 call 0x10182790 */
  push32(0x101828d8u); f_10182790();
  /* 101828d8 push 0x1019056c */
  push32((uint32_t)(0x1019056cu));
  /* 101828dd mov dword ptr [0x10196410], eax */
  w32((uint32_t)(0x10196410), (EAX));
  /* 101828e2 call 0x10182790 */
  push32(0x101828e7u); f_10182790();
  /* 101828e7 push 0x1019055c */
  push32((uint32_t)(0x1019055cu));
  /* 101828ec mov dword ptr [0x10196414], eax */
  w32((uint32_t)(0x10196414), (EAX));
  /* 101828f1 call 0x10182790 */
  push32(0x101828f6u); f_10182790();
  /* 101828f6 push 0x1019054c */
  push32((uint32_t)(0x1019054cu));
  /* 101828fb mov dword ptr [0x10196418], eax */
  w32((uint32_t)(0x10196418), (EAX));
  /* 10182900 call 0x10182790 */
  push32(0x10182905u); f_10182790();
  /* 10182905 push 0x1019053c */
  push32((uint32_t)(0x1019053cu));
  /* 1018290a mov dword ptr [0x1019641c], eax */
  w32((uint32_t)(0x1019641c), (EAX));
  /* 1018290f call 0x10182790 */
  push32(0x10182914u); f_10182790();
  /* 10182914 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182917 mov dword ptr [0x10196420], eax */
  w32((uint32_t)(0x10196420), (EAX));
  /* 1018291c push 0x1019052c */
  push32((uint32_t)(0x1019052cu));
  /* 10182921 call 0x10182790 */
  push32(0x10182926u); f_10182790();
  /* 10182926 push 0x1019051c */
  push32((uint32_t)(0x1019051cu));
  /* 1018292b mov dword ptr [0x10196424], eax */
  w32((uint32_t)(0x10196424), (EAX));
  /* 10182930 call 0x10182790 */
  push32(0x10182935u); f_10182790();
  /* 10182935 push 0x10190508 */
  push32((uint32_t)(0x10190508u));
  /* 1018293a mov dword ptr [0x10196428], eax */
  w32((uint32_t)(0x10196428), (EAX));
  /* 1018293f call 0x10182790 */
  push32(0x10182944u); f_10182790();
  /* 10182944 push 0x10190500 */
  push32((uint32_t)(0x10190500u));
  /* 10182949 mov dword ptr [0x1019642c], eax */
  w32((uint32_t)(0x1019642c), (EAX));
  /* 1018294e call 0x10182790 */
  push32(0x10182953u); f_10182790();
  /* 10182953 push 0x101904f0 */
  push32((uint32_t)(0x101904f0u));
  /* 10182958 mov dword ptr [0x10196430], eax */
  w32((uint32_t)(0x10196430), (EAX));
  /* 1018295d call 0x10182790 */
  push32(0x10182962u); f_10182790();
  /* 10182962 push 0x101904e0 */
  push32((uint32_t)(0x101904e0u));
  /* 10182967 mov dword ptr [0x10196434], eax */
  w32((uint32_t)(0x10196434), (EAX));
  /* 1018296c call 0x10182790 */
  push32(0x10182971u); f_10182790();
  /* 10182971 push 0x101904d4 */
  push32((uint32_t)(0x101904d4u));
  /* 10182976 mov dword ptr [0x10196438], eax */
  w32((uint32_t)(0x10196438), (EAX));
  /* 1018297b call 0x10182790 */
  push32(0x10182980u); f_10182790();
  /* 10182980 push 0x101904c4 */
  push32((uint32_t)(0x101904c4u));
  /* 10182985 mov dword ptr [0x1019643c], eax */
  w32((uint32_t)(0x1019643c), (EAX));
  /* 1018298a call 0x10182790 */
  push32(0x1018298fu); f_10182790();
  /* 1018298f push 0x101904bc */
  push32((uint32_t)(0x101904bcu));
  /* 10182994 mov dword ptr [0x10196440], eax */
  w32((uint32_t)(0x10196440), (EAX));
  /* 10182999 call 0x10182790 */
  push32(0x1018299eu); f_10182790();
  /* 1018299e push 0x101904ac */
  push32((uint32_t)(0x101904acu));
  /* 101829a3 mov dword ptr [0x10196458], eax */
  w32((uint32_t)(0x10196458), (EAX));
  /* 101829a8 call 0x10182790 */
  push32(0x101829adu); f_10182790();
  /* 101829ad push 0x1019049c */
  push32((uint32_t)(0x1019049cu));
  /* 101829b2 mov dword ptr [0x1019645c], eax */
  w32((uint32_t)(0x1019645c), (EAX));
  /* 101829b7 call 0x10182790 */
  push32(0x101829bcu); f_10182790();
  /* 101829bc push 0x10190490 */
  push32((uint32_t)(0x10190490u));
  /* 101829c1 mov dword ptr [0x10196460], eax */
  w32((uint32_t)(0x10196460), (EAX));
  /* 101829c6 call 0x10182790 */
  push32(0x101829cbu); f_10182790();
  /* 101829cb push 0x10190480 */
  push32((uint32_t)(0x10190480u));
  /* 101829d0 mov dword ptr [0x10196464], eax */
  w32((uint32_t)(0x10196464), (EAX));
  /* 101829d5 call 0x10182790 */
  push32(0x101829dau); f_10182790();
  /* 101829da push 0x10190474 */
  push32((uint32_t)(0x10190474u));
  /* 101829df mov dword ptr [0x10196468], eax */
  w32((uint32_t)(0x10196468), (EAX));
  /* 101829e4 call 0x10182790 */
  push32(0x101829e9u); f_10182790();
  /* 101829e9 push 0x10190464 */
  push32((uint32_t)(0x10190464u));
  /* 101829ee mov dword ptr [0x10196484], eax */
  w32((uint32_t)(0x10196484), (EAX));
  /* 101829f3 call 0x10182790 */
  push32(0x101829f8u); f_10182790();
  /* 101829f8 push 0x1019045c */
  push32((uint32_t)(0x1019045cu));
  /* 101829fd mov dword ptr [0x1019646c], eax */
  w32((uint32_t)(0x1019646c), (EAX));
  /* 10182a02 call 0x10182790 */
  push32(0x10182a07u); f_10182790();
  /* 10182a07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182a0a mov dword ptr [0x10196470], eax */
  w32((uint32_t)(0x10196470), (EAX));
  /* 10182a0f push 0x1019044c */
  push32((uint32_t)(0x1019044cu));
  /* 10182a14 call 0x10182790 */
  push32(0x10182a19u); f_10182790();
  /* 10182a19 push 0x1019043c */
  push32((uint32_t)(0x1019043cu));
  /* 10182a1e mov dword ptr [0x10196474], eax */
  w32((uint32_t)(0x10196474), (EAX));
  /* 10182a23 call 0x10182790 */
  push32(0x10182a28u); f_10182790();
  /* 10182a28 push 0x1019042c */
  push32((uint32_t)(0x1019042cu));
  /* 10182a2d mov dword ptr [0x10196478], eax */
  w32((uint32_t)(0x10196478), (EAX));
  /* 10182a32 call 0x10182790 */
  push32(0x10182a37u); f_10182790();
  /* 10182a37 push 0x10190420 */
  push32((uint32_t)(0x10190420u));
  /* 10182a3c mov dword ptr [0x1019647c], eax */
  w32((uint32_t)(0x1019647c), (EAX));
  /* 10182a41 call 0x10182790 */
  push32(0x10182a46u); f_10182790();
  /* 10182a46 push 0x10190418 */
  push32((uint32_t)(0x10190418u));
  /* 10182a4b mov dword ptr [0x10196480], eax */
  w32((uint32_t)(0x10196480), (EAX));
  /* 10182a50 call 0x10182790 */
  push32(0x10182a55u); f_10182790();
  /* 10182a55 push 0x10190408 */
  push32((uint32_t)(0x10190408u));
  /* 10182a5a mov dword ptr [0x10196488], eax */
  w32((uint32_t)(0x10196488), (EAX));
  /* 10182a5f call 0x10182790 */
  push32(0x10182a64u); f_10182790();
  /* 10182a64 push 0x101903f8 */
  push32((uint32_t)(0x101903f8u));
  /* 10182a69 mov dword ptr [0x1019648c], eax */
  w32((uint32_t)(0x1019648c), (EAX));
  /* 10182a6e call 0x10182790 */
  push32(0x10182a73u); f_10182790();
  /* 10182a73 push 0x101903e8 */
  push32((uint32_t)(0x101903e8u));
  /* 10182a78 mov dword ptr [0x10196490], eax */
  w32((uint32_t)(0x10196490), (EAX));
  /* 10182a7d call 0x10182790 */
  push32(0x10182a82u); f_10182790();
  /* 10182a82 push 0x101903d8 */
  push32((uint32_t)(0x101903d8u));
  /* 10182a87 mov dword ptr [0x10196494], eax */
  w32((uint32_t)(0x10196494), (EAX));
  /* 10182a8c call 0x10182790 */
  push32(0x10182a91u); f_10182790();
  /* 10182a91 push 0x101903cc */
  push32((uint32_t)(0x101903ccu));
  /* 10182a96 mov dword ptr [0x10196498], eax */
  w32((uint32_t)(0x10196498), (EAX));
  /* 10182a9b call 0x10182790 */
  push32(0x10182aa0u); f_10182790();
  /* 10182aa0 push 0x101903c0 */
  push32((uint32_t)(0x101903c0u));
  /* 10182aa5 mov dword ptr [0x1019649c], eax */
  w32((uint32_t)(0x1019649c), (EAX));
  /* 10182aaa call 0x10182790 */
  push32(0x10182aafu); f_10182790();
  /* 10182aaf push 0x101903b0 */
  push32((uint32_t)(0x101903b0u));
  /* 10182ab4 mov dword ptr [0x101964a0], eax */
  w32((uint32_t)(0x101964a0), (EAX));
  /* 10182ab9 call 0x10182790 */
  push32(0x10182abeu); f_10182790();
  /* 10182abe push 0x101903a4 */
  push32((uint32_t)(0x101903a4u));
  /* 10182ac3 mov dword ptr [0x101964a4], eax */
  w32((uint32_t)(0x101964a4), (EAX));
  /* 10182ac8 call 0x10182790 */
  push32(0x10182acdu); f_10182790();
  /* 10182acd push 0x10190398 */
  push32((uint32_t)(0x10190398u));
  /* 10182ad2 mov dword ptr [0x101964a8], eax */
  w32((uint32_t)(0x101964a8), (EAX));
  /* 10182ad7 call 0x10182790 */
  push32(0x10182adcu); f_10182790();
  /* 10182adc push 0x1019038c */
  push32((uint32_t)(0x1019038cu));
  /* 10182ae1 mov dword ptr [0x101964ac], eax */
  w32((uint32_t)(0x101964ac), (EAX));
  /* 10182ae6 call 0x10182790 */
  push32(0x10182aebu); f_10182790();
  /* 10182aeb push 0x10190380 */
  push32((uint32_t)(0x10190380u));
  /* 10182af0 mov dword ptr [0x101961e0], eax */
  w32((uint32_t)(0x101961e0), (EAX));
  /* 10182af5 call 0x10182790 */
  push32(0x10182afau); f_10182790();
  /* 10182afa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182afd mov dword ptr [0x101964b0], eax */
  w32((uint32_t)(0x101964b0), (EAX));
  /* 10182b02 push 0x10190374 */
  push32((uint32_t)(0x10190374u));
  /* 10182b07 call 0x10182790 */
  push32(0x10182b0cu); f_10182790();
  /* 10182b0c push 0x10190368 */
  push32((uint32_t)(0x10190368u));
  /* 10182b11 mov dword ptr [0x101964b4], eax */
  w32((uint32_t)(0x101964b4), (EAX));
  /* 10182b16 call 0x10182790 */
  push32(0x10182b1bu); f_10182790();
  /* 10182b1b push 0x10190358 */
  push32((uint32_t)(0x10190358u));
  /* 10182b20 mov dword ptr [0x101964b8], eax */
  w32((uint32_t)(0x101964b8), (EAX));
  /* 10182b25 call 0x10182790 */
  push32(0x10182b2au); f_10182790();
  /* 10182b2a push 0x1019034c */
  push32((uint32_t)(0x1019034cu));
  /* 10182b2f mov dword ptr [0x101964bc], eax */
  w32((uint32_t)(0x101964bc), (EAX));
  /* 10182b34 call 0x10182790 */
  push32(0x10182b39u); f_10182790();
  /* 10182b39 push 0x10190340 */
  push32((uint32_t)(0x10190340u));
  /* 10182b3e mov dword ptr [0x101964c0], eax */
  w32((uint32_t)(0x101964c0), (EAX));
  /* 10182b43 call 0x10182790 */
  push32(0x10182b48u); f_10182790();
  /* 10182b48 mov dword ptr [0x101964c4], eax */
  w32((uint32_t)(0x101964c4), (EAX));
  /* 10182b4d push 0x10190330 */
  push32((uint32_t)(0x10190330u));
  /* 10182b52 call 0x10182790 */
  push32(0x10182b57u); f_10182790();
  /* 10182b57 push 0x10190320 */
  push32((uint32_t)(0x10190320u));
  /* 10182b5c mov dword ptr [0x101964c8], eax */
  w32((uint32_t)(0x101964c8), (EAX));
  /* 10182b61 call 0x10182790 */
  push32(0x10182b66u); f_10182790();
  /* 10182b66 push 0x10190314 */
  push32((uint32_t)(0x10190314u));
  /* 10182b6b mov dword ptr [0x101964cc], eax */
  w32((uint32_t)(0x101964cc), (EAX));
  /* 10182b70 call 0x10182790 */
  push32(0x10182b75u); f_10182790();
  /* 10182b75 push 0x1019030c */
  push32((uint32_t)(0x1019030cu));
  /* 10182b7a mov dword ptr [0x101964d0], eax */
  w32((uint32_t)(0x101964d0), (EAX));
  /* 10182b7f call 0x10182790 */
  push32(0x10182b84u); f_10182790();
  /* 10182b84 push 0x101902fc */
  push32((uint32_t)(0x101902fcu));
  /* 10182b89 mov dword ptr [0x101964d4], eax */
  w32((uint32_t)(0x101964d4), (EAX));
  /* 10182b8e call 0x10182790 */
  push32(0x10182b93u); f_10182790();
  /* 10182b93 push 0x101902f4 */
  push32((uint32_t)(0x101902f4u));
  /* 10182b98 mov dword ptr [0x101964d8], eax */
  w32((uint32_t)(0x101964d8), (EAX));
  /* 10182b9d call 0x10182790 */
  push32(0x10182ba2u); f_10182790();
  /* 10182ba2 push 0x101902e8 */
  push32((uint32_t)(0x101902e8u));
  /* 10182ba7 mov dword ptr [0x101964dc], eax */
  w32((uint32_t)(0x101964dc), (EAX));
  /* 10182bac call 0x10182790 */
  push32(0x10182bb1u); f_10182790();
  /* 10182bb1 push 0x101902e0 */
  push32((uint32_t)(0x101902e0u));
  /* 10182bb6 mov dword ptr [0x101964e0], eax */
  w32((uint32_t)(0x101964e0), (EAX));
  /* 10182bbb call 0x10182790 */
  push32(0x10182bc0u); f_10182790();
  /* 10182bc0 push 0x101902cc */
  push32((uint32_t)(0x101902ccu));
  /* 10182bc5 mov dword ptr [0x101964e4], eax */
  w32((uint32_t)(0x101964e4), (EAX));
  /* 10182bca call 0x10182790 */
  push32(0x10182bcfu); f_10182790();
  /* 10182bcf push 0x101902c0 */
  push32((uint32_t)(0x101902c0u));
  /* 10182bd4 mov dword ptr [0x10193638], eax */
  w32((uint32_t)(0x10193638), (EAX));
  /* 10182bd9 call 0x10182790 */
  push32(0x10182bdeu); f_10182790();
  /* 10182bde push 0x101902b4 */
  push32((uint32_t)(0x101902b4u));
  /* 10182be3 mov dword ptr [0x101964f0], eax */
  w32((uint32_t)(0x101964f0), (EAX));
  /* 10182be8 call 0x10182790 */
  push32(0x10182bedu); f_10182790();
  /* 10182bed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182bf0 mov dword ptr [0x101964ec], eax */
  w32((uint32_t)(0x101964ec), (EAX));
  /* 10182bf5 push 0x101902a0 */
  push32((uint32_t)(0x101902a0u));
  /* 10182bfa call 0x10182790 */
  push32(0x10182bffu); f_10182790();
  /* 10182bff push 0x10190290 */
  push32((uint32_t)(0x10190290u));
  /* 10182c04 mov dword ptr [0x101964f4], eax */
  w32((uint32_t)(0x101964f4), (EAX));
  /* 10182c09 call 0x10182790 */
  push32(0x10182c0eu); f_10182790();
  /* 10182c0e push 0x10190280 */
  push32((uint32_t)(0x10190280u));
  /* 10182c13 mov dword ptr [0x101964f8], eax */
  w32((uint32_t)(0x101964f8), (EAX));
  /* 10182c18 call 0x10182790 */
  push32(0x10182c1du); f_10182790();
  /* 10182c1d push 0x10190270 */
  push32((uint32_t)(0x10190270u));
  /* 10182c22 mov dword ptr [0x101964fc], eax */
  w32((uint32_t)(0x101964fc), (EAX));
  /* 10182c27 call 0x10182790 */
  push32(0x10182c2cu); f_10182790();
  /* 10182c2c push 0x10190264 */
  push32((uint32_t)(0x10190264u));
  /* 10182c31 mov dword ptr [0x10196448], eax */
  w32((uint32_t)(0x10196448), (EAX));
  /* 10182c36 call 0x10182790 */
  push32(0x10182c3bu); f_10182790();
  /* 10182c3b push 0x10190254 */
  push32((uint32_t)(0x10190254u));
  /* 10182c40 mov dword ptr [0x10196444], eax */
  w32((uint32_t)(0x10196444), (EAX));
  /* 10182c45 call 0x10182790 */
  push32(0x10182c4au); f_10182790();
  /* 10182c4a push 0x10190240 */
  push32((uint32_t)(0x10190240u));
  /* 10182c4f mov dword ptr [0x1019644c], eax */
  w32((uint32_t)(0x1019644c), (EAX));
  /* 10182c54 call 0x10182790 */
  push32(0x10182c59u); f_10182790();
  /* 10182c59 push 0x10190228 */
  push32((uint32_t)(0x10190228u));
  /* 10182c5e mov dword ptr [0x10196450], eax */
  w32((uint32_t)(0x10196450), (EAX));
  /* 10182c63 call 0x10182790 */
  push32(0x10182c68u); f_10182790();
  /* 10182c68 push 0x10190218 */
  push32((uint32_t)(0x10190218u));
  /* 10182c6d mov dword ptr [0x10196454], eax */
  w32((uint32_t)(0x10196454), (EAX));
  /* 10182c72 call 0x10182790 */
  push32(0x10182c77u); f_10182790();
  /* 10182c77 push 0x10190200 */
  push32((uint32_t)(0x10190200u));
  /* 10182c7c mov dword ptr [0x10196518], eax */
  w32((uint32_t)(0x10196518), (EAX));
  /* 10182c81 call 0x10182790 */
  push32(0x10182c86u); f_10182790();
  /* 10182c86 push 0x101901f0 */
  push32((uint32_t)(0x101901f0u));
  /* 10182c8b mov dword ptr [0x10196548], eax */
  w32((uint32_t)(0x10196548), (EAX));
  /* 10182c90 call 0x10182790 */
  push32(0x10182c95u); f_10182790();
  /* 10182c95 push 0x101901e8 */
  push32((uint32_t)(0x101901e8u));
  /* 10182c9a mov dword ptr [0x10196510], eax */
  w32((uint32_t)(0x10196510), (EAX));
  /* 10182c9f call 0x10182790 */
  push32(0x10182ca4u); f_10182790();
  /* 10182ca4 push 0x101901d8 */
  push32((uint32_t)(0x101901d8u));
  /* 10182ca9 mov dword ptr [0x1019651c], eax */
  w32((uint32_t)(0x1019651c), (EAX));
  /* 10182cae call 0x10182790 */
  push32(0x10182cb3u); f_10182790();
  /* 10182cb3 push 0x101901cc */
  push32((uint32_t)(0x101901ccu));
  /* 10182cb8 mov dword ptr [0x10196568], eax */
  w32((uint32_t)(0x10196568), (EAX));
  /* 10182cbd call 0x10182790 */
  push32(0x10182cc2u); f_10182790();
  /* 10182cc2 push 0x101901c4 */
  push32((uint32_t)(0x101901c4u));
  /* 10182cc7 mov dword ptr [0x10196500], eax */
  w32((uint32_t)(0x10196500), (EAX));
  /* 10182ccc call 0x10182790 */
  push32(0x10182cd1u); f_10182790();
  /* 10182cd1 push 0x101901b8 */
  push32((uint32_t)(0x101901b8u));
  /* 10182cd6 mov dword ptr [0x10196504], eax */
  w32((uint32_t)(0x10196504), (EAX));
  /* 10182cdb call 0x10182790 */
  push32(0x10182ce0u); f_10182790();
  /* 10182ce0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182ce3 mov dword ptr [0x10196508], eax */
  w32((uint32_t)(0x10196508), (EAX));
  /* 10182ce8 push 0x101901a8 */
  push32((uint32_t)(0x101901a8u));
  /* 10182ced call 0x10182790 */
  push32(0x10182cf2u); f_10182790();
  /* 10182cf2 push 0x10190194 */
  push32((uint32_t)(0x10190194u));
  /* 10182cf7 mov dword ptr [0x1019650c], eax */
  w32((uint32_t)(0x1019650c), (EAX));
  /* 10182cfc call 0x10182790 */
  push32(0x10182d01u); f_10182790();
  /* 10182d01 push 0x10190178 */
  push32((uint32_t)(0x10190178u));
  /* 10182d06 mov dword ptr [0x10196514], eax */
  w32((uint32_t)(0x10196514), (EAX));
  /* 10182d0b call 0x10182790 */
  push32(0x10182d10u); f_10182790();
  /* 10182d10 push 0x10190164 */
  push32((uint32_t)(0x10190164u));
  /* 10182d15 mov dword ptr [0x10196520], eax */
  w32((uint32_t)(0x10196520), (EAX));
  /* 10182d1a call 0x10182790 */
  push32(0x10182d1fu); f_10182790();
  /* 10182d1f push 0x10190158 */
  push32((uint32_t)(0x10190158u));
  /* 10182d24 mov dword ptr [0x10196524], eax */
  w32((uint32_t)(0x10196524), (EAX));
  /* 10182d29 call 0x10182790 */
  push32(0x10182d2eu); f_10182790();
  /* 10182d2e push 0x10190148 */
  push32((uint32_t)(0x10190148u));
  /* 10182d33 mov dword ptr [0x1019655c], eax */
  w32((uint32_t)(0x1019655c), (EAX));
  /* 10182d38 call 0x10182790 */
  push32(0x10182d3du); f_10182790();
  /* 10182d3d push 0x1019013c */
  push32((uint32_t)(0x1019013cu));
  /* 10182d42 mov dword ptr [0x10196560], eax */
  w32((uint32_t)(0x10196560), (EAX));
  /* 10182d47 call 0x10182790 */
  push32(0x10182d4cu); f_10182790();
  /* 10182d4c push 0x10190130 */
  push32((uint32_t)(0x10190130u));
  /* 10182d51 mov dword ptr [0x10196564], eax */
  w32((uint32_t)(0x10196564), (EAX));
  /* 10182d56 call 0x10182790 */
  push32(0x10182d5bu); f_10182790();
  /* 10182d5b push 0x10190118 */
  push32((uint32_t)(0x10190118u));
  /* 10182d60 mov dword ptr [0x1019656c], eax */
  w32((uint32_t)(0x1019656c), (EAX));
  /* 10182d65 call 0x10182790 */
  push32(0x10182d6au); f_10182790();
  /* 10182d6a push 0x101900fc */
  push32((uint32_t)(0x101900fcu));
  /* 10182d6f mov dword ptr [0x10196528], eax */
  w32((uint32_t)(0x10196528), (EAX));
  /* 10182d74 call 0x10182790 */
  push32(0x10182d79u); f_10182790();
  /* 10182d79 push 0x101900e0 */
  push32((uint32_t)(0x101900e0u));
  /* 10182d7e mov dword ptr [0x1019652c], eax */
  w32((uint32_t)(0x1019652c), (EAX));
  /* 10182d83 call 0x10182790 */
  push32(0x10182d88u); f_10182790();
  /* 10182d88 push 0x101900c8 */
  push32((uint32_t)(0x101900c8u));
  /* 10182d8d mov dword ptr [0x10196530], eax */
  w32((uint32_t)(0x10196530), (EAX));
  /* 10182d92 call 0x10182790 */
  push32(0x10182d97u); f_10182790();
  /* 10182d97 push 0x101900b0 */
  push32((uint32_t)(0x101900b0u));
  /* 10182d9c mov dword ptr [0x10196534], eax */
  w32((uint32_t)(0x10196534), (EAX));
  /* 10182da1 call 0x10182790 */
  push32(0x10182da6u); f_10182790();
  /* 10182da6 push 0x101900a4 */
  push32((uint32_t)(0x101900a4u));
  /* 10182dab mov dword ptr [0x10196538], eax */
  w32((uint32_t)(0x10196538), (EAX));
  /* 10182db0 call 0x10182790 */
  push32(0x10182db5u); f_10182790();
  /* 10182db5 push 0x10190098 */
  push32((uint32_t)(0x10190098u));
  /* 10182dba mov dword ptr [0x1019653c], eax */
  w32((uint32_t)(0x1019653c), (EAX));
  /* 10182dbf call 0x10182790 */
  push32(0x10182dc4u); f_10182790();
  /* 10182dc4 push 0x10190088 */
  push32((uint32_t)(0x10190088u));
  /* 10182dc9 mov dword ptr [0x10196540], eax */
  w32((uint32_t)(0x10196540), (EAX));
  /* 10182dce call 0x10182790 */
  push32(0x10182dd3u); f_10182790();
  /* 10182dd3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182dd6 mov dword ptr [0x10196544], eax */
  w32((uint32_t)(0x10196544), (EAX));
  /* 10182ddb push 0x1019007c */
  push32((uint32_t)(0x1019007cu));
  /* 10182de0 call 0x10182790 */
  push32(0x10182de5u); f_10182790();
  /* 10182de5 push 0x10190070 */
  push32((uint32_t)(0x10190070u));
  /* 10182dea mov dword ptr [0x1019654c], eax */
  w32((uint32_t)(0x1019654c), (EAX));
  /* 10182def call 0x10182790 */
  push32(0x10182df4u); f_10182790();
  /* 10182df4 push 0x10190064 */
  push32((uint32_t)(0x10190064u));
  /* 10182df9 mov dword ptr [0x10196550], eax */
  w32((uint32_t)(0x10196550), (EAX));
  /* 10182dfe call 0x10182790 */
  push32(0x10182e03u); f_10182790();
  /* 10182e03 push 0x10190054 */
  push32((uint32_t)(0x10190054u));
  /* 10182e08 mov dword ptr [0x10196570], eax */
  w32((uint32_t)(0x10196570), (EAX));
  /* 10182e0d call 0x10182790 */
  push32(0x10182e12u); f_10182790();
  /* 10182e12 push 0x10190048 */
  push32((uint32_t)(0x10190048u));
  /* 10182e17 mov dword ptr [0x10196574], eax */
  w32((uint32_t)(0x10196574), (EAX));
  /* 10182e1c call 0x10182790 */
  push32(0x10182e21u); f_10182790();
  /* 10182e21 push 0x1019003c */
  push32((uint32_t)(0x1019003cu));
  /* 10182e26 mov dword ptr [0x10196578], eax */
  w32((uint32_t)(0x10196578), (EAX));
  /* 10182e2b call 0x10182790 */
  push32(0x10182e30u); f_10182790();
  /* 10182e30 push 0x10190030 */
  push32((uint32_t)(0x10190030u));
  /* 10182e35 mov dword ptr [0x1019657c], eax */
  w32((uint32_t)(0x1019657c), (EAX));
  /* 10182e3a call 0x10182790 */
  push32(0x10182e3fu); f_10182790();
  /* 10182e3f push 0x10190020 */
  push32((uint32_t)(0x10190020u));
  /* 10182e44 mov dword ptr [0x10196580], eax */
  w32((uint32_t)(0x10196580), (EAX));
  /* 10182e49 call 0x10182790 */
  push32(0x10182e4eu); f_10182790();
  /* 10182e4e push 0x10190010 */
  push32((uint32_t)(0x10190010u));
  /* 10182e53 mov dword ptr [0x10196584], eax */
  w32((uint32_t)(0x10196584), (EAX));
  /* 10182e58 call 0x10182790 */
  push32(0x10182e5du); f_10182790();
  /* 10182e5d push 0x1018fffc */
  push32((uint32_t)(0x1018fffcu));
  /* 10182e62 mov dword ptr [0x1019658c], eax */
  w32((uint32_t)(0x1019658c), (EAX));
  /* 10182e67 call 0x10182790 */
  push32(0x10182e6cu); f_10182790();
  /* 10182e6c mov dword ptr [0x10196588], eax */
  w32((uint32_t)(0x10196588), (EAX));
  /* 10182e71 push 0x1018ffe4 */
  push32((uint32_t)(0x1018ffe4u));
  /* 10182e76 call 0x10182790 */
  push32(0x10182e7bu); f_10182790();
  /* 10182e7b push 0x1018ffcc */
  push32((uint32_t)(0x1018ffccu));
  /* 10182e80 mov dword ptr [0x101938d0], eax */
  w32((uint32_t)(0x101938d0), (EAX));
  /* 10182e85 call 0x10182790 */
  push32(0x10182e8au); f_10182790();
  /* 10182e8a push 0x1018ffbc */
  push32((uint32_t)(0x1018ffbcu));
  /* 10182e8f mov dword ptr [0x10193730], eax */
  w32((uint32_t)(0x10193730), (EAX));
  /* 10182e94 call 0x10182790 */
  push32(0x10182e99u); f_10182790();
  /* 10182e99 push 0x1018ffac */
  push32((uint32_t)(0x1018ffacu));
  /* 10182e9e mov dword ptr [0x10196590], eax */
  w32((uint32_t)(0x10196590), (EAX));
  /* 10182ea3 call 0x10182790 */
  push32(0x10182ea8u); f_10182790();
  /* 10182ea8 push 0x1018ff9c */
  push32((uint32_t)(0x1018ff9cu));
  /* 10182ead mov dword ptr [0x10196554], eax */
  w32((uint32_t)(0x10196554), (EAX));
  /* 10182eb2 call 0x10182790 */
  push32(0x10182eb7u); f_10182790();
  /* 10182eb7 push 0x1018ff8c */
  push32((uint32_t)(0x1018ff8cu));
  /* 10182ebc mov dword ptr [0x10196558], eax */
  w32((uint32_t)(0x10196558), (EAX));
  /* 10182ec1 call 0x10182790 */
  push32(0x10182ec6u); f_10182790();
  /* 10182ec6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182ec9 mov dword ptr [0x101962b0], eax */
  w32((uint32_t)(0x101962b0), (EAX));
  /* 10182ece push 0x1018ff7c */
  push32((uint32_t)(0x1018ff7cu));
  /* 10182ed3 call 0x10182790 */
  push32(0x10182ed8u); f_10182790();
  /* 10182ed8 push 0x1018ff6c */
  push32((uint32_t)(0x1018ff6cu));
  /* 10182edd mov dword ptr [0x10196268], eax */
  w32((uint32_t)(0x10196268), (EAX));
  /* 10182ee2 call 0x10182790 */
  push32(0x10182ee7u); f_10182790();
  /* 10182ee7 push 0x1018ff5c */
  push32((uint32_t)(0x1018ff5cu));
  /* 10182eec mov dword ptr [0x10195fc0], eax */
  w32((uint32_t)(0x10195fc0), (EAX));
  /* 10182ef1 call 0x10182790 */
  push32(0x10182ef6u); f_10182790();
  /* 10182ef6 push 0x1018ff4c */
  push32((uint32_t)(0x1018ff4cu));
  /* 10182efb mov dword ptr [0x10193930], eax */
  w32((uint32_t)(0x10193930), (EAX));
  /* 10182f00 call 0x10182790 */
  push32(0x10182f05u); f_10182790();
  /* 10182f05 push 0x1018ff38 */
  push32((uint32_t)(0x1018ff38u));
  /* 10182f0a mov dword ptr [0x10196248], eax */
  w32((uint32_t)(0x10196248), (EAX));
  /* 10182f0f call 0x10182790 */
  push32(0x10182f14u); f_10182790();
  /* 10182f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182f17 mov dword ptr [0x10193948], eax */
  w32((uint32_t)(0x10193948), (EAX));
L_10182f1c:;
  /* 10182f1c mov eax, 1 */
  EAX = (0x1u);
  /* 10182f21 ret 0xc */
  ESPCHK(0x101827f0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f30 @ 0x10182f30 (34 bytes, 10 insns) */
void f_10182f30(void) {
  FTRACE(0x10182f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182f30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10182f34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10182f38 push eax */
  push32((uint32_t)(EAX));
  /* 10182f39 push ecx */
  push32((uint32_t)(ECX));
  /* 10182f3a push 0x10190670 */
  push32((uint32_t)(0x10190670u));
  /* 10182f3f push 0x101937a8 */
  push32((uint32_t)(0x101937a8u));
  /* 10182f44 call 0x10186e70 */
  push32(0x10182f49u); f_10186e70();
  /* 10182f49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182f4c mov eax, 0x101937a8 */
  EAX = (0x101937a8u);
  /* 10182f51 ret  */
  ESPCHK(0x10182f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f60 @ 0x10182f60 (45 bytes, 16 insns) */
void f_10182f60(void) {
  FTRACE(0x10182f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182f60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10182f64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10182f68 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10182f6d push eax */
  push32((uint32_t)(EAX));
  /* 10182f6e push ecx */
  push32((uint32_t)(ECX));
  /* 10182f6f call 0x10182740 */
  push32(0x10182f74u); f_10182740();
  /* 10182f74 mov ecx, eax */
  ECX = (EAX);
  /* 10182f76 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10182f7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182f7d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10182f80 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10182f83 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10182f86 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10182f89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10182f8a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10182f8c ret  */
  ESPCHK(0x10182f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f90 @ 0x10182f90 (171 bytes, 77 insns) */
void f_10182f90(void) {
  FTRACE(0x10182f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10182f90 push ebx */
  push32((uint32_t)(EBX));
  /* 10182f91 push ebp */
  push32((uint32_t)(EBP));
  /* 10182f92 push esi */
  push32((uint32_t)(ESI));
  /* 10182f93 push edi */
  push32((uint32_t)(EDI));
  /* 10182f94 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 10182f98 push edi */
  push32((uint32_t)(EDI));
  /* 10182f99 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10182f9fu);
  /* 10182f9f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10182fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182fa6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10182fa8 jl 0x10182fb1 */
  if ((C.sf!=C.of)) goto L_10182fb1;
  /* 10182faa pop edi */
  EDI = (pop32());
  /* 10182fab pop esi */
  ESI = (pop32());
  /* 10182fac pop ebp */
  EBP = (pop32());
  /* 10182fad mov al, 1 */
  AL = (0x1u);
  /* 10182faf pop ebx */
  EBX = (pop32());
  /* 10182fb0 ret  */
  ESPCHK(0x10182f90u, _esp0);
  ESP += 4; return;
L_10182fb1:;
  /* 10182fb1 push edi */
  push32((uint32_t)(EDI));
  /* 10182fb2 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10182fb8u);
  /* 10182fb8 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10182fbc sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10182fbe push esi */
  push32((uint32_t)(ESI));
  /* 10182fbf push edi */
  push32((uint32_t)(EDI));
  /* 10182fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10182fc1 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 10182fc5 call 0x10182f60 */
  push32(0x10182fcau); f_10182f60();
  /* 10182fca push ebp */
  push32((uint32_t)(EBP));
  /* 10182fcb mov ebx, eax */
  EBX = (EAX);
  /* 10182fcd call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10182fd3u);
  /* 10182fd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10182fd6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10182fd8 jle 0x10183034 */
  if ((C.zf||C.sf!=C.of)) goto L_10183034;
  /* 10182fda cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10182fe0 jle 0x10183034 */
  if ((C.zf||C.sf!=C.of)) goto L_10183034;
  /* 10182fe2 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 10182fe7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10182fe9 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10182feb sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 10182fee mov eax, edx */
  EAX = (EDX);
  /* 10182ff0 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10182ff3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10182ff5 mov ebx, edx */
  EBX = (EDX);
L_10182ff7:;
  /* 10182ff7 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10182ffa mov eax, 0xf */
  EAX = (0xfu);
  /* 10182fff jg 0x10183003 */
  if ((!C.zf&&C.sf==C.of)) goto L_10183003;
  /* 10183001 mov eax, ebx */
  EAX = (EBX);
L_10183003:;
  /* 10183003 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183005 jge 0x10183016 */
  if ((C.sf==C.of)) goto L_10183016;
  /* 10183007 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10183009 push ebp */
  push32((uint32_t)(EBP));
  /* 1018300a push edi */
  push32((uint32_t)(EDI));
  /* 1018300b call 0x10182610 */
  push32(0x10183010u); f_10182610();
  /* 10183010 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183013 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10183014 jmp 0x10182ff7 */
  goto L_10182ff7;
L_10183016:;
  /* 10183016 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1018301a push ecx */
  push32((uint32_t)(ECX));
  /* 1018301b push edi */
  push32((uint32_t)(EDI));
  /* 1018301c push ebp */
  push32((uint32_t)(EBP));
  /* 1018301d call 0x10182f60 */
  push32(0x10183022u); f_10182f60();
  /* 10183022 push eax */
  push32((uint32_t)(EAX));
  /* 10183023 push edi */
  push32((uint32_t)(EDI));
  /* 10183024 push ebp */
  push32((uint32_t)(EBP));
  /* 10183025 call 0x10182610 */
  push32(0x1018302au); f_10182610();
  /* 1018302a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018302d mov al, 1 */
  AL = (0x1u);
  /* 1018302f pop edi */
  EDI = (pop32());
  /* 10183030 pop esi */
  ESI = (pop32());
  /* 10183031 pop ebp */
  EBP = (pop32());
  /* 10183032 pop ebx */
  EBX = (pop32());
  /* 10183033 ret  */
  ESPCHK(0x10182f90u, _esp0);
  ESP += 4; return;
L_10183034:;
  /* 10183034 pop edi */
  EDI = (pop32());
  /* 10183035 pop esi */
  ESI = (pop32());
  /* 10183036 pop ebp */
  EBP = (pop32());
  /* 10183037 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 10183039 pop ebx */
  EBX = (pop32());
  /* 1018303a ret  */
  ESPCHK(0x10182f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003040 @ 0x10183040 (369 bytes, 82 insns) */
void f_10183040(void) {
  FTRACE(0x10183040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10183040 push ebx */
  push32((uint32_t)(EBX));
  /* 10183041 push esi */
  push32((uint32_t)(ESI));
  /* 10183042 call dword ptr [0x10196500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196500))), 0x10183048u);
  /* 10183048 push 0x10196190 */
  push32((uint32_t)(0x10196190u));
  /* 1018304d mov dword ptr [0x101962b4], eax */
  w32((uint32_t)(0x101962b4), (EAX));
  /* 10183052 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10183058u);
  /* 10183058 mov ebx, 1 */
  EBX = (0x1u);
  /* 1018305d mov esi, eax */
  ESI = (EAX);
  /* 1018305f push ebx */
  push32((uint32_t)(EBX));
  /* 10183060 call 0x10182730 */
  push32(0x10183065u); f_10182730();
  /* 10183065 push 4 */
  push32((uint32_t)(0x4u));
  /* 10183067 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10183069 call 0x10182730 */
  push32(0x1018306eu); f_10182730();
  /* 1018306e push 5 */
  push32((uint32_t)(0x5u));
  /* 10183070 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10183072 call 0x10182730 */
  push32(0x10183077u); f_10182730();
  /* 10183077 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10183079 mov eax, dword ptr [0x101962b4] */
  EAX = (r32((uint32_t)(0x101962b4)));
  /* 1018307e push 3 */
  push32((uint32_t)(0x3u));
  /* 10183080 mov dword ptr [0x101961b0], esi */
  w32((uint32_t)(0x101961b0), (ESI));
  /* 10183086 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10183089 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1018308c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1018308f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 10183092 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10183095 mov ecx, dword ptr [eax + 0x10193af0] */
  ECX = (r32((uint32_t)(EAX + 0x10193af0)));
  /* 1018309b lea edx, [eax + 0x10193960] */
  EDX = ((uint32_t)(EAX + 0x10193960));
  /* 101830a1 mov dword ptr [0x101961c0], edx */
  w32((uint32_t)(0x101961c0), (EDX));
  /* 101830a7 lea edx, [eax + 0x10193af4] */
  EDX = ((uint32_t)(EAX + 0x10193af4));
  /* 101830ad mov dword ptr [0x10196604], ecx */
  w32((uint32_t)(0x10196604), (ECX));
  /* 101830b3 mov ecx, dword ptr [eax + 0x10193c84] */
  ECX = (r32((uint32_t)(EAX + 0x10193c84)));
  /* 101830b9 mov dword ptr [0x101961c4], edx */
  w32((uint32_t)(0x101961c4), (EDX));
  /* 101830bf lea edx, [eax + 0x10193c88] */
  EDX = ((uint32_t)(EAX + 0x10193c88));
  /* 101830c5 mov dword ptr [0x10196608], ecx */
  w32((uint32_t)(0x10196608), (ECX));
  /* 101830cb mov dword ptr [0x1019624c], edx */
  w32((uint32_t)(0x1019624c), (EDX));
  /* 101830d1 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101830d7u);
  /* 101830d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101830d9 mov dword ptr [0x10196290], eax */
  w32((uint32_t)(0x10196290), (EAX));
  /* 101830de call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101830e4u);
  /* 101830e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101830e6 mov dword ptr [0x10193620], eax */
  w32((uint32_t)(0x10193620), (EAX));
  /* 101830eb call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101830f1u);
  /* 101830f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101830f3 mov dword ptr [0x10196380], eax */
  w32((uint32_t)(0x10196380), (EAX));
  /* 101830f8 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101830feu);
  /* 101830fe push 5 */
  push32((uint32_t)(0x5u));
  /* 10183100 mov dword ptr [0x10193728], eax */
  w32((uint32_t)(0x10193728), (EAX));
  /* 10183105 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x1018310bu);
  /* 1018310b push ebx */
  push32((uint32_t)(EBX));
  /* 1018310c mov dword ptr [0x101960e8], eax */
  w32((uint32_t)(0x101960e8), (EAX));
  /* 10183111 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183117u);
  /* 10183117 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018311a mov dword ptr [0x10196338], eax */
  w32((uint32_t)(0x10196338), (EAX));
  /* 1018311f call 0x10182670 */
  push32(0x10183124u); f_10182670();
  /* 10183124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10183126 jne 0x10183132 */
  if (!C.zf) goto L_10183132;
  /* 10183128 mov dword ptr [0x1018f248], 4 */
  w32((uint32_t)(0x1018f248), (0x4u));
L_10183132:;
  /* 10183132 push 0x1018f114 */
  push32((uint32_t)(0x1018f114u));
  /* 10183137 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10183139 call dword ptr [0x1019650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019650c))), 0x1018313fu);
  /* 1018313f push 0x10196598 */
  push32((uint32_t)(0x10196598u));
  /* 10183144 call 0x10182720 */
  push32(0x10183149u); f_10182720();
  /* 10183149 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1018314b push 0x1018f244 */
  push32((uint32_t)(0x1018f244u));
  /* 10183150 call 0x10182700 */
  push32(0x10183155u); f_10182700();
  /* 10183155 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183158 mov byte ptr [0x10196188], bl */
  w8((uint32_t)(0x10196188), (BL));
  /* 1018315e mov byte ptr [0x1019618a], bl */
  w8((uint32_t)(0x1019618a), (BL));
  /* 10183164 mov byte ptr [0x1019618c], bl */
  w8((uint32_t)(0x1019618c), (BL));
  /* 1018316a mov byte ptr [0x1019618d], bl */
  w8((uint32_t)(0x1019618d), (BL));
  /* 10183170 mov byte ptr [0x10196323], bl */
  w8((uint32_t)(0x10196323), (BL));
  /* 10183176 mov byte ptr [0x10196321], bl */
  w8((uint32_t)(0x10196321), (BL));
  /* 1018317c mov byte ptr [0x10196324], bl */
  w8((uint32_t)(0x10196324), (BL));
  /* 10183182 mov byte ptr [0x10196325], bl */
  w8((uint32_t)(0x10196325), (BL));
  /* 10183188 pop esi */
  ESI = (pop32());
  /* 10183189 mov byte ptr [0x1019618b], 0 */
  w8((uint32_t)(0x1019618b), (0x0u));
  /* 10183190 mov byte ptr [0x10196189], 0 */
  w8((uint32_t)(0x10196189), (0x0u));
  /* 10183197 mov byte ptr [0x10196320], 0 */
  w8((uint32_t)(0x10196320), (0x0u));
  /* 1018319e mov byte ptr [0x10196322], 0 */
  w8((uint32_t)(0x10196322), (0x0u));
  /* 101831a5 mov dword ptr [0x1019664c], 0 */
  w32((uint32_t)(0x1019664c), (0x0u));
  /* 101831af pop ebx */
  EBX = (pop32());
  /* 101831b0 ret  */
  ESPCHK(0x10183040u, _esp0);
  ESP += 4; return;
}

/* FUN_100031c0 @ 0x101831c0 (85 bytes, 29 insns) */
void f_101831c0(void) {
  FTRACE(0x101831c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101831c0 mov eax, dword ptr [0x10195f58] */
  EAX = (r32((uint32_t)(0x10195f58)));
  /* 101831c5 push esi */
  push32((uint32_t)(ESI));
  /* 101831c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101831c9 jg 0x10183213 */
  if ((!C.zf&&C.sf==C.of)) goto L_10183213;
  /* 101831cb push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 101831d0 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101831d6u);
  /* 101831d6 mov ecx, eax */
  ECX = (EAX);
  /* 101831d8 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 101831dd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101831df sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 101831e2 mov eax, edx */
  EAX = (EDX);
  /* 101831e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101831e7 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101831ea add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101831ec mov esi, edx */
  ESI = (EDX);
  /* 101831ee je 0x10183213 */
  if (C.zf) goto L_10183213;
  /* 101831f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101831f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101831f4 push esi */
  push32((uint32_t)(ESI));
  /* 101831f5 push 0x10193700 */
  push32((uint32_t)(0x10193700u));
  /* 101831fa call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183200u);
  /* 10183200 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10183202 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10183204 push esi */
  push32((uint32_t)(ESI));
  /* 10183205 push 0x10193640 */
  push32((uint32_t)(0x10193640u));
  /* 1018320a call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183210u);
  /* 10183210 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183213:;
  /* 10183213 pop esi */
  ESI = (pop32());
  /* 10183214 ret  */
  ESPCHK(0x101831c0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x10183220 (1 bytes, 1 insns) */
void f_10183220(void) {
  FTRACE(0x10183220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10183220 ret  */
  ESPCHK(0x10183220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x10183230 (157 bytes, 43 insns) */
void f_10183230(void) {
  FTRACE(0x10183230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10183230 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10183232 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10183234 push 0x10196350 */
  push32((uint32_t)(0x10196350u));
  /* 10183239 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018323fu);
  /* 1018323f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10183241 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10183243 push 0x10196358 */
  push32((uint32_t)(0x10196358u));
  /* 10183248 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018324eu);
  /* 1018324e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10183250 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10183252 push 0x10196340 */
  push32((uint32_t)(0x10196340u));
  /* 10183257 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018325du);
  /* 1018325d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018325f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10183261 push 0x10196348 */
  push32((uint32_t)(0x10196348u));
  /* 10183266 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018326cu);
  /* 1018326c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018326e push 0xa */
  push32((uint32_t)(0xau));
  /* 10183270 push 0x10196360 */
  push32((uint32_t)(0x10196360u));
  /* 10183275 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018327bu);
  /* 1018327b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018327d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1018327f push 0x10196298 */
  push32((uint32_t)(0x10196298u));
  /* 10183284 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018328au);
  /* 1018328a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018328d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018328f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10183291 push 0x10196280 */
  push32((uint32_t)(0x10196280u));
  /* 10183296 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018329cu);
  /* 1018329c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018329e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101832a0 push 0x10196288 */
  push32((uint32_t)(0x10196288u));
  /* 101832a5 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101832abu);
  /* 101832ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101832ad push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101832af push 0x101962a0 */
  push32((uint32_t)(0x101962a0u));
  /* 101832b4 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101832bau);
  /* 101832ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101832bc push 0xa */
  push32((uint32_t)(0xau));
  /* 101832be push 0x101962a8 */
  push32((uint32_t)(0x101962a8u));
  /* 101832c3 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101832c9u);
  /* 101832c9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101832cc ret  */
  ESPCHK(0x10183230u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x101832d0 (79 bytes, 22 insns) */
void f_101832d0(void) {
  FTRACE(0x101832d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101832d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101832d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101832d4 push 0x10193910 */
  push32((uint32_t)(0x10193910u));
  /* 101832d9 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101832dfu);
  /* 101832df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101832e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101832e3 push 0x10193918 */
  push32((uint32_t)(0x10193918u));
  /* 101832e8 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101832eeu);
  /* 101832ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101832f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101832f2 push 0x10193908 */
  push32((uint32_t)(0x10193908u));
  /* 101832f7 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101832fdu);
  /* 101832fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101832ff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183301 push 0x10195f78 */
  push32((uint32_t)(0x10195f78u));
  /* 10183306 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018330cu);
  /* 1018330c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018330e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183310 push 0x10195f68 */
  push32((uint32_t)(0x10195f68u));
  /* 10183315 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018331bu);
  /* 1018331b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018331e ret  */
  ESPCHK(0x101832d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x10183320 (64 bytes, 18 insns) */
void f_10183320(void) {
  FTRACE(0x10183320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10183320 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10183322 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10183324 push 0x10196098 */
  push32((uint32_t)(0x10196098u));
  /* 10183329 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018332fu);
  /* 1018332f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10183331 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10183333 push 0x101960a0 */
  push32((uint32_t)(0x101960a0u));
  /* 10183338 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018333eu);
  /* 1018333e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10183340 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10183342 push 0x101960a8 */
  push32((uint32_t)(0x101960a8u));
  /* 10183347 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018334du);
  /* 1018334d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018334f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10183351 push 0x101960b0 */
  push32((uint32_t)(0x101960b0u));
  /* 10183356 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018335cu);
  /* 1018335c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018335f ret  */
  ESPCHK(0x10183320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x10183360 (3787 bytes, 1079 insns) */
void f_10183360(void) {
  FTRACE(0x10183360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10183360 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10183363 push ebx */
  push32((uint32_t)(EBX));
  /* 10183364 push ebp */
  push32((uint32_t)(EBP));
  /* 10183365 push esi */
  push32((uint32_t)(ESI));
  /* 10183366 push edi */
  push32((uint32_t)(EDI));
  /* 10183367 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1018336c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10183371 call dword ptr [0x10196518] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196518))), 0x10183377u);
  /* 10183377 push 0 */
  push32((uint32_t)(0x0u));
  /* 10183379 call 0x10182760 */
  push32(0x1018337eu); f_10182760();
  /* 1018337e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10183380 push 0 */
  push32((uint32_t)(0x0u));
  /* 10183382 call 0x10182640 */
  push32(0x10183387u); f_10182640();
  /* 10183387 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10183389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018338b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 1018338f call 0x10182640 */
  push32(0x10183394u); f_10182640();
  /* 10183394 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10183396 push 0 */
  push32((uint32_t)(0x0u));
  /* 10183398 mov edi, eax */
  EDI = (EAX);
  /* 1018339a call 0x10182640 */
  push32(0x1018339fu); f_10182640();
  /* 1018339f push 0xe */
  push32((uint32_t)(0xeu));
  /* 101833a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101833a3 mov esi, eax */
  ESI = (EAX);
  /* 101833a5 call 0x10182640 */
  push32(0x101833aau); f_10182640();
  /* 101833aa push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 101833af mov ebx, eax */
  EBX = (EAX);
  /* 101833b1 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x101833b7u);
  /* 101833b7 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101833ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101833bf add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101833c1 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 101833c5 push 0x101962d8 */
  push32((uint32_t)(0x101962d8u));
  /* 101833ca lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 101833cd mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 101833d1 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x101833d7u);
  /* 101833d7 push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 101833dc mov ebx, eax */
  EBX = (EAX);
  /* 101833de call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101833e4u);
  /* 101833e4 push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 101833e9 mov ebp, eax */
  EBP = (EAX);
  /* 101833eb call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x101833f1u);
  /* 101833f1 push 0x10195fe8 */
  push32((uint32_t)(0x10195fe8u));
  /* 101833f6 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 101833fa call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10183400u);
  /* 10183400 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183403 mov edi, eax */
  EDI = (EAX);
  /* 10183405 push 0x10195fe8 */
  push32((uint32_t)(0x10195fe8u));
  /* 1018340a call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10183410u);
  /* 10183410 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10183415 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10183419 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018341fu);
  /* 1018341f push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10183424 mov esi, eax */
  ESI = (EAX);
  /* 10183426 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x1018342cu);
  /* 1018342c push 0x101962d8 */
  push32((uint32_t)(0x101962d8u));
  /* 10183431 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 10183435 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018343bu);
  /* 1018343b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 1018343f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 10183443 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10183445 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10183449 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018344b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018344d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018344f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10183451 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10183453 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10183455 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10183457 push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 1018345c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018345e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 10183462 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183468u);
  /* 10183468 push 3 */
  push32((uint32_t)(0x3u));
  /* 1018346a mov bl, 1 */
  BL = (0x1u);
  /* 1018346c call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183472u);
  /* 10183472 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183475 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018347a jle 0x101834aa */
  if ((C.zf||C.sf!=C.of)) goto L_101834aa;
  /* 1018347c push 1 */
  push32((uint32_t)(0x1u));
  /* 1018347e call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183484u);
  /* 10183484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183487 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018348c jle 0x101834aa */
  if ((C.zf||C.sf!=C.of)) goto L_101834aa;
  /* 1018348e push 4 */
  push32((uint32_t)(0x4u));
  /* 10183490 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183496u);
  /* 10183496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183499 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018349e jle 0x101834aa */
  if ((C.zf||C.sf!=C.of)) goto L_101834aa;
  /* 101834a0 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 101834a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101834a6 jne 0x101834aa */
  if (!C.zf) goto L_101834aa;
  /* 101834a8 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_101834aa:;
  /* 101834aa push 0x10196190 */
  push32((uint32_t)(0x10196190u));
  /* 101834af call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101834b5u);
  /* 101834b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 101834b7 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 101834bb call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101834c1u);
  /* 101834c1 push 0x101961b8 */
  push32((uint32_t)(0x101961b8u));
  /* 101834c6 mov esi, eax */
  ESI = (EAX);
  /* 101834c8 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101834ceu);
  /* 101834ce push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 101834d3 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 101834d7 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101834ddu);
  /* 101834dd push 0x101960e0 */
  push32((uint32_t)(0x101960e0u));
  /* 101834e2 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101834e8u);
  /* 101834e8 push 0x101963b0 */
  push32((uint32_t)(0x101963b0u));
  /* 101834ed mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 101834f1 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101834f7u);
  /* 101834f7 push 0x10196330 */
  push32((uint32_t)(0x10196330u));
  /* 101834fc mov edi, eax */
  EDI = (EAX);
  /* 101834fe call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10183504u);
  /* 10183504 push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 10183509 mov ebp, eax */
  EBP = (EAX);
  /* 1018350b call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10183511u);
  /* 10183511 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10183513 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10183515 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10183517 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10183519 push 0x10196110 */
  push32((uint32_t)(0x10196110u));
  /* 1018351e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 10183522 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 10183527 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018352du);
  /* 1018352d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1018352f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10183531 push 0x10196150 */
  push32((uint32_t)(0x10196150u));
  /* 10183536 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018353cu);
  /* 1018353c push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 10183541 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10183547u);
  /* 10183547 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 1018354c mov edi, eax */
  EDI = (EAX);
  /* 1018354e call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10183554u);
  /* 10183554 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183557 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10183559 je 0x10183560 */
  if (C.zf) goto L_10183560;
  /* 1018355b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_10183560:;
  /* 10183560 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10183564 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 10183566 je 0x10183f2d */
  if (C.zf) goto L_10183f2d;
  /* 1018356c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018356e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10183570 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183572 push 0x10195fd8 */
  push32((uint32_t)(0x10195fd8u));
  /* 10183577 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018357du);
  /* 1018357d push 0x10195fd8 */
  push32((uint32_t)(0x10195fd8u));
  /* 10183582 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10183588u);
  /* 10183588 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018358b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018358d je 0x10184223 */
  if (C.zf) goto L_10184223;
  /* 10183593 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10183595 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10183597 push 0x10196378 */
  push32((uint32_t)(0x10196378u));
  /* 1018359c call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101835a2u);
  /* 101835a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101835a5 call dword ptr [0x10196570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196570))), 0x101835abu);
  /* 101835ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101835ad jne 0x101835f0 */
  if (!C.zf) goto L_101835f0;
  /* 101835af cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101835b5 jle 0x101835dc */
  if ((C.zf||C.sf!=C.of)) goto L_101835dc;
  /* 101835b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101835b9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101835bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101835bd push 0x10196190 */
  push32((uint32_t)(0x10196190u));
  /* 101835c2 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101835c8u);
  /* 101835c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101835ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101835cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101835ce push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 101835d3 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101835d9u);
  /* 101835d9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101835dc:;
  /* 101835dc push 1 */
  push32((uint32_t)(0x1u));
  /* 101835de push 1 */
  push32((uint32_t)(0x1u));
  /* 101835e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 101835e2 call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x101835e8u);
  /* 101835e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101835eb jmp 0x101836fe */
  goto L_101836fe;
L_101835f0:;
  /* 101835f0 push 0x101937a0 */
  push32((uint32_t)(0x101937a0u));
  /* 101835f5 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x101835fbu);
  /* 101835fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101835fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183600 je 0x1018362a */
  if (C.zf) goto L_1018362a;
  /* 10183602 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183608 jle 0x10183612 */
  if ((C.zf||C.sf!=C.of)) goto L_10183612;
  /* 1018360a push 6 */
  push32((uint32_t)(0x6u));
  /* 1018360c push 8 */
  push32((uint32_t)(0x8u));
  /* 1018360e push 9 */
  push32((uint32_t)(0x9u));
  /* 10183610 jmp 0x10183650 */
  goto L_10183650;
L_10183612:;
  /* 10183612 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183618 jle 0x10183622 */
  if ((C.zf||C.sf!=C.of)) goto L_10183622;
  /* 1018361a push 3 */
  push32((uint32_t)(0x3u));
  /* 1018361c push 5 */
  push32((uint32_t)(0x5u));
  /* 1018361e push 9 */
  push32((uint32_t)(0x9u));
  /* 10183620 jmp 0x10183650 */
  goto L_10183650;
L_10183622:;
  /* 10183622 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183624 push 4 */
  push32((uint32_t)(0x4u));
  /* 10183626 push 9 */
  push32((uint32_t)(0x9u));
  /* 10183628 jmp 0x10183650 */
  goto L_10183650;
L_1018362a:;
  /* 1018362a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183630 jle 0x1018363a */
  if ((C.zf||C.sf!=C.of)) goto L_1018363a;
  /* 10183632 push 8 */
  push32((uint32_t)(0x8u));
  /* 10183634 push 8 */
  push32((uint32_t)(0x8u));
  /* 10183636 push 9 */
  push32((uint32_t)(0x9u));
  /* 10183638 jmp 0x10183650 */
  goto L_10183650;
L_1018363a:;
  /* 1018363a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183640 jle 0x1018364a */
  if ((C.zf||C.sf!=C.of)) goto L_1018364a;
  /* 10183642 push 5 */
  push32((uint32_t)(0x5u));
  /* 10183644 push 5 */
  push32((uint32_t)(0x5u));
  /* 10183646 push 9 */
  push32((uint32_t)(0x9u));
  /* 10183648 jmp 0x10183650 */
  goto L_10183650;
L_1018364a:;
  /* 1018364a push 4 */
  push32((uint32_t)(0x4u));
  /* 1018364c push 4 */
  push32((uint32_t)(0x4u));
  /* 1018364e push 0xa */
  push32((uint32_t)(0xau));
L_10183650:;
  /* 10183650 call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x10183656u);
  /* 10183656 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 1018365a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018365d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018365f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 10183664 je 0x1018366b */
  if (C.zf) goto L_1018366b;
  /* 10183666 mov edi, 0x12c */
  EDI = (0x12cu);
L_1018366b:;
  /* 1018366b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018366e jge 0x1018368c */
  if ((C.sf==C.of)) goto L_1018368c;
  /* 10183670 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183676 jle 0x1018368c */
  if ((C.zf||C.sf!=C.of)) goto L_1018368c;
  /* 10183678 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018367a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018367c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018367e push 0x10196190 */
  push32((uint32_t)(0x10196190u));
  /* 10183683 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183689u);
  /* 10183689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018368c:;
  /* 1018368c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183692 jle 0x101836cd */
  if ((C.zf||C.sf!=C.of)) goto L_101836cd;
  /* 10183694 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10183696 je 0x101836b2 */
  if (C.zf) goto L_101836b2;
  /* 10183698 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018369a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 1018369f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101836a4 push 0x10196190 */
  push32((uint32_t)(0x10196190u));
  /* 101836a9 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101836afu);
  /* 101836af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101836b2:;
  /* 101836b2 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101836b8 jle 0x101836cd */
  if ((C.zf||C.sf!=C.of)) goto L_101836cd;
  /* 101836ba push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101836bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101836be push edi */
  push32((uint32_t)(EDI));
  /* 101836bf push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 101836c4 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101836cau);
  /* 101836ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101836cd:;
  /* 101836cd push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 101836d2 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x101836d8u);
  /* 101836d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101836db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101836dd je 0x101836fe */
  if (C.zf) goto L_101836fe;
  /* 101836df cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101836e5 jle 0x101836fe */
  if ((C.zf||C.sf!=C.of)) goto L_101836fe;
  /* 101836e7 push 0x101962d8 */
  push32((uint32_t)(0x101962d8u));
  /* 101836ec call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101836f2u);
  /* 101836f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101836f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101836f7 jle 0x101836fe */
  if ((C.zf||C.sf!=C.of)) goto L_101836fe;
  /* 101836f9 call 0x10183230 */
  push32(0x101836feu); f_10183230();
L_101836fe:;
  /* 101836fe mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 10183702 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10183704 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183707 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10183709 jge 0x1018370f */
  if ((C.sf==C.of)) goto L_1018370f;
  /* 1018370b push 5 */
  push32((uint32_t)(0x5u));
  /* 1018370d jmp 0x10183713 */
  goto L_10183713;
L_1018370f:;
  /* 1018370f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10183712 push eax */
  push32((uint32_t)(EAX));
L_10183713:;
  /* 10183713 push 0x10195f90 */
  push32((uint32_t)(0x10195f90u));
  /* 10183718 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018371eu);
  /* 1018371e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 10183722 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183725 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018372a jge 0x10183740 */
  if ((C.sf==C.of)) goto L_10183740;
  /* 1018372c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1018372e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10183730 push 0x101938e8 */
  push32((uint32_t)(0x101938e8u));
  /* 10183735 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018373bu);
  /* 1018373b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018373e jmp 0x1018377a */
  goto L_1018377a;
L_10183740:;
  /* 10183740 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 10183743 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10183745 push ecx */
  push32((uint32_t)(ECX));
  /* 10183746 push 0x101938e8 */
  push32((uint32_t)(0x101938e8u));
  /* 1018374b call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183751u);
  /* 10183751 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10183753 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 10183756 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10183758 push edx */
  push32((uint32_t)(EDX));
  /* 10183759 push 0x101938e8 */
  push32((uint32_t)(0x101938e8u));
  /* 1018375e call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183764u);
  /* 10183764 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10183766 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10183769 push 0xa */
  push32((uint32_t)(0xau));
  /* 1018376b push edi */
  push32((uint32_t)(EDI));
  /* 1018376c push 0x101938e8 */
  push32((uint32_t)(0x101938e8u));
  /* 10183771 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183777u);
  /* 10183777 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018377a:;
  /* 1018377a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1018377c push 0 */
  push32((uint32_t)(0x0u));
  /* 1018377e call 0x10182640 */
  push32(0x10183783u); f_10182640();
  /* 10183783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10183788 je 0x101837e7 */
  if (C.zf) goto L_101837e7;
  /* 1018378a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018378c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018378e push 0x101962e8 */
  push32((uint32_t)(0x101962e8u));
  /* 10183793 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183799u);
  /* 10183799 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018379b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018379d push 0x101962d0 */
  push32((uint32_t)(0x101962d0u));
  /* 101837a2 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101837a8u);
  /* 101837a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101837aa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101837ac push 0x101962e0 */
  push32((uint32_t)(0x101962e0u));
  /* 101837b1 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101837b7u);
  /* 101837b7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101837b9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101837bb push 0x101962c0 */
  push32((uint32_t)(0x101962c0u));
  /* 101837c0 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101837c6u);
  /* 101837c6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101837c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101837ca push 0x101962c8 */
  push32((uint32_t)(0x101962c8u));
  /* 101837cf call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101837d5u);
  /* 101837d5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101837d7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101837d9 push 0x101962b8 */
  push32((uint32_t)(0x101962b8u));
  /* 101837de call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101837e4u);
  /* 101837e4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101837e7:;
  /* 101837e7 push 0xa */
  push32((uint32_t)(0xau));
  /* 101837e9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101837eb push 3 */
  push32((uint32_t)(0x3u));
  /* 101837ed push 0x101938a0 */
  push32((uint32_t)(0x101938a0u));
  /* 101837f2 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101837f8u);
  /* 101837f8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101837fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101837fc push 1 */
  push32((uint32_t)(0x1u));
  /* 101837fe push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 10183803 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183809u);
  /* 10183809 push 5 */
  push32((uint32_t)(0x5u));
  /* 1018380b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1018380d push 2 */
  push32((uint32_t)(0x2u));
  /* 1018380f push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 10183814 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018381au);
  /* 1018381a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 1018381e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183821 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10183823 jne 0x10183839 */
  if (!C.zf) goto L_10183839;
  /* 10183825 push 5 */
  push32((uint32_t)(0x5u));
  /* 10183827 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10183829 push 3 */
  push32((uint32_t)(0x3u));
  /* 1018382b push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 10183830 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183836u);
  /* 10183836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183839:;
  /* 10183839 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018383b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018383d push 1 */
  push32((uint32_t)(0x1u));
  /* 1018383f push 0x101961e8 */
  push32((uint32_t)(0x101961e8u));
  /* 10183844 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018384au);
  /* 1018384a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018384c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018384e push 1 */
  push32((uint32_t)(0x1u));
  /* 10183850 push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 10183855 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018385bu);
  /* 1018385b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018385d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018385f push 1 */
  push32((uint32_t)(0x1u));
  /* 10183861 push 0x10195fd0 */
  push32((uint32_t)(0x10195fd0u));
  /* 10183866 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018386cu);
  /* 1018386c push 5 */
  push32((uint32_t)(0x5u));
  /* 1018386e push 0xa */
  push32((uint32_t)(0xau));
  /* 10183870 push 2 */
  push32((uint32_t)(0x2u));
  /* 10183872 push 0x101961e8 */
  push32((uint32_t)(0x101961e8u));
  /* 10183877 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018387du);
  /* 1018387d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183880 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183882 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10183884 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183886 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 1018388b call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183891u);
  /* 10183891 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10183893 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10183895 push 0x10193660 */
  push32((uint32_t)(0x10193660u));
  /* 1018389a call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101838a0u);
  /* 101838a0 push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 101838a5 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101838abu);
  /* 101838ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101838ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101838b0 jle 0x101838d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101838d7;
  /* 101838b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101838b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101838b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101838b8 push 0x10193878 */
  push32((uint32_t)(0x10193878u));
  /* 101838bd call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101838c3u);
  /* 101838c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101838c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101838c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101838c9 push 0x101960f8 */
  push32((uint32_t)(0x101960f8u));
  /* 101838ce call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101838d4u);
  /* 101838d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101838d7:;
  /* 101838d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101838d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101838db push 1 */
  push32((uint32_t)(0x1u));
  /* 101838dd push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 101838e2 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101838e8u);
  /* 101838e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101838eb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101838ed jne 0x10183903 */
  if (!C.zf) goto L_10183903;
  /* 101838ef push 0xa */
  push32((uint32_t)(0xau));
  /* 101838f1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101838f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101838f5 push 0x10195fe8 */
  push32((uint32_t)(0x10195fe8u));
  /* 101838fa call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183900u);
  /* 10183900 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183903:;
  /* 10183903 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183905 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183907 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183909 push 0x10193618 */
  push32((uint32_t)(0x10193618u));
  /* 1018390e call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183914u);
  /* 10183914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183917 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018391a jle 0x10183930 */
  if ((C.zf||C.sf!=C.of)) goto L_10183930;
  /* 1018391c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1018391e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10183920 push 2 */
  push32((uint32_t)(0x2u));
  /* 10183922 push 0x10195fd8 */
  push32((uint32_t)(0x10195fd8u));
  /* 10183927 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018392du);
  /* 1018392d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183930:;
  /* 10183930 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10183932 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183934 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183936 push 0x10196258 */
  push32((uint32_t)(0x10196258u));
  /* 1018393b call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183941u);
  /* 10183941 push 5 */
  push32((uint32_t)(0x5u));
  /* 10183943 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10183945 push 2 */
  push32((uint32_t)(0x2u));
  /* 10183947 push 0x10196258 */
  push32((uint32_t)(0x10196258u));
  /* 1018394c call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183952u);
  /* 10183952 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10183954 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183956 push 0x10196078 */
  push32((uint32_t)(0x10196078u));
  /* 1018395b call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183961u);
  /* 10183961 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10183963 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183965 push 0x10196030 */
  push32((uint32_t)(0x10196030u));
  /* 1018396a call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183970u);
  /* 10183970 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10183972 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183974 push 0x10196038 */
  push32((uint32_t)(0x10196038u));
  /* 10183979 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018397fu);
  /* 1018397f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183982 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10183984 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183986 push 0x10196040 */
  push32((uint32_t)(0x10196040u));
  /* 1018398b call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183991u);
  /* 10183991 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10183993 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10183995 push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 1018399a call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101839a0u);
  /* 101839a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101839a2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101839a4 push 0x101961b8 */
  push32((uint32_t)(0x101961b8u));
  /* 101839a9 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101839afu);
  /* 101839af push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101839b1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101839b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101839b5 push 0x101962d8 */
  push32((uint32_t)(0x101962d8u));
  /* 101839ba call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101839c0u);
  /* 101839c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 101839c2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101839c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101839c6 push 0x101962d8 */
  push32((uint32_t)(0x101962d8u));
  /* 101839cb call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101839d1u);
  /* 101839d1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101839d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101839d6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101839d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 101839da push 0x101962d8 */
  push32((uint32_t)(0x101962d8u));
  /* 101839df call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101839e5u);
  /* 101839e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101839e7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101839e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 101839eb push 0x101962d8 */
  push32((uint32_t)(0x101962d8u));
  /* 101839f0 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101839f6u);
  /* 101839f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101839f8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101839fa push 0x10193958 */
  push32((uint32_t)(0x10193958u));
  /* 101839ff call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183a05u);
  /* 10183a05 call 0x10182630 */
  push32(0x10183a0au); f_10182630();
  /* 10183a0a push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 10183a0f mov edi, eax */
  EDI = (EAX);
  /* 10183a11 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10183a17u);
  /* 10183a17 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183a1a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183a1c je 0x10183a3f */
  if (C.zf) goto L_10183a3f;
  /* 10183a1e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183a20 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183a22 push 0x10193958 */
  push32((uint32_t)(0x10193958u));
  /* 10183a27 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183a2du);
  /* 10183a2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10183a2f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10183a31 push 0x10193870 */
  push32((uint32_t)(0x10193870u));
  /* 10183a36 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183a3cu);
  /* 10183a3c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183a3f:;
  /* 10183a3f push 0x10193958 */
  push32((uint32_t)(0x10193958u));
  /* 10183a44 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10183a4au);
  /* 10183a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183a4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183a4f je 0x10183a77 */
  if (C.zf) goto L_10183a77;
  /* 10183a51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183a53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183a55 push 0x10193940 */
  push32((uint32_t)(0x10193940u));
  /* 10183a5a call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183a60u);
  /* 10183a60 push 0xa */
  push32((uint32_t)(0xau));
  /* 10183a62 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10183a64 push 0x10193880 */
  push32((uint32_t)(0x10193880u));
  /* 10183a69 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183a6fu);
  /* 10183a6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183a72 call 0x10183320 */
  push32(0x10183a77u); f_10183320();
L_10183a77:;
  /* 10183a77 push 0x101960b0 */
  push32((uint32_t)(0x101960b0u));
  /* 10183a7c call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10183a82u);
  /* 10183a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183a85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183a87 je 0x10183aae */
  if (C.zf) goto L_10183aae;
  /* 10183a89 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183a8b push 0xa */
  push32((uint32_t)(0xau));
  /* 10183a8d push 0xa */
  push32((uint32_t)(0xau));
  /* 10183a8f push 0x10193668 */
  push32((uint32_t)(0x10193668u));
  /* 10183a94 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183a9au);
  /* 10183a9a push 0xa */
  push32((uint32_t)(0xau));
  /* 10183a9c push 3 */
  push32((uint32_t)(0x3u));
  /* 10183a9e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10183aa0 push 0x10193668 */
  push32((uint32_t)(0x10193668u));
  /* 10183aa5 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183aabu);
  /* 10183aab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183aae:;
  /* 10183aae push 0 */
  push32((uint32_t)(0x0u));
  /* 10183ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183ab2 call 0x101825f0 */
  push32(0x10183ab7u); f_101825f0();
  /* 10183ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10183ab9 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183abfu);
  /* 10183abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183ac2 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183ac7 jle 0x10183b0b */
  if ((C.zf||C.sf!=C.of)) goto L_10183b0b;
  /* 10183ac9 push 0x101937a0 */
  push32((uint32_t)(0x101937a0u));
  /* 10183ace call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10183ad4u);
  /* 10183ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183ad7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183ad9 je 0x10183b0b */
  if (C.zf) goto L_10183b0b;
  /* 10183adb push 1 */
  push32((uint32_t)(0x1u));
  /* 10183add call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183ae3u);
  /* 10183ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183ae6 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183aeb jge 0x10183b0b */
  if ((C.sf==C.of)) goto L_10183b0b;
  /* 10183aed push 0x10193958 */
  push32((uint32_t)(0x10193958u));
  /* 10183af2 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10183af8u);
  /* 10183af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183afb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183afd jne 0x10183b0b */
  if (!C.zf) goto L_10183b0b;
  /* 10183aff push 1 */
  push32((uint32_t)(0x1u));
  /* 10183b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183b03 call 0x101825f0 */
  push32(0x10183b08u); f_101825f0();
  /* 10183b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183b0b:;
  /* 10183b0b push 0x10193958 */
  push32((uint32_t)(0x10193958u));
  /* 10183b10 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10183b16u);
  /* 10183b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183b19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183b1b je 0x10183c9c */
  if (C.zf) goto L_10183c9c;
  /* 10183b21 push 0x101960f0 */
  push32((uint32_t)(0x101960f0u));
  /* 10183b26 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10183b2cu);
  /* 10183b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183b2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183b31 je 0x10183c9c */
  if (C.zf) goto L_10183c9c;
  /* 10183b37 push 0x101961b8 */
  push32((uint32_t)(0x101961b8u));
  /* 10183b3c call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10183b42u);
  /* 10183b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183b45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183b47 je 0x10183c9c */
  if (C.zf) goto L_10183c9c;
  /* 10183b4d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183b50 je 0x10183b57 */
  if (C.zf) goto L_10183b57;
  /* 10183b52 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183b55 jne 0x10183b87 */
  if (!C.zf) goto L_10183b87;
L_10183b57:;
  /* 10183b57 push 3 */
  push32((uint32_t)(0x3u));
  /* 10183b59 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183b5fu);
  /* 10183b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183b62 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183b67 jle 0x10183b87 */
  if ((C.zf||C.sf!=C.of)) goto L_10183b87;
  /* 10183b69 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183b6b call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183b71u);
  /* 10183b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183b74 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183b79 jge 0x10183b87 */
  if ((C.sf==C.of)) goto L_10183b87;
  /* 10183b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10183b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10183b7f call 0x101825f0 */
  push32(0x10183b84u); f_101825f0();
  /* 10183b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183b87:;
  /* 10183b87 push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 10183b8c call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10183b92u);
  /* 10183b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183b95 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183b97 jne 0x10183bc9 */
  if (!C.zf) goto L_10183bc9;
  /* 10183b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10183b9b call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183ba1u);
  /* 10183ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183ba4 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183ba9 jle 0x10183bc9 */
  if ((C.zf||C.sf!=C.of)) goto L_10183bc9;
  /* 10183bab push 1 */
  push32((uint32_t)(0x1u));
  /* 10183bad call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183bb3u);
  /* 10183bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183bb6 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183bbb jge 0x10183bc9 */
  if ((C.sf==C.of)) goto L_10183bc9;
  /* 10183bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10183bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10183bc1 call 0x101825f0 */
  push32(0x10183bc6u); f_101825f0();
  /* 10183bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183bc9:;
  /* 10183bc9 push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 10183bce call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10183bd4u);
  /* 10183bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183bd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183bd9 je 0x10183c9c */
  if (C.zf) goto L_10183c9c;
  /* 10183bdf cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183be2 jne 0x10183c22 */
  if (!C.zf) goto L_10183c22;
  /* 10183be4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10183be6 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183becu);
  /* 10183bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183bef cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183bf4 jle 0x10183cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10183cf7;
  /* 10183bfa push 4 */
  push32((uint32_t)(0x4u));
  /* 10183bfc call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183c02u);
  /* 10183c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183c05 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183c0a jle 0x10183cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10183cf7;
  /* 10183c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183c12 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183c18u);
  /* 10183c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183c1b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183c20 jmp 0x10183c8c */
  goto L_10183c8c;
L_10183c22:;
  /* 10183c22 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183c25 jne 0x10183c65 */
  if (!C.zf) goto L_10183c65;
  /* 10183c27 push 3 */
  push32((uint32_t)(0x3u));
  /* 10183c29 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183c2fu);
  /* 10183c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183c32 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183c37 jle 0x10183cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10183cf7;
  /* 10183c3d push 4 */
  push32((uint32_t)(0x4u));
  /* 10183c3f call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183c45u);
  /* 10183c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183c48 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183c4d jle 0x10183cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10183cf7;
  /* 10183c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183c55 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183c5bu);
  /* 10183c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183c5e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183c63 jmp 0x10183c8c */
  goto L_10183c8c;
L_10183c65:;
  /* 10183c65 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183c68 jne 0x10183c9c */
  if (!C.zf) goto L_10183c9c;
  /* 10183c6a push 3 */
  push32((uint32_t)(0x3u));
  /* 10183c6c call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183c72u);
  /* 10183c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183c75 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183c7a jle 0x10183cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10183cf7;
  /* 10183c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10183c7e call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183c84u);
  /* 10183c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183c87 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10183c8c:;
  /* 10183c8c jge 0x10183cf7 */
  if ((C.sf==C.of)) goto L_10183cf7;
  /* 10183c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10183c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183c92 call 0x101825f0 */
  push32(0x10183c97u); f_101825f0();
  /* 10183c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183c9a jmp 0x10183cf7 */
  goto L_10183cf7;
L_10183c9c:;
  /* 10183c9c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183c9f jne 0x10183cf7 */
  if (!C.zf) goto L_10183cf7;
  /* 10183ca1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10183ca3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10183ca5 push 0x10193768 */
  push32((uint32_t)(0x10193768u));
  /* 10183caa call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183cb0u);
  /* 10183cb0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10183cb2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10183cb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183cb6 push 0x10196398 */
  push32((uint32_t)(0x10196398u));
  /* 10183cbb call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183cc1u);
  /* 10183cc1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10183cc3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10183cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10183cc7 push 0x10196398 */
  push32((uint32_t)(0x10196398u));
  /* 10183ccc call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183cd2u);
  /* 10183cd2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10183cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10183cd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10183cd8 push 0x10196398 */
  push32((uint32_t)(0x10196398u));
  /* 10183cdd call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183ce3u);
  /* 10183ce3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10183ce5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10183ce7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10183ce9 push 0x10196398 */
  push32((uint32_t)(0x10196398u));
  /* 10183cee call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183cf4u);
  /* 10183cf4 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183cf7:;
  /* 10183cf7 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183cfa jle 0x10183d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10183d53;
  /* 10183cfc mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10183d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183d02 je 0x10183d53 */
  if (C.zf) goto L_10183d53;
  /* 10183d04 push 0xa */
  push32((uint32_t)(0xau));
  /* 10183d06 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10183d08 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183d0a push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 10183d0f call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183d15u);
  /* 10183d15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183d18 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183d1b jle 0x10183d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10183d53;
  /* 10183d1d push 0xa */
  push32((uint32_t)(0xau));
  /* 10183d1f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10183d21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10183d23 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 10183d28 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183d2eu);
  /* 10183d2e push 0xa */
  push32((uint32_t)(0xau));
  /* 10183d30 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10183d32 push 3 */
  push32((uint32_t)(0x3u));
  /* 10183d34 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 10183d39 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183d3fu);
  /* 10183d3f push 0xa */
  push32((uint32_t)(0xau));
  /* 10183d41 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10183d43 push 4 */
  push32((uint32_t)(0x4u));
  /* 10183d45 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 10183d4a call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183d50u);
  /* 10183d50 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183d53:;
  /* 10183d53 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 10183d57 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10183d59 je 0x10183d97 */
  if (C.zf) goto L_10183d97;
  /* 10183d5b push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 10183d60 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10183d66u);
  /* 10183d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183d69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183d6b je 0x10183d97 */
  if (C.zf) goto L_10183d97;
  /* 10183d6d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10183d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10183d71 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10183d73 push 0x10196160 */
  push32((uint32_t)(0x10196160u));
  /* 10183d78 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183d7eu);
  /* 10183d7e push 0x10196198 */
  push32((uint32_t)(0x10196198u));
  /* 10183d83 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10183d89u);
  /* 10183d89 push 0x101960b0 */
  push32((uint32_t)(0x101960b0u));
  /* 10183d8e call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10183d94u);
  /* 10183d94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183d97:;
  /* 10183d97 push 0x10193618 */
  push32((uint32_t)(0x10193618u));
  /* 10183d9c call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10183da2u);
  /* 10183da2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183da4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183da6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10183da8 push 0x101961f0 */
  push32((uint32_t)(0x101961f0u));
  /* 10183dad call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183db3u);
  /* 10183db3 push 0x101960f0 */
  push32((uint32_t)(0x101960f0u));
  /* 10183db8 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10183dbeu);
  /* 10183dbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183dc1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183dc3 je 0x10183dd9 */
  if (C.zf) goto L_10183dd9;
  /* 10183dc5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183dc7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10183dc9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10183dcb push 0x101961f0 */
  push32((uint32_t)(0x101961f0u));
  /* 10183dd0 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183dd6u);
  /* 10183dd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183dd9:;
  /* 10183dd9 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10183ddb je 0x10183ec5 */
  if (C.zf) goto L_10183ec5;
  /* 10183de1 push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 10183de6 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10183decu);
  /* 10183dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183df1 je 0x10183ec5 */
  if (C.zf) goto L_10183ec5;
  /* 10183df7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10183df9 jne 0x10183e31 */
  if (!C.zf) goto L_10183e31;
  /* 10183dfb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10183dfd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183dff push 2 */
  push32((uint32_t)(0x2u));
  /* 10183e01 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10183e06 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183e0cu);
  /* 10183e0c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10183e0e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183e10 push 3 */
  push32((uint32_t)(0x3u));
  /* 10183e12 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10183e17 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183e1du);
  /* 10183e1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10183e1f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183e21 push 4 */
  push32((uint32_t)(0x4u));
  /* 10183e23 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10183e28 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183e2eu);
  /* 10183e2e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183e31:;
  /* 10183e31 push 0x101960e0 */
  push32((uint32_t)(0x101960e0u));
  /* 10183e36 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10183e3cu);
  /* 10183e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183e3f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183e42 jle 0x10183e65 */
  if ((C.zf||C.sf!=C.of)) goto L_10183e65;
  /* 10183e44 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10183e46 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183e48 push 0x10196208 */
  push32((uint32_t)(0x10196208u));
  /* 10183e4d call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183e53u);
  /* 10183e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10183e55 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10183e57 push 0x10196210 */
  push32((uint32_t)(0x10196210u));
  /* 10183e5c call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183e62u);
  /* 10183e62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183e65:;
  /* 10183e65 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183e67 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10183e69 push 0x101960f0 */
  push32((uint32_t)(0x101960f0u));
  /* 10183e6e call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183e74u);
  /* 10183e74 push 0x10193908 */
  push32((uint32_t)(0x10193908u));
  /* 10183e79 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10183e7fu);
  /* 10183e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183e82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183e84 je 0x10183ec5 */
  if (C.zf) goto L_10183ec5;
  /* 10183e86 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183e88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183e8a push 0x10196168 */
  push32((uint32_t)(0x10196168u));
  /* 10183e8f call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183e95u);
  /* 10183e95 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183e97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183e99 push 0x10196178 */
  push32((uint32_t)(0x10196178u));
  /* 10183e9e call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183ea4u);
  /* 10183ea4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183ea6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10183ea8 push 0x10196180 */
  push32((uint32_t)(0x10196180u));
  /* 10183ead call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183eb3u);
  /* 10183eb3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183eb5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10183eb7 push 0x10196170 */
  push32((uint32_t)(0x10196170u));
  /* 10183ebc call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183ec2u);
  /* 10183ec2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183ec5:;
  /* 10183ec5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10183ec7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10183ec9 push 0x101937a0 */
  push32((uint32_t)(0x101937a0u));
  /* 10183ece call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183ed4u);
  /* 10183ed4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183ed6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10183ed8 push 0x101938e0 */
  push32((uint32_t)(0x101938e0u));
  /* 10183edd call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183ee3u);
  /* 10183ee3 push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 10183ee8 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10183eeeu);
  /* 10183eee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183ef1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183ef4 jle 0x10183f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10183f31;
  /* 10183ef6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10183efa cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183eff jle 0x10183f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10183f31;
  /* 10183f01 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 10183f04 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10183f08 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10183f0b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183f0d jge 0x10183f26 */
  if ((C.sf==C.of)) goto L_10183f26;
  /* 10183f0f push 0xa */
  push32((uint32_t)(0xau));
  /* 10183f11 push 0xa */
  push32((uint32_t)(0xau));
  /* 10183f13 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10183f18 push 0x101960e0 */
  push32((uint32_t)(0x101960e0u));
  /* 10183f1d call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183f23u);
  /* 10183f23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183f26:;
  /* 10183f26 call 0x101832d0 */
  push32(0x10183f2bu); f_101832d0();
  /* 10183f2b jmp 0x10183f31 */
  goto L_10183f31;
L_10183f2d:;
  /* 10183f2d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_10183f31:;
  /* 10183f31 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10183f33 je 0x10183f76 */
  if (C.zf) goto L_10183f76;
  /* 10183f35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183f37 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10183f39 push 0x10193630 */
  push32((uint32_t)(0x10193630u));
  /* 10183f3e call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183f44u);
  /* 10183f44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183f46 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10183f48 push 0x10193708 */
  push32((uint32_t)(0x10193708u));
  /* 10183f4d call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183f53u);
  /* 10183f53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183f55 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10183f57 push 0x10193628 */
  push32((uint32_t)(0x10193628u));
  /* 10183f5c call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183f62u);
  /* 10183f62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183f64 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10183f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10183f68 push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 10183f6d call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10183f73u);
  /* 10183f73 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183f76:;
  /* 10183f76 push 0x101937a0 */
  push32((uint32_t)(0x101937a0u));
  /* 10183f7b call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10183f81u);
  /* 10183f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183f84 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183f86 je 0x10183fa9 */
  if (C.zf) goto L_10183fa9;
  /* 10183f88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183f8a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10183f8c push 0x101961f8 */
  push32((uint32_t)(0x101961f8u));
  /* 10183f91 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183f97u);
  /* 10183f97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10183f99 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10183f9b push 0x10196200 */
  push32((uint32_t)(0x10196200u));
  /* 10183fa0 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10183fa6u);
  /* 10183fa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10183fa9:;
  /* 10183fa9 push 0x10193878 */
  push32((uint32_t)(0x10193878u));
  /* 10183fae call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10183fb4u);
  /* 10183fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183fb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10183fb9 je 0x10184223 */
  if (C.zf) goto L_10184223;
  /* 10183fbf push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 10183fc4 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10183fcau);
  /* 10183fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10183fcf je 0x1018402a */
  if (C.zf) goto L_1018402a;
  /* 10183fd1 push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 10183fd6 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10183fdcu);
  /* 10183fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183fdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10183fe1 jne 0x1018402a */
  if (!C.zf) goto L_1018402a;
  /* 10183fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10183fe5 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183febu);
  /* 10183feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10183fee cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10183ff3 jle 0x1018402a */
  if ((C.zf||C.sf!=C.of)) goto L_1018402a;
  /* 10183ff5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10183ff7 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10183ffdu);
  /* 10183ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184000 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184005 jge 0x1018402a */
  if ((C.sf==C.of)) goto L_1018402a;
  /* 10184007 push 4 */
  push32((uint32_t)(0x4u));
  /* 10184009 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x1018400fu);
  /* 1018400f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184012 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184017 jle 0x1018402a */
  if ((C.zf||C.sf!=C.of)) goto L_1018402a;
  /* 10184019 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1018401e push 3 */
  push32((uint32_t)(0x3u));
  /* 10184020 push 4 */
  push32((uint32_t)(0x4u));
  /* 10184022 call 0x10182610 */
  push32(0x10184027u); f_10182610();
  /* 10184027 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018402a:;
  /* 1018402a push 3 */
  push32((uint32_t)(0x3u));
  /* 1018402c call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184032u);
  /* 10184032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184035 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018403a jge 0x1018405f */
  if ((C.sf==C.of)) goto L_1018405f;
  /* 1018403c push 2 */
  push32((uint32_t)(0x2u));
  /* 1018403e call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184044u);
  /* 10184044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184047 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018404c jle 0x1018405f */
  if ((C.zf||C.sf!=C.of)) goto L_1018405f;
  /* 1018404e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10184053 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184055 push 2 */
  push32((uint32_t)(0x2u));
  /* 10184057 call 0x10182610 */
  push32(0x1018405cu); f_10182610();
  /* 1018405c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018405f:;
  /* 1018405f push 0x101961f8 */
  push32((uint32_t)(0x101961f8u));
  /* 10184064 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x1018406au);
  /* 1018406a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018406d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018406f je 0x10184197 */
  if (C.zf) goto L_10184197;
  /* 10184075 push 0x10196200 */
  push32((uint32_t)(0x10196200u));
  /* 1018407a call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10184080u);
  /* 10184080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184083 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184085 je 0x10184197 */
  if (C.zf) goto L_10184197;
  /* 1018408b push 2 */
  push32((uint32_t)(0x2u));
  /* 1018408d call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184093u);
  /* 10184093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184096 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018409b jle 0x101840ae */
  if ((C.zf||C.sf!=C.of)) goto L_101840ae;
  /* 1018409d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101840a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101840a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101840a6 call 0x10182610 */
  push32(0x101840abu); f_10182610();
  /* 101840ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101840ae:;
  /* 101840ae push 0 */
  push32((uint32_t)(0x0u));
  /* 101840b0 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101840b6u);
  /* 101840b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101840b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101840bb je 0x101841ba */
  if (C.zf) goto L_101841ba;
  /* 101840c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101840c3 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101840c9u);
  /* 101840c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101840cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101840ce je 0x1018413b */
  if (C.zf) goto L_1018413b;
  /* 101840d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101840d2 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101840d8u);
  /* 101840d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101840db cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101840e0 jge 0x1018413b */
  if ((C.sf==C.of)) goto L_1018413b;
  /* 101840e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 101840e4 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101840eau);
  /* 101840ea push 5 */
  push32((uint32_t)(0x5u));
  /* 101840ec mov esi, eax */
  ESI = (EAX);
  /* 101840ee call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101840f4u);
  /* 101840f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101840f7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101840f9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 101840fe jge 0x1018411f */
  if ((C.sf==C.of)) goto L_1018411f;
  /* 10184100 push 5 */
  push32((uint32_t)(0x5u));
  /* 10184102 push 2 */
  push32((uint32_t)(0x2u));
  /* 10184104 call 0x10182610 */
  push32(0x10184109u); f_10182610();
  /* 10184109 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1018410e push 4 */
  push32((uint32_t)(0x4u));
  /* 10184110 push 2 */
  push32((uint32_t)(0x2u));
  /* 10184112 call 0x10182610 */
  push32(0x10184117u); f_10182610();
  /* 10184117 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018411a jmp 0x101841ba */
  goto L_101841ba;
L_1018411f:;
  /* 1018411f push 4 */
  push32((uint32_t)(0x4u));
  /* 10184121 push 2 */
  push32((uint32_t)(0x2u));
  /* 10184123 call 0x10182610 */
  push32(0x10184128u); f_10182610();
  /* 10184128 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1018412d push 5 */
  push32((uint32_t)(0x5u));
  /* 1018412f push 2 */
  push32((uint32_t)(0x2u));
  /* 10184131 call 0x10182610 */
  push32(0x10184136u); f_10182610();
  /* 10184136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184139 jmp 0x101841ba */
  goto L_101841ba;
L_1018413b:;
  /* 1018413b push 5 */
  push32((uint32_t)(0x5u));
  /* 1018413d call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184143u);
  /* 10184143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184146 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018414b jge 0x1018416d */
  if ((C.sf==C.of)) goto L_1018416d;
  /* 1018414d push 0 */
  push32((uint32_t)(0x0u));
  /* 1018414f call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184155u);
  /* 10184155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018415a je 0x1018416d */
  if (C.zf) goto L_1018416d;
  /* 1018415c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10184161 push 5 */
  push32((uint32_t)(0x5u));
  /* 10184163 push 2 */
  push32((uint32_t)(0x2u));
  /* 10184165 call 0x10182610 */
  push32(0x1018416au); f_10182610();
  /* 1018416a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018416d:;
  /* 1018416d push 5 */
  push32((uint32_t)(0x5u));
  /* 1018416f call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184175u);
  /* 10184175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184178 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018417d jge 0x101841ba */
  if ((C.sf==C.of)) goto L_101841ba;
  /* 1018417f push 0 */
  push32((uint32_t)(0x0u));
  /* 10184181 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184187u);
  /* 10184187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018418a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018418c je 0x101841ba */
  if (C.zf) goto L_101841ba;
  /* 1018418e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10184193 push 5 */
  push32((uint32_t)(0x5u));
  /* 10184195 jmp 0x101841b0 */
  goto L_101841b0;
L_10184197:;
  /* 10184197 push 2 */
  push32((uint32_t)(0x2u));
  /* 10184199 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x1018419fu);
  /* 1018419f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101841a2 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101841a7 jle 0x101841ba */
  if ((C.zf||C.sf!=C.of)) goto L_101841ba;
  /* 101841a9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101841ae push 1 */
  push32((uint32_t)(0x1u));
L_101841b0:;
  /* 101841b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 101841b2 call 0x10182610 */
  push32(0x101841b7u); f_10182610();
  /* 101841b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101841ba:;
  /* 101841ba push 0 */
  push32((uint32_t)(0x0u));
  /* 101841bc call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101841c2u);
  /* 101841c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101841c5 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101841ca jle 0x101841dd */
  if ((C.zf||C.sf!=C.of)) goto L_101841dd;
  /* 101841cc push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101841d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101841d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 101841d5 call 0x10182610 */
  push32(0x101841dau); f_10182610();
  /* 101841da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101841dd:;
  /* 101841dd push 4 */
  push32((uint32_t)(0x4u));
  /* 101841df call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101841e5u);
  /* 101841e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101841e8 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101841ed jle 0x10184200 */
  if ((C.zf||C.sf!=C.of)) goto L_10184200;
  /* 101841ef push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 101841f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101841f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 101841f8 call 0x10182610 */
  push32(0x101841fdu); f_10182610();
  /* 101841fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184200:;
  /* 10184200 push 5 */
  push32((uint32_t)(0x5u));
  /* 10184202 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184208u);
  /* 10184208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018420b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184210 jle 0x10184223 */
  if ((C.zf||C.sf!=C.of)) goto L_10184223;
  /* 10184212 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10184217 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184219 push 5 */
  push32((uint32_t)(0x5u));
  /* 1018421b call 0x10182610 */
  push32(0x10184220u); f_10182610();
  /* 10184220 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184223:;
  /* 10184223 pop edi */
  EDI = (pop32());
  /* 10184224 pop esi */
  ESI = (pop32());
  /* 10184225 pop ebp */
  EBP = (pop32());
  /* 10184226 pop ebx */
  EBX = (pop32());
  /* 10184227 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018422a ret  */
  ESPCHK(0x10183360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004230 @ 0x10184230 (209 bytes, 56 insns) */
void f_10184230(void) {
  FTRACE(0x10184230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10184230 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184232 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184238u);
  /* 10184238 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018423b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184240 jle 0x10184300 */
  if ((C.zf||C.sf!=C.of)) goto L_10184300;
  /* 10184246 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184248 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1018424a push 0x10196350 */
  push32((uint32_t)(0x10196350u));
  /* 1018424f call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184255u);
  /* 10184255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184257 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184259 push 0x10196358 */
  push32((uint32_t)(0x10196358u));
  /* 1018425e call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184264u);
  /* 10184264 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184266 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184268 push 0x10196340 */
  push32((uint32_t)(0x10196340u));
  /* 1018426d call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184273u);
  /* 10184273 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184275 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184277 push 0x10196348 */
  push32((uint32_t)(0x10196348u));
  /* 1018427c call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184282u);
  /* 10184282 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184284 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184286 push 0x10196360 */
  push32((uint32_t)(0x10196360u));
  /* 1018428b call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184291u);
  /* 10184291 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184293 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184295 push 0x10196298 */
  push32((uint32_t)(0x10196298u));
  /* 1018429a call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101842a0u);
  /* 101842a0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101842a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101842a5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101842a7 push 0x10196280 */
  push32((uint32_t)(0x10196280u));
  /* 101842ac call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101842b2u);
  /* 101842b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101842b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101842b6 push 0x10196288 */
  push32((uint32_t)(0x10196288u));
  /* 101842bb call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101842c1u);
  /* 101842c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101842c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101842c5 push 0x101962a0 */
  push32((uint32_t)(0x101962a0u));
  /* 101842ca call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101842d0u);
  /* 101842d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101842d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101842d4 push 0x101962a8 */
  push32((uint32_t)(0x101962a8u));
  /* 101842d9 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101842dfu);
  /* 101842df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101842e1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101842e3 push 0x10196260 */
  push32((uint32_t)(0x10196260u));
  /* 101842e8 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101842eeu);
  /* 101842ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101842f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101842f2 push 0x10195fc8 */
  push32((uint32_t)(0x10195fc8u));
  /* 101842f7 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101842fdu);
  /* 101842fd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184300:;
  /* 10184300 ret  */
  ESPCHK(0x10184230u, _esp0);
  ESP += 4; return;
}

/* FUN_10004310 @ 0x10184310 (79 bytes, 22 insns) */
void f_10184310(void) {
  FTRACE(0x10184310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10184310 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184312 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184314 push 0x10193910 */
  push32((uint32_t)(0x10193910u));
  /* 10184319 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018431fu);
  /* 1018431f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184321 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184323 push 0x10193918 */
  push32((uint32_t)(0x10193918u));
  /* 10184328 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018432eu);
  /* 1018432e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184330 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184332 push 0x10193908 */
  push32((uint32_t)(0x10193908u));
  /* 10184337 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018433du);
  /* 1018433d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018433f push 0xa */
  push32((uint32_t)(0xau));
  /* 10184341 push 0x10195f78 */
  push32((uint32_t)(0x10195f78u));
  /* 10184346 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018434cu);
  /* 1018434c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018434e push 0xa */
  push32((uint32_t)(0xau));
  /* 10184350 push 0x10195f68 */
  push32((uint32_t)(0x10195f68u));
  /* 10184355 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018435bu);
  /* 1018435b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018435e ret  */
  ESPCHK(0x10184310u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x10184360 (127 bytes, 35 insns) */
void f_10184360(void) {
  FTRACE(0x10184360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10184360 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184362 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10184364 push 0x101961d8 */
  push32((uint32_t)(0x101961d8u));
  /* 10184369 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018436fu);
  /* 1018436f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184371 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10184373 push 0x101961d0 */
  push32((uint32_t)(0x101961d0u));
  /* 10184378 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018437eu);
  /* 1018437e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184380 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10184382 push 0x101961a0 */
  push32((uint32_t)(0x101961a0u));
  /* 10184387 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018438du);
  /* 1018438d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018438f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10184391 push 0x10196198 */
  push32((uint32_t)(0x10196198u));
  /* 10184396 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018439cu);
  /* 1018439c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018439e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101843a0 push 0x10196098 */
  push32((uint32_t)(0x10196098u));
  /* 101843a5 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101843abu);
  /* 101843ab push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101843ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101843af push 0x101960a0 */
  push32((uint32_t)(0x101960a0u));
  /* 101843b4 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101843bau);
  /* 101843ba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101843bd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101843bf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101843c1 push 0x101960a8 */
  push32((uint32_t)(0x101960a8u));
  /* 101843c6 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101843ccu);
  /* 101843cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101843ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101843d0 push 0x101960b0 */
  push32((uint32_t)(0x101960b0u));
  /* 101843d5 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101843dbu);
  /* 101843db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101843de ret  */
  ESPCHK(0x10184360u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x101843e0 (3643 bytes, 1035 insns) */
void f_101843e0(void) {
  FTRACE(0x101843e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101843e0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101843e3 push ebx */
  push32((uint32_t)(EBX));
  /* 101843e4 push ebp */
  push32((uint32_t)(EBP));
  /* 101843e5 push esi */
  push32((uint32_t)(ESI));
  /* 101843e6 push edi */
  push32((uint32_t)(EDI));
  /* 101843e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101843e9 call 0x10182760 */
  push32(0x101843eeu); f_10182760();
  /* 101843ee push 0x1018f030 */
  push32((uint32_t)(0x1018f030u));
  /* 101843f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101843f5 call dword ptr [0x1019650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019650c))), 0x101843fbu);
  /* 101843fb push 0x10196190 */
  push32((uint32_t)(0x10196190u));
  /* 10184400 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10184406u);
  /* 10184406 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184408 mov ebx, eax */
  EBX = (EAX);
  /* 1018440a call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184410u);
  /* 10184410 mov ebp, eax */
  EBP = (EAX);
  /* 10184412 push 0x101961b8 */
  push32((uint32_t)(0x101961b8u));
  /* 10184417 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 1018441b call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10184421u);
  /* 10184421 push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 10184426 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 1018442a call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10184430u);
  /* 10184430 push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 10184435 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x1018443bu);
  /* 1018443b push 0x101960e0 */
  push32((uint32_t)(0x101960e0u));
  /* 10184440 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10184446u);
  /* 10184446 push 0x101963b0 */
  push32((uint32_t)(0x101963b0u));
  /* 1018444b call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10184451u);
  /* 10184451 push 0x10196330 */
  push32((uint32_t)(0x10196330u));
  /* 10184456 mov esi, eax */
  ESI = (EAX);
  /* 10184458 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018445eu);
  /* 1018445e push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 10184463 mov edi, eax */
  EDI = (EAX);
  /* 10184465 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018446bu);
  /* 1018446b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018446d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184470 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10184472 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 10184477 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 1018447b call 0x10182660 */
  push32(0x10184480u); f_10182660();
  /* 10184480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10184482 jle 0x10184498 */
  if ((C.zf||C.sf!=C.of)) goto L_10184498;
  /* 10184484 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10184486 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10184488 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1018448a push 0x10196328 */
  push32((uint32_t)(0x10196328u));
  /* 1018448f call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184495u);
  /* 10184495 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184498:;
  /* 10184498 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 1018449d call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x101844a3u);
  /* 101844a3 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 101844a8 mov esi, eax */
  ESI = (EAX);
  /* 101844aa call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101844b0u);
  /* 101844b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101844b3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101844b5 je 0x101844bc */
  if (C.zf) goto L_101844bc;
  /* 101844b7 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_101844bc:;
  /* 101844bc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101844be je 0x10185213 */
  if (C.zf) goto L_10185213;
  /* 101844c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101844c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101844c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101844ca push 0x10195fd8 */
  push32((uint32_t)(0x10195fd8u));
  /* 101844cf call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101844d5u);
  /* 101844d5 push 0x10195fd8 */
  push32((uint32_t)(0x10195fd8u));
  /* 101844da call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101844e0u);
  /* 101844e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101844e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101844e5 je 0x10185213 */
  if (C.zf) goto L_10185213;
  /* 101844eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101844ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101844ef push 0x10196378 */
  push32((uint32_t)(0x10196378u));
  /* 101844f4 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101844fau);
  /* 101844fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101844fd call dword ptr [0x10196570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196570))), 0x10184503u);
  /* 10184503 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184505 jne 0x1018455c */
  if (!C.zf) goto L_1018455c;
  /* 10184507 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018450d jle 0x10184534 */
  if ((C.zf||C.sf!=C.of)) goto L_10184534;
  /* 1018450f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184511 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184513 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184515 push 0x10196190 */
  push32((uint32_t)(0x10196190u));
  /* 1018451a call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184520u);
  /* 10184520 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184522 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184524 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184526 push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 1018452b call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184531u);
  /* 10184531 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184534:;
  /* 10184534 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018453a jle 0x10184548 */
  if ((C.zf||C.sf!=C.of)) goto L_10184548;
  /* 1018453c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184541 jle 0x10184548 */
  if ((C.zf||C.sf!=C.of)) goto L_10184548;
  /* 10184543 call 0x10184230 */
  push32(0x10184548u); f_10184230();
L_10184548:;
  /* 10184548 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018454a push 1 */
  push32((uint32_t)(0x1u));
  /* 1018454c push 0 */
  push32((uint32_t)(0x0u));
  /* 1018454e call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x10184554u);
  /* 10184554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184557 jmp 0x1018461f */
  goto L_1018461f;
L_1018455c:;
  /* 1018455c mov eax, dword ptr [0x10196594] */
  EAX = (r32((uint32_t)(0x10196594)));
  /* 10184561 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10184564 je 0x10184578 */
  if (C.zf) goto L_10184578;
  /* 10184566 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10184567 je 0x10184572 */
  if (C.zf) goto L_10184572;
  /* 10184569 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018456a jne 0x101845a4 */
  if (!C.zf) goto L_101845a4;
  /* 1018456c push 9 */
  push32((uint32_t)(0x9u));
  /* 1018456e push 4 */
  push32((uint32_t)(0x4u));
  /* 10184570 jmp 0x10184599 */
  goto L_10184599;
L_10184572:;
  /* 10184572 push 4 */
  push32((uint32_t)(0x4u));
  /* 10184574 push 9 */
  push32((uint32_t)(0x9u));
  /* 10184576 jmp 0x10184599 */
  goto L_10184599;
L_10184578:;
  /* 10184578 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018457e jle 0x1018458f */
  if ((C.zf||C.sf!=C.of)) goto L_1018458f;
  /* 10184580 push 6 */
  push32((uint32_t)(0x6u));
  /* 10184582 push 6 */
  push32((uint32_t)(0x6u));
  /* 10184584 push 9 */
  push32((uint32_t)(0x9u));
  /* 10184586 call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x1018458cu);
  /* 1018458c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018458f:;
  /* 1018458f push 5 */
  push32((uint32_t)(0x5u));
  /* 10184591 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184597 push 5 */
  push32((uint32_t)(0x5u));
L_10184599:;
  /* 10184599 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018459b call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x101845a1u);
  /* 101845a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101845a4:;
  /* 101845a4 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 101845a8 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 101845ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101845af je 0x101845b6 */
  if (C.zf) goto L_101845b6;
  /* 101845b1 mov esi, 0x17c */
  ESI = (0x17cu);
L_101845b6:;
  /* 101845b6 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101845b9 jge 0x101845d7 */
  if ((C.sf==C.of)) goto L_101845d7;
  /* 101845bb cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101845c1 jle 0x10184613 */
  if ((C.zf||C.sf!=C.of)) goto L_10184613;
  /* 101845c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101845c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101845c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101845c9 push 0x10196190 */
  push32((uint32_t)(0x10196190u));
  /* 101845ce call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101845d4u);
  /* 101845d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101845d7:;
  /* 101845d7 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101845dd jle 0x10184613 */
  if ((C.zf||C.sf!=C.of)) goto L_10184613;
  /* 101845df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101845e1 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 101845e6 push esi */
  push32((uint32_t)(ESI));
  /* 101845e7 push 0x10196190 */
  push32((uint32_t)(0x10196190u));
  /* 101845ec call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101845f2u);
  /* 101845f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101845f5 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101845fb jle 0x10184613 */
  if ((C.zf||C.sf!=C.of)) goto L_10184613;
  /* 101845fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101845ff push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 10184604 push esi */
  push32((uint32_t)(ESI));
  /* 10184605 push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 1018460a call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184610u);
  /* 10184610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184613:;
  /* 10184613 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184618 jle 0x1018461f */
  if ((C.zf||C.sf!=C.of)) goto L_1018461f;
  /* 1018461a call 0x10184230 */
  push32(0x1018461fu); f_10184230();
L_1018461f:;
  /* 1018461f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184621 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184623 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184625 push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 1018462a call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184630u);
  /* 10184630 push 5 */
  push32((uint32_t)(0x5u));
  /* 10184632 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184634 push 2 */
  push32((uint32_t)(0x2u));
  /* 10184636 push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 1018463b call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184641u);
  /* 10184641 push 5 */
  push32((uint32_t)(0x5u));
  /* 10184643 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184645 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184647 push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 1018464c call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184652u);
  /* 10184652 push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 10184657 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018465du);
  /* 1018465d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184663 jle 0x101846d6 */
  if ((C.zf||C.sf!=C.of)) goto L_101846d6;
  /* 10184665 push 5 */
  push32((uint32_t)(0x5u));
  /* 10184667 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10184669 push 2 */
  push32((uint32_t)(0x2u));
  /* 1018466b push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 10184670 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184676u);
  /* 10184676 push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 1018467b call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10184681u);
  /* 10184681 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184687 jle 0x1018469d */
  if ((C.zf||C.sf!=C.of)) goto L_1018469d;
  /* 10184689 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018468b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1018468d push 1 */
  push32((uint32_t)(0x1u));
  /* 1018468f push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10184694 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018469au);
  /* 1018469a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018469d:;
  /* 1018469d push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 101846a2 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x101846a8u);
  /* 101846a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101846ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101846ae jle 0x101846c4 */
  if ((C.zf||C.sf!=C.of)) goto L_101846c4;
  /* 101846b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101846b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101846b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101846b6 push 0x10193878 */
  push32((uint32_t)(0x10193878u));
  /* 101846bb call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101846c1u);
  /* 101846c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101846c4:;
  /* 101846c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101846c6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101846c8 push 0x10196110 */
  push32((uint32_t)(0x10196110u));
  /* 101846cd call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101846d3u);
  /* 101846d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101846d6:;
  /* 101846d6 push 0x10196190 */
  push32((uint32_t)(0x10196190u));
  /* 101846db call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101846e1u);
  /* 101846e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101846e4 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101846e7 jle 0x101846fd */
  if ((C.zf||C.sf!=C.of)) goto L_101846fd;
  /* 101846e9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101846eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101846ed push 1 */
  push32((uint32_t)(0x1u));
  /* 101846ef push 0x10193878 */
  push32((uint32_t)(0x10193878u));
  /* 101846f4 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101846fau);
  /* 101846fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101846fd:;
  /* 101846fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101846ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184701 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184703 push 0x101961e8 */
  push32((uint32_t)(0x101961e8u));
  /* 10184708 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018470eu);
  /* 1018470e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184710 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184712 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184714 push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 10184719 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018471fu);
  /* 1018471f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184721 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184723 push 2 */
  push32((uint32_t)(0x2u));
  /* 10184725 push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 1018472a call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184730u);
  /* 10184730 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184732 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184734 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184736 push 0x10195fd0 */
  push32((uint32_t)(0x10195fd0u));
  /* 1018473b call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184741u);
  /* 10184741 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184744 push 5 */
  push32((uint32_t)(0x5u));
  /* 10184746 push 0xa */
  push32((uint32_t)(0xau));
  /* 10184748 push 2 */
  push32((uint32_t)(0x2u));
  /* 1018474a push 0x101961e8 */
  push32((uint32_t)(0x101961e8u));
  /* 1018474f call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184755u);
  /* 10184755 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184757 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10184759 push 0x10193660 */
  push32((uint32_t)(0x10193660u));
  /* 1018475e call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184764u);
  /* 10184764 push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 10184769 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018476fu);
  /* 1018476f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10184774 jle 0x1018478a */
  if ((C.zf||C.sf!=C.of)) goto L_1018478a;
  /* 10184776 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184778 push 5 */
  push32((uint32_t)(0x5u));
  /* 1018477a push 1 */
  push32((uint32_t)(0x1u));
  /* 1018477c push 0x101960f8 */
  push32((uint32_t)(0x101960f8u));
  /* 10184781 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184787u);
  /* 10184787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018478a:;
  /* 1018478a call dword ptr [0x10196570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196570))), 0x10184790u);
  /* 10184790 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184792 je 0x101847a8 */
  if (C.zf) goto L_101847a8;
  /* 10184794 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184796 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184798 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018479a push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 1018479f call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101847a5u);
  /* 101847a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101847a8:;
  /* 101847a8 push 0xa */
  push32((uint32_t)(0xau));
  /* 101847aa push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101847ac push 1 */
  push32((uint32_t)(0x1u));
  /* 101847ae push 0x10195fe8 */
  push32((uint32_t)(0x10195fe8u));
  /* 101847b3 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101847b9u);
  /* 101847b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101847bb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101847bd push 1 */
  push32((uint32_t)(0x1u));
  /* 101847bf push 0x10193618 */
  push32((uint32_t)(0x10193618u));
  /* 101847c4 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101847cau);
  /* 101847ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101847cd cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101847d0 jle 0x101847e6 */
  if ((C.zf||C.sf!=C.of)) goto L_101847e6;
  /* 101847d2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101847d4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101847d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 101847d8 push 0x10195fd8 */
  push32((uint32_t)(0x10195fd8u));
  /* 101847dd call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101847e3u);
  /* 101847e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101847e6:;
  /* 101847e6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101847e8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101847ea push 1 */
  push32((uint32_t)(0x1u));
  /* 101847ec push 0x10196258 */
  push32((uint32_t)(0x10196258u));
  /* 101847f1 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101847f7u);
  /* 101847f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 101847f9 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101847fb push 2 */
  push32((uint32_t)(0x2u));
  /* 101847fd push 0x10196258 */
  push32((uint32_t)(0x10196258u));
  /* 10184802 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184808u);
  /* 10184808 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1018480a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018480c push 0x10196078 */
  push32((uint32_t)(0x10196078u));
  /* 10184811 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184817u);
  /* 10184817 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184819 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1018481b push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 10184820 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184826u);
  /* 10184826 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184828 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018482a push 0x101961b8 */
  push32((uint32_t)(0x101961b8u));
  /* 1018482f call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184835u);
  /* 10184835 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184838 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018483a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018483c push 0x10196040 */
  push32((uint32_t)(0x10196040u));
  /* 10184841 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184847u);
  /* 10184847 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184849 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1018484b push 0x10196030 */
  push32((uint32_t)(0x10196030u));
  /* 10184850 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184856u);
  /* 10184856 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184858 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1018485a push 0x10196038 */
  push32((uint32_t)(0x10196038u));
  /* 1018485f call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184865u);
  /* 10184865 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 1018486a call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10184870u);
  /* 10184870 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10184875 je 0x10184934 */
  if (C.zf) goto L_10184934;
  /* 1018487b push 0x101961b8 */
  push32((uint32_t)(0x101961b8u));
  /* 10184880 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10184886u);
  /* 10184886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184889 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018488b jne 0x10184934 */
  if (!C.zf) goto L_10184934;
  /* 10184891 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184893 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184899u);
  /* 10184899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018489c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101848a1 jle 0x101848c7 */
  if ((C.zf||C.sf!=C.of)) goto L_101848c7;
  /* 101848a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 101848a5 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101848abu);
  /* 101848ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101848ae cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101848b3 jle 0x101848c7 */
  if ((C.zf||C.sf!=C.of)) goto L_101848c7;
  /* 101848b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101848b7 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101848bdu);
  /* 101848bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101848c0 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101848c5 jg 0x10184934 */
  if ((!C.zf&&C.sf==C.of)) goto L_10184934;
L_101848c7:;
  /* 101848c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101848c9 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101848cfu);
  /* 101848cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101848d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101848d4 je 0x1018495b */
  if (C.zf) goto L_1018495b;
  /* 101848da push 5 */
  push32((uint32_t)(0x5u));
  /* 101848dc call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101848e2u);
  /* 101848e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101848e5 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101848ea jle 0x1018495b */
  if ((C.zf||C.sf!=C.of)) goto L_1018495b;
  /* 101848ec push 5 */
  push32((uint32_t)(0x5u));
  /* 101848ee call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101848f4u);
  /* 101848f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101848f7 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101848fc jle 0x1018490f */
  if ((C.zf||C.sf!=C.of)) goto L_1018490f;
  /* 101848fe push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10184903 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184905 push 5 */
  push32((uint32_t)(0x5u));
  /* 10184907 call 0x10182610 */
  push32(0x1018490cu); f_10182610();
  /* 1018490c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018490f:;
  /* 1018490f push 4 */
  push32((uint32_t)(0x4u));
  /* 10184911 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184917u);
  /* 10184917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018491a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018491f jle 0x1018495b */
  if ((C.zf||C.sf!=C.of)) goto L_1018495b;
  /* 10184921 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10184926 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184928 push 4 */
  push32((uint32_t)(0x4u));
  /* 1018492a call 0x10182610 */
  push32(0x1018492fu); f_10182610();
  /* 1018492f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184932 jmp 0x1018495b */
  goto L_1018495b;
L_10184934:;
  /* 10184934 push 0 */
  push32((uint32_t)(0x0u));
  /* 10184936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184938 call 0x101825f0 */
  push32(0x1018493du); f_101825f0();
  /* 1018493d push 0 */
  push32((uint32_t)(0x0u));
  /* 1018493f push 4 */
  push32((uint32_t)(0x4u));
  /* 10184941 call 0x101825f0 */
  push32(0x10184946u); f_101825f0();
  /* 10184946 push 0 */
  push32((uint32_t)(0x0u));
  /* 10184948 push 3 */
  push32((uint32_t)(0x3u));
  /* 1018494a call 0x101825f0 */
  push32(0x1018494fu); f_101825f0();
  /* 1018494f push 0 */
  push32((uint32_t)(0x0u));
  /* 10184951 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184953 call 0x101825f0 */
  push32(0x10184958u); f_101825f0();
  /* 10184958 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018495b:;
  /* 1018495b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018495d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018495f push 0x101937a0 */
  push32((uint32_t)(0x101937a0u));
  /* 10184964 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018496au);
  /* 1018496a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018496c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018496e push 1 */
  push32((uint32_t)(0x1u));
  /* 10184970 push 0x101962d8 */
  push32((uint32_t)(0x101962d8u));
  /* 10184975 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018497bu);
  /* 1018497b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018497d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1018497f push 2 */
  push32((uint32_t)(0x2u));
  /* 10184981 push 0x101962d8 */
  push32((uint32_t)(0x101962d8u));
  /* 10184986 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018498cu);
  /* 1018498c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1018498e push 0xa */
  push32((uint32_t)(0xau));
  /* 10184990 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184992 push 0x101962d8 */
  push32((uint32_t)(0x101962d8u));
  /* 10184997 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018499du);
  /* 1018499d push 0x10193958 */
  push32((uint32_t)(0x10193958u));
  /* 101849a2 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x101849a8u);
  /* 101849a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101849ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101849ad jne 0x101849f8 */
  if (!C.zf) goto L_101849f8;
  /* 101849af push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 101849b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101849b3 call 0x10182640 */
  push32(0x101849b8u); f_10182640();
  /* 101849b8 mov esi, eax */
  ESI = (EAX);
  /* 101849ba push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101849bc push 0 */
  push32((uint32_t)(0x0u));
  /* 101849be sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101849c1 call 0x10182640 */
  push32(0x101849c6u); f_10182640();
  /* 101849c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101849c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101849ca add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101849cc call 0x10182640 */
  push32(0x101849d1u); f_10182640();
  /* 101849d1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101849d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101849d6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101849d9 jle 0x101849e8 */
  if ((C.zf||C.sf!=C.of)) goto L_101849e8;
  /* 101849db push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101849dd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101849df push 6 */
  push32((uint32_t)(0x6u));
  /* 101849e1 push 0x10195f90 */
  push32((uint32_t)(0x10195f90u));
  /* 101849e6 jmp 0x10184a03 */
  goto L_10184a03;
L_101849e8:;
  /* 101849e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101849ea je 0x10184a0c */
  if (C.zf) goto L_10184a0c;
  /* 101849ec push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101849ee push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101849f0 push esi */
  push32((uint32_t)(ESI));
  /* 101849f1 push 0x10195f90 */
  push32((uint32_t)(0x10195f90u));
  /* 101849f6 jmp 0x10184a03 */
  goto L_10184a03;
L_101849f8:;
  /* 101849f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101849fa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101849fc push 0xa */
  push32((uint32_t)(0xau));
  /* 101849fe push 0x101938e8 */
  push32((uint32_t)(0x101938e8u));
L_10184a03:;
  /* 10184a03 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184a09u);
  /* 10184a09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184a0c:;
  /* 10184a0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184a0e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10184a10 push 0x10193958 */
  push32((uint32_t)(0x10193958u));
  /* 10184a15 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184a1bu);
  /* 10184a1b push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 10184a20 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10184a26u);
  /* 10184a26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184a29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184a2b je 0x10184a4e */
  if (C.zf) goto L_10184a4e;
  /* 10184a2d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184a2f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184a31 push 0x10193958 */
  push32((uint32_t)(0x10193958u));
  /* 10184a36 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184a3cu);
  /* 10184a3c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184a3e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10184a40 push 0x10193870 */
  push32((uint32_t)(0x10193870u));
  /* 10184a45 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184a4bu);
  /* 10184a4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184a4e:;
  /* 10184a4e push 0x10193958 */
  push32((uint32_t)(0x10193958u));
  /* 10184a53 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10184a59u);
  /* 10184a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184a5c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184a5e je 0x10184a86 */
  if (C.zf) goto L_10184a86;
  /* 10184a60 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184a62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184a64 push 0x10193940 */
  push32((uint32_t)(0x10193940u));
  /* 10184a69 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184a6fu);
  /* 10184a6f push 0xa */
  push32((uint32_t)(0xau));
  /* 10184a71 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10184a73 push 0x10193880 */
  push32((uint32_t)(0x10193880u));
  /* 10184a78 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184a7eu);
  /* 10184a7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184a81 call 0x10183320 */
  push32(0x10184a86u); f_10183320();
L_10184a86:;
  /* 10184a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10184a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184a8a call 0x101825f0 */
  push32(0x10184a8fu); f_101825f0();
  /* 10184a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10184a91 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184a97u);
  /* 10184a97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184a9a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184a9f jle 0x10184ae3 */
  if ((C.zf||C.sf!=C.of)) goto L_10184ae3;
  /* 10184aa1 push 0x101937a0 */
  push32((uint32_t)(0x101937a0u));
  /* 10184aa6 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10184aacu);
  /* 10184aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184aaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184ab1 je 0x10184ae3 */
  if (C.zf) goto L_10184ae3;
  /* 10184ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184ab5 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184abbu);
  /* 10184abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184abe cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184ac3 jge 0x10184ae3 */
  if ((C.sf==C.of)) goto L_10184ae3;
  /* 10184ac5 push 0x10193958 */
  push32((uint32_t)(0x10193958u));
  /* 10184aca call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10184ad0u);
  /* 10184ad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184ad3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184ad5 jne 0x10184ae3 */
  if (!C.zf) goto L_10184ae3;
  /* 10184ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184ad9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184adb call 0x101825f0 */
  push32(0x10184ae0u); f_101825f0();
  /* 10184ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184ae3:;
  /* 10184ae3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184ae5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184ae7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184ae9 push 0x101961f0 */
  push32((uint32_t)(0x101961f0u));
  /* 10184aee call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184af4u);
  /* 10184af4 push 0x101960f0 */
  push32((uint32_t)(0x101960f0u));
  /* 10184af9 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10184affu);
  /* 10184aff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184b02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184b04 je 0x10184b1a */
  if (C.zf) goto L_10184b1a;
  /* 10184b06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184b08 push 0xa */
  push32((uint32_t)(0xau));
  /* 10184b0a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10184b0c push 0x101961f0 */
  push32((uint32_t)(0x101961f0u));
  /* 10184b11 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184b17u);
  /* 10184b17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184b1a:;
  /* 10184b1a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184b1c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10184b1e push 0x101960f0 */
  push32((uint32_t)(0x101960f0u));
  /* 10184b23 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184b29u);
  /* 10184b29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184b2b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10184b2d push 0x10196100 */
  push32((uint32_t)(0x10196100u));
  /* 10184b32 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184b38u);
  /* 10184b38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184b3a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184b3c push 0x101962e8 */
  push32((uint32_t)(0x101962e8u));
  /* 10184b41 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184b47u);
  /* 10184b47 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184b49 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184b4b push 0x101962d0 */
  push32((uint32_t)(0x101962d0u));
  /* 10184b50 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184b56u);
  /* 10184b56 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184b58 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184b5a push 0x101962e0 */
  push32((uint32_t)(0x101962e0u));
  /* 10184b5f call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184b65u);
  /* 10184b65 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184b67 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184b69 push 0x101962c0 */
  push32((uint32_t)(0x101962c0u));
  /* 10184b6e call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184b74u);
  /* 10184b74 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184b77 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184b79 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184b7b push 0x101962c8 */
  push32((uint32_t)(0x101962c8u));
  /* 10184b80 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184b86u);
  /* 10184b86 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184b88 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184b8a push 0x101962b8 */
  push32((uint32_t)(0x101962b8u));
  /* 10184b8f call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184b95u);
  /* 10184b95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184b98 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184b9b jle 0x10184bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10184bf4;
  /* 10184b9d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 10184ba1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184ba3 je 0x10184bf4 */
  if (C.zf) goto L_10184bf4;
  /* 10184ba5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10184ba7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10184ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184bab push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 10184bb0 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184bb6u);
  /* 10184bb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184bb9 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184bbc jle 0x10184bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10184bf4;
  /* 10184bbe push 0xa */
  push32((uint32_t)(0xau));
  /* 10184bc0 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10184bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10184bc4 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 10184bc9 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184bcfu);
  /* 10184bcf push 0xa */
  push32((uint32_t)(0xau));
  /* 10184bd1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184bd3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184bd5 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 10184bda call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184be0u);
  /* 10184be0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10184be2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10184be4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10184be6 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 10184beb call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184bf1u);
  /* 10184bf1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184bf4:;
  /* 10184bf4 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 10184bf8 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10184bfa je 0x10184cde */
  if (C.zf) goto L_10184cde;
  /* 10184c00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184c02 push 0xa */
  push32((uint32_t)(0xau));
  /* 10184c04 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184c06 push 0x101938c8 */
  push32((uint32_t)(0x101938c8u));
  /* 10184c0b call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184c11u);
  /* 10184c11 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10184c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184c15 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10184c17 push 0x10196160 */
  push32((uint32_t)(0x10196160u));
  /* 10184c1c call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184c22u);
  /* 10184c22 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10184c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184c26 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10184c28 push 0x10196278 */
  push32((uint32_t)(0x10196278u));
  /* 10184c2d call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184c33u);
  /* 10184c33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184c35 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10184c37 push 0x10193630 */
  push32((uint32_t)(0x10193630u));
  /* 10184c3c call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184c42u);
  /* 10184c42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184c44 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10184c46 push 0x10193708 */
  push32((uint32_t)(0x10193708u));
  /* 10184c4b call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184c51u);
  /* 10184c51 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184c54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184c56 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10184c58 push 0x10193628 */
  push32((uint32_t)(0x10193628u));
  /* 10184c5d call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184c63u);
  /* 10184c63 push 0x10196198 */
  push32((uint32_t)(0x10196198u));
  /* 10184c68 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10184c6eu);
  /* 10184c6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184c71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184c73 je 0x10184c89 */
  if (C.zf) goto L_10184c89;
  /* 10184c75 push 0xa */
  push32((uint32_t)(0xau));
  /* 10184c77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10184c79 push 5 */
  push32((uint32_t)(0x5u));
  /* 10184c7b push 0x10196370 */
  push32((uint32_t)(0x10196370u));
  /* 10184c80 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184c86u);
  /* 10184c86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184c89:;
  /* 10184c89 push 0x101960b0 */
  push32((uint32_t)(0x101960b0u));
  /* 10184c8e call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10184c94u);
  /* 10184c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184c97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184c99 je 0x10184caf */
  if (C.zf) goto L_10184caf;
  /* 10184c9b push 0xa */
  push32((uint32_t)(0xau));
  /* 10184c9d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10184c9f push 0xa */
  push32((uint32_t)(0xau));
  /* 10184ca1 push 0x10193668 */
  push32((uint32_t)(0x10193668u));
  /* 10184ca6 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184cacu);
  /* 10184cac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184caf:;
  /* 10184caf call 0x10184360 */
  push32(0x10184cb4u); f_10184360();
L_10184cb4:;
  /* 10184cb4 push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 10184cb9 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10184cbfu);
  /* 10184cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184cc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184cc4 je 0x10184d14 */
  if (C.zf) goto L_10184d14;
  /* 10184cc6 push 0x10196100 */
  push32((uint32_t)(0x10196100u));
  /* 10184ccb call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10184cd1u);
  /* 10184cd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184cd4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184cd6 jne 0x10184d05 */
  if (!C.zf) goto L_10184d05;
  /* 10184cd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10184cda push 2 */
  push32((uint32_t)(0x2u));
  /* 10184cdc jmp 0x10184d09 */
  goto L_10184d09;
L_10184cde:;
  /* 10184cde push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10184ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184ce2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10184ce4 push 0x10196160 */
  push32((uint32_t)(0x10196160u));
  /* 10184ce9 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184cefu);
  /* 10184cef push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10184cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184cf3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10184cf5 push 0x10196278 */
  push32((uint32_t)(0x10196278u));
  /* 10184cfa call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184d00u);
  /* 10184d00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184d03 jmp 0x10184cb4 */
  goto L_10184cb4;
L_10184d05:;
  /* 10184d05 push 4 */
  push32((uint32_t)(0x4u));
  /* 10184d07 push 4 */
  push32((uint32_t)(0x4u));
L_10184d09:;
  /* 10184d09 push 8 */
  push32((uint32_t)(0x8u));
  /* 10184d0b call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x10184d11u);
  /* 10184d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184d14:;
  /* 10184d14 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10184d19 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10184d1fu);
  /* 10184d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10184d24 je 0x10184d3a */
  if (C.zf) goto L_10184d3a;
  /* 10184d26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184d28 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184d2a push 6 */
  push32((uint32_t)(0x6u));
  /* 10184d2c push 0x101961f0 */
  push32((uint32_t)(0x101961f0u));
  /* 10184d31 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184d37u);
  /* 10184d37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184d3a:;
  /* 10184d3a push 0x101960f0 */
  push32((uint32_t)(0x101960f0u));
  /* 10184d3f call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10184d45u);
  /* 10184d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184d48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184d4a je 0x10184d60 */
  if (C.zf) goto L_10184d60;
  /* 10184d4c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184d4e push 0xa */
  push32((uint32_t)(0xau));
  /* 10184d50 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10184d52 push 0x101961f0 */
  push32((uint32_t)(0x101961f0u));
  /* 10184d57 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184d5du);
  /* 10184d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184d60:;
  /* 10184d60 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10184d62 je 0x10184e63 */
  if (C.zf) goto L_10184e63;
  /* 10184d68 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10184d6a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10184d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10184d6e push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10184d73 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184d79u);
  /* 10184d79 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10184d7b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10184d7d push 3 */
  push32((uint32_t)(0x3u));
  /* 10184d7f push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10184d84 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184d8au);
  /* 10184d8a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10184d8c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10184d8e push 4 */
  push32((uint32_t)(0x4u));
  /* 10184d90 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10184d95 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184d9bu);
  /* 10184d9b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10184d9d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10184d9f push 5 */
  push32((uint32_t)(0x5u));
  /* 10184da1 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10184da6 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184dacu);
  /* 10184dac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184daf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10184db1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10184db3 push 6 */
  push32((uint32_t)(0x6u));
  /* 10184db5 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10184dba call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184dc0u);
  /* 10184dc0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184dc2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10184dc4 push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 10184dc9 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184dcfu);
  /* 10184dcf push 0x101960e0 */
  push32((uint32_t)(0x101960e0u));
  /* 10184dd4 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10184ddau);
  /* 10184dda add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184ddd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184de0 jle 0x10184e03 */
  if ((C.zf||C.sf!=C.of)) goto L_10184e03;
  /* 10184de2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184de4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184de6 push 0x10196208 */
  push32((uint32_t)(0x10196208u));
  /* 10184deb call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184df1u);
  /* 10184df1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10184df3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10184df5 push 0x10196210 */
  push32((uint32_t)(0x10196210u));
  /* 10184dfa call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184e00u);
  /* 10184e00 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184e03:;
  /* 10184e03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184e05 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10184e07 push 0x101960f0 */
  push32((uint32_t)(0x101960f0u));
  /* 10184e0c call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184e12u);
  /* 10184e12 push 0x10193908 */
  push32((uint32_t)(0x10193908u));
  /* 10184e17 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10184e1du);
  /* 10184e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184e20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184e22 je 0x10184e63 */
  if (C.zf) goto L_10184e63;
  /* 10184e24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184e26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184e28 push 0x10196168 */
  push32((uint32_t)(0x10196168u));
  /* 10184e2d call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184e33u);
  /* 10184e33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184e35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184e37 push 0x10196178 */
  push32((uint32_t)(0x10196178u));
  /* 10184e3c call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184e42u);
  /* 10184e42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184e44 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10184e46 push 0x10196180 */
  push32((uint32_t)(0x10196180u));
  /* 10184e4b call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184e51u);
  /* 10184e51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10184e55 push 0x10196170 */
  push32((uint32_t)(0x10196170u));
  /* 10184e5a call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184e60u);
  /* 10184e60 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184e63:;
  /* 10184e63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184e65 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10184e67 push 0x101937a0 */
  push32((uint32_t)(0x101937a0u));
  /* 10184e6c call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184e72u);
  /* 10184e72 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10184e74 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10184e76 push 0x101938e0 */
  push32((uint32_t)(0x101938e0u));
  /* 10184e7b call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184e81u);
  /* 10184e81 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184e83 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184e85 push 0x10196150 */
  push32((uint32_t)(0x10196150u));
  /* 10184e8a call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10184e90u);
  /* 10184e90 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 10184e94 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184e97 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184e9c jle 0x10184eba */
  if ((C.zf||C.sf!=C.of)) goto L_10184eba;
  /* 10184e9e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10184ea0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10184ea2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10184ea7 push 0x101960e0 */
  push32((uint32_t)(0x101960e0u));
  /* 10184eac call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10184eb2u);
  /* 10184eb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184eb5 call 0x10184310 */
  push32(0x10184ebau); f_10184310();
L_10184eba:;
  /* 10184eba push 0x10193878 */
  push32((uint32_t)(0x10193878u));
  /* 10184ebf call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10184ec5u);
  /* 10184ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10184eca je 0x10185213 */
  if (C.zf) goto L_10185213;
  /* 10184ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10184ed2 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184ed8u);
  /* 10184ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10184eda mov edi, eax */
  EDI = (EAX);
  /* 10184edc call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184ee2u);
  /* 10184ee2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10184ee4 mov esi, eax */
  ESI = (EAX);
  /* 10184ee6 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184eecu);
  /* 10184eec push 5 */
  push32((uint32_t)(0x5u));
  /* 10184eee mov ebp, eax */
  EBP = (EAX);
  /* 10184ef0 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184ef6u);
  /* 10184ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10184ef8 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10184efc call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10184f02u);
  /* 10184f02 mov ebx, eax */
  EBX = (EAX);
  /* 10184f04 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10184f08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184f0b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184f10 jge 0x10184fa3 */
  if ((C.sf==C.of)) goto L_10184fa3;
  /* 10184f16 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184f1c jle 0x10184f29 */
  if ((C.zf||C.sf!=C.of)) goto L_10184f29;
  /* 10184f1e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10184f23 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184f25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10184f27 jmp 0x10184f9b */
  goto L_10184f9b;
L_10184f29:;
  /* 10184f29 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184f2f jle 0x10184f3c */
  if ((C.zf||C.sf!=C.of)) goto L_10184f3c;
  /* 10184f31 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10184f36 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10184f3a jmp 0x10184f9b */
  goto L_10184f9b;
L_10184f3c:;
  /* 10184f3c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184f42 jle 0x10184f4f */
  if ((C.zf||C.sf!=C.of)) goto L_10184f4f;
  /* 10184f44 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10184f49 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10184f4d jmp 0x10184f9b */
  goto L_10184f9b;
L_10184f4f:;
  /* 10184f4f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184f55 jle 0x10184f62 */
  if ((C.zf||C.sf!=C.of)) goto L_10184f62;
  /* 10184f57 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10184f5c push 3 */
  push32((uint32_t)(0x3u));
  /* 10184f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10184f60 jmp 0x10184f9b */
  goto L_10184f9b;
L_10184f62:;
  /* 10184f62 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184f6a jle 0x10184f77 */
  if ((C.zf||C.sf!=C.of)) goto L_10184f77;
  /* 10184f6c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10184f71 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184f73 push 5 */
  push32((uint32_t)(0x5u));
  /* 10184f75 jmp 0x10184f9b */
  goto L_10184f9b;
L_10184f77:;
  /* 10184f77 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184f7d jle 0x10184f8a */
  if ((C.zf||C.sf!=C.of)) goto L_10184f8a;
  /* 10184f7f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10184f84 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184f86 push 4 */
  push32((uint32_t)(0x4u));
  /* 10184f88 jmp 0x10184f9b */
  goto L_10184f9b;
L_10184f8a:;
  /* 10184f8a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184f90 jle 0x10184fa3 */
  if ((C.zf||C.sf!=C.of)) goto L_10184fa3;
  /* 10184f92 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10184f97 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184f99 push 1 */
  push32((uint32_t)(0x1u));
L_10184f9b:;
  /* 10184f9b call 0x10182610 */
  push32(0x10184fa0u); f_10182610();
  /* 10184fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184fa3:;
  /* 10184fa3 push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 10184fa8 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10184faeu);
  /* 10184fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10184fb3 je 0x10185003 */
  if (C.zf) goto L_10185003;
  /* 10184fb5 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184fbb jle 0x10185003 */
  if ((C.zf||C.sf!=C.of)) goto L_10185003;
  /* 10184fbd push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 10184fc2 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10184fc8u);
  /* 10184fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10184fcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10184fcd jne 0x10185003 */
  if (!C.zf) goto L_10185003;
  /* 10184fcf cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184fd5 jle 0x10184fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_10184fe8;
  /* 10184fd7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10184fdc push 3 */
  push32((uint32_t)(0x3u));
  /* 10184fde push 4 */
  push32((uint32_t)(0x4u));
  /* 10184fe0 call 0x10182610 */
  push32(0x10184fe5u); f_10182610();
  /* 10184fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10184fe8:;
  /* 10184fe8 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10184ff0 jle 0x10185003 */
  if ((C.zf||C.sf!=C.of)) goto L_10185003;
  /* 10184ff2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10184ff7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10184ff9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10184ffb call 0x10182610 */
  push32(0x10185000u); f_10182610();
  /* 10185000 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185003:;
  /* 10185003 push 2 */
  push32((uint32_t)(0x2u));
  /* 10185005 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x1018500bu);
  /* 1018500b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018500e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185013 jle 0x10185026 */
  if ((C.zf||C.sf!=C.of)) goto L_10185026;
  /* 10185015 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 1018501a push 1 */
  push32((uint32_t)(0x1u));
  /* 1018501c push 2 */
  push32((uint32_t)(0x2u));
  /* 1018501e call 0x10182610 */
  push32(0x10185023u); f_10182610();
  /* 10185023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185026:;
  /* 10185026 push 0 */
  push32((uint32_t)(0x0u));
  /* 10185028 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x1018502eu);
  /* 1018502e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185031 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185036 jle 0x10185049 */
  if ((C.zf||C.sf!=C.of)) goto L_10185049;
  /* 10185038 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1018503d push 1 */
  push32((uint32_t)(0x1u));
  /* 1018503f push 0 */
  push32((uint32_t)(0x0u));
  /* 10185041 call 0x10182610 */
  push32(0x10185046u); f_10182610();
  /* 10185046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185049:;
  /* 10185049 push 0x101961e8 */
  push32((uint32_t)(0x101961e8u));
  /* 1018504e call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185054u);
  /* 10185054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185059 je 0x101851e0 */
  if (C.zf) goto L_101851e0;
  /* 1018505f push 0x101961b8 */
  push32((uint32_t)(0x101961b8u));
  /* 10185064 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x1018506au);
  /* 1018506a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018506d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018506f jne 0x101851e0 */
  if (!C.zf) goto L_101851e0;
  /* 10185075 push 5 */
  push32((uint32_t)(0x5u));
  /* 10185077 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x1018507du);
  /* 1018507d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185080 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185085 jle 0x10185140 */
  if ((C.zf||C.sf!=C.of)) goto L_10185140;
  /* 1018508b push 0 */
  push32((uint32_t)(0x0u));
  /* 1018508d call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10185093u);
  /* 10185093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185098 je 0x10185140 */
  if (C.zf) goto L_10185140;
  /* 1018509e push 1 */
  push32((uint32_t)(0x1u));
  /* 101850a0 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101850a6u);
  /* 101850a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101850a9 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101850ae jge 0x10185140 */
  if ((C.sf==C.of)) goto L_10185140;
  /* 101850b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101850b6 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101850bcu);
  /* 101850bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101850bf cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101850c4 jle 0x101850d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101850d7;
  /* 101850c6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101850cb push 1 */
  push32((uint32_t)(0x1u));
  /* 101850cd push 5 */
  push32((uint32_t)(0x5u));
  /* 101850cf call 0x10182610 */
  push32(0x101850d4u); f_10182610();
  /* 101850d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101850d7:;
  /* 101850d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101850d9 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101850dfu);
  /* 101850df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101850e2 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101850e7 jle 0x101850fa */
  if ((C.zf||C.sf!=C.of)) goto L_101850fa;
  /* 101850e9 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 101850ee push 1 */
  push32((uint32_t)(0x1u));
  /* 101850f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101850f2 call 0x10182610 */
  push32(0x101850f7u); f_10182610();
  /* 101850f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101850fa:;
  /* 101850fa push 2 */
  push32((uint32_t)(0x2u));
  /* 101850fc call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10185102u);
  /* 10185102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185105 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018510a jle 0x1018511d */
  if ((C.zf||C.sf!=C.of)) goto L_1018511d;
  /* 1018510c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10185111 push 1 */
  push32((uint32_t)(0x1u));
  /* 10185113 push 2 */
  push32((uint32_t)(0x2u));
  /* 10185115 call 0x10182610 */
  push32(0x1018511au); f_10182610();
  /* 1018511a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018511d:;
  /* 1018511d push 3 */
  push32((uint32_t)(0x3u));
  /* 1018511f call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10185125u);
  /* 10185125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185128 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018512d jle 0x10185140 */
  if ((C.zf||C.sf!=C.of)) goto L_10185140;
  /* 1018512f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10185134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10185136 push 3 */
  push32((uint32_t)(0x3u));
  /* 10185138 call 0x10182610 */
  push32(0x1018513du); f_10182610();
  /* 1018513d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185140:;
  /* 10185140 push 5 */
  push32((uint32_t)(0x5u));
  /* 10185142 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10185148u);
  /* 10185148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018514b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185150 jle 0x101851e0 */
  if ((C.zf||C.sf!=C.of)) goto L_101851e0;
  /* 10185156 push 1 */
  push32((uint32_t)(0x1u));
  /* 10185158 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x1018515eu);
  /* 1018515e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185163 je 0x101851e0 */
  if (C.zf) goto L_101851e0;
  /* 10185165 push 1 */
  push32((uint32_t)(0x1u));
  /* 10185167 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x1018516du);
  /* 1018516d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185170 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185175 jle 0x101851e0 */
  if ((C.zf||C.sf!=C.of)) goto L_101851e0;
  /* 10185177 push 5 */
  push32((uint32_t)(0x5u));
  /* 10185179 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x1018517fu);
  /* 1018517f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185182 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185187 jle 0x1018519a */
  if ((C.zf||C.sf!=C.of)) goto L_1018519a;
  /* 10185189 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1018518e push 4 */
  push32((uint32_t)(0x4u));
  /* 10185190 push 5 */
  push32((uint32_t)(0x5u));
  /* 10185192 call 0x10182610 */
  push32(0x10185197u); f_10182610();
  /* 10185197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018519a:;
  /* 1018519a push 2 */
  push32((uint32_t)(0x2u));
  /* 1018519c call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101851a2u);
  /* 101851a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101851a5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101851aa jle 0x101851bd */
  if ((C.zf||C.sf!=C.of)) goto L_101851bd;
  /* 101851ac push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 101851b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101851b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 101851b5 call 0x10182610 */
  push32(0x101851bau); f_10182610();
  /* 101851ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101851bd:;
  /* 101851bd push 3 */
  push32((uint32_t)(0x3u));
  /* 101851bf call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101851c5u);
  /* 101851c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101851c8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101851cd jle 0x101851e0 */
  if ((C.zf||C.sf!=C.of)) goto L_101851e0;
  /* 101851cf push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 101851d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 101851d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101851d8 call 0x10182610 */
  push32(0x101851ddu); f_10182610();
  /* 101851dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101851e0:;
  /* 101851e0 call dword ptr [0x10196500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196500))), 0x101851e6u);
  /* 101851e6 mov ecx, dword ptr [eax*4 + 0x1019660c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1019660c)));
  /* 101851ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101851ef jne 0x10185213 */
  if (!C.zf) goto L_10185213;
  /* 101851f1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 101851f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101851f8 push 5 */
  push32((uint32_t)(0x5u));
  /* 101851fa call 0x10182610 */
  push32(0x101851ffu); f_10182610();
  /* 101851ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185202 call dword ptr [0x10196500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196500))), 0x10185208u);
  /* 10185208 mov dword ptr [eax*4 + 0x1019660c], 1 */
  w32((uint32_t)(EAX*4 + 0x1019660c), (0x1u));
L_10185213:;
  /* 10185213 pop edi */
  EDI = (pop32());
  /* 10185214 pop esi */
  ESI = (pop32());
  /* 10185215 pop ebp */
  EBP = (pop32());
  /* 10185216 pop ebx */
  EBX = (pop32());
  /* 10185217 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018521a ret  */
  ESPCHK(0x101843e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005220 @ 0x10185220 (72 bytes, 22 insns) */
void f_10185220(void) {
  FTRACE(0x10185220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10185220 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185222 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185224 push 1 */
  push32((uint32_t)(0x1u));
  /* 10185226 push 0x10195fd8 */
  push32((uint32_t)(0x10195fd8u));
  /* 1018522b call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185231u);
  /* 10185231 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185233 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185235 push 1 */
  push32((uint32_t)(0x1u));
  /* 10185237 push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 1018523c call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185242u);
  /* 10185242 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185244 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185246 push 1 */
  push32((uint32_t)(0x1u));
  /* 10185248 push 0x10195fd0 */
  push32((uint32_t)(0x10195fd0u));
  /* 1018524d call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185253u);
  /* 10185253 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185257 push 1 */
  push32((uint32_t)(0x1u));
  /* 10185259 push 0x10193878 */
  push32((uint32_t)(0x10193878u));
  /* 1018525e call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185264u);
  /* 10185264 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185267 ret  */
  ESPCHK(0x10185220u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x10185270 (55 bytes, 16 insns) */
void f_10185270(void) {
  FTRACE(0x10185270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10185270 cmp dword ptr [esp + 4], 0x10193688 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x10193688u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185278 jne 0x101852a4 */
  if (!C.zf) goto L_101852a4;
  /* 1018527a push 0x10196340 */
  push32((uint32_t)(0x10196340u));
  /* 1018527f call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10185285u);
  /* 10185285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185288 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018528a je 0x101852a4 */
  if (C.zf) goto L_101852a4;
  /* 1018528c push 0x10196288 */
  push32((uint32_t)(0x10196288u));
  /* 10185291 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10185297u);
  /* 10185297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018529a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018529c je 0x101852a4 */
  if (C.zf) goto L_101852a4;
  /* 1018529e mov eax, 1 */
  EAX = (0x1u);
  /* 101852a3 ret  */
  ESPCHK(0x10185270u, _esp0);
  ESP += 4; return;
L_101852a4:;
  /* 101852a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101852a6 ret  */
  ESPCHK(0x10185270u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x101852b0 (2008 bytes, 535 insns) */
void f_101852b0(void) {
  FTRACE(0x101852b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101852b0 push 0x10196278 */
  push32((uint32_t)(0x10196278u));
  /* 101852b5 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101852bbu);
  /* 101852bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101852be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101852c0 jne 0x101852d4 */
  if (!C.zf) goto L_101852d4;
  /* 101852c2 push 0x101938c8 */
  push32((uint32_t)(0x101938c8u));
  /* 101852c7 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101852cdu);
  /* 101852cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101852d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101852d2 je 0x10185304 */
  if (C.zf) goto L_10185304;
L_101852d4:;
  /* 101852d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101852d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101852d8 push 0x10193950 */
  push32((uint32_t)(0x10193950u));
  /* 101852dd call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101852e3u);
  /* 101852e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101852e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101852e7 push 0x101961f8 */
  push32((uint32_t)(0x101961f8u));
  /* 101852ec call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101852f2u);
  /* 101852f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101852f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101852f6 push 0x10196200 */
  push32((uint32_t)(0x10196200u));
  /* 101852fb call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185301u);
  /* 10185301 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185304:;
  /* 10185304 push 0x101963b0 */
  push32((uint32_t)(0x101963b0u));
  /* 10185309 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018530fu);
  /* 1018530f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185312 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185315 jg 0x1018533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1018533f;
  /* 10185317 push 0x10196330 */
  push32((uint32_t)(0x10196330u));
  /* 1018531c call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185322u);
  /* 10185322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185325 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185328 jg 0x1018533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1018533f;
  /* 1018532a push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 1018532f call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185335u);
  /* 10185335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185338 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018533d jle 0x1018539d */
  if ((C.zf||C.sf!=C.of)) goto L_1018539d;
L_1018533f:;
  /* 1018533f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185341 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10185343 push 0x10193628 */
  push32((uint32_t)(0x10193628u));
  /* 10185348 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018534eu);
  /* 1018534e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185350 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10185352 push 0x10193630 */
  push32((uint32_t)(0x10193630u));
  /* 10185357 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018535du);
  /* 1018535d push 0x101963b0 */
  push32((uint32_t)(0x101963b0u));
  /* 10185362 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185368u);
  /* 10185368 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018536b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185370 jg 0x1018538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1018538b;
  /* 10185372 push 0x10196330 */
  push32((uint32_t)(0x10196330u));
  /* 10185377 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018537du);
  /* 1018537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185380 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185383 jg 0x1018538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1018538b;
  /* 10185385 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185387 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10185389 jmp 0x1018538f */
  goto L_1018538f;
L_1018538b:;
  /* 1018538b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018538d push 0x5f */
  push32((uint32_t)(0x5fu));
L_1018538f:;
  /* 1018538f push 0x10193708 */
  push32((uint32_t)(0x10193708u));
  /* 10185394 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018539au);
  /* 1018539a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018539d:;
  /* 1018539d push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 101853a2 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101853a8u);
  /* 101853a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101853ab cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101853ae jle 0x10185463 */
  if ((C.zf||C.sf!=C.of)) goto L_10185463;
  /* 101853b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101853b6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101853b8 push 0x10196350 */
  push32((uint32_t)(0x10196350u));
  /* 101853bd call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101853c3u);
  /* 101853c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101853c5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101853c7 push 0x10196358 */
  push32((uint32_t)(0x10196358u));
  /* 101853cc call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101853d2u);
  /* 101853d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101853d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101853d6 push 0x10196340 */
  push32((uint32_t)(0x10196340u));
  /* 101853db call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101853e1u);
  /* 101853e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101853e3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101853e5 push 0x10196298 */
  push32((uint32_t)(0x10196298u));
  /* 101853ea call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101853f0u);
  /* 101853f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101853f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101853f4 push 0x10196280 */
  push32((uint32_t)(0x10196280u));
  /* 101853f9 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101853ffu);
  /* 101853ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185401 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185403 push 0x10196288 */
  push32((uint32_t)(0x10196288u));
  /* 10185408 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018540eu);
  /* 1018540e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185411 push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 10185416 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018541cu);
  /* 1018541c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018541f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185422 jle 0x10185463 */
  if ((C.zf||C.sf!=C.of)) goto L_10185463;
  /* 10185424 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185426 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185428 push 0x10196348 */
  push32((uint32_t)(0x10196348u));
  /* 1018542d call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185433u);
  /* 10185433 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185435 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185437 push 0x10196360 */
  push32((uint32_t)(0x10196360u));
  /* 1018543c call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185442u);
  /* 10185442 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185444 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185446 push 0x101962a0 */
  push32((uint32_t)(0x101962a0u));
  /* 1018544b call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185451u);
  /* 10185451 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185453 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185455 push 0x101962a8 */
  push32((uint32_t)(0x101962a8u));
  /* 1018545a call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185460u);
  /* 10185460 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185463:;
  /* 10185463 push 0x101960e0 */
  push32((uint32_t)(0x101960e0u));
  /* 10185468 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018546eu);
  /* 1018546e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185471 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185474 jle 0x1018550b */
  if ((C.zf||C.sf!=C.of)) goto L_1018550b;
  /* 1018547a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018547c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018547e push 0x10193910 */
  push32((uint32_t)(0x10193910u));
  /* 10185483 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185489u);
  /* 10185489 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018548b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018548d push 0x10193918 */
  push32((uint32_t)(0x10193918u));
  /* 10185492 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185498u);
  /* 10185498 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018549a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018549c push 0x10193908 */
  push32((uint32_t)(0x10193908u));
  /* 101854a1 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101854a7u);
  /* 101854a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101854a9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101854ab push 0x10195f78 */
  push32((uint32_t)(0x10195f78u));
  /* 101854b0 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101854b6u);
  /* 101854b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101854b8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101854ba push 0x10195f68 */
  push32((uint32_t)(0x10195f68u));
  /* 101854bf call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101854c5u);
  /* 101854c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101854c7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101854c9 push 0x10195f70 */
  push32((uint32_t)(0x10195f70u));
  /* 101854ce call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101854d4u);
  /* 101854d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101854d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101854d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101854db push 0x10196208 */
  push32((uint32_t)(0x10196208u));
  /* 101854e0 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101854e6u);
  /* 101854e6 push 0x101960e0 */
  push32((uint32_t)(0x101960e0u));
  /* 101854eb call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101854f1u);
  /* 101854f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101854f4 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101854f7 jle 0x1018550b */
  if ((C.zf||C.sf!=C.of)) goto L_1018550b;
  /* 101854f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101854fb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101854fd push 0x10196210 */
  push32((uint32_t)(0x10196210u));
  /* 10185502 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185508u);
  /* 10185508 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018550b:;
  /* 1018550b push 0x10193700 */
  push32((uint32_t)(0x10193700u));
  /* 10185510 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185516u);
  /* 10185516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185519 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018551c jle 0x1018553f */
  if ((C.zf||C.sf!=C.of)) goto L_1018553f;
  /* 1018551e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185520 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185522 push 0x10196260 */
  push32((uint32_t)(0x10196260u));
  /* 10185527 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018552du);
  /* 1018552d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018552f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185531 push 0x10195fc8 */
  push32((uint32_t)(0x10195fc8u));
  /* 10185536 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018553cu);
  /* 1018553c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018553f:;
  /* 1018553f push 0x101963b0 */
  push32((uint32_t)(0x101963b0u));
  /* 10185544 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018554au);
  /* 1018554a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018554d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185550 jle 0x10185623 */
  if ((C.zf||C.sf!=C.of)) goto L_10185623;
  /* 10185556 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185558 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1018555a push 0x10196130 */
  push32((uint32_t)(0x10196130u));
  /* 1018555f call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185565u);
  /* 10185565 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185567 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10185569 push 0x10196128 */
  push32((uint32_t)(0x10196128u));
  /* 1018556e call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185574u);
  /* 10185574 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185576 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185578 push 0x10196120 */
  push32((uint32_t)(0x10196120u));
  /* 1018557d call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185583u);
  /* 10185583 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185585 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10185587 push 0x10196018 */
  push32((uint32_t)(0x10196018u));
  /* 1018558c call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185592u);
  /* 10185592 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185594 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10185596 push 0x10196010 */
  push32((uint32_t)(0x10196010u));
  /* 1018559b call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101855a1u);
  /* 101855a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101855a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101855a5 push 0x10196008 */
  push32((uint32_t)(0x10196008u));
  /* 101855aa call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101855b0u);
  /* 101855b0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101855b3 push 0x101963b0 */
  push32((uint32_t)(0x101963b0u));
  /* 101855b8 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101855beu);
  /* 101855be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101855c1 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101855c4 jle 0x10185623 */
  if ((C.zf||C.sf!=C.of)) goto L_10185623;
  /* 101855c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101855c8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101855ca push 0x10196118 */
  push32((uint32_t)(0x10196118u));
  /* 101855cf call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101855d5u);
  /* 101855d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101855d7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101855d9 push 0x10196108 */
  push32((uint32_t)(0x10196108u));
  /* 101855de call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101855e4u);
  /* 101855e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101855e6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101855e8 push 0x10196158 */
  push32((uint32_t)(0x10196158u));
  /* 101855ed call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101855f3u);
  /* 101855f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101855f5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101855f7 push 0x10196000 */
  push32((uint32_t)(0x10196000u));
  /* 101855fc call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185602u);
  /* 10185602 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185604 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10185606 push 0x10195ff8 */
  push32((uint32_t)(0x10195ff8u));
  /* 1018560b call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185611u);
  /* 10185611 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185613 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10185615 push 0x10195ff0 */
  push32((uint32_t)(0x10195ff0u));
  /* 1018561a call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185620u);
  /* 10185620 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185623:;
  /* 10185623 push 0x10196330 */
  push32((uint32_t)(0x10196330u));
  /* 10185628 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018562eu);
  /* 1018562e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185631 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185634 jle 0x10185706 */
  if ((C.zf||C.sf!=C.of)) goto L_10185706;
  /* 1018563a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018563c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018563e push 0x10193748 */
  push32((uint32_t)(0x10193748u));
  /* 10185643 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185649u);
  /* 10185649 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018564b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018564d push 0x10193740 */
  push32((uint32_t)(0x10193740u));
  /* 10185652 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185658u);
  /* 10185658 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018565a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018565c push 0x10193738 */
  push32((uint32_t)(0x10193738u));
  /* 10185661 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185667u);
  /* 10185667 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185669 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018566b push 0x101936b8 */
  push32((uint32_t)(0x101936b8u));
  /* 10185670 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185676u);
  /* 10185676 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185678 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1018567a push 0x101936b0 */
  push32((uint32_t)(0x101936b0u));
  /* 1018567f call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185685u);
  /* 10185685 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185687 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10185689 push 0x101936a8 */
  push32((uint32_t)(0x101936a8u));
  /* 1018568e call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185694u);
  /* 10185694 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185697 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185699 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1018569b push 0x101936a0 */
  push32((uint32_t)(0x101936a0u));
  /* 101856a0 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101856a6u);
  /* 101856a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101856a8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101856aa push 0x10193678 */
  push32((uint32_t)(0x10193678u));
  /* 101856af call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101856b5u);
  /* 101856b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101856b7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101856b9 push 0x10193670 */
  push32((uint32_t)(0x10193670u));
  /* 101856be call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101856c4u);
  /* 101856c4 push 0x10193670 */
  push32((uint32_t)(0x10193670u));
  /* 101856c9 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101856cfu);
  /* 101856cf add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101856d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101856d4 je 0x10185706 */
  if (C.zf) goto L_10185706;
  /* 101856d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101856d8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101856da push 0x10193720 */
  push32((uint32_t)(0x10193720u));
  /* 101856df call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101856e5u);
  /* 101856e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101856e7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101856e9 push 0x10193718 */
  push32((uint32_t)(0x10193718u));
  /* 101856ee call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101856f4u);
  /* 101856f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101856f6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101856f8 push 0x10193710 */
  push32((uint32_t)(0x10193710u));
  /* 101856fd call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185703u);
  /* 10185703 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185706:;
  /* 10185706 push 0x10193690 */
  push32((uint32_t)(0x10193690u));
  /* 1018570b call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185711u);
  /* 10185711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185714 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185717 jle 0x1018579f */
  if ((C.zf||C.sf!=C.of)) goto L_1018579f;
  /* 1018571d push 0x10193680 */
  push32((uint32_t)(0x10193680u));
  /* 10185722 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185728u);
  /* 10185728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018572b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018572e jge 0x1018579f */
  if ((C.sf==C.of)) goto L_1018579f;
  /* 10185730 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185732 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10185734 push 0x10193900 */
  push32((uint32_t)(0x10193900u));
  /* 10185739 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018573fu);
  /* 1018573f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185741 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10185743 push 0x101938f8 */
  push32((uint32_t)(0x101938f8u));
  /* 10185748 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018574eu);
  /* 1018574e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185750 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185752 push 0x101938f0 */
  push32((uint32_t)(0x101938f0u));
  /* 10185757 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018575du);
  /* 1018575d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018575f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10185761 push 0x101938b8 */
  push32((uint32_t)(0x101938b8u));
  /* 10185766 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018576cu);
  /* 1018576c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018576e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10185770 push 0x101938b0 */
  push32((uint32_t)(0x101938b0u));
  /* 10185775 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018577bu);
  /* 1018577b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018577d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1018577f push 0x101938a8 */
  push32((uint32_t)(0x101938a8u));
  /* 10185784 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018578au);
  /* 1018578a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018578d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018578f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185791 push 0x10196208 */
  push32((uint32_t)(0x10196208u));
  /* 10185796 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018579cu);
  /* 1018579c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018579f:;
  /* 1018579f push 0x10193680 */
  push32((uint32_t)(0x10193680u));
  /* 101857a4 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101857aau);
  /* 101857aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101857ad cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101857b0 jle 0x10185891 */
  if ((C.zf||C.sf!=C.of)) goto L_10185891;
  /* 101857b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101857b8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101857ba push 0x10193658 */
  push32((uint32_t)(0x10193658u));
  /* 101857bf call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101857c5u);
  /* 101857c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101857c7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101857c9 push 0x10193650 */
  push32((uint32_t)(0x10193650u));
  /* 101857ce call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101857d4u);
  /* 101857d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101857d6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101857d8 push 0x10193648 */
  push32((uint32_t)(0x10193648u));
  /* 101857dd call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101857e3u);
  /* 101857e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101857e5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101857e7 push 0x10196318 */
  push32((uint32_t)(0x10196318u));
  /* 101857ec call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101857f2u);
  /* 101857f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101857f4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101857f6 push 0x10196310 */
  push32((uint32_t)(0x10196310u));
  /* 101857fb call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185801u);
  /* 10185801 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185803 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10185805 push 0x10196308 */
  push32((uint32_t)(0x10196308u));
  /* 1018580a call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185810u);
  /* 10185810 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185813 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185815 push 0xa */
  push32((uint32_t)(0xau));
  /* 10185817 push 0x10196390 */
  push32((uint32_t)(0x10196390u));
  /* 1018581c call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185822u);
  /* 10185822 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185824 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10185826 push 0x10196388 */
  push32((uint32_t)(0x10196388u));
  /* 1018582b call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185831u);
  /* 10185831 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185833 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10185835 push 0x101963d8 */
  push32((uint32_t)(0x101963d8u));
  /* 1018583a call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185840u);
  /* 10185840 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185842 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10185844 push 0x101963d0 */
  push32((uint32_t)(0x101963d0u));
  /* 10185849 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018584fu);
  /* 1018584f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185851 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10185853 push 0x101963c8 */
  push32((uint32_t)(0x101963c8u));
  /* 10185858 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018585eu);
  /* 1018585e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185860 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10185862 push 0x101963c0 */
  push32((uint32_t)(0x101963c0u));
  /* 10185867 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018586du);
  /* 1018586d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185870 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185872 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185874 push 0x10196208 */
  push32((uint32_t)(0x10196208u));
  /* 10185879 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018587fu);
  /* 1018587f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185881 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185883 push 0x10196210 */
  push32((uint32_t)(0x10196210u));
  /* 10185888 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018588eu);
  /* 1018588e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185891:;
  /* 10185891 push 0x10195f80 */
  push32((uint32_t)(0x10195f80u));
  /* 10185896 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018589cu);
  /* 1018589c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018589f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101858a2 jle 0x10185a00 */
  if ((C.zf||C.sf!=C.of)) goto L_10185a00;
  /* 101858a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101858aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101858ac push 0x101936e0 */
  push32((uint32_t)(0x101936e0u));
  /* 101858b1 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101858b7u);
  /* 101858b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101858b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101858bb push 0x101936e8 */
  push32((uint32_t)(0x101936e8u));
  /* 101858c0 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101858c6u);
  /* 101858c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101858c8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101858ca push 0x101936f0 */
  push32((uint32_t)(0x101936f0u));
  /* 101858cf call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101858d5u);
  /* 101858d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101858d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101858d9 push 0x101936f8 */
  push32((uint32_t)(0x101936f8u));
  /* 101858de call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101858e4u);
  /* 101858e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101858e6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101858e8 push 0x101936c0 */
  push32((uint32_t)(0x101936c0u));
  /* 101858ed call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101858f3u);
  /* 101858f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101858f5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101858f7 push 0x101936d0 */
  push32((uint32_t)(0x101936d0u));
  /* 101858fc call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185902u);
  /* 10185902 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185905 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185907 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185909 push 0x10193788 */
  push32((uint32_t)(0x10193788u));
  /* 1018590e call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185914u);
  /* 10185914 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185916 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185918 push 0x10193790 */
  push32((uint32_t)(0x10193790u));
  /* 1018591d call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185923u);
  /* 10185923 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185925 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185927 push 0x10193798 */
  push32((uint32_t)(0x10193798u));
  /* 1018592c call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185932u);
  /* 10185932 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185934 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185936 push 0x10193770 */
  push32((uint32_t)(0x10193770u));
  /* 1018593b call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185941u);
  /* 10185941 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185945 push 0x10193778 */
  push32((uint32_t)(0x10193778u));
  /* 1018594a call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185950u);
  /* 10185950 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185952 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185954 push 0x10193780 */
  push32((uint32_t)(0x10193780u));
  /* 10185959 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018595fu);
  /* 1018595f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185962 push 0x10195f80 */
  push32((uint32_t)(0x10195f80u));
  /* 10185967 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018596du);
  /* 1018596d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185970 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185973 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185975 jle 0x1018598a */
  if ((C.zf||C.sf!=C.of)) goto L_1018598a;
  /* 10185977 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185979 push 0x10196028 */
  push32((uint32_t)(0x10196028u));
  /* 1018597e call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185984u);
  /* 10185984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185986 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185988 jmp 0x1018599b */
  goto L_1018599b;
L_1018598a:;
  /* 1018598a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1018598c push 0x10196028 */
  push32((uint32_t)(0x10196028u));
  /* 10185991 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185997u);
  /* 10185997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185999 push 0xf */
  push32((uint32_t)(0xfu));
L_1018599b:;
  /* 1018599b push 0x10196088 */
  push32((uint32_t)(0x10196088u));
  /* 101859a0 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101859a6u);
  /* 101859a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101859a9 push 0x10196028 */
  push32((uint32_t)(0x10196028u));
  /* 101859ae call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101859b4u);
  /* 101859b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101859b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101859b9 je 0x101859df */
  if (C.zf) goto L_101859df;
  /* 101859bb push 0x10196088 */
  push32((uint32_t)(0x10196088u));
  /* 101859c0 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101859c6u);
  /* 101859c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101859c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101859cb je 0x101859df */
  if (C.zf) goto L_101859df;
  /* 101859cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101859cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101859d1 push 0x10196080 */
  push32((uint32_t)(0x10196080u));
  /* 101859d6 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101859dcu);
  /* 101859dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101859df:;
  /* 101859df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101859e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101859e3 push 0x10196208 */
  push32((uint32_t)(0x10196208u));
  /* 101859e8 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101859eeu);
  /* 101859ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101859f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101859f2 push 0x10196210 */
  push32((uint32_t)(0x10196210u));
  /* 101859f7 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101859fdu);
  /* 101859fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185a00:;
  /* 10185a00 push 0x10196308 */
  push32((uint32_t)(0x10196308u));
  /* 10185a05 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10185a0bu);
  /* 10185a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185a0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10185a10 je 0x10185a87 */
  if (C.zf) goto L_10185a87;
  /* 10185a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185a14 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185a16 push 0x10196170 */
  push32((uint32_t)(0x10196170u));
  /* 10185a1b call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185a21u);
  /* 10185a21 push 0x10196170 */
  push32((uint32_t)(0x10196170u));
  /* 10185a26 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10185a2cu);
  /* 10185a2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185a2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10185a31 je 0x10185a87 */
  if (C.zf) goto L_10185a87;
  /* 10185a33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185a35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185a37 push 0x10196180 */
  push32((uint32_t)(0x10196180u));
  /* 10185a3c call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185a42u);
  /* 10185a42 push 0x10196180 */
  push32((uint32_t)(0x10196180u));
  /* 10185a47 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10185a4du);
  /* 10185a4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185a50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10185a52 je 0x10185a87 */
  if (C.zf) goto L_10185a87;
  /* 10185a54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185a56 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185a58 push 0x10196178 */
  push32((uint32_t)(0x10196178u));
  /* 10185a5d call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185a63u);
  /* 10185a63 push 0x10196178 */
  push32((uint32_t)(0x10196178u));
  /* 10185a68 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10185a6eu);
  /* 10185a6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185a71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10185a73 je 0x10185a87 */
  if (C.zf) goto L_10185a87;
  /* 10185a75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185a77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185a79 push 0x10196168 */
  push32((uint32_t)(0x10196168u));
  /* 10185a7e call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185a84u);
  /* 10185a84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185a87:;
  /* 10185a87 ret  */
  ESPCHK(0x101852b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x10185a90 (305 bytes, 86 insns) */
void f_10185a90(void) {
  FTRACE(0x10185a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10185a90 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185a92 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10185a94 push 0x10196378 */
  push32((uint32_t)(0x10196378u));
  /* 10185a99 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185a9fu);
  /* 10185a9f push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 10185aa4 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185aaau);
  /* 10185aaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185aaf je 0x10185ac3 */
  if (C.zf) goto L_10185ac3;
  /* 10185ab1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185ab3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185ab5 push 0x10193660 */
  push32((uint32_t)(0x10193660u));
  /* 10185aba call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185ac0u);
  /* 10185ac0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185ac3:;
  /* 10185ac3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185ac5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185ac7 push 0x10196078 */
  push32((uint32_t)(0x10196078u));
  /* 10185acc call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185ad2u);
  /* 10185ad2 push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 10185ad7 call 0x10185270 */
  push32(0x10185adcu); f_10185270();
  /* 10185adc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185ae1 jne 0x10185af1 */
  if (!C.zf) goto L_10185af1;
  /* 10185ae3 mov eax, dword ptr [0x10195f58] */
  EAX = (r32((uint32_t)(0x10195f58)));
  /* 10185ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185aea je 0x10185b03 */
  if (C.zf) goto L_10185b03;
  /* 10185aec cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185aef je 0x10185b03 */
  if (C.zf) goto L_10185b03;
L_10185af1:;
  /* 10185af1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185af3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10185af5 push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 10185afa call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185b00u);
  /* 10185b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185b03:;
  /* 10185b03 push 0x10195fe8 */
  push32((uint32_t)(0x10195fe8u));
  /* 10185b08 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185b0eu);
  /* 10185b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185b13 je 0x10185b27 */
  if (C.zf) goto L_10185b27;
  /* 10185b15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185b17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185b19 push 0x10196040 */
  push32((uint32_t)(0x10196040u));
  /* 10185b1e call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185b24u);
  /* 10185b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185b27:;
  /* 10185b27 push 0x10196150 */
  push32((uint32_t)(0x10196150u));
  /* 10185b2c call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10185b32u);
  /* 10185b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185b35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10185b37 je 0x10185b4b */
  if (C.zf) goto L_10185b4b;
  /* 10185b39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185b3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185b3d push 0x10196030 */
  push32((uint32_t)(0x10196030u));
  /* 10185b42 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185b48u);
  /* 10185b48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185b4b:;
  /* 10185b4b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185b4d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10185b4f push 0x10196150 */
  push32((uint32_t)(0x10196150u));
  /* 10185b54 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185b5au);
  /* 10185b5a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185b5c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10185b5e push 0x10196100 */
  push32((uint32_t)(0x10196100u));
  /* 10185b63 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185b69u);
  /* 10185b69 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10185b6e call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185b74u);
  /* 10185b74 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185b79 je 0x10185b8d */
  if (C.zf) goto L_10185b8d;
  /* 10185b7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185b7d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10185b7f push 0x101961b8 */
  push32((uint32_t)(0x101961b8u));
  /* 10185b84 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185b8au);
  /* 10185b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185b8d:;
  /* 10185b8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185b8f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10185b91 push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 10185b96 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185b9cu);
  /* 10185b9c push 0x10196258 */
  push32((uint32_t)(0x10196258u));
  /* 10185ba1 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185ba7u);
  /* 10185ba7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185bac je 0x10185bc0 */
  if (C.zf) goto L_10185bc0;
  /* 10185bae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185bb0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185bb2 push 0x101938e0 */
  push32((uint32_t)(0x101938e0u));
  /* 10185bb7 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10185bbdu);
  /* 10185bbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185bc0:;
  /* 10185bc0 ret  */
  ESPCHK(0x10185a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x10185bd0 (536 bytes, 150 insns) */
void f_10185bd0(void) {
  FTRACE(0x10185bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10185bd0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185bd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185bd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10185bd6 push 0x10196258 */
  push32((uint32_t)(0x10196258u));
  /* 10185bdb call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185be1u);
  /* 10185be1 push 0x10195fe8 */
  push32((uint32_t)(0x10195fe8u));
  /* 10185be6 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10185becu);
  /* 10185bec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185bf1 je 0x10185c18 */
  if (C.zf) goto L_10185c18;
  /* 10185bf3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185bf5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10185bf9 push 0x10195fd8 */
  push32((uint32_t)(0x10195fd8u));
  /* 10185bfe call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185c04u);
  /* 10185c04 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185c06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185c08 push 4 */
  push32((uint32_t)(0x4u));
  /* 10185c0a push 0x10195fd0 */
  push32((uint32_t)(0x10195fd0u));
  /* 10185c0f call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185c15u);
  /* 10185c15 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185c18:;
  /* 10185c18 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185c1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10185c1e push 0x10195fd8 */
  push32((uint32_t)(0x10195fd8u));
  /* 10185c23 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185c29u);
  /* 10185c29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185c2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185c2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10185c2f push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 10185c34 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185c3au);
  /* 10185c3a mov eax, dword ptr [0x101962b4] */
  EAX = (r32((uint32_t)(0x101962b4)));
  /* 10185c3f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185c42 mov ecx, dword ptr [eax*4 + 0x10195f98] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10195f98)));
  /* 10185c49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10185c4b jne 0x10185c68 */
  if (!C.zf) goto L_10185c68;
  /* 10185c4d call 0x10185220 */
  push32(0x10185c52u); f_10185220();
  /* 10185c52 push 0x10193878 */
  push32((uint32_t)(0x10193878u));
  /* 10185c57 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10185c5du);
  /* 10185c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185c62 je 0x10185de7 */
  if (C.zf) goto L_10185de7;
L_10185c68:;
  /* 10185c68 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185c6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185c6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10185c6e push 0x101961e8 */
  push32((uint32_t)(0x101961e8u));
  /* 10185c73 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185c79u);
  /* 10185c79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185c7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10185c7f push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 10185c84 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185c8au);
  /* 10185c8a push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 10185c8f call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10185c95u);
  /* 10185c95 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185c98 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185c9b jge 0x10185caa */
  if ((C.sf==C.of)) goto L_10185caa;
  /* 10185c9d call 0x10182670 */
  push32(0x10185ca2u); f_10182670();
  /* 10185ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185ca4 jne 0x10185de7 */
  if (!C.zf) goto L_10185de7;
L_10185caa:;
  /* 10185caa push esi */
  push32((uint32_t)(ESI));
  /* 10185cab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185cad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185caf push 2 */
  push32((uint32_t)(0x2u));
  /* 10185cb1 push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 10185cb6 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185cbcu);
  /* 10185cbc push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 10185cc1 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10185cc7u);
  /* 10185cc7 push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 10185ccc mov esi, eax */
  ESI = (EAX);
  /* 10185cce call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185cd4u);
  /* 10185cd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185cd7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10185cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185cdb pop esi */
  ESI = (pop32());
  /* 10185cdc jg 0x10185de7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10185de7;
  /* 10185ce2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185ce4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10185ce8 push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 10185ced call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185cf3u);
  /* 10185cf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185cf6 call 0x10182780 */
  push32(0x10185cfbu); f_10182780();
  /* 10185cfb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185cfe jge 0x10185d27 */
  if ((C.sf==C.of)) goto L_10185d27;
  /* 10185d00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185d02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10185d06 push 0x10195fe8 */
  push32((uint32_t)(0x10195fe8u));
  /* 10185d0b call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185d11u);
  /* 10185d11 push 0x10195fe8 */
  push32((uint32_t)(0x10195fe8u));
  /* 10185d16 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10185d1cu);
  /* 10185d1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185d21 je 0x10185de7 */
  if (C.zf) goto L_10185de7;
L_10185d27:;
  /* 10185d27 call 0x10185220 */
  push32(0x10185d2cu); f_10185220();
  /* 10185d2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185d2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185d30 push 4 */
  push32((uint32_t)(0x4u));
  /* 10185d32 push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 10185d37 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185d3du);
  /* 10185d3d push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 10185d42 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10185d48u);
  /* 10185d48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185d4b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185d4e jl 0x10185de7 */
  if ((C.sf!=C.of)) goto L_10185de7;
  /* 10185d54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185d56 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185d58 push 3 */
  push32((uint32_t)(0x3u));
  /* 10185d5a push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10185d5f call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185d65u);
  /* 10185d65 push 0x10196258 */
  push32((uint32_t)(0x10196258u));
  /* 10185d6a call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185d70u);
  /* 10185d70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185d75 je 0x10185d8b */
  if (C.zf) goto L_10185d8b;
  /* 10185d77 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185d79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185d7b push 4 */
  push32((uint32_t)(0x4u));
  /* 10185d7d push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10185d82 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185d88u);
  /* 10185d88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185d8b:;
  /* 10185d8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185d8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10185d91 push 0x10193618 */
  push32((uint32_t)(0x10193618u));
  /* 10185d96 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185d9cu);
  /* 10185d9c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185d9e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10185da0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10185da2 push 0x10193618 */
  push32((uint32_t)(0x10193618u));
  /* 10185da7 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185dadu);
  /* 10185dad push 0x101938e0 */
  push32((uint32_t)(0x101938e0u));
  /* 10185db2 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10185db8u);
  /* 10185db8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185dbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10185dbd je 0x10185dd3 */
  if (C.zf) goto L_10185dd3;
  /* 10185dbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185dc1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185dc3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10185dc5 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10185dca call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185dd0u);
  /* 10185dd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185dd3:;
  /* 10185dd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185dd5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185dd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10185dd9 push 0x101960f8 */
  push32((uint32_t)(0x101960f8u));
  /* 10185dde call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185de4u);
  /* 10185de4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185de7:;
  /* 10185de7 ret  */
  ESPCHK(0x10185bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x10185df0 (472 bytes, 137 insns) */
void f_10185df0(void) {
  FTRACE(0x10185df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10185df0 push ecx */
  push32((uint32_t)(ECX));
  /* 10185df1 push 0x10196278 */
  push32((uint32_t)(0x10196278u));
  /* 10185df6 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185dfcu);
  /* 10185dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185dff cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185e02 jge 0x10185e17 */
  if ((C.sf==C.of)) goto L_10185e17;
  /* 10185e04 mov eax, dword ptr [0x101962b4] */
  EAX = (r32((uint32_t)(0x101962b4)));
  /* 10185e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10185e0b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10185e0e push eax */
  push32((uint32_t)(EAX));
  /* 10185e0f call 0x101826d0 */
  push32(0x10185e14u); f_101826d0();
  /* 10185e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185e17:;
  /* 10185e17 push 0x10196278 */
  push32((uint32_t)(0x10196278u));
  /* 10185e1c call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185e22u);
  /* 10185e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185e25 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185e2a jg 0x10185e3e */
  if ((!C.zf&&C.sf==C.of)) goto L_10185e3e;
  /* 10185e2c push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10185e31 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10185e37u);
  /* 10185e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185e3c je 0x10185e52 */
  if (C.zf) goto L_10185e52;
L_10185e3e:;
  /* 10185e3e mov ecx, dword ptr [0x101962b4] */
  ECX = (r32((uint32_t)(0x101962b4)));
  /* 10185e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10185e46 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10185e49 push ecx */
  push32((uint32_t)(ECX));
  /* 10185e4a call 0x101826d0 */
  push32(0x10185e4fu); f_101826d0();
  /* 10185e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185e52:;
  /* 10185e52 push esi */
  push32((uint32_t)(ESI));
  /* 10185e53 push edi */
  push32((uint32_t)(EDI));
  /* 10185e54 mov edi, 2 */
  EDI = (0x2u);
L_10185e59:;
  /* 10185e59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185e5b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10185e5d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10185e62 push 0x10196190 */
  push32((uint32_t)(0x10196190u));
  /* 10185e67 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185e6du);
  /* 10185e6d push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 10185e72 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10185e78u);
  /* 10185e78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185e7b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185e80 jge 0x10185e9b */
  if ((C.sf==C.of)) goto L_10185e9b;
  /* 10185e82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185e84 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10185e86 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10185e8b push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 10185e90 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185e96u);
  /* 10185e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185e99 jmp 0x10185ec6 */
  goto L_10185ec6;
L_10185e9b:;
  /* 10185e9b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10185e9d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10185e9f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10185ea4 push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 10185ea9 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185eafu);
  /* 10185eaf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185eb1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10185eb3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10185eb8 push 0x101960e0 */
  push32((uint32_t)(0x101960e0u));
  /* 10185ebd call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185ec3u);
  /* 10185ec3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185ec6:;
  /* 10185ec6 mov edx, dword ptr [0x101962b4] */
  EDX = (r32((uint32_t)(0x101962b4)));
  /* 10185ecc add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10185ecf push edx */
  push32((uint32_t)(EDX));
  /* 10185ed0 call 0x101826f0 */
  push32(0x10185ed5u); f_101826f0();
  /* 10185ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185eda jne 0x10185efd */
  if (!C.zf) goto L_10185efd;
  /* 10185edc call 0x10182780 */
  push32(0x10185ee1u); f_10182780();
  /* 10185ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185ee4 jge 0x10185efd */
  if ((C.sf==C.of)) goto L_10185efd;
  /* 10185ee6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185ee8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10185eea push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10185eef push 0x10196278 */
  push32((uint32_t)(0x10196278u));
  /* 10185ef4 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185efau);
  /* 10185efa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10185efd:;
  /* 10185efd mov al, byte ptr [0x101962b4] */
  AL = (r8((uint32_t)(0x101962b4)));
  /* 10185f02 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10185f06 mov eax, dword ptr [0x101964b8] */
  EAX = (r32((uint32_t)(0x101964b8)));
  /* 10185f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185f0d je 0x10185f25 */
  if (C.zf) goto L_10185f25;
  /* 10185f0f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10185f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10185f15 push 0x10193888 */
  push32((uint32_t)(0x10193888u));
  /* 10185f1a push ecx */
  push32((uint32_t)(ECX));
  /* 10185f1b call eax */
  call_ind((uint32_t)(EAX), 0x10185f1du);
  /* 10185f1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185f20 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185f23 jge 0x10185f65 */
  if ((C.sf==C.of)) goto L_10185f65;
L_10185f25:;
  /* 10185f25 push 5 */
  push32((uint32_t)(0x5u));
  /* 10185f27 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10185f2du);
  /* 10185f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185f30 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185f35 jle 0x10185f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10185f65;
  /* 10185f37 push 4 */
  push32((uint32_t)(0x4u));
  /* 10185f39 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10185f3fu);
  /* 10185f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185f42 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185f47 jle 0x10185f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10185f65;
  /* 10185f49 mov esi, 0x1e */
  ESI = (0x1eu);
L_10185f4e:;
  /* 10185f4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185f50 push 0xa */
  push32((uint32_t)(0xau));
  /* 10185f52 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10185f54 push 0x10193888 */
  push32((uint32_t)(0x10193888u));
  /* 10185f59 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185f5fu);
  /* 10185f5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185f62 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10185f63 jne 0x10185f4e */
  if (!C.zf) goto L_10185f4e;
L_10185f65:;
  /* 10185f65 push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 10185f6a call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10185f70u);
  /* 10185f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185f73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10185f75 je 0x10185f7b */
  if (C.zf) goto L_10185f7b;
  /* 10185f77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10185f79 jmp 0x10185f7d */
  goto L_10185f7d;
L_10185f7b:;
  /* 10185f7b push 0x64 */
  push32((uint32_t)(0x64u));
L_10185f7d:;
  /* 10185f7d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10185f7f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10185f84 push 0x101963b0 */
  push32((uint32_t)(0x101963b0u));
  /* 10185f89 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185f8fu);
  /* 10185f8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185f92 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185f94 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10185f96 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10185f9b push 0x10193680 */
  push32((uint32_t)(0x10193680u));
  /* 10185fa0 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185fa6u);
  /* 10185fa6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10185fa8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10185faa push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10185faf push 0x10195f80 */
  push32((uint32_t)(0x10195f80u));
  /* 10185fb4 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10185fbau);
  /* 10185fba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185fbd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10185fbe jne 0x10185e59 */
  if (!C.zf) goto L_10185e59;
  /* 10185fc4 pop edi */
  EDI = (pop32());
  /* 10185fc5 pop esi */
  ESI = (pop32());
  /* 10185fc6 pop ecx */
  ECX = (pop32());
  /* 10185fc7 ret  */
  ESPCHK(0x10185df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x10185fd0 (789 bytes, 244 insns) */
void f_10185fd0(void) {
  FTRACE(0x10185fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10185fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10185fd1 push 0x10193878 */
  push32((uint32_t)(0x10193878u));
  /* 10185fd6 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10185fdcu);
  /* 10185fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10185fe1 je 0x101862e3 */
  if (C.zf) goto L_101862e3;
  /* 10185fe7 call 0x10182670 */
  push32(0x10185fecu); f_10182670();
  /* 10185fec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10185fef jne 0x10186036 */
  if (!C.zf) goto L_10186036;
  /* 10185ff1 mov eax, dword ptr [0x101962b4] */
  EAX = (r32((uint32_t)(0x101962b4)));
  /* 10185ff6 push eax */
  push32((uint32_t)(EAX));
  /* 10185ff7 call 0x101826f0 */
  push32(0x10185ffcu); f_101826f0();
  /* 10185ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10185fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186001 jne 0x101862e3 */
  if (!C.zf) goto L_101862e3;
  /* 10186007 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1018600c push 3 */
  push32((uint32_t)(0x3u));
  /* 1018600e push 2 */
  push32((uint32_t)(0x2u));
  /* 10186010 call 0x10182610 */
  push32(0x10186015u); f_10182610();
  /* 10186015 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 1018601a push 3 */
  push32((uint32_t)(0x3u));
  /* 1018601c push 0 */
  push32((uint32_t)(0x0u));
  /* 1018601e call 0x10182610 */
  push32(0x10186023u); f_10182610();
  /* 10186023 mov ecx, dword ptr [0x101962b4] */
  ECX = (r32((uint32_t)(0x101962b4)));
  /* 10186029 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018602b push ecx */
  push32((uint32_t)(ECX));
  /* 1018602c call 0x101826d0 */
  push32(0x10186031u); f_101826d0();
  /* 10186031 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186034 pop ecx */
  ECX = (pop32());
  /* 10186035 ret  */
  ESPCHK(0x10185fd0u, _esp0);
  ESP += 4; return;
L_10186036:;
  /* 10186036 push 0x10193878 */
  push32((uint32_t)(0x10193878u));
  /* 1018603b call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10186041u);
  /* 10186041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186046 je 0x101862e3 */
  if (C.zf) goto L_101862e3;
  /* 1018604c mov edx, dword ptr [0x101962b4] */
  EDX = (r32((uint32_t)(0x101962b4)));
  /* 10186052 push edx */
  push32((uint32_t)(EDX));
  /* 10186053 call 0x101826f0 */
  push32(0x10186058u); f_101826f0();
  /* 10186058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018605b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018605d jne 0x101860d2 */
  if (!C.zf) goto L_101860d2;
  /* 1018605f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10186064 push 3 */
  push32((uint32_t)(0x3u));
  /* 10186066 push 5 */
  push32((uint32_t)(0x5u));
  /* 10186068 call 0x10182610 */
  push32(0x1018606du); f_10182610();
  /* 1018606d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186070 call 0x10182670 */
  push32(0x10186075u); f_10182670();
  /* 10186075 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186078 jne 0x10186099 */
  if (!C.zf) goto L_10186099;
  /* 1018607a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1018607f push 0 */
  push32((uint32_t)(0x0u));
  /* 10186081 push 4 */
  push32((uint32_t)(0x4u));
  /* 10186083 call 0x10182610 */
  push32(0x10186088u); f_10182610();
  /* 10186088 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1018608d push 2 */
  push32((uint32_t)(0x2u));
  /* 1018608f push 4 */
  push32((uint32_t)(0x4u));
  /* 10186091 call 0x10182610 */
  push32(0x10186096u); f_10182610();
  /* 10186096 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186099:;
  /* 10186099 call 0x10182670 */
  push32(0x1018609eu); f_10182670();
  /* 1018609e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101860a1 jne 0x101860c2 */
  if (!C.zf) goto L_101860c2;
  /* 101860a3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 101860a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101860aa push 4 */
  push32((uint32_t)(0x4u));
  /* 101860ac call 0x10182610 */
  push32(0x101860b1u); f_10182610();
  /* 101860b1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 101860b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 101860b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 101860ba call 0x10182610 */
  push32(0x101860bfu); f_10182610();
  /* 101860bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101860c2:;
  /* 101860c2 mov eax, dword ptr [0x101962b4] */
  EAX = (r32((uint32_t)(0x101962b4)));
  /* 101860c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101860c9 push eax */
  push32((uint32_t)(EAX));
  /* 101860ca call 0x101826d0 */
  push32(0x101860cfu); f_101826d0();
  /* 101860cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101860d2:;
  /* 101860d2 push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 101860d7 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101860ddu);
  /* 101860dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101860e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101860e2 je 0x10186154 */
  if (C.zf) goto L_10186154;
  /* 101860e4 push 0x10196150 */
  push32((uint32_t)(0x10196150u));
  /* 101860e9 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101860efu);
  /* 101860ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101860f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101860f4 jne 0x10186154 */
  if (!C.zf) goto L_10186154;
  /* 101860f6 push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 101860fb call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10186101u);
  /* 10186101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186106 je 0x10186154 */
  if (C.zf) goto L_10186154;
  /* 10186108 mov eax, dword ptr [0x101964bc] */
  EAX = (r32((uint32_t)(0x101964bc)));
  /* 1018610d mov cl, byte ptr [0x101962b4] */
  CL = (r8((uint32_t)(0x101962b4)));
  /* 10186113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186115 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10186119 je 0x1018612e */
  if (C.zf) goto L_1018612e;
  /* 1018611b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1018611f push 5 */
  push32((uint32_t)(0x5u));
  /* 10186121 push 0x10196150 */
  push32((uint32_t)(0x10196150u));
  /* 10186126 push edx */
  push32((uint32_t)(EDX));
  /* 10186127 call eax */
  call_ind((uint32_t)(EAX), 0x10186129u);
  /* 10186129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018612c jmp 0x10186130 */
  goto L_10186130;
L_1018612e:;
  /* 1018612e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10186130:;
  /* 10186130 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10186133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10186135 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10186138 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 1018613d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1018613f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10186142 mov eax, edx */
  EAX = (EDX);
  /* 10186144 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10186147 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10186149 push edx */
  push32((uint32_t)(EDX));
  /* 1018614a push 5 */
  push32((uint32_t)(0x5u));
  /* 1018614c call 0x10182f90 */
  push32(0x10186151u); f_10182f90();
  /* 10186151 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186154:;
  /* 10186154 push 0x10196150 */
  push32((uint32_t)(0x10196150u));
  /* 10186159 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x1018615fu);
  /* 1018615f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186162 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10186164 je 0x10186279 */
  if (C.zf) goto L_10186279;
  /* 1018616a push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 1018616f call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10186175u);
  /* 10186175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186178 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018617a jne 0x10186279 */
  if (!C.zf) goto L_10186279;
  /* 10186180 mov eax, dword ptr [0x101964bc] */
  EAX = (r32((uint32_t)(0x101964bc)));
  /* 10186185 mov cl, byte ptr [0x101962b4] */
  CL = (r8((uint32_t)(0x101962b4)));
  /* 1018618b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018618d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10186191 je 0x101861a6 */
  if (C.zf) goto L_101861a6;
  /* 10186193 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10186197 push 3 */
  push32((uint32_t)(0x3u));
  /* 10186199 push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 1018619e push edx */
  push32((uint32_t)(EDX));
  /* 1018619f call eax */
  call_ind((uint32_t)(EAX), 0x101861a1u);
  /* 101861a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101861a4 jmp 0x101861a8 */
  goto L_101861a8;
L_101861a6:;
  /* 101861a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101861a8:;
  /* 101861a8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101861ab push 2 */
  push32((uint32_t)(0x2u));
  /* 101861ad lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 101861b0 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101861b5 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101861b7 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101861ba mov eax, edx */
  EAX = (EDX);
  /* 101861bc shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101861bf add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101861c1 push edx */
  push32((uint32_t)(EDX));
  /* 101861c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 101861c4 call 0x10182f90 */
  push32(0x101861c9u); f_10182f90();
  /* 101861c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101861cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101861ce je 0x10186279 */
  if (C.zf) goto L_10186279;
  /* 101861d4 mov eax, dword ptr [0x101964bc] */
  EAX = (r32((uint32_t)(0x101964bc)));
  /* 101861d9 mov cl, byte ptr [0x101962b4] */
  CL = (r8((uint32_t)(0x101962b4)));
  /* 101861df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101861e1 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101861e5 je 0x101861fa */
  if (C.zf) goto L_101861fa;
  /* 101861e7 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101861eb push 1 */
  push32((uint32_t)(0x1u));
  /* 101861ed push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 101861f2 push edx */
  push32((uint32_t)(EDX));
  /* 101861f3 call eax */
  call_ind((uint32_t)(EAX), 0x101861f5u);
  /* 101861f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101861f8 jmp 0x101861fc */
  goto L_101861fc;
L_101861fa:;
  /* 101861fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101861fc:;
  /* 101861fc lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 10186203 push 2 */
  push32((uint32_t)(0x2u));
  /* 10186205 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10186207 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 1018620a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1018620d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 10186212 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10186214 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10186217 mov eax, edx */
  EAX = (EDX);
  /* 10186219 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1018621c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018621e push edx */
  push32((uint32_t)(EDX));
  /* 1018621f push 1 */
  push32((uint32_t)(0x1u));
  /* 10186221 call 0x10182f90 */
  push32(0x10186226u); f_10182f90();
  /* 10186226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186229 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018622b je 0x10186279 */
  if (C.zf) goto L_10186279;
  /* 1018622d mov eax, dword ptr [0x101964bc] */
  EAX = (r32((uint32_t)(0x101964bc)));
  /* 10186232 mov cl, byte ptr [0x101962b4] */
  CL = (r8((uint32_t)(0x101962b4)));
  /* 10186238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018623a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 1018623e je 0x10186253 */
  if (C.zf) goto L_10186253;
  /* 10186240 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10186244 push 4 */
  push32((uint32_t)(0x4u));
  /* 10186246 push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 1018624b push edx */
  push32((uint32_t)(EDX));
  /* 1018624c call eax */
  call_ind((uint32_t)(EAX), 0x1018624eu);
  /* 1018624e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186251 jmp 0x10186255 */
  goto L_10186255;
L_10186253:;
  /* 10186253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10186255:;
  /* 10186255 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10186258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1018625a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 1018625d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10186262 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10186264 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10186267 mov eax, edx */
  EAX = (EDX);
  /* 10186269 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1018626c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018626e push edx */
  push32((uint32_t)(EDX));
  /* 1018626f push 4 */
  push32((uint32_t)(0x4u));
  /* 10186271 call 0x10182f90 */
  push32(0x10186276u); f_10182f90();
  /* 10186276 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186279:;
  /* 10186279 push 2 */
  push32((uint32_t)(0x2u));
  /* 1018627b call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10186281u);
  /* 10186281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186284 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186289 jle 0x101862ae */
  if ((C.zf||C.sf!=C.of)) goto L_101862ae;
  /* 1018628b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10186290 push 2 */
  push32((uint32_t)(0x2u));
  /* 10186292 push 0 */
  push32((uint32_t)(0x0u));
  /* 10186294 call 0x10182610 */
  push32(0x10186299u); f_10182610();
  /* 10186299 push 2 */
  push32((uint32_t)(0x2u));
  /* 1018629b call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101862a1u);
  /* 101862a1 push eax */
  push32((uint32_t)(EAX));
  /* 101862a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101862a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101862a6 call 0x10182610 */
  push32(0x101862abu); f_10182610();
  /* 101862ab add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101862ae:;
  /* 101862ae push 0 */
  push32((uint32_t)(0x0u));
  /* 101862b0 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101862b6u);
  /* 101862b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101862b9 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101862be jle 0x101862e3 */
  if ((C.zf||C.sf!=C.of)) goto L_101862e3;
  /* 101862c0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101862c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101862c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 101862c9 call 0x10182610 */
  push32(0x101862ceu); f_10182610();
  /* 101862ce push 0 */
  push32((uint32_t)(0x0u));
  /* 101862d0 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101862d6u);
  /* 101862d6 push eax */
  push32((uint32_t)(EAX));
  /* 101862d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101862d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 101862db call 0x10182610 */
  push32(0x101862e0u); f_10182610();
  /* 101862e0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101862e3:;
  /* 101862e3 pop ecx */
  ECX = (pop32());
  /* 101862e4 ret  */
  ESPCHK(0x10185fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x101862f0 (818 bytes, 268 insns) */
void f_101862f0(void) {
  FTRACE(0x101862f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101862f0 push ecx */
  push32((uint32_t)(ECX));
  /* 101862f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101862f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 101862f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101862f7 call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x101862fdu);
  /* 101862fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186300 call dword ptr [0x10196570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196570))), 0x10186306u);
  /* 10186306 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10186308 je 0x10186620 */
  if (C.zf) goto L_10186620;
  /* 1018630e push 4 */
  push32((uint32_t)(0x4u));
  /* 10186310 push 4 */
  push32((uint32_t)(0x4u));
  /* 10186312 push 9 */
  push32((uint32_t)(0x9u));
  /* 10186314 call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x1018631au);
  /* 1018631a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018631d call 0x10182670 */
  push32(0x10186322u); f_10182670();
  /* 10186322 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186325 je 0x10186620 */
  if (C.zf) goto L_10186620;
  /* 1018632b call dword ptr [0x10196570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196570))), 0x10186331u);
  /* 10186331 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10186333 je 0x10186611 */
  if (C.zf) goto L_10186611;
  /* 10186339 push esi */
  push32((uint32_t)(ESI));
  /* 1018633a push edi */
  push32((uint32_t)(EDI));
  /* 1018633b push 4 */
  push32((uint32_t)(0x4u));
  /* 1018633d push 4 */
  push32((uint32_t)(0x4u));
  /* 1018633f push 9 */
  push32((uint32_t)(0x9u));
  /* 10186341 call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x10186347u);
  /* 10186347 push 0x10196100 */
  push32((uint32_t)(0x10196100u));
  /* 1018634c call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10186352u);
  /* 10186352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186355 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10186357 jne 0x101863bf */
  if (!C.zf) goto L_101863bf;
  /* 10186359 mov al, byte ptr [0x101962b4] */
  AL = (r8((uint32_t)(0x101962b4)));
  /* 1018635e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10186362 mov eax, dword ptr [0x101964bc] */
  EAX = (r32((uint32_t)(0x101964bc)));
  /* 10186367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186369 je 0x10186380 */
  if (C.zf) goto L_10186380;
  /* 1018636b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1018636f push 3 */
  push32((uint32_t)(0x3u));
  /* 10186371 push 0x10196100 */
  push32((uint32_t)(0x10196100u));
  /* 10186376 push ecx */
  push32((uint32_t)(ECX));
  /* 10186377 call eax */
  call_ind((uint32_t)(EAX), 0x10186379u);
  /* 10186379 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018637c mov esi, eax */
  ESI = (EAX);
  /* 1018637e jmp 0x10186382 */
  goto L_10186382;
L_10186380:;
  /* 10186380 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10186382:;
  /* 10186382 push 3 */
  push32((uint32_t)(0x3u));
  /* 10186384 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x1018638au);
  /* 1018638a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 1018638d mov edi, eax */
  EDI = (EAX);
  /* 1018638f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10186394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186397 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 1018639a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1018639c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1018639f mov eax, edx */
  EAX = (EDX);
  /* 101863a1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101863a4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101863a6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101863a8 jge 0x101863b0 */
  if ((C.sf==C.of)) goto L_101863b0;
  /* 101863aa push 4 */
  push32((uint32_t)(0x4u));
  /* 101863ac push 4 */
  push32((uint32_t)(0x4u));
  /* 101863ae jmp 0x101863b4 */
  goto L_101863b4;
L_101863b0:;
  /* 101863b0 push 6 */
  push32((uint32_t)(0x6u));
  /* 101863b2 push 6 */
  push32((uint32_t)(0x6u));
L_101863b4:;
  /* 101863b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 101863b6 call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x101863bcu);
  /* 101863bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101863bf:;
  /* 101863bf push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 101863c4 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101863cau);
  /* 101863ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101863cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101863cf jne 0x10186438 */
  if (!C.zf) goto L_10186438;
  /* 101863d1 mov eax, dword ptr [0x101964bc] */
  EAX = (r32((uint32_t)(0x101964bc)));
  /* 101863d6 mov cl, byte ptr [0x101962b4] */
  CL = (r8((uint32_t)(0x101962b4)));
  /* 101863dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101863de mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 101863e2 je 0x101863f9 */
  if (C.zf) goto L_101863f9;
  /* 101863e4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 101863e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 101863ea push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 101863ef push edx */
  push32((uint32_t)(EDX));
  /* 101863f0 call eax */
  call_ind((uint32_t)(EAX), 0x101863f2u);
  /* 101863f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101863f5 mov esi, eax */
  ESI = (EAX);
  /* 101863f7 jmp 0x101863fb */
  goto L_101863fb;
L_101863f9:;
  /* 101863f9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101863fb:;
  /* 101863fb push 3 */
  push32((uint32_t)(0x3u));
  /* 101863fd call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10186403u);
  /* 10186403 mov edi, eax */
  EDI = (EAX);
  /* 10186405 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10186408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018640b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1018640e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10186413 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10186415 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10186418 mov ecx, edx */
  ECX = (EDX);
  /* 1018641a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1018641d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018641f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186421 jge 0x10186429 */
  if ((C.sf==C.of)) goto L_10186429;
  /* 10186423 push 9 */
  push32((uint32_t)(0x9u));
  /* 10186425 push 2 */
  push32((uint32_t)(0x2u));
  /* 10186427 jmp 0x1018642d */
  goto L_1018642d;
L_10186429:;
  /* 10186429 push 6 */
  push32((uint32_t)(0x6u));
  /* 1018642b push 6 */
  push32((uint32_t)(0x6u));
L_1018642d:;
  /* 1018642d push 9 */
  push32((uint32_t)(0x9u));
  /* 1018642f call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x10186435u);
  /* 10186435 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186438:;
  /* 10186438 push 0x10196150 */
  push32((uint32_t)(0x10196150u));
  /* 1018643d call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10186443u);
  /* 10186443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186446 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10186448 jne 0x101864af */
  if (!C.zf) goto L_101864af;
  /* 1018644a mov eax, dword ptr [0x101964bc] */
  EAX = (r32((uint32_t)(0x101964bc)));
  /* 1018644f mov dl, byte ptr [0x101962b4] */
  DL = (r8((uint32_t)(0x101962b4)));
  /* 10186455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186457 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 1018645b je 0x10186472 */
  if (C.zf) goto L_10186472;
  /* 1018645d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10186461 push 3 */
  push32((uint32_t)(0x3u));
  /* 10186463 push 0x10196150 */
  push32((uint32_t)(0x10196150u));
  /* 10186468 push ecx */
  push32((uint32_t)(ECX));
  /* 10186469 call eax */
  call_ind((uint32_t)(EAX), 0x1018646bu);
  /* 1018646b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018646e mov esi, eax */
  ESI = (EAX);
  /* 10186470 jmp 0x10186474 */
  goto L_10186474;
L_10186472:;
  /* 10186472 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10186474:;
  /* 10186474 push 3 */
  push32((uint32_t)(0x3u));
  /* 10186476 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x1018647cu);
  /* 1018647c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 1018647f mov edi, eax */
  EDI = (EAX);
  /* 10186481 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10186486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186489 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 1018648c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1018648e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10186491 mov eax, edx */
  EAX = (EDX);
  /* 10186493 push 1 */
  push32((uint32_t)(0x1u));
  /* 10186495 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10186498 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018649a push 9 */
  push32((uint32_t)(0x9u));
  /* 1018649c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018649e jge 0x101864a4 */
  if ((C.sf==C.of)) goto L_101864a4;
  /* 101864a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 101864a2 jmp 0x101864a6 */
  goto L_101864a6;
L_101864a4:;
  /* 101864a4 push 6 */
  push32((uint32_t)(0x6u));
L_101864a6:;
  /* 101864a6 call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x101864acu);
  /* 101864ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101864af:;
  /* 101864af push 0x10196340 */
  push32((uint32_t)(0x10196340u));
  /* 101864b4 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101864bau);
  /* 101864ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101864bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101864bf je 0x101864d3 */
  if (C.zf) goto L_101864d3;
  /* 101864c1 push 0x10196288 */
  push32((uint32_t)(0x10196288u));
  /* 101864c6 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101864ccu);
  /* 101864cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101864cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101864d1 jne 0x101864f4 */
  if (!C.zf) goto L_101864f4;
L_101864d3:;
  /* 101864d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101864d5 call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x101864dbu);
  /* 101864db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101864de cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101864e3 jge 0x101864f4 */
  if ((C.sf==C.of)) goto L_101864f4;
  /* 101864e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101864e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101864e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 101864eb call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x101864f1u);
  /* 101864f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101864f4:;
  /* 101864f4 push 0x10195fe8 */
  push32((uint32_t)(0x10195fe8u));
  /* 101864f9 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101864ffu);
  /* 101864ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186504 jne 0x10186577 */
  if (!C.zf) goto L_10186577;
  /* 10186506 call 0x10182780 */
  push32(0x1018650bu); f_10182780();
  /* 1018650b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018650e jge 0x10186577 */
  if ((C.sf==C.of)) goto L_10186577;
  /* 10186510 mov eax, dword ptr [0x101964b8] */
  EAX = (r32((uint32_t)(0x101964b8)));
  /* 10186515 mov cl, byte ptr [0x101962b4] */
  CL = (r8((uint32_t)(0x101962b4)));
  /* 1018651b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018651d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10186521 je 0x10186538 */
  if (C.zf) goto L_10186538;
  /* 10186523 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10186527 push 2 */
  push32((uint32_t)(0x2u));
  /* 10186529 push 0x10195fe8 */
  push32((uint32_t)(0x10195fe8u));
  /* 1018652e push edx */
  push32((uint32_t)(EDX));
  /* 1018652f call eax */
  call_ind((uint32_t)(EAX), 0x10186531u);
  /* 10186531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186534 mov esi, eax */
  ESI = (EAX);
  /* 10186536 jmp 0x1018653a */
  goto L_1018653a;
L_10186538:;
  /* 10186538 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1018653a:;
  /* 1018653a push 2 */
  push32((uint32_t)(0x2u));
  /* 1018653c call dword ptr [0x1019653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019653c))), 0x10186542u);
  /* 10186542 mov edi, eax */
  EDI = (EAX);
  /* 10186544 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10186547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018654a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1018654d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10186552 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10186554 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10186557 mov ecx, edx */
  ECX = (EDX);
  /* 10186559 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1018655c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018655e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186560 jge 0x10186568 */
  if ((C.sf==C.of)) goto L_10186568;
  /* 10186562 push 3 */
  push32((uint32_t)(0x3u));
  /* 10186564 push 5 */
  push32((uint32_t)(0x5u));
  /* 10186566 jmp 0x1018656c */
  goto L_1018656c;
L_10186568:;
  /* 10186568 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018656a push 7 */
  push32((uint32_t)(0x7u));
L_1018656c:;
  /* 1018656c push 9 */
  push32((uint32_t)(0x9u));
  /* 1018656e call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x10186574u);
  /* 10186574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186577:;
  /* 10186577 push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 1018657c call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10186582u);
  /* 10186582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186585 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10186587 pop edi */
  EDI = (pop32());
  /* 10186588 pop esi */
  ESI = (pop32());
  /* 10186589 jne 0x1018659a */
  if (!C.zf) goto L_1018659a;
  /* 1018658b push 1 */
  push32((uint32_t)(0x1u));
  /* 1018658d push 1 */
  push32((uint32_t)(0x1u));
  /* 1018658f push 9 */
  push32((uint32_t)(0x9u));
  /* 10186591 call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x10186597u);
  /* 10186597 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018659a:;
  /* 1018659a push 0x10196078 */
  push32((uint32_t)(0x10196078u));
  /* 1018659f call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101865a5u);
  /* 101865a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101865a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101865aa je 0x101865be */
  if (C.zf) goto L_101865be;
  /* 101865ac push 0x10193660 */
  push32((uint32_t)(0x10193660u));
  /* 101865b1 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101865b7u);
  /* 101865b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101865ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101865bc jne 0x101865cd */
  if (!C.zf) goto L_101865cd;
L_101865be:;
  /* 101865be push 1 */
  push32((uint32_t)(0x1u));
  /* 101865c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101865c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 101865c4 call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x101865cau);
  /* 101865ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101865cd:;
  /* 101865cd push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 101865d2 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101865d8u);
  /* 101865d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101865db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101865dd jne 0x101865ee */
  if (!C.zf) goto L_101865ee;
  /* 101865df push 4 */
  push32((uint32_t)(0x4u));
  /* 101865e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101865e3 push 6 */
  push32((uint32_t)(0x6u));
  /* 101865e5 call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x101865ebu);
  /* 101865eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101865ee:;
  /* 101865ee push 0x10196378 */
  push32((uint32_t)(0x10196378u));
  /* 101865f3 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101865f9u);
  /* 101865f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101865fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101865fe jne 0x10186620 */
  if (!C.zf) goto L_10186620;
  /* 10186600 push 1 */
  push32((uint32_t)(0x1u));
  /* 10186602 push 1 */
  push32((uint32_t)(0x1u));
  /* 10186604 push 9 */
  push32((uint32_t)(0x9u));
  /* 10186606 call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x1018660cu);
  /* 1018660c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018660f pop ecx */
  ECX = (pop32());
  /* 10186610 ret  */
  ESPCHK(0x101862f0u, _esp0);
  ESP += 4; return;
L_10186611:;
  /* 10186611 push 3 */
  push32((uint32_t)(0x3u));
  /* 10186613 push 6 */
  push32((uint32_t)(0x6u));
  /* 10186615 push 0 */
  push32((uint32_t)(0x0u));
  /* 10186617 call dword ptr [0x10196514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196514))), 0x1018661du);
  /* 1018661d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186620:;
  /* 10186620 pop ecx */
  ECX = (pop32());
  /* 10186621 ret  */
  ESPCHK(0x101862f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x10186630 (174 bytes, 50 insns) */
void f_10186630(void) {
  FTRACE(0x10186630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10186630 push 0x10196598 */
  push32((uint32_t)(0x10196598u));
  /* 10186635 call 0x10182720 */
  push32(0x1018663au); f_10182720();
  /* 1018663a push 0x10196340 */
  push32((uint32_t)(0x10196340u));
  /* 1018663f call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10186645u);
  /* 10186645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186648 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018664a je 0x1018666c */
  if (C.zf) goto L_1018666c;
  /* 1018664c push 0x10196288 */
  push32((uint32_t)(0x10196288u));
  /* 10186651 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10186657u);
  /* 10186657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018665a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018665c je 0x1018666c */
  if (C.zf) goto L_1018666c;
  /* 1018665e push 0x1018f16c */
  push32((uint32_t)(0x1018f16cu));
  /* 10186663 call 0x10182720 */
  push32(0x10186668u); f_10182720();
  /* 10186668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018666b ret  */
  ESPCHK(0x10186630u, _esp0);
  ESP += 4; return;
L_1018666c:;
  /* 1018666c mov eax, dword ptr [0x10195f58] */
  EAX = (r32((uint32_t)(0x10195f58)));
  /* 10186671 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186674 je 0x101866d2 */
  if (C.zf) goto L_101866d2;
  /* 10186676 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186679 je 0x101866d2 */
  if (C.zf) goto L_101866d2;
  /* 1018667b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018667e je 0x101866d2 */
  if (C.zf) goto L_101866d2;
  /* 10186680 push 0x10196270 */
  push32((uint32_t)(0x10196270u));
  /* 10186685 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x1018668bu);
  /* 1018668b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018668e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10186690 je 0x101866b2 */
  if (C.zf) goto L_101866b2;
  /* 10186692 push 0x10196150 */
  push32((uint32_t)(0x10196150u));
  /* 10186697 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x1018669du);
  /* 1018669d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101866a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101866a2 jne 0x101866b2 */
  if (!C.zf) goto L_101866b2;
  /* 101866a4 push 0x10196598 */
  push32((uint32_t)(0x10196598u));
  /* 101866a9 call 0x10182720 */
  push32(0x101866aeu); f_10182720();
  /* 101866ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101866b1 ret  */
  ESPCHK(0x10186630u, _esp0);
  ESP += 4; return;
L_101866b2:;
  /* 101866b2 push 0x10196150 */
  push32((uint32_t)(0x10196150u));
  /* 101866b7 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101866bdu);
  /* 101866bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101866c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101866c2 je 0x101866dd */
  if (C.zf) goto L_101866dd;
  /* 101866c4 push 0x1018f1d8 */
  push32((uint32_t)(0x1018f1d8u));
  /* 101866c9 call 0x10182720 */
  push32(0x101866ceu); f_10182720();
  /* 101866ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101866d1 ret  */
  ESPCHK(0x10186630u, _esp0);
  ESP += 4; return;
L_101866d2:;
  /* 101866d2 push 0x1018f1d8 */
  push32((uint32_t)(0x1018f1d8u));
  /* 101866d7 call 0x10182720 */
  push32(0x101866dcu); f_10182720();
  /* 101866dc pop ecx */
  ECX = (pop32());
L_101866dd:;
  /* 101866dd ret  */
  ESPCHK(0x10186630u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x101866e0 (70 bytes, 22 insns) */
void f_101866e0(void) {
  FTRACE(0x101866e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101866e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101866e2 call 0x10182760 */
  push32(0x101866e7u); f_10182760();
  /* 101866e7 push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 101866ec call 0x10185270 */
  push32(0x101866f1u); f_10185270();
  /* 101866f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101866f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101866f6 je 0x10186702 */
  if (C.zf) goto L_10186702;
  /* 101866f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101866fa call 0x10182760 */
  push32(0x101866ffu); f_10182760();
  /* 101866ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186702:;
  /* 10186702 call 0x10182770 */
  push32(0x10186707u); f_10182770();
  /* 10186707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186709 jg 0x1018671d */
  if ((!C.zf&&C.sf==C.of)) goto L_1018671d;
  /* 1018670b push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 10186710 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10186716u);
  /* 10186716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018671b jle 0x10186725 */
  if ((C.zf||C.sf!=C.of)) goto L_10186725;
L_1018671d:;
  /* 1018671d push 0 */
  push32((uint32_t)(0x0u));
  /* 1018671f call 0x10182760 */
  push32(0x10186724u); f_10182760();
  /* 10186724 pop ecx */
  ECX = (pop32());
L_10186725:;
  /* 10186725 ret  */
  ESPCHK(0x101866e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x10186730 (235 bytes, 66 insns) */
void f_10186730(void) {
  FTRACE(0x10186730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10186730 push 0x10196198 */
  push32((uint32_t)(0x10196198u));
  /* 10186735 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x1018673bu);
  /* 1018673b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018673e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10186740 je 0x10186756 */
  if (C.zf) goto L_10186756;
  /* 10186742 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10186744 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10186746 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10186748 push 0x10196370 */
  push32((uint32_t)(0x10196370u));
  /* 1018674d call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186753u);
  /* 10186753 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186756:;
  /* 10186756 push 0x101960b0 */
  push32((uint32_t)(0x101960b0u));
  /* 1018675b call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10186761u);
  /* 10186761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186764 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10186766 je 0x1018677c */
  if (C.zf) goto L_1018677c;
  /* 10186768 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1018676a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1018676c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1018676e push 0x10193668 */
  push32((uint32_t)(0x10193668u));
  /* 10186773 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186779u);
  /* 10186779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018677c:;
  /* 1018677c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018677e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10186780 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10186782 push 0x101938c8 */
  push32((uint32_t)(0x101938c8u));
  /* 10186787 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x1018678du);
  /* 1018678d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018678f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10186791 push 0x101961d8 */
  push32((uint32_t)(0x101961d8u));
  /* 10186796 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018679cu);
  /* 1018679c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018679e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101867a0 push 0x101961d0 */
  push32((uint32_t)(0x101961d0u));
  /* 101867a5 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101867abu);
  /* 101867ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101867ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101867af push 0x101961a0 */
  push32((uint32_t)(0x101961a0u));
  /* 101867b4 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101867bau);
  /* 101867ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101867bc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101867be push 0x10196198 */
  push32((uint32_t)(0x10196198u));
  /* 101867c3 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101867c9u);
  /* 101867c9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101867cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101867ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101867d0 push 0x101961a8 */
  push32((uint32_t)(0x101961a8u));
  /* 101867d5 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101867dbu);
  /* 101867db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101867dd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101867df push 0x10196098 */
  push32((uint32_t)(0x10196098u));
  /* 101867e4 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101867eau);
  /* 101867ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101867ec push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101867ee push 0x101960a0 */
  push32((uint32_t)(0x101960a0u));
  /* 101867f3 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101867f9u);
  /* 101867f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101867fb push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101867fd push 0x101960a8 */
  push32((uint32_t)(0x101960a8u));
  /* 10186802 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10186808u);
  /* 10186808 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018680a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1018680c push 0x101960b0 */
  push32((uint32_t)(0x101960b0u));
  /* 10186811 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x10186817u);
  /* 10186817 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018681a ret  */
  ESPCHK(0x10186730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x10186820 (303 bytes, 90 insns) */
void f_10186820(void) {
  FTRACE(0x10186820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10186820 push ecx */
  push32((uint32_t)(ECX));
  /* 10186821 push ebx */
  push32((uint32_t)(EBX));
  /* 10186822 push ebp */
  push32((uint32_t)(EBP));
  /* 10186823 push esi */
  push32((uint32_t)(ESI));
  /* 10186824 push edi */
  push32((uint32_t)(EDI));
  /* 10186825 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 1018682a call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10186830u);
  /* 10186830 push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 10186835 mov ebx, eax */
  EBX = (EAX);
  /* 10186837 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x1018683du);
  /* 1018683d push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 10186842 mov edi, eax */
  EDI = (EAX);
  /* 10186844 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x1018684au);
  /* 1018684a push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 1018684f mov ebp, eax */
  EBP = (EAX);
  /* 10186851 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10186857u);
  /* 10186857 push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 1018685c mov esi, eax */
  ESI = (EAX);
  /* 1018685e call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10186864u);
  /* 10186864 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 10186869 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1018686d call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10186873u);
  /* 10186873 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 10186877 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018687a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018687c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018687e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10186880 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10186882 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10186884 pop edi */
  EDI = (pop32());
  /* 10186885 pop esi */
  ESI = (pop32());
  /* 10186886 pop ebp */
  EBP = (pop32());
  /* 10186887 pop ebx */
  EBX = (pop32());
  /* 10186888 jne 0x101868f0 */
  if (!C.zf) goto L_101868f0;
  /* 1018688a cmp dword ptr [0x101961b0], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x101961b0))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186891 jle 0x101868f0 */
  if ((C.zf||C.sf!=C.of)) goto L_101868f0;
  /* 10186893 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186895 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10186897 push 4 */
  push32((uint32_t)(0x4u));
  /* 10186899 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 1018689e call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101868a4u);
  /* 101868a4 push 0x101961b8 */
  push32((uint32_t)(0x101961b8u));
  /* 101868a9 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101868afu);
  /* 101868af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101868b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101868b4 je 0x101868ca */
  if (C.zf) goto L_101868ca;
  /* 101868b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101868b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101868ba push 6 */
  push32((uint32_t)(0x6u));
  /* 101868bc push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 101868c1 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101868c7u);
  /* 101868c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101868ca:;
  /* 101868ca push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 101868cf call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x101868d5u);
  /* 101868d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101868d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101868da je 0x101868f0 */
  if (C.zf) goto L_101868f0;
  /* 101868dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101868de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101868e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 101868e2 push 0x101938d8 */
  push32((uint32_t)(0x101938d8u));
  /* 101868e7 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101868edu);
  /* 101868ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101868f0:;
  /* 101868f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101868f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101868f4 push 0x101962e8 */
  push32((uint32_t)(0x101962e8u));
  /* 101868f9 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x101868ffu);
  /* 101868ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186901 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10186903 push 0x101962d0 */
  push32((uint32_t)(0x101962d0u));
  /* 10186908 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018690eu);
  /* 1018690e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186910 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10186912 push 0x101962e0 */
  push32((uint32_t)(0x101962e0u));
  /* 10186917 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018691du);
  /* 1018691d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018691f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10186921 push 0x101962c0 */
  push32((uint32_t)(0x101962c0u));
  /* 10186926 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018692cu);
  /* 1018692c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018692e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10186930 push 0x101962c8 */
  push32((uint32_t)(0x101962c8u));
  /* 10186935 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018693bu);
  /* 1018693b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1018693d push 0xa */
  push32((uint32_t)(0xau));
  /* 1018693f push 0x101962b8 */
  push32((uint32_t)(0x101962b8u));
  /* 10186944 call dword ptr [0x10196508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196508))), 0x1018694au);
  /* 1018694a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018694d pop ecx */
  ECX = (pop32());
  /* 1018694e ret  */
  ESPCHK(0x10186820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x10186950 (517 bytes, 145 insns) */
void f_10186950(void) {
  FTRACE(0x10186950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10186950 push esi */
  push32((uint32_t)(ESI));
  /* 10186951 push 0x10196258 */
  push32((uint32_t)(0x10196258u));
  /* 10186956 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x1018695cu);
  /* 1018695c push 0x10196258 */
  push32((uint32_t)(0x10196258u));
  /* 10186961 mov esi, eax */
  ESI = (EAX);
  /* 10186963 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10186969u);
  /* 10186969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018696c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018696e jne 0x10186984 */
  if (!C.zf) goto L_10186984;
  /* 10186970 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186972 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186974 push 5 */
  push32((uint32_t)(0x5u));
  /* 10186976 push 0x10196258 */
  push32((uint32_t)(0x10196258u));
  /* 1018697b call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186981u);
  /* 10186981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186984:;
  /* 10186984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186986 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186988 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018698a push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 1018698f call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186995u);
  /* 10186995 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186999 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018699b push 0x101961e8 */
  push32((uint32_t)(0x101961e8u));
  /* 101869a0 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101869a6u);
  /* 101869a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101869a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101869aa push 2 */
  push32((uint32_t)(0x2u));
  /* 101869ac push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 101869b1 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101869b7u);
  /* 101869b7 push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 101869bc call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x101869c2u);
  /* 101869c2 push 0x10196250 */
  push32((uint32_t)(0x10196250u));
  /* 101869c7 mov esi, eax */
  ESI = (EAX);
  /* 101869c9 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x101869cfu);
  /* 101869cf add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101869d2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101869d4 jne 0x10186b53 */
  if (!C.zf) goto L_10186b53;
  /* 101869da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101869dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101869de push 1 */
  push32((uint32_t)(0x1u));
  /* 101869e0 push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 101869e5 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x101869ebu);
  /* 101869eb push 0x10195f20 */
  push32((uint32_t)(0x10195f20u));
  /* 101869f0 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x101869f6u);
  /* 101869f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101869f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101869fb je 0x10186b53 */
  if (C.zf) goto L_10186b53;
  /* 10186a01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 10186a07 push 0x10195fd0 */
  push32((uint32_t)(0x10195fd0u));
  /* 10186a0c call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186a12u);
  /* 10186a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a14 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10186a18 push 0x10195fd8 */
  push32((uint32_t)(0x10195fd8u));
  /* 10186a1d call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186a23u);
  /* 10186a23 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a25 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10186a29 push 0x10193878 */
  push32((uint32_t)(0x10193878u));
  /* 10186a2e call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186a34u);
  /* 10186a34 push 0x10193878 */
  push32((uint32_t)(0x10193878u));
  /* 10186a39 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10186a3fu);
  /* 10186a3f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186a44 je 0x10186b53 */
  if (C.zf) goto L_10186b53;
  /* 10186a4a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10186a50 push 0x10195fe8 */
  push32((uint32_t)(0x10195fe8u));
  /* 10186a55 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186a5bu);
  /* 10186a5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10186a61 push 0x101960f8 */
  push32((uint32_t)(0x101960f8u));
  /* 10186a66 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186a6cu);
  /* 10186a6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10186a72 push 0x10193618 */
  push32((uint32_t)(0x10193618u));
  /* 10186a77 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186a7du);
  /* 10186a7d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 10186a83 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10186a88 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186a8eu);
  /* 10186a8e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186a91 push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 10186a96 call dword ptr [0x10196550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196550))), 0x10186a9cu);
  /* 10186a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186a9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10186aa1 je 0x10186b53 */
  if (C.zf) goto L_10186b53;
  /* 10186aa7 push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 10186aac call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10186ab2u);
  /* 10186ab2 push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 10186ab7 mov esi, eax */
  ESI = (EAX);
  /* 10186ab9 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10186abfu);
  /* 10186abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186ac2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10186ac4 jne 0x10186aed */
  if (!C.zf) goto L_10186aed;
  /* 10186ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10186ac8 call 0x10182730 */
  push32(0x10186acdu); f_10182730();
  /* 10186acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186ad0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186ad3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186ad5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186ad7 jge 0x10186add */
  if ((C.sf==C.of)) goto L_10186add;
  /* 10186ad9 push 6 */
  push32((uint32_t)(0x6u));
  /* 10186adb jmp 0x10186adf */
  goto L_10186adf;
L_10186add:;
  /* 10186add push 4 */
  push32((uint32_t)(0x4u));
L_10186adf:;
  /* 10186adf push 0x10195fb8 */
  push32((uint32_t)(0x10195fb8u));
  /* 10186ae4 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186aeau);
  /* 10186aea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186aed:;
  /* 10186aed push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10186af2 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10186af8u);
  /* 10186af8 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10186afd mov esi, eax */
  ESI = (EAX);
  /* 10186aff call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10186b05u);
  /* 10186b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186b08 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10186b0a jne 0x10186b20 */
  if (!C.zf) goto L_10186b20;
  /* 10186b0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186b0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186b10 push 7 */
  push32((uint32_t)(0x7u));
  /* 10186b12 push 0x101960d8 */
  push32((uint32_t)(0x101960d8u));
  /* 10186b17 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186b1du);
  /* 10186b1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186b20:;
  /* 10186b20 push 0x10193618 */
  push32((uint32_t)(0x10193618u));
  /* 10186b25 call dword ptr [0x10196544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196544))), 0x10186b2bu);
  /* 10186b2b push 0x10193618 */
  push32((uint32_t)(0x10193618u));
  /* 10186b30 mov esi, eax */
  ESI = (EAX);
  /* 10186b32 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10186b38u);
  /* 10186b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186b3b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10186b3d jne 0x10186b53 */
  if (!C.zf) goto L_10186b53;
  /* 10186b3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186b41 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186b43 push 3 */
  push32((uint32_t)(0x3u));
  /* 10186b45 push 0x10193618 */
  push32((uint32_t)(0x10193618u));
  /* 10186b4a call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186b50u);
  /* 10186b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186b53:;
  /* 10186b53 pop esi */
  ESI = (pop32());
  /* 10186b54 ret  */
  ESPCHK(0x10186950u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x10186b60 (121 bytes, 36 insns) */
void f_10186b60(void) {
  FTRACE(0x10186b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10186b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10186b62 call 0x10182760 */
  push32(0x10186b67u); f_10182760();
  /* 10186b67 push 0x10193888 */
  push32((uint32_t)(0x10193888u));
  /* 10186b6c call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10186b72u);
  /* 10186b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186b75 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186b78 jge 0x10186b8d */
  if ((C.sf==C.of)) goto L_10186b8d;
  /* 10186b7a mov eax, dword ptr [0x101962b4] */
  EAX = (r32((uint32_t)(0x101962b4)));
  /* 10186b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10186b81 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10186b84 push eax */
  push32((uint32_t)(EAX));
  /* 10186b85 call 0x101826d0 */
  push32(0x10186b8au); f_101826d0();
  /* 10186b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186b8d:;
  /* 10186b8d push 0x10193888 */
  push32((uint32_t)(0x10193888u));
  /* 10186b92 call dword ptr [0x10196540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196540))), 0x10186b98u);
  /* 10186b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186b9b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186b9e jle 0x10186bb4 */
  if ((C.zf||C.sf!=C.of)) goto L_10186bb4;
  /* 10186ba0 mov ecx, dword ptr [0x101962b4] */
  ECX = (r32((uint32_t)(0x101962b4)));
  /* 10186ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10186ba8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10186bab push ecx */
  push32((uint32_t)(ECX));
  /* 10186bac call 0x101826d0 */
  push32(0x10186bb1u); f_101826d0();
  /* 10186bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186bb4:;
  /* 10186bb4 mov edx, dword ptr [0x101962b4] */
  EDX = (r32((uint32_t)(0x101962b4)));
  /* 10186bba add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10186bbd push edx */
  push32((uint32_t)(EDX));
  /* 10186bbe call 0x101826f0 */
  push32(0x10186bc3u); f_101826f0();
  /* 10186bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186bc5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10186bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10186bc9 call 0x10182760 */
  push32(0x10186bceu); f_10182760();
  /* 10186bce push 0 */
  push32((uint32_t)(0x0u));
  /* 10186bd0 call 0x10182760 */
  push32(0x10186bd5u); f_10182760();
  /* 10186bd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186bd8 ret  */
  ESPCHK(0x10186b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x10186be0 (86 bytes, 20 insns) */
void f_10186be0(void) {
  FTRACE(0x10186be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10186be0 mov eax, dword ptr [0x101962b4] */
  EAX = (r32((uint32_t)(0x101962b4)));
  /* 10186be5 mov ecx, dword ptr [eax*4 + 0x10195f98] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10195f98)));
  /* 10186bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10186bee je 0x10186bf5 */
  if (C.zf) goto L_10186bf5;
  /* 10186bf0 call 0x101866e0 */
  push32(0x10186bf5u); f_101866e0();
L_10186bf5:;
  /* 10186bf5 call 0x10185df0 */
  push32(0x10186bfau); f_10185df0();
  /* 10186bfa call 0x10186730 */
  push32(0x10186bffu); f_10186730();
  /* 10186bff call 0x10182780 */
  push32(0x10186c04u); f_10182780();
  /* 10186c04 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186c07 jge 0x10186c0e */
  if ((C.sf==C.of)) goto L_10186c0e;
  /* 10186c09 call 0x10186820 */
  push32(0x10186c0eu); f_10186820();
L_10186c0e:;
  /* 10186c0e call 0x10185bd0 */
  push32(0x10186c13u); f_10185bd0();
  /* 10186c13 call 0x10185a90 */
  push32(0x10186c18u); f_10185a90();
  /* 10186c18 call 0x10182780 */
  push32(0x10186c1du); f_10182780();
  /* 10186c1d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186c20 jge 0x10186c27 */
  if ((C.sf==C.of)) goto L_10186c27;
  /* 10186c22 call 0x101852b0 */
  push32(0x10186c27u); f_101852b0();
L_10186c27:;
  /* 10186c27 call 0x10185fd0 */
  push32(0x10186c2cu); f_10185fd0();
  /* 10186c2c call 0x101862f0 */
  push32(0x10186c31u); f_101862f0();
  /* 10186c31 jmp 0x10186630 */
  f_10186630(); return;
}

/* FUN_10006c40 @ 0x10186c40 (247 bytes, 70 insns) */
void f_10186c40(void) {
  FTRACE(0x10186c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10186c40 push esi */
  push32((uint32_t)(ESI));
  /* 10186c41 push edi */
  push32((uint32_t)(EDI));
  /* 10186c42 call 0x10186b60 */
  push32(0x10186c47u); f_10186b60();
  /* 10186c47 call 0x10186950 */
  push32(0x10186c4cu); f_10186950();
  /* 10186c4c mov edi, 2 */
  EDI = (0x2u);
L_10186c51:;
  /* 10186c51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186c53 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10186c55 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10186c5a push 0x10196190 */
  push32((uint32_t)(0x10196190u));
  /* 10186c5f call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186c65u);
  /* 10186c65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186c67 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10186c69 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10186c6e push 0x10193688 */
  push32((uint32_t)(0x10193688u));
  /* 10186c73 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186c79u);
  /* 10186c79 mov eax, dword ptr [0x101962b4] */
  EAX = (r32((uint32_t)(0x101962b4)));
  /* 10186c7e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10186c81 push eax */
  push32((uint32_t)(EAX));
  /* 10186c82 call 0x101826f0 */
  push32(0x10186c87u); f_101826f0();
  /* 10186c87 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186c8c jne 0x10186cac */
  if (!C.zf) goto L_10186cac;
  /* 10186c8e mov esi, 0x64 */
  ESI = (0x64u);
L_10186c93:;
  /* 10186c93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186c95 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10186c97 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10186c99 push 0x10193888 */
  push32((uint32_t)(0x10193888u));
  /* 10186c9e call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186ca4u);
  /* 10186ca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186ca7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10186ca8 jne 0x10186c93 */
  if (!C.zf) goto L_10186c93;
  /* 10186caa jmp 0x10186cc0 */
  goto L_10186cc0;
L_10186cac:;
  /* 10186cac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186cae push 0xa */
  push32((uint32_t)(0xau));
  /* 10186cb0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10186cb2 push 0x10196160 */
  push32((uint32_t)(0x10196160u));
  /* 10186cb7 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186cbdu);
  /* 10186cbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186cc0:;
  /* 10186cc0 push 0x10196020 */
  push32((uint32_t)(0x10196020u));
  /* 10186cc5 call dword ptr [0x1019654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019654c))), 0x10186ccbu);
  /* 10186ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186cce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10186cd0 jne 0x10186ce9 */
  if (!C.zf) goto L_10186ce9;
  /* 10186cd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10186cd6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10186cdb push 0x10193690 */
  push32((uint32_t)(0x10193690u));
  /* 10186ce0 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186ce6u);
  /* 10186ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10186ce9:;
  /* 10186ce9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186ceb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10186ced push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10186cf2 push 0x10193680 */
  push32((uint32_t)(0x10193680u));
  /* 10186cf7 call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186cfdu);
  /* 10186cfd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10186cff push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10186d01 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10186d06 push 0x10195f80 */
  push32((uint32_t)(0x10195f80u));
  /* 10186d0b call dword ptr [0x10196504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196504))), 0x10186d11u);
  /* 10186d11 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186d14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10186d15 jne 0x10186c51 */
  if (!C.zf) goto L_10186c51;
  /* 10186d1b call 0x10186730 */
  push32(0x10186d20u); f_10186730();
  /* 10186d20 call 0x10185fd0 */
  push32(0x10186d25u); f_10185fd0();
  /* 10186d25 call 0x101862f0 */
  push32(0x10186d2au); f_101862f0();
  /* 10186d2a call 0x101852b0 */
  push32(0x10186d2fu); f_101852b0();
  /* 10186d2f call 0x10185a90 */
  push32(0x10186d34u); f_10185a90();
  /* 10186d34 pop edi */
  EDI = (pop32());
  /* 10186d35 pop esi */
  ESI = (pop32());
  /* 10186d36 ret  */
  ESPCHK(0x10186c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d40 @ 0x10186d40 (279 bytes, 62 insns) [1 switch table(s)] */
void f_10186d40(void) {
  FTRACE(0x10186d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10186d40 call 0x10182680 */
  push32(0x10186d45u); f_10182680();
  /* 10186d45 mov dword ptr [0x10195f58], eax */
  w32((uint32_t)(0x10195f58), (EAX));
  /* 10186d4a call 0x10182660 */
  push32(0x10186d4fu); f_10182660();
  /* 10186d4f mov dword ptr [0x10196368], eax */
  w32((uint32_t)(0x10196368), (EAX));
  /* 10186d54 call 0x10182670 */
  push32(0x10186d59u); f_10182670();
  /* 10186d59 mov dword ptr [0x10193898], eax */
  w32((uint32_t)(0x10193898), (EAX));
  /* 10186d5e call 0x10183040 */
  push32(0x10186d63u); f_10183040();
  /* 10186d63 push 0x1018f114 */
  push32((uint32_t)(0x1018f114u));
  /* 10186d68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10186d6a call dword ptr [0x1019650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019650c))), 0x10186d70u);
  /* 10186d70 call 0x10186630 */
  push32(0x10186d75u); f_10186630();
  /* 10186d75 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10186d77 push 0x1018f244 */
  push32((uint32_t)(0x1018f244u));
  /* 10186d7c call 0x10182700 */
  push32(0x10186d81u); f_10182700();
  /* 10186d81 mov eax, dword ptr [0x10195f58] */
  EAX = (r32((uint32_t)(0x10195f58)));
  /* 10186d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186d89 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186d8c ja 0x10186e52 */
  if ((!C.cf&&!C.zf)) goto L_10186e52;
  /* 10186d92 jmp dword ptr [eax*4 + 0x10186e58] */
  switch (EAX) {
    case 0: goto L_10186d99;
    case 1: goto L_10186e15;
    case 2: goto L_10186e1c;
    case 3: goto L_10186e1c;
    case 4: goto L_10186e1c;
    case 5: goto L_10186d99;
    default: x86_unimpl("switch@0x10186d92 out of table"); return;
  }
L_10186d99:;
  /* 10186d99 cmp dword ptr [0x10193898], 3 */
  { uint32_t _a=(r32((uint32_t)(0x10193898))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186da0 jne 0x10186dd2 */
  if (!C.zf) goto L_10186dd2;
  /* 10186da2 push 0x1018f160 */
  push32((uint32_t)(0x1018f160u));
  /* 10186da7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10186da9 call dword ptr [0x1019650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019650c))), 0x10186dafu);
  /* 10186daf push 0x1018f16c */
  push32((uint32_t)(0x1018f16cu));
  /* 10186db4 call 0x10182720 */
  push32(0x10186db9u); f_10182720();
  /* 10186db9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10186dbb push 0x1018f41c */
  push32((uint32_t)(0x1018f41cu));
  /* 10186dc0 call 0x10182700 */
  push32(0x10186dc5u); f_10182700();
  /* 10186dc5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186dc8 call 0x10186c40 */
  push32(0x10186dcdu); f_10186c40();
  /* 10186dcd jmp 0x10186e52 */
  goto L_10186e52;
L_10186dd2:;
  /* 10186dd2 push 0x1018f114 */
  push32((uint32_t)(0x1018f114u));
  /* 10186dd7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10186dd9 call dword ptr [0x1019650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019650c))), 0x10186ddfu);
  /* 10186ddf push 0x10196598 */
  push32((uint32_t)(0x10196598u));
  /* 10186de4 call 0x10182720 */
  push32(0x10186de9u); f_10182720();
  /* 10186de9 mov eax, dword ptr [0x10193898] */
  EAX = (r32((uint32_t)(0x10193898)));
  /* 10186dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186df3 jne 0x10186dff */
  if (!C.zf) goto L_10186dff;
  /* 10186df5 mov dword ptr [0x1018f248], 4 */
  w32((uint32_t)(0x1018f248), (0x4u));
L_10186dff:;
  /* 10186dff push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10186e01 push 0x1018f244 */
  push32((uint32_t)(0x1018f244u));
  /* 10186e06 call 0x10182700 */
  push32(0x10186e0bu); f_10182700();
  /* 10186e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186e0e call 0x10186be0 */
  push32(0x10186e13u); f_10186be0();
  /* 10186e13 jmp 0x10186e52 */
  goto L_10186e52;
L_10186e15:;
  /* 10186e15 call 0x101843e0 */
  push32(0x10186e1au); f_101843e0();
  /* 10186e1a jmp 0x10186e52 */
  goto L_10186e52;
L_10186e1c:;
  /* 10186e1c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10186e21 call dword ptr [0x10196528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196528))), 0x10186e27u);
  /* 10186e27 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10186e2c call dword ptr [0x1019652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019652c))), 0x10186e32u);
  /* 10186e32 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10186e37 call dword ptr [0x10196530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196530))), 0x10186e3du);
  /* 10186e3d push 0x1018f07c */
  push32((uint32_t)(0x1018f07cu));
  /* 10186e42 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10186e44 call dword ptr [0x1019650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019650c))), 0x10186e4au);
  /* 10186e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186e4d call 0x10183360 */
  push32(0x10186e52u); f_10183360();
L_10186e52:;
  /* 10186e52 jmp 0x101831c0 */
  f_101831c0(); return;
}

/* FUN_10006e70 @ 0x10186e70 (82 bytes, 32 insns) */
void f_10186e70(void) {
  FTRACE(0x10186e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10186e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10186e71 mov ebp, esp */
  EBP = (ESP);
  /* 10186e73 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10186e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10186e79 push esi */
  push32((uint32_t)(ESI));
  /* 10186e7a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10186e7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10186e80 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10186e83 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 10186e8a push eax */
  push32((uint32_t)(EAX));
  /* 10186e8b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10186e8e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10186e91 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 10186e98 push eax */
  push32((uint32_t)(EAX));
  /* 10186e99 call 0x101871fc */
  push32(0x10186e9eu); f_101871fc();
  /* 10186e9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186ea1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 10186ea4 mov esi, eax */
  ESI = (EAX);
  /* 10186ea6 js 0x10186eb0 */
  if (C.sf) goto L_10186eb0;
  /* 10186ea8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10186eab and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10186eae jmp 0x10186ebd */
  goto L_10186ebd;
L_10186eb0:;
  /* 10186eb0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10186eb3 push eax */
  push32((uint32_t)(EAX));
  /* 10186eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10186eb6 call 0x101870e4 */
  push32(0x10186ebbu); f_101870e4();
  /* 10186ebb pop ecx */
  ECX = (pop32());
  /* 10186ebc pop ecx */
  ECX = (pop32());
L_10186ebd:;
  /* 10186ebd mov eax, esi */
  EAX = (ESI);
  /* 10186ebf pop esi */
  ESI = (pop32());
  /* 10186ec0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10186ec1 ret  */
  ESPCHK(0x10186e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec2 @ 0x10186ec2 (23 bytes, 6 insns) */
void f_10186ec2(void) {
  FTRACE(0x10186ec2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10186ec2 call 0x10186eda */
  push32(0x10186ec7u); f_10186eda();
  /* 10186ec7 call 0x10187a56 */
  push32(0x10186eccu); f_10187a56();
  /* 10186ecc mov dword ptr [0x10196660], eax */
  w32((uint32_t)(0x10196660), (EAX));
  /* 10186ed1 call 0x10187a06 */
  push32(0x10186ed6u); f_10187a06();
  /* 10186ed6 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10186ed8 ret  */
  ESPCHK(0x10186ec2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eda @ 0x10186eda (56 bytes, 8 insns) */
void f_10186eda(void) {
  FTRACE(0x10186edau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10186eda mov eax, 0x10187e2f */
  EAX = (0x10187e2fu);
  /* 10186edf mov dword ptr [0x1019069c], 0x10187ad9 */
  w32((uint32_t)(0x1019069c), (0x10187ad9u));
  /* 10186ee9 mov dword ptr [0x10190698], eax */
  w32((uint32_t)(0x10190698), (EAX));
  /* 10186eee mov dword ptr [0x101906a0], 0x10187b3f */
  w32((uint32_t)(0x101906a0), (0x10187b3fu));
  /* 10186ef8 mov dword ptr [0x101906a4], 0x10187a7f */
  w32((uint32_t)(0x101906a4), (0x10187a7fu));
  /* 10186f02 mov dword ptr [0x101906a8], 0x10187b27 */
  w32((uint32_t)(0x101906a8), (0x10187b27u));
  /* 10186f0c mov dword ptr [0x101906ac], eax */
  w32((uint32_t)(0x101906ac), (EAX));
  /* 10186f11 ret  */
  ESPCHK(0x10186edau, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10186f14 (39 bytes, 16 insns) */
void f_10186f14(void) {
  FTRACE(0x10186f14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10186f14 push ebp */
  push32((uint32_t)(EBP));
  /* 10186f15 mov ebp, esp */
  EBP = (ESP);
  /* 10186f17 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10186f1a wait  */
  /* wait (no observable integer/reg state) */
  /* 10186f1b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10186f1e wait  */
  /* wait (no observable integer/reg state) */
  /* 10186f1f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10186f23 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10186f26 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10186f2a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10186f2d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10186f30 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10186f33 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10186f36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10186f39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10186f3a ret  */
  ESPCHK(0x10186f14u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f3b @ 0x10186f3b (217 bytes, 57 insns) */
void f_10186f3b(void) {
  FTRACE(0x10186f3bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10186f3b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10186f3f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186f42 jne 0x10186fd0 */
  if (!C.zf) goto L_10186fd0;
  /* 10186f48 call dword ptr [0x1018e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e014))), 0x10186f4eu);
  /* 10186f4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10186f50 mov dword ptr [0x1019667c], eax */
  w32((uint32_t)(0x1019667c), (EAX));
  /* 10186f55 call 0x1018890c */
  push32(0x10186f5au); f_1018890c();
  /* 10186f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186f5c pop ecx */
  ECX = (pop32());
  /* 10186f5d je 0x10186f9b */
  if (C.zf) goto L_10186f9b;
  /* 10186f5f mov eax, dword ptr [0x1019667c] */
  EAX = (r32((uint32_t)(0x1019667c)));
  /* 10186f64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10186f66 mov cl, byte ptr [0x1019667d] */
  CL = (r8((uint32_t)(0x1019667d)));
  /* 10186f6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10186f71 shr dword ptr [0x1019667c], 0x10 */
  w32((uint32_t)(0x1019667c), (sh_shr((uint32_t)(r32((uint32_t)(0x1019667c))), (0x10u)&0x1f, 32)));
  /* 10186f78 mov dword ptr [0x10196684], eax */
  w32((uint32_t)(0x10196684), (EAX));
  /* 10186f7d mov dword ptr [0x10196688], ecx */
  w32((uint32_t)(0x10196688), (ECX));
  /* 10186f83 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10186f86 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10186f88 mov dword ptr [0x10196680], eax */
  w32((uint32_t)(0x10196680), (EAX));
  /* 10186f8d call 0x10187fc3 */
  push32(0x10186f92u); f_10187fc3();
  /* 10186f92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10186f94 jne 0x10186f9f */
  if (!C.zf) goto L_10186f9f;
  /* 10186f96 call 0x10188969 */
  push32(0x10186f9bu); f_10188969();
L_10186f9b:;
  /* 10186f9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10186f9d jmp 0x10187011 */
  goto L_10187011;
L_10186f9f:;
  /* 10186f9f call dword ptr [0x1018e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e010))), 0x10186fa5u);
  /* 10186fa5 mov dword ptr [0x10197d74], eax */
  w32((uint32_t)(0x10197d74), (EAX));
  /* 10186faa call 0x10188665 */
  push32(0x10186fafu); f_10188665();
  /* 10186faf mov dword ptr [0x10196668], eax */
  w32((uint32_t)(0x10196668), (EAX));
  /* 10186fb4 call 0x1018814f */
  push32(0x10186fb9u); f_1018814f();
  /* 10186fb9 call 0x10188418 */
  push32(0x10186fbeu); f_10188418();
  /* 10186fbe call 0x1018835f */
  push32(0x10186fc3u); f_1018835f();
  /* 10186fc3 call 0x10187ea5 */
  push32(0x10186fc8u); f_10187ea5();
  /* 10186fc8 inc dword ptr [0x10196664] */
  { uint32_t _r=(r32((uint32_t)(0x10196664)))+1; w32((uint32_t)(0x10196664), (_r)); fl_inc(_r,32); }
  /* 10186fce jmp 0x1018700e */
  goto L_1018700e;
L_10186fd0:;
  /* 10186fd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10186fd2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186fd4 jne 0x10187002 */
  if (!C.zf) goto L_10187002;
  /* 10186fd6 cmp dword ptr [0x10196664], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10196664))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186fdc jle 0x10186f9b */
  if ((C.zf||C.sf!=C.of)) goto L_10186f9b;
  /* 10186fde dec dword ptr [0x10196664] */
  { uint32_t _r=(r32((uint32_t)(0x10196664)))-1; w32((uint32_t)(0x10196664), (_r)); fl_dec(_r,32); }
  /* 10186fe4 cmp dword ptr [0x101966b4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x101966b4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10186fea jne 0x10186ff1 */
  if (!C.zf) goto L_10186ff1;
  /* 10186fec call 0x10187ee3 */
  push32(0x10186ff1u); f_10187ee3();
L_10186ff1:;
  /* 10186ff1 call 0x1018830b */
  push32(0x10186ff6u); f_1018830b();
  /* 10186ff6 call 0x10188017 */
  push32(0x10186ffbu); f_10188017();
  /* 10186ffb call 0x10188969 */
  push32(0x10187000u); f_10188969();
  /* 10187000 jmp 0x1018700e */
  goto L_1018700e;
L_10187002:;
  /* 10187002 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187005 jne 0x1018700e */
  if (!C.zf) goto L_1018700e;
  /* 10187007 push ecx */
  push32((uint32_t)(ECX));
  /* 10187008 call 0x101880af */
  push32(0x1018700du); f_101880af();
  /* 1018700d pop ecx */
  ECX = (pop32());
L_1018700e:;
  /* 1018700e push 1 */
  push32((uint32_t)(0x1u));
  /* 10187010 pop eax */
  EAX = (pop32());
L_10187011:;
  /* 10187011 ret 0xc */
  ESPCHK(0x10186f3bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10187014 (157 bytes, 73 insns) */
void f_10187014(void) {
  FTRACE(0x10187014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187014 push ebp */
  push32((uint32_t)(EBP));
  /* 10187015 mov ebp, esp */
  EBP = (ESP);
  /* 10187017 push ebx */
  push32((uint32_t)(EBX));
  /* 10187018 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018701b push esi */
  push32((uint32_t)(ESI));
  /* 1018701c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1018701f push edi */
  push32((uint32_t)(EDI));
  /* 10187020 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10187023 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10187025 jne 0x10187030 */
  if (!C.zf) goto L_10187030;
  /* 10187027 cmp dword ptr [0x10196664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10196664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018702e jmp 0x10187056 */
  goto L_10187056;
L_10187030:;
  /* 10187030 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187033 je 0x1018703a */
  if (C.zf) goto L_1018703a;
  /* 10187035 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187038 jne 0x1018705c */
  if (!C.zf) goto L_1018705c;
L_1018703a:;
  /* 1018703a mov eax, dword ptr [0x10197d78] */
  EAX = (r32((uint32_t)(0x10197d78)));
  /* 1018703f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10187041 je 0x1018704c */
  if (C.zf) goto L_1018704c;
  /* 10187043 push edi */
  push32((uint32_t)(EDI));
  /* 10187044 push esi */
  push32((uint32_t)(ESI));
  /* 10187045 push ebx */
  push32((uint32_t)(EBX));
  /* 10187046 call eax */
  call_ind((uint32_t)(EAX), 0x10187048u);
  /* 10187048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018704a je 0x10187058 */
  if (C.zf) goto L_10187058;
L_1018704c:;
  /* 1018704c push edi */
  push32((uint32_t)(EDI));
  /* 1018704d push esi */
  push32((uint32_t)(ESI));
  /* 1018704e push ebx */
  push32((uint32_t)(EBX));
  /* 1018704f call 0x10186f3b */
  push32(0x10187054u); f_10186f3b();
  /* 10187054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10187056:;
  /* 10187056 jne 0x1018705c */
  if (!C.zf) goto L_1018705c;
L_10187058:;
  /* 10187058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018705a jmp 0x101870aa */
  goto L_101870aa;
L_1018705c:;
  /* 1018705c push edi */
  push32((uint32_t)(EDI));
  /* 1018705d push esi */
  push32((uint32_t)(ESI));
  /* 1018705e push ebx */
  push32((uint32_t)(EBX));
  /* 1018705f call 0x101827f0 */
  push32(0x10187064u); f_101827f0();
  /* 10187064 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187067 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1018706a jne 0x10187078 */
  if (!C.zf) goto L_10187078;
  /* 1018706c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018706e jne 0x101870a7 */
  if (!C.zf) goto L_101870a7;
  /* 10187070 push edi */
  push32((uint32_t)(EDI));
  /* 10187071 push eax */
  push32((uint32_t)(EAX));
  /* 10187072 push ebx */
  push32((uint32_t)(EBX));
  /* 10187073 call 0x10186f3b */
  push32(0x10187078u); f_10186f3b();
L_10187078:;
  /* 10187078 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1018707a je 0x10187081 */
  if (C.zf) goto L_10187081;
  /* 1018707c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018707f jne 0x101870a7 */
  if (!C.zf) goto L_101870a7;
L_10187081:;
  /* 10187081 push edi */
  push32((uint32_t)(EDI));
  /* 10187082 push esi */
  push32((uint32_t)(ESI));
  /* 10187083 push ebx */
  push32((uint32_t)(EBX));
  /* 10187084 call 0x10186f3b */
  push32(0x10187089u); f_10186f3b();
  /* 10187089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018708b jne 0x10187090 */
  if (!C.zf) goto L_10187090;
  /* 1018708d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10187090:;
  /* 10187090 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187094 je 0x101870a7 */
  if (C.zf) goto L_101870a7;
  /* 10187096 mov eax, dword ptr [0x10197d78] */
  EAX = (r32((uint32_t)(0x10197d78)));
  /* 1018709b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018709d je 0x101870a7 */
  if (C.zf) goto L_101870a7;
  /* 1018709f push edi */
  push32((uint32_t)(EDI));
  /* 101870a0 push esi */
  push32((uint32_t)(ESI));
  /* 101870a1 push ebx */
  push32((uint32_t)(EBX));
  /* 101870a2 call eax */
  call_ind((uint32_t)(EAX), 0x101870a4u);
  /* 101870a4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101870a7:;
  /* 101870a7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_101870aa:;
  /* 101870aa pop edi */
  EDI = (pop32());
  /* 101870ab pop esi */
  ESI = (pop32());
  /* 101870ac pop ebx */
  EBX = (pop32());
  /* 101870ad pop ebp */
  EBP = (pop32());
  /* 101870ae ret 0xc */
  ESPCHK(0x10187014u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x101870b1 (48 bytes, 15 insns) */
void f_101870b1(void) {
  FTRACE(0x101870b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101870b1 mov eax, dword ptr [0x10196670] */
  EAX = (r32((uint32_t)(0x10196670)));
  /* 101870b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101870b9 je 0x101870c8 */
  if (C.zf) goto L_101870c8;
  /* 101870bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101870bd jne 0x101870cd */
  if (!C.zf) goto L_101870cd;
  /* 101870bf cmp dword ptr [0x10196674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10196674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101870c6 jne 0x101870cd */
  if (!C.zf) goto L_101870cd;
L_101870c8:;
  /* 101870c8 call 0x10188a11 */
  push32(0x101870cdu); f_10188a11();
L_101870cd:;
  /* 101870cd push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101870d1 call 0x10188a4a */
  push32(0x101870d6u); f_10188a4a();
  /* 101870d6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 101870db call dword ptr [0x1019068c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019068c))), 0x101870e1u);
  /* 101870e1 pop ecx */
  ECX = (pop32());
  /* 101870e2 pop ecx */
  ECX = (pop32());
  /* 101870e3 ret  */
  ESPCHK(0x101870b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e4 @ 0x101870e4 (280 bytes, 106 insns) */
void f_101870e4(void) {
  FTRACE(0x101870e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101870e4 push ebp */
  push32((uint32_t)(EBP));
  /* 101870e5 mov ebp, esp */
  EBP = (ESP);
  /* 101870e7 push ebx */
  push32((uint32_t)(EBX));
  /* 101870e8 push esi */
  push32((uint32_t)(ESI));
  /* 101870e9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101870ec mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101870ef mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 101870f2 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 101870f4 je 0x101871f0 */
  if (C.zf) goto L_101871f0;
  /* 101870fa test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 101870fc jne 0x101871f0 */
  if (!C.zf) goto L_101871f0;
  /* 10187102 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10187104 je 0x1018711c */
  if (C.zf) goto L_1018711c;
  /* 10187106 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1018710a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 1018710c je 0x101871f0 */
  if (C.zf) goto L_101871f0;
  /* 10187112 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 10187115 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10187117 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10187119 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_1018711c:;
  /* 1018711c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1018711f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10187123 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10187127 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 10187129 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1018712b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 1018712f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10187132 jne 0x10187156 */
  if (!C.zf) goto L_10187156;
  /* 10187134 cmp esi, 0x10190790 */
  { uint32_t _a=(ESI),_b=(0x10190790u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018713a je 0x10187144 */
  if (C.zf) goto L_10187144;
  /* 1018713c cmp esi, 0x101907b0 */
  { uint32_t _a=(ESI),_b=(0x101907b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187142 jne 0x1018714f */
  if (!C.zf) goto L_1018714f;
L_10187144:;
  /* 10187144 push ebx */
  push32((uint32_t)(EBX));
  /* 10187145 call 0x10188ea9 */
  push32(0x1018714au); f_10188ea9();
  /* 1018714a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018714c pop ecx */
  ECX = (pop32());
  /* 1018714d jne 0x10187156 */
  if (!C.zf) goto L_10187156;
L_1018714f:;
  /* 1018714f push esi */
  push32((uint32_t)(ESI));
  /* 10187150 call 0x10188e65 */
  push32(0x10187155u); f_10188e65();
  /* 10187155 pop ecx */
  ECX = (pop32());
L_10187156:;
  /* 10187156 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 1018715c push edi */
  push32((uint32_t)(EDI));
  /* 1018715d je 0x101871c6 */
  if (C.zf) goto L_101871c6;
  /* 1018715f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10187162 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 10187164 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187166 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10187169 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1018716b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 1018716e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018716f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10187171 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 10187174 jle 0x10187186 */
  if ((C.zf||C.sf!=C.of)) goto L_10187186;
  /* 10187176 push edi */
  push32((uint32_t)(EDI));
  /* 10187177 push eax */
  push32((uint32_t)(EAX));
  /* 10187178 push ebx */
  push32((uint32_t)(EBX));
  /* 10187179 call 0x10188c75 */
  push32(0x1018717eu); f_10188c75();
  /* 1018717e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10187181 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10187184 jmp 0x101871bc */
  goto L_101871bc;
L_10187186:;
  /* 10187186 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187189 je 0x101871a4 */
  if (C.zf) goto L_101871a4;
  /* 1018718b mov ecx, ebx */
  ECX = (EBX);
  /* 1018718d mov eax, ebx */
  EAX = (EBX);
  /* 1018718f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10187192 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10187195 mov ecx, dword ptr [ecx*4 + 0x10197c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10197c60)));
  /* 1018719c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1018719f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101871a2 jmp 0x101871a9 */
  goto L_101871a9;
L_101871a4:;
  /* 101871a4 mov eax, 0x101906b8 */
  EAX = (0x101906b8u);
L_101871a9:;
  /* 101871a9 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101871ad je 0x101871bc */
  if (C.zf) goto L_101871bc;
  /* 101871af push 2 */
  push32((uint32_t)(0x2u));
  /* 101871b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101871b3 push ebx */
  push32((uint32_t)(EBX));
  /* 101871b4 call 0x10188b9d */
  push32(0x101871b9u); f_10188b9d();
  /* 101871b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101871bc:;
  /* 101871bc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101871bf mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 101871c2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 101871c4 jmp 0x101871da */
  goto L_101871da;
L_101871c6:;
  /* 101871c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101871c8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101871cb pop edi */
  EDI = (pop32());
  /* 101871cc push edi */
  push32((uint32_t)(EDI));
  /* 101871cd push eax */
  push32((uint32_t)(EAX));
  /* 101871ce push ebx */
  push32((uint32_t)(EBX));
  /* 101871cf call 0x10188c75 */
  push32(0x101871d4u); f_10188c75();
  /* 101871d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101871d7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101871da:;
  /* 101871da cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101871dd pop edi */
  EDI = (pop32());
  /* 101871de je 0x101871e6 */
  if (C.zf) goto L_101871e6;
  /* 101871e0 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101871e4 jmp 0x101871f5 */
  goto L_101871f5;
L_101871e6:;
  /* 101871e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101871e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101871ee jmp 0x101871f8 */
  goto L_101871f8;
L_101871f0:;
  /* 101871f0 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 101871f2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_101871f5:;
  /* 101871f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101871f8:;
  /* 101871f8 pop esi */
  ESI = (pop32());
  /* 101871f9 pop ebx */
  EBX = (pop32());
  /* 101871fa pop ebp */
  EBP = (pop32());
  /* 101871fb ret  */
  ESPCHK(0x101870e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100071fc @ 0x101871fc (1825 bytes, 595 insns) [1 switch table(s)] */
void f_101871fc(void) {
  FTRACE(0x101871fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101871fc push ebp */
  push32((uint32_t)(EBP));
  /* 101871fd mov ebp, esp */
  EBP = (ESP);
  /* 101871ff sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187205 push ebx */
  push32((uint32_t)(EBX));
  /* 10187206 push esi */
  push32((uint32_t)(ESI));
  /* 10187207 push edi */
  push32((uint32_t)(EDI));
  /* 10187208 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1018720b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1018720d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1018720f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10187210 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10187212 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10187215 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10187218 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1018721b je 0x10187915 */
  if (C.zf) goto L_10187915;
  /* 10187221 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10187224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10187226 jmp 0x10187230 */
  goto L_10187230;
L_10187228:;
  /* 10187228 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1018722b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 1018722e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_10187230:;
  /* 10187230 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187233 jl 0x10187915 */
  if ((C.sf!=C.of)) goto L_10187915;
  /* 10187239 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018723c jl 0x10187251 */
  if ((C.sf!=C.of)) goto L_10187251;
  /* 1018723e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10187241 jg 0x10187251 */
  if ((!C.zf&&C.sf==C.of)) goto L_10187251;
  /* 10187243 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10187246 mov al, byte ptr [eax + 0x1018e0c8] */
  AL = (r8((uint32_t)(EAX + 0x1018e0c8)));
  /* 1018724c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1018724f jmp 0x10187253 */
  goto L_10187253;
L_10187251:;
  /* 10187251 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10187253:;
  /* 10187253 movsx eax, byte ptr [esi + eax*8 + 0x1018e0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x1018e0e8))));
  /* 1018725b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1018725e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187261 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10187264 ja 0x10187904 */
  if ((!C.cf&&!C.zf)) goto L_10187904;
  /* 1018726a jmp dword ptr [eax*4 + 0x1018791d] */
  switch (EAX) {
    case 0: goto L_1018739b;
    case 1: goto L_10187271;
    case 2: goto L_1018728c;
    case 3: goto L_101872d8;
    case 4: goto L_1018730f;
    case 5: goto L_10187317;
    case 6: goto L_1018734c;
    case 7: goto L_101873df;
    default: x86_unimpl("switch@0x1018726a out of table"); return;
  }
L_10187271:;
  /* 10187271 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10187275 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10187278 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1018727b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1018727e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10187281 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10187284 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10187287 jmp 0x10187904 */
  goto L_10187904;
L_1018728c:;
  /* 1018728c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1018728f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187292 je 0x101872cf */
  if (C.zf) goto L_101872cf;
  /* 10187294 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187297 je 0x101872c6 */
  if (C.zf) goto L_101872c6;
  /* 10187299 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018729c je 0x101872bd */
  if (C.zf) goto L_101872bd;
  /* 1018729e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018729f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101872a0 je 0x101872b4 */
  if (C.zf) goto L_101872b4;
  /* 101872a2 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101872a5 jne 0x10187904 */
  if (!C.zf) goto L_10187904;
  /* 101872ab or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101872af jmp 0x10187904 */
  goto L_10187904;
L_101872b4:;
  /* 101872b4 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101872b8 jmp 0x10187904 */
  goto L_10187904;
L_101872bd:;
  /* 101872bd or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101872c1 jmp 0x10187904 */
  goto L_10187904;
L_101872c6:;
  /* 101872c6 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 101872ca jmp 0x10187904 */
  goto L_10187904;
L_101872cf:;
  /* 101872cf or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101872d3 jmp 0x10187904 */
  goto L_10187904;
L_101872d8:;
  /* 101872d8 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101872db jne 0x10187300 */
  if (!C.zf) goto L_10187300;
  /* 101872dd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101872e0 push eax */
  push32((uint32_t)(EAX));
  /* 101872e1 call 0x101879db */
  push32(0x101872e6u); f_101879db();
  /* 101872e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101872e8 pop ecx */
  ECX = (pop32());
  /* 101872e9 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101872ec jge 0x10187904 */
  if ((C.sf==C.of)) goto L_10187904;
  /* 101872f2 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101872f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_101872f8:;
  /* 101872f8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101872fb jmp 0x10187904 */
  goto L_10187904;
L_10187300:;
  /* 10187300 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10187303 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10187306 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10187309 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1018730d jmp 0x101872f8 */
  goto L_101872f8;
L_1018730f:;
  /* 1018730f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10187312 jmp 0x10187904 */
  goto L_10187904;
L_10187317:;
  /* 10187317 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018731a jne 0x1018733a */
  if (!C.zf) goto L_1018733a;
  /* 1018731c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1018731f push eax */
  push32((uint32_t)(EAX));
  /* 10187320 call 0x101879db */
  push32(0x10187325u); f_101879db();
  /* 10187325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10187327 pop ecx */
  ECX = (pop32());
  /* 10187328 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1018732b jge 0x10187904 */
  if ((C.sf==C.of)) goto L_10187904;
  /* 10187331 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10187335 jmp 0x10187904 */
  goto L_10187904;
L_1018733a:;
  /* 1018733a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1018733d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10187340 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 10187344 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10187347 jmp 0x10187904 */
  goto L_10187904;
L_1018734c:;
  /* 1018734c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018734f je 0x1018737f */
  if (C.zf) goto L_1018737f;
  /* 10187351 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10187354 je 0x10187376 */
  if (C.zf) goto L_10187376;
  /* 10187356 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10187359 je 0x1018736d */
  if (C.zf) goto L_1018736d;
  /* 1018735b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018735e jne 0x10187904 */
  if (!C.zf) goto L_10187904;
  /* 10187364 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10187368 jmp 0x10187904 */
  goto L_10187904;
L_1018736d:;
  /* 1018736d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10187371 jmp 0x10187904 */
  goto L_10187904;
L_10187376:;
  /* 10187376 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018737a jmp 0x10187904 */
  goto L_10187904;
L_1018737f:;
  /* 1018737f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10187382 jne 0x10187398 */
  if (!C.zf) goto L_10187398;
  /* 10187384 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10187388 jne 0x10187398 */
  if (!C.zf) goto L_10187398;
  /* 1018738a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018738b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018738c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10187390 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 10187393 jmp 0x10187904 */
  goto L_10187904;
L_10187398:;
  /* 10187398 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1018739b:;
  /* 1018739b mov ecx, dword ptr [0x101909f0] */
  ECX = (r32((uint32_t)(0x101909f0)));
  /* 101873a1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101873a4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101873a7 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101873ac je 0x101873c7 */
  if (C.zf) goto L_101873c7;
  /* 101873ae lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101873b1 push eax */
  push32((uint32_t)(EAX));
  /* 101873b2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101873b5 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101873b8 push eax */
  push32((uint32_t)(EAX));
  /* 101873b9 call 0x1018793d */
  push32(0x101873beu); f_1018793d();
  /* 101873be mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101873c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101873c3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101873c4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101873c7:;
  /* 101873c7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101873ca push eax */
  push32((uint32_t)(EAX));
  /* 101873cb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101873ce movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101873d1 push eax */
  push32((uint32_t)(EAX));
  /* 101873d2 call 0x1018793d */
  push32(0x101873d7u); f_1018793d();
  /* 101873d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101873da jmp 0x10187904 */
  goto L_10187904;
L_101873df:;
  /* 101873df movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101873e2 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101873e5 jg 0x10187607 */
  if ((!C.zf&&C.sf==C.of)) goto L_10187607;
  /* 101873eb cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101873ee jge 0x1018748a */
  if ((C.sf==C.of)) goto L_1018748a;
  /* 101873f4 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101873f7 jg 0x101874e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_101874e8;
  /* 101873fd je 0x1018767b */
  if (C.zf) goto L_1018767b;
  /* 10187403 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187406 je 0x101874ab */
  if (C.zf) goto L_101874ab;
  /* 1018740c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018740d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018740e je 0x10187480 */
  if (C.zf) goto L_10187480;
  /* 10187410 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10187411 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10187412 je 0x10187480 */
  if (C.zf) goto L_10187480;
  /* 10187414 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187417 jne 0x10187806 */
  if (!C.zf) goto L_10187806;
  /* 1018741d test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10187423 jne 0x10187429 */
  if (!C.zf) goto L_10187429;
  /* 10187425 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10187429:;
  /* 10187429 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1018742c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018742f jne 0x10187436 */
  if (!C.zf) goto L_10187436;
  /* 10187431 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_10187436:;
  /* 10187436 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10187439 push eax */
  push32((uint32_t)(EAX));
  /* 1018743a call 0x101879db */
  push32(0x1018743fu); f_101879db();
  /* 1018743f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 10187445 pop ecx */
  ECX = (pop32());
  /* 10187446 mov ecx, eax */
  ECX = (EAX);
  /* 10187448 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1018744b je 0x1018764f */
  if (C.zf) goto L_1018764f;
  /* 10187451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10187453 jne 0x1018745e */
  if (!C.zf) goto L_1018745e;
  /* 10187455 mov ecx, dword ptr [0x10190694] */
  ECX = (r32((uint32_t)(0x10190694)));
  /* 1018745b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1018745e:;
  /* 1018745e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10187465 mov eax, ecx */
  EAX = (ECX);
L_10187467:;
  /* 10187467 mov edx, esi */
  EDX = (ESI);
  /* 10187469 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1018746a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1018746c je 0x10187646 */
  if (C.zf) goto L_10187646;
  /* 10187472 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10187476 je 0x10187646 */
  if (C.zf) goto L_10187646;
  /* 1018747c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018747d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018747e jmp 0x10187467 */
  goto L_10187467;
L_10187480:;
  /* 10187480 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 10187487 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_1018748a:;
  /* 1018748a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018748e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 10187494 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187496 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10187499 jge 0x1018756e */
  if ((C.sf==C.of)) goto L_1018756e;
  /* 1018749f mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 101874a6 jmp 0x1018757c */
  goto L_1018757c;
L_101874ab:;
  /* 101874ab test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 101874b1 jne 0x101874b7 */
  if (!C.zf) goto L_101874b7;
  /* 101874b3 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_101874b7:;
  /* 101874b7 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 101874bd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101874c0 push eax */
  push32((uint32_t)(EAX));
  /* 101874c1 je 0x101874fe */
  if (C.zf) goto L_101874fe;
  /* 101874c3 call 0x101879f8 */
  push32(0x101874c8u); f_101879f8();
  /* 101874c8 push eax */
  push32((uint32_t)(EAX));
  /* 101874c9 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101874cf push eax */
  push32((uint32_t)(EAX));
  /* 101874d0 call 0x101890bb */
  push32(0x101874d5u); f_101890bb();
  /* 101874d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101874d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101874db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101874dd jge 0x10187511 */
  if ((C.sf==C.of)) goto L_10187511;
  /* 101874df mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101874e6 jmp 0x10187511 */
  goto L_10187511;
L_101874e8:;
  /* 101874e8 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101874eb je 0x1018751f */
  if (C.zf) goto L_1018751f;
  /* 101874ed sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101874f0 je 0x101874b7 */
  if (C.zf) goto L_101874b7;
  /* 101874f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101874f3 je 0x101876e1 */
  if (C.zf) goto L_101876e1;
  /* 101874f9 jmp 0x10187806 */
  goto L_10187806;
L_101874fe:;
  /* 101874fe call 0x101879db */
  push32(0x10187503u); f_101879db();
  /* 10187503 pop ecx */
  ECX = (pop32());
  /* 10187504 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 1018750a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10187511:;
  /* 10187511 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10187517 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1018751a jmp 0x10187806 */
  goto L_10187806;
L_1018751f:;
  /* 1018751f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10187522 push eax */
  push32((uint32_t)(EAX));
  /* 10187523 call 0x101879db */
  push32(0x10187528u); f_101879db();
  /* 10187528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018752a pop ecx */
  ECX = (pop32());
  /* 1018752b je 0x10187560 */
  if (C.zf) goto L_10187560;
  /* 1018752d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10187530 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10187532 je 0x10187560 */
  if (C.zf) goto L_10187560;
  /* 10187534 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 10187538 je 0x10187551 */
  if (C.zf) goto L_10187551;
  /* 1018753a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1018753d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1018753f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10187542 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10187545 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1018754c jmp 0x10187806 */
  goto L_10187806;
L_10187551:;
  /* 10187551 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 10187555 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10187558 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1018755b jmp 0x10187803 */
  goto L_10187803;
L_10187560:;
  /* 10187560 mov eax, dword ptr [0x10190690] */
  EAX = (r32((uint32_t)(0x10190690)));
  /* 10187565 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10187568 push eax */
  push32((uint32_t)(EAX));
  /* 10187569 jmp 0x101875fc */
  goto L_101875fc;
L_1018756e:;
  /* 1018756e jne 0x1018757c */
  if (!C.zf) goto L_1018757c;
  /* 10187570 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10187573 jne 0x1018757c */
  if (!C.zf) goto L_1018757c;
  /* 10187575 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1018757c:;
  /* 1018757c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1018757f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 10187582 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10187585 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10187588 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 1018758b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 1018758e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 10187591 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10187594 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 10187597 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1018759a push eax */
  push32((uint32_t)(EAX));
  /* 1018759b lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101875a1 push eax */
  push32((uint32_t)(EAX));
  /* 101875a2 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101875a5 push eax */
  push32((uint32_t)(EAX));
  /* 101875a6 call dword ptr [0x10190698] */
  call_ind((uint32_t)(r32((uint32_t)(0x10190698))), 0x101875acu);
  /* 101875ac mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 101875af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101875b2 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 101875b8 je 0x101875ce */
  if (C.zf) goto L_101875ce;
  /* 101875ba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101875be jne 0x101875ce */
  if (!C.zf) goto L_101875ce;
  /* 101875c0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101875c6 push eax */
  push32((uint32_t)(EAX));
  /* 101875c7 call dword ptr [0x101906a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101906a4))), 0x101875cdu);
  /* 101875cd pop ecx */
  ECX = (pop32());
L_101875ce:;
  /* 101875ce cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101875d1 jne 0x101875e5 */
  if (!C.zf) goto L_101875e5;
  /* 101875d3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101875d5 jne 0x101875e5 */
  if (!C.zf) goto L_101875e5;
  /* 101875d7 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101875dd push eax */
  push32((uint32_t)(EAX));
  /* 101875de call dword ptr [0x1019069c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1019069c))), 0x101875e4u);
  /* 101875e4 pop ecx */
  ECX = (pop32());
L_101875e5:;
  /* 101875e5 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101875ec jne 0x101875fb */
  if (!C.zf) goto L_101875fb;
  /* 101875ee or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101875f2 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 101875f8 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_101875fb:;
  /* 101875fb push edi */
  push32((uint32_t)(EDI));
L_101875fc:;
  /* 101875fc call 0x10189040 */
  push32(0x10187601u); f_10189040();
  /* 10187601 pop ecx */
  ECX = (pop32());
  /* 10187602 jmp 0x10187803 */
  goto L_10187803;
L_10187607:;
  /* 10187607 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018760a je 0x101876e1 */
  if (C.zf) goto L_101876e1;
  /* 10187610 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187613 je 0x101876b7 */
  if (C.zf) goto L_101876b7;
  /* 10187619 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018761a je 0x101876a4 */
  if (C.zf) goto L_101876a4;
  /* 10187620 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10187621 je 0x10187674 */
  if (C.zf) goto L_10187674;
  /* 10187623 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187626 je 0x10187429 */
  if (C.zf) goto L_10187429;
  /* 1018762c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018762d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018762e je 0x101876e5 */
  if (C.zf) goto L_101876e5;
  /* 10187634 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187637 jne 0x10187806 */
  if (!C.zf) goto L_10187806;
  /* 1018763d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 10187644 jmp 0x10187682 */
  goto L_10187682;
L_10187646:;
  /* 10187646 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187648 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1018764a jmp 0x10187803 */
  goto L_10187803;
L_1018764f:;
  /* 1018764f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10187651 jne 0x1018765c */
  if (!C.zf) goto L_1018765c;
  /* 10187653 mov ecx, dword ptr [0x10190690] */
  ECX = (r32((uint32_t)(0x10190690)));
  /* 10187659 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1018765c:;
  /* 1018765c mov eax, ecx */
  EAX = (ECX);
L_1018765e:;
  /* 1018765e mov edx, esi */
  EDX = (ESI);
  /* 10187660 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10187661 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10187663 je 0x1018766d */
  if (C.zf) goto L_1018766d;
  /* 10187665 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10187668 je 0x1018766d */
  if (C.zf) goto L_1018766d;
  /* 1018766a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018766b jmp 0x1018765e */
  goto L_1018765e;
L_1018766d:;
  /* 1018766d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018766f jmp 0x10187803 */
  goto L_10187803;
L_10187674:;
  /* 10187674 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_1018767b:;
  /* 1018767b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_10187682:;
  /* 10187682 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10187686 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 1018768d je 0x101876ec */
  if (C.zf) goto L_101876ec;
  /* 1018768f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 10187692 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 10187696 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10187698 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1018769f mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 101876a2 jmp 0x101876ec */
  goto L_101876ec;
L_101876a4:;
  /* 101876a4 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101876a8 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 101876af je 0x101876ec */
  if (C.zf) goto L_101876ec;
  /* 101876b1 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101876b5 jmp 0x101876ec */
  goto L_101876ec;
L_101876b7:;
  /* 101876b7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101876ba push eax */
  push32((uint32_t)(EAX));
  /* 101876bb call 0x101879db */
  push32(0x101876c0u); f_101879db();
  /* 101876c0 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101876c4 pop ecx */
  ECX = (pop32());
  /* 101876c5 je 0x101876d0 */
  if (C.zf) goto L_101876d0;
  /* 101876c7 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 101876cb mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 101876ce jmp 0x101876d5 */
  goto L_101876d5;
L_101876d0:;
  /* 101876d0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 101876d3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_101876d5:;
  /* 101876d5 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101876dc jmp 0x10187904 */
  goto L_10187904;
L_101876e1:;
  /* 101876e1 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_101876e5:;
  /* 101876e5 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_101876ec:;
  /* 101876ec test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 101876f0 je 0x101876fe */
  if (C.zf) goto L_101876fe;
  /* 101876f2 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101876f5 push eax */
  push32((uint32_t)(EAX));
  /* 101876f6 call 0x101879e8 */
  push32(0x101876fbu); f_101879e8();
  /* 101876fb pop ecx */
  ECX = (pop32());
  /* 101876fc jmp 0x1018773f */
  goto L_1018773f;
L_101876fe:;
  /* 101876fe test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10187702 je 0x10187725 */
  if (C.zf) goto L_10187725;
  /* 10187704 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10187708 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1018770b push eax */
  push32((uint32_t)(EAX));
  /* 1018770c je 0x1018771a */
  if (C.zf) goto L_1018771a;
  /* 1018770e call 0x101879db */
  push32(0x10187713u); f_101879db();
  /* 10187713 pop ecx */
  ECX = (pop32());
  /* 10187714 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_10187717:;
  /* 10187717 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10187718 jmp 0x1018773f */
  goto L_1018773f;
L_1018771a:;
  /* 1018771a call 0x101879db */
  push32(0x1018771fu); f_101879db();
  /* 1018771f pop ecx */
  ECX = (pop32());
  /* 10187720 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 10187723 jmp 0x10187717 */
  goto L_10187717;
L_10187725:;
  /* 10187725 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10187729 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1018772c push eax */
  push32((uint32_t)(EAX));
  /* 1018772d je 0x10187737 */
  if (C.zf) goto L_10187737;
  /* 1018772f call 0x101879db */
  push32(0x10187734u); f_101879db();
  /* 10187734 pop ecx */
  ECX = (pop32());
  /* 10187735 jmp 0x10187717 */
  goto L_10187717;
L_10187737:;
  /* 10187737 call 0x101879db */
  push32(0x1018773cu); f_101879db();
  /* 1018773c pop ecx */
  ECX = (pop32());
  /* 1018773d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_1018773f:;
  /* 1018773f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10187743 je 0x10187760 */
  if (C.zf) goto L_10187760;
  /* 10187745 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10187747 jg 0x10187760 */
  if ((!C.zf&&C.sf==C.of)) goto L_10187760;
  /* 10187749 jl 0x1018774f */
  if ((C.sf!=C.of)) goto L_1018774f;
  /* 1018774b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018774d jae 0x10187760 */
  if (!C.cf) goto L_10187760;
L_1018774f:;
  /* 1018774f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10187751 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10187754 mov esi, eax */
  ESI = (EAX);
  /* 10187756 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10187758 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1018775c mov edi, edx */
  EDI = (EDX);
  /* 1018775e jmp 0x10187764 */
  goto L_10187764;
L_10187760:;
  /* 10187760 mov esi, eax */
  ESI = (EAX);
  /* 10187762 mov edi, edx */
  EDI = (EDX);
L_10187764:;
  /* 10187764 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10187768 jne 0x1018776d */
  if (!C.zf) goto L_1018776d;
  /* 1018776a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_1018776d:;
  /* 1018776d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187771 jge 0x1018777c */
  if ((C.sf==C.of)) goto L_1018777c;
  /* 10187773 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1018777a jmp 0x10187780 */
  goto L_10187780;
L_1018777c:;
  /* 1018777c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10187780:;
  /* 10187780 mov eax, esi */
  EAX = (ESI);
  /* 10187782 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10187784 jne 0x1018778a */
  if (!C.zf) goto L_1018778a;
  /* 10187786 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_1018778a:;
  /* 1018778a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1018778d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10187790:;
  /* 10187790 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10187793 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 10187796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10187798 jg 0x101877a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_101877a0;
  /* 1018779a mov eax, esi */
  EAX = (ESI);
  /* 1018779c or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1018779e je 0x101877db */
  if (C.zf) goto L_101877db;
L_101877a0:;
  /* 101877a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101877a3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101877a4 push edx */
  push32((uint32_t)(EDX));
  /* 101877a5 push eax */
  push32((uint32_t)(EAX));
  /* 101877a6 push edi */
  push32((uint32_t)(EDI));
  /* 101877a7 push esi */
  push32((uint32_t)(ESI));
  /* 101877a8 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 101877ab mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 101877ae call 0x101891f0 */
  push32(0x101877b3u); f_101891f0();
  /* 101877b3 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 101877b6 mov ebx, eax */
  EBX = (EAX);
  /* 101877b8 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101877bb push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 101877be push edi */
  push32((uint32_t)(EDI));
  /* 101877bf push esi */
  push32((uint32_t)(ESI));
  /* 101877c0 call 0x10189180 */
  push32(0x101877c5u); f_10189180();
  /* 101877c5 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101877c8 mov esi, eax */
  ESI = (EAX);
  /* 101877ca mov edi, edx */
  EDI = (EDX);
  /* 101877cc jle 0x101877d1 */
  if ((C.zf||C.sf!=C.of)) goto L_101877d1;
  /* 101877ce add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_101877d1:;
  /* 101877d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101877d4 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101877d7 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 101877d9 jmp 0x10187790 */
  goto L_10187790;
L_101877db:;
  /* 101877db lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 101877de sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101877e1 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 101877e4 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 101877e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101877eb je 0x10187806 */
  if (C.zf) goto L_10187806;
  /* 101877ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101877f0 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101877f3 jne 0x101877f9 */
  if (!C.zf) goto L_101877f9;
  /* 101877f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101877f7 jne 0x10187806 */
  if (!C.zf) goto L_10187806;
L_101877f9:;
  /* 101877f9 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101877fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101877fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10187800 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_10187803:;
  /* 10187803 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10187806:;
  /* 10187806 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018780a jne 0x10187904 */
  if (!C.zf) goto L_10187904;
  /* 10187810 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 10187813 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 10187816 je 0x1018783e */
  if (C.zf) goto L_1018783e;
  /* 10187818 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 1018781b je 0x10187823 */
  if (C.zf) goto L_10187823;
  /* 1018781d mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 10187821 jmp 0x10187837 */
  goto L_10187837;
L_10187823:;
  /* 10187823 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10187826 je 0x1018782e */
  if (C.zf) goto L_1018782e;
  /* 10187828 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 1018782c jmp 0x10187837 */
  goto L_10187837;
L_1018782e:;
  /* 1018782e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10187831 je 0x1018783e */
  if (C.zf) goto L_1018783e;
  /* 10187833 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_10187837:;
  /* 10187837 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_1018783e:;
  /* 1018783e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 10187841 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187844 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187847 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 1018784a jne 0x1018785e */
  if (!C.zf) goto L_1018785e;
  /* 1018784c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1018784f push eax */
  push32((uint32_t)(EAX));
  /* 10187850 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10187853 push esi */
  push32((uint32_t)(ESI));
  /* 10187854 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10187856 call 0x10187972 */
  push32(0x1018785bu); f_10187972();
  /* 1018785b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018785e:;
  /* 1018785e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10187861 push eax */
  push32((uint32_t)(EAX));
  /* 10187862 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 10187865 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10187868 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1018786b push eax */
  push32((uint32_t)(EAX));
  /* 1018786c call 0x101879a3 */
  push32(0x10187871u); f_101879a3();
  /* 10187871 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10187874 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10187877 je 0x10187890 */
  if (C.zf) goto L_10187890;
  /* 10187879 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1018787c jne 0x10187890 */
  if (!C.zf) goto L_10187890;
  /* 1018787e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10187881 push eax */
  push32((uint32_t)(EAX));
  /* 10187882 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10187885 push esi */
  push32((uint32_t)(ESI));
  /* 10187886 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10187888 call 0x10187972 */
  push32(0x1018788du); f_10187972();
  /* 1018788d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10187890:;
  /* 10187890 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187894 je 0x101878d7 */
  if (C.zf) goto L_101878d7;
  /* 10187896 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018789a jle 0x101878d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101878d7;
  /* 1018789c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1018789f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 101878a2 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_101878a5:;
  /* 101878a5 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 101878a8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101878a9 push eax */
  push32((uint32_t)(EAX));
  /* 101878aa lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101878ad push eax */
  push32((uint32_t)(EAX));
  /* 101878ae inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101878af call 0x101890bb */
  push32(0x101878b4u); f_101890bb();
  /* 101878b4 pop ecx */
  ECX = (pop32());
  /* 101878b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101878b7 pop ecx */
  ECX = (pop32());
  /* 101878b8 jle 0x101878ec */
  if ((C.zf||C.sf!=C.of)) goto L_101878ec;
  /* 101878ba lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 101878bd push ecx */
  push32((uint32_t)(ECX));
  /* 101878be push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101878c1 push eax */
  push32((uint32_t)(EAX));
  /* 101878c2 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101878c5 push eax */
  push32((uint32_t)(EAX));
  /* 101878c6 call 0x101879a3 */
  push32(0x101878cbu); f_101879a3();
  /* 101878cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101878ce mov eax, edi */
  EAX = (EDI);
  /* 101878d0 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101878d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101878d3 jne 0x101878a5 */
  if (!C.zf) goto L_101878a5;
  /* 101878d5 jmp 0x101878ec */
  goto L_101878ec;
L_101878d7:;
  /* 101878d7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101878da push eax */
  push32((uint32_t)(EAX));
  /* 101878db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101878de push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 101878e1 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 101878e4 call 0x101879a3 */
  push32(0x101878e9u); f_101879a3();
  /* 101878e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101878ec:;
  /* 101878ec test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 101878f0 je 0x10187904 */
  if (C.zf) goto L_10187904;
  /* 101878f2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101878f5 push eax */
  push32((uint32_t)(EAX));
  /* 101878f6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101878f9 push esi */
  push32((uint32_t)(ESI));
  /* 101878fa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101878fc call 0x10187972 */
  push32(0x10187901u); f_10187972();
  /* 10187901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10187904:;
  /* 10187904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10187907 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10187909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018790a test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1018790c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1018790f jne 0x10187228 */
  if (!C.zf) goto L_10187228;
L_10187915:;
  /* 10187915 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10187918 pop edi */
  EDI = (pop32());
  /* 10187919 pop esi */
  ESI = (pop32());
  /* 1018791a pop ebx */
  EBX = (pop32());
  /* 1018791b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018791c ret  */
  ESPCHK(0x101871fcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000793d @ 0x1018793d (53 bytes, 25 insns) */
void f_1018793d(void) {
  FTRACE(0x1018793du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018793d push ebp */
  push32((uint32_t)(EBP));
  /* 1018793e mov ebp, esp */
  EBP = (ESP);
  /* 10187940 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10187943 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 10187946 js 0x10187956 */
  if (C.sf) goto L_10187956;
  /* 10187948 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1018794a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1018794d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1018794f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10187951 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10187954 jmp 0x10187961 */
  goto L_10187961;
L_10187956:;
  /* 10187956 push ecx */
  push32((uint32_t)(ECX));
  /* 10187957 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1018795a call 0x101870e4 */
  push32(0x1018795fu); f_101870e4();
  /* 1018795f pop ecx */
  ECX = (pop32());
  /* 10187960 pop ecx */
  ECX = (pop32());
L_10187961:;
  /* 10187961 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187964 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10187967 jne 0x1018796e */
  if (!C.zf) goto L_1018796e;
  /* 10187969 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1018796c pop ebp */
  EBP = (pop32());
  /* 1018796d ret  */
  ESPCHK(0x1018793du, _esp0);
  ESP += 4; return;
L_1018796e:;
  /* 1018796e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10187970 pop ebp */
  EBP = (pop32());
  /* 10187971 ret  */
  ESPCHK(0x1018793du, _esp0);
  ESP += 4; return;
}

/* FUN_10007972 @ 0x10187972 (49 bytes, 22 insns) */
void f_10187972(void) {
  FTRACE(0x10187972u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187972 push esi */
  push32((uint32_t)(ESI));
  /* 10187973 push edi */
  push32((uint32_t)(EDI));
  /* 10187974 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10187978 mov eax, edi */
  EAX = (EDI);
  /* 1018797a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1018797b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018797d jle 0x101879a0 */
  if ((C.zf||C.sf!=C.of)) goto L_101879a0;
  /* 1018797f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_10187983:;
  /* 10187983 push esi */
  push32((uint32_t)(ESI));
  /* 10187984 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10187988 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 1018798c call 0x1018793d */
  push32(0x10187991u); f_1018793d();
  /* 10187991 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10187994 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187997 je 0x101879a0 */
  if (C.zf) goto L_101879a0;
  /* 10187999 mov eax, edi */
  EAX = (EDI);
  /* 1018799b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1018799c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018799e jg 0x10187983 */
  if ((!C.zf&&C.sf==C.of)) goto L_10187983;
L_101879a0:;
  /* 101879a0 pop edi */
  EDI = (pop32());
  /* 101879a1 pop esi */
  ESI = (pop32());
  /* 101879a2 ret  */
  ESPCHK(0x10187972u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a3 @ 0x101879a3 (56 bytes, 27 insns) */
void f_101879a3(void) {
  FTRACE(0x101879a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101879a3 push ebx */
  push32((uint32_t)(EBX));
  /* 101879a4 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 101879a8 mov eax, ebx */
  EAX = (EBX);
  /* 101879aa dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101879ab push esi */
  push32((uint32_t)(ESI));
  /* 101879ac push edi */
  push32((uint32_t)(EDI));
  /* 101879ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101879af jle 0x101879d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101879d7;
  /* 101879b1 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 101879b5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_101879b9:;
  /* 101879b9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101879bc push edi */
  push32((uint32_t)(EDI));
  /* 101879bd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101879be push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 101879c2 push eax */
  push32((uint32_t)(EAX));
  /* 101879c3 call 0x1018793d */
  push32(0x101879c8u); f_1018793d();
  /* 101879c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101879cb cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101879ce je 0x101879d7 */
  if (C.zf) goto L_101879d7;
  /* 101879d0 mov eax, ebx */
  EAX = (EBX);
  /* 101879d2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101879d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101879d5 jg 0x101879b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_101879b9;
L_101879d7:;
  /* 101879d7 pop edi */
  EDI = (pop32());
  /* 101879d8 pop esi */
  ESI = (pop32());
  /* 101879d9 pop ebx */
  EBX = (pop32());
  /* 101879da ret  */
  ESPCHK(0x101879a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100079db @ 0x101879db (13 bytes, 5 insns) */
void f_101879db(void) {
  FTRACE(0x101879dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101879db mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101879df add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101879e2 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 101879e4 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 101879e7 ret  */
  ESPCHK(0x101879dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100079e8 @ 0x101879e8 (16 bytes, 6 insns) */
void f_101879e8(void) {
  FTRACE(0x101879e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101879e8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101879ec add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101879ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101879f1 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 101879f4 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 101879f7 ret  */
  ESPCHK(0x101879e8u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f8 @ 0x101879f8 (14 bytes, 5 insns) */
void f_101879f8(void) {
  FTRACE(0x101879f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101879f8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101879fc add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101879ff mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10187a01 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 10187a05 ret  */
  ESPCHK(0x101879f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a06 @ 0x10187a06 (18 bytes, 6 insns) */
void f_10187a06(void) {
  FTRACE(0x10187a06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187a06 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 10187a0b push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 10187a10 call 0x1018929a */
  push32(0x10187a15u); f_1018929a();
  /* 10187a15 pop ecx */
  ECX = (pop32());
  /* 10187a16 pop ecx */
  ECX = (pop32());
  /* 10187a17 ret  */
  ESPCHK(0x10187a06u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a18 @ 0x10187a18 (62 bytes, 24 insns) */
void f_10187a18(void) {
  FTRACE(0x10187a18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187a18 push ebp */
  push32((uint32_t)(EBP));
  /* 10187a19 mov ebp, esp */
  EBP = (ESP);
  /* 10187a1b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187a1e fld qword ptr [0x1018e170] */
  fpu_push(rf64((uint32_t)(0x1018e170)));
  /* 10187a24 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10187a27 fld qword ptr [0x1018e168] */
  fpu_push(rf64((uint32_t)(0x1018e168)));
  /* 10187a2d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10187a30 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10187a33 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 10187a36 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 10187a39 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 10187a3c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 10187a3f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 10187a42 fcomp qword ptr [0x1018e160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1018e160)));
  (void)fpu_pop();
  /* 10187a48 fnstsw ax */
  AX = fpu_status();
  /* 10187a4a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10187a4b jbe 0x10187a52 */
  if ((C.cf||C.zf)) goto L_10187a52;
  /* 10187a4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10187a4f pop eax */
  EAX = (pop32());
  /* 10187a50 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10187a51 ret  */
  ESPCHK(0x10187a18u, _esp0);
  ESP += 4; return;
L_10187a52:;
  /* 10187a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10187a54 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10187a55 ret  */
  ESPCHK(0x10187a18u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a56 @ 0x10187a56 (41 bytes, 13 insns) */
void f_10187a56(void) {
  FTRACE(0x10187a56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187a56 push 0x1018e194 */
  push32((uint32_t)(0x1018e194u));
  /* 10187a5b call dword ptr [0x1018e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e004))), 0x10187a61u);
  /* 10187a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10187a63 je 0x10187a7a */
  if (C.zf) goto L_10187a7a;
  /* 10187a65 push 0x1018e178 */
  push32((uint32_t)(0x1018e178u));
  /* 10187a6a push eax */
  push32((uint32_t)(EAX));
  /* 10187a6b call dword ptr [0x1018e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e088))), 0x10187a71u);
  /* 10187a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10187a73 je 0x10187a7a */
  if (C.zf) goto L_10187a7a;
  /* 10187a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10187a77 call eax */
  call_ind((uint32_t)(EAX), 0x10187a79u);
  /* 10187a79 ret  */
  ESPCHK(0x10187a56u, _esp0);
  ESP += 4; return;
L_10187a7a:;
  /* 10187a7a jmp 0x10187a18 */
  f_10187a18(); return;
}

/* FUN_10007a7f @ 0x10187a7f (90 bytes, 37 insns) */
void f_10187a7f(void) {
  FTRACE(0x10187a7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187a7f push esi */
  push32((uint32_t)(ESI));
  /* 10187a80 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10187a84 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10187a87 push eax */
  push32((uint32_t)(EAX));
  /* 10187a88 call 0x10189440 */
  push32(0x10187a8du); f_10189440();
  /* 10187a8d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187a90 pop ecx */
  ECX = (pop32());
  /* 10187a91 je 0x10187abf */
  if (C.zf) goto L_10187abf;
L_10187a93:;
  /* 10187a93 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10187a94 cmp dword ptr [0x10190c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10190c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187a9b jle 0x10187aac */
  if ((C.zf||C.sf!=C.of)) goto L_10187aac;
  /* 10187a9d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10187aa0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10187aa2 push eax */
  push32((uint32_t)(EAX));
  /* 10187aa3 call 0x101893cb */
  push32(0x10187aa8u); f_101893cb();
  /* 10187aa8 pop ecx */
  ECX = (pop32());
  /* 10187aa9 pop ecx */
  ECX = (pop32());
  /* 10187aaa jmp 0x10187abb */
  goto L_10187abb;
L_10187aac:;
  /* 10187aac movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10187aaf mov ecx, dword ptr [0x101909f0] */
  ECX = (r32((uint32_t)(0x101909f0)));
  /* 10187ab5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10187ab8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10187abb:;
  /* 10187abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10187abd jne 0x10187a93 */
  if (!C.zf) goto L_10187a93;
L_10187abf:;
  /* 10187abf mov cl, byte ptr [0x10190c04] */
  CL = (r8((uint32_t)(0x10190c04)));
  /* 10187ac5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10187ac7 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 10187ac9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10187aca:;
  /* 10187aca mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10187acc mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 10187ace mov al, cl */
  AL = (CL);
  /* 10187ad0 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10187ad2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10187ad3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10187ad5 jne 0x10187aca */
  if (!C.zf) goto L_10187aca;
  /* 10187ad7 pop esi */
  ESI = (pop32());
  /* 10187ad8 ret  */
  ESPCHK(0x10187a7fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10187b3f (62 bytes, 29 insns) */
void f_10187b3f(void) {
  FTRACE(0x10187b3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187b3f push ebp */
  push32((uint32_t)(EBP));
  /* 10187b40 mov ebp, esp */
  EBP = (ESP);
  /* 10187b42 push ecx */
  push32((uint32_t)(ECX));
  /* 10187b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10187b44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187b48 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10187b4b je 0x10187b68 */
  if (C.zf) goto L_10187b68;
  /* 10187b4d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10187b50 push eax */
  push32((uint32_t)(EAX));
  /* 10187b51 call 0x1018990c */
  push32(0x10187b56u); f_1018990c();
  /* 10187b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10187b59 pop ecx */
  ECX = (pop32());
  /* 10187b5a pop ecx */
  ECX = (pop32());
  /* 10187b5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10187b5e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10187b60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10187b63 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10187b66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10187b67 ret  */
  ESPCHK(0x10187b3fu, _esp0);
  ESP += 4; return;
L_10187b68:;
  /* 10187b68 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10187b6b push eax */
  push32((uint32_t)(EAX));
  /* 10187b6c call 0x10189939 */
  push32(0x10187b71u); f_10189939();
  /* 10187b71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10187b74 pop ecx */
  ECX = (pop32());
  /* 10187b75 pop ecx */
  ECX = (pop32());
  /* 10187b76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10187b79 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10187b7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10187b7c ret  */
  ESPCHK(0x10187b3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b7d @ 0x10187b7d (97 bytes, 42 insns) */
void f_10187b7d(void) {
  FTRACE(0x10187b7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187b7d push ebp */
  push32((uint32_t)(EBP));
  /* 10187b7e mov ebp, esp */
  EBP = (ESP);
  /* 10187b80 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187b83 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10187b86 push esi */
  push32((uint32_t)(ESI));
  /* 10187b87 push eax */
  push32((uint32_t)(EAX));
  /* 10187b88 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10187b8b push eax */
  push32((uint32_t)(EAX));
  /* 10187b8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10187b8f push ecx */
  push32((uint32_t)(ECX));
  /* 10187b90 push ecx */
  push32((uint32_t)(ECX));
  /* 10187b91 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10187b93 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10187b96 call 0x101899dd */
  push32(0x10187b9bu); f_101899dd();
  /* 10187b9b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10187b9e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10187ba1 push eax */
  push32((uint32_t)(EAX));
  /* 10187ba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10187ba5 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10187ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10187ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10187bab cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187baf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10187bb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10187bb4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10187bb6 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10187bb9 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10187bbb add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10187bbd push ecx */
  push32((uint32_t)(ECX));
  /* 10187bbe call 0x10189966 */
  push32(0x10187bc3u); f_10189966();
  /* 10187bc3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10187bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10187bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10187bc9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10187bcc push esi */
  push32((uint32_t)(ESI));
  /* 10187bcd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10187bd0 call 0x10187bde */
  push32(0x10187bd5u); f_10187bde();
  /* 10187bd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10187bd8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10187bdb pop esi */
  ESI = (pop32());
  /* 10187bdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10187bdd ret  */
  ESPCHK(0x10187b7du, _esp0);
  ESP += 4; return;
}

/* FUN_10007bde @ 0x10187bde (194 bytes, 91 insns) */
void f_10187bde(void) {
  FTRACE(0x10187bdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187bde push ebp */
  push32((uint32_t)(EBP));
  /* 10187bdf mov ebp, esp */
  EBP = (ESP);
  /* 10187be1 push ebx */
  push32((uint32_t)(EBX));
  /* 10187be2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10187be4 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10187be7 push esi */
  push32((uint32_t)(ESI));
  /* 10187be8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10187beb push edi */
  push32((uint32_t)(EDI));
  /* 10187bec mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10187bef je 0x10187c0c */
  if (C.zf) goto L_10187c0c;
  /* 10187bf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10187bf3 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187bf6 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10187bf9 push eax */
  push32((uint32_t)(EAX));
  /* 10187bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10187bfc cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187bff sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10187c02 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10187c04 push eax */
  push32((uint32_t)(EAX));
  /* 10187c05 call 0x10187e80 */
  push32(0x10187c0au); f_10187e80();
  /* 10187c0a pop ecx */
  ECX = (pop32());
  /* 10187c0b pop ecx */
  ECX = (pop32());
L_10187c0c:;
  /* 10187c0c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187c0f mov eax, edi */
  EAX = (EDI);
  /* 10187c11 jne 0x10187c19 */
  if (!C.zf) goto L_10187c19;
  /* 10187c13 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 10187c16 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_10187c19:;
  /* 10187c19 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187c1c jle 0x10187c30 */
  if ((C.zf||C.sf!=C.of)) goto L_10187c30;
  /* 10187c1e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10187c21 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10187c24 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10187c26 mov eax, ecx */
  EAX = (ECX);
  /* 10187c28 mov cl, byte ptr [0x10190c04] */
  CL = (r8((uint32_t)(0x10190c04)));
  /* 10187c2e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_10187c30:;
  /* 10187c30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10187c32 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10187c35 push 0x1018e1a8 */
  push32((uint32_t)(0x1018e1a8u));
  /* 10187c3a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10187c3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10187c3f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10187c42 push ecx */
  push32((uint32_t)(ECX));
  /* 10187c43 call 0x10189af0 */
  push32(0x10187c48u); f_10189af0();
  /* 10187c48 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187c4b pop ecx */
  ECX = (pop32());
  /* 10187c4c pop ecx */
  ECX = (pop32());
  /* 10187c4d mov ecx, eax */
  ECX = (EAX);
  /* 10187c4f je 0x10187c54 */
  if (C.zf) goto L_10187c54;
  /* 10187c51 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_10187c54:;
  /* 10187c54 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10187c57 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10187c58 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10187c5b je 0x10187c99 */
  if (C.zf) goto L_10187c99;
  /* 10187c5d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 10187c60 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10187c61 jns 0x10187c68 */
  if (!C.sf) goto L_10187c68;
  /* 10187c63 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 10187c65 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_10187c68:;
  /* 10187c68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10187c69 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187c6c jl 0x10187c7f */
  if ((C.sf!=C.of)) goto L_10187c7f;
  /* 10187c6e mov eax, ebx */
  EAX = (EBX);
  /* 10187c70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10187c72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10187c73 pop esi */
  ESI = (pop32());
  /* 10187c74 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10187c76 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10187c78 mov eax, ebx */
  EAX = (EBX);
  /* 10187c7a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10187c7b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10187c7d mov ebx, edx */
  EBX = (EDX);
L_10187c7f:;
  /* 10187c7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10187c80 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187c83 jl 0x10187c96 */
  if ((C.sf!=C.of)) goto L_10187c96;
  /* 10187c85 mov eax, ebx */
  EAX = (EBX);
  /* 10187c87 push 0xa */
  push32((uint32_t)(0xau));
  /* 10187c89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10187c8a pop esi */
  ESI = (pop32());
  /* 10187c8b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10187c8d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10187c8f mov eax, ebx */
  EAX = (EBX);
  /* 10187c91 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10187c92 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10187c94 mov ebx, edx */
  EBX = (EDX);
L_10187c96:;
  /* 10187c96 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_10187c99:;
  /* 10187c99 mov eax, edi */
  EAX = (EDI);
  /* 10187c9b pop edi */
  EDI = (pop32());
  /* 10187c9c pop esi */
  ESI = (pop32());
  /* 10187c9d pop ebx */
  EBX = (pop32());
  /* 10187c9e pop ebp */
  EBP = (pop32());
  /* 10187c9f ret  */
  ESPCHK(0x10187bdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ca0 @ 0x10187ca0 (85 bytes, 37 insns) */
void f_10187ca0(void) {
  FTRACE(0x10187ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10187ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10187ca3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187ca6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10187ca9 push esi */
  push32((uint32_t)(ESI));
  /* 10187caa push eax */
  push32((uint32_t)(EAX));
  /* 10187cab lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10187cae push eax */
  push32((uint32_t)(EAX));
  /* 10187caf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10187cb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10187cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10187cb4 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10187cb6 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10187cb9 call 0x101899dd */
  push32(0x10187cbeu); f_101899dd();
  /* 10187cbe mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10187cc1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10187cc4 push eax */
  push32((uint32_t)(EAX));
  /* 10187cc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10187cc8 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10187cca push eax */
  push32((uint32_t)(EAX));
  /* 10187ccb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10187ccd cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187cd1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10187cd4 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10187cd7 push eax */
  push32((uint32_t)(EAX));
  /* 10187cd8 call 0x10189966 */
  push32(0x10187cddu); f_10189966();
  /* 10187cdd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10187ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10187ce2 push eax */
  push32((uint32_t)(EAX));
  /* 10187ce3 push esi */
  push32((uint32_t)(ESI));
  /* 10187ce4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10187ce7 call 0x10187cf5 */
  push32(0x10187cecu); f_10187cf5();
  /* 10187cec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10187cef add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10187cf2 pop esi */
  ESI = (pop32());
  /* 10187cf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10187cf4 ret  */
  ESPCHK(0x10187ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf5 @ 0x10187cf5 (167 bytes, 73 insns) */
void f_10187cf5(void) {
  FTRACE(0x10187cf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187cf5 push ebp */
  push32((uint32_t)(EBP));
  /* 10187cf6 mov ebp, esp */
  EBP = (ESP);
  /* 10187cf8 push ebx */
  push32((uint32_t)(EBX));
  /* 10187cf9 push esi */
  push32((uint32_t)(ESI));
  /* 10187cfa mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10187cfd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10187d00 push edi */
  push32((uint32_t)(EDI));
  /* 10187d01 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10187d04 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10187d05 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10187d09 je 0x10187d25 */
  if (C.zf) goto L_10187d25;
  /* 10187d0b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187d0e jne 0x10187d25 */
  if (!C.zf) goto L_10187d25;
  /* 10187d10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10187d12 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187d15 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10187d18 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10187d1a add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10187d1c mov eax, ecx */
  EAX = (ECX);
  /* 10187d1e mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10187d21 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_10187d25:;
  /* 10187d25 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187d28 mov edi, ebx */
  EDI = (EBX);
  /* 10187d2a jne 0x10187d32 */
  if (!C.zf) goto L_10187d32;
  /* 10187d2c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 10187d2f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_10187d32:;
  /* 10187d32 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10187d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10187d37 jg 0x10187d49 */
  if ((!C.zf&&C.sf==C.of)) goto L_10187d49;
  /* 10187d39 push 1 */
  push32((uint32_t)(0x1u));
  /* 10187d3b push edi */
  push32((uint32_t)(EDI));
  /* 10187d3c call 0x10187e80 */
  push32(0x10187d41u); f_10187e80();
  /* 10187d41 pop ecx */
  ECX = (pop32());
  /* 10187d42 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 10187d45 pop ecx */
  ECX = (pop32());
  /* 10187d46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10187d47 jmp 0x10187d4b */
  goto L_10187d4b;
L_10187d49:;
  /* 10187d49 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10187d4b:;
  /* 10187d4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187d4f jle 0x10187d95 */
  if ((C.zf||C.sf!=C.of)) goto L_10187d95;
  /* 10187d51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10187d53 push edi */
  push32((uint32_t)(EDI));
  /* 10187d54 call 0x10187e80 */
  push32(0x10187d59u); f_10187e80();
  /* 10187d59 mov al, byte ptr [0x10190c04] */
  AL = (r8((uint32_t)(0x10190c04)));
  /* 10187d5e pop ecx */
  ECX = (pop32());
  /* 10187d5f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10187d61 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10187d64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10187d65 pop ecx */
  ECX = (pop32());
  /* 10187d66 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10187d68 jge 0x10187d95 */
  if ((C.sf==C.of)) goto L_10187d95;
  /* 10187d6a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10187d6e je 0x10187d74 */
  if (C.zf) goto L_10187d74;
  /* 10187d70 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10187d72 jmp 0x10187d7b */
  goto L_10187d7b;
L_10187d74:;
  /* 10187d74 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10187d76 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187d79 jl 0x10187d7e */
  if ((C.sf!=C.of)) goto L_10187d7e;
L_10187d7b:;
  /* 10187d7b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10187d7e:;
  /* 10187d7e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10187d81 push edi */
  push32((uint32_t)(EDI));
  /* 10187d82 call 0x10187e80 */
  push32(0x10187d87u); f_10187e80();
  /* 10187d87 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10187d8a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10187d8c push edi */
  push32((uint32_t)(EDI));
  /* 10187d8d call 0x10189be0 */
  push32(0x10187d92u); f_10189be0();
  /* 10187d92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10187d95:;
  /* 10187d95 pop edi */
  EDI = (pop32());
  /* 10187d96 mov eax, ebx */
  EAX = (EBX);
  /* 10187d98 pop esi */
  ESI = (pop32());
  /* 10187d99 pop ebx */
  EBX = (pop32());
  /* 10187d9a pop ebp */
  EBP = (pop32());
  /* 10187d9b ret  */
  ESPCHK(0x10187cf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d9c @ 0x10187d9c (147 bytes, 66 insns) */
void f_10187d9c(void) {
  FTRACE(0x10187d9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187d9c push ebp */
  push32((uint32_t)(EBP));
  /* 10187d9d mov ebp, esp */
  EBP = (ESP);
  /* 10187d9f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187da2 push ebx */
  push32((uint32_t)(EBX));
  /* 10187da3 push esi */
  push32((uint32_t)(ESI));
  /* 10187da4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10187da7 push edi */
  push32((uint32_t)(EDI));
  /* 10187da8 push eax */
  push32((uint32_t)(EAX));
  /* 10187da9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10187dac push eax */
  push32((uint32_t)(EAX));
  /* 10187dad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10187db0 push ecx */
  push32((uint32_t)(ECX));
  /* 10187db1 push ecx */
  push32((uint32_t)(ECX));
  /* 10187db2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10187db4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10187db7 call 0x101899dd */
  push32(0x10187dbcu); f_101899dd();
  /* 10187dbc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10187dbf mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10187dc2 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 10187dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10187dc7 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187dcb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10187dce add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10187dd1 mov edi, eax */
  EDI = (EAX);
  /* 10187dd3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10187dd6 push eax */
  push32((uint32_t)(EAX));
  /* 10187dd7 push ebx */
  push32((uint32_t)(EBX));
  /* 10187dd8 push edi */
  push32((uint32_t)(EDI));
  /* 10187dd9 call 0x10189966 */
  push32(0x10187ddeu); f_10189966();
  /* 10187dde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10187de1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10187de4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10187de5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187de7 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10187dea cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187ded jl 0x10187e15 */
  if ((C.sf!=C.of)) goto L_10187e15;
  /* 10187def cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187df1 jge 0x10187e15 */
  if ((C.sf==C.of)) goto L_10187e15;
  /* 10187df3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10187df5 je 0x10187e01 */
  if (C.zf) goto L_10187e01;
L_10187df7:;
  /* 10187df7 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10187df9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10187dfa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10187dfc jne 0x10187df7 */
  if (!C.zf) goto L_10187df7;
  /* 10187dfe and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_10187e01:;
  /* 10187e01 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10187e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10187e06 push eax */
  push32((uint32_t)(EAX));
  /* 10187e07 push ebx */
  push32((uint32_t)(EBX));
  /* 10187e08 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10187e0b call 0x10187cf5 */
  push32(0x10187e10u); f_10187cf5();
  /* 10187e10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10187e13 jmp 0x10187e2a */
  goto L_10187e2a;
L_10187e15:;
  /* 10187e15 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10187e18 push 1 */
  push32((uint32_t)(0x1u));
  /* 10187e1a push eax */
  push32((uint32_t)(EAX));
  /* 10187e1b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10187e1e push ebx */
  push32((uint32_t)(EBX));
  /* 10187e1f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10187e22 call 0x10187bde */
  push32(0x10187e27u); f_10187bde();
  /* 10187e27 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10187e2a:;
  /* 10187e2a pop edi */
  EDI = (pop32());
  /* 10187e2b pop esi */
  ESI = (pop32());
  /* 10187e2c pop ebx */
  EBX = (pop32());
  /* 10187e2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10187e2e ret  */
  ESPCHK(0x10187d9cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10187e2f (81 bytes, 29 insns) */
void f_10187e2f(void) {
  FTRACE(0x10187e2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187e2f push ebp */
  push32((uint32_t)(EBP));
  /* 10187e30 mov ebp, esp */
  EBP = (ESP);
  /* 10187e32 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187e36 je 0x10187e6a */
  if (C.zf) goto L_10187e6a;
  /* 10187e38 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187e3c je 0x10187e6a */
  if (C.zf) goto L_10187e6a;
  /* 10187e3e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187e42 jne 0x10187e57 */
  if (!C.zf) goto L_10187e57;
  /* 10187e44 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10187e47 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10187e4a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10187e4d call 0x10187ca0 */
  push32(0x10187e52u); f_10187ca0();
  /* 10187e52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10187e55 pop ebp */
  EBP = (pop32());
  /* 10187e56 ret  */
  ESPCHK(0x10187e2fu, _esp0);
  ESP += 4; return;
L_10187e57:;
  /* 10187e57 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10187e5a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10187e5d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10187e60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10187e63 call 0x10187d9c */
  push32(0x10187e68u); f_10187d9c();
  /* 10187e68 jmp 0x10187e7b */
  goto L_10187e7b;
L_10187e6a:;
  /* 10187e6a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10187e6d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10187e70 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10187e73 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10187e76 call 0x10187b7d */
  push32(0x10187e7bu); f_10187b7d();
L_10187e7b:;
  /* 10187e7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10187e7e pop ebp */
  EBP = (pop32());
  /* 10187e7f ret  */
  ESPCHK(0x10187e2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x10187e80 (37 bytes, 18 insns) */
void f_10187e80(void) {
  FTRACE(0x10187e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187e80 push edi */
  push32((uint32_t)(EDI));
  /* 10187e81 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10187e85 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10187e87 je 0x10187ea3 */
  if (C.zf) goto L_10187ea3;
  /* 10187e89 push esi */
  push32((uint32_t)(ESI));
  /* 10187e8a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10187e8e push esi */
  push32((uint32_t)(ESI));
  /* 10187e8f call 0x10189040 */
  push32(0x10187e94u); f_10189040();
  /* 10187e94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10187e95 push eax */
  push32((uint32_t)(EAX));
  /* 10187e96 push esi */
  push32((uint32_t)(ESI));
  /* 10187e97 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10187e99 push esi */
  push32((uint32_t)(ESI));
  /* 10187e9a call 0x10189c40 */
  push32(0x10187e9fu); f_10189c40();
  /* 10187e9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10187ea2 pop esi */
  ESI = (pop32());
L_10187ea3:;
  /* 10187ea3 pop edi */
  EDI = (pop32());
  /* 10187ea4 ret  */
  ESPCHK(0x10187e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea5 @ 0x10187ea5 (45 bytes, 12 insns) */
void f_10187ea5(void) {
  FTRACE(0x10187ea5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187ea5 mov eax, dword ptr [0x10190680] */
  EAX = (r32((uint32_t)(0x10190680)));
  /* 10187eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10187eac je 0x10187eb0 */
  if (C.zf) goto L_10187eb0;
  /* 10187eae call eax */
  call_ind((uint32_t)(EAX), 0x10187eb0u);
L_10187eb0:;
  /* 10187eb0 push 0x1018f014 */
  push32((uint32_t)(0x1018f014u));
  /* 10187eb5 push 0x1018f008 */
  push32((uint32_t)(0x1018f008u));
  /* 10187eba call 0x10187fa9 */
  push32(0x10187ebfu); f_10187fa9();
  /* 10187ebf push 0x1018f004 */
  push32((uint32_t)(0x1018f004u));
  /* 10187ec4 push 0x1018f000 */
  push32((uint32_t)(0x1018f000u));
  /* 10187ec9 call 0x10187fa9 */
  push32(0x10187eceu); f_10187fa9();
  /* 10187ece add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10187ed1 ret  */
  ESPCHK(0x10187ea5u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10187ed2 (17 bytes, 6 insns) */
void f_10187ed2(void) {
  FTRACE(0x10187ed2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10187ed4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10187ed6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10187eda call 0x10187ef2 */
  push32(0x10187edfu); f_10187ef2();
  /* 10187edf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10187ee2 ret  */
  ESPCHK(0x10187ed2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee3 @ 0x10187ee3 (15 bytes, 6 insns) */
void f_10187ee3(void) {
  FTRACE(0x10187ee3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10187ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10187ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10187ee9 call 0x10187ef2 */
  push32(0x10187eeeu); f_10187ef2();
  /* 10187eee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10187ef1 ret  */
  ESPCHK(0x10187ee3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef2 @ 0x10187ef2 (163 bytes, 53 insns) */
void f_10187ef2(void) {
  FTRACE(0x10187ef2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187ef2 push edi */
  push32((uint32_t)(EDI));
  /* 10187ef3 call 0x10187f97 */
  push32(0x10187ef8u); f_10187f97();
  /* 10187ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10187efa pop edi */
  EDI = (pop32());
  /* 10187efb cmp dword ptr [0x101966b8], edi */
  { uint32_t _a=(r32((uint32_t)(0x101966b8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187f01 jne 0x10187f14 */
  if (!C.zf) goto L_10187f14;
  /* 10187f03 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10187f07 call dword ptr [0x1018e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e020))), 0x10187f0du);
  /* 10187f0d push eax */
  push32((uint32_t)(EAX));
  /* 10187f0e call dword ptr [0x1018e01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e01c))), 0x10187f14u);
L_10187f14:;
  /* 10187f14 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187f19 push ebx */
  push32((uint32_t)(EBX));
  /* 10187f1a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10187f1e mov dword ptr [0x101966b4], edi */
  w32((uint32_t)(0x101966b4), (EDI));
  /* 10187f24 mov byte ptr [0x101966b0], bl */
  w8((uint32_t)(0x101966b0), (BL));
  /* 10187f2a jne 0x10187f68 */
  if (!C.zf) goto L_10187f68;
  /* 10187f2c mov eax, dword ptr [0x10197d70] */
  EAX = (r32((uint32_t)(0x10197d70)));
  /* 10187f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10187f33 je 0x10187f57 */
  if (C.zf) goto L_10187f57;
  /* 10187f35 mov ecx, dword ptr [0x10197d6c] */
  ECX = (r32((uint32_t)(0x10197d6c)));
  /* 10187f3b push esi */
  push32((uint32_t)(ESI));
  /* 10187f3c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10187f3f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187f41 jb 0x10187f56 */
  if (C.cf) goto L_10187f56;
L_10187f43:;
  /* 10187f43 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10187f45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10187f47 je 0x10187f4b */
  if (C.zf) goto L_10187f4b;
  /* 10187f49 call eax */
  call_ind((uint32_t)(EAX), 0x10187f4bu);
L_10187f4b:;
  /* 10187f4b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10187f4e cmp esi, dword ptr [0x10197d70] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10197d70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187f54 jae 0x10187f43 */
  if (!C.cf) goto L_10187f43;
L_10187f56:;
  /* 10187f56 pop esi */
  ESI = (pop32());
L_10187f57:;
  /* 10187f57 push 0x1018f020 */
  push32((uint32_t)(0x1018f020u));
  /* 10187f5c push 0x1018f018 */
  push32((uint32_t)(0x1018f018u));
  /* 10187f61 call 0x10187fa9 */
  push32(0x10187f66u); f_10187fa9();
  /* 10187f66 pop ecx */
  ECX = (pop32());
  /* 10187f67 pop ecx */
  ECX = (pop32());
L_10187f68:;
  /* 10187f68 push 0x1018f028 */
  push32((uint32_t)(0x1018f028u));
  /* 10187f6d push 0x1018f024 */
  push32((uint32_t)(0x1018f024u));
  /* 10187f72 call 0x10187fa9 */
  push32(0x10187f77u); f_10187fa9();
  /* 10187f77 pop ecx */
  ECX = (pop32());
  /* 10187f78 pop ecx */
  ECX = (pop32());
  /* 10187f79 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10187f7b pop ebx */
  EBX = (pop32());
  /* 10187f7c je 0x10187f85 */
  if (C.zf) goto L_10187f85;
  /* 10187f7e call 0x10187fa0 */
  push32(0x10187f83u); f_10187fa0();
  /* 10187f83 pop edi */
  EDI = (pop32());
  /* 10187f84 ret  */
  ESPCHK(0x10187ef2u, _esp0);
  ESP += 4; return;
L_10187f85:;
  /* 10187f85 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10187f89 mov dword ptr [0x101966b8], edi */
  w32((uint32_t)(0x101966b8), (EDI));
  /* 10187f8f call dword ptr [0x1018e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e018))), 0x10187f95u);
  /* 10187f95 pop edi */
  EDI = (pop32());
  /* 10187f96 ret  */
  ESPCHK(0x10187ef2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f97 @ 0x10187f97 (9 bytes, 4 insns) */
void f_10187f97(void) {
  FTRACE(0x10187f97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187f97 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10187f99 call 0x1018a013 */
  push32(0x10187f9eu); f_1018a013();
  /* 10187f9e pop ecx */
  ECX = (pop32());
  /* 10187f9f ret  */
  ESPCHK(0x10187f97u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x10187fa0 (9 bytes, 4 insns) */
void f_10187fa0(void) {
  FTRACE(0x10187fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187fa0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10187fa2 call 0x1018a074 */
  push32(0x10187fa7u); f_1018a074();
  /* 10187fa7 pop ecx */
  ECX = (pop32());
  /* 10187fa8 ret  */
  ESPCHK(0x10187fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa9 @ 0x10187fa9 (26 bytes, 12 insns) */
void f_10187fa9(void) {
  FTRACE(0x10187fa9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187fa9 push esi */
  push32((uint32_t)(ESI));
  /* 10187faa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10187fae:;
  /* 10187fae cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187fb2 jae 0x10187fc1 */
  if (!C.cf) goto L_10187fc1;
  /* 10187fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10187fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10187fb8 je 0x10187fbc */
  if (C.zf) goto L_10187fbc;
  /* 10187fba call eax */
  call_ind((uint32_t)(EAX), 0x10187fbcu);
L_10187fbc:;
  /* 10187fbc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10187fbf jmp 0x10187fae */
  goto L_10187fae;
L_10187fc1:;
  /* 10187fc1 pop esi */
  ESI = (pop32());
  /* 10187fc2 ret  */
  ESPCHK(0x10187fa9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fc3 @ 0x10187fc3 (84 bytes, 32 insns) */
void f_10187fc3(void) {
  FTRACE(0x10187fc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10187fc3 push esi */
  push32((uint32_t)(ESI));
  /* 10187fc4 call 0x10189f7e */
  push32(0x10187fc9u); f_10189f7e();
  /* 10187fc9 call dword ptr [0x1018e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e02c))), 0x10187fcfu);
  /* 10187fcf cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10187fd2 mov dword ptr [0x101906b0], eax */
  w32((uint32_t)(0x101906b0), (EAX));
  /* 10187fd7 je 0x10188013 */
  if (C.zf) goto L_10188013;
  /* 10187fd9 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10187fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 10187fdd call 0x1018a089 */
  push32(0x10187fe2u); f_1018a089();
  /* 10187fe2 mov esi, eax */
  ESI = (EAX);
  /* 10187fe4 pop ecx */
  ECX = (pop32());
  /* 10187fe5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10187fe7 pop ecx */
  ECX = (pop32());
  /* 10187fe8 je 0x10188013 */
  if (C.zf) goto L_10188013;
  /* 10187fea push esi */
  push32((uint32_t)(ESI));
  /* 10187feb push dword ptr [0x101906b0] */
  push32((uint32_t)(r32((uint32_t)(0x101906b0))));
  /* 10187ff1 call dword ptr [0x1018e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e028))), 0x10187ff7u);
  /* 10187ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10187ff9 je 0x10188013 */
  if (C.zf) goto L_10188013;
  /* 10187ffb push esi */
  push32((uint32_t)(ESI));
  /* 10187ffc call 0x10188035 */
  push32(0x10188001u); f_10188035();
  /* 10188001 pop ecx */
  ECX = (pop32());
  /* 10188002 call dword ptr [0x1018e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e024))), 0x10188008u);
  /* 10188008 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1018800c push 1 */
  push32((uint32_t)(0x1u));
  /* 1018800e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10188010 pop eax */
  EAX = (pop32());
  /* 10188011 pop esi */
  ESI = (pop32());
  /* 10188012 ret  */
  ESPCHK(0x10187fc3u, _esp0);
  ESP += 4; return;
L_10188013:;
  /* 10188013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10188015 pop esi */
  ESI = (pop32());
  /* 10188016 ret  */
  ESPCHK(0x10187fc3u, _esp0);
  ESP += 4; return;
}

/* FUN_10008017 @ 0x10188017 (30 bytes, 8 insns) */
void f_10188017(void) {
  FTRACE(0x10188017u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188017 call 0x10189fa7 */
  push32(0x1018801cu); f_10189fa7();
  /* 1018801c mov eax, dword ptr [0x101906b0] */
  EAX = (r32((uint32_t)(0x101906b0)));
  /* 10188021 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188024 je 0x10188034 */
  if (C.zf) goto L_10188034;
  /* 10188026 push eax */
  push32((uint32_t)(EAX));
  /* 10188027 call dword ptr [0x1018e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e030))), 0x1018802du);
  /* 1018802d or dword ptr [0x101906b0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x101906b0)))|(0xffffffffu); w32((uint32_t)(0x101906b0), (_r)); fl_logic(_r,32); }
L_10188034:;
  /* 10188034 ret  */
  ESPCHK(0x10188017u, _esp0);
  ESP += 4; return;
}

/* FUN_10008035 @ 0x10188035 (19 bytes, 4 insns) */
void f_10188035(void) {
  FTRACE(0x10188035u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188035 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10188039 mov dword ptr [eax + 0x50], 0x10190d00 */
  w32((uint32_t)(EAX + 0x50), (0x10190d00u));
  /* 10188040 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10188047 ret  */
  ESPCHK(0x10188035u, _esp0);
  ESP += 4; return;
}

/* FUN_10008048 @ 0x10188048 (103 bytes, 38 insns) */
void f_10188048(void) {
  FTRACE(0x10188048u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188048 push esi */
  push32((uint32_t)(ESI));
  /* 10188049 push edi */
  push32((uint32_t)(EDI));
  /* 1018804a call dword ptr [0x1018e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e03c))), 0x10188050u);
  /* 10188050 push dword ptr [0x101906b0] */
  push32((uint32_t)(r32((uint32_t)(0x101906b0))));
  /* 10188056 mov edi, eax */
  EDI = (EAX);
  /* 10188058 call dword ptr [0x1018e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e038))), 0x1018805eu);
  /* 1018805e mov esi, eax */
  ESI = (EAX);
  /* 10188060 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10188062 jne 0x101880a3 */
  if (!C.zf) goto L_101880a3;
  /* 10188064 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10188066 push 1 */
  push32((uint32_t)(0x1u));
  /* 10188068 call 0x1018a089 */
  push32(0x1018806du); f_1018a089();
  /* 1018806d mov esi, eax */
  ESI = (EAX);
  /* 1018806f pop ecx */
  ECX = (pop32());
  /* 10188070 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10188072 pop ecx */
  ECX = (pop32());
  /* 10188073 je 0x1018809b */
  if (C.zf) goto L_1018809b;
  /* 10188075 push esi */
  push32((uint32_t)(ESI));
  /* 10188076 push dword ptr [0x101906b0] */
  push32((uint32_t)(r32((uint32_t)(0x101906b0))));
  /* 1018807c call dword ptr [0x1018e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e028))), 0x10188082u);
  /* 10188082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188084 je 0x1018809b */
  if (C.zf) goto L_1018809b;
  /* 10188086 push esi */
  push32((uint32_t)(ESI));
  /* 10188087 call 0x10188035 */
  push32(0x1018808cu); f_10188035();
  /* 1018808c pop ecx */
  ECX = (pop32());
  /* 1018808d call dword ptr [0x1018e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e024))), 0x10188093u);
  /* 10188093 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10188097 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10188099 jmp 0x101880a3 */
  goto L_101880a3;
L_1018809b:;
  /* 1018809b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1018809d call 0x101870b1 */
  push32(0x101880a2u); f_101870b1();
  /* 101880a2 pop ecx */
  ECX = (pop32());
L_101880a3:;
  /* 101880a3 push edi */
  push32((uint32_t)(EDI));
  /* 101880a4 call dword ptr [0x1018e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e034))), 0x101880aau);
  /* 101880aa mov eax, esi */
  EAX = (ESI);
  /* 101880ac pop edi */
  EDI = (pop32());
  /* 101880ad pop esi */
  ESI = (pop32());
  /* 101880ae ret  */
  ESPCHK(0x10188048u, _esp0);
  ESP += 4; return;
}

/* FUN_100080af @ 0x101880af (160 bytes, 62 insns) */
void f_101880af(void) {
  FTRACE(0x101880afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101880af mov eax, dword ptr [0x101906b0] */
  EAX = (r32((uint32_t)(0x101906b0)));
  /* 101880b4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101880b7 je 0x1018814e */
  if (C.zf) goto L_1018814e;
  /* 101880bd push esi */
  push32((uint32_t)(ESI));
  /* 101880be mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101880c2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101880c4 jne 0x101880d3 */
  if (!C.zf) goto L_101880d3;
  /* 101880c6 push eax */
  push32((uint32_t)(EAX));
  /* 101880c7 call dword ptr [0x1018e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e038))), 0x101880cdu);
  /* 101880cd mov esi, eax */
  ESI = (EAX);
  /* 101880cf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101880d1 je 0x1018813f */
  if (C.zf) goto L_1018813f;
L_101880d3:;
  /* 101880d3 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 101880d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101880d8 je 0x101880e1 */
  if (C.zf) goto L_101880e1;
  /* 101880da push eax */
  push32((uint32_t)(EAX));
  /* 101880db call 0x1018a1c6 */
  push32(0x101880e0u); f_1018a1c6();
  /* 101880e0 pop ecx */
  ECX = (pop32());
L_101880e1:;
  /* 101880e1 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 101880e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101880e6 je 0x101880ef */
  if (C.zf) goto L_101880ef;
  /* 101880e8 push eax */
  push32((uint32_t)(EAX));
  /* 101880e9 call 0x1018a1c6 */
  push32(0x101880eeu); f_1018a1c6();
  /* 101880ee pop ecx */
  ECX = (pop32());
L_101880ef:;
  /* 101880ef mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 101880f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101880f4 je 0x101880fd */
  if (C.zf) goto L_101880fd;
  /* 101880f6 push eax */
  push32((uint32_t)(EAX));
  /* 101880f7 call 0x1018a1c6 */
  push32(0x101880fcu); f_1018a1c6();
  /* 101880fc pop ecx */
  ECX = (pop32());
L_101880fd:;
  /* 101880fd mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10188100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188102 je 0x1018810b */
  if (C.zf) goto L_1018810b;
  /* 10188104 push eax */
  push32((uint32_t)(EAX));
  /* 10188105 call 0x1018a1c6 */
  push32(0x1018810au); f_1018a1c6();
  /* 1018810a pop ecx */
  ECX = (pop32());
L_1018810b:;
  /* 1018810b mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1018810e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188110 je 0x10188119 */
  if (C.zf) goto L_10188119;
  /* 10188112 push eax */
  push32((uint32_t)(EAX));
  /* 10188113 call 0x1018a1c6 */
  push32(0x10188118u); f_1018a1c6();
  /* 10188118 pop ecx */
  ECX = (pop32());
L_10188119:;
  /* 10188119 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 1018811c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018811e je 0x10188127 */
  if (C.zf) goto L_10188127;
  /* 10188120 push eax */
  push32((uint32_t)(EAX));
  /* 10188121 call 0x1018a1c6 */
  push32(0x10188126u); f_1018a1c6();
  /* 10188126 pop ecx */
  ECX = (pop32());
L_10188127:;
  /* 10188127 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1018812a cmp eax, 0x10190d00 */
  { uint32_t _a=(EAX),_b=(0x10190d00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018812f je 0x10188138 */
  if (C.zf) goto L_10188138;
  /* 10188131 push eax */
  push32((uint32_t)(EAX));
  /* 10188132 call 0x1018a1c6 */
  push32(0x10188137u); f_1018a1c6();
  /* 10188137 pop ecx */
  ECX = (pop32());
L_10188138:;
  /* 10188138 push esi */
  push32((uint32_t)(ESI));
  /* 10188139 call 0x1018a1c6 */
  push32(0x1018813eu); f_1018a1c6();
  /* 1018813e pop ecx */
  ECX = (pop32());
L_1018813f:;
  /* 1018813f push 0 */
  push32((uint32_t)(0x0u));
  /* 10188141 push dword ptr [0x101906b0] */
  push32((uint32_t)(r32((uint32_t)(0x101906b0))));
  /* 10188147 call dword ptr [0x1018e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e028))), 0x1018814du);
  /* 1018814d pop esi */
  ESI = (pop32());
L_1018814e:;
  /* 1018814e ret  */
  ESPCHK(0x101880afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000814f @ 0x1018814f (444 bytes, 150 insns) */
void f_1018814f(void) {
  FTRACE(0x1018814fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018814f push ebp */
  push32((uint32_t)(EBP));
  /* 10188150 mov ebp, esp */
  EBP = (ESP);
  /* 10188152 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10188155 push ebx */
  push32((uint32_t)(EBX));
  /* 10188156 push esi */
  push32((uint32_t)(ESI));
  /* 10188157 push edi */
  push32((uint32_t)(EDI));
  /* 10188158 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1018815d call 0x1018a2af */
  push32(0x10188162u); f_1018a2af();
  /* 10188162 mov esi, eax */
  ESI = (EAX);
  /* 10188164 pop ecx */
  ECX = (pop32());
  /* 10188165 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10188167 jne 0x10188171 */
  if (!C.zf) goto L_10188171;
  /* 10188169 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1018816b call 0x101870b1 */
  push32(0x10188170u); f_101870b1();
  /* 10188170 pop ecx */
  ECX = (pop32());
L_10188171:;
  /* 10188171 mov dword ptr [0x10197c60], esi */
  w32((uint32_t)(0x10197c60), (ESI));
  /* 10188177 mov dword ptr [0x10197d60], 0x20 */
  w32((uint32_t)(0x10197d60), (0x20u));
  /* 10188181 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10188187:;
  /* 10188187 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188189 jae 0x101881a9 */
  if (!C.cf) goto L_101881a9;
  /* 1018818b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1018818f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10188192 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10188196 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 1018819a mov eax, dword ptr [0x10197c60] */
  EAX = (r32((uint32_t)(0x10197c60)));
  /* 1018819f add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101881a2 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101881a7 jmp 0x10188187 */
  goto L_10188187;
L_101881a9:;
  /* 101881a9 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101881ac push eax */
  push32((uint32_t)(EAX));
  /* 101881ad call dword ptr [0x1018e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e04c))), 0x101881b3u);
  /* 101881b3 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101881b8 je 0x1018828f */
  if (C.zf) goto L_1018828f;
  /* 101881be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 101881c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101881c3 je 0x1018828f */
  if (C.zf) goto L_1018828f;
  /* 101881c9 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 101881cb lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 101881ce lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 101881d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101881d4 mov eax, 0x800 */
  EAX = (0x800u);
  /* 101881d9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101881db jl 0x101881df */
  if ((C.sf!=C.of)) goto L_101881df;
  /* 101881dd mov edi, eax */
  EDI = (EAX);
L_101881df:;
  /* 101881df cmp dword ptr [0x10197d60], edi */
  { uint32_t _a=(r32((uint32_t)(0x10197d60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101881e5 jge 0x1018823d */
  if ((C.sf==C.of)) goto L_1018823d;
  /* 101881e7 mov esi, 0x10197c64 */
  ESI = (0x10197c64u);
L_101881ec:;
  /* 101881ec push 0x480 */
  push32((uint32_t)(0x480u));
  /* 101881f1 call 0x1018a2af */
  push32(0x101881f6u); f_1018a2af();
  /* 101881f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101881f8 pop ecx */
  ECX = (pop32());
  /* 101881f9 je 0x10188237 */
  if (C.zf) goto L_10188237;
  /* 101881fb add dword ptr [0x10197d60], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10197d60))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10197d60), (_r)); fl_add(_a,_b,_r,32); }
  /* 10188202 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10188204 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_1018820a:;
  /* 1018820a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018820c jae 0x1018822a */
  if (!C.cf) goto L_1018822a;
  /* 1018820e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10188212 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10188215 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10188219 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1018821d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1018821f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10188222 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10188228 jmp 0x1018820a */
  goto L_1018820a;
L_1018822a:;
  /* 1018822a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018822d cmp dword ptr [0x10197d60], edi */
  { uint32_t _a=(r32((uint32_t)(0x10197d60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188233 jl 0x101881ec */
  if ((C.sf!=C.of)) goto L_101881ec;
  /* 10188235 jmp 0x1018823d */
  goto L_1018823d;
L_10188237:;
  /* 10188237 mov edi, dword ptr [0x10197d60] */
  EDI = (r32((uint32_t)(0x10197d60)));
L_1018823d:;
  /* 1018823d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1018823f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10188241 jle 0x1018828f */
  if ((C.zf||C.sf!=C.of)) goto L_1018828f;
L_10188243:;
  /* 10188243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10188246 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10188248 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018824b je 0x10188285 */
  if (C.zf) goto L_10188285;
  /* 1018824d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1018824f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10188251 je 0x10188285 */
  if (C.zf) goto L_10188285;
  /* 10188253 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10188255 jne 0x10188262 */
  if (!C.zf) goto L_10188262;
  /* 10188257 push ecx */
  push32((uint32_t)(ECX));
  /* 10188258 call dword ptr [0x1018e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e048))), 0x1018825eu);
  /* 1018825e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188260 je 0x10188285 */
  if (C.zf) goto L_10188285;
L_10188262:;
  /* 10188262 mov ecx, esi */
  ECX = (ESI);
  /* 10188264 mov eax, esi */
  EAX = (ESI);
  /* 10188266 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10188269 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1018826c mov ecx, dword ptr [ecx*4 + 0x10197c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10197c60)));
  /* 10188273 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10188276 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10188279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018827c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1018827e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10188280 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10188282 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10188285:;
  /* 10188285 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10188289 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018828a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1018828b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018828d jl 0x10188243 */
  if ((C.sf!=C.of)) goto L_10188243;
L_1018828f:;
  /* 1018828f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10188291:;
  /* 10188291 mov ecx, dword ptr [0x10197c60] */
  ECX = (r32((uint32_t)(0x10197c60)));
  /* 10188297 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 1018829a cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018829e lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 101882a1 jne 0x101882f0 */
  if (!C.zf) goto L_101882f0;
  /* 101882a3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101882a5 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 101882a9 jne 0x101882b0 */
  if (!C.zf) goto L_101882b0;
  /* 101882ab push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 101882ad pop eax */
  EAX = (pop32());
  /* 101882ae jmp 0x101882ba */
  goto L_101882ba;
L_101882b0:;
  /* 101882b0 mov eax, ebx */
  EAX = (EBX);
  /* 101882b2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101882b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101882b5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101882b7 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101882ba:;
  /* 101882ba push eax */
  push32((uint32_t)(EAX));
  /* 101882bb call dword ptr [0x1018e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e044))), 0x101882c1u);
  /* 101882c1 mov edi, eax */
  EDI = (EAX);
  /* 101882c3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101882c6 je 0x101882df */
  if (C.zf) goto L_101882df;
  /* 101882c8 push edi */
  push32((uint32_t)(EDI));
  /* 101882c9 call dword ptr [0x1018e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e048))), 0x101882cfu);
  /* 101882cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101882d1 je 0x101882df */
  if (C.zf) goto L_101882df;
  /* 101882d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101882d8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101882da cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101882dd jne 0x101882e5 */
  if (!C.zf) goto L_101882e5;
L_101882df:;
  /* 101882df or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101882e3 jmp 0x101882f4 */
  goto L_101882f4;
L_101882e5:;
  /* 101882e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101882e8 jne 0x101882f4 */
  if (!C.zf) goto L_101882f4;
  /* 101882ea or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101882ee jmp 0x101882f4 */
  goto L_101882f4;
L_101882f0:;
  /* 101882f0 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_101882f4:;
  /* 101882f4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101882f5 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101882f8 jl 0x10188291 */
  if ((C.sf!=C.of)) goto L_10188291;
  /* 101882fa push dword ptr [0x10197d60] */
  push32((uint32_t)(r32((uint32_t)(0x10197d60))));
  /* 10188300 call dword ptr [0x1018e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e040))), 0x10188306u);
  /* 10188306 pop edi */
  EDI = (pop32());
  /* 10188307 pop esi */
  ESI = (pop32());
  /* 10188308 pop ebx */
  EBX = (pop32());
  /* 10188309 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018830a ret  */
  ESPCHK(0x1018814fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000830b @ 0x1018830b (84 bytes, 33 insns) */
void f_1018830b(void) {
  FTRACE(0x1018830bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018830b push ebx */
  push32((uint32_t)(EBX));
  /* 1018830c push esi */
  push32((uint32_t)(ESI));
  /* 1018830d push edi */
  push32((uint32_t)(EDI));
  /* 1018830e mov esi, 0x10197c60 */
  ESI = (0x10197c60u);
L_10188313:;
  /* 10188313 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10188315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188317 je 0x10188350 */
  if (C.zf) goto L_10188350;
  /* 10188319 mov edi, eax */
  EDI = (EAX);
  /* 1018831b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10188320 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188322 jae 0x10188345 */
  if (!C.cf) goto L_10188345;
  /* 10188324 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10188327:;
  /* 10188327 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018832b je 0x10188334 */
  if (C.zf) goto L_10188334;
  /* 1018832d push ebx */
  push32((uint32_t)(EBX));
  /* 1018832e call dword ptr [0x1018e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e050))), 0x10188334u);
L_10188334:;
  /* 10188334 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10188336 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10188339 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018833e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10188341 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188343 jb 0x10188327 */
  if (C.cf) goto L_10188327;
L_10188345:;
  /* 10188345 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10188347 call 0x1018a1c6 */
  push32(0x1018834cu); f_1018a1c6();
  /* 1018834c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1018834f pop ecx */
  ECX = (pop32());
L_10188350:;
  /* 10188350 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10188353 cmp esi, 0x10197d60 */
  { uint32_t _a=(ESI),_b=(0x10197d60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188359 jl 0x10188313 */
  if ((C.sf!=C.of)) goto L_10188313;
  /* 1018835b pop edi */
  EDI = (pop32());
  /* 1018835c pop esi */
  ESI = (pop32());
  /* 1018835d pop ebx */
  EBX = (pop32());
  /* 1018835e ret  */
  ESPCHK(0x1018830bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000835f @ 0x1018835f (185 bytes, 71 insns) */
void f_1018835f(void) {
  FTRACE(0x1018835fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018835f push ebx */
  push32((uint32_t)(EBX));
  /* 10188360 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10188362 cmp dword ptr [0x10197d68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10197d68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188368 push esi */
  push32((uint32_t)(ESI));
  /* 10188369 push edi */
  push32((uint32_t)(EDI));
  /* 1018836a jne 0x10188371 */
  if (!C.zf) goto L_10188371;
  /* 1018836c call 0x1018a7c1 */
  push32(0x10188371u); f_1018a7c1();
L_10188371:;
  /* 10188371 mov esi, dword ptr [0x10196668] */
  ESI = (r32((uint32_t)(0x10196668)));
  /* 10188377 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10188379:;
  /* 10188379 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018837b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018837d je 0x10188391 */
  if (C.zf) goto L_10188391;
  /* 1018837f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188381 je 0x10188384 */
  if (C.zf) goto L_10188384;
  /* 10188383 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10188384:;
  /* 10188384 push esi */
  push32((uint32_t)(ESI));
  /* 10188385 call 0x10189040 */
  push32(0x1018838au); f_10189040();
  /* 1018838a pop ecx */
  ECX = (pop32());
  /* 1018838b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1018838f jmp 0x10188379 */
  goto L_10188379;
L_10188391:;
  /* 10188391 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10188398 push eax */
  push32((uint32_t)(EAX));
  /* 10188399 call 0x1018a2af */
  push32(0x1018839eu); f_1018a2af();
  /* 1018839e mov esi, eax */
  ESI = (EAX);
  /* 101883a0 pop ecx */
  ECX = (pop32());
  /* 101883a1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101883a3 mov dword ptr [0x10196698], esi */
  w32((uint32_t)(0x10196698), (ESI));
  /* 101883a9 jne 0x101883b3 */
  if (!C.zf) goto L_101883b3;
  /* 101883ab push 9 */
  push32((uint32_t)(0x9u));
  /* 101883ad call 0x101870b1 */
  push32(0x101883b2u); f_101870b1();
  /* 101883b2 pop ecx */
  ECX = (pop32());
L_101883b3:;
  /* 101883b3 mov edi, dword ptr [0x10196668] */
  EDI = (r32((uint32_t)(0x10196668)));
  /* 101883b9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101883bb je 0x101883f6 */
  if (C.zf) goto L_101883f6;
  /* 101883bd push ebp */
  push32((uint32_t)(EBP));
L_101883be:;
  /* 101883be push edi */
  push32((uint32_t)(EDI));
  /* 101883bf call 0x10189040 */
  push32(0x101883c4u); f_10189040();
  /* 101883c4 mov ebp, eax */
  EBP = (EAX);
  /* 101883c6 pop ecx */
  ECX = (pop32());
  /* 101883c7 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 101883c8 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101883cb je 0x101883ef */
  if (C.zf) goto L_101883ef;
  /* 101883cd push ebp */
  push32((uint32_t)(EBP));
  /* 101883ce call 0x1018a2af */
  push32(0x101883d3u); f_1018a2af();
  /* 101883d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101883d5 pop ecx */
  ECX = (pop32());
  /* 101883d6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101883d8 jne 0x101883e2 */
  if (!C.zf) goto L_101883e2;
  /* 101883da push 9 */
  push32((uint32_t)(0x9u));
  /* 101883dc call 0x101870b1 */
  push32(0x101883e1u); f_101870b1();
  /* 101883e1 pop ecx */
  ECX = (pop32());
L_101883e2:;
  /* 101883e2 push edi */
  push32((uint32_t)(EDI));
  /* 101883e3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101883e5 call 0x10189af0 */
  push32(0x101883eau); f_10189af0();
  /* 101883ea pop ecx */
  ECX = (pop32());
  /* 101883eb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101883ee pop ecx */
  ECX = (pop32());
L_101883ef:;
  /* 101883ef add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101883f1 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101883f3 jne 0x101883be */
  if (!C.zf) goto L_101883be;
  /* 101883f5 pop ebp */
  EBP = (pop32());
L_101883f6:;
  /* 101883f6 push dword ptr [0x10196668] */
  push32((uint32_t)(r32((uint32_t)(0x10196668))));
  /* 101883fc call 0x1018a1c6 */
  push32(0x10188401u); f_1018a1c6();
  /* 10188401 pop ecx */
  ECX = (pop32());
  /* 10188402 mov dword ptr [0x10196668], ebx */
  w32((uint32_t)(0x10196668), (EBX));
  /* 10188408 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 1018840a pop edi */
  EDI = (pop32());
  /* 1018840b pop esi */
  ESI = (pop32());
  /* 1018840c mov dword ptr [0x10197d64], 1 */
  w32((uint32_t)(0x10197d64), (0x1u));
  /* 10188416 pop ebx */
  EBX = (pop32());
  /* 10188417 ret  */
  ESPCHK(0x1018835fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008418 @ 0x10188418 (153 bytes, 62 insns) */
void f_10188418(void) {
  FTRACE(0x10188418u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188418 push ebp */
  push32((uint32_t)(EBP));
  /* 10188419 mov ebp, esp */
  EBP = (ESP);
  /* 1018841b push ecx */
  push32((uint32_t)(ECX));
  /* 1018841c push ecx */
  push32((uint32_t)(ECX));
  /* 1018841d push ebx */
  push32((uint32_t)(EBX));
  /* 1018841e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10188420 cmp dword ptr [0x10197d68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10197d68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188426 push esi */
  push32((uint32_t)(ESI));
  /* 10188427 push edi */
  push32((uint32_t)(EDI));
  /* 10188428 jne 0x1018842f */
  if (!C.zf) goto L_1018842f;
  /* 1018842a call 0x1018a7c1 */
  push32(0x1018842fu); f_1018a7c1();
L_1018842f:;
  /* 1018842f mov esi, 0x101966bc */
  ESI = (0x101966bcu);
  /* 10188434 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10188439 push esi */
  push32((uint32_t)(ESI));
  /* 1018843a push ebx */
  push32((uint32_t)(EBX));
  /* 1018843b call dword ptr [0x1018e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e054))), 0x10188441u);
  /* 10188441 mov eax, dword ptr [0x10197d74] */
  EAX = (r32((uint32_t)(0x10197d74)));
  /* 10188446 mov dword ptr [0x101966a8], esi */
  w32((uint32_t)(0x101966a8), (ESI));
  /* 1018844c mov edi, esi */
  EDI = (ESI);
  /* 1018844e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188450 je 0x10188454 */
  if (C.zf) goto L_10188454;
  /* 10188452 mov edi, eax */
  EDI = (EAX);
L_10188454:;
  /* 10188454 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10188457 push eax */
  push32((uint32_t)(EAX));
  /* 10188458 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1018845b push eax */
  push32((uint32_t)(EAX));
  /* 1018845c push ebx */
  push32((uint32_t)(EBX));
  /* 1018845d push ebx */
  push32((uint32_t)(EBX));
  /* 1018845e push edi */
  push32((uint32_t)(EDI));
  /* 1018845f call 0x101884b1 */
  push32(0x10188464u); f_101884b1();
  /* 10188464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10188467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018846a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1018846d push eax */
  push32((uint32_t)(EAX));
  /* 1018846e call 0x1018a2af */
  push32(0x10188473u); f_1018a2af();
  /* 10188473 mov esi, eax */
  ESI = (EAX);
  /* 10188475 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10188478 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018847a jne 0x10188484 */
  if (!C.zf) goto L_10188484;
  /* 1018847c push 8 */
  push32((uint32_t)(0x8u));
  /* 1018847e call 0x101870b1 */
  push32(0x10188483u); f_101870b1();
  /* 10188483 pop ecx */
  ECX = (pop32());
L_10188484:;
  /* 10188484 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10188487 push eax */
  push32((uint32_t)(EAX));
  /* 10188488 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1018848b push eax */
  push32((uint32_t)(EAX));
  /* 1018848c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018848f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10188492 push eax */
  push32((uint32_t)(EAX));
  /* 10188493 push esi */
  push32((uint32_t)(ESI));
  /* 10188494 push edi */
  push32((uint32_t)(EDI));
  /* 10188495 call 0x101884b1 */
  push32(0x1018849au); f_101884b1();
  /* 1018849a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018849d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101884a0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101884a1 mov dword ptr [0x10196690], esi */
  w32((uint32_t)(0x10196690), (ESI));
  /* 101884a7 pop edi */
  EDI = (pop32());
  /* 101884a8 pop esi */
  ESI = (pop32());
  /* 101884a9 mov dword ptr [0x1019668c], eax */
  w32((uint32_t)(0x1019668c), (EAX));
  /* 101884ae pop ebx */
  EBX = (pop32());
  /* 101884af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101884b0 ret  */
  ESPCHK(0x10188418u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b1 @ 0x101884b1 (436 bytes, 187 insns) */
void f_101884b1(void) {
  FTRACE(0x101884b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101884b1 push ebp */
  push32((uint32_t)(EBP));
  /* 101884b2 mov ebp, esp */
  EBP = (ESP);
  /* 101884b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 101884b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101884ba push ebx */
  push32((uint32_t)(EBX));
  /* 101884bb push esi */
  push32((uint32_t)(ESI));
  /* 101884bc and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101884bf mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101884c2 push edi */
  push32((uint32_t)(EDI));
  /* 101884c3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101884c6 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 101884cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101884cf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101884d1 je 0x101884db */
  if (C.zf) goto L_101884db;
  /* 101884d3 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 101884d5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101884d8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101884db:;
  /* 101884db cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101884de jne 0x10188524 */
  if (!C.zf) goto L_10188524;
L_101884e0:;
  /* 101884e0 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 101884e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101884e4 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101884e7 je 0x10188512 */
  if (C.zf) goto L_10188512;
  /* 101884e9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101884eb je 0x10188512 */
  if (C.zf) goto L_10188512;
  /* 101884ed movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 101884f0 test byte ptr [edx + 0x10196b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10196b21)))&(0x4u); fl_logic(_r,8); }
  /* 101884f7 je 0x10188505 */
  if (C.zf) goto L_10188505;
  /* 101884f9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101884fb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101884fd je 0x10188505 */
  if (C.zf) goto L_10188505;
  /* 101884ff mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10188501 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10188503 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10188504 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10188505:;
  /* 10188505 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10188507 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10188509 je 0x101884e0 */
  if (C.zf) goto L_101884e0;
  /* 1018850b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1018850d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1018850f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10188510 jmp 0x101884e0 */
  goto L_101884e0;
L_10188512:;
  /* 10188512 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10188514 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10188516 je 0x1018851c */
  if (C.zf) goto L_1018851c;
  /* 10188518 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1018851b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1018851c:;
  /* 1018851c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018851f jne 0x10188567 */
  if (!C.zf) goto L_10188567;
  /* 10188521 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10188522 jmp 0x10188567 */
  goto L_10188567;
L_10188524:;
  /* 10188524 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10188526 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10188528 je 0x1018852f */
  if (C.zf) goto L_1018852f;
  /* 1018852a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1018852c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1018852e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1018852f:;
  /* 1018852f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10188531 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10188532 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10188535 test byte ptr [ebx + 0x10196b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10196b21)))&(0x4u); fl_logic(_r,8); }
  /* 1018853c je 0x1018854a */
  if (C.zf) goto L_1018854a;
  /* 1018853e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10188540 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10188542 je 0x10188549 */
  if (C.zf) goto L_10188549;
  /* 10188544 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10188546 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10188548 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10188549:;
  /* 10188549 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1018854a:;
  /* 1018854a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018854d je 0x10188558 */
  if (C.zf) goto L_10188558;
  /* 1018854f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10188551 je 0x1018855c */
  if (C.zf) goto L_1018855c;
  /* 10188553 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188556 jne 0x10188524 */
  if (!C.zf) goto L_10188524;
L_10188558:;
  /* 10188558 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1018855a jne 0x1018855f */
  if (!C.zf) goto L_1018855f;
L_1018855c:;
  /* 1018855c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018855d jmp 0x10188567 */
  goto L_10188567;
L_1018855f:;
  /* 1018855f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10188561 je 0x10188567 */
  if (C.zf) goto L_10188567;
  /* 10188563 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10188567:;
  /* 10188567 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_1018856b:;
  /* 1018856b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018856e je 0x10188654 */
  if (C.zf) goto L_10188654;
L_10188574:;
  /* 10188574 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10188576 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188579 je 0x10188580 */
  if (C.zf) goto L_10188580;
  /* 1018857b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018857e jne 0x10188583 */
  if (!C.zf) goto L_10188583;
L_10188580:;
  /* 10188580 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10188581 jmp 0x10188574 */
  goto L_10188574;
L_10188583:;
  /* 10188583 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188586 je 0x10188654 */
  if (C.zf) goto L_10188654;
  /* 1018858c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1018858e je 0x10188598 */
  if (C.zf) goto L_10188598;
  /* 10188590 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10188592 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10188595 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10188598:;
  /* 10188598 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1018859b inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1018859d:;
  /* 1018859d mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 101885a4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101885a6:;
  /* 101885a6 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101885a9 jne 0x101885af */
  if (!C.zf) goto L_101885af;
  /* 101885ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101885ac inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101885ad jmp 0x101885a6 */
  goto L_101885a6;
L_101885af:;
  /* 101885af cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101885b2 jne 0x101885e0 */
  if (!C.zf) goto L_101885e0;
  /* 101885b4 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101885b7 jne 0x101885de */
  if (!C.zf) goto L_101885de;
  /* 101885b9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101885bb cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101885be je 0x101885cd */
  if (C.zf) goto L_101885cd;
  /* 101885c0 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101885c4 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 101885c7 jne 0x101885cd */
  if (!C.zf) goto L_101885cd;
  /* 101885c9 mov eax, edx */
  EAX = (EDX);
  /* 101885cb jmp 0x101885d0 */
  goto L_101885d0;
L_101885cd:;
  /* 101885cd mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_101885d0:;
  /* 101885d0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101885d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101885d5 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101885d8 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 101885db mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_101885de:;
  /* 101885de shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_101885e0:;
  /* 101885e0 mov edx, ebx */
  EDX = (EBX);
  /* 101885e2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101885e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101885e5 je 0x101885f5 */
  if (C.zf) goto L_101885f5;
  /* 101885e7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_101885e8:;
  /* 101885e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101885ea je 0x101885f0 */
  if (C.zf) goto L_101885f0;
  /* 101885ec mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 101885ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101885f0:;
  /* 101885f0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101885f2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101885f3 jne 0x101885e8 */
  if (!C.zf) goto L_101885e8;
L_101885f5:;
  /* 101885f5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101885f7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101885f9 je 0x10188645 */
  if (C.zf) goto L_10188645;
  /* 101885fb cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101885ff jne 0x1018860b */
  if (!C.zf) goto L_1018860b;
  /* 10188601 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188604 je 0x10188645 */
  if (C.zf) goto L_10188645;
  /* 10188606 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188609 je 0x10188645 */
  if (C.zf) goto L_10188645;
L_1018860b:;
  /* 1018860b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018860f je 0x1018863f */
  if (C.zf) goto L_1018863f;
  /* 10188611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10188613 je 0x1018862e */
  if (C.zf) goto L_1018862e;
  /* 10188615 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10188618 test byte ptr [ebx + 0x10196b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10196b21)))&(0x4u); fl_logic(_r,8); }
  /* 1018861f je 0x10188627 */
  if (C.zf) goto L_10188627;
  /* 10188621 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10188623 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10188624 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10188625 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10188627:;
  /* 10188627 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10188629 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1018862b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018862c jmp 0x1018863d */
  goto L_1018863d;
L_1018862e:;
  /* 1018862e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10188631 test byte ptr [edx + 0x10196b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10196b21)))&(0x4u); fl_logic(_r,8); }
  /* 10188638 je 0x1018863d */
  if (C.zf) goto L_1018863d;
  /* 1018863a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018863b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1018863d:;
  /* 1018863d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1018863f:;
  /* 1018863f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10188640 jmp 0x1018859d */
  goto L_1018859d;
L_10188645:;
  /* 10188645 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10188647 je 0x1018864d */
  if (C.zf) goto L_1018864d;
  /* 10188649 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1018864c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1018864d:;
  /* 1018864d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1018864f jmp 0x1018856b */
  goto L_1018856b;
L_10188654:;
  /* 10188654 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10188656 je 0x1018865b */
  if (C.zf) goto L_1018865b;
  /* 10188658 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1018865b:;
  /* 1018865b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1018865e pop edi */
  EDI = (pop32());
  /* 1018865f pop esi */
  ESI = (pop32());
  /* 10188660 pop ebx */
  EBX = (pop32());
  /* 10188661 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10188663 pop ebp */
  EBP = (pop32());
  /* 10188664 ret  */
  ESPCHK(0x101884b1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008665 @ 0x10188665 (306 bytes, 132 insns) */
void f_10188665(void) {
  FTRACE(0x10188665u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188665 push ecx */
  push32((uint32_t)(ECX));
  /* 10188666 push ecx */
  push32((uint32_t)(ECX));
  /* 10188667 mov eax, dword ptr [0x101967c0] */
  EAX = (r32((uint32_t)(0x101967c0)));
  /* 1018866c push ebx */
  push32((uint32_t)(EBX));
  /* 1018866d push ebp */
  push32((uint32_t)(EBP));
  /* 1018866e mov ebp, dword ptr [0x1018e068] */
  EBP = (r32((uint32_t)(0x1018e068)));
  /* 10188674 push esi */
  push32((uint32_t)(ESI));
  /* 10188675 push edi */
  push32((uint32_t)(EDI));
  /* 10188676 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10188678 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1018867a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1018867c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018867e jne 0x101886b3 */
  if (!C.zf) goto L_101886b3;
  /* 10188680 call ebp */
  call_ind((uint32_t)(EBP), 0x10188682u);
  /* 10188682 mov esi, eax */
  ESI = (EAX);
  /* 10188684 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188686 je 0x10188694 */
  if (C.zf) goto L_10188694;
  /* 10188688 mov dword ptr [0x101967c0], 1 */
  w32((uint32_t)(0x101967c0), (0x1u));
  /* 10188692 jmp 0x101886bc */
  goto L_101886bc;
L_10188694:;
  /* 10188694 call dword ptr [0x1018e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e064))), 0x1018869au);
  /* 1018869a mov edi, eax */
  EDI = (EAX);
  /* 1018869c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018869e je 0x1018878e */
  if (C.zf) goto L_1018878e;
  /* 101886a4 mov dword ptr [0x101967c0], 2 */
  w32((uint32_t)(0x101967c0), (0x2u));
  /* 101886ae jmp 0x10188742 */
  goto L_10188742;
L_101886b3:;
  /* 101886b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101886b6 jne 0x1018873d */
  if (!C.zf) goto L_1018873d;
L_101886bc:;
  /* 101886bc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101886be jne 0x101886cc */
  if (!C.zf) goto L_101886cc;
  /* 101886c0 call ebp */
  call_ind((uint32_t)(EBP), 0x101886c2u);
  /* 101886c2 mov esi, eax */
  ESI = (EAX);
  /* 101886c4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101886c6 je 0x1018878e */
  if (C.zf) goto L_1018878e;
L_101886cc:;
  /* 101886cc cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101886cf mov eax, esi */
  EAX = (ESI);
  /* 101886d1 je 0x101886e1 */
  if (C.zf) goto L_101886e1;
L_101886d3:;
  /* 101886d3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101886d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101886d5 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101886d8 jne 0x101886d3 */
  if (!C.zf) goto L_101886d3;
  /* 101886da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101886db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101886dc cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101886df jne 0x101886d3 */
  if (!C.zf) goto L_101886d3;
L_101886e1:;
  /* 101886e1 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101886e3 mov edi, dword ptr [0x1018e060] */
  EDI = (r32((uint32_t)(0x1018e060)));
  /* 101886e9 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101886eb push ebx */
  push32((uint32_t)(EBX));
  /* 101886ec push ebx */
  push32((uint32_t)(EBX));
  /* 101886ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101886ee push ebx */
  push32((uint32_t)(EBX));
  /* 101886ef push ebx */
  push32((uint32_t)(EBX));
  /* 101886f0 push eax */
  push32((uint32_t)(EAX));
  /* 101886f1 push esi */
  push32((uint32_t)(ESI));
  /* 101886f2 push ebx */
  push32((uint32_t)(EBX));
  /* 101886f3 push ebx */
  push32((uint32_t)(EBX));
  /* 101886f4 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 101886f8 call edi */
  call_ind((uint32_t)(EDI), 0x101886fau);
  /* 101886fa mov ebp, eax */
  EBP = (EAX);
  /* 101886fc cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101886fe je 0x10188732 */
  if (C.zf) goto L_10188732;
  /* 10188700 push ebp */
  push32((uint32_t)(EBP));
  /* 10188701 call 0x1018a2af */
  push32(0x10188706u); f_1018a2af();
  /* 10188706 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188708 pop ecx */
  ECX = (pop32());
  /* 10188709 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1018870d je 0x10188732 */
  if (C.zf) goto L_10188732;
  /* 1018870f push ebx */
  push32((uint32_t)(EBX));
  /* 10188710 push ebx */
  push32((uint32_t)(EBX));
  /* 10188711 push ebp */
  push32((uint32_t)(EBP));
  /* 10188712 push eax */
  push32((uint32_t)(EAX));
  /* 10188713 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10188717 push esi */
  push32((uint32_t)(ESI));
  /* 10188718 push ebx */
  push32((uint32_t)(EBX));
  /* 10188719 push ebx */
  push32((uint32_t)(EBX));
  /* 1018871a call edi */
  call_ind((uint32_t)(EDI), 0x1018871cu);
  /* 1018871c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018871e jne 0x1018872e */
  if (!C.zf) goto L_1018872e;
  /* 10188720 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10188724 call 0x1018a1c6 */
  push32(0x10188729u); f_1018a1c6();
  /* 10188729 pop ecx */
  ECX = (pop32());
  /* 1018872a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1018872e:;
  /* 1018872e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10188732:;
  /* 10188732 push esi */
  push32((uint32_t)(ESI));
  /* 10188733 call dword ptr [0x1018e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e05c))), 0x10188739u);
  /* 10188739 mov eax, ebx */
  EAX = (EBX);
  /* 1018873b jmp 0x10188790 */
  goto L_10188790;
L_1018873d:;
  /* 1018873d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188740 jne 0x1018878e */
  if (!C.zf) goto L_1018878e;
L_10188742:;
  /* 10188742 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188744 jne 0x10188752 */
  if (!C.zf) goto L_10188752;
  /* 10188746 call dword ptr [0x1018e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e064))), 0x1018874cu);
  /* 1018874c mov edi, eax */
  EDI = (EAX);
  /* 1018874e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188750 je 0x1018878e */
  if (C.zf) goto L_1018878e;
L_10188752:;
  /* 10188752 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188754 mov eax, edi */
  EAX = (EDI);
  /* 10188756 je 0x10188762 */
  if (C.zf) goto L_10188762;
L_10188758:;
  /* 10188758 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10188759 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018875b jne 0x10188758 */
  if (!C.zf) goto L_10188758;
  /* 1018875d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018875e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188760 jne 0x10188758 */
  if (!C.zf) goto L_10188758;
L_10188762:;
  /* 10188762 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10188764 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10188765 mov ebp, eax */
  EBP = (EAX);
  /* 10188767 push ebp */
  push32((uint32_t)(EBP));
  /* 10188768 call 0x1018a2af */
  push32(0x1018876du); f_1018a2af();
  /* 1018876d mov esi, eax */
  ESI = (EAX);
  /* 1018876f pop ecx */
  ECX = (pop32());
  /* 10188770 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188772 jne 0x10188778 */
  if (!C.zf) goto L_10188778;
  /* 10188774 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10188776 jmp 0x10188783 */
  goto L_10188783;
L_10188778:;
  /* 10188778 push ebp */
  push32((uint32_t)(EBP));
  /* 10188779 push edi */
  push32((uint32_t)(EDI));
  /* 1018877a push esi */
  push32((uint32_t)(ESI));
  /* 1018877b call 0x1018a7e0 */
  push32(0x10188780u); f_1018a7e0();
  /* 10188780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10188783:;
  /* 10188783 push edi */
  push32((uint32_t)(EDI));
  /* 10188784 call dword ptr [0x1018e058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e058))), 0x1018878au);
  /* 1018878a mov eax, esi */
  EAX = (ESI);
  /* 1018878c jmp 0x10188790 */
  goto L_10188790;
L_1018878e:;
  /* 1018878e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10188790:;
  /* 10188790 pop edi */
  EDI = (pop32());
  /* 10188791 pop esi */
  ESI = (pop32());
  /* 10188792 pop ebp */
  EBP = (pop32());
  /* 10188793 pop ebx */
  EBX = (pop32());
  /* 10188794 pop ecx */
  ECX = (pop32());
  /* 10188795 pop ecx */
  ECX = (pop32());
  /* 10188796 ret  */
  ESPCHK(0x10188665u, _esp0);
  ESP += 4; return;
}

/* FUN_10008797 @ 0x10188797 (45 bytes, 17 insns) */
void f_10188797(void) {
  FTRACE(0x10188797u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188797 push esi */
  push32((uint32_t)(ESI));
  /* 10188798 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1018879c push 0 */
  push32((uint32_t)(0x0u));
  /* 1018879e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101887a1 call dword ptr [0x1018e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e004))), 0x101887a7u);
  /* 101887a7 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101887ac jne 0x101887c2 */
  if (!C.zf) goto L_101887c2;
  /* 101887ae mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 101887b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101887b3 je 0x101887c2 */
  if (C.zf) goto L_101887c2;
  /* 101887b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101887b7 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 101887ba mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 101887bc mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 101887bf mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_101887c2:;
  /* 101887c2 pop esi */
  ESI = (pop32());
  /* 101887c3 ret  */
  ESPCHK(0x10188797u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c4 @ 0x101887c4 (328 bytes, 115 insns) */
void f_101887c4(void) {
  FTRACE(0x101887c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101887c4 push ebp */
  push32((uint32_t)(EBP));
  /* 101887c5 mov ebp, esp */
  EBP = (ESP);
  /* 101887c7 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 101887cc call 0x1018aed0 */
  push32(0x101887d1u); f_1018aed0();
  /* 101887d1 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 101887d7 push ebx */
  push32((uint32_t)(EBX));
  /* 101887d8 push eax */
  push32((uint32_t)(EAX));
  /* 101887d9 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 101887e3 call dword ptr [0x1018e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e070))), 0x101887e9u);
  /* 101887e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101887eb je 0x10188807 */
  if (C.zf) goto L_10188807;
  /* 101887ed cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101887f4 jne 0x10188807 */
  if (!C.zf) goto L_10188807;
  /* 101887f6 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101887fd jb 0x10188807 */
  if (C.cf) goto L_10188807;
  /* 101887ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10188801 pop eax */
  EAX = (pop32());
  /* 10188802 jmp 0x10188909 */
  goto L_10188909;
L_10188807:;
  /* 10188807 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1018880d push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 10188812 push eax */
  push32((uint32_t)(EAX));
  /* 10188813 push 0x1018e1c8 */
  push32((uint32_t)(0x1018e1c8u));
  /* 10188818 call dword ptr [0x1018e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e06c))), 0x1018881eu);
  /* 1018881e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188820 je 0x101888f6 */
  if (C.zf) goto L_101888f6;
  /* 10188826 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10188828 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 1018882e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188834 je 0x10188849 */
  if (C.zf) goto L_10188849;
L_10188836:;
  /* 10188836 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10188838 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018883a jl 0x10188844 */
  if ((C.sf!=C.of)) goto L_10188844;
  /* 1018883c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018883e jg 0x10188844 */
  if ((!C.zf&&C.sf==C.of)) goto L_10188844;
  /* 10188840 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10188842 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_10188844:;
  /* 10188844 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10188845 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188847 jne 0x10188836 */
  if (!C.zf) goto L_10188836;
L_10188849:;
  /* 10188849 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1018884f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10188851 push eax */
  push32((uint32_t)(EAX));
  /* 10188852 push 0x1018e1b0 */
  push32((uint32_t)(0x1018e1b0u));
  /* 10188857 call 0x1018ae90 */
  push32(0x1018885cu); f_1018ae90();
  /* 1018885c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018885f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188861 jne 0x1018886b */
  if (!C.zf) goto L_1018886b;
  /* 10188863 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 10188869 jmp 0x101888b4 */
  goto L_101888b4;
L_1018886b:;
  /* 1018886b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10188871 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10188876 push eax */
  push32((uint32_t)(EAX));
  /* 10188877 push ebx */
  push32((uint32_t)(EBX));
  /* 10188878 call dword ptr [0x1018e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e054))), 0x1018887eu);
  /* 1018887e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188884 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 1018888a je 0x1018889f */
  if (C.zf) goto L_1018889f;
L_1018888c:;
  /* 1018888c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1018888e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188890 jl 0x1018889a */
  if ((C.sf!=C.of)) goto L_1018889a;
  /* 10188892 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188894 jg 0x1018889a */
  if ((!C.zf&&C.sf==C.of)) goto L_1018889a;
  /* 10188896 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10188898 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_1018889a:;
  /* 1018889a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1018889b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018889d jne 0x1018888c */
  if (!C.zf) goto L_1018888c;
L_1018889f:;
  /* 1018889f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 101888a5 push eax */
  push32((uint32_t)(EAX));
  /* 101888a6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101888ac push eax */
  push32((uint32_t)(EAX));
  /* 101888ad call 0x1018ae10 */
  push32(0x101888b2u); f_1018ae10();
  /* 101888b2 pop ecx */
  ECX = (pop32());
  /* 101888b3 pop ecx */
  ECX = (pop32());
L_101888b4:;
  /* 101888b4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101888b6 je 0x101888f6 */
  if (C.zf) goto L_101888f6;
  /* 101888b8 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 101888ba push eax */
  push32((uint32_t)(EAX));
  /* 101888bb call 0x1018ad50 */
  push32(0x101888c0u); f_1018ad50();
  /* 101888c0 pop ecx */
  ECX = (pop32());
  /* 101888c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101888c3 pop ecx */
  ECX = (pop32());
  /* 101888c4 je 0x101888f6 */
  if (C.zf) goto L_101888f6;
  /* 101888c6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101888c7 mov ecx, eax */
  ECX = (EAX);
  /* 101888c9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101888cb je 0x101888db */
  if (C.zf) goto L_101888db;
L_101888cd:;
  /* 101888cd cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101888d0 jne 0x101888d6 */
  if (!C.zf) goto L_101888d6;
  /* 101888d2 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 101888d4 jmp 0x101888d7 */
  goto L_101888d7;
L_101888d6:;
  /* 101888d6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_101888d7:;
  /* 101888d7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101888d9 jne 0x101888cd */
  if (!C.zf) goto L_101888cd;
L_101888db:;
  /* 101888db push 0xa */
  push32((uint32_t)(0xau));
  /* 101888dd push ebx */
  push32((uint32_t)(EBX));
  /* 101888de push eax */
  push32((uint32_t)(EAX));
  /* 101888df call 0x1018ab15 */
  push32(0x101888e4u); f_1018ab15();
  /* 101888e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101888e7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101888ea je 0x10188909 */
  if (C.zf) goto L_10188909;
  /* 101888ec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101888ef je 0x10188909 */
  if (C.zf) goto L_10188909;
  /* 101888f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101888f4 je 0x10188909 */
  if (C.zf) goto L_10188909;
L_101888f6:;
  /* 101888f6 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101888f9 push eax */
  push32((uint32_t)(EAX));
  /* 101888fa call 0x10188797 */
  push32(0x101888ffu); f_10188797();
  /* 101888ff cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188903 pop ecx */
  ECX = (pop32());
  /* 10188904 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10188906 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10188909:;
  /* 10188909 pop ebx */
  EBX = (pop32());
  /* 1018890a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018890b ret  */
  ESPCHK(0x101887c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000890c @ 0x1018890c (93 bytes, 30 insns) */
void f_1018890c(void) {
  FTRACE(0x1018890cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018890c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018890e push 0 */
  push32((uint32_t)(0x0u));
  /* 10188910 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188914 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10188919 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1018891c push eax */
  push32((uint32_t)(EAX));
  /* 1018891d call dword ptr [0x1018e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e078))), 0x10188923u);
  /* 10188923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188925 mov dword ptr [0x10197c44], eax */
  w32((uint32_t)(0x10197c44), (EAX));
  /* 1018892a je 0x10188962 */
  if (C.zf) goto L_10188962;
  /* 1018892c call 0x101887c4 */
  push32(0x10188931u); f_101887c4();
  /* 10188931 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188934 mov dword ptr [0x10197c48], eax */
  w32((uint32_t)(0x10197c48), (EAX));
  /* 10188939 jne 0x10188948 */
  if (!C.zf) goto L_10188948;
  /* 1018893b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 10188940 call 0x1018aeff */
  push32(0x10188945u); f_1018aeff();
  /* 10188945 pop ecx */
  ECX = (pop32());
  /* 10188946 jmp 0x10188952 */
  goto L_10188952;
L_10188948:;
  /* 10188948 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018894b jne 0x10188965 */
  if (!C.zf) goto L_10188965;
  /* 1018894d call 0x1018b750 */
  push32(0x10188952u); f_1018b750();
L_10188952:;
  /* 10188952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188954 jne 0x10188965 */
  if (!C.zf) goto L_10188965;
  /* 10188956 push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
  /* 1018895c call dword ptr [0x1018e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e074))), 0x10188962u);
L_10188962:;
  /* 10188962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10188964 ret  */
  ESPCHK(0x1018890cu, _esp0);
  ESP += 4; return;
L_10188965:;
  /* 10188965 push 1 */
  push32((uint32_t)(0x1u));
  /* 10188967 pop eax */
  EAX = (pop32());
  /* 10188968 ret  */
  ESPCHK(0x1018890cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008969 @ 0x10188969 (168 bytes, 56 insns) */
void f_10188969(void) {
  FTRACE(0x10188969u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188969 mov eax, dword ptr [0x10197c48] */
  EAX = (r32((uint32_t)(0x10197c48)));
  /* 1018896e push esi */
  push32((uint32_t)(ESI));
  /* 1018896f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188972 push edi */
  push32((uint32_t)(EDI));
  /* 10188973 jne 0x101889db */
  if (!C.zf) goto L_101889db;
  /* 10188975 push ebx */
  push32((uint32_t)(EBX));
  /* 10188976 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10188978 cmp dword ptr [0x101969e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101969e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018897e push ebp */
  push32((uint32_t)(EBP));
  /* 1018897f mov ebp, dword ptr [0x1018e080] */
  EBP = (r32((uint32_t)(0x1018e080)));
  /* 10188985 jle 0x101889c7 */
  if ((C.zf||C.sf!=C.of)) goto L_101889c7;
  /* 10188987 mov eax, dword ptr [0x101969ec] */
  EAX = (r32((uint32_t)(0x101969ec)));
  /* 1018898c mov edi, dword ptr [0x1018e07c] */
  EDI = (r32((uint32_t)(0x1018e07c)));
  /* 10188992 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10188995:;
  /* 10188995 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1018899a push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1018899f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101889a1 call edi */
  call_ind((uint32_t)(EDI), 0x101889a3u);
  /* 101889a3 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101889a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101889aa push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101889ac call edi */
  call_ind((uint32_t)(EDI), 0x101889aeu);
  /* 101889ae push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 101889b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101889b3 push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
  /* 101889b9 call ebp */
  call_ind((uint32_t)(EBP), 0x101889bbu);
  /* 101889bb add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101889be inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101889bf cmp ebx, dword ptr [0x101969e8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101969e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101889c5 jl 0x10188995 */
  if ((C.sf!=C.of)) goto L_10188995;
L_101889c7:;
  /* 101889c7 push dword ptr [0x101969ec] */
  push32((uint32_t)(r32((uint32_t)(0x101969ec))));
  /* 101889cd push 0 */
  push32((uint32_t)(0x0u));
  /* 101889cf push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
  /* 101889d5 call ebp */
  call_ind((uint32_t)(EBP), 0x101889d7u);
  /* 101889d7 pop ebp */
  EBP = (pop32());
  /* 101889d8 pop ebx */
  EBX = (pop32());
  /* 101889d9 jmp 0x10188a02 */
  goto L_10188a02;
L_101889db:;
  /* 101889db cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101889de jne 0x10188a02 */
  if (!C.zf) goto L_10188a02;
  /* 101889e0 mov edi, 0x10190e80 */
  EDI = (0x10190e80u);
  /* 101889e5 mov esi, edi */
  ESI = (EDI);
L_101889e7:;
  /* 101889e7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 101889ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101889ec je 0x101889fc */
  if (C.zf) goto L_101889fc;
  /* 101889ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101889f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 101889f5 push eax */
  push32((uint32_t)(EAX));
  /* 101889f6 call dword ptr [0x1018e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e07c))), 0x101889fcu);
L_101889fc:;
  /* 101889fc mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 101889fe cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188a00 jne 0x101889e7 */
  if (!C.zf) goto L_101889e7;
L_10188a02:;
  /* 10188a02 push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
  /* 10188a08 call dword ptr [0x1018e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e074))), 0x10188a0eu);
  /* 10188a0e pop edi */
  EDI = (pop32());
  /* 10188a0f pop esi */
  ESI = (pop32());
  /* 10188a10 ret  */
  ESPCHK(0x10188969u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a11 @ 0x10188a11 (57 bytes, 18 insns) */
void f_10188a11(void) {
  FTRACE(0x10188a11u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188a11 mov eax, dword ptr [0x10196670] */
  EAX = (r32((uint32_t)(0x10196670)));
  /* 10188a16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188a19 je 0x10188a28 */
  if (C.zf) goto L_10188a28;
  /* 10188a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188a1d jne 0x10188a49 */
  if (!C.zf) goto L_10188a49;
  /* 10188a1f cmp dword ptr [0x10196674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10196674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188a26 jne 0x10188a49 */
  if (!C.zf) goto L_10188a49;
L_10188a28:;
  /* 10188a28 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10188a2d call 0x10188a4a */
  push32(0x10188a32u); f_10188a4a();
  /* 10188a32 mov eax, dword ptr [0x101967c4] */
  EAX = (r32((uint32_t)(0x101967c4)));
  /* 10188a37 pop ecx */
  ECX = (pop32());
  /* 10188a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188a3a je 0x10188a3e */
  if (C.zf) goto L_10188a3e;
  /* 10188a3c call eax */
  call_ind((uint32_t)(EAX), 0x10188a3eu);
L_10188a3e:;
  /* 10188a3e push 0xff */
  push32((uint32_t)(0xffu));
  /* 10188a43 call 0x10188a4a */
  push32(0x10188a48u); f_10188a4a();
  /* 10188a48 pop ecx */
  ECX = (pop32());
L_10188a49:;
  /* 10188a49 ret  */
  ESPCHK(0x10188a11u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a4a @ 0x10188a4a (339 bytes, 100 insns) */
void f_10188a4a(void) {
  FTRACE(0x10188a4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188a4a push ebp */
  push32((uint32_t)(EBP));
  /* 10188a4b mov ebp, esp */
  EBP = (ESP);
  /* 10188a4d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10188a53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10188a56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10188a58 mov eax, 0x101906e0 */
  EAX = (0x101906e0u);
L_10188a5d:;
  /* 10188a5d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188a5f je 0x10188a6c */
  if (C.zf) goto L_10188a6c;
  /* 10188a61 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10188a64 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10188a65 cmp eax, 0x10190770 */
  { uint32_t _a=(EAX),_b=(0x10190770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188a6a jl 0x10188a5d */
  if ((C.sf!=C.of)) goto L_10188a5d;
L_10188a6c:;
  /* 10188a6c push esi */
  push32((uint32_t)(ESI));
  /* 10188a6d mov esi, ecx */
  ESI = (ECX);
  /* 10188a6f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10188a72 cmp edx, dword ptr [esi + 0x101906e0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x101906e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188a78 jne 0x10188b9a */
  if (!C.zf) goto L_10188b9a;
  /* 10188a7e mov eax, dword ptr [0x10196670] */
  EAX = (r32((uint32_t)(0x10196670)));
  /* 10188a83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188a86 je 0x10188b74 */
  if (C.zf) goto L_10188b74;
  /* 10188a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188a8e jne 0x10188a9d */
  if (!C.zf) goto L_10188a9d;
  /* 10188a90 cmp dword ptr [0x10196674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10196674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188a97 je 0x10188b74 */
  if (C.zf) goto L_10188b74;
L_10188a9d:;
  /* 10188a9d cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188aa3 je 0x10188b9a */
  if (C.zf) goto L_10188b9a;
  /* 10188aa9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10188aaf push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10188ab4 push eax */
  push32((uint32_t)(EAX));
  /* 10188ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10188ab7 call dword ptr [0x1018e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e054))), 0x10188abdu);
  /* 10188abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188abf jne 0x10188ad4 */
  if (!C.zf) goto L_10188ad4;
  /* 10188ac1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10188ac7 push 0x1018e4b8 */
  push32((uint32_t)(0x1018e4b8u));
  /* 10188acc push eax */
  push32((uint32_t)(EAX));
  /* 10188acd call 0x10189af0 */
  push32(0x10188ad2u); f_10189af0();
  /* 10188ad2 pop ecx */
  ECX = (pop32());
  /* 10188ad3 pop ecx */
  ECX = (pop32());
L_10188ad4:;
  /* 10188ad4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10188ada push edi */
  push32((uint32_t)(EDI));
  /* 10188adb push eax */
  push32((uint32_t)(EAX));
  /* 10188adc lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10188ae2 call 0x10189040 */
  push32(0x10188ae7u); f_10189040();
  /* 10188ae7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10188ae8 pop ecx */
  ECX = (pop32());
  /* 10188ae9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188aec jbe 0x10188b17 */
  if ((C.cf||C.zf)) goto L_10188b17;
  /* 10188aee lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10188af4 push eax */
  push32((uint32_t)(EAX));
  /* 10188af5 call 0x10189040 */
  push32(0x10188afau); f_10189040();
  /* 10188afa mov edi, eax */
  EDI = (EAX);
  /* 10188afc lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10188b02 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10188b05 push 3 */
  push32((uint32_t)(0x3u));
  /* 10188b07 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10188b09 push 0x1018e4b4 */
  push32((uint32_t)(0x1018e4b4u));
  /* 10188b0e push edi */
  push32((uint32_t)(EDI));
  /* 10188b0f call 0x1018be00 */
  push32(0x10188b14u); f_1018be00();
  /* 10188b14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10188b17:;
  /* 10188b17 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10188b1d push 0x1018e498 */
  push32((uint32_t)(0x1018e498u));
  /* 10188b22 push eax */
  push32((uint32_t)(EAX));
  /* 10188b23 call 0x10189af0 */
  push32(0x10188b28u); f_10189af0();
  /* 10188b28 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10188b2e push edi */
  push32((uint32_t)(EDI));
  /* 10188b2f push eax */
  push32((uint32_t)(EAX));
  /* 10188b30 call 0x10189b00 */
  push32(0x10188b35u); f_10189b00();
  /* 10188b35 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10188b3b push 0x1018e494 */
  push32((uint32_t)(0x1018e494u));
  /* 10188b40 push eax */
  push32((uint32_t)(EAX));
  /* 10188b41 call 0x10189b00 */
  push32(0x10188b46u); f_10189b00();
  /* 10188b46 push dword ptr [esi + 0x101906e4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x101906e4))));
  /* 10188b4c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10188b52 push eax */
  push32((uint32_t)(EAX));
  /* 10188b53 call 0x10189b00 */
  push32(0x10188b58u); f_10189b00();
  /* 10188b58 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10188b5d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10188b63 push 0x1018e46c */
  push32((uint32_t)(0x1018e46cu));
  /* 10188b68 push eax */
  push32((uint32_t)(EAX));
  /* 10188b69 call 0x1018bd74 */
  push32(0x10188b6eu); f_1018bd74();
  /* 10188b6e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10188b71 pop edi */
  EDI = (pop32());
  /* 10188b72 jmp 0x10188b9a */
  goto L_10188b9a;
L_10188b74:;
  /* 10188b74 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10188b77 lea esi, [esi + 0x101906e4] */
  ESI = ((uint32_t)(ESI + 0x101906e4));
  /* 10188b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10188b7f push eax */
  push32((uint32_t)(EAX));
  /* 10188b80 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10188b82 call 0x10189040 */
  push32(0x10188b87u); f_10189040();
  /* 10188b87 pop ecx */
  ECX = (pop32());
  /* 10188b88 push eax */
  push32((uint32_t)(EAX));
  /* 10188b89 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10188b8b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10188b8d call dword ptr [0x1018e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e044))), 0x10188b93u);
  /* 10188b93 push eax */
  push32((uint32_t)(EAX));
  /* 10188b94 call dword ptr [0x1018e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e084))), 0x10188b9au);
L_10188b9a:;
  /* 10188b9a pop esi */
  ESI = (pop32());
  /* 10188b9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10188b9c ret  */
  ESPCHK(0x10188a4au, _esp0);
  ESP += 4; return;
}

/* FUN_10008b9d @ 0x10188b9d (101 bytes, 34 insns) */
void f_10188b9d(void) {
  FTRACE(0x10188b9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188b9d push esi */
  push32((uint32_t)(ESI));
  /* 10188b9e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10188ba2 cmp esi, dword ptr [0x10197d60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10197d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188ba8 jae 0x10188bea */
  if (!C.cf) goto L_10188bea;
  /* 10188baa mov ecx, esi */
  ECX = (ESI);
  /* 10188bac mov eax, esi */
  EAX = (ESI);
  /* 10188bae sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10188bb1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10188bb4 mov ecx, dword ptr [ecx*4 + 0x10197c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10197c60)));
  /* 10188bbb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10188bbe test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10188bc3 je 0x10188bea */
  if (C.zf) goto L_10188bea;
  /* 10188bc5 push edi */
  push32((uint32_t)(EDI));
  /* 10188bc6 push esi */
  push32((uint32_t)(ESI));
  /* 10188bc7 call 0x1018c044 */
  push32(0x10188bccu); f_1018c044();
  /* 10188bcc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10188bd0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10188bd4 push esi */
  push32((uint32_t)(ESI));
  /* 10188bd5 call 0x10188c02 */
  push32(0x10188bdau); f_10188c02();
  /* 10188bda push esi */
  push32((uint32_t)(ESI));
  /* 10188bdb mov edi, eax */
  EDI = (EAX);
  /* 10188bdd call 0x1018c0a3 */
  push32(0x10188be2u); f_1018c0a3();
  /* 10188be2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10188be5 mov eax, edi */
  EAX = (EDI);
  /* 10188be7 pop edi */
  EDI = (pop32());
  /* 10188be8 pop esi */
  ESI = (pop32());
  /* 10188be9 ret  */
  ESPCHK(0x10188b9du, _esp0);
  ESP += 4; return;
L_10188bea:;
  /* 10188bea call 0x1018bf71 */
  push32(0x10188befu); f_1018bf71();
  /* 10188bef mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10188bf5 call 0x1018bf7a */
  push32(0x10188bfau); f_1018bf7a();
  /* 10188bfa and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10188bfd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10188c00 pop esi */
  ESI = (pop32());
  /* 10188c01 ret  */
  ESPCHK(0x10188b9du, _esp0);
  ESP += 4; return;
}

/* FUN_10008c02 @ 0x10188c02 (115 bytes, 41 insns) */
void f_10188c02(void) {
  FTRACE(0x10188c02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188c02 push esi */
  push32((uint32_t)(ESI));
  /* 10188c03 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10188c07 push edi */
  push32((uint32_t)(EDI));
  /* 10188c08 push esi */
  push32((uint32_t)(ESI));
  /* 10188c09 call 0x1018c002 */
  push32(0x10188c0eu); f_1018c002();
  /* 10188c0e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188c11 pop ecx */
  ECX = (pop32());
  /* 10188c12 jne 0x10188c21 */
  if (!C.zf) goto L_10188c21;
  /* 10188c14 call 0x1018bf71 */
  push32(0x10188c19u); f_1018bf71();
  /* 10188c19 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10188c1f jmp 0x10188c4e */
  goto L_10188c4e;
L_10188c21:;
  /* 10188c21 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10188c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10188c27 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10188c2b push eax */
  push32((uint32_t)(EAX));
  /* 10188c2c call dword ptr [0x1018e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e000))), 0x10188c32u);
  /* 10188c32 mov edi, eax */
  EDI = (EAX);
  /* 10188c34 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188c37 jne 0x10188c41 */
  if (!C.zf) goto L_10188c41;
  /* 10188c39 call dword ptr [0x1018e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e03c))), 0x10188c3fu);
  /* 10188c3f jmp 0x10188c43 */
  goto L_10188c43;
L_10188c41:;
  /* 10188c41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10188c43:;
  /* 10188c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188c45 je 0x10188c53 */
  if (C.zf) goto L_10188c53;
  /* 10188c47 push eax */
  push32((uint32_t)(EAX));
  /* 10188c48 call 0x1018befe */
  push32(0x10188c4du); f_1018befe();
  /* 10188c4d pop ecx */
  ECX = (pop32());
L_10188c4e:;
  /* 10188c4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10188c51 jmp 0x10188c72 */
  goto L_10188c72;
L_10188c53:;
  /* 10188c53 mov ecx, esi */
  ECX = (ESI);
  /* 10188c55 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10188c58 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10188c5b mov eax, esi */
  EAX = (ESI);
  /* 10188c5d mov ecx, dword ptr [ecx*4 + 0x10197c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10197c60)));
  /* 10188c64 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10188c67 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10188c6c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 10188c70 mov eax, edi */
  EAX = (EDI);
L_10188c72:;
  /* 10188c72 pop edi */
  EDI = (pop32());
  /* 10188c73 pop esi */
  ESI = (pop32());
  /* 10188c74 ret  */
  ESPCHK(0x10188c02u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c75 @ 0x10188c75 (101 bytes, 34 insns) */
void f_10188c75(void) {
  FTRACE(0x10188c75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188c75 push esi */
  push32((uint32_t)(ESI));
  /* 10188c76 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10188c7a cmp esi, dword ptr [0x10197d60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10197d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188c80 jae 0x10188cc2 */
  if (!C.cf) goto L_10188cc2;
  /* 10188c82 mov ecx, esi */
  ECX = (ESI);
  /* 10188c84 mov eax, esi */
  EAX = (ESI);
  /* 10188c86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10188c89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10188c8c mov ecx, dword ptr [ecx*4 + 0x10197c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10197c60)));
  /* 10188c93 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10188c96 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10188c9b je 0x10188cc2 */
  if (C.zf) goto L_10188cc2;
  /* 10188c9d push edi */
  push32((uint32_t)(EDI));
  /* 10188c9e push esi */
  push32((uint32_t)(ESI));
  /* 10188c9f call 0x1018c044 */
  push32(0x10188ca4u); f_1018c044();
  /* 10188ca4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10188ca8 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10188cac push esi */
  push32((uint32_t)(ESI));
  /* 10188cad call 0x10188cda */
  push32(0x10188cb2u); f_10188cda();
  /* 10188cb2 push esi */
  push32((uint32_t)(ESI));
  /* 10188cb3 mov edi, eax */
  EDI = (EAX);
  /* 10188cb5 call 0x1018c0a3 */
  push32(0x10188cbau); f_1018c0a3();
  /* 10188cba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10188cbd mov eax, edi */
  EAX = (EDI);
  /* 10188cbf pop edi */
  EDI = (pop32());
  /* 10188cc0 pop esi */
  ESI = (pop32());
  /* 10188cc1 ret  */
  ESPCHK(0x10188c75u, _esp0);
  ESP += 4; return;
L_10188cc2:;
  /* 10188cc2 call 0x1018bf71 */
  push32(0x10188cc7u); f_1018bf71();
  /* 10188cc7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10188ccd call 0x1018bf7a */
  push32(0x10188cd2u); f_1018bf7a();
  /* 10188cd2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10188cd5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10188cd8 pop esi */
  ESI = (pop32());
  /* 10188cd9 ret  */
  ESPCHK(0x10188c75u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cda @ 0x10188cda (395 bytes, 135 insns) */
void f_10188cda(void) {
  FTRACE(0x10188cdau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188cda push ebp */
  push32((uint32_t)(EBP));
  /* 10188cdb mov ebp, esp */
  EBP = (ESP);
  /* 10188cdd sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10188ce3 push ebx */
  push32((uint32_t)(EBX));
  /* 10188ce4 push esi */
  push32((uint32_t)(ESI));
  /* 10188ce5 push edi */
  push32((uint32_t)(EDI));
  /* 10188ce6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10188ce8 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188ceb mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10188cee mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10188cf1 jne 0x10188cfa */
  if (!C.zf) goto L_10188cfa;
L_10188cf3:;
  /* 10188cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10188cf5 jmp 0x10188e60 */
  goto L_10188e60;
L_10188cfa:;
  /* 10188cfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10188cfd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10188d00 lea ebx, [eax*4 + 0x10197c60] */
  EBX = ((uint32_t)(EAX*4 + 0x10197c60));
  /* 10188d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10188d0a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10188d0d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10188d10 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10188d12 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10188d15 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10188d1a je 0x10188d2a */
  if (C.zf) goto L_10188d2a;
  /* 10188d1c push 2 */
  push32((uint32_t)(0x2u));
  /* 10188d1e push edi */
  push32((uint32_t)(EDI));
  /* 10188d1f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10188d22 call 0x10188c02 */
  push32(0x10188d27u); f_10188c02();
  /* 10188d27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10188d2a:;
  /* 10188d2a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10188d2c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10188d2e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10188d32 je 0x10188df9 */
  if (C.zf) goto L_10188df9;
  /* 10188d38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10188d3b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188d3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10188d41 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10188d44 jbe 0x10188e34 */
  if ((C.cf||C.zf)) goto L_10188e34;
L_10188d4a:;
  /* 10188d4a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_10188d50:;
  /* 10188d50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10188d53 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10188d56 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188d59 jae 0x10188d84 */
  if (!C.cf) goto L_10188d84;
  /* 10188d5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10188d5e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10188d61 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10188d63 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188d66 jne 0x10188d6f */
  if (!C.zf) goto L_10188d6f;
  /* 10188d68 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10188d6b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10188d6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10188d6f:;
  /* 10188d6f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10188d71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10188d72 mov ecx, eax */
  ECX = (EAX);
  /* 10188d74 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10188d7a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10188d7c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188d82 jl 0x10188d50 */
  if ((C.sf!=C.of)) goto L_10188d50;
L_10188d84:;
  /* 10188d84 mov edi, eax */
  EDI = (EAX);
  /* 10188d86 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10188d8c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10188d8e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10188d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10188d93 push eax */
  push32((uint32_t)(EAX));
  /* 10188d94 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10188d9a push edi */
  push32((uint32_t)(EDI));
  /* 10188d9b push eax */
  push32((uint32_t)(EAX));
  /* 10188d9c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10188d9e push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10188da1 call dword ptr [0x1018e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e084))), 0x10188da7u);
  /* 10188da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188da9 je 0x10188dee */
  if (C.zf) goto L_10188dee;
  /* 10188dab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10188dae add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10188db1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188db3 jl 0x10188dc0 */
  if ((C.sf!=C.of)) goto L_10188dc0;
  /* 10188db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10188db8 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10188dbb cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188dbe jb 0x10188d4a */
  if (C.cf) goto L_10188d4a;
L_10188dc0:;
  /* 10188dc0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10188dc2:;
  /* 10188dc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10188dc5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188dc7 jne 0x10188e5d */
  if (!C.zf) goto L_10188e5d;
  /* 10188dcd cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188dd0 je 0x10188e34 */
  if (C.zf) goto L_10188e34;
  /* 10188dd2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10188dd4 pop esi */
  ESI = (pop32());
  /* 10188dd5 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188dd8 jne 0x10188e26 */
  if (!C.zf) goto L_10188e26;
  /* 10188dda call 0x1018bf71 */
  push32(0x10188ddfu); f_1018bf71();
  /* 10188ddf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10188de5 call 0x1018bf7a */
  push32(0x10188deau); f_1018bf7a();
  /* 10188dea mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10188dec jmp 0x10188e2f */
  goto L_10188e2f;
L_10188dee:;
  /* 10188dee call dword ptr [0x1018e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e03c))), 0x10188df4u);
  /* 10188df4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10188df7 jmp 0x10188dc0 */
  goto L_10188dc0;
L_10188df9:;
  /* 10188df9 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10188dfc push edi */
  push32((uint32_t)(EDI));
  /* 10188dfd push ecx */
  push32((uint32_t)(ECX));
  /* 10188dfe push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10188e01 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10188e04 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10188e06 call dword ptr [0x1018e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e084))), 0x10188e0cu);
  /* 10188e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188e0e je 0x10188e1b */
  if (C.zf) goto L_10188e1b;
  /* 10188e10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10188e13 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10188e16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10188e19 jmp 0x10188dc2 */
  goto L_10188dc2;
L_10188e1b:;
  /* 10188e1b call dword ptr [0x1018e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e03c))), 0x10188e21u);
  /* 10188e21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10188e24 jmp 0x10188dc2 */
  goto L_10188dc2;
L_10188e26:;
  /* 10188e26 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10188e29 call 0x1018befe */
  push32(0x10188e2eu); f_1018befe();
  /* 10188e2e pop ecx */
  ECX = (pop32());
L_10188e2f:;
  /* 10188e2f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10188e32 jmp 0x10188e60 */
  goto L_10188e60;
L_10188e34:;
  /* 10188e34 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10188e36 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10188e3b je 0x10188e49 */
  if (C.zf) goto L_10188e49;
  /* 10188e3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10188e40 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10188e43 je 0x10188cf3 */
  if (C.zf) goto L_10188cf3;
L_10188e49:;
  /* 10188e49 call 0x1018bf71 */
  push32(0x10188e4eu); f_1018bf71();
  /* 10188e4e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10188e54 call 0x1018bf7a */
  push32(0x10188e59u); f_1018bf7a();
  /* 10188e59 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10188e5b jmp 0x10188e2f */
  goto L_10188e2f;
L_10188e5d:;
  /* 10188e5d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10188e60:;
  /* 10188e60 pop edi */
  EDI = (pop32());
  /* 10188e61 pop esi */
  ESI = (pop32());
  /* 10188e62 pop ebx */
  EBX = (pop32());
  /* 10188e63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10188e64 ret  */
  ESPCHK(0x10188cdau, _esp0);
  ESP += 4; return;
}

/* FUN_10008e65 @ 0x10188e65 (68 bytes, 19 insns) */
void f_10188e65(void) {
  FTRACE(0x10188e65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188e65 inc dword ptr [0x101967c8] */
  { uint32_t _r=(r32((uint32_t)(0x101967c8)))+1; w32((uint32_t)(0x101967c8), (_r)); fl_inc(_r,32); }
  /* 10188e6b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10188e70 call 0x1018a2af */
  push32(0x10188e75u); f_1018a2af();
  /* 10188e75 pop ecx */
  ECX = (pop32());
  /* 10188e76 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10188e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10188e7c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10188e7f je 0x10188e8e */
  if (C.zf) goto L_10188e8e;
  /* 10188e81 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10188e85 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 10188e8c jmp 0x10188e9f */
  goto L_10188e9f;
L_10188e8e:;
  /* 10188e8e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10188e92 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10188e95 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10188e98 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_10188e9f:;
  /* 10188e9f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10188ea2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10188ea6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10188ea8 ret  */
  ESPCHK(0x10188e65u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ea9 @ 0x10188ea9 (41 bytes, 13 insns) */
void f_10188ea9(void) {
  FTRACE(0x10188ea9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188ea9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10188ead cmp eax, dword ptr [0x10197d60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10197d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188eb3 jb 0x10188eb8 */
  if (C.cf) goto L_10188eb8;
  /* 10188eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10188eb7 ret  */
  ESPCHK(0x10188ea9u, _esp0);
  ESP += 4; return;
L_10188eb8:;
  /* 10188eb8 mov ecx, eax */
  ECX = (EAX);
  /* 10188eba and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10188ebd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10188ec0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10188ec3 mov ecx, dword ptr [ecx*4 + 0x10197c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10197c60)));
  /* 10188eca mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10188ece and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10188ed1 ret  */
  ESPCHK(0x10188ea9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f8e @ 0x10188f8e (47 bytes, 17 insns) */
void f_10188f8e(void) {
  FTRACE(0x10188f8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188f8e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10188f92 mov ecx, 0x10190770 */
  ECX = (0x10190770u);
  /* 10188f97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188f99 jb 0x10188fb2 */
  if (C.cf) goto L_10188fb2;
  /* 10188f9b cmp eax, 0x101909d0 */
  { uint32_t _a=(EAX),_b=(0x101909d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188fa0 ja 0x10188fb2 */
  if ((!C.cf&&!C.zf)) goto L_10188fb2;
  /* 10188fa2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10188fa4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10188fa7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10188faa push eax */
  push32((uint32_t)(EAX));
  /* 10188fab call 0x1018a013 */
  push32(0x10188fb0u); f_1018a013();
  /* 10188fb0 pop ecx */
  ECX = (pop32());
  /* 10188fb1 ret  */
  ESPCHK(0x10188f8eu, _esp0);
  ESP += 4; return;
L_10188fb2:;
  /* 10188fb2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10188fb5 push eax */
  push32((uint32_t)(EAX));
  /* 10188fb6 call dword ptr [0x1018e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e00c))), 0x10188fbcu);
  /* 10188fbc ret  */
  ESPCHK(0x10188f8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fbd @ 0x10188fbd (35 bytes, 13 insns) */
void f_10188fbd(void) {
  FTRACE(0x10188fbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188fbd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10188fc1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188fc4 jge 0x10188fd1 */
  if ((C.sf==C.of)) goto L_10188fd1;
  /* 10188fc6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10188fc9 push eax */
  push32((uint32_t)(EAX));
  /* 10188fca call 0x1018a013 */
  push32(0x10188fcfu); f_1018a013();
  /* 10188fcf pop ecx */
  ECX = (pop32());
  /* 10188fd0 ret  */
  ESPCHK(0x10188fbdu, _esp0);
  ESP += 4; return;
L_10188fd1:;
  /* 10188fd1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10188fd5 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10188fd8 push eax */
  push32((uint32_t)(EAX));
  /* 10188fd9 call dword ptr [0x1018e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e00c))), 0x10188fdfu);
  /* 10188fdf ret  */
  ESPCHK(0x10188fbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fe0 @ 0x10188fe0 (47 bytes, 17 insns) */
void f_10188fe0(void) {
  FTRACE(0x10188fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10188fe0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10188fe4 mov ecx, 0x10190770 */
  ECX = (0x10190770u);
  /* 10188fe9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188feb jb 0x10189004 */
  if (C.cf) goto L_10189004;
  /* 10188fed cmp eax, 0x101909d0 */
  { uint32_t _a=(EAX),_b=(0x101909d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10188ff2 ja 0x10189004 */
  if ((!C.cf&&!C.zf)) goto L_10189004;
  /* 10188ff4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10188ff6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10188ff9 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10188ffc push eax */
  push32((uint32_t)(EAX));
  /* 10188ffd call 0x1018a074 */
  push32(0x10189002u); f_1018a074();
  /* 10189002 pop ecx */
  ECX = (pop32());
  /* 10189003 ret  */
  ESPCHK(0x10188fe0u, _esp0);
  ESP += 4; return;
L_10189004:;
  /* 10189004 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10189007 push eax */
  push32((uint32_t)(EAX));
  /* 10189008 call dword ptr [0x1018e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e008))), 0x1018900eu);
  /* 1018900e ret  */
  ESPCHK(0x10188fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000900f @ 0x1018900f (35 bytes, 13 insns) */
void f_1018900f(void) {
  FTRACE(0x1018900fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018900f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10189013 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189016 jge 0x10189023 */
  if ((C.sf==C.of)) goto L_10189023;
  /* 10189018 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018901b push eax */
  push32((uint32_t)(EAX));
  /* 1018901c call 0x1018a074 */
  push32(0x10189021u); f_1018a074();
  /* 10189021 pop ecx */
  ECX = (pop32());
  /* 10189022 ret  */
  ESPCHK(0x1018900fu, _esp0);
  ESP += 4; return;
L_10189023:;
  /* 10189023 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10189027 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018902a push eax */
  push32((uint32_t)(EAX));
  /* 1018902b call dword ptr [0x1018e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e008))), 0x10189031u);
  /* 10189031 ret  */
  ESPCHK(0x1018900fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10189040 (123 bytes, 44 insns) */
void f_10189040(void) {
  FTRACE(0x10189040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189040 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10189044 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1018904a je 0x10189060 */
  if (C.zf) goto L_10189060;
L_1018904c:;
  /* 1018904c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1018904e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1018904f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10189051 je 0x10189093 */
  if (C.zf) goto L_10189093;
  /* 10189053 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10189059 jne 0x1018904c */
  if (!C.zf) goto L_1018904c;
  /* 1018905b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10189060:;
  /* 10189060 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10189062 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10189067 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10189069 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1018906c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1018906e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10189071 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10189076 je 0x10189060 */
  if (C.zf) goto L_10189060;
  /* 10189078 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1018907b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018907d je 0x101890b1 */
  if (C.zf) goto L_101890b1;
  /* 1018907f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10189081 je 0x101890a7 */
  if (C.zf) goto L_101890a7;
  /* 10189083 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10189088 je 0x1018909d */
  if (C.zf) goto L_1018909d;
  /* 1018908a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1018908f je 0x10189093 */
  if (C.zf) goto L_10189093;
  /* 10189091 jmp 0x10189060 */
  goto L_10189060;
L_10189093:;
  /* 10189093 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10189096 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018909a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018909c ret  */
  ESPCHK(0x10189040u, _esp0);
  ESP += 4; return;
L_1018909d:;
  /* 1018909d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 101890a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101890a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101890a6 ret  */
  ESPCHK(0x10189040u, _esp0);
  ESP += 4; return;
L_101890a7:;
  /* 101890a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 101890aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101890ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101890b0 ret  */
  ESPCHK(0x10189040u, _esp0);
  ESP += 4; return;
L_101890b1:;
  /* 101890b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 101890b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101890b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101890ba ret  */
  ESPCHK(0x10189040u, _esp0);
  ESP += 4; return;
}

/* FUN_100090bb @ 0x101890bb (89 bytes, 39 insns) */
void f_101890bb(void) {
  FTRACE(0x101890bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101890bb push ebp */
  push32((uint32_t)(EBP));
  /* 101890bc mov ebp, esp */
  EBP = (ESP);
  /* 101890be push ebx */
  push32((uint32_t)(EBX));
  /* 101890bf push esi */
  push32((uint32_t)(ESI));
  /* 101890c0 mov esi, 0x101969d4 */
  ESI = (0x101969d4u);
  /* 101890c5 push edi */
  push32((uint32_t)(EDI));
  /* 101890c6 push esi */
  push32((uint32_t)(ESI));
  /* 101890c7 call dword ptr [0x1018e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e090))), 0x101890cdu);
  /* 101890cd mov edi, dword ptr [0x1018e08c] */
  EDI = (r32((uint32_t)(0x1018e08c)));
  /* 101890d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101890d5 cmp dword ptr [0x101969d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101969d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101890db je 0x101890eb */
  if (C.zf) goto L_101890eb;
  /* 101890dd push esi */
  push32((uint32_t)(ESI));
  /* 101890de call edi */
  call_ind((uint32_t)(EDI), 0x101890e0u);
  /* 101890e0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101890e2 call 0x1018a013 */
  push32(0x101890e7u); f_1018a013();
  /* 101890e7 pop ecx */
  ECX = (pop32());
  /* 101890e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101890ea pop ebx */
  EBX = (pop32());
L_101890eb:;
  /* 101890eb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101890ee push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101890f1 call 0x10189114 */
  push32(0x101890f6u); f_10189114();
  /* 101890f6 pop ecx */
  ECX = (pop32());
  /* 101890f7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101890fa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101890fc pop ecx */
  ECX = (pop32());
  /* 101890fd je 0x10189109 */
  if (C.zf) goto L_10189109;
  /* 101890ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10189101 call 0x1018a074 */
  push32(0x10189106u); f_1018a074();
  /* 10189106 pop ecx */
  ECX = (pop32());
  /* 10189107 jmp 0x1018910c */
  goto L_1018910c;
L_10189109:;
  /* 10189109 push esi */
  push32((uint32_t)(ESI));
  /* 1018910a call edi */
  call_ind((uint32_t)(EDI), 0x1018910cu);
L_1018910c:;
  /* 1018910c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018910f pop edi */
  EDI = (pop32());
  /* 10189110 pop esi */
  ESI = (pop32());
  /* 10189111 pop ebx */
  EBX = (pop32());
  /* 10189112 pop ebp */
  EBP = (pop32());
  /* 10189113 ret  */
  ESPCHK(0x101890bbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009114 @ 0x10189114 (105 bytes, 38 insns) */
void f_10189114(void) {
  FTRACE(0x10189114u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189114 push ebp */
  push32((uint32_t)(EBP));
  /* 10189115 mov ebp, esp */
  EBP = (ESP);
  /* 10189117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018911a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018911c jne 0x10189120 */
  if (!C.zf) goto L_10189120;
  /* 1018911e pop ebp */
  EBP = (pop32());
  /* 1018911f ret  */
  ESPCHK(0x10189114u, _esp0);
  ESP += 4; return;
L_10189120:;
  /* 10189120 cmp dword ptr [0x10196858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10196858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189127 jne 0x1018913b */
  if (!C.zf) goto L_1018913b;
  /* 10189129 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 1018912d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10189132 ja 0x1018916d */
  if ((!C.cf&&!C.zf)) goto L_1018916d;
  /* 10189134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10189136 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10189138 pop eax */
  EAX = (pop32());
  /* 10189139 pop ebp */
  EBP = (pop32());
  /* 1018913a ret  */
  ESPCHK(0x10189114u, _esp0);
  ESP += 4; return;
L_1018913b:;
  /* 1018913b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 1018913e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 10189142 push ecx */
  push32((uint32_t)(ECX));
  /* 10189143 push 0 */
  push32((uint32_t)(0x0u));
  /* 10189145 push dword ptr [0x10190c00] */
  push32((uint32_t)(r32((uint32_t)(0x10190c00))));
  /* 1018914b push eax */
  push32((uint32_t)(EAX));
  /* 1018914c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1018914f push 1 */
  push32((uint32_t)(0x1u));
  /* 10189151 push eax */
  push32((uint32_t)(EAX));
  /* 10189152 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10189157 push dword ptr [0x10196868] */
  push32((uint32_t)(r32((uint32_t)(0x10196868))));
  /* 1018915d call dword ptr [0x1018e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e060))), 0x10189163u);
  /* 10189163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10189165 je 0x1018916d */
  if (C.zf) goto L_1018916d;
  /* 10189167 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018916b je 0x1018917b */
  if (C.zf) goto L_1018917b;
L_1018916d:;
  /* 1018916d call 0x1018bf71 */
  push32(0x10189172u); f_1018bf71();
  /* 10189172 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10189178 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1018917b:;
  /* 1018917b pop ebp */
  EBP = (pop32());
  /* 1018917c ret  */
  ESPCHK(0x10189114u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10189180 (104 bytes, 43 insns) */
void f_10189180(void) {
  FTRACE(0x10189180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189180 push ebx */
  push32((uint32_t)(EBX));
  /* 10189181 push esi */
  push32((uint32_t)(ESI));
  /* 10189182 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10189186 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10189188 jne 0x101891a2 */
  if (!C.zf) goto L_101891a2;
  /* 1018918a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1018918e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10189192 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10189194 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10189196 mov ebx, eax */
  EBX = (EAX);
  /* 10189198 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1018919c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1018919e mov edx, ebx */
  EDX = (EBX);
  /* 101891a0 jmp 0x101891e3 */
  goto L_101891e3;
L_101891a2:;
  /* 101891a2 mov ecx, eax */
  ECX = (EAX);
  /* 101891a4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101891a8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 101891ac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_101891b0:;
  /* 101891b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101891b2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 101891b4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101891b6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 101891b8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101891ba jne 0x101891b0 */
  if (!C.zf) goto L_101891b0;
  /* 101891bc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101891be mov esi, eax */
  ESI = (EAX);
  /* 101891c0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101891c4 mov ecx, eax */
  ECX = (EAX);
  /* 101891c6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101891ca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101891cc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101891ce jb 0x101891de */
  if (C.cf) goto L_101891de;
  /* 101891d0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101891d4 ja 0x101891de */
  if ((!C.cf&&!C.zf)) goto L_101891de;
  /* 101891d6 jb 0x101891df */
  if (C.cf) goto L_101891df;
  /* 101891d8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101891dc jbe 0x101891df */
  if ((C.cf||C.zf)) goto L_101891df;
L_101891de:;
  /* 101891de dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_101891df:;
  /* 101891df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101891e1 mov eax, esi */
  EAX = (ESI);
L_101891e3:;
  /* 101891e3 pop esi */
  ESI = (pop32());
  /* 101891e4 pop ebx */
  EBX = (pop32());
  /* 101891e5 ret 0x10 */
  ESPCHK(0x10189180u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x101891f0 (117 bytes, 44 insns) */
void f_101891f0(void) {
  FTRACE(0x101891f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101891f0 push ebx */
  push32((uint32_t)(EBX));
  /* 101891f1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101891f5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101891f7 jne 0x10189211 */
  if (!C.zf) goto L_10189211;
  /* 101891f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 101891fd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10189201 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10189203 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10189205 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10189209 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1018920b mov eax, edx */
  EAX = (EDX);
  /* 1018920d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1018920f jmp 0x10189261 */
  goto L_10189261;
L_10189211:;
  /* 10189211 mov ecx, eax */
  ECX = (EAX);
  /* 10189213 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10189217 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1018921b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1018921f:;
  /* 1018921f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10189221 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10189223 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10189225 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10189227 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10189229 jne 0x1018921f */
  if (!C.zf) goto L_1018921f;
  /* 1018922b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1018922d mov ecx, eax */
  ECX = (EAX);
  /* 1018922f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10189233 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10189234 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10189238 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018923a jb 0x1018924a */
  if (C.cf) goto L_1018924a;
  /* 1018923c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189240 ja 0x1018924a */
  if ((!C.cf&&!C.zf)) goto L_1018924a;
  /* 10189242 jb 0x10189252 */
  if (C.cf) goto L_10189252;
  /* 10189244 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189248 jbe 0x10189252 */
  if ((C.cf||C.zf)) goto L_10189252;
L_1018924a:;
  /* 1018924a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018924e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10189252:;
  /* 10189252 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189256 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018925a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1018925c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1018925e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10189261:;
  /* 10189261 pop ebx */
  EBX = (pop32());
  /* 10189262 ret 0x10 */
  ESPCHK(0x101891f0u, _esp0);
  ESP += 20; return;
}

