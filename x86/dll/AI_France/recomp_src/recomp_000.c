#include "recomp.h"

/* ProcessAI @ 0x10081000 (16 bytes, 3 insns) */
void f_10081000(void) {
  FTRACE(0x10081000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10081000 call dword ptr [0x10096520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096520))), 0x10081006u);
  /* 10081006 mov dword ptr [0x100962d4], eax */
  w32((uint32_t)(0x100962d4), (EAX));
  /* 1008100b jmp 0x10086d80 */
  f_10086d80(); return;
}

/* InitAI @ 0x10081010 (5650 bytes, 1489 insns) */
void f_10081010(void) {
  FTRACE(0x10081010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10081010 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081015 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10081018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008101a je 0x10081078 */
  if (C.zf) goto L_10081078;
  /* 1008101c push 0x1008ff14 */
  push32((uint32_t)(0x1008ff14u));
  /* 10081021 push 0x100960a8 */
  push32((uint32_t)(0x100960a8u));
  /* 10081026 call eax */
  call_ind((uint32_t)(EAX), 0x10081028u);
  /* 10081028 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008102d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081032 je 0x10081078 */
  if (C.zf) goto L_10081078;
  /* 10081034 push 0x1008ff0c */
  push32((uint32_t)(0x1008ff0cu));
  /* 10081039 push 0x10096048 */
  push32((uint32_t)(0x10096048u));
  /* 1008103e call eax */
  call_ind((uint32_t)(EAX), 0x10081040u);
  /* 10081040 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008104a je 0x10081078 */
  if (C.zf) goto L_10081078;
  /* 1008104c push 0x1008ff04 */
  push32((uint32_t)(0x1008ff04u));
  /* 10081051 push 0x100960a0 */
  push32((uint32_t)(0x100960a0u));
  /* 10081056 call eax */
  call_ind((uint32_t)(EAX), 0x10081058u);
  /* 10081058 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081062 je 0x10081078 */
  if (C.zf) goto L_10081078;
  /* 10081064 push 0x1008fefc */
  push32((uint32_t)(0x1008fefcu));
  /* 10081069 push 0x100960b0 */
  push32((uint32_t)(0x100960b0u));
  /* 1008106e call eax */
  call_ind((uint32_t)(EAX), 0x10081070u);
  /* 10081070 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10081078:;
  /* 10081078 mov ecx, dword ptr [0x10096418] */
  ECX = (r32((uint32_t)(0x10096418)));
  /* 1008107e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10081080 je 0x10081096 */
  if (C.zf) goto L_10081096;
  /* 10081082 push 0x1008fef0 */
  push32((uint32_t)(0x1008fef0u));
  /* 10081087 push 0x100936b0 */
  push32((uint32_t)(0x100936b0u));
  /* 1008108c call ecx */
  call_ind((uint32_t)(ECX), 0x1008108eu);
  /* 1008108e mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10081096:;
  /* 10081096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081098 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 1008109e push 0x1008fedc */
  push32((uint32_t)(0x1008fedcu));
  /* 100810a3 push 0x10093920 */
  push32((uint32_t)(0x10093920u));
  /* 100810a8 call eax */
  call_ind((uint32_t)(EAX), 0x100810aau);
  /* 100810aa mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100810af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100810b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100810b4 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 100810ba push 0x1008fec8 */
  push32((uint32_t)(0x1008fec8u));
  /* 100810bf push 0x10093918 */
  push32((uint32_t)(0x10093918u));
  /* 100810c4 call eax */
  call_ind((uint32_t)(EAX), 0x100810c6u);
  /* 100810c6 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100810cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100810ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100810d0 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 100810d6 push 0x1008feb4 */
  push32((uint32_t)(0x1008feb4u));
  /* 100810db push 0x10093910 */
  push32((uint32_t)(0x10093910u));
  /* 100810e0 call eax */
  call_ind((uint32_t)(EAX), 0x100810e2u);
  /* 100810e2 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100810e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100810ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100810ec je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 100810f2 push 0x1008fea0 */
  push32((uint32_t)(0x1008fea0u));
  /* 100810f7 push 0x10093958 */
  push32((uint32_t)(0x10093958u));
  /* 100810fc call eax */
  call_ind((uint32_t)(EAX), 0x100810feu);
  /* 100810fe mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081108 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 1008110e push 0x1008fe8c */
  push32((uint32_t)(0x1008fe8cu));
  /* 10081113 push 0x10093948 */
  push32((uint32_t)(0x10093948u));
  /* 10081118 call eax */
  call_ind((uint32_t)(EAX), 0x1008111au);
  /* 1008111a mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008111f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081124 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 1008112a push 0x1008fe78 */
  push32((uint32_t)(0x1008fe78u));
  /* 1008112f push 0x10093940 */
  push32((uint32_t)(0x10093940u));
  /* 10081134 call eax */
  call_ind((uint32_t)(EAX), 0x10081136u);
  /* 10081136 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008113b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081140 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 10081146 push 0x1008fe64 */
  push32((uint32_t)(0x1008fe64u));
  /* 1008114b push 0x100936f8 */
  push32((uint32_t)(0x100936f8u));
  /* 10081150 call eax */
  call_ind((uint32_t)(EAX), 0x10081152u);
  /* 10081152 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008115a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008115c je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 10081162 push 0x1008fe50 */
  push32((uint32_t)(0x1008fe50u));
  /* 10081167 push 0x100936e8 */
  push32((uint32_t)(0x100936e8u));
  /* 1008116c call eax */
  call_ind((uint32_t)(EAX), 0x1008116eu);
  /* 1008116e mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081178 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 1008117e push 0x1008fe3c */
  push32((uint32_t)(0x1008fe3cu));
  /* 10081183 push 0x100938e0 */
  push32((uint32_t)(0x100938e0u));
  /* 10081188 call eax */
  call_ind((uint32_t)(EAX), 0x1008118au);
  /* 1008118a mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081194 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 1008119a push 0x1008fe28 */
  push32((uint32_t)(0x1008fe28u));
  /* 1008119f push 0x100938d8 */
  push32((uint32_t)(0x100938d8u));
  /* 100811a4 call eax */
  call_ind((uint32_t)(EAX), 0x100811a6u);
  /* 100811a6 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100811ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100811ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100811b0 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 100811b6 push 0x1008fe14 */
  push32((uint32_t)(0x1008fe14u));
  /* 100811bb push 0x100938d0 */
  push32((uint32_t)(0x100938d0u));
  /* 100811c0 call eax */
  call_ind((uint32_t)(EAX), 0x100811c2u);
  /* 100811c2 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100811c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100811ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100811cc je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 100811d2 push 0x1008fe00 */
  push32((uint32_t)(0x1008fe00u));
  /* 100811d7 push 0x100938c8 */
  push32((uint32_t)(0x100938c8u));
  /* 100811dc call eax */
  call_ind((uint32_t)(EAX), 0x100811deu);
  /* 100811de mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100811e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100811e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100811e8 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 100811ee push 0x1008fedc */
  push32((uint32_t)(0x1008fedcu));
  /* 100811f3 push 0x10093920 */
  push32((uint32_t)(0x10093920u));
  /* 100811f8 call eax */
  call_ind((uint32_t)(EAX), 0x100811fau);
  /* 100811fa mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100811ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081204 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 1008120a push 0x1008fec8 */
  push32((uint32_t)(0x1008fec8u));
  /* 1008120f push 0x10093918 */
  push32((uint32_t)(0x10093918u));
  /* 10081214 call eax */
  call_ind((uint32_t)(EAX), 0x10081216u);
  /* 10081216 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008121b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008121e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081220 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 10081226 push 0x1008feb4 */
  push32((uint32_t)(0x1008feb4u));
  /* 1008122b push 0x10093910 */
  push32((uint32_t)(0x10093910u));
  /* 10081230 call eax */
  call_ind((uint32_t)(EAX), 0x10081232u);
  /* 10081232 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008123c je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 10081242 push 0x1008fea0 */
  push32((uint32_t)(0x1008fea0u));
  /* 10081247 push 0x10093958 */
  push32((uint32_t)(0x10093958u));
  /* 1008124c call eax */
  call_ind((uint32_t)(EAX), 0x1008124eu);
  /* 1008124e mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081258 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 1008125e push 0x1008fe8c */
  push32((uint32_t)(0x1008fe8cu));
  /* 10081263 push 0x10093948 */
  push32((uint32_t)(0x10093948u));
  /* 10081268 call eax */
  call_ind((uint32_t)(EAX), 0x1008126au);
  /* 1008126a mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081274 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 1008127a push 0x1008fe78 */
  push32((uint32_t)(0x1008fe78u));
  /* 1008127f push 0x10093940 */
  push32((uint32_t)(0x10093940u));
  /* 10081284 call eax */
  call_ind((uint32_t)(EAX), 0x10081286u);
  /* 10081286 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008128e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081290 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 10081296 push 0x1008fe64 */
  push32((uint32_t)(0x1008fe64u));
  /* 1008129b push 0x100936f8 */
  push32((uint32_t)(0x100936f8u));
  /* 100812a0 call eax */
  call_ind((uint32_t)(EAX), 0x100812a2u);
  /* 100812a2 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100812a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100812aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100812ac je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 100812ae push 0x1008fe50 */
  push32((uint32_t)(0x1008fe50u));
  /* 100812b3 push 0x100936e8 */
  push32((uint32_t)(0x100936e8u));
  /* 100812b8 call eax */
  call_ind((uint32_t)(EAX), 0x100812bau);
  /* 100812ba mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100812bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100812c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100812c4 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 100812c6 push 0x1008fe3c */
  push32((uint32_t)(0x1008fe3cu));
  /* 100812cb push 0x100938e0 */
  push32((uint32_t)(0x100938e0u));
  /* 100812d0 call eax */
  call_ind((uint32_t)(EAX), 0x100812d2u);
  /* 100812d2 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100812d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100812da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100812dc je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 100812de push 0x1008fe28 */
  push32((uint32_t)(0x1008fe28u));
  /* 100812e3 push 0x100938d8 */
  push32((uint32_t)(0x100938d8u));
  /* 100812e8 call eax */
  call_ind((uint32_t)(EAX), 0x100812eau);
  /* 100812ea mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100812ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100812f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100812f4 je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 100812f6 push 0x1008fe14 */
  push32((uint32_t)(0x1008fe14u));
  /* 100812fb push 0x100938d0 */
  push32((uint32_t)(0x100938d0u));
  /* 10081300 call eax */
  call_ind((uint32_t)(EAX), 0x10081302u);
  /* 10081302 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008130c je 0x10081322 */
  if (C.zf) goto L_10081322;
  /* 1008130e push 0x1008fe00 */
  push32((uint32_t)(0x1008fe00u));
  /* 10081313 push 0x100938c8 */
  push32((uint32_t)(0x100938c8u));
  /* 10081318 call eax */
  call_ind((uint32_t)(EAX), 0x1008131au);
  /* 1008131a mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10081322:;
  /* 10081322 mov ecx, dword ptr [0x10096418] */
  ECX = (r32((uint32_t)(0x10096418)));
  /* 10081328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1008132a je 0x10081340 */
  if (C.zf) goto L_10081340;
  /* 1008132c push 0x1008fdec */
  push32((uint32_t)(0x1008fdecu));
  /* 10081331 push 0x100936a0 */
  push32((uint32_t)(0x100936a0u));
  /* 10081336 call ecx */
  call_ind((uint32_t)(ECX), 0x10081338u);
  /* 10081338 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008133d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10081340:;
  /* 10081340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081342 je 0x10081477 */
  if (C.zf) goto L_10081477;
  /* 10081348 push 0x1008fdd4 */
  push32((uint32_t)(0x1008fdd4u));
  /* 1008134d push 0x10093678 */
  push32((uint32_t)(0x10093678u));
  /* 10081352 call eax */
  call_ind((uint32_t)(EAX), 0x10081354u);
  /* 10081354 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008135c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008135e je 0x10081477 */
  if (C.zf) goto L_10081477;
  /* 10081364 push 0x1008fdb8 */
  push32((uint32_t)(0x1008fdb8u));
  /* 10081369 push 0x10093670 */
  push32((uint32_t)(0x10093670u));
  /* 1008136e call eax */
  call_ind((uint32_t)(EAX), 0x10081370u);
  /* 10081370 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008137a je 0x10081477 */
  if (C.zf) goto L_10081477;
  /* 10081380 push 0x1008fd9c */
  push32((uint32_t)(0x1008fd9cu));
  /* 10081385 push 0x10093668 */
  push32((uint32_t)(0x10093668u));
  /* 1008138a call eax */
  call_ind((uint32_t)(EAX), 0x1008138cu);
  /* 1008138c mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081396 je 0x10081477 */
  if (C.zf) goto L_10081477;
  /* 1008139c push 0x1008fd80 */
  push32((uint32_t)(0x1008fd80u));
  /* 100813a1 push 0x10096338 */
  push32((uint32_t)(0x10096338u));
  /* 100813a6 call eax */
  call_ind((uint32_t)(EAX), 0x100813a8u);
  /* 100813a8 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100813ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100813b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100813b2 je 0x10081477 */
  if (C.zf) goto L_10081477;
  /* 100813b8 push 0x1008fd64 */
  push32((uint32_t)(0x1008fd64u));
  /* 100813bd push 0x10096330 */
  push32((uint32_t)(0x10096330u));
  /* 100813c2 call eax */
  call_ind((uint32_t)(EAX), 0x100813c4u);
  /* 100813c4 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100813c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100813cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100813ce je 0x10081477 */
  if (C.zf) goto L_10081477;
  /* 100813d4 push 0x1008fd48 */
  push32((uint32_t)(0x1008fd48u));
  /* 100813d9 push 0x10096328 */
  push32((uint32_t)(0x10096328u));
  /* 100813de call eax */
  call_ind((uint32_t)(EAX), 0x100813e0u);
  /* 100813e0 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100813e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100813e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100813ea je 0x10081477 */
  if (C.zf) goto L_10081477;
  /* 100813f0 push 0x1008fd30 */
  push32((uint32_t)(0x1008fd30u));
  /* 100813f5 push 0x100963b0 */
  push32((uint32_t)(0x100963b0u));
  /* 100813fa call eax */
  call_ind((uint32_t)(EAX), 0x100813fcu);
  /* 100813fc mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081406 je 0x10081477 */
  if (C.zf) goto L_10081477;
  /* 10081408 push 0x1008fd14 */
  push32((uint32_t)(0x1008fd14u));
  /* 1008140d push 0x100963a8 */
  push32((uint32_t)(0x100963a8u));
  /* 10081412 call eax */
  call_ind((uint32_t)(EAX), 0x10081414u);
  /* 10081414 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008141c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008141e je 0x10081477 */
  if (C.zf) goto L_10081477;
  /* 10081420 push 0x1008fcf8 */
  push32((uint32_t)(0x1008fcf8u));
  /* 10081425 push 0x100963f8 */
  push32((uint32_t)(0x100963f8u));
  /* 1008142a call eax */
  call_ind((uint32_t)(EAX), 0x1008142cu);
  /* 1008142c mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081436 je 0x10081477 */
  if (C.zf) goto L_10081477;
  /* 10081438 push 0x1008fcdc */
  push32((uint32_t)(0x1008fcdcu));
  /* 1008143d push 0x100963f0 */
  push32((uint32_t)(0x100963f0u));
  /* 10081442 call eax */
  call_ind((uint32_t)(EAX), 0x10081444u);
  /* 10081444 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081449 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008144c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008144e je 0x10081477 */
  if (C.zf) goto L_10081477;
  /* 10081450 push 0x1008fcc0 */
  push32((uint32_t)(0x1008fcc0u));
  /* 10081455 push 0x100963e8 */
  push32((uint32_t)(0x100963e8u));
  /* 1008145a call eax */
  call_ind((uint32_t)(EAX), 0x1008145cu);
  /* 1008145c mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081461 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081464 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081466 je 0x10081477 */
  if (C.zf) goto L_10081477;
  /* 10081468 push 0x1008fca4 */
  push32((uint32_t)(0x1008fca4u));
  /* 1008146d push 0x100963e0 */
  push32((uint32_t)(0x100963e0u));
  /* 10081472 call eax */
  call_ind((uint32_t)(EAX), 0x10081474u);
  /* 10081474 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10081477:;
  /* 10081477 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 1008147c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008147e je 0x1008148f */
  if (C.zf) goto L_1008148f;
  /* 10081480 push 0x1008fc90 */
  push32((uint32_t)(0x1008fc90u));
  /* 10081485 push 0x10096000 */
  push32((uint32_t)(0x10096000u));
  /* 1008148a call eax */
  call_ind((uint32_t)(EAX), 0x1008148cu);
  /* 1008148c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008148f:;
  /* 1008148f call dword ptr [0x10096520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096520))), 0x10081495u);
  /* 10081495 mov dword ptr [0x100962d4], eax */
  w32((uint32_t)(0x100962d4), (EAX));
  /* 1008149a call 0x10082700 */
  push32(0x1008149fu); f_10082700();
  /* 1008149f mov ecx, eax */
  ECX = (EAX);
  /* 100814a1 mov eax, dword ptr [0x100962d4] */
  EAX = (r32((uint32_t)(0x100962d4)));
  /* 100814a6 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 100814ac mov dword ptr [eax*4 + 0x10095fb8], ecx */
  w32((uint32_t)(EAX*4 + 0x10095fb8), (ECX));
  /* 100814b3 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 100814b6 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 100814b9 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 100814bc lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 100814bf shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100814c2 mov dword ptr [eax + 0x10093b10], 0 */
  w32((uint32_t)(EAX + 0x10093b10), (0x0u));
  /* 100814cc mov dword ptr [eax + 0x10093ca4], 0 */
  w32((uint32_t)(EAX + 0x10093ca4), (0x0u));
  /* 100814d6 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100814db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100814dd je 0x100814ee */
  if (C.zf) goto L_100814ee;
  /* 100814df push 0x1008fc74 */
  push32((uint32_t)(0x1008fc74u));
  /* 100814e4 push 0x100960f0 */
  push32((uint32_t)(0x100960f0u));
  /* 100814e9 call eax */
  call_ind((uint32_t)(EAX), 0x100814ebu);
  /* 100814eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100814ee:;
  /* 100814ee mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 100814f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100814f5 je 0x10081506 */
  if (C.zf) goto L_10081506;
  /* 100814f7 push 0x1008fc60 */
  push32((uint32_t)(0x1008fc60u));
  /* 100814fc push 0x100938a8 */
  push32((uint32_t)(0x100938a8u));
  /* 10081501 call eax */
  call_ind((uint32_t)(EAX), 0x10081503u);
  /* 10081503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10081506:;
  /* 10081506 push ebp */
  push32((uint32_t)(EBP));
  /* 10081507 push esi */
  push32((uint32_t)(ESI));
  /* 10081508 push edi */
  push32((uint32_t)(EDI));
  /* 10081509 call 0x10082700 */
  push32(0x1008150eu); f_10082700();
  /* 1008150e mov edx, eax */
  EDX = (EAX);
  /* 10081510 mov edi, 0x1008fc50 */
  EDI = (0x1008fc50u);
  /* 10081515 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10081518 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008151a repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1008151c not ecx */
  ECX = (~(ECX));
  /* 1008151e sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10081520 lea ebp, [esp + 0x3c] */
  EBP = ((uint32_t)(ESP + 0x3c));
  /* 10081524 mov eax, ecx */
  EAX = (ECX);
  /* 10081526 mov esi, edi */
  ESI = (EDI);
  /* 10081528 mov edi, ebp */
  EDI = (EBP);
  /* 1008152a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1008152d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10081530 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10081532 mov ecx, eax */
  ECX = (EAX);
  /* 10081534 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10081537 cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008153a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 1008153c lea edx, [esp + 0xc] */
  EDX = ((uint32_t)(ESP + 0xc));
  /* 10081540 mov edi, 0x1008fc40 */
  EDI = (0x1008fc40u);
  /* 10081545 je 0x1008154c */
  if (C.zf) goto L_1008154c;
  /* 10081547 mov edi, 0x1008fc30 */
  EDI = (0x1008fc30u);
L_1008154c:;
  /* 1008154c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1008154f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10081551 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10081553 not ecx */
  ECX = (~(ECX));
  /* 10081555 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10081557 mov eax, ecx */
  EAX = (ECX);
  /* 10081559 mov esi, edi */
  ESI = (EDI);
  /* 1008155b mov edi, edx */
  EDI = (EDX);
  /* 1008155d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10081560 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10081562 mov ecx, eax */
  ECX = (EAX);
  /* 10081564 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081569 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1008156c rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 1008156e pop edi */
  EDI = (pop32());
  /* 1008156f pop esi */
  ESI = (pop32());
  /* 10081570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081572 pop ebp */
  EBP = (pop32());
  /* 10081573 je 0x100815b9 */
  if (C.zf) goto L_100815b9;
  /* 10081575 push 0x1008fc18 */
  push32((uint32_t)(0x1008fc18u));
  /* 1008157a push 0x10096298 */
  push32((uint32_t)(0x10096298u));
  /* 1008157f call eax */
  call_ind((uint32_t)(EAX), 0x10081581u);
  /* 10081581 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008158b je 0x100815b9 */
  if (C.zf) goto L_100815b9;
  /* 1008158d push 0x1008fc00 */
  push32((uint32_t)(0x1008fc00u));
  /* 10081592 push 0x10096348 */
  push32((uint32_t)(0x10096348u));
  /* 10081597 call eax */
  call_ind((uint32_t)(EAX), 0x10081599u);
  /* 10081599 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 1008159e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100815a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100815a3 je 0x100815b9 */
  if (C.zf) goto L_100815b9;
  /* 100815a5 push 0x1008fbec */
  push32((uint32_t)(0x1008fbecu));
  /* 100815aa push 0x10093720 */
  push32((uint32_t)(0x10093720u));
  /* 100815af call eax */
  call_ind((uint32_t)(EAX), 0x100815b1u);
  /* 100815b1 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 100815b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100815b9:;
  /* 100815b9 mov ecx, dword ptr [0x1009641c] */
  ECX = (r32((uint32_t)(0x1009641c)));
  /* 100815bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100815c1 je 0x100815ef */
  if (C.zf) goto L_100815ef;
  /* 100815c3 push 0x1008fbd4 */
  push32((uint32_t)(0x1008fbd4u));
  /* 100815c8 push 0x10096280 */
  push32((uint32_t)(0x10096280u));
  /* 100815cd call ecx */
  call_ind((uint32_t)(ECX), 0x100815cfu);
  /* 100815cf mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100815d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100815d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100815d9 je 0x100815ea */
  if (C.zf) goto L_100815ea;
  /* 100815db push 0x1008fbbc */
  push32((uint32_t)(0x1008fbbcu));
  /* 100815e0 push 0x10095fe8 */
  push32((uint32_t)(0x10095fe8u));
  /* 100815e5 call eax */
  call_ind((uint32_t)(EAX), 0x100815e7u);
  /* 100815e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100815ea:;
  /* 100815ea mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
L_100815ef:;
  /* 100815ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100815f1 je 0x10081602 */
  if (C.zf) goto L_10081602;
  /* 100815f3 push 0x1008fba8 */
  push32((uint32_t)(0x1008fba8u));
  /* 100815f8 push 0x10093660 */
  push32((uint32_t)(0x10093660u));
  /* 100815fd call eax */
  call_ind((uint32_t)(EAX), 0x100815ffu);
  /* 100815ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10081602:;
  /* 10081602 push 0x1008fb94 */
  push32((uint32_t)(0x1008fb94u));
  /* 10081607 call 0x100826d0 */
  push32(0x1008160cu); f_100826d0();
  /* 1008160c mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081611 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081614 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081616 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 1008161c push 0x1008fb94 */
  push32((uint32_t)(0x1008fb94u));
  /* 10081621 push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 10081626 call eax */
  call_ind((uint32_t)(EAX), 0x10081628u);
  /* 10081628 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 1008162d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081630 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081632 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 10081638 push 0x1008fb80 */
  push32((uint32_t)(0x1008fb80u));
  /* 1008163d push 0x100961b0 */
  push32((uint32_t)(0x100961b0u));
  /* 10081642 call eax */
  call_ind((uint32_t)(EAX), 0x10081644u);
  /* 10081644 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008164c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008164e je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 10081654 push 0x1008fb6c */
  push32((uint32_t)(0x1008fb6cu));
  /* 10081659 push 0x10096180 */
  push32((uint32_t)(0x10096180u));
  /* 1008165e call eax */
  call_ind((uint32_t)(EAX), 0x10081660u);
  /* 10081660 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008166a je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 10081670 push 0x1008fb58 */
  push32((uint32_t)(0x1008fb58u));
  /* 10081675 push 0x10096100 */
  push32((uint32_t)(0x10096100u));
  /* 1008167a call eax */
  call_ind((uint32_t)(EAX), 0x1008167cu);
  /* 1008167c mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081684 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081686 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 1008168c lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10081690 push ecx */
  push32((uint32_t)(ECX));
  /* 10081691 push 0x100963d0 */
  push32((uint32_t)(0x100963d0u));
  /* 10081696 call eax */
  call_ind((uint32_t)(EAX), 0x10081698u);
  /* 10081698 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 1008169d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100816a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100816a2 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 100816a8 push 0x1008fb4c */
  push32((uint32_t)(0x1008fb4cu));
  /* 100816ad push 0x10096350 */
  push32((uint32_t)(0x10096350u));
  /* 100816b2 call eax */
  call_ind((uint32_t)(EAX), 0x100816b4u);
  /* 100816b4 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 100816b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100816bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100816be je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 100816c4 lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 100816c8 push edx */
  push32((uint32_t)(EDX));
  /* 100816c9 push 0x10095fa0 */
  push32((uint32_t)(0x10095fa0u));
  /* 100816ce call eax */
  call_ind((uint32_t)(EAX), 0x100816d0u);
  /* 100816d0 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 100816d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100816d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100816da je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 100816e0 push 0x1008fb40 */
  push32((uint32_t)(0x1008fb40u));
  /* 100816e5 push 0x10096390 */
  push32((uint32_t)(0x10096390u));
  /* 100816ea call eax */
  call_ind((uint32_t)(EAX), 0x100816ecu);
  /* 100816ec mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 100816f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100816f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100816f6 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 100816fc push 0x1008fb34 */
  push32((uint32_t)(0x1008fb34u));
  /* 10081701 push 0x10093688 */
  push32((uint32_t)(0x10093688u));
  /* 10081706 call eax */
  call_ind((uint32_t)(EAX), 0x10081708u);
  /* 10081708 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 1008170d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081710 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081712 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 10081718 push 0x1008fb24 */
  push32((uint32_t)(0x1008fb24u));
  /* 1008171d push 0x100938e8 */
  push32((uint32_t)(0x100938e8u));
  /* 10081722 call eax */
  call_ind((uint32_t)(EAX), 0x10081724u);
  /* 10081724 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008172c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008172e je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 10081734 push 0x1008fb18 */
  push32((uint32_t)(0x1008fb18u));
  /* 10081739 push 0x10096210 */
  push32((uint32_t)(0x10096210u));
  /* 1008173e call eax */
  call_ind((uint32_t)(EAX), 0x10081740u);
  /* 10081740 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081745 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008174a je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 10081750 push 0x1008fdec */
  push32((uint32_t)(0x1008fdecu));
  /* 10081755 push 0x100936a0 */
  push32((uint32_t)(0x100936a0u));
  /* 1008175a call eax */
  call_ind((uint32_t)(EAX), 0x1008175cu);
  /* 1008175c mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081766 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 1008176c push 0x1008fb04 */
  push32((uint32_t)(0x1008fb04u));
  /* 10081771 push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 10081776 call eax */
  call_ind((uint32_t)(EAX), 0x10081778u);
  /* 10081778 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 1008177d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081780 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081782 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 10081788 push 0x1008faf8 */
  push32((uint32_t)(0x1008faf8u));
  /* 1008178d push 0x10095ff8 */
  push32((uint32_t)(0x10095ff8u));
  /* 10081792 call eax */
  call_ind((uint32_t)(EAX), 0x10081794u);
  /* 10081794 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008179c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008179e je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 100817a4 push 0x1008fae4 */
  push32((uint32_t)(0x1008fae4u));
  /* 100817a9 push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 100817ae call eax */
  call_ind((uint32_t)(EAX), 0x100817b0u);
  /* 100817b0 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 100817b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100817b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100817ba je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 100817c0 push 0x1008fad4 */
  push32((uint32_t)(0x1008fad4u));
  /* 100817c5 push 0x10096278 */
  push32((uint32_t)(0x10096278u));
  /* 100817ca call eax */
  call_ind((uint32_t)(EAX), 0x100817ccu);
  /* 100817cc mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 100817d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100817d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100817d6 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 100817dc push 0x1008fac8 */
  push32((uint32_t)(0x1008fac8u));
  /* 100817e1 push 0x10095ff0 */
  push32((uint32_t)(0x10095ff0u));
  /* 100817e6 call eax */
  call_ind((uint32_t)(EAX), 0x100817e8u);
  /* 100817e8 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 100817ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100817f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100817f2 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 100817f8 push 0x1008fab8 */
  push32((uint32_t)(0x1008fab8u));
  /* 100817fd push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 10081802 call eax */
  call_ind((uint32_t)(EAX), 0x10081804u);
  /* 10081804 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081809 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008180c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008180e je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 10081814 push 0x1008faa4 */
  push32((uint32_t)(0x1008faa4u));
  /* 10081819 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 1008181e call eax */
  call_ind((uint32_t)(EAX), 0x10081820u);
  /* 10081820 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081825 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081828 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008182a je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 10081830 push 0x1008fa90 */
  push32((uint32_t)(0x1008fa90u));
  /* 10081835 push 0x10096008 */
  push32((uint32_t)(0x10096008u));
  /* 1008183a call eax */
  call_ind((uint32_t)(EAX), 0x1008183cu);
  /* 1008183c mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081841 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081844 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081846 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 1008184c push 0x1008fa78 */
  push32((uint32_t)(0x1008fa78u));
  /* 10081851 push 0x10093638 */
  push32((uint32_t)(0x10093638u));
  /* 10081856 call eax */
  call_ind((uint32_t)(EAX), 0x10081858u);
  /* 10081858 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 1008185d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081860 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081862 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 10081864 push 0x1008fa6c */
  push32((uint32_t)(0x1008fa6cu));
  /* 10081869 push 0x10093898 */
  push32((uint32_t)(0x10093898u));
  /* 1008186e call eax */
  call_ind((uint32_t)(EAX), 0x10081870u);
  /* 10081870 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081875 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008187a je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 1008187c push 0x1008fa60 */
  push32((uint32_t)(0x1008fa60u));
  /* 10081881 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 10081886 call eax */
  call_ind((uint32_t)(EAX), 0x10081888u);
  /* 10081888 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 1008188d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081890 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081892 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 10081894 push 0x1008fa50 */
  push32((uint32_t)(0x1008fa50u));
  /* 10081899 push 0x10096208 */
  push32((uint32_t)(0x10096208u));
  /* 1008189e call eax */
  call_ind((uint32_t)(EAX), 0x100818a0u);
  /* 100818a0 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 100818a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100818a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100818aa je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 100818ac push 0x1008fa44 */
  push32((uint32_t)(0x1008fa44u));
  /* 100818b1 push 0x10096118 */
  push32((uint32_t)(0x10096118u));
  /* 100818b6 call eax */
  call_ind((uint32_t)(EAX), 0x100818b8u);
  /* 100818b8 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 100818bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100818c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100818c2 je 0x100818d8 */
  if (C.zf) goto L_100818d8;
  /* 100818c4 push 0x1008fa38 */
  push32((uint32_t)(0x1008fa38u));
  /* 100818c9 push 0x100962f8 */
  push32((uint32_t)(0x100962f8u));
  /* 100818ce call eax */
  call_ind((uint32_t)(EAX), 0x100818d0u);
  /* 100818d0 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 100818d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100818d8:;
  /* 100818d8 mov ecx, dword ptr [0x1009641c] */
  ECX = (r32((uint32_t)(0x1009641c)));
  /* 100818de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100818e0 je 0x1008192e */
  if (C.zf) goto L_1008192e;
  /* 100818e2 push 0x1008fa24 */
  push32((uint32_t)(0x1008fa24u));
  /* 100818e7 push 0x10096398 */
  push32((uint32_t)(0x10096398u));
  /* 100818ec call ecx */
  call_ind((uint32_t)(ECX), 0x100818eeu);
  /* 100818ee mov ecx, dword ptr [0x1009641c] */
  ECX = (r32((uint32_t)(0x1009641c)));
  /* 100818f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100818f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100818f9 je 0x10081929 */
  if (C.zf) goto L_10081929;
  /* 100818fb push 0x1008fa10 */
  push32((uint32_t)(0x1008fa10u));
  /* 10081900 push 0x10096120 */
  push32((uint32_t)(0x10096120u));
  /* 10081905 call ecx */
  call_ind((uint32_t)(ECX), 0x10081907u);
  /* 10081907 mov ecx, dword ptr [0x1009641c] */
  ECX = (r32((uint32_t)(0x1009641c)));
  /* 1008190d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081910 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10081912 je 0x10081929 */
  if (C.zf) goto L_10081929;
  /* 10081914 push 0x1008fa08 */
  push32((uint32_t)(0x1008fa08u));
  /* 10081919 push 0x10093680 */
  push32((uint32_t)(0x10093680u));
  /* 1008191e call ecx */
  call_ind((uint32_t)(ECX), 0x10081920u);
  /* 10081920 mov ecx, dword ptr [0x1009641c] */
  ECX = (r32((uint32_t)(0x1009641c)));
  /* 10081926 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10081929:;
  /* 10081929 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
L_1008192e:;
  /* 1008192e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081930 je 0x100819a7 */
  if (C.zf) goto L_100819a7;
  /* 10081932 push 0x1008f9fc */
  push32((uint32_t)(0x1008f9fcu));
  /* 10081937 push 0x10093908 */
  push32((uint32_t)(0x10093908u));
  /* 1008193c call eax */
  call_ind((uint32_t)(EAX), 0x1008193eu);
  /* 1008193e mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081946 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081948 je 0x100819a1 */
  if (C.zf) goto L_100819a1;
  /* 1008194a push 0x1008f9f0 */
  push32((uint32_t)(0x1008f9f0u));
  /* 1008194f push 0x10095fb0 */
  push32((uint32_t)(0x10095fb0u));
  /* 10081954 call eax */
  call_ind((uint32_t)(EAX), 0x10081956u);
  /* 10081956 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 1008195b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008195e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081960 je 0x100819a1 */
  if (C.zf) goto L_100819a1;
  /* 10081962 push 0x1008f9e4 */
  push32((uint32_t)(0x1008f9e4u));
  /* 10081967 push 0x100963b8 */
  push32((uint32_t)(0x100963b8u));
  /* 1008196c call eax */
  call_ind((uint32_t)(EAX), 0x1008196eu);
  /* 1008196e mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 10081973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081976 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081978 je 0x100819a1 */
  if (C.zf) goto L_100819a1;
  /* 1008197a push 0x1008f9d8 */
  push32((uint32_t)(0x1008f9d8u));
  /* 1008197f push 0x10095fa8 */
  push32((uint32_t)(0x10095fa8u));
  /* 10081984 call eax */
  call_ind((uint32_t)(EAX), 0x10081986u);
  /* 10081986 mov eax, dword ptr [0x10096418] */
  EAX = (r32((uint32_t)(0x10096418)));
  /* 1008198b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008198e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081990 je 0x100819a1 */
  if (C.zf) goto L_100819a1;
  /* 10081992 push 0x1008f9c8 */
  push32((uint32_t)(0x1008f9c8u));
  /* 10081997 push 0x100938c0 */
  push32((uint32_t)(0x100938c0u));
  /* 1008199c call eax */
  call_ind((uint32_t)(EAX), 0x1008199eu);
  /* 1008199e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100819a1:;
  /* 100819a1 mov ecx, dword ptr [0x1009641c] */
  ECX = (r32((uint32_t)(0x1009641c)));
L_100819a7:;
  /* 100819a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100819a9 je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 100819af push 0x1008f9b0 */
  push32((uint32_t)(0x1008f9b0u));
  /* 100819b4 push 0x10096370 */
  push32((uint32_t)(0x10096370u));
  /* 100819b9 call ecx */
  call_ind((uint32_t)(ECX), 0x100819bbu);
  /* 100819bb mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100819c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100819c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100819c5 je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 100819cb push 0x1008f998 */
  push32((uint32_t)(0x1008f998u));
  /* 100819d0 push 0x10096378 */
  push32((uint32_t)(0x10096378u));
  /* 100819d5 call eax */
  call_ind((uint32_t)(EAX), 0x100819d7u);
  /* 100819d7 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100819dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100819df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100819e1 je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 100819e7 push 0x1008f980 */
  push32((uint32_t)(0x1008f980u));
  /* 100819ec push 0x10096360 */
  push32((uint32_t)(0x10096360u));
  /* 100819f1 call eax */
  call_ind((uint32_t)(EAX), 0x100819f3u);
  /* 100819f3 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100819f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100819fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100819fd je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 10081a03 push 0x1008f968 */
  push32((uint32_t)(0x1008f968u));
  /* 10081a08 push 0x10096368 */
  push32((uint32_t)(0x10096368u));
  /* 10081a0d call eax */
  call_ind((uint32_t)(EAX), 0x10081a0fu);
  /* 10081a0f mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081a14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081a19 je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 10081a1f push 0x1008f950 */
  push32((uint32_t)(0x1008f950u));
  /* 10081a24 push 0x10096380 */
  push32((uint32_t)(0x10096380u));
  /* 10081a29 call eax */
  call_ind((uint32_t)(EAX), 0x10081a2bu);
  /* 10081a2b mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081a30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081a33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081a35 je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 10081a3b push 0x1008f938 */
  push32((uint32_t)(0x1008f938u));
  /* 10081a40 push 0x100962b8 */
  push32((uint32_t)(0x100962b8u));
  /* 10081a45 call eax */
  call_ind((uint32_t)(EAX), 0x10081a47u);
  /* 10081a47 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081a4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081a4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081a51 je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 10081a57 push 0x1008f920 */
  push32((uint32_t)(0x1008f920u));
  /* 10081a5c push 0x100962a0 */
  push32((uint32_t)(0x100962a0u));
  /* 10081a61 call eax */
  call_ind((uint32_t)(EAX), 0x10081a63u);
  /* 10081a63 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081a68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081a6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081a6d je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 10081a73 push 0x1008f908 */
  push32((uint32_t)(0x1008f908u));
  /* 10081a78 push 0x100962a8 */
  push32((uint32_t)(0x100962a8u));
  /* 10081a7d call eax */
  call_ind((uint32_t)(EAX), 0x10081a7fu);
  /* 10081a7f mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081a84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081a87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081a89 je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 10081a8f push 0x1008f8f0 */
  push32((uint32_t)(0x1008f8f0u));
  /* 10081a94 push 0x100962c0 */
  push32((uint32_t)(0x100962c0u));
  /* 10081a99 call eax */
  call_ind((uint32_t)(EAX), 0x10081a9bu);
  /* 10081a9b mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081aa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081aa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081aa5 je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 10081aab push 0x1008f8d8 */
  push32((uint32_t)(0x1008f8d8u));
  /* 10081ab0 push 0x100962c8 */
  push32((uint32_t)(0x100962c8u));
  /* 10081ab5 call eax */
  call_ind((uint32_t)(EAX), 0x10081ab7u);
  /* 10081ab7 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081abc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081ac1 je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 10081ac7 push 0x1008f8c0 */
  push32((uint32_t)(0x1008f8c0u));
  /* 10081acc push 0x10093930 */
  push32((uint32_t)(0x10093930u));
  /* 10081ad1 call eax */
  call_ind((uint32_t)(EAX), 0x10081ad3u);
  /* 10081ad3 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081ad8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081adb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081add je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 10081adf push 0x1008f8a8 */
  push32((uint32_t)(0x1008f8a8u));
  /* 10081ae4 push 0x10093938 */
  push32((uint32_t)(0x10093938u));
  /* 10081ae9 call eax */
  call_ind((uint32_t)(EAX), 0x10081aebu);
  /* 10081aeb mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081af0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081af3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081af5 je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 10081af7 push 0x1008f890 */
  push32((uint32_t)(0x1008f890u));
  /* 10081afc push 0x10093928 */
  push32((uint32_t)(0x10093928u));
  /* 10081b01 call eax */
  call_ind((uint32_t)(EAX), 0x10081b03u);
  /* 10081b03 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081b0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081b0d je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 10081b0f push 0x1008f878 */
  push32((uint32_t)(0x1008f878u));
  /* 10081b14 push 0x10095f98 */
  push32((uint32_t)(0x10095f98u));
  /* 10081b19 call eax */
  call_ind((uint32_t)(EAX), 0x10081b1bu);
  /* 10081b1b mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081b20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081b23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081b25 je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 10081b27 push 0x1008f860 */
  push32((uint32_t)(0x1008f860u));
  /* 10081b2c push 0x10095f88 */
  push32((uint32_t)(0x10095f88u));
  /* 10081b31 call eax */
  call_ind((uint32_t)(EAX), 0x10081b33u);
  /* 10081b33 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081b3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081b3d je 0x10081b4e */
  if (C.zf) goto L_10081b4e;
  /* 10081b3f push 0x1008f848 */
  push32((uint32_t)(0x1008f848u));
  /* 10081b44 push 0x10095f90 */
  push32((uint32_t)(0x10095f90u));
  /* 10081b49 call eax */
  call_ind((uint32_t)(EAX), 0x10081b4bu);
  /* 10081b4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10081b4e:;
  /* 10081b4e lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10081b52 push 0x1008f840 */
  push32((uint32_t)(0x1008f840u));
  /* 10081b57 push eax */
  push32((uint32_t)(EAX));
  /* 10081b58 call 0x10082f70 */
  push32(0x10081b5du); f_10082f70();
  /* 10081b5d push eax */
  push32((uint32_t)(EAX));
  /* 10081b5e push 0x10096038 */
  push32((uint32_t)(0x10096038u));
  /* 10081b63 call 0x100826e0 */
  push32(0x10081b68u); f_100826e0();
  /* 10081b68 lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 10081b6c push 0x1008f838 */
  push32((uint32_t)(0x1008f838u));
  /* 10081b71 push ecx */
  push32((uint32_t)(ECX));
  /* 10081b72 call 0x10082f70 */
  push32(0x10081b77u); f_10082f70();
  /* 10081b77 push eax */
  push32((uint32_t)(EAX));
  /* 10081b78 push 0x10096030 */
  push32((uint32_t)(0x10096030u));
  /* 10081b7d call 0x100826e0 */
  push32(0x10081b82u); f_100826e0();
  /* 10081b82 lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 10081b86 push 0x1008f830 */
  push32((uint32_t)(0x1008f830u));
  /* 10081b8b push edx */
  push32((uint32_t)(EDX));
  /* 10081b8c call 0x10082f70 */
  push32(0x10081b91u); f_10082f70();
  /* 10081b91 push eax */
  push32((uint32_t)(EAX));
  /* 10081b92 push 0x10096028 */
  push32((uint32_t)(0x10096028u));
  /* 10081b97 call 0x100826e0 */
  push32(0x10081b9cu); f_100826e0();
  /* 10081b9c lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 10081ba0 push 0x1008f828 */
  push32((uint32_t)(0x1008f828u));
  /* 10081ba5 push eax */
  push32((uint32_t)(EAX));
  /* 10081ba6 call 0x10082f70 */
  push32(0x10081babu); f_10082f70();
  /* 10081bab push eax */
  push32((uint32_t)(EAX));
  /* 10081bac push 0x10096020 */
  push32((uint32_t)(0x10096020u));
  /* 10081bb1 call 0x100826e0 */
  push32(0x10081bb6u); f_100826e0();
  /* 10081bb6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081bb9 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10081bbd push 0x1008f820 */
  push32((uint32_t)(0x1008f820u));
  /* 10081bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10081bc3 call 0x10082f70 */
  push32(0x10081bc8u); f_10082f70();
  /* 10081bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10081bc9 push 0x10096018 */
  push32((uint32_t)(0x10096018u));
  /* 10081bce call 0x100826e0 */
  push32(0x10081bd3u); f_100826e0();
  /* 10081bd3 lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 10081bd7 push 0x1008f818 */
  push32((uint32_t)(0x1008f818u));
  /* 10081bdc push edx */
  push32((uint32_t)(EDX));
  /* 10081bdd call 0x10082f70 */
  push32(0x10081be2u); f_10082f70();
  /* 10081be2 push eax */
  push32((uint32_t)(EAX));
  /* 10081be3 push 0x10096010 */
  push32((uint32_t)(0x10096010u));
  /* 10081be8 call 0x100826e0 */
  push32(0x10081bedu); f_100826e0();
  /* 10081bed lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 10081bf1 push 0x1008f810 */
  push32((uint32_t)(0x1008f810u));
  /* 10081bf6 push eax */
  push32((uint32_t)(EAX));
  /* 10081bf7 call 0x10082f70 */
  push32(0x10081bfcu); f_10082f70();
  /* 10081bfc push eax */
  push32((uint32_t)(EAX));
  /* 10081bfd push 0x10096150 */
  push32((uint32_t)(0x10096150u));
  /* 10081c02 call 0x100826e0 */
  push32(0x10081c07u); f_100826e0();
  /* 10081c07 lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 10081c0b push 0x1008f808 */
  push32((uint32_t)(0x1008f808u));
  /* 10081c10 push ecx */
  push32((uint32_t)(ECX));
  /* 10081c11 call 0x10082f70 */
  push32(0x10081c16u); f_10082f70();
  /* 10081c16 push eax */
  push32((uint32_t)(EAX));
  /* 10081c17 push 0x10096148 */
  push32((uint32_t)(0x10096148u));
  /* 10081c1c call 0x100826e0 */
  push32(0x10081c21u); f_100826e0();
  /* 10081c21 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081c24 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10081c28 push 0x1008f800 */
  push32((uint32_t)(0x1008f800u));
  /* 10081c2d push edx */
  push32((uint32_t)(EDX));
  /* 10081c2e call 0x10082f70 */
  push32(0x10081c33u); f_10082f70();
  /* 10081c33 push eax */
  push32((uint32_t)(EAX));
  /* 10081c34 push 0x10096140 */
  push32((uint32_t)(0x10096140u));
  /* 10081c39 call 0x100826e0 */
  push32(0x10081c3eu); f_100826e0();
  /* 10081c3e lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 10081c42 push 0x1008f7f8 */
  push32((uint32_t)(0x1008f7f8u));
  /* 10081c47 push eax */
  push32((uint32_t)(EAX));
  /* 10081c48 call 0x10082f70 */
  push32(0x10081c4du); f_10082f70();
  /* 10081c4d push eax */
  push32((uint32_t)(EAX));
  /* 10081c4e push 0x10096138 */
  push32((uint32_t)(0x10096138u));
  /* 10081c53 call 0x100826e0 */
  push32(0x10081c58u); f_100826e0();
  /* 10081c58 lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 10081c5c push 0x1008f7f0 */
  push32((uint32_t)(0x1008f7f0u));
  /* 10081c61 push ecx */
  push32((uint32_t)(ECX));
  /* 10081c62 call 0x10082f70 */
  push32(0x10081c67u); f_10082f70();
  /* 10081c67 push eax */
  push32((uint32_t)(EAX));
  /* 10081c68 push 0x10096128 */
  push32((uint32_t)(0x10096128u));
  /* 10081c6d call 0x100826e0 */
  push32(0x10081c72u); f_100826e0();
  /* 10081c72 push 0x1008f7e8 */
  push32((uint32_t)(0x1008f7e8u));
  /* 10081c77 lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 10081c7b push edx */
  push32((uint32_t)(EDX));
  /* 10081c7c call 0x10082f70 */
  push32(0x10081c81u); f_10082f70();
  /* 10081c81 push eax */
  push32((uint32_t)(EAX));
  /* 10081c82 push 0x10096178 */
  push32((uint32_t)(0x10096178u));
  /* 10081c87 call 0x100826e0 */
  push32(0x10081c8cu); f_100826e0();
  /* 10081c8c mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081c91 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081c94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081c96 je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081c9c push 0x1008fdd4 */
  push32((uint32_t)(0x1008fdd4u));
  /* 10081ca1 push 0x10093678 */
  push32((uint32_t)(0x10093678u));
  /* 10081ca6 call eax */
  call_ind((uint32_t)(EAX), 0x10081ca8u);
  /* 10081ca8 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081cad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081cb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081cb2 je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081cb8 push 0x1008fdb8 */
  push32((uint32_t)(0x1008fdb8u));
  /* 10081cbd push 0x10093670 */
  push32((uint32_t)(0x10093670u));
  /* 10081cc2 call eax */
  call_ind((uint32_t)(EAX), 0x10081cc4u);
  /* 10081cc4 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081cc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081ccc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081cce je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081cd4 push 0x1008fd9c */
  push32((uint32_t)(0x1008fd9cu));
  /* 10081cd9 push 0x10093668 */
  push32((uint32_t)(0x10093668u));
  /* 10081cde call eax */
  call_ind((uint32_t)(EAX), 0x10081ce0u);
  /* 10081ce0 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081ce5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081ce8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081cea je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081cf0 push 0x1008fd80 */
  push32((uint32_t)(0x1008fd80u));
  /* 10081cf5 push 0x10096338 */
  push32((uint32_t)(0x10096338u));
  /* 10081cfa call eax */
  call_ind((uint32_t)(EAX), 0x10081cfcu);
  /* 10081cfc mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081d01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081d04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081d06 je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081d0c push 0x1008fd64 */
  push32((uint32_t)(0x1008fd64u));
  /* 10081d11 push 0x10096330 */
  push32((uint32_t)(0x10096330u));
  /* 10081d16 call eax */
  call_ind((uint32_t)(EAX), 0x10081d18u);
  /* 10081d18 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081d1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081d20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081d22 je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081d28 push 0x1008fd48 */
  push32((uint32_t)(0x1008fd48u));
  /* 10081d2d push 0x10096328 */
  push32((uint32_t)(0x10096328u));
  /* 10081d32 call eax */
  call_ind((uint32_t)(EAX), 0x10081d34u);
  /* 10081d34 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081d39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081d3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081d3e je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081d44 push 0x1008fd30 */
  push32((uint32_t)(0x1008fd30u));
  /* 10081d49 push 0x100963b0 */
  push32((uint32_t)(0x100963b0u));
  /* 10081d4e call eax */
  call_ind((uint32_t)(EAX), 0x10081d50u);
  /* 10081d50 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081d55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081d58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081d5a je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081d60 push 0x1008fd14 */
  push32((uint32_t)(0x1008fd14u));
  /* 10081d65 push 0x100963a8 */
  push32((uint32_t)(0x100963a8u));
  /* 10081d6a call eax */
  call_ind((uint32_t)(EAX), 0x10081d6cu);
  /* 10081d6c mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081d71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081d76 je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081d7c push 0x1008fcf8 */
  push32((uint32_t)(0x1008fcf8u));
  /* 10081d81 push 0x100963f8 */
  push32((uint32_t)(0x100963f8u));
  /* 10081d86 call eax */
  call_ind((uint32_t)(EAX), 0x10081d88u);
  /* 10081d88 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081d8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081d90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081d92 je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081d98 push 0x1008fcdc */
  push32((uint32_t)(0x1008fcdcu));
  /* 10081d9d push 0x100963f0 */
  push32((uint32_t)(0x100963f0u));
  /* 10081da2 call eax */
  call_ind((uint32_t)(EAX), 0x10081da4u);
  /* 10081da4 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081da9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081dac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081dae je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081db4 push 0x1008fcc0 */
  push32((uint32_t)(0x1008fcc0u));
  /* 10081db9 push 0x100963e8 */
  push32((uint32_t)(0x100963e8u));
  /* 10081dbe call eax */
  call_ind((uint32_t)(EAX), 0x10081dc0u);
  /* 10081dc0 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081dc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081dc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081dca je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081dd0 push 0x1008fca4 */
  push32((uint32_t)(0x1008fca4u));
  /* 10081dd5 push 0x100963e0 */
  push32((uint32_t)(0x100963e0u));
  /* 10081dda call eax */
  call_ind((uint32_t)(EAX), 0x10081ddcu);
  /* 10081ddc mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081de4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081de6 je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081dec push 0x1008f7d4 */
  push32((uint32_t)(0x1008f7d4u));
  /* 10081df1 push 0x100936d8 */
  push32((uint32_t)(0x100936d8u));
  /* 10081df6 call eax */
  call_ind((uint32_t)(EAX), 0x10081df8u);
  /* 10081df8 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081dfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081e00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081e02 je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081e08 push 0x1008f7c0 */
  push32((uint32_t)(0x1008f7c0u));
  /* 10081e0d push 0x100936d0 */
  push32((uint32_t)(0x100936d0u));
  /* 10081e12 call eax */
  call_ind((uint32_t)(EAX), 0x10081e14u);
  /* 10081e14 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081e19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081e1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081e1e je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081e24 push 0x1008f7ac */
  push32((uint32_t)(0x1008f7acu));
  /* 10081e29 push 0x100936c8 */
  push32((uint32_t)(0x100936c8u));
  /* 10081e2e call eax */
  call_ind((uint32_t)(EAX), 0x10081e30u);
  /* 10081e30 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081e35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081e38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081e3a je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081e40 push 0x1008f798 */
  push32((uint32_t)(0x1008f798u));
  /* 10081e45 push 0x100936c0 */
  push32((uint32_t)(0x100936c0u));
  /* 10081e4a call eax */
  call_ind((uint32_t)(EAX), 0x10081e4cu);
  /* 10081e4c mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081e51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081e54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081e56 je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081e5c push 0x1008f784 */
  push32((uint32_t)(0x1008f784u));
  /* 10081e61 push 0x10093698 */
  push32((uint32_t)(0x10093698u));
  /* 10081e66 call eax */
  call_ind((uint32_t)(EAX), 0x10081e68u);
  /* 10081e68 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081e6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081e70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081e72 je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081e78 push 0x1008f770 */
  push32((uint32_t)(0x1008f770u));
  /* 10081e7d push 0x10093690 */
  push32((uint32_t)(0x10093690u));
  /* 10081e82 call eax */
  call_ind((uint32_t)(EAX), 0x10081e84u);
  /* 10081e84 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081e8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081e8e je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081e94 push 0x1008f75c */
  push32((uint32_t)(0x1008f75cu));
  /* 10081e99 push 0x10093768 */
  push32((uint32_t)(0x10093768u));
  /* 10081e9e call eax */
  call_ind((uint32_t)(EAX), 0x10081ea0u);
  /* 10081ea0 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081ea5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081eaa je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081eac push 0x1008f748 */
  push32((uint32_t)(0x1008f748u));
  /* 10081eb1 push 0x10093760 */
  push32((uint32_t)(0x10093760u));
  /* 10081eb6 call eax */
  call_ind((uint32_t)(EAX), 0x10081eb8u);
  /* 10081eb8 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081ebd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081ec2 je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081ec4 push 0x1008f734 */
  push32((uint32_t)(0x1008f734u));
  /* 10081ec9 push 0x10093758 */
  push32((uint32_t)(0x10093758u));
  /* 10081ece call eax */
  call_ind((uint32_t)(EAX), 0x10081ed0u);
  /* 10081ed0 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081ed5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081eda je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081edc push 0x1008f720 */
  push32((uint32_t)(0x1008f720u));
  /* 10081ee1 push 0x10093740 */
  push32((uint32_t)(0x10093740u));
  /* 10081ee6 call eax */
  call_ind((uint32_t)(EAX), 0x10081ee8u);
  /* 10081ee8 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081eed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081ef0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081ef2 je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081ef4 push 0x1008f70c */
  push32((uint32_t)(0x1008f70cu));
  /* 10081ef9 push 0x10093738 */
  push32((uint32_t)(0x10093738u));
  /* 10081efe call eax */
  call_ind((uint32_t)(EAX), 0x10081f00u);
  /* 10081f00 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10081f05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10081f0a je 0x10081f1b */
  if (C.zf) goto L_10081f1b;
  /* 10081f0c push 0x1008f6f8 */
  push32((uint32_t)(0x1008f6f8u));
  /* 10081f11 push 0x10093730 */
  push32((uint32_t)(0x10093730u));
  /* 10081f16 call eax */
  call_ind((uint32_t)(EAX), 0x10081f18u);
  /* 10081f18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10081f1b:;
  /* 10081f1b lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 10081f1f push 0x1008f840 */
  push32((uint32_t)(0x1008f840u));
  /* 10081f24 push eax */
  push32((uint32_t)(EAX));
  /* 10081f25 call 0x10082f70 */
  push32(0x10081f2au); f_10082f70();
  /* 10081f2a push eax */
  push32((uint32_t)(EAX));
  /* 10081f2b push 0x10093700 */
  push32((uint32_t)(0x10093700u));
  /* 10081f30 call 0x100826e0 */
  push32(0x10081f35u); f_100826e0();
  /* 10081f35 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 10081f39 push 0x1008f838 */
  push32((uint32_t)(0x1008f838u));
  /* 10081f3e push ecx */
  push32((uint32_t)(ECX));
  /* 10081f3f call 0x10082f70 */
  push32(0x10081f44u); f_10082f70();
  /* 10081f44 push eax */
  push32((uint32_t)(EAX));
  /* 10081f45 push 0x10093708 */
  push32((uint32_t)(0x10093708u));
  /* 10081f4a call 0x100826e0 */
  push32(0x10081f4fu); f_100826e0();
  /* 10081f4f lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 10081f53 push 0x1008f830 */
  push32((uint32_t)(0x1008f830u));
  /* 10081f58 push edx */
  push32((uint32_t)(EDX));
  /* 10081f59 call 0x10082f70 */
  push32(0x10081f5eu); f_10082f70();
  /* 10081f5e push eax */
  push32((uint32_t)(EAX));
  /* 10081f5f push 0x10093710 */
  push32((uint32_t)(0x10093710u));
  /* 10081f64 call 0x100826e0 */
  push32(0x10081f69u); f_100826e0();
  /* 10081f69 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10081f6d push 0x1008f828 */
  push32((uint32_t)(0x1008f828u));
  /* 10081f72 push eax */
  push32((uint32_t)(EAX));
  /* 10081f73 call 0x10082f70 */
  push32(0x10081f78u); f_10082f70();
  /* 10081f78 push eax */
  push32((uint32_t)(EAX));
  /* 10081f79 push 0x10093718 */
  push32((uint32_t)(0x10093718u));
  /* 10081f7e call 0x100826e0 */
  push32(0x10081f83u); f_100826e0();
  /* 10081f83 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081f86 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 10081f8a push 0x1008f820 */
  push32((uint32_t)(0x1008f820u));
  /* 10081f8f push ecx */
  push32((uint32_t)(ECX));
  /* 10081f90 call 0x10082f70 */
  push32(0x10081f95u); f_10082f70();
  /* 10081f95 push eax */
  push32((uint32_t)(EAX));
  /* 10081f96 push 0x100936e0 */
  push32((uint32_t)(0x100936e0u));
  /* 10081f9b call 0x100826e0 */
  push32(0x10081fa0u); f_100826e0();
  /* 10081fa0 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 10081fa4 push 0x1008f818 */
  push32((uint32_t)(0x1008f818u));
  /* 10081fa9 push edx */
  push32((uint32_t)(EDX));
  /* 10081faa call 0x10082f70 */
  push32(0x10081fafu); f_10082f70();
  /* 10081faf push eax */
  push32((uint32_t)(EAX));
  /* 10081fb0 push 0x100936f0 */
  push32((uint32_t)(0x100936f0u));
  /* 10081fb5 call 0x100826e0 */
  push32(0x10081fbau); f_100826e0();
  /* 10081fba lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 10081fbe push 0x1008f810 */
  push32((uint32_t)(0x1008f810u));
  /* 10081fc3 push eax */
  push32((uint32_t)(EAX));
  /* 10081fc4 call 0x10082f70 */
  push32(0x10081fc9u); f_10082f70();
  /* 10081fc9 push eax */
  push32((uint32_t)(EAX));
  /* 10081fca push 0x100937a8 */
  push32((uint32_t)(0x100937a8u));
  /* 10081fcf call 0x100826e0 */
  push32(0x10081fd4u); f_100826e0();
  /* 10081fd4 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10081fd8 push 0x1008f808 */
  push32((uint32_t)(0x1008f808u));
  /* 10081fdd push ecx */
  push32((uint32_t)(ECX));
  /* 10081fde call 0x10082f70 */
  push32(0x10081fe3u); f_10082f70();
  /* 10081fe3 push eax */
  push32((uint32_t)(EAX));
  /* 10081fe4 push 0x100937b0 */
  push32((uint32_t)(0x100937b0u));
  /* 10081fe9 call 0x100826e0 */
  push32(0x10081feeu); f_100826e0();
  /* 10081fee add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10081ff1 lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 10081ff5 push 0x1008f800 */
  push32((uint32_t)(0x1008f800u));
  /* 10081ffa push edx */
  push32((uint32_t)(EDX));
  /* 10081ffb call 0x10082f70 */
  push32(0x10082000u); f_10082f70();
  /* 10082000 push eax */
  push32((uint32_t)(EAX));
  /* 10082001 push 0x100937b8 */
  push32((uint32_t)(0x100937b8u));
  /* 10082006 call 0x100826e0 */
  push32(0x1008200bu); f_100826e0();
  /* 1008200b lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 1008200f push 0x1008f7f8 */
  push32((uint32_t)(0x1008f7f8u));
  /* 10082014 push eax */
  push32((uint32_t)(EAX));
  /* 10082015 call 0x10082f70 */
  push32(0x1008201au); f_10082f70();
  /* 1008201a push eax */
  push32((uint32_t)(EAX));
  /* 1008201b push 0x10093790 */
  push32((uint32_t)(0x10093790u));
  /* 10082020 call 0x100826e0 */
  push32(0x10082025u); f_100826e0();
  /* 10082025 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 10082029 push 0x1008f7f0 */
  push32((uint32_t)(0x1008f7f0u));
  /* 1008202e push ecx */
  push32((uint32_t)(ECX));
  /* 1008202f call 0x10082f70 */
  push32(0x10082034u); f_10082f70();
  /* 10082034 push eax */
  push32((uint32_t)(EAX));
  /* 10082035 push 0x10093798 */
  push32((uint32_t)(0x10093798u));
  /* 1008203a call 0x100826e0 */
  push32(0x1008203fu); f_100826e0();
  /* 1008203f push 0x1008f7e8 */
  push32((uint32_t)(0x1008f7e8u));
  /* 10082044 lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 10082048 push edx */
  push32((uint32_t)(EDX));
  /* 10082049 call 0x10082f70 */
  push32(0x1008204eu); f_10082f70();
  /* 1008204e push eax */
  push32((uint32_t)(EAX));
  /* 1008204f push 0x100937a0 */
  push32((uint32_t)(0x100937a0u));
  /* 10082054 call 0x100826e0 */
  push32(0x10082059u); f_100826e0();
  /* 10082059 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008205e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082061 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082063 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082069 push 0x1008f6e8 */
  push32((uint32_t)(0x1008f6e8u));
  /* 1008206e push 0x100961f8 */
  push32((uint32_t)(0x100961f8u));
  /* 10082073 call eax */
  call_ind((uint32_t)(EAX), 0x10082075u);
  /* 10082075 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008207a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008207d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008207f je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082085 push 0x1008f6d4 */
  push32((uint32_t)(0x1008f6d4u));
  /* 1008208a push 0x100961f0 */
  push32((uint32_t)(0x100961f0u));
  /* 1008208f call eax */
  call_ind((uint32_t)(EAX), 0x10082091u);
  /* 10082091 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082096 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008209b je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100820a1 push 0x1008f6c0 */
  push32((uint32_t)(0x1008f6c0u));
  /* 100820a6 push 0x100961c0 */
  push32((uint32_t)(0x100961c0u));
  /* 100820ab call eax */
  call_ind((uint32_t)(EAX), 0x100820adu);
  /* 100820ad mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100820b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100820b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100820b7 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100820bd push 0x1008f6ac */
  push32((uint32_t)(0x1008f6acu));
  /* 100820c2 push 0x100961b8 */
  push32((uint32_t)(0x100961b8u));
  /* 100820c7 call eax */
  call_ind((uint32_t)(EAX), 0x100820c9u);
  /* 100820c9 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100820ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100820d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100820d3 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100820d9 push 0x1008f698 */
  push32((uint32_t)(0x1008f698u));
  /* 100820de push 0x100961c8 */
  push32((uint32_t)(0x100961c8u));
  /* 100820e3 call eax */
  call_ind((uint32_t)(EAX), 0x100820e5u);
  /* 100820e5 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100820ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100820ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100820ef je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100820f5 push 0x1008f684 */
  push32((uint32_t)(0x1008f684u));
  /* 100820fa push 0x100960b8 */
  push32((uint32_t)(0x100960b8u));
  /* 100820ff call eax */
  call_ind((uint32_t)(EAX), 0x10082101u);
  /* 10082101 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008210b je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082111 push 0x1008f670 */
  push32((uint32_t)(0x1008f670u));
  /* 10082116 push 0x100960c0 */
  push32((uint32_t)(0x100960c0u));
  /* 1008211b call eax */
  call_ind((uint32_t)(EAX), 0x1008211du);
  /* 1008211d mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082122 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082125 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082127 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 1008212d push 0x1008f65c */
  push32((uint32_t)(0x1008f65cu));
  /* 10082132 push 0x100960c8 */
  push32((uint32_t)(0x100960c8u));
  /* 10082137 call eax */
  call_ind((uint32_t)(EAX), 0x10082139u);
  /* 10082139 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008213e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082143 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082149 push 0x1008f648 */
  push32((uint32_t)(0x1008f648u));
  /* 1008214e push 0x100960d0 */
  push32((uint32_t)(0x100960d0u));
  /* 10082153 call eax */
  call_ind((uint32_t)(EAX), 0x10082155u);
  /* 10082155 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008215a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008215d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008215f je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082165 push 0x1008f640 */
  push32((uint32_t)(0x1008f640u));
  /* 1008216a push 0x100961d8 */
  push32((uint32_t)(0x100961d8u));
  /* 1008216f call eax */
  call_ind((uint32_t)(EAX), 0x10082171u);
  /* 10082171 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008217b je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082181 push 0x1008f638 */
  push32((uint32_t)(0x1008f638u));
  /* 10082186 push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 1008218b call eax */
  call_ind((uint32_t)(EAX), 0x1008218du);
  /* 1008218d mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082195 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082197 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 1008219d push 0x1008f640 */
  push32((uint32_t)(0x1008f640u));
  /* 100821a2 push 0x100961d8 */
  push32((uint32_t)(0x100961d8u));
  /* 100821a7 call eax */
  call_ind((uint32_t)(EAX), 0x100821a9u);
  /* 100821a9 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100821ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100821b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100821b3 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100821b9 push 0x1008f638 */
  push32((uint32_t)(0x1008f638u));
  /* 100821be push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 100821c3 call eax */
  call_ind((uint32_t)(EAX), 0x100821c5u);
  /* 100821c5 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100821ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100821cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100821cf je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100821d5 push 0x1008f630 */
  push32((uint32_t)(0x1008f630u));
  /* 100821da push 0x10093978 */
  push32((uint32_t)(0x10093978u));
  /* 100821df call eax */
  call_ind((uint32_t)(EAX), 0x100821e1u);
  /* 100821e1 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100821e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100821e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100821eb je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100821f1 push 0x1008f628 */
  push32((uint32_t)(0x1008f628u));
  /* 100821f6 push 0x10096098 */
  push32((uint32_t)(0x10096098u));
  /* 100821fb call eax */
  call_ind((uint32_t)(EAX), 0x100821fdu);
  /* 100821fd mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082202 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082207 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 1008220d push 0x1008f620 */
  push32((uint32_t)(0x1008f620u));
  /* 10082212 push 0x10096050 */
  push32((uint32_t)(0x10096050u));
  /* 10082217 call eax */
  call_ind((uint32_t)(EAX), 0x10082219u);
  /* 10082219 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008221e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082223 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082229 push 0x1008f618 */
  push32((uint32_t)(0x1008f618u));
  /* 1008222e push 0x10096058 */
  push32((uint32_t)(0x10096058u));
  /* 10082233 call eax */
  call_ind((uint32_t)(EAX), 0x10082235u);
  /* 10082235 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008223a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008223d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008223f je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082245 push 0x1008f610 */
  push32((uint32_t)(0x1008f610u));
  /* 1008224a push 0x10096060 */
  push32((uint32_t)(0x10096060u));
  /* 1008224f call eax */
  call_ind((uint32_t)(EAX), 0x10082251u);
  /* 10082251 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082256 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008225b je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082261 push 0x1008f608 */
  push32((uint32_t)(0x1008f608u));
  /* 10082266 push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 1008226b call eax */
  call_ind((uint32_t)(EAX), 0x1008226du);
  /* 1008226d mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082272 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082277 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 1008227d push 0x1008f600 */
  push32((uint32_t)(0x1008f600u));
  /* 10082282 push 0x10096130 */
  push32((uint32_t)(0x10096130u));
  /* 10082287 call eax */
  call_ind((uint32_t)(EAX), 0x10082289u);
  /* 10082289 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008228e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082293 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082299 push 0x1008f5f8 */
  push32((uint32_t)(0x1008f5f8u));
  /* 1008229e push 0x10096170 */
  push32((uint32_t)(0x10096170u));
  /* 100822a3 call eax */
  call_ind((uint32_t)(EAX), 0x100822a5u);
  /* 100822a5 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100822aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100822ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100822af je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100822b5 push 0x1008f5f0 */
  push32((uint32_t)(0x1008f5f0u));
  /* 100822ba push 0x10096228 */
  push32((uint32_t)(0x10096228u));
  /* 100822bf call eax */
  call_ind((uint32_t)(EAX), 0x100822c1u);
  /* 100822c1 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100822c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100822c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100822cb je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100822d1 push 0x1008f5e8 */
  push32((uint32_t)(0x1008f5e8u));
  /* 100822d6 push 0x10096230 */
  push32((uint32_t)(0x10096230u));
  /* 100822db call eax */
  call_ind((uint32_t)(EAX), 0x100822ddu);
  /* 100822dd mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100822e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100822e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100822e7 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100822ed push 0x1008f5e0 */
  push32((uint32_t)(0x1008f5e0u));
  /* 100822f2 push 0x10096188 */
  push32((uint32_t)(0x10096188u));
  /* 100822f7 call eax */
  call_ind((uint32_t)(EAX), 0x100822f9u);
  /* 100822f9 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100822fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082303 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082309 push 0x1008f5d8 */
  push32((uint32_t)(0x1008f5d8u));
  /* 1008230e push 0x10096198 */
  push32((uint32_t)(0x10096198u));
  /* 10082313 call eax */
  call_ind((uint32_t)(EAX), 0x10082315u);
  /* 10082315 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008231a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008231d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008231f je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082325 push 0x1008f5d0 */
  push32((uint32_t)(0x1008f5d0u));
  /* 1008232a push 0x100961a0 */
  push32((uint32_t)(0x100961a0u));
  /* 1008232f call eax */
  call_ind((uint32_t)(EAX), 0x10082331u);
  /* 10082331 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008233b je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082341 push 0x1008f5c8 */
  push32((uint32_t)(0x1008f5c8u));
  /* 10082346 push 0x10096190 */
  push32((uint32_t)(0x10096190u));
  /* 1008234b call eax */
  call_ind((uint32_t)(EAX), 0x1008234du);
  /* 1008234d mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082352 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082355 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082357 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 1008235d push 0x1008f5c0 */
  push32((uint32_t)(0x1008f5c0u));
  /* 10082362 push 0x10093970 */
  push32((uint32_t)(0x10093970u));
  /* 10082367 call eax */
  call_ind((uint32_t)(EAX), 0x10082369u);
  /* 10082369 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008236e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082373 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082379 push 0x1008f5b8 */
  push32((uint32_t)(0x1008f5b8u));
  /* 1008237e push 0x10093900 */
  push32((uint32_t)(0x10093900u));
  /* 10082383 call eax */
  call_ind((uint32_t)(EAX), 0x10082385u);
  /* 10082385 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008238a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008238d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008238f je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082395 push 0x1008f5b0 */
  push32((uint32_t)(0x1008f5b0u));
  /* 1008239a push 0x100937c0 */
  push32((uint32_t)(0x100937c0u));
  /* 1008239f call eax */
  call_ind((uint32_t)(EAX), 0x100823a1u);
  /* 100823a1 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100823a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100823a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100823ab je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100823b1 push 0x1008f5a8 */
  push32((uint32_t)(0x1008f5a8u));
  /* 100823b6 push 0x10096110 */
  push32((uint32_t)(0x10096110u));
  /* 100823bb call eax */
  call_ind((uint32_t)(EAX), 0x100823bdu);
  /* 100823bd mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100823c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100823c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100823c7 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100823cd push 0x1008f5a0 */
  push32((uint32_t)(0x1008f5a0u));
  /* 100823d2 push 0x10093960 */
  push32((uint32_t)(0x10093960u));
  /* 100823d7 call eax */
  call_ind((uint32_t)(EAX), 0x100823d9u);
  /* 100823d9 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100823de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100823e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100823e3 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100823e9 push 0x1008f598 */
  push32((uint32_t)(0x1008f598u));
  /* 100823ee push 0x10096218 */
  push32((uint32_t)(0x10096218u));
  /* 100823f3 call eax */
  call_ind((uint32_t)(EAX), 0x100823f5u);
  /* 100823f5 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100823fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100823fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100823ff je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082405 push 0x1008f590 */
  push32((uint32_t)(0x1008f590u));
  /* 1008240a push 0x10096220 */
  push32((uint32_t)(0x10096220u));
  /* 1008240f call eax */
  call_ind((uint32_t)(EAX), 0x10082411u);
  /* 10082411 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082416 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008241b je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082421 push 0x1008f588 */
  push32((uint32_t)(0x1008f588u));
  /* 10082426 push 0x10093890 */
  push32((uint32_t)(0x10093890u));
  /* 1008242b call eax */
  call_ind((uint32_t)(EAX), 0x1008242du);
  /* 1008242d mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082437 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 1008243d push 0x1008f580 */
  push32((uint32_t)(0x1008f580u));
  /* 10082442 push 0x100938a0 */
  push32((uint32_t)(0x100938a0u));
  /* 10082447 call eax */
  call_ind((uint32_t)(EAX), 0x10082449u);
  /* 10082449 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008244e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082453 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082459 push 0x1008f578 */
  push32((uint32_t)(0x1008f578u));
  /* 1008245e push 0x10093788 */
  push32((uint32_t)(0x10093788u));
  /* 10082463 call eax */
  call_ind((uint32_t)(EAX), 0x10082465u);
  /* 10082465 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008246a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008246d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008246f je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082475 push 0x1008f570 */
  push32((uint32_t)(0x1008f570u));
  /* 1008247a push 0x10093648 */
  push32((uint32_t)(0x10093648u));
  /* 1008247f call eax */
  call_ind((uint32_t)(EAX), 0x10082481u);
  /* 10082481 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008248b je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082491 push 0x1008f568 */
  push32((uint32_t)(0x1008f568u));
  /* 10082496 push 0x10093728 */
  push32((uint32_t)(0x10093728u));
  /* 1008249b call eax */
  call_ind((uint32_t)(EAX), 0x1008249du);
  /* 1008249d mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100824a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100824a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100824a7 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100824ad push 0x1008f560 */
  push32((uint32_t)(0x1008f560u));
  /* 100824b2 push 0x10093650 */
  push32((uint32_t)(0x10093650u));
  /* 100824b7 call eax */
  call_ind((uint32_t)(EAX), 0x100824b9u);
  /* 100824b9 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100824be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100824c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100824c3 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100824c9 push 0x1008f54c */
  push32((uint32_t)(0x1008f54cu));
  /* 100824ce push 0x10096308 */
  push32((uint32_t)(0x10096308u));
  /* 100824d3 call eax */
  call_ind((uint32_t)(EAX), 0x100824d5u);
  /* 100824d5 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100824da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100824dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100824df je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100824e1 push 0x1008f538 */
  push32((uint32_t)(0x1008f538u));
  /* 100824e6 push 0x100962f0 */
  push32((uint32_t)(0x100962f0u));
  /* 100824eb call eax */
  call_ind((uint32_t)(EAX), 0x100824edu);
  /* 100824ed mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 100824f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100824f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100824f7 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 100824f9 push 0x1008f524 */
  push32((uint32_t)(0x1008f524u));
  /* 100824fe push 0x10096300 */
  push32((uint32_t)(0x10096300u));
  /* 10082503 call eax */
  call_ind((uint32_t)(EAX), 0x10082505u);
  /* 10082505 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008250a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008250d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008250f je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082511 push 0x1008f510 */
  push32((uint32_t)(0x1008f510u));
  /* 10082516 push 0x100962e0 */
  push32((uint32_t)(0x100962e0u));
  /* 1008251b call eax */
  call_ind((uint32_t)(EAX), 0x1008251du);
  /* 1008251d mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 10082522 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082525 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082527 je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082529 push 0x1008f4fc */
  push32((uint32_t)(0x1008f4fcu));
  /* 1008252e push 0x100962e8 */
  push32((uint32_t)(0x100962e8u));
  /* 10082533 call eax */
  call_ind((uint32_t)(EAX), 0x10082535u);
  /* 10082535 mov eax, dword ptr [0x1009641c] */
  EAX = (r32((uint32_t)(0x1009641c)));
  /* 1008253a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008253d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008253f je 0x10082550 */
  if (C.zf) goto L_10082550;
  /* 10082541 push 0x1008f4e8 */
  push32((uint32_t)(0x1008f4e8u));
  /* 10082546 push 0x100962d8 */
  push32((uint32_t)(0x100962d8u));
  /* 1008254b call eax */
  call_ind((uint32_t)(EAX), 0x1008254du);
  /* 1008254d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10082550:;
  /* 10082550 push 4 */
  push32((uint32_t)(0x4u));
  /* 10082552 push 4 */
  push32((uint32_t)(0x4u));
  /* 10082554 push 9 */
  push32((uint32_t)(0x9u));
  /* 10082556 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x1008255cu);
  /* 1008255c push 6 */
  push32((uint32_t)(0x6u));
  /* 1008255e call dword ptr [0x10096540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096540))), 0x10082564u);
  /* 10082564 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10082566 push 0x1008f4d4 */
  push32((uint32_t)(0x1008f4d4u));
  /* 1008256b push 0 */
  push32((uint32_t)(0x0u));
  /* 1008256d call dword ptr [0x10096544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096544))), 0x10082573u);
  /* 10082573 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10082575 push 0x1008f4c0 */
  push32((uint32_t)(0x1008f4c0u));
  /* 1008257a push 1 */
  push32((uint32_t)(0x1u));
  /* 1008257c call dword ptr [0x10096544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096544))), 0x10082582u);
  /* 10082582 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10082584 push 0x1008f4ac */
  push32((uint32_t)(0x1008f4acu));
  /* 10082589 push 2 */
  push32((uint32_t)(0x2u));
  /* 1008258b call dword ptr [0x10096544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096544))), 0x10082591u);
  /* 10082591 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10082593 push 0x1008f498 */
  push32((uint32_t)(0x1008f498u));
  /* 10082598 push 3 */
  push32((uint32_t)(0x3u));
  /* 1008259a call dword ptr [0x10096544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096544))), 0x100825a0u);
  /* 100825a0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100825a3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100825a5 push 0x1008f484 */
  push32((uint32_t)(0x1008f484u));
  /* 100825aa push 4 */
  push32((uint32_t)(0x4u));
  /* 100825ac call dword ptr [0x10096544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096544))), 0x100825b2u);
  /* 100825b2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100825b4 push 0x1008f470 */
  push32((uint32_t)(0x1008f470u));
  /* 100825b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100825bb call dword ptr [0x10096544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096544))), 0x100825c1u);
  /* 100825c1 push 0x1008fb80 */
  push32((uint32_t)(0x1008fb80u));
  /* 100825c6 call dword ptr [0x10096580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096580))), 0x100825ccu);
  /* 100825cc push 0x1008f464 */
  push32((uint32_t)(0x1008f464u));
  /* 100825d1 call dword ptr [0x1009657c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009657c))), 0x100825d7u);
  /* 100825d7 push 0x1008f454 */
  push32((uint32_t)(0x1008f454u));
  /* 100825dc call dword ptr [0x10096584] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096584))), 0x100825e2u);
  /* 100825e2 push 0x1008f448 */
  push32((uint32_t)(0x1008f448u));
  /* 100825e7 call dword ptr [0x1009658c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009658c))), 0x100825edu);
  /* 100825ed push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100825f2 call dword ptr [0x10096548] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096548))), 0x100825f8u);
  /* 100825f8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100825fa call dword ptr [0x1009654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009654c))), 0x10082600u);
  /* 10082600 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10082602 call dword ptr [0x10096550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096550))), 0x10082608u);
  /* 10082608 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 1008260d call dword ptr [0x10096554] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096554))), 0x10082613u);
  /* 10082613 push 5 */
  push32((uint32_t)(0x5u));
  /* 10082615 call dword ptr [0x10096558] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096558))), 0x1008261bu);
  /* 1008261b add esp, 0x9c */
  { uint32_t _a=(ESP),_b=(0x9cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082621 ret  */
  ESPCHK(0x10081010u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x10082630 (20 bytes, 7 insns) */
void f_10082630(void) {
  FTRACE(0x10082630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082630 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10082634 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10082638 push eax */
  push32((uint32_t)(EAX));
  /* 10082639 push ecx */
  push32((uint32_t)(ECX));
  /* 1008263a call dword ptr [0x10096530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096530))), 0x10082640u);
  /* 10082640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082643 ret  */
  ESPCHK(0x10082630u, _esp0);
  ESP += 4; return;
}

/* FUN_10002650 @ 0x10082650 (25 bytes, 9 insns) */
void f_10082650(void) {
  FTRACE(0x10082650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082650 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10082654 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10082658 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008265c push eax */
  push32((uint32_t)(EAX));
  /* 1008265d push ecx */
  push32((uint32_t)(ECX));
  /* 1008265e push edx */
  push32((uint32_t)(EDX));
  /* 1008265f call dword ptr [0x1009653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009653c))), 0x10082665u);
  /* 10082665 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082668 ret  */
  ESPCHK(0x10082650u, _esp0);
  ESP += 4; return;
}

/* FUN_10002670 @ 0x10082670 (6 bytes, 1 insns) */
void f_10082670(void) {
  FTRACE(0x10082670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082670 jmp dword ptr [0x10096568] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10096568)))); return;
}

/* FUN_10002680 @ 0x10082680 (20 bytes, 7 insns) */
void f_10082680(void) {
  FTRACE(0x10082680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082680 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10082684 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10082688 push eax */
  push32((uint32_t)(EAX));
  /* 10082689 push ecx */
  push32((uint32_t)(ECX));
  /* 1008268a call dword ptr [0x10096588] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096588))), 0x10082690u);
  /* 10082690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082693 ret  */
  ESPCHK(0x10082680u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x100826a0 (6 bytes, 1 insns) */
void f_100826a0(void) {
  FTRACE(0x100826a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100826a0 jmp dword ptr [0x10096594] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10096594)))); return;
}

/* FUN_100026b0 @ 0x100826b0 (6 bytes, 1 insns) */
void f_100826b0(void) {
  FTRACE(0x100826b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100826b0 jmp dword ptr [0x10096598] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10096598)))); return;
}

/* FUN_100026c0 @ 0x100826c0 (6 bytes, 1 insns) */
void f_100826c0(void) {
  FTRACE(0x100826c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100826c0 jmp dword ptr [0x100965a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100965a0)))); return;
}

/* FUN_100026d0 @ 0x100826d0 (13 bytes, 5 insns) */
void f_100826d0(void) {
  FTRACE(0x100826d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100826d0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100826d4 push eax */
  push32((uint32_t)(EAX));
  /* 100826d5 call dword ptr [0x100965a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100965a4))), 0x100826dbu);
  /* 100826db pop ecx */
  ECX = (pop32());
  /* 100826dc ret  */
  ESPCHK(0x100826d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026e0 @ 0x100826e0 (20 bytes, 7 insns) */
void f_100826e0(void) {
  FTRACE(0x100826e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100826e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100826e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100826e8 push eax */
  push32((uint32_t)(EAX));
  /* 100826e9 push ecx */
  push32((uint32_t)(ECX));
  /* 100826ea call dword ptr [0x100965a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100965a8))), 0x100826f0u);
  /* 100826f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100826f3 ret  */
  ESPCHK(0x100826e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10082700 (6 bytes, 1 insns) */
void f_10082700(void) {
  FTRACE(0x10082700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082700 jmp dword ptr [0x100965ac] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100965ac)))); return;
}

/* FUN_10002710 @ 0x10082710 (20 bytes, 7 insns) */
void f_10082710(void) {
  FTRACE(0x10082710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082710 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10082714 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10082718 push eax */
  push32((uint32_t)(EAX));
  /* 10082719 push ecx */
  push32((uint32_t)(ECX));
  /* 1008271a call dword ptr [0x10096288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096288))), 0x10082720u);
  /* 10082720 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082723 ret  */
  ESPCHK(0x10082710u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x10082730 (15 bytes, 5 insns) */
void f_10082730(void) {
  FTRACE(0x10082730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082730 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10082734 push eax */
  push32((uint32_t)(EAX));
  /* 10082735 call dword ptr [0x100962d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100962d0))), 0x1008273bu);
  /* 1008273b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008273e ret  */
  ESPCHK(0x10082730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10082740 (20 bytes, 7 insns) */
void f_10082740(void) {
  FTRACE(0x10082740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082740 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10082744 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10082748 push eax */
  push32((uint32_t)(EAX));
  /* 10082749 push ecx */
  push32((uint32_t)(ECX));
  /* 1008274a call dword ptr [0x10093750] */
  call_ind((uint32_t)(r32((uint32_t)(0x10093750))), 0x10082750u);
  /* 10082750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082753 ret  */
  ESPCHK(0x10082740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x10082760 (13 bytes, 5 insns) */
void f_10082760(void) {
  FTRACE(0x10082760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082760 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10082764 push eax */
  push32((uint32_t)(EAX));
  /* 10082765 call dword ptr [0x100938f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100938f0))), 0x1008276bu);
  /* 1008276b pop ecx */
  ECX = (pop32());
  /* 1008276c ret  */
  ESPCHK(0x10082760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x10082770 (15 bytes, 5 insns) */
void f_10082770(void) {
  FTRACE(0x10082770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082770 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10082774 push eax */
  push32((uint32_t)(EAX));
  /* 10082775 call dword ptr [0x100965b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100965b0))), 0x1008277bu);
  /* 1008277b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008277e ret  */
  ESPCHK(0x10082770u, _esp0);
  ESP += 4; return;
}

/* FUN_10002780 @ 0x10082780 (25 bytes, 9 insns) */
void f_10082780(void) {
  FTRACE(0x10082780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082780 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10082784 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10082788 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008278c push eax */
  push32((uint32_t)(EAX));
  /* 1008278d push ecx */
  push32((uint32_t)(ECX));
  /* 1008278e push edx */
  push32((uint32_t)(EDX));
  /* 1008278f call dword ptr [0x10095fe0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10095fe0))), 0x10082795u);
  /* 10082795 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082798 ret  */
  ESPCHK(0x10082780u, _esp0);
  ESP += 4; return;
}

/* FUN_100027a0 @ 0x100827a0 (13 bytes, 5 insns) */
void f_100827a0(void) {
  FTRACE(0x100827a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100827a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100827a4 push eax */
  push32((uint32_t)(EAX));
  /* 100827a5 call dword ptr [0x10093950] */
  call_ind((uint32_t)(r32((uint32_t)(0x10093950))), 0x100827abu);
  /* 100827ab pop ecx */
  ECX = (pop32());
  /* 100827ac ret  */
  ESPCHK(0x100827a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027b0 @ 0x100827b0 (6 bytes, 1 insns) */
void f_100827b0(void) {
  FTRACE(0x100827b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100827b0 jmp dword ptr [0x10096268] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10096268)))); return;
}

/* FUN_100027c0 @ 0x100827c0 (6 bytes, 1 insns) */
void f_100827c0(void) {
  FTRACE(0x100827c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100827c0 jmp dword ptr [0x10093968] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10093968)))); return;
}

/* FUN_100027d0 @ 0x100827d0 (82 bytes, 28 insns) */
void f_100827d0(void) {
  FTRACE(0x100827d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100827d0 mov eax, dword ptr [0x10096400] */
  EAX = (r32((uint32_t)(0x10096400)));
  /* 100827d5 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100827db push esi */
  push32((uint32_t)(ESI));
  /* 100827dc push edi */
  push32((uint32_t)(EDI));
  /* 100827dd mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 100827e4 push edi */
  push32((uint32_t)(EDI));
  /* 100827e5 push eax */
  push32((uint32_t)(EAX));
  /* 100827e6 call dword ptr [0x1008e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e088))), 0x100827ecu);
  /* 100827ec mov esi, eax */
  ESI = (EAX);
  /* 100827ee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100827f0 jne 0x10082817 */
  if (!C.zf) goto L_10082817;
  /* 100827f2 push edi */
  push32((uint32_t)(EDI));
  /* 100827f3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 100827f7 push 0x1008ff2c */
  push32((uint32_t)(0x1008ff2cu));
  /* 100827fc push ecx */
  push32((uint32_t)(ECX));
  /* 100827fd call 0x10086eb0 */
  push32(0x10082802u); f_10086eb0();
  /* 10082802 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082805 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 10082809 push esi */
  push32((uint32_t)(ESI));
  /* 1008280a push 0x1008ff1c */
  push32((uint32_t)(0x1008ff1cu));
  /* 1008280f push edx */
  push32((uint32_t)(EDX));
  /* 10082810 push esi */
  push32((uint32_t)(ESI));
  /* 10082811 call dword ptr [0x1008e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0dc))), 0x10082817u);
L_10082817:;
  /* 10082817 mov eax, esi */
  EAX = (ESI);
  /* 10082819 pop edi */
  EDI = (pop32());
  /* 1008281a pop esi */
  ESI = (pop32());
  /* 1008281b add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082821 ret  */
  ESPCHK(0x100827d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002830 @ 0x10082830 (1844 bytes, 376 insns) */
void f_10082830(void) {
  FTRACE(0x10082830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082830 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10082834 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10082835 jne 0x10082f5c */
  if (!C.zf) goto L_10082f5c;
  /* 1008283b push 0x10090680 */
  push32((uint32_t)(0x10090680u));
  /* 10082840 call dword ptr [0x1008e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e004))), 0x10082846u);
  /* 10082846 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10082848 mov dword ptr [0x10096400], eax */
  w32((uint32_t)(0x10096400), (EAX));
  /* 1008284d jne 0x10082869 */
  if (!C.zf) goto L_10082869;
  /* 1008284f push eax */
  push32((uint32_t)(EAX));
  /* 10082850 push 0x10090678 */
  push32((uint32_t)(0x10090678u));
  /* 10082855 push 0x10090660 */
  push32((uint32_t)(0x10090660u));
  /* 1008285a push eax */
  push32((uint32_t)(EAX));
  /* 1008285b call dword ptr [0x1008e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0dc))), 0x10082861u);
  /* 10082861 mov eax, 1 */
  EAX = (0x1u);
  /* 10082866 ret 0xc */
  ESPCHK(0x10082830u, _esp0);
  ESP += 16; return;
L_10082869:;
  /* 10082869 push 0x10090650 */
  push32((uint32_t)(0x10090650u));
  /* 1008286e call 0x100827d0 */
  push32(0x10082873u); f_100827d0();
  /* 10082873 push 0x10090640 */
  push32((uint32_t)(0x10090640u));
  /* 10082878 mov dword ptr [0x10096404], eax */
  w32((uint32_t)(0x10096404), (EAX));
  /* 1008287d call 0x100827d0 */
  push32(0x10082882u); f_100827d0();
  /* 10082882 push 0x10090630 */
  push32((uint32_t)(0x10090630u));
  /* 10082887 mov dword ptr [0x10096408], eax */
  w32((uint32_t)(0x10096408), (EAX));
  /* 1008288c call 0x100827d0 */
  push32(0x10082891u); f_100827d0();
  /* 10082891 push 0x10090624 */
  push32((uint32_t)(0x10090624u));
  /* 10082896 mov dword ptr [0x1009640c], eax */
  w32((uint32_t)(0x1009640c), (EAX));
  /* 1008289b call 0x100827d0 */
  push32(0x100828a0u); f_100827d0();
  /* 100828a0 push 0x10090614 */
  push32((uint32_t)(0x10090614u));
  /* 100828a5 mov dword ptr [0x10096410], eax */
  w32((uint32_t)(0x10096410), (EAX));
  /* 100828aa call 0x100827d0 */
  push32(0x100828afu); f_100827d0();
  /* 100828af push 0x10090600 */
  push32((uint32_t)(0x10090600u));
  /* 100828b4 mov dword ptr [0x10096414], eax */
  w32((uint32_t)(0x10096414), (EAX));
  /* 100828b9 call 0x100827d0 */
  push32(0x100828beu); f_100827d0();
  /* 100828be push 0x100905f0 */
  push32((uint32_t)(0x100905f0u));
  /* 100828c3 mov dword ptr [0x10096418], eax */
  w32((uint32_t)(0x10096418), (EAX));
  /* 100828c8 call 0x100827d0 */
  push32(0x100828cdu); f_100827d0();
  /* 100828cd push 0x100905e0 */
  push32((uint32_t)(0x100905e0u));
  /* 100828d2 mov dword ptr [0x1009641c], eax */
  w32((uint32_t)(0x1009641c), (EAX));
  /* 100828d7 call 0x100827d0 */
  push32(0x100828dcu); f_100827d0();
  /* 100828dc push 0x100905cc */
  push32((uint32_t)(0x100905ccu));
  /* 100828e1 mov dword ptr [0x10096420], eax */
  w32((uint32_t)(0x10096420), (EAX));
  /* 100828e6 call 0x100827d0 */
  push32(0x100828ebu); f_100827d0();
  /* 100828eb push 0x100905b8 */
  push32((uint32_t)(0x100905b8u));
  /* 100828f0 mov dword ptr [0x10096424], eax */
  w32((uint32_t)(0x10096424), (EAX));
  /* 100828f5 call 0x100827d0 */
  push32(0x100828fau); f_100827d0();
  /* 100828fa push 0x100905a8 */
  push32((uint32_t)(0x100905a8u));
  /* 100828ff mov dword ptr [0x10096428], eax */
  w32((uint32_t)(0x10096428), (EAX));
  /* 10082904 call 0x100827d0 */
  push32(0x10082909u); f_100827d0();
  /* 10082909 push 0x10090598 */
  push32((uint32_t)(0x10090598u));
  /* 1008290e mov dword ptr [0x1009642c], eax */
  w32((uint32_t)(0x1009642c), (EAX));
  /* 10082913 call 0x100827d0 */
  push32(0x10082918u); f_100827d0();
  /* 10082918 push 0x10090588 */
  push32((uint32_t)(0x10090588u));
  /* 1008291d mov dword ptr [0x10096430], eax */
  w32((uint32_t)(0x10096430), (EAX));
  /* 10082922 call 0x100827d0 */
  push32(0x10082927u); f_100827d0();
  /* 10082927 push 0x10090578 */
  push32((uint32_t)(0x10090578u));
  /* 1008292c mov dword ptr [0x10096434], eax */
  w32((uint32_t)(0x10096434), (EAX));
  /* 10082931 call 0x100827d0 */
  push32(0x10082936u); f_100827d0();
  /* 10082936 push 0x10090568 */
  push32((uint32_t)(0x10090568u));
  /* 1008293b mov dword ptr [0x10096438], eax */
  w32((uint32_t)(0x10096438), (EAX));
  /* 10082940 call 0x100827d0 */
  push32(0x10082945u); f_100827d0();
  /* 10082945 push 0x10090558 */
  push32((uint32_t)(0x10090558u));
  /* 1008294a mov dword ptr [0x1009643c], eax */
  w32((uint32_t)(0x1009643c), (EAX));
  /* 1008294f call 0x100827d0 */
  push32(0x10082954u); f_100827d0();
  /* 10082954 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082957 mov dword ptr [0x10096440], eax */
  w32((uint32_t)(0x10096440), (EAX));
  /* 1008295c push 0x10090548 */
  push32((uint32_t)(0x10090548u));
  /* 10082961 call 0x100827d0 */
  push32(0x10082966u); f_100827d0();
  /* 10082966 push 0x10090538 */
  push32((uint32_t)(0x10090538u));
  /* 1008296b mov dword ptr [0x10096444], eax */
  w32((uint32_t)(0x10096444), (EAX));
  /* 10082970 call 0x100827d0 */
  push32(0x10082975u); f_100827d0();
  /* 10082975 push 0x10090524 */
  push32((uint32_t)(0x10090524u));
  /* 1008297a mov dword ptr [0x10096448], eax */
  w32((uint32_t)(0x10096448), (EAX));
  /* 1008297f call 0x100827d0 */
  push32(0x10082984u); f_100827d0();
  /* 10082984 push 0x1009051c */
  push32((uint32_t)(0x1009051cu));
  /* 10082989 mov dword ptr [0x1009644c], eax */
  w32((uint32_t)(0x1009644c), (EAX));
  /* 1008298e call 0x100827d0 */
  push32(0x10082993u); f_100827d0();
  /* 10082993 push 0x1009050c */
  push32((uint32_t)(0x1009050cu));
  /* 10082998 mov dword ptr [0x10096450], eax */
  w32((uint32_t)(0x10096450), (EAX));
  /* 1008299d call 0x100827d0 */
  push32(0x100829a2u); f_100827d0();
  /* 100829a2 push 0x100904fc */
  push32((uint32_t)(0x100904fcu));
  /* 100829a7 mov dword ptr [0x10096454], eax */
  w32((uint32_t)(0x10096454), (EAX));
  /* 100829ac call 0x100827d0 */
  push32(0x100829b1u); f_100827d0();
  /* 100829b1 push 0x100904f0 */
  push32((uint32_t)(0x100904f0u));
  /* 100829b6 mov dword ptr [0x10096458], eax */
  w32((uint32_t)(0x10096458), (EAX));
  /* 100829bb call 0x100827d0 */
  push32(0x100829c0u); f_100827d0();
  /* 100829c0 push 0x100904e0 */
  push32((uint32_t)(0x100904e0u));
  /* 100829c5 mov dword ptr [0x1009645c], eax */
  w32((uint32_t)(0x1009645c), (EAX));
  /* 100829ca call 0x100827d0 */
  push32(0x100829cfu); f_100827d0();
  /* 100829cf push 0x100904d8 */
  push32((uint32_t)(0x100904d8u));
  /* 100829d4 mov dword ptr [0x10096460], eax */
  w32((uint32_t)(0x10096460), (EAX));
  /* 100829d9 call 0x100827d0 */
  push32(0x100829deu); f_100827d0();
  /* 100829de push 0x100904c8 */
  push32((uint32_t)(0x100904c8u));
  /* 100829e3 mov dword ptr [0x10096478], eax */
  w32((uint32_t)(0x10096478), (EAX));
  /* 100829e8 call 0x100827d0 */
  push32(0x100829edu); f_100827d0();
  /* 100829ed push 0x100904b8 */
  push32((uint32_t)(0x100904b8u));
  /* 100829f2 mov dword ptr [0x1009647c], eax */
  w32((uint32_t)(0x1009647c), (EAX));
  /* 100829f7 call 0x100827d0 */
  push32(0x100829fcu); f_100827d0();
  /* 100829fc push 0x100904ac */
  push32((uint32_t)(0x100904acu));
  /* 10082a01 mov dword ptr [0x10096480], eax */
  w32((uint32_t)(0x10096480), (EAX));
  /* 10082a06 call 0x100827d0 */
  push32(0x10082a0bu); f_100827d0();
  /* 10082a0b push 0x1009049c */
  push32((uint32_t)(0x1009049cu));
  /* 10082a10 mov dword ptr [0x10096484], eax */
  w32((uint32_t)(0x10096484), (EAX));
  /* 10082a15 call 0x100827d0 */
  push32(0x10082a1au); f_100827d0();
  /* 10082a1a push 0x10090490 */
  push32((uint32_t)(0x10090490u));
  /* 10082a1f mov dword ptr [0x10096488], eax */
  w32((uint32_t)(0x10096488), (EAX));
  /* 10082a24 call 0x100827d0 */
  push32(0x10082a29u); f_100827d0();
  /* 10082a29 push 0x10090480 */
  push32((uint32_t)(0x10090480u));
  /* 10082a2e mov dword ptr [0x100964a4], eax */
  w32((uint32_t)(0x100964a4), (EAX));
  /* 10082a33 call 0x100827d0 */
  push32(0x10082a38u); f_100827d0();
  /* 10082a38 push 0x10090478 */
  push32((uint32_t)(0x10090478u));
  /* 10082a3d mov dword ptr [0x1009648c], eax */
  w32((uint32_t)(0x1009648c), (EAX));
  /* 10082a42 call 0x100827d0 */
  push32(0x10082a47u); f_100827d0();
  /* 10082a47 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082a4a mov dword ptr [0x10096490], eax */
  w32((uint32_t)(0x10096490), (EAX));
  /* 10082a4f push 0x10090468 */
  push32((uint32_t)(0x10090468u));
  /* 10082a54 call 0x100827d0 */
  push32(0x10082a59u); f_100827d0();
  /* 10082a59 push 0x10090458 */
  push32((uint32_t)(0x10090458u));
  /* 10082a5e mov dword ptr [0x10096494], eax */
  w32((uint32_t)(0x10096494), (EAX));
  /* 10082a63 call 0x100827d0 */
  push32(0x10082a68u); f_100827d0();
  /* 10082a68 push 0x10090448 */
  push32((uint32_t)(0x10090448u));
  /* 10082a6d mov dword ptr [0x10096498], eax */
  w32((uint32_t)(0x10096498), (EAX));
  /* 10082a72 call 0x100827d0 */
  push32(0x10082a77u); f_100827d0();
  /* 10082a77 push 0x1009043c */
  push32((uint32_t)(0x1009043cu));
  /* 10082a7c mov dword ptr [0x1009649c], eax */
  w32((uint32_t)(0x1009649c), (EAX));
  /* 10082a81 call 0x100827d0 */
  push32(0x10082a86u); f_100827d0();
  /* 10082a86 push 0x10090434 */
  push32((uint32_t)(0x10090434u));
  /* 10082a8b mov dword ptr [0x100964a0], eax */
  w32((uint32_t)(0x100964a0), (EAX));
  /* 10082a90 call 0x100827d0 */
  push32(0x10082a95u); f_100827d0();
  /* 10082a95 push 0x10090424 */
  push32((uint32_t)(0x10090424u));
  /* 10082a9a mov dword ptr [0x100964a8], eax */
  w32((uint32_t)(0x100964a8), (EAX));
  /* 10082a9f call 0x100827d0 */
  push32(0x10082aa4u); f_100827d0();
  /* 10082aa4 push 0x10090414 */
  push32((uint32_t)(0x10090414u));
  /* 10082aa9 mov dword ptr [0x100964ac], eax */
  w32((uint32_t)(0x100964ac), (EAX));
  /* 10082aae call 0x100827d0 */
  push32(0x10082ab3u); f_100827d0();
  /* 10082ab3 push 0x10090404 */
  push32((uint32_t)(0x10090404u));
  /* 10082ab8 mov dword ptr [0x100964b0], eax */
  w32((uint32_t)(0x100964b0), (EAX));
  /* 10082abd call 0x100827d0 */
  push32(0x10082ac2u); f_100827d0();
  /* 10082ac2 push 0x100903f4 */
  push32((uint32_t)(0x100903f4u));
  /* 10082ac7 mov dword ptr [0x100964b4], eax */
  w32((uint32_t)(0x100964b4), (EAX));
  /* 10082acc call 0x100827d0 */
  push32(0x10082ad1u); f_100827d0();
  /* 10082ad1 push 0x100903e8 */
  push32((uint32_t)(0x100903e8u));
  /* 10082ad6 mov dword ptr [0x100964b8], eax */
  w32((uint32_t)(0x100964b8), (EAX));
  /* 10082adb call 0x100827d0 */
  push32(0x10082ae0u); f_100827d0();
  /* 10082ae0 push 0x100903dc */
  push32((uint32_t)(0x100903dcu));
  /* 10082ae5 mov dword ptr [0x100964bc], eax */
  w32((uint32_t)(0x100964bc), (EAX));
  /* 10082aea call 0x100827d0 */
  push32(0x10082aefu); f_100827d0();
  /* 10082aef push 0x100903cc */
  push32((uint32_t)(0x100903ccu));
  /* 10082af4 mov dword ptr [0x100964c0], eax */
  w32((uint32_t)(0x100964c0), (EAX));
  /* 10082af9 call 0x100827d0 */
  push32(0x10082afeu); f_100827d0();
  /* 10082afe push 0x100903c0 */
  push32((uint32_t)(0x100903c0u));
  /* 10082b03 mov dword ptr [0x100964c4], eax */
  w32((uint32_t)(0x100964c4), (EAX));
  /* 10082b08 call 0x100827d0 */
  push32(0x10082b0du); f_100827d0();
  /* 10082b0d push 0x100903b4 */
  push32((uint32_t)(0x100903b4u));
  /* 10082b12 mov dword ptr [0x100964c8], eax */
  w32((uint32_t)(0x100964c8), (EAX));
  /* 10082b17 call 0x100827d0 */
  push32(0x10082b1cu); f_100827d0();
  /* 10082b1c push 0x100903a8 */
  push32((uint32_t)(0x100903a8u));
  /* 10082b21 mov dword ptr [0x100964cc], eax */
  w32((uint32_t)(0x100964cc), (EAX));
  /* 10082b26 call 0x100827d0 */
  push32(0x10082b2bu); f_100827d0();
  /* 10082b2b push 0x1009039c */
  push32((uint32_t)(0x1009039cu));
  /* 10082b30 mov dword ptr [0x10096200], eax */
  w32((uint32_t)(0x10096200), (EAX));
  /* 10082b35 call 0x100827d0 */
  push32(0x10082b3au); f_100827d0();
  /* 10082b3a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082b3d mov dword ptr [0x100964d0], eax */
  w32((uint32_t)(0x100964d0), (EAX));
  /* 10082b42 push 0x10090390 */
  push32((uint32_t)(0x10090390u));
  /* 10082b47 call 0x100827d0 */
  push32(0x10082b4cu); f_100827d0();
  /* 10082b4c push 0x10090384 */
  push32((uint32_t)(0x10090384u));
  /* 10082b51 mov dword ptr [0x100964d4], eax */
  w32((uint32_t)(0x100964d4), (EAX));
  /* 10082b56 call 0x100827d0 */
  push32(0x10082b5bu); f_100827d0();
  /* 10082b5b push 0x10090374 */
  push32((uint32_t)(0x10090374u));
  /* 10082b60 mov dword ptr [0x100964d8], eax */
  w32((uint32_t)(0x100964d8), (EAX));
  /* 10082b65 call 0x100827d0 */
  push32(0x10082b6au); f_100827d0();
  /* 10082b6a push 0x10090368 */
  push32((uint32_t)(0x10090368u));
  /* 10082b6f mov dword ptr [0x100964dc], eax */
  w32((uint32_t)(0x100964dc), (EAX));
  /* 10082b74 call 0x100827d0 */
  push32(0x10082b79u); f_100827d0();
  /* 10082b79 push 0x1009035c */
  push32((uint32_t)(0x1009035cu));
  /* 10082b7e mov dword ptr [0x100964e0], eax */
  w32((uint32_t)(0x100964e0), (EAX));
  /* 10082b83 call 0x100827d0 */
  push32(0x10082b88u); f_100827d0();
  /* 10082b88 mov dword ptr [0x100964e4], eax */
  w32((uint32_t)(0x100964e4), (EAX));
  /* 10082b8d push 0x1009034c */
  push32((uint32_t)(0x1009034cu));
  /* 10082b92 call 0x100827d0 */
  push32(0x10082b97u); f_100827d0();
  /* 10082b97 push 0x1009033c */
  push32((uint32_t)(0x1009033cu));
  /* 10082b9c mov dword ptr [0x100964e8], eax */
  w32((uint32_t)(0x100964e8), (EAX));
  /* 10082ba1 call 0x100827d0 */
  push32(0x10082ba6u); f_100827d0();
  /* 10082ba6 push 0x10090330 */
  push32((uint32_t)(0x10090330u));
  /* 10082bab mov dword ptr [0x100964ec], eax */
  w32((uint32_t)(0x100964ec), (EAX));
  /* 10082bb0 call 0x100827d0 */
  push32(0x10082bb5u); f_100827d0();
  /* 10082bb5 push 0x10090328 */
  push32((uint32_t)(0x10090328u));
  /* 10082bba mov dword ptr [0x100964f0], eax */
  w32((uint32_t)(0x100964f0), (EAX));
  /* 10082bbf call 0x100827d0 */
  push32(0x10082bc4u); f_100827d0();
  /* 10082bc4 push 0x10090318 */
  push32((uint32_t)(0x10090318u));
  /* 10082bc9 mov dword ptr [0x100964f4], eax */
  w32((uint32_t)(0x100964f4), (EAX));
  /* 10082bce call 0x100827d0 */
  push32(0x10082bd3u); f_100827d0();
  /* 10082bd3 push 0x10090310 */
  push32((uint32_t)(0x10090310u));
  /* 10082bd8 mov dword ptr [0x100964f8], eax */
  w32((uint32_t)(0x100964f8), (EAX));
  /* 10082bdd call 0x100827d0 */
  push32(0x10082be2u); f_100827d0();
  /* 10082be2 push 0x10090304 */
  push32((uint32_t)(0x10090304u));
  /* 10082be7 mov dword ptr [0x100964fc], eax */
  w32((uint32_t)(0x100964fc), (EAX));
  /* 10082bec call 0x100827d0 */
  push32(0x10082bf1u); f_100827d0();
  /* 10082bf1 push 0x100902fc */
  push32((uint32_t)(0x100902fcu));
  /* 10082bf6 mov dword ptr [0x10096500], eax */
  w32((uint32_t)(0x10096500), (EAX));
  /* 10082bfb call 0x100827d0 */
  push32(0x10082c00u); f_100827d0();
  /* 10082c00 push 0x100902e8 */
  push32((uint32_t)(0x100902e8u));
  /* 10082c05 mov dword ptr [0x10096504], eax */
  w32((uint32_t)(0x10096504), (EAX));
  /* 10082c0a call 0x100827d0 */
  push32(0x10082c0fu); f_100827d0();
  /* 10082c0f push 0x100902dc */
  push32((uint32_t)(0x100902dcu));
  /* 10082c14 mov dword ptr [0x10093658], eax */
  w32((uint32_t)(0x10093658), (EAX));
  /* 10082c19 call 0x100827d0 */
  push32(0x10082c1eu); f_100827d0();
  /* 10082c1e push 0x100902d0 */
  push32((uint32_t)(0x100902d0u));
  /* 10082c23 mov dword ptr [0x10096510], eax */
  w32((uint32_t)(0x10096510), (EAX));
  /* 10082c28 call 0x100827d0 */
  push32(0x10082c2du); f_100827d0();
  /* 10082c2d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082c30 mov dword ptr [0x1009650c], eax */
  w32((uint32_t)(0x1009650c), (EAX));
  /* 10082c35 push 0x100902bc */
  push32((uint32_t)(0x100902bcu));
  /* 10082c3a call 0x100827d0 */
  push32(0x10082c3fu); f_100827d0();
  /* 10082c3f push 0x100902ac */
  push32((uint32_t)(0x100902acu));
  /* 10082c44 mov dword ptr [0x10096514], eax */
  w32((uint32_t)(0x10096514), (EAX));
  /* 10082c49 call 0x100827d0 */
  push32(0x10082c4eu); f_100827d0();
  /* 10082c4e push 0x1009029c */
  push32((uint32_t)(0x1009029cu));
  /* 10082c53 mov dword ptr [0x10096518], eax */
  w32((uint32_t)(0x10096518), (EAX));
  /* 10082c58 call 0x100827d0 */
  push32(0x10082c5du); f_100827d0();
  /* 10082c5d push 0x1009028c */
  push32((uint32_t)(0x1009028cu));
  /* 10082c62 mov dword ptr [0x1009651c], eax */
  w32((uint32_t)(0x1009651c), (EAX));
  /* 10082c67 call 0x100827d0 */
  push32(0x10082c6cu); f_100827d0();
  /* 10082c6c push 0x10090280 */
  push32((uint32_t)(0x10090280u));
  /* 10082c71 mov dword ptr [0x10096468], eax */
  w32((uint32_t)(0x10096468), (EAX));
  /* 10082c76 call 0x100827d0 */
  push32(0x10082c7bu); f_100827d0();
  /* 10082c7b push 0x10090270 */
  push32((uint32_t)(0x10090270u));
  /* 10082c80 mov dword ptr [0x10096464], eax */
  w32((uint32_t)(0x10096464), (EAX));
  /* 10082c85 call 0x100827d0 */
  push32(0x10082c8au); f_100827d0();
  /* 10082c8a push 0x1009025c */
  push32((uint32_t)(0x1009025cu));
  /* 10082c8f mov dword ptr [0x1009646c], eax */
  w32((uint32_t)(0x1009646c), (EAX));
  /* 10082c94 call 0x100827d0 */
  push32(0x10082c99u); f_100827d0();
  /* 10082c99 push 0x10090244 */
  push32((uint32_t)(0x10090244u));
  /* 10082c9e mov dword ptr [0x10096470], eax */
  w32((uint32_t)(0x10096470), (EAX));
  /* 10082ca3 call 0x100827d0 */
  push32(0x10082ca8u); f_100827d0();
  /* 10082ca8 push 0x10090234 */
  push32((uint32_t)(0x10090234u));
  /* 10082cad mov dword ptr [0x10096474], eax */
  w32((uint32_t)(0x10096474), (EAX));
  /* 10082cb2 call 0x100827d0 */
  push32(0x10082cb7u); f_100827d0();
  /* 10082cb7 push 0x1009021c */
  push32((uint32_t)(0x1009021cu));
  /* 10082cbc mov dword ptr [0x10096538], eax */
  w32((uint32_t)(0x10096538), (EAX));
  /* 10082cc1 call 0x100827d0 */
  push32(0x10082cc6u); f_100827d0();
  /* 10082cc6 push 0x1009020c */
  push32((uint32_t)(0x1009020cu));
  /* 10082ccb mov dword ptr [0x10096568], eax */
  w32((uint32_t)(0x10096568), (EAX));
  /* 10082cd0 call 0x100827d0 */
  push32(0x10082cd5u); f_100827d0();
  /* 10082cd5 push 0x10090204 */
  push32((uint32_t)(0x10090204u));
  /* 10082cda mov dword ptr [0x10096530], eax */
  w32((uint32_t)(0x10096530), (EAX));
  /* 10082cdf call 0x100827d0 */
  push32(0x10082ce4u); f_100827d0();
  /* 10082ce4 push 0x100901f4 */
  push32((uint32_t)(0x100901f4u));
  /* 10082ce9 mov dword ptr [0x1009653c], eax */
  w32((uint32_t)(0x1009653c), (EAX));
  /* 10082cee call 0x100827d0 */
  push32(0x10082cf3u); f_100827d0();
  /* 10082cf3 push 0x100901e8 */
  push32((uint32_t)(0x100901e8u));
  /* 10082cf8 mov dword ptr [0x10096588], eax */
  w32((uint32_t)(0x10096588), (EAX));
  /* 10082cfd call 0x100827d0 */
  push32(0x10082d02u); f_100827d0();
  /* 10082d02 push 0x100901e0 */
  push32((uint32_t)(0x100901e0u));
  /* 10082d07 mov dword ptr [0x10096520], eax */
  w32((uint32_t)(0x10096520), (EAX));
  /* 10082d0c call 0x100827d0 */
  push32(0x10082d11u); f_100827d0();
  /* 10082d11 push 0x100901d4 */
  push32((uint32_t)(0x100901d4u));
  /* 10082d16 mov dword ptr [0x10096524], eax */
  w32((uint32_t)(0x10096524), (EAX));
  /* 10082d1b call 0x100827d0 */
  push32(0x10082d20u); f_100827d0();
  /* 10082d20 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082d23 mov dword ptr [0x10096528], eax */
  w32((uint32_t)(0x10096528), (EAX));
  /* 10082d28 push 0x100901c4 */
  push32((uint32_t)(0x100901c4u));
  /* 10082d2d call 0x100827d0 */
  push32(0x10082d32u); f_100827d0();
  /* 10082d32 push 0x100901b0 */
  push32((uint32_t)(0x100901b0u));
  /* 10082d37 mov dword ptr [0x1009652c], eax */
  w32((uint32_t)(0x1009652c), (EAX));
  /* 10082d3c call 0x100827d0 */
  push32(0x10082d41u); f_100827d0();
  /* 10082d41 push 0x10090194 */
  push32((uint32_t)(0x10090194u));
  /* 10082d46 mov dword ptr [0x10096534], eax */
  w32((uint32_t)(0x10096534), (EAX));
  /* 10082d4b call 0x100827d0 */
  push32(0x10082d50u); f_100827d0();
  /* 10082d50 push 0x10090180 */
  push32((uint32_t)(0x10090180u));
  /* 10082d55 mov dword ptr [0x10096540], eax */
  w32((uint32_t)(0x10096540), (EAX));
  /* 10082d5a call 0x100827d0 */
  push32(0x10082d5fu); f_100827d0();
  /* 10082d5f push 0x10090174 */
  push32((uint32_t)(0x10090174u));
  /* 10082d64 mov dword ptr [0x10096544], eax */
  w32((uint32_t)(0x10096544), (EAX));
  /* 10082d69 call 0x100827d0 */
  push32(0x10082d6eu); f_100827d0();
  /* 10082d6e push 0x10090164 */
  push32((uint32_t)(0x10090164u));
  /* 10082d73 mov dword ptr [0x1009657c], eax */
  w32((uint32_t)(0x1009657c), (EAX));
  /* 10082d78 call 0x100827d0 */
  push32(0x10082d7du); f_100827d0();
  /* 10082d7d push 0x10090158 */
  push32((uint32_t)(0x10090158u));
  /* 10082d82 mov dword ptr [0x10096580], eax */
  w32((uint32_t)(0x10096580), (EAX));
  /* 10082d87 call 0x100827d0 */
  push32(0x10082d8cu); f_100827d0();
  /* 10082d8c push 0x1009014c */
  push32((uint32_t)(0x1009014cu));
  /* 10082d91 mov dword ptr [0x10096584], eax */
  w32((uint32_t)(0x10096584), (EAX));
  /* 10082d96 call 0x100827d0 */
  push32(0x10082d9bu); f_100827d0();
  /* 10082d9b push 0x10090134 */
  push32((uint32_t)(0x10090134u));
  /* 10082da0 mov dword ptr [0x1009658c], eax */
  w32((uint32_t)(0x1009658c), (EAX));
  /* 10082da5 call 0x100827d0 */
  push32(0x10082daau); f_100827d0();
  /* 10082daa push 0x10090118 */
  push32((uint32_t)(0x10090118u));
  /* 10082daf mov dword ptr [0x10096548], eax */
  w32((uint32_t)(0x10096548), (EAX));
  /* 10082db4 call 0x100827d0 */
  push32(0x10082db9u); f_100827d0();
  /* 10082db9 push 0x100900fc */
  push32((uint32_t)(0x100900fcu));
  /* 10082dbe mov dword ptr [0x1009654c], eax */
  w32((uint32_t)(0x1009654c), (EAX));
  /* 10082dc3 call 0x100827d0 */
  push32(0x10082dc8u); f_100827d0();
  /* 10082dc8 push 0x100900e4 */
  push32((uint32_t)(0x100900e4u));
  /* 10082dcd mov dword ptr [0x10096550], eax */
  w32((uint32_t)(0x10096550), (EAX));
  /* 10082dd2 call 0x100827d0 */
  push32(0x10082dd7u); f_100827d0();
  /* 10082dd7 push 0x100900cc */
  push32((uint32_t)(0x100900ccu));
  /* 10082ddc mov dword ptr [0x10096554], eax */
  w32((uint32_t)(0x10096554), (EAX));
  /* 10082de1 call 0x100827d0 */
  push32(0x10082de6u); f_100827d0();
  /* 10082de6 push 0x100900c0 */
  push32((uint32_t)(0x100900c0u));
  /* 10082deb mov dword ptr [0x10096558], eax */
  w32((uint32_t)(0x10096558), (EAX));
  /* 10082df0 call 0x100827d0 */
  push32(0x10082df5u); f_100827d0();
  /* 10082df5 push 0x100900b4 */
  push32((uint32_t)(0x100900b4u));
  /* 10082dfa mov dword ptr [0x1009655c], eax */
  w32((uint32_t)(0x1009655c), (EAX));
  /* 10082dff call 0x100827d0 */
  push32(0x10082e04u); f_100827d0();
  /* 10082e04 push 0x100900a4 */
  push32((uint32_t)(0x100900a4u));
  /* 10082e09 mov dword ptr [0x10096560], eax */
  w32((uint32_t)(0x10096560), (EAX));
  /* 10082e0e call 0x100827d0 */
  push32(0x10082e13u); f_100827d0();
  /* 10082e13 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082e16 mov dword ptr [0x10096564], eax */
  w32((uint32_t)(0x10096564), (EAX));
  /* 10082e1b push 0x10090098 */
  push32((uint32_t)(0x10090098u));
  /* 10082e20 call 0x100827d0 */
  push32(0x10082e25u); f_100827d0();
  /* 10082e25 push 0x1009008c */
  push32((uint32_t)(0x1009008cu));
  /* 10082e2a mov dword ptr [0x1009656c], eax */
  w32((uint32_t)(0x1009656c), (EAX));
  /* 10082e2f call 0x100827d0 */
  push32(0x10082e34u); f_100827d0();
  /* 10082e34 push 0x10090080 */
  push32((uint32_t)(0x10090080u));
  /* 10082e39 mov dword ptr [0x10096570], eax */
  w32((uint32_t)(0x10096570), (EAX));
  /* 10082e3e call 0x100827d0 */
  push32(0x10082e43u); f_100827d0();
  /* 10082e43 push 0x10090070 */
  push32((uint32_t)(0x10090070u));
  /* 10082e48 mov dword ptr [0x10096590], eax */
  w32((uint32_t)(0x10096590), (EAX));
  /* 10082e4d call 0x100827d0 */
  push32(0x10082e52u); f_100827d0();
  /* 10082e52 push 0x10090064 */
  push32((uint32_t)(0x10090064u));
  /* 10082e57 mov dword ptr [0x10096594], eax */
  w32((uint32_t)(0x10096594), (EAX));
  /* 10082e5c call 0x100827d0 */
  push32(0x10082e61u); f_100827d0();
  /* 10082e61 push 0x10090058 */
  push32((uint32_t)(0x10090058u));
  /* 10082e66 mov dword ptr [0x10096598], eax */
  w32((uint32_t)(0x10096598), (EAX));
  /* 10082e6b call 0x100827d0 */
  push32(0x10082e70u); f_100827d0();
  /* 10082e70 push 0x1009004c */
  push32((uint32_t)(0x1009004cu));
  /* 10082e75 mov dword ptr [0x1009659c], eax */
  w32((uint32_t)(0x1009659c), (EAX));
  /* 10082e7a call 0x100827d0 */
  push32(0x10082e7fu); f_100827d0();
  /* 10082e7f push 0x1009003c */
  push32((uint32_t)(0x1009003cu));
  /* 10082e84 mov dword ptr [0x100965a0], eax */
  w32((uint32_t)(0x100965a0), (EAX));
  /* 10082e89 call 0x100827d0 */
  push32(0x10082e8eu); f_100827d0();
  /* 10082e8e push 0x1009002c */
  push32((uint32_t)(0x1009002cu));
  /* 10082e93 mov dword ptr [0x100965a4], eax */
  w32((uint32_t)(0x100965a4), (EAX));
  /* 10082e98 call 0x100827d0 */
  push32(0x10082e9du); f_100827d0();
  /* 10082e9d push 0x10090018 */
  push32((uint32_t)(0x10090018u));
  /* 10082ea2 mov dword ptr [0x100965ac], eax */
  w32((uint32_t)(0x100965ac), (EAX));
  /* 10082ea7 call 0x100827d0 */
  push32(0x10082eacu); f_100827d0();
  /* 10082eac mov dword ptr [0x100965a8], eax */
  w32((uint32_t)(0x100965a8), (EAX));
  /* 10082eb1 push 0x10090000 */
  push32((uint32_t)(0x10090000u));
  /* 10082eb6 call 0x100827d0 */
  push32(0x10082ebbu); f_100827d0();
  /* 10082ebb push 0x1008ffe8 */
  push32((uint32_t)(0x1008ffe8u));
  /* 10082ec0 mov dword ptr [0x100938f0], eax */
  w32((uint32_t)(0x100938f0), (EAX));
  /* 10082ec5 call 0x100827d0 */
  push32(0x10082ecau); f_100827d0();
  /* 10082eca push 0x1008ffd8 */
  push32((uint32_t)(0x1008ffd8u));
  /* 10082ecf mov dword ptr [0x10093750], eax */
  w32((uint32_t)(0x10093750), (EAX));
  /* 10082ed4 call 0x100827d0 */
  push32(0x10082ed9u); f_100827d0();
  /* 10082ed9 push 0x1008ffc8 */
  push32((uint32_t)(0x1008ffc8u));
  /* 10082ede mov dword ptr [0x100965b0], eax */
  w32((uint32_t)(0x100965b0), (EAX));
  /* 10082ee3 call 0x100827d0 */
  push32(0x10082ee8u); f_100827d0();
  /* 10082ee8 push 0x1008ffb8 */
  push32((uint32_t)(0x1008ffb8u));
  /* 10082eed mov dword ptr [0x10096574], eax */
  w32((uint32_t)(0x10096574), (EAX));
  /* 10082ef2 call 0x100827d0 */
  push32(0x10082ef7u); f_100827d0();
  /* 10082ef7 push 0x1008ffa8 */
  push32((uint32_t)(0x1008ffa8u));
  /* 10082efc mov dword ptr [0x10096578], eax */
  w32((uint32_t)(0x10096578), (EAX));
  /* 10082f01 call 0x100827d0 */
  push32(0x10082f06u); f_100827d0();
  /* 10082f06 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082f09 mov dword ptr [0x100962d0], eax */
  w32((uint32_t)(0x100962d0), (EAX));
  /* 10082f0e push 0x1008ff98 */
  push32((uint32_t)(0x1008ff98u));
  /* 10082f13 call 0x100827d0 */
  push32(0x10082f18u); f_100827d0();
  /* 10082f18 push 0x1008ff88 */
  push32((uint32_t)(0x1008ff88u));
  /* 10082f1d mov dword ptr [0x10096288], eax */
  w32((uint32_t)(0x10096288), (EAX));
  /* 10082f22 call 0x100827d0 */
  push32(0x10082f27u); f_100827d0();
  /* 10082f27 push 0x1008ff78 */
  push32((uint32_t)(0x1008ff78u));
  /* 10082f2c mov dword ptr [0x10095fe0], eax */
  w32((uint32_t)(0x10095fe0), (EAX));
  /* 10082f31 call 0x100827d0 */
  push32(0x10082f36u); f_100827d0();
  /* 10082f36 push 0x1008ff68 */
  push32((uint32_t)(0x1008ff68u));
  /* 10082f3b mov dword ptr [0x10093950], eax */
  w32((uint32_t)(0x10093950), (EAX));
  /* 10082f40 call 0x100827d0 */
  push32(0x10082f45u); f_100827d0();
  /* 10082f45 push 0x1008ff54 */
  push32((uint32_t)(0x1008ff54u));
  /* 10082f4a mov dword ptr [0x10096268], eax */
  w32((uint32_t)(0x10096268), (EAX));
  /* 10082f4f call 0x100827d0 */
  push32(0x10082f54u); f_100827d0();
  /* 10082f54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082f57 mov dword ptr [0x10093968], eax */
  w32((uint32_t)(0x10093968), (EAX));
L_10082f5c:;
  /* 10082f5c mov eax, 1 */
  EAX = (0x1u);
  /* 10082f61 ret 0xc */
  ESPCHK(0x10082830u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f70 @ 0x10082f70 (34 bytes, 10 insns) */
void f_10082f70(void) {
  FTRACE(0x10082f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082f70 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10082f74 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10082f78 push eax */
  push32((uint32_t)(EAX));
  /* 10082f79 push ecx */
  push32((uint32_t)(ECX));
  /* 10082f7a push 0x1009068c */
  push32((uint32_t)(0x1009068cu));
  /* 10082f7f push 0x100937c8 */
  push32((uint32_t)(0x100937c8u));
  /* 10082f84 call 0x10086eb0 */
  push32(0x10082f89u); f_10086eb0();
  /* 10082f89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082f8c mov eax, 0x100937c8 */
  EAX = (0x100937c8u);
  /* 10082f91 ret  */
  ESPCHK(0x10082f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fa0 @ 0x10082fa0 (45 bytes, 16 insns) */
void f_10082fa0(void) {
  FTRACE(0x10082fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082fa0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10082fa4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10082fa8 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10082fad push eax */
  push32((uint32_t)(EAX));
  /* 10082fae push ecx */
  push32((uint32_t)(ECX));
  /* 10082faf call 0x10082780 */
  push32(0x10082fb4u); f_10082780();
  /* 10082fb4 mov ecx, eax */
  ECX = (EAX);
  /* 10082fb6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10082fba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082fbd lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10082fc0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10082fc3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10082fc6 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10082fc9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10082fca idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10082fcc ret  */
  ESPCHK(0x10082fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fd0 @ 0x10082fd0 (171 bytes, 77 insns) */
void f_10082fd0(void) {
  FTRACE(0x10082fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10082fd0 push ebx */
  push32((uint32_t)(EBX));
  /* 10082fd1 push ebp */
  push32((uint32_t)(EBP));
  /* 10082fd2 push esi */
  push32((uint32_t)(ESI));
  /* 10082fd3 push edi */
  push32((uint32_t)(EDI));
  /* 10082fd4 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 10082fd8 push edi */
  push32((uint32_t)(EDI));
  /* 10082fd9 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10082fdfu);
  /* 10082fdf mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10082fe3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10082fe6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10082fe8 jl 0x10082ff1 */
  if ((C.sf!=C.of)) goto L_10082ff1;
  /* 10082fea pop edi */
  EDI = (pop32());
  /* 10082feb pop esi */
  ESI = (pop32());
  /* 10082fec pop ebp */
  EBP = (pop32());
  /* 10082fed mov al, 1 */
  AL = (0x1u);
  /* 10082fef pop ebx */
  EBX = (pop32());
  /* 10082ff0 ret  */
  ESPCHK(0x10082fd0u, _esp0);
  ESP += 4; return;
L_10082ff1:;
  /* 10082ff1 push edi */
  push32((uint32_t)(EDI));
  /* 10082ff2 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10082ff8u);
  /* 10082ff8 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10082ffc sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10082ffe push esi */
  push32((uint32_t)(ESI));
  /* 10082fff push edi */
  push32((uint32_t)(EDI));
  /* 10083000 push ebp */
  push32((uint32_t)(EBP));
  /* 10083001 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 10083005 call 0x10082fa0 */
  push32(0x1008300au); f_10082fa0();
  /* 1008300a push ebp */
  push32((uint32_t)(EBP));
  /* 1008300b mov ebx, eax */
  EBX = (EAX);
  /* 1008300d call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083013u);
  /* 10083013 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083016 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083018 jle 0x10083074 */
  if ((C.zf||C.sf!=C.of)) goto L_10083074;
  /* 1008301a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083020 jle 0x10083074 */
  if ((C.zf||C.sf!=C.of)) goto L_10083074;
  /* 10083022 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 10083027 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10083029 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1008302b sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 1008302e mov eax, edx */
  EAX = (EDX);
  /* 10083030 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10083033 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10083035 mov ebx, edx */
  EBX = (EDX);
L_10083037:;
  /* 10083037 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008303a mov eax, 0xf */
  EAX = (0xfu);
  /* 1008303f jg 0x10083043 */
  if ((!C.zf&&C.sf==C.of)) goto L_10083043;
  /* 10083041 mov eax, ebx */
  EAX = (EBX);
L_10083043:;
  /* 10083043 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083045 jge 0x10083056 */
  if ((C.sf==C.of)) goto L_10083056;
  /* 10083047 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10083049 push ebp */
  push32((uint32_t)(EBP));
  /* 1008304a push edi */
  push32((uint32_t)(EDI));
  /* 1008304b call 0x10082650 */
  push32(0x10083050u); f_10082650();
  /* 10083050 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083053 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10083054 jmp 0x10083037 */
  goto L_10083037;
L_10083056:;
  /* 10083056 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1008305a push ecx */
  push32((uint32_t)(ECX));
  /* 1008305b push edi */
  push32((uint32_t)(EDI));
  /* 1008305c push ebp */
  push32((uint32_t)(EBP));
  /* 1008305d call 0x10082fa0 */
  push32(0x10083062u); f_10082fa0();
  /* 10083062 push eax */
  push32((uint32_t)(EAX));
  /* 10083063 push edi */
  push32((uint32_t)(EDI));
  /* 10083064 push ebp */
  push32((uint32_t)(EBP));
  /* 10083065 call 0x10082650 */
  push32(0x1008306au); f_10082650();
  /* 1008306a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008306d mov al, 1 */
  AL = (0x1u);
  /* 1008306f pop edi */
  EDI = (pop32());
  /* 10083070 pop esi */
  ESI = (pop32());
  /* 10083071 pop ebp */
  EBP = (pop32());
  /* 10083072 pop ebx */
  EBX = (pop32());
  /* 10083073 ret  */
  ESPCHK(0x10082fd0u, _esp0);
  ESP += 4; return;
L_10083074:;
  /* 10083074 pop edi */
  EDI = (pop32());
  /* 10083075 pop esi */
  ESI = (pop32());
  /* 10083076 pop ebp */
  EBP = (pop32());
  /* 10083077 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 10083079 pop ebx */
  EBX = (pop32());
  /* 1008307a ret  */
  ESPCHK(0x10082fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003080 @ 0x10083080 (369 bytes, 82 insns) */
void f_10083080(void) {
  FTRACE(0x10083080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10083080 push ebx */
  push32((uint32_t)(EBX));
  /* 10083081 push esi */
  push32((uint32_t)(ESI));
  /* 10083082 call dword ptr [0x10096520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096520))), 0x10083088u);
  /* 10083088 push 0x100961b0 */
  push32((uint32_t)(0x100961b0u));
  /* 1008308d mov dword ptr [0x100962d4], eax */
  w32((uint32_t)(0x100962d4), (EAX));
  /* 10083092 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10083098u);
  /* 10083098 mov ebx, 1 */
  EBX = (0x1u);
  /* 1008309d mov esi, eax */
  ESI = (EAX);
  /* 1008309f push ebx */
  push32((uint32_t)(EBX));
  /* 100830a0 call 0x10082770 */
  push32(0x100830a5u); f_10082770();
  /* 100830a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 100830a7 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100830a9 call 0x10082770 */
  push32(0x100830aeu); f_10082770();
  /* 100830ae push 5 */
  push32((uint32_t)(0x5u));
  /* 100830b0 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100830b2 call 0x10082770 */
  push32(0x100830b7u); f_10082770();
  /* 100830b7 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100830b9 mov eax, dword ptr [0x100962d4] */
  EAX = (r32((uint32_t)(0x100962d4)));
  /* 100830be push 3 */
  push32((uint32_t)(0x3u));
  /* 100830c0 mov dword ptr [0x100961d0], esi */
  w32((uint32_t)(0x100961d0), (ESI));
  /* 100830c6 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 100830c9 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 100830cc lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 100830cf lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 100830d2 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100830d5 mov ecx, dword ptr [eax + 0x10093b10] */
  ECX = (r32((uint32_t)(EAX + 0x10093b10)));
  /* 100830db lea edx, [eax + 0x10093980] */
  EDX = ((uint32_t)(EAX + 0x10093980));
  /* 100830e1 mov dword ptr [0x100961e0], edx */
  w32((uint32_t)(0x100961e0), (EDX));
  /* 100830e7 lea edx, [eax + 0x10093b14] */
  EDX = ((uint32_t)(EAX + 0x10093b14));
  /* 100830ed mov dword ptr [0x10096624], ecx */
  w32((uint32_t)(0x10096624), (ECX));
  /* 100830f3 mov ecx, dword ptr [eax + 0x10093ca4] */
  ECX = (r32((uint32_t)(EAX + 0x10093ca4)));
  /* 100830f9 mov dword ptr [0x100961e4], edx */
  w32((uint32_t)(0x100961e4), (EDX));
  /* 100830ff lea edx, [eax + 0x10093ca8] */
  EDX = ((uint32_t)(EAX + 0x10093ca8));
  /* 10083105 mov dword ptr [0x10096628], ecx */
  w32((uint32_t)(0x10096628), (ECX));
  /* 1008310b mov dword ptr [0x1009626c], edx */
  w32((uint32_t)(0x1009626c), (EDX));
  /* 10083111 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083117u);
  /* 10083117 push 0 */
  push32((uint32_t)(0x0u));
  /* 10083119 mov dword ptr [0x100962b0], eax */
  w32((uint32_t)(0x100962b0), (EAX));
  /* 1008311e call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083124u);
  /* 10083124 push 2 */
  push32((uint32_t)(0x2u));
  /* 10083126 mov dword ptr [0x10093640], eax */
  w32((uint32_t)(0x10093640), (EAX));
  /* 1008312b call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083131u);
  /* 10083131 push 4 */
  push32((uint32_t)(0x4u));
  /* 10083133 mov dword ptr [0x100963a0], eax */
  w32((uint32_t)(0x100963a0), (EAX));
  /* 10083138 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x1008313eu);
  /* 1008313e push 5 */
  push32((uint32_t)(0x5u));
  /* 10083140 mov dword ptr [0x10093748], eax */
  w32((uint32_t)(0x10093748), (EAX));
  /* 10083145 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x1008314bu);
  /* 1008314b push ebx */
  push32((uint32_t)(EBX));
  /* 1008314c mov dword ptr [0x10096108], eax */
  w32((uint32_t)(0x10096108), (EAX));
  /* 10083151 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083157u);
  /* 10083157 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008315a mov dword ptr [0x10096358], eax */
  w32((uint32_t)(0x10096358), (EAX));
  /* 1008315f call 0x100826b0 */
  push32(0x10083164u); f_100826b0();
  /* 10083164 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10083166 jne 0x10083172 */
  if (!C.zf) goto L_10083172;
  /* 10083168 mov dword ptr [0x1008f248], 4 */
  w32((uint32_t)(0x1008f248), (0x4u));
L_10083172:;
  /* 10083172 push 0x1008f114 */
  push32((uint32_t)(0x1008f114u));
  /* 10083177 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10083179 call dword ptr [0x1009652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009652c))), 0x1008317fu);
  /* 1008317f push 0x100965b8 */
  push32((uint32_t)(0x100965b8u));
  /* 10083184 call 0x10082760 */
  push32(0x10083189u); f_10082760();
  /* 10083189 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1008318b push 0x1008f244 */
  push32((uint32_t)(0x1008f244u));
  /* 10083190 call 0x10082740 */
  push32(0x10083195u); f_10082740();
  /* 10083195 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083198 mov byte ptr [0x100961a8], bl */
  w8((uint32_t)(0x100961a8), (BL));
  /* 1008319e mov byte ptr [0x100961aa], bl */
  w8((uint32_t)(0x100961aa), (BL));
  /* 100831a4 mov byte ptr [0x100961ac], bl */
  w8((uint32_t)(0x100961ac), (BL));
  /* 100831aa mov byte ptr [0x100961ad], bl */
  w8((uint32_t)(0x100961ad), (BL));
  /* 100831b0 mov byte ptr [0x10096343], bl */
  w8((uint32_t)(0x10096343), (BL));
  /* 100831b6 mov byte ptr [0x10096341], bl */
  w8((uint32_t)(0x10096341), (BL));
  /* 100831bc mov byte ptr [0x10096344], bl */
  w8((uint32_t)(0x10096344), (BL));
  /* 100831c2 mov byte ptr [0x10096345], bl */
  w8((uint32_t)(0x10096345), (BL));
  /* 100831c8 pop esi */
  ESI = (pop32());
  /* 100831c9 mov byte ptr [0x100961ab], 0 */
  w8((uint32_t)(0x100961ab), (0x0u));
  /* 100831d0 mov byte ptr [0x100961a9], 0 */
  w8((uint32_t)(0x100961a9), (0x0u));
  /* 100831d7 mov byte ptr [0x10096340], 0 */
  w8((uint32_t)(0x10096340), (0x0u));
  /* 100831de mov byte ptr [0x10096342], 0 */
  w8((uint32_t)(0x10096342), (0x0u));
  /* 100831e5 mov dword ptr [0x1009666c], 0 */
  w32((uint32_t)(0x1009666c), (0x0u));
  /* 100831ef pop ebx */
  EBX = (pop32());
  /* 100831f0 ret  */
  ESPCHK(0x10083080u, _esp0);
  ESP += 4; return;
}

/* FUN_10003200 @ 0x10083200 (85 bytes, 29 insns) */
void f_10083200(void) {
  FTRACE(0x10083200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10083200 mov eax, dword ptr [0x10095f78] */
  EAX = (r32((uint32_t)(0x10095f78)));
  /* 10083205 push esi */
  push32((uint32_t)(ESI));
  /* 10083206 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083209 jg 0x10083253 */
  if ((!C.zf&&C.sf==C.of)) goto L_10083253;
  /* 1008320b push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 10083210 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10083216u);
  /* 10083216 mov ecx, eax */
  ECX = (EAX);
  /* 10083218 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 1008321d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1008321f sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 10083222 mov eax, edx */
  EAX = (EDX);
  /* 10083224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083227 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1008322a add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008322c mov esi, edx */
  ESI = (EDX);
  /* 1008322e je 0x10083253 */
  if (C.zf) goto L_10083253;
  /* 10083230 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083232 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083234 push esi */
  push32((uint32_t)(ESI));
  /* 10083235 push 0x10093720 */
  push32((uint32_t)(0x10093720u));
  /* 1008323a call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083240u);
  /* 10083240 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083242 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10083244 push esi */
  push32((uint32_t)(ESI));
  /* 10083245 push 0x10093660 */
  push32((uint32_t)(0x10093660u));
  /* 1008324a call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083250u);
  /* 10083250 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083253:;
  /* 10083253 pop esi */
  ESI = (pop32());
  /* 10083254 ret  */
  ESPCHK(0x10083200u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x10083260 (1 bytes, 1 insns) */
void f_10083260(void) {
  FTRACE(0x10083260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10083260 ret  */
  ESPCHK(0x10083260u, _esp0);
  ESP += 4; return;
}

/* FUN_10003270 @ 0x10083270 (157 bytes, 43 insns) */
void f_10083270(void) {
  FTRACE(0x10083270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10083270 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10083272 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10083274 push 0x10096370 */
  push32((uint32_t)(0x10096370u));
  /* 10083279 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008327fu);
  /* 1008327f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10083281 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10083283 push 0x10096378 */
  push32((uint32_t)(0x10096378u));
  /* 10083288 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008328eu);
  /* 1008328e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10083290 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10083292 push 0x10096360 */
  push32((uint32_t)(0x10096360u));
  /* 10083297 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008329du);
  /* 1008329d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008329f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100832a1 push 0x10096368 */
  push32((uint32_t)(0x10096368u));
  /* 100832a6 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100832acu);
  /* 100832ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100832ae push 0xa */
  push32((uint32_t)(0xau));
  /* 100832b0 push 0x10096380 */
  push32((uint32_t)(0x10096380u));
  /* 100832b5 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100832bbu);
  /* 100832bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100832bd push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100832bf push 0x100962b8 */
  push32((uint32_t)(0x100962b8u));
  /* 100832c4 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100832cau);
  /* 100832ca add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100832cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100832cf push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100832d1 push 0x100962a0 */
  push32((uint32_t)(0x100962a0u));
  /* 100832d6 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100832dcu);
  /* 100832dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100832de push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100832e0 push 0x100962a8 */
  push32((uint32_t)(0x100962a8u));
  /* 100832e5 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100832ebu);
  /* 100832eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100832ed push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100832ef push 0x100962c0 */
  push32((uint32_t)(0x100962c0u));
  /* 100832f4 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100832fau);
  /* 100832fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100832fc push 0xa */
  push32((uint32_t)(0xau));
  /* 100832fe push 0x100962c8 */
  push32((uint32_t)(0x100962c8u));
  /* 10083303 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083309u);
  /* 10083309 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008330c ret  */
  ESPCHK(0x10083270u, _esp0);
  ESP += 4; return;
}

/* FUN_10003310 @ 0x10083310 (79 bytes, 22 insns) */
void f_10083310(void) {
  FTRACE(0x10083310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10083310 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10083312 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083314 push 0x10093930 */
  push32((uint32_t)(0x10093930u));
  /* 10083319 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008331fu);
  /* 1008331f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10083321 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083323 push 0x10093938 */
  push32((uint32_t)(0x10093938u));
  /* 10083328 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008332eu);
  /* 1008332e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10083330 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083332 push 0x10093928 */
  push32((uint32_t)(0x10093928u));
  /* 10083337 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008333du);
  /* 1008333d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008333f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083341 push 0x10095f98 */
  push32((uint32_t)(0x10095f98u));
  /* 10083346 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008334cu);
  /* 1008334c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008334e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083350 push 0x10095f88 */
  push32((uint32_t)(0x10095f88u));
  /* 10083355 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008335bu);
  /* 1008335b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008335e ret  */
  ESPCHK(0x10083310u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x10083360 (64 bytes, 18 insns) */
void f_10083360(void) {
  FTRACE(0x10083360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10083360 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083362 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083364 push 0x100960b8 */
  push32((uint32_t)(0x100960b8u));
  /* 10083369 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008336fu);
  /* 1008336f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083371 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083373 push 0x100960c0 */
  push32((uint32_t)(0x100960c0u));
  /* 10083378 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008337eu);
  /* 1008337e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083380 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083382 push 0x100960c8 */
  push32((uint32_t)(0x100960c8u));
  /* 10083387 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008338du);
  /* 1008338d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1008338f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083391 push 0x100960d0 */
  push32((uint32_t)(0x100960d0u));
  /* 10083396 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008339cu);
  /* 1008339c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008339f ret  */
  ESPCHK(0x10083360u, _esp0);
  ESP += 4; return;
}

/* FUN_100033a0 @ 0x100833a0 (3787 bytes, 1079 insns) */
void f_100833a0(void) {
  FTRACE(0x100833a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100833a0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100833a3 push ebx */
  push32((uint32_t)(EBX));
  /* 100833a4 push ebp */
  push32((uint32_t)(EBP));
  /* 100833a5 push esi */
  push32((uint32_t)(ESI));
  /* 100833a6 push edi */
  push32((uint32_t)(EDI));
  /* 100833a7 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 100833ac push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 100833b1 call dword ptr [0x10096538] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096538))), 0x100833b7u);
  /* 100833b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100833b9 call 0x100827a0 */
  push32(0x100833beu); f_100827a0();
  /* 100833be push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100833c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100833c2 call 0x10082680 */
  push32(0x100833c7u); f_10082680();
  /* 100833c7 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100833c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 100833cb mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 100833cf call 0x10082680 */
  push32(0x100833d4u); f_10082680();
  /* 100833d4 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 100833d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 100833d8 mov edi, eax */
  EDI = (EAX);
  /* 100833da call 0x10082680 */
  push32(0x100833dfu); f_10082680();
  /* 100833df push 0xe */
  push32((uint32_t)(0xeu));
  /* 100833e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100833e3 mov esi, eax */
  ESI = (EAX);
  /* 100833e5 call 0x10082680 */
  push32(0x100833eau); f_10082680();
  /* 100833ea push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 100833ef mov ebx, eax */
  EBX = (EAX);
  /* 100833f1 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x100833f7u);
  /* 100833f7 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100833fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100833ff add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10083401 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 10083405 push 0x100962f8 */
  push32((uint32_t)(0x100962f8u));
  /* 1008340a lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 1008340d mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 10083411 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10083417u);
  /* 10083417 push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 1008341c mov ebx, eax */
  EBX = (EAX);
  /* 1008341e call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10083424u);
  /* 10083424 push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 10083429 mov ebp, eax */
  EBP = (EAX);
  /* 1008342b call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10083431u);
  /* 10083431 push 0x10096008 */
  push32((uint32_t)(0x10096008u));
  /* 10083436 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 1008343a call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10083440u);
  /* 10083440 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083443 mov edi, eax */
  EDI = (EAX);
  /* 10083445 push 0x10096008 */
  push32((uint32_t)(0x10096008u));
  /* 1008344a call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10083450u);
  /* 10083450 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10083455 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10083459 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x1008345fu);
  /* 1008345f push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10083464 mov esi, eax */
  ESI = (EAX);
  /* 10083466 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x1008346cu);
  /* 1008346c push 0x100962f8 */
  push32((uint32_t)(0x100962f8u));
  /* 10083471 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 10083475 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x1008347bu);
  /* 1008347b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 1008347f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 10083483 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10083485 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10083489 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008348b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008348d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008348f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10083491 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10083493 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10083495 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10083497 push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 1008349c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008349e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 100834a2 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100834a8u);
  /* 100834a8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100834aa mov bl, 1 */
  BL = (0x1u);
  /* 100834ac call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100834b2u);
  /* 100834b2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100834b5 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100834ba jle 0x100834ea */
  if ((C.zf||C.sf!=C.of)) goto L_100834ea;
  /* 100834bc push 1 */
  push32((uint32_t)(0x1u));
  /* 100834be call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100834c4u);
  /* 100834c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100834c7 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100834cc jle 0x100834ea */
  if ((C.zf||C.sf!=C.of)) goto L_100834ea;
  /* 100834ce push 4 */
  push32((uint32_t)(0x4u));
  /* 100834d0 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100834d6u);
  /* 100834d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100834d9 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100834de jle 0x100834ea */
  if ((C.zf||C.sf!=C.of)) goto L_100834ea;
  /* 100834e0 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 100834e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100834e6 jne 0x100834ea */
  if (!C.zf) goto L_100834ea;
  /* 100834e8 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_100834ea:;
  /* 100834ea push 0x100961b0 */
  push32((uint32_t)(0x100961b0u));
  /* 100834ef call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100834f5u);
  /* 100834f5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100834f7 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100834fb call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083501u);
  /* 10083501 push 0x100961d8 */
  push32((uint32_t)(0x100961d8u));
  /* 10083506 mov esi, eax */
  ESI = (EAX);
  /* 10083508 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x1008350eu);
  /* 1008350e push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 10083513 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 10083517 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x1008351du);
  /* 1008351d push 0x10096100 */
  push32((uint32_t)(0x10096100u));
  /* 10083522 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10083528u);
  /* 10083528 push 0x100963d0 */
  push32((uint32_t)(0x100963d0u));
  /* 1008352d mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 10083531 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10083537u);
  /* 10083537 push 0x10096350 */
  push32((uint32_t)(0x10096350u));
  /* 1008353c mov edi, eax */
  EDI = (EAX);
  /* 1008353e call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10083544u);
  /* 10083544 push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 10083549 mov ebp, eax */
  EBP = (EAX);
  /* 1008354b call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10083551u);
  /* 10083551 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10083553 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10083555 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10083557 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10083559 push 0x10096130 */
  push32((uint32_t)(0x10096130u));
  /* 1008355e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 10083562 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 10083567 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008356du);
  /* 1008356d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1008356f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10083571 push 0x10096170 */
  push32((uint32_t)(0x10096170u));
  /* 10083576 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008357cu);
  /* 1008357c push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 10083581 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10083587u);
  /* 10083587 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 1008358c mov edi, eax */
  EDI = (EAX);
  /* 1008358e call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10083594u);
  /* 10083594 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083597 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10083599 je 0x100835a0 */
  if (C.zf) goto L_100835a0;
  /* 1008359b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_100835a0:;
  /* 100835a0 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 100835a4 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 100835a6 je 0x10083f6d */
  if (C.zf) goto L_10083f6d;
  /* 100835ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100835ae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100835b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100835b2 push 0x10095ff8 */
  push32((uint32_t)(0x10095ff8u));
  /* 100835b7 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100835bdu);
  /* 100835bd push 0x10095ff8 */
  push32((uint32_t)(0x10095ff8u));
  /* 100835c2 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100835c8u);
  /* 100835c8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100835cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100835cd je 0x10084263 */
  if (C.zf) goto L_10084263;
  /* 100835d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100835d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100835d7 push 0x10096398 */
  push32((uint32_t)(0x10096398u));
  /* 100835dc call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100835e2u);
  /* 100835e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100835e5 call dword ptr [0x10096590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096590))), 0x100835ebu);
  /* 100835eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100835ed jne 0x10083630 */
  if (!C.zf) goto L_10083630;
  /* 100835ef cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100835f5 jle 0x1008361c */
  if ((C.zf||C.sf!=C.of)) goto L_1008361c;
  /* 100835f7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100835f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100835fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100835fd push 0x100961b0 */
  push32((uint32_t)(0x100961b0u));
  /* 10083602 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083608u);
  /* 10083608 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008360a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008360c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008360e push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 10083613 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083619u);
  /* 10083619 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008361c:;
  /* 1008361c push 1 */
  push32((uint32_t)(0x1u));
  /* 1008361e push 1 */
  push32((uint32_t)(0x1u));
  /* 10083620 push 0 */
  push32((uint32_t)(0x0u));
  /* 10083622 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x10083628u);
  /* 10083628 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008362b jmp 0x1008373e */
  goto L_1008373e;
L_10083630:;
  /* 10083630 push 0x100937c0 */
  push32((uint32_t)(0x100937c0u));
  /* 10083635 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x1008363bu);
  /* 1008363b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008363e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083640 je 0x1008366a */
  if (C.zf) goto L_1008366a;
  /* 10083642 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083648 jle 0x10083652 */
  if ((C.zf||C.sf!=C.of)) goto L_10083652;
  /* 1008364a push 6 */
  push32((uint32_t)(0x6u));
  /* 1008364c push 8 */
  push32((uint32_t)(0x8u));
  /* 1008364e push 9 */
  push32((uint32_t)(0x9u));
  /* 10083650 jmp 0x10083690 */
  goto L_10083690;
L_10083652:;
  /* 10083652 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083658 jle 0x10083662 */
  if ((C.zf||C.sf!=C.of)) goto L_10083662;
  /* 1008365a push 3 */
  push32((uint32_t)(0x3u));
  /* 1008365c push 5 */
  push32((uint32_t)(0x5u));
  /* 1008365e push 9 */
  push32((uint32_t)(0x9u));
  /* 10083660 jmp 0x10083690 */
  goto L_10083690;
L_10083662:;
  /* 10083662 push 1 */
  push32((uint32_t)(0x1u));
  /* 10083664 push 4 */
  push32((uint32_t)(0x4u));
  /* 10083666 push 9 */
  push32((uint32_t)(0x9u));
  /* 10083668 jmp 0x10083690 */
  goto L_10083690;
L_1008366a:;
  /* 1008366a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083670 jle 0x1008367a */
  if ((C.zf||C.sf!=C.of)) goto L_1008367a;
  /* 10083672 push 8 */
  push32((uint32_t)(0x8u));
  /* 10083674 push 8 */
  push32((uint32_t)(0x8u));
  /* 10083676 push 9 */
  push32((uint32_t)(0x9u));
  /* 10083678 jmp 0x10083690 */
  goto L_10083690;
L_1008367a:;
  /* 1008367a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083680 jle 0x1008368a */
  if ((C.zf||C.sf!=C.of)) goto L_1008368a;
  /* 10083682 push 5 */
  push32((uint32_t)(0x5u));
  /* 10083684 push 5 */
  push32((uint32_t)(0x5u));
  /* 10083686 push 9 */
  push32((uint32_t)(0x9u));
  /* 10083688 jmp 0x10083690 */
  goto L_10083690;
L_1008368a:;
  /* 1008368a push 4 */
  push32((uint32_t)(0x4u));
  /* 1008368c push 4 */
  push32((uint32_t)(0x4u));
  /* 1008368e push 0xa */
  push32((uint32_t)(0xau));
L_10083690:;
  /* 10083690 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x10083696u);
  /* 10083696 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 1008369a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008369d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008369f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 100836a4 je 0x100836ab */
  if (C.zf) goto L_100836ab;
  /* 100836a6 mov edi, 0x12c */
  EDI = (0x12cu);
L_100836ab:;
  /* 100836ab cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100836ae jge 0x100836cc */
  if ((C.sf==C.of)) goto L_100836cc;
  /* 100836b0 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100836b6 jle 0x100836cc */
  if ((C.zf||C.sf!=C.of)) goto L_100836cc;
  /* 100836b8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100836ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100836bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100836be push 0x100961b0 */
  push32((uint32_t)(0x100961b0u));
  /* 100836c3 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100836c9u);
  /* 100836c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100836cc:;
  /* 100836cc cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100836d2 jle 0x1008370d */
  if ((C.zf||C.sf!=C.of)) goto L_1008370d;
  /* 100836d4 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100836d6 je 0x100836f2 */
  if (C.zf) goto L_100836f2;
  /* 100836d8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100836da push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 100836df push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100836e4 push 0x100961b0 */
  push32((uint32_t)(0x100961b0u));
  /* 100836e9 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100836efu);
  /* 100836ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100836f2:;
  /* 100836f2 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100836f8 jle 0x1008370d */
  if ((C.zf||C.sf!=C.of)) goto L_1008370d;
  /* 100836fa push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100836fc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100836fe push edi */
  push32((uint32_t)(EDI));
  /* 100836ff push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 10083704 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x1008370au);
  /* 1008370a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008370d:;
  /* 1008370d push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 10083712 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10083718u);
  /* 10083718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008371b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008371d je 0x1008373e */
  if (C.zf) goto L_1008373e;
  /* 1008371f cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083725 jle 0x1008373e */
  if ((C.zf||C.sf!=C.of)) goto L_1008373e;
  /* 10083727 push 0x100962f8 */
  push32((uint32_t)(0x100962f8u));
  /* 1008372c call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10083732u);
  /* 10083732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083735 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10083737 jle 0x1008373e */
  if ((C.zf||C.sf!=C.of)) goto L_1008373e;
  /* 10083739 call 0x10083270 */
  push32(0x1008373eu); f_10083270();
L_1008373e:;
  /* 1008373e mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 10083742 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083744 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083747 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10083749 jge 0x1008374f */
  if ((C.sf==C.of)) goto L_1008374f;
  /* 1008374b push 5 */
  push32((uint32_t)(0x5u));
  /* 1008374d jmp 0x10083753 */
  goto L_10083753;
L_1008374f:;
  /* 1008374f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10083752 push eax */
  push32((uint32_t)(EAX));
L_10083753:;
  /* 10083753 push 0x10095fb0 */
  push32((uint32_t)(0x10095fb0u));
  /* 10083758 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x1008375eu);
  /* 1008375e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 10083762 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083765 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083768 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1008376a jge 0x10083780 */
  if ((C.sf==C.of)) goto L_10083780;
  /* 1008376c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1008376e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10083770 push 0x10093908 */
  push32((uint32_t)(0x10093908u));
  /* 10083775 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x1008377bu);
  /* 1008377b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008377e jmp 0x100837ba */
  goto L_100837ba;
L_10083780:;
  /* 10083780 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 10083783 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083785 push ecx */
  push32((uint32_t)(ECX));
  /* 10083786 push 0x10093908 */
  push32((uint32_t)(0x10093908u));
  /* 1008378b call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083791u);
  /* 10083791 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083793 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 10083796 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10083798 push edx */
  push32((uint32_t)(EDX));
  /* 10083799 push 0x10093908 */
  push32((uint32_t)(0x10093908u));
  /* 1008379e call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100837a4u);
  /* 100837a4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100837a6 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100837a9 push 0xa */
  push32((uint32_t)(0xau));
  /* 100837ab push edi */
  push32((uint32_t)(EDI));
  /* 100837ac push 0x10093908 */
  push32((uint32_t)(0x10093908u));
  /* 100837b1 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100837b7u);
  /* 100837b7 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100837ba:;
  /* 100837ba push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100837bc push 0 */
  push32((uint32_t)(0x0u));
  /* 100837be call 0x10082680 */
  push32(0x100837c3u); f_10082680();
  /* 100837c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100837c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100837c8 je 0x10083827 */
  if (C.zf) goto L_10083827;
  /* 100837ca push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100837cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100837ce push 0x10096308 */
  push32((uint32_t)(0x10096308u));
  /* 100837d3 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100837d9u);
  /* 100837d9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100837db push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100837dd push 0x100962f0 */
  push32((uint32_t)(0x100962f0u));
  /* 100837e2 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100837e8u);
  /* 100837e8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100837ea push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100837ec push 0x10096300 */
  push32((uint32_t)(0x10096300u));
  /* 100837f1 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100837f7u);
  /* 100837f7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100837f9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100837fb push 0x100962e0 */
  push32((uint32_t)(0x100962e0u));
  /* 10083800 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083806u);
  /* 10083806 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083808 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1008380a push 0x100962e8 */
  push32((uint32_t)(0x100962e8u));
  /* 1008380f call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083815u);
  /* 10083815 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083817 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083819 push 0x100962d8 */
  push32((uint32_t)(0x100962d8u));
  /* 1008381e call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083824u);
  /* 10083824 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083827:;
  /* 10083827 push 0xa */
  push32((uint32_t)(0xau));
  /* 10083829 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1008382b push 3 */
  push32((uint32_t)(0x3u));
  /* 1008382d push 0x100938c0 */
  push32((uint32_t)(0x100938c0u));
  /* 10083832 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083838u);
  /* 10083838 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008383a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008383c push 1 */
  push32((uint32_t)(0x1u));
  /* 1008383e push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 10083843 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083849u);
  /* 10083849 push 5 */
  push32((uint32_t)(0x5u));
  /* 1008384b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1008384d push 2 */
  push32((uint32_t)(0x2u));
  /* 1008384f push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 10083854 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x1008385au);
  /* 1008385a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 1008385e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083861 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10083863 jne 0x10083879 */
  if (!C.zf) goto L_10083879;
  /* 10083865 push 5 */
  push32((uint32_t)(0x5u));
  /* 10083867 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10083869 push 3 */
  push32((uint32_t)(0x3u));
  /* 1008386b push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 10083870 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083876u);
  /* 10083876 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083879:;
  /* 10083879 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008387b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008387d push 1 */
  push32((uint32_t)(0x1u));
  /* 1008387f push 0x10096208 */
  push32((uint32_t)(0x10096208u));
  /* 10083884 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x1008388au);
  /* 1008388a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008388c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008388e push 1 */
  push32((uint32_t)(0x1u));
  /* 10083890 push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 10083895 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x1008389bu);
  /* 1008389b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1008389d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1008389f push 1 */
  push32((uint32_t)(0x1u));
  /* 100838a1 push 0x10095ff0 */
  push32((uint32_t)(0x10095ff0u));
  /* 100838a6 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100838acu);
  /* 100838ac push 5 */
  push32((uint32_t)(0x5u));
  /* 100838ae push 0xa */
  push32((uint32_t)(0xau));
  /* 100838b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 100838b2 push 0x10096208 */
  push32((uint32_t)(0x10096208u));
  /* 100838b7 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100838bdu);
  /* 100838bd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100838c0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100838c2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100838c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100838c6 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 100838cb call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100838d1u);
  /* 100838d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100838d3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100838d5 push 0x10093680 */
  push32((uint32_t)(0x10093680u));
  /* 100838da call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100838e0u);
  /* 100838e0 push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 100838e5 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100838ebu);
  /* 100838eb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100838ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100838f0 jle 0x10083917 */
  if ((C.zf||C.sf!=C.of)) goto L_10083917;
  /* 100838f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100838f4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100838f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100838f8 push 0x10093898 */
  push32((uint32_t)(0x10093898u));
  /* 100838fd call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083903u);
  /* 10083903 push 3 */
  push32((uint32_t)(0x3u));
  /* 10083905 push 5 */
  push32((uint32_t)(0x5u));
  /* 10083907 push 1 */
  push32((uint32_t)(0x1u));
  /* 10083909 push 0x10096118 */
  push32((uint32_t)(0x10096118u));
  /* 1008390e call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083914u);
  /* 10083914 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083917:;
  /* 10083917 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083919 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1008391b push 1 */
  push32((uint32_t)(0x1u));
  /* 1008391d push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 10083922 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083928u);
  /* 10083928 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008392b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1008392d jne 0x10083943 */
  if (!C.zf) goto L_10083943;
  /* 1008392f push 0xa */
  push32((uint32_t)(0xau));
  /* 10083931 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10083933 push 1 */
  push32((uint32_t)(0x1u));
  /* 10083935 push 0x10096008 */
  push32((uint32_t)(0x10096008u));
  /* 1008393a call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083940u);
  /* 10083940 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083943:;
  /* 10083943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083945 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083947 push 1 */
  push32((uint32_t)(0x1u));
  /* 10083949 push 0x10093638 */
  push32((uint32_t)(0x10093638u));
  /* 1008394e call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083954u);
  /* 10083954 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083957 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008395a jle 0x10083970 */
  if ((C.zf||C.sf!=C.of)) goto L_10083970;
  /* 1008395c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1008395e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083960 push 2 */
  push32((uint32_t)(0x2u));
  /* 10083962 push 0x10095ff8 */
  push32((uint32_t)(0x10095ff8u));
  /* 10083967 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x1008396du);
  /* 1008396d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083970:;
  /* 10083970 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10083972 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083974 push 1 */
  push32((uint32_t)(0x1u));
  /* 10083976 push 0x10096278 */
  push32((uint32_t)(0x10096278u));
  /* 1008397b call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083981u);
  /* 10083981 push 5 */
  push32((uint32_t)(0x5u));
  /* 10083983 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083985 push 2 */
  push32((uint32_t)(0x2u));
  /* 10083987 push 0x10096278 */
  push32((uint32_t)(0x10096278u));
  /* 1008398c call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083992u);
  /* 10083992 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10083994 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083996 push 0x10096098 */
  push32((uint32_t)(0x10096098u));
  /* 1008399b call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100839a1u);
  /* 100839a1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100839a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100839a5 push 0x10096050 */
  push32((uint32_t)(0x10096050u));
  /* 100839aa call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100839b0u);
  /* 100839b0 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100839b2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100839b4 push 0x10096058 */
  push32((uint32_t)(0x10096058u));
  /* 100839b9 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100839bfu);
  /* 100839bf add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100839c2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100839c4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100839c6 push 0x10096060 */
  push32((uint32_t)(0x10096060u));
  /* 100839cb call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100839d1u);
  /* 100839d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100839d3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100839d5 push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 100839da call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100839e0u);
  /* 100839e0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100839e2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100839e4 push 0x100961d8 */
  push32((uint32_t)(0x100961d8u));
  /* 100839e9 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100839efu);
  /* 100839ef push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100839f1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100839f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100839f5 push 0x100962f8 */
  push32((uint32_t)(0x100962f8u));
  /* 100839fa call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083a00u);
  /* 10083a00 push 5 */
  push32((uint32_t)(0x5u));
  /* 10083a02 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083a04 push 2 */
  push32((uint32_t)(0x2u));
  /* 10083a06 push 0x100962f8 */
  push32((uint32_t)(0x100962f8u));
  /* 10083a0b call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083a11u);
  /* 10083a11 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083a14 push 5 */
  push32((uint32_t)(0x5u));
  /* 10083a16 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083a18 push 3 */
  push32((uint32_t)(0x3u));
  /* 10083a1a push 0x100962f8 */
  push32((uint32_t)(0x100962f8u));
  /* 10083a1f call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083a25u);
  /* 10083a25 push 5 */
  push32((uint32_t)(0x5u));
  /* 10083a27 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10083a29 push 5 */
  push32((uint32_t)(0x5u));
  /* 10083a2b push 0x100962f8 */
  push32((uint32_t)(0x100962f8u));
  /* 10083a30 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083a36u);
  /* 10083a36 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10083a38 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10083a3a push 0x10093978 */
  push32((uint32_t)(0x10093978u));
  /* 10083a3f call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083a45u);
  /* 10083a45 call 0x10082670 */
  push32(0x10083a4au); f_10082670();
  /* 10083a4a push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 10083a4f mov edi, eax */
  EDI = (EAX);
  /* 10083a51 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10083a57u);
  /* 10083a57 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083a5a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083a5c je 0x10083a7f */
  if (C.zf) goto L_10083a7f;
  /* 10083a5e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083a60 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083a62 push 0x10093978 */
  push32((uint32_t)(0x10093978u));
  /* 10083a67 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083a6du);
  /* 10083a6d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10083a6f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10083a71 push 0x10093890 */
  push32((uint32_t)(0x10093890u));
  /* 10083a76 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083a7cu);
  /* 10083a7c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083a7f:;
  /* 10083a7f push 0x10093978 */
  push32((uint32_t)(0x10093978u));
  /* 10083a84 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10083a8au);
  /* 10083a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083a8d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083a8f je 0x10083ab7 */
  if (C.zf) goto L_10083ab7;
  /* 10083a91 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083a93 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083a95 push 0x10093960 */
  push32((uint32_t)(0x10093960u));
  /* 10083a9a call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083aa0u);
  /* 10083aa0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10083aa2 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10083aa4 push 0x100938a0 */
  push32((uint32_t)(0x100938a0u));
  /* 10083aa9 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083aafu);
  /* 10083aaf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083ab2 call 0x10083360 */
  push32(0x10083ab7u); f_10083360();
L_10083ab7:;
  /* 10083ab7 push 0x100960d0 */
  push32((uint32_t)(0x100960d0u));
  /* 10083abc call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10083ac2u);
  /* 10083ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083ac5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083ac7 je 0x10083aee */
  if (C.zf) goto L_10083aee;
  /* 10083ac9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083acb push 0xa */
  push32((uint32_t)(0xau));
  /* 10083acd push 0xa */
  push32((uint32_t)(0xau));
  /* 10083acf push 0x10093688 */
  push32((uint32_t)(0x10093688u));
  /* 10083ad4 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083adau);
  /* 10083ada push 0xa */
  push32((uint32_t)(0xau));
  /* 10083adc push 3 */
  push32((uint32_t)(0x3u));
  /* 10083ade push 0xf */
  push32((uint32_t)(0xfu));
  /* 10083ae0 push 0x10093688 */
  push32((uint32_t)(0x10093688u));
  /* 10083ae5 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083aebu);
  /* 10083aeb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083aee:;
  /* 10083aee push 0 */
  push32((uint32_t)(0x0u));
  /* 10083af0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10083af2 call 0x10082630 */
  push32(0x10083af7u); f_10082630();
  /* 10083af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10083af9 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083affu);
  /* 10083aff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083b02 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083b07 jle 0x10083b4b */
  if ((C.zf||C.sf!=C.of)) goto L_10083b4b;
  /* 10083b09 push 0x100937c0 */
  push32((uint32_t)(0x100937c0u));
  /* 10083b0e call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10083b14u);
  /* 10083b14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083b17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083b19 je 0x10083b4b */
  if (C.zf) goto L_10083b4b;
  /* 10083b1b push 1 */
  push32((uint32_t)(0x1u));
  /* 10083b1d call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083b23u);
  /* 10083b23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083b26 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083b2b jge 0x10083b4b */
  if ((C.sf==C.of)) goto L_10083b4b;
  /* 10083b2d push 0x10093978 */
  push32((uint32_t)(0x10093978u));
  /* 10083b32 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10083b38u);
  /* 10083b38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083b3b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083b3d jne 0x10083b4b */
  if (!C.zf) goto L_10083b4b;
  /* 10083b3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10083b41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10083b43 call 0x10082630 */
  push32(0x10083b48u); f_10082630();
  /* 10083b48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083b4b:;
  /* 10083b4b push 0x10093978 */
  push32((uint32_t)(0x10093978u));
  /* 10083b50 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10083b56u);
  /* 10083b56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083b59 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083b5b je 0x10083cdc */
  if (C.zf) goto L_10083cdc;
  /* 10083b61 push 0x10096110 */
  push32((uint32_t)(0x10096110u));
  /* 10083b66 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10083b6cu);
  /* 10083b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083b6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083b71 je 0x10083cdc */
  if (C.zf) goto L_10083cdc;
  /* 10083b77 push 0x100961d8 */
  push32((uint32_t)(0x100961d8u));
  /* 10083b7c call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10083b82u);
  /* 10083b82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083b85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083b87 je 0x10083cdc */
  if (C.zf) goto L_10083cdc;
  /* 10083b8d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083b90 je 0x10083b97 */
  if (C.zf) goto L_10083b97;
  /* 10083b92 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083b95 jne 0x10083bc7 */
  if (!C.zf) goto L_10083bc7;
L_10083b97:;
  /* 10083b97 push 3 */
  push32((uint32_t)(0x3u));
  /* 10083b99 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083b9fu);
  /* 10083b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083ba2 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083ba7 jle 0x10083bc7 */
  if ((C.zf||C.sf!=C.of)) goto L_10083bc7;
  /* 10083ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10083bab call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083bb1u);
  /* 10083bb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083bb4 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083bb9 jge 0x10083bc7 */
  if ((C.sf==C.of)) goto L_10083bc7;
  /* 10083bbb push 1 */
  push32((uint32_t)(0x1u));
  /* 10083bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10083bbf call 0x10082630 */
  push32(0x10083bc4u); f_10082630();
  /* 10083bc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083bc7:;
  /* 10083bc7 push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 10083bcc call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10083bd2u);
  /* 10083bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083bd5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083bd7 jne 0x10083c09 */
  if (!C.zf) goto L_10083c09;
  /* 10083bd9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10083bdb call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083be1u);
  /* 10083be1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083be4 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083be9 jle 0x10083c09 */
  if ((C.zf||C.sf!=C.of)) goto L_10083c09;
  /* 10083beb push 1 */
  push32((uint32_t)(0x1u));
  /* 10083bed call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083bf3u);
  /* 10083bf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083bf6 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083bfb jge 0x10083c09 */
  if ((C.sf==C.of)) goto L_10083c09;
  /* 10083bfd push 1 */
  push32((uint32_t)(0x1u));
  /* 10083bff push 1 */
  push32((uint32_t)(0x1u));
  /* 10083c01 call 0x10082630 */
  push32(0x10083c06u); f_10082630();
  /* 10083c06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083c09:;
  /* 10083c09 push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 10083c0e call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10083c14u);
  /* 10083c14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083c17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083c19 je 0x10083cdc */
  if (C.zf) goto L_10083cdc;
  /* 10083c1f cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083c22 jne 0x10083c62 */
  if (!C.zf) goto L_10083c62;
  /* 10083c24 push 3 */
  push32((uint32_t)(0x3u));
  /* 10083c26 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083c2cu);
  /* 10083c2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083c2f cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083c34 jle 0x10083d37 */
  if ((C.zf||C.sf!=C.of)) goto L_10083d37;
  /* 10083c3a push 4 */
  push32((uint32_t)(0x4u));
  /* 10083c3c call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083c42u);
  /* 10083c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083c45 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083c4a jle 0x10083d37 */
  if ((C.zf||C.sf!=C.of)) goto L_10083d37;
  /* 10083c50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10083c52 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083c58u);
  /* 10083c58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083c5b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083c60 jmp 0x10083ccc */
  goto L_10083ccc;
L_10083c62:;
  /* 10083c62 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083c65 jne 0x10083ca5 */
  if (!C.zf) goto L_10083ca5;
  /* 10083c67 push 3 */
  push32((uint32_t)(0x3u));
  /* 10083c69 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083c6fu);
  /* 10083c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083c72 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083c77 jle 0x10083d37 */
  if ((C.zf||C.sf!=C.of)) goto L_10083d37;
  /* 10083c7d push 4 */
  push32((uint32_t)(0x4u));
  /* 10083c7f call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083c85u);
  /* 10083c85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083c88 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083c8d jle 0x10083d37 */
  if ((C.zf||C.sf!=C.of)) goto L_10083d37;
  /* 10083c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10083c95 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083c9bu);
  /* 10083c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083c9e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083ca3 jmp 0x10083ccc */
  goto L_10083ccc;
L_10083ca5:;
  /* 10083ca5 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083ca8 jne 0x10083cdc */
  if (!C.zf) goto L_10083cdc;
  /* 10083caa push 3 */
  push32((uint32_t)(0x3u));
  /* 10083cac call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083cb2u);
  /* 10083cb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083cb5 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083cba jle 0x10083d37 */
  if ((C.zf||C.sf!=C.of)) goto L_10083d37;
  /* 10083cbc push 1 */
  push32((uint32_t)(0x1u));
  /* 10083cbe call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10083cc4u);
  /* 10083cc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083cc7 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10083ccc:;
  /* 10083ccc jge 0x10083d37 */
  if ((C.sf==C.of)) goto L_10083d37;
  /* 10083cce push 1 */
  push32((uint32_t)(0x1u));
  /* 10083cd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10083cd2 call 0x10082630 */
  push32(0x10083cd7u); f_10082630();
  /* 10083cd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083cda jmp 0x10083d37 */
  goto L_10083d37;
L_10083cdc:;
  /* 10083cdc cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083cdf jne 0x10083d37 */
  if (!C.zf) goto L_10083d37;
  /* 10083ce1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10083ce3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10083ce5 push 0x10093788 */
  push32((uint32_t)(0x10093788u));
  /* 10083cea call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083cf0u);
  /* 10083cf0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083cf2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083cf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10083cf6 push 0x100963b8 */
  push32((uint32_t)(0x100963b8u));
  /* 10083cfb call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083d01u);
  /* 10083d01 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083d03 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083d05 push 2 */
  push32((uint32_t)(0x2u));
  /* 10083d07 push 0x100963b8 */
  push32((uint32_t)(0x100963b8u));
  /* 10083d0c call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083d12u);
  /* 10083d12 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083d14 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10083d16 push 3 */
  push32((uint32_t)(0x3u));
  /* 10083d18 push 0x100963b8 */
  push32((uint32_t)(0x100963b8u));
  /* 10083d1d call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083d23u);
  /* 10083d23 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083d25 push 0xa */
  push32((uint32_t)(0xau));
  /* 10083d27 push 5 */
  push32((uint32_t)(0x5u));
  /* 10083d29 push 0x100963b8 */
  push32((uint32_t)(0x100963b8u));
  /* 10083d2e call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083d34u);
  /* 10083d34 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083d37:;
  /* 10083d37 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083d3a jle 0x10083d93 */
  if ((C.zf||C.sf!=C.of)) goto L_10083d93;
  /* 10083d3c mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10083d40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083d42 je 0x10083d93 */
  if (C.zf) goto L_10083d93;
  /* 10083d44 push 0xa */
  push32((uint32_t)(0xau));
  /* 10083d46 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10083d48 push 1 */
  push32((uint32_t)(0x1u));
  /* 10083d4a push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 10083d4f call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083d55u);
  /* 10083d55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083d58 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083d5b jle 0x10083d93 */
  if ((C.zf||C.sf!=C.of)) goto L_10083d93;
  /* 10083d5d push 0xa */
  push32((uint32_t)(0xau));
  /* 10083d5f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10083d61 push 2 */
  push32((uint32_t)(0x2u));
  /* 10083d63 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 10083d68 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083d6eu);
  /* 10083d6e push 0xa */
  push32((uint32_t)(0xau));
  /* 10083d70 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10083d72 push 3 */
  push32((uint32_t)(0x3u));
  /* 10083d74 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 10083d79 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083d7fu);
  /* 10083d7f push 0xa */
  push32((uint32_t)(0xau));
  /* 10083d81 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083d83 push 4 */
  push32((uint32_t)(0x4u));
  /* 10083d85 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 10083d8a call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083d90u);
  /* 10083d90 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083d93:;
  /* 10083d93 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 10083d97 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10083d99 je 0x10083dd7 */
  if (C.zf) goto L_10083dd7;
  /* 10083d9b push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 10083da0 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10083da6u);
  /* 10083da6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083da9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083dab je 0x10083dd7 */
  if (C.zf) goto L_10083dd7;
  /* 10083dad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10083daf push 1 */
  push32((uint32_t)(0x1u));
  /* 10083db1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10083db3 push 0x10096180 */
  push32((uint32_t)(0x10096180u));
  /* 10083db8 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083dbeu);
  /* 10083dbe push 0x100961b8 */
  push32((uint32_t)(0x100961b8u));
  /* 10083dc3 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10083dc9u);
  /* 10083dc9 push 0x100960d0 */
  push32((uint32_t)(0x100960d0u));
  /* 10083dce call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10083dd4u);
  /* 10083dd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083dd7:;
  /* 10083dd7 push 0x10093638 */
  push32((uint32_t)(0x10093638u));
  /* 10083ddc call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10083de2u);
  /* 10083de2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083de4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083de6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10083de8 push 0x10096210 */
  push32((uint32_t)(0x10096210u));
  /* 10083ded call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083df3u);
  /* 10083df3 push 0x10096110 */
  push32((uint32_t)(0x10096110u));
  /* 10083df8 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10083dfeu);
  /* 10083dfe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083e01 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083e03 je 0x10083e19 */
  if (C.zf) goto L_10083e19;
  /* 10083e05 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083e07 push 0xa */
  push32((uint32_t)(0xau));
  /* 10083e09 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10083e0b push 0x10096210 */
  push32((uint32_t)(0x10096210u));
  /* 10083e10 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083e16u);
  /* 10083e16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083e19:;
  /* 10083e19 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10083e1b je 0x10083f05 */
  if (C.zf) goto L_10083f05;
  /* 10083e21 push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 10083e26 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10083e2cu);
  /* 10083e2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083e2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083e31 je 0x10083f05 */
  if (C.zf) goto L_10083f05;
  /* 10083e37 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10083e39 jne 0x10083e71 */
  if (!C.zf) goto L_10083e71;
  /* 10083e3b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10083e3d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083e3f push 2 */
  push32((uint32_t)(0x2u));
  /* 10083e41 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10083e46 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083e4cu);
  /* 10083e4c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10083e4e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083e50 push 3 */
  push32((uint32_t)(0x3u));
  /* 10083e52 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10083e57 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083e5du);
  /* 10083e5d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10083e5f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083e61 push 4 */
  push32((uint32_t)(0x4u));
  /* 10083e63 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10083e68 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083e6eu);
  /* 10083e6e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083e71:;
  /* 10083e71 push 0x10096100 */
  push32((uint32_t)(0x10096100u));
  /* 10083e76 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10083e7cu);
  /* 10083e7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083e7f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083e82 jle 0x10083ea5 */
  if ((C.zf||C.sf!=C.of)) goto L_10083ea5;
  /* 10083e84 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10083e86 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083e88 push 0x10096228 */
  push32((uint32_t)(0x10096228u));
  /* 10083e8d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083e93u);
  /* 10083e93 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10083e95 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10083e97 push 0x10096230 */
  push32((uint32_t)(0x10096230u));
  /* 10083e9c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083ea2u);
  /* 10083ea2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083ea5:;
  /* 10083ea5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083ea7 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10083ea9 push 0x10096110 */
  push32((uint32_t)(0x10096110u));
  /* 10083eae call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083eb4u);
  /* 10083eb4 push 0x10093928 */
  push32((uint32_t)(0x10093928u));
  /* 10083eb9 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10083ebfu);
  /* 10083ebf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083ec2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083ec4 je 0x10083f05 */
  if (C.zf) goto L_10083f05;
  /* 10083ec6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083ec8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083eca push 0x10096188 */
  push32((uint32_t)(0x10096188u));
  /* 10083ecf call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083ed5u);
  /* 10083ed5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083ed7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083ed9 push 0x10096198 */
  push32((uint32_t)(0x10096198u));
  /* 10083ede call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083ee4u);
  /* 10083ee4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083ee6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10083ee8 push 0x100961a0 */
  push32((uint32_t)(0x100961a0u));
  /* 10083eed call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083ef3u);
  /* 10083ef3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083ef5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10083ef7 push 0x10096190 */
  push32((uint32_t)(0x10096190u));
  /* 10083efc call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083f02u);
  /* 10083f02 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083f05:;
  /* 10083f05 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10083f07 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10083f09 push 0x100937c0 */
  push32((uint32_t)(0x100937c0u));
  /* 10083f0e call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083f14u);
  /* 10083f14 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083f16 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10083f18 push 0x10093900 */
  push32((uint32_t)(0x10093900u));
  /* 10083f1d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083f23u);
  /* 10083f23 push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 10083f28 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10083f2eu);
  /* 10083f2e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083f31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083f34 jle 0x10083f71 */
  if ((C.zf||C.sf!=C.of)) goto L_10083f71;
  /* 10083f36 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10083f3a cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083f3f jle 0x10083f71 */
  if ((C.zf||C.sf!=C.of)) goto L_10083f71;
  /* 10083f41 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 10083f44 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10083f48 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10083f4b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10083f4d jge 0x10083f66 */
  if ((C.sf==C.of)) goto L_10083f66;
  /* 10083f4f push 0xa */
  push32((uint32_t)(0xau));
  /* 10083f51 push 0xa */
  push32((uint32_t)(0xau));
  /* 10083f53 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10083f58 push 0x10096100 */
  push32((uint32_t)(0x10096100u));
  /* 10083f5d call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083f63u);
  /* 10083f63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083f66:;
  /* 10083f66 call 0x10083310 */
  push32(0x10083f6bu); f_10083310();
  /* 10083f6b jmp 0x10083f71 */
  goto L_10083f71;
L_10083f6d:;
  /* 10083f6d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_10083f71:;
  /* 10083f71 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10083f73 je 0x10083fb6 */
  if (C.zf) goto L_10083fb6;
  /* 10083f75 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083f77 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10083f79 push 0x10093650 */
  push32((uint32_t)(0x10093650u));
  /* 10083f7e call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083f84u);
  /* 10083f84 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083f86 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10083f88 push 0x10093728 */
  push32((uint32_t)(0x10093728u));
  /* 10083f8d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083f93u);
  /* 10083f93 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083f95 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10083f97 push 0x10093648 */
  push32((uint32_t)(0x10093648u));
  /* 10083f9c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083fa2u);
  /* 10083fa2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083fa4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10083fa6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10083fa8 push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 10083fad call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10083fb3u);
  /* 10083fb3 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083fb6:;
  /* 10083fb6 push 0x100937c0 */
  push32((uint32_t)(0x100937c0u));
  /* 10083fbb call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10083fc1u);
  /* 10083fc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083fc4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10083fc6 je 0x10083fe9 */
  if (C.zf) goto L_10083fe9;
  /* 10083fc8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083fca push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10083fcc push 0x10096218 */
  push32((uint32_t)(0x10096218u));
  /* 10083fd1 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083fd7u);
  /* 10083fd7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10083fd9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10083fdb push 0x10096220 */
  push32((uint32_t)(0x10096220u));
  /* 10083fe0 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10083fe6u);
  /* 10083fe6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10083fe9:;
  /* 10083fe9 push 0x10093898 */
  push32((uint32_t)(0x10093898u));
  /* 10083fee call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10083ff4u);
  /* 10083ff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10083ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10083ff9 je 0x10084263 */
  if (C.zf) goto L_10084263;
  /* 10083fff push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 10084004 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x1008400au);
  /* 1008400a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008400d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008400f je 0x1008406a */
  if (C.zf) goto L_1008406a;
  /* 10084011 push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 10084016 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x1008401cu);
  /* 1008401c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008401f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084021 jne 0x1008406a */
  if (!C.zf) goto L_1008406a;
  /* 10084023 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084025 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x1008402bu);
  /* 1008402b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008402e cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084033 jle 0x1008406a */
  if ((C.zf||C.sf!=C.of)) goto L_1008406a;
  /* 10084035 push 3 */
  push32((uint32_t)(0x3u));
  /* 10084037 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x1008403du);
  /* 1008403d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084040 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084045 jge 0x1008406a */
  if ((C.sf==C.of)) goto L_1008406a;
  /* 10084047 push 4 */
  push32((uint32_t)(0x4u));
  /* 10084049 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x1008404fu);
  /* 1008404f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084052 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084057 jle 0x1008406a */
  if ((C.zf||C.sf!=C.of)) goto L_1008406a;
  /* 10084059 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1008405e push 3 */
  push32((uint32_t)(0x3u));
  /* 10084060 push 4 */
  push32((uint32_t)(0x4u));
  /* 10084062 call 0x10082650 */
  push32(0x10084067u); f_10082650();
  /* 10084067 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008406a:;
  /* 1008406a push 3 */
  push32((uint32_t)(0x3u));
  /* 1008406c call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084072u);
  /* 10084072 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084075 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008407a jge 0x1008409f */
  if ((C.sf==C.of)) goto L_1008409f;
  /* 1008407c push 2 */
  push32((uint32_t)(0x2u));
  /* 1008407e call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084084u);
  /* 10084084 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084087 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008408c jle 0x1008409f */
  if ((C.zf||C.sf!=C.of)) goto L_1008409f;
  /* 1008408e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10084093 push 3 */
  push32((uint32_t)(0x3u));
  /* 10084095 push 2 */
  push32((uint32_t)(0x2u));
  /* 10084097 call 0x10082650 */
  push32(0x1008409cu); f_10082650();
  /* 1008409c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008409f:;
  /* 1008409f push 0x10096218 */
  push32((uint32_t)(0x10096218u));
  /* 100840a4 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x100840aau);
  /* 100840aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100840ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100840af je 0x100841d7 */
  if (C.zf) goto L_100841d7;
  /* 100840b5 push 0x10096220 */
  push32((uint32_t)(0x10096220u));
  /* 100840ba call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x100840c0u);
  /* 100840c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100840c3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100840c5 je 0x100841d7 */
  if (C.zf) goto L_100841d7;
  /* 100840cb push 2 */
  push32((uint32_t)(0x2u));
  /* 100840cd call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100840d3u);
  /* 100840d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100840d6 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100840db jle 0x100840ee */
  if ((C.zf||C.sf!=C.of)) goto L_100840ee;
  /* 100840dd push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100840e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100840e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100840e6 call 0x10082650 */
  push32(0x100840ebu); f_10082650();
  /* 100840eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100840ee:;
  /* 100840ee push 0 */
  push32((uint32_t)(0x0u));
  /* 100840f0 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100840f6u);
  /* 100840f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100840f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100840fb je 0x100841fa */
  if (C.zf) goto L_100841fa;
  /* 10084101 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084103 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084109u);
  /* 10084109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008410c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008410e je 0x1008417b */
  if (C.zf) goto L_1008417b;
  /* 10084110 push 4 */
  push32((uint32_t)(0x4u));
  /* 10084112 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084118u);
  /* 10084118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008411b cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084120 jge 0x1008417b */
  if ((C.sf==C.of)) goto L_1008417b;
  /* 10084122 push 4 */
  push32((uint32_t)(0x4u));
  /* 10084124 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x1008412au);
  /* 1008412a push 5 */
  push32((uint32_t)(0x5u));
  /* 1008412c mov esi, eax */
  ESI = (EAX);
  /* 1008412e call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084134u);
  /* 10084134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084137 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084139 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1008413e jge 0x1008415f */
  if ((C.sf==C.of)) goto L_1008415f;
  /* 10084140 push 5 */
  push32((uint32_t)(0x5u));
  /* 10084142 push 2 */
  push32((uint32_t)(0x2u));
  /* 10084144 call 0x10082650 */
  push32(0x10084149u); f_10082650();
  /* 10084149 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1008414e push 4 */
  push32((uint32_t)(0x4u));
  /* 10084150 push 2 */
  push32((uint32_t)(0x2u));
  /* 10084152 call 0x10082650 */
  push32(0x10084157u); f_10082650();
  /* 10084157 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008415a jmp 0x100841fa */
  goto L_100841fa;
L_1008415f:;
  /* 1008415f push 4 */
  push32((uint32_t)(0x4u));
  /* 10084161 push 2 */
  push32((uint32_t)(0x2u));
  /* 10084163 call 0x10082650 */
  push32(0x10084168u); f_10082650();
  /* 10084168 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1008416d push 5 */
  push32((uint32_t)(0x5u));
  /* 1008416f push 2 */
  push32((uint32_t)(0x2u));
  /* 10084171 call 0x10082650 */
  push32(0x10084176u); f_10082650();
  /* 10084176 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084179 jmp 0x100841fa */
  goto L_100841fa;
L_1008417b:;
  /* 1008417b push 5 */
  push32((uint32_t)(0x5u));
  /* 1008417d call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084183u);
  /* 10084183 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084186 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008418b jge 0x100841ad */
  if ((C.sf==C.of)) goto L_100841ad;
  /* 1008418d push 0 */
  push32((uint32_t)(0x0u));
  /* 1008418f call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084195u);
  /* 10084195 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084198 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008419a je 0x100841ad */
  if (C.zf) goto L_100841ad;
  /* 1008419c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 100841a1 push 5 */
  push32((uint32_t)(0x5u));
  /* 100841a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100841a5 call 0x10082650 */
  push32(0x100841aau); f_10082650();
  /* 100841aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100841ad:;
  /* 100841ad push 5 */
  push32((uint32_t)(0x5u));
  /* 100841af call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100841b5u);
  /* 100841b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100841b8 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100841bd jge 0x100841fa */
  if ((C.sf==C.of)) goto L_100841fa;
  /* 100841bf push 0 */
  push32((uint32_t)(0x0u));
  /* 100841c1 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100841c7u);
  /* 100841c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100841ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100841cc je 0x100841fa */
  if (C.zf) goto L_100841fa;
  /* 100841ce push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 100841d3 push 5 */
  push32((uint32_t)(0x5u));
  /* 100841d5 jmp 0x100841f0 */
  goto L_100841f0;
L_100841d7:;
  /* 100841d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 100841d9 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100841dfu);
  /* 100841df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100841e2 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100841e7 jle 0x100841fa */
  if ((C.zf||C.sf!=C.of)) goto L_100841fa;
  /* 100841e9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 100841ee push 1 */
  push32((uint32_t)(0x1u));
L_100841f0:;
  /* 100841f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 100841f2 call 0x10082650 */
  push32(0x100841f7u); f_10082650();
  /* 100841f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100841fa:;
  /* 100841fa push 0 */
  push32((uint32_t)(0x0u));
  /* 100841fc call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084202u);
  /* 10084202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084205 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008420a jle 0x1008421d */
  if ((C.zf||C.sf!=C.of)) goto L_1008421d;
  /* 1008420c push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10084211 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084213 push 0 */
  push32((uint32_t)(0x0u));
  /* 10084215 call 0x10082650 */
  push32(0x1008421au); f_10082650();
  /* 1008421a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008421d:;
  /* 1008421d push 4 */
  push32((uint32_t)(0x4u));
  /* 1008421f call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084225u);
  /* 10084225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084228 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008422d jle 0x10084240 */
  if ((C.zf||C.sf!=C.of)) goto L_10084240;
  /* 1008422f push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10084234 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084236 push 4 */
  push32((uint32_t)(0x4u));
  /* 10084238 call 0x10082650 */
  push32(0x1008423du); f_10082650();
  /* 1008423d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084240:;
  /* 10084240 push 5 */
  push32((uint32_t)(0x5u));
  /* 10084242 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084248u);
  /* 10084248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008424b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084250 jle 0x10084263 */
  if ((C.zf||C.sf!=C.of)) goto L_10084263;
  /* 10084252 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10084257 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084259 push 5 */
  push32((uint32_t)(0x5u));
  /* 1008425b call 0x10082650 */
  push32(0x10084260u); f_10082650();
  /* 10084260 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084263:;
  /* 10084263 pop edi */
  EDI = (pop32());
  /* 10084264 pop esi */
  ESI = (pop32());
  /* 10084265 pop ebp */
  EBP = (pop32());
  /* 10084266 pop ebx */
  EBX = (pop32());
  /* 10084267 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008426a ret  */
  ESPCHK(0x100833a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004270 @ 0x10084270 (209 bytes, 56 insns) */
void f_10084270(void) {
  FTRACE(0x10084270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10084270 push 3 */
  push32((uint32_t)(0x3u));
  /* 10084272 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084278u);
  /* 10084278 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008427b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084280 jle 0x10084340 */
  if ((C.zf||C.sf!=C.of)) goto L_10084340;
  /* 10084286 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084288 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1008428a push 0x10096370 */
  push32((uint32_t)(0x10096370u));
  /* 1008428f call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084295u);
  /* 10084295 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084297 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084299 push 0x10096378 */
  push32((uint32_t)(0x10096378u));
  /* 1008429e call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100842a4u);
  /* 100842a4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100842a6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100842a8 push 0x10096360 */
  push32((uint32_t)(0x10096360u));
  /* 100842ad call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100842b3u);
  /* 100842b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100842b5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100842b7 push 0x10096368 */
  push32((uint32_t)(0x10096368u));
  /* 100842bc call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100842c2u);
  /* 100842c2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100842c4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100842c6 push 0x10096380 */
  push32((uint32_t)(0x10096380u));
  /* 100842cb call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100842d1u);
  /* 100842d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100842d3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100842d5 push 0x100962b8 */
  push32((uint32_t)(0x100962b8u));
  /* 100842da call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100842e0u);
  /* 100842e0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100842e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100842e5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100842e7 push 0x100962a0 */
  push32((uint32_t)(0x100962a0u));
  /* 100842ec call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100842f2u);
  /* 100842f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100842f4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100842f6 push 0x100962a8 */
  push32((uint32_t)(0x100962a8u));
  /* 100842fb call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084301u);
  /* 10084301 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084303 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084305 push 0x100962c0 */
  push32((uint32_t)(0x100962c0u));
  /* 1008430a call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084310u);
  /* 10084310 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084312 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084314 push 0x100962c8 */
  push32((uint32_t)(0x100962c8u));
  /* 10084319 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008431fu);
  /* 1008431f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084321 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084323 push 0x10096280 */
  push32((uint32_t)(0x10096280u));
  /* 10084328 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008432eu);
  /* 1008432e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084330 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084332 push 0x10095fe8 */
  push32((uint32_t)(0x10095fe8u));
  /* 10084337 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008433du);
  /* 1008433d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084340:;
  /* 10084340 ret  */
  ESPCHK(0x10084270u, _esp0);
  ESP += 4; return;
}

/* FUN_10004350 @ 0x10084350 (79 bytes, 22 insns) */
void f_10084350(void) {
  FTRACE(0x10084350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10084350 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084352 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084354 push 0x10093930 */
  push32((uint32_t)(0x10093930u));
  /* 10084359 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008435fu);
  /* 1008435f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084361 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084363 push 0x10093938 */
  push32((uint32_t)(0x10093938u));
  /* 10084368 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008436eu);
  /* 1008436e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084370 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084372 push 0x10093928 */
  push32((uint32_t)(0x10093928u));
  /* 10084377 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008437du);
  /* 1008437d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008437f push 0xa */
  push32((uint32_t)(0xau));
  /* 10084381 push 0x10095f98 */
  push32((uint32_t)(0x10095f98u));
  /* 10084386 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008438cu);
  /* 1008438c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008438e push 0xa */
  push32((uint32_t)(0xau));
  /* 10084390 push 0x10095f88 */
  push32((uint32_t)(0x10095f88u));
  /* 10084395 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008439bu);
  /* 1008439b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008439e ret  */
  ESPCHK(0x10084350u, _esp0);
  ESP += 4; return;
}

/* FUN_100043a0 @ 0x100843a0 (127 bytes, 35 insns) */
void f_100843a0(void) {
  FTRACE(0x100843a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100843a0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100843a2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100843a4 push 0x100961f8 */
  push32((uint32_t)(0x100961f8u));
  /* 100843a9 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100843afu);
  /* 100843af push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100843b1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100843b3 push 0x100961f0 */
  push32((uint32_t)(0x100961f0u));
  /* 100843b8 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100843beu);
  /* 100843be push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100843c0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100843c2 push 0x100961c0 */
  push32((uint32_t)(0x100961c0u));
  /* 100843c7 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100843cdu);
  /* 100843cd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100843cf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100843d1 push 0x100961b8 */
  push32((uint32_t)(0x100961b8u));
  /* 100843d6 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100843dcu);
  /* 100843dc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100843de push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100843e0 push 0x100960b8 */
  push32((uint32_t)(0x100960b8u));
  /* 100843e5 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100843ebu);
  /* 100843eb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100843ed push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100843ef push 0x100960c0 */
  push32((uint32_t)(0x100960c0u));
  /* 100843f4 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100843fau);
  /* 100843fa add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100843fd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100843ff push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10084401 push 0x100960c8 */
  push32((uint32_t)(0x100960c8u));
  /* 10084406 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008440cu);
  /* 1008440c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1008440e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10084410 push 0x100960d0 */
  push32((uint32_t)(0x100960d0u));
  /* 10084415 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008441bu);
  /* 1008441b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008441e ret  */
  ESPCHK(0x100843a0u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x10084420 (3643 bytes, 1035 insns) */
void f_10084420(void) {
  FTRACE(0x10084420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10084420 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10084423 push ebx */
  push32((uint32_t)(EBX));
  /* 10084424 push ebp */
  push32((uint32_t)(EBP));
  /* 10084425 push esi */
  push32((uint32_t)(ESI));
  /* 10084426 push edi */
  push32((uint32_t)(EDI));
  /* 10084427 push 0 */
  push32((uint32_t)(0x0u));
  /* 10084429 call 0x100827a0 */
  push32(0x1008442eu); f_100827a0();
  /* 1008442e push 0x1008f030 */
  push32((uint32_t)(0x1008f030u));
  /* 10084433 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10084435 call dword ptr [0x1009652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009652c))), 0x1008443bu);
  /* 1008443b push 0x100961b0 */
  push32((uint32_t)(0x100961b0u));
  /* 10084440 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10084446u);
  /* 10084446 push 3 */
  push32((uint32_t)(0x3u));
  /* 10084448 mov ebx, eax */
  EBX = (EAX);
  /* 1008444a call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084450u);
  /* 10084450 mov ebp, eax */
  EBP = (EAX);
  /* 10084452 push 0x100961d8 */
  push32((uint32_t)(0x100961d8u));
  /* 10084457 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 1008445b call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10084461u);
  /* 10084461 push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 10084466 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 1008446a call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10084470u);
  /* 10084470 push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 10084475 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x1008447bu);
  /* 1008447b push 0x10096100 */
  push32((uint32_t)(0x10096100u));
  /* 10084480 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10084486u);
  /* 10084486 push 0x100963d0 */
  push32((uint32_t)(0x100963d0u));
  /* 1008448b call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10084491u);
  /* 10084491 push 0x10096350 */
  push32((uint32_t)(0x10096350u));
  /* 10084496 mov esi, eax */
  ESI = (EAX);
  /* 10084498 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x1008449eu);
  /* 1008449e push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 100844a3 mov edi, eax */
  EDI = (EAX);
  /* 100844a5 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100844abu);
  /* 100844ab add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100844ad add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100844b0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100844b2 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 100844b7 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 100844bb call 0x100826a0 */
  push32(0x100844c0u); f_100826a0();
  /* 100844c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100844c2 jle 0x100844d8 */
  if ((C.zf||C.sf!=C.of)) goto L_100844d8;
  /* 100844c4 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100844c6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100844c8 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100844ca push 0x10096348 */
  push32((uint32_t)(0x10096348u));
  /* 100844cf call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100844d5u);
  /* 100844d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100844d8:;
  /* 100844d8 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 100844dd call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x100844e3u);
  /* 100844e3 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 100844e8 mov esi, eax */
  ESI = (EAX);
  /* 100844ea call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100844f0u);
  /* 100844f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100844f3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100844f5 je 0x100844fc */
  if (C.zf) goto L_100844fc;
  /* 100844f7 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_100844fc:;
  /* 100844fc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100844fe je 0x10085253 */
  if (C.zf) goto L_10085253;
  /* 10084504 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084506 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084508 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008450a push 0x10095ff8 */
  push32((uint32_t)(0x10095ff8u));
  /* 1008450f call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084515u);
  /* 10084515 push 0x10095ff8 */
  push32((uint32_t)(0x10095ff8u));
  /* 1008451a call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10084520u);
  /* 10084520 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084523 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10084525 je 0x10085253 */
  if (C.zf) goto L_10085253;
  /* 1008452b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008452d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008452f push 0x10096398 */
  push32((uint32_t)(0x10096398u));
  /* 10084534 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008453au);
  /* 1008453a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008453d call dword ptr [0x10096590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096590))), 0x10084543u);
  /* 10084543 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084545 jne 0x1008459c */
  if (!C.zf) goto L_1008459c;
  /* 10084547 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008454d jle 0x10084574 */
  if ((C.zf||C.sf!=C.of)) goto L_10084574;
  /* 1008454f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084551 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084553 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084555 push 0x100961b0 */
  push32((uint32_t)(0x100961b0u));
  /* 1008455a call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084560u);
  /* 10084560 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084562 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084564 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084566 push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 1008456b call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084571u);
  /* 10084571 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084574:;
  /* 10084574 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008457a jle 0x10084588 */
  if ((C.zf||C.sf!=C.of)) goto L_10084588;
  /* 1008457c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084581 jle 0x10084588 */
  if ((C.zf||C.sf!=C.of)) goto L_10084588;
  /* 10084583 call 0x10084270 */
  push32(0x10084588u); f_10084270();
L_10084588:;
  /* 10084588 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008458a push 1 */
  push32((uint32_t)(0x1u));
  /* 1008458c push 0 */
  push32((uint32_t)(0x0u));
  /* 1008458e call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x10084594u);
  /* 10084594 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084597 jmp 0x1008465f */
  goto L_1008465f;
L_1008459c:;
  /* 1008459c mov eax, dword ptr [0x100965b4] */
  EAX = (r32((uint32_t)(0x100965b4)));
  /* 100845a1 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100845a4 je 0x100845b8 */
  if (C.zf) goto L_100845b8;
  /* 100845a6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100845a7 je 0x100845b2 */
  if (C.zf) goto L_100845b2;
  /* 100845a9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100845aa jne 0x100845e4 */
  if (!C.zf) goto L_100845e4;
  /* 100845ac push 9 */
  push32((uint32_t)(0x9u));
  /* 100845ae push 4 */
  push32((uint32_t)(0x4u));
  /* 100845b0 jmp 0x100845d9 */
  goto L_100845d9;
L_100845b2:;
  /* 100845b2 push 4 */
  push32((uint32_t)(0x4u));
  /* 100845b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 100845b6 jmp 0x100845d9 */
  goto L_100845d9;
L_100845b8:;
  /* 100845b8 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100845be jle 0x100845cf */
  if ((C.zf||C.sf!=C.of)) goto L_100845cf;
  /* 100845c0 push 6 */
  push32((uint32_t)(0x6u));
  /* 100845c2 push 6 */
  push32((uint32_t)(0x6u));
  /* 100845c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 100845c6 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x100845ccu);
  /* 100845cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100845cf:;
  /* 100845cf push 5 */
  push32((uint32_t)(0x5u));
  /* 100845d1 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100845d7 push 5 */
  push32((uint32_t)(0x5u));
L_100845d9:;
  /* 100845d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 100845db call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x100845e1u);
  /* 100845e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100845e4:;
  /* 100845e4 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 100845e8 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 100845ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100845ef je 0x100845f6 */
  if (C.zf) goto L_100845f6;
  /* 100845f1 mov esi, 0x17c */
  ESI = (0x17cu);
L_100845f6:;
  /* 100845f6 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100845f9 jge 0x10084617 */
  if ((C.sf==C.of)) goto L_10084617;
  /* 100845fb cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084601 jle 0x10084653 */
  if ((C.zf||C.sf!=C.of)) goto L_10084653;
  /* 10084603 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084605 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084607 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084609 push 0x100961b0 */
  push32((uint32_t)(0x100961b0u));
  /* 1008460e call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084614u);
  /* 10084614 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084617:;
  /* 10084617 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008461d jle 0x10084653 */
  if ((C.zf||C.sf!=C.of)) goto L_10084653;
  /* 1008461f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084621 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 10084626 push esi */
  push32((uint32_t)(ESI));
  /* 10084627 push 0x100961b0 */
  push32((uint32_t)(0x100961b0u));
  /* 1008462c call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084632u);
  /* 10084632 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084635 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008463b jle 0x10084653 */
  if ((C.zf||C.sf!=C.of)) goto L_10084653;
  /* 1008463d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008463f push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 10084644 push esi */
  push32((uint32_t)(ESI));
  /* 10084645 push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 1008464a call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084650u);
  /* 10084650 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084653:;
  /* 10084653 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084658 jle 0x1008465f */
  if ((C.zf||C.sf!=C.of)) goto L_1008465f;
  /* 1008465a call 0x10084270 */
  push32(0x1008465fu); f_10084270();
L_1008465f:;
  /* 1008465f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084661 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084663 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084665 push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 1008466a call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084670u);
  /* 10084670 push 5 */
  push32((uint32_t)(0x5u));
  /* 10084672 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084674 push 2 */
  push32((uint32_t)(0x2u));
  /* 10084676 push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 1008467b call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084681u);
  /* 10084681 push 5 */
  push32((uint32_t)(0x5u));
  /* 10084683 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084685 push 3 */
  push32((uint32_t)(0x3u));
  /* 10084687 push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 1008468c call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084692u);
  /* 10084692 push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 10084697 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x1008469du);
  /* 1008469d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100846a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100846a3 jle 0x10084716 */
  if ((C.zf||C.sf!=C.of)) goto L_10084716;
  /* 100846a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100846a7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100846a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 100846ab push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 100846b0 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100846b6u);
  /* 100846b6 push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 100846bb call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100846c1u);
  /* 100846c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100846c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100846c7 jle 0x100846dd */
  if ((C.zf||C.sf!=C.of)) goto L_100846dd;
  /* 100846c9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100846cb push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100846cd push 1 */
  push32((uint32_t)(0x1u));
  /* 100846cf push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 100846d4 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100846dau);
  /* 100846da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100846dd:;
  /* 100846dd push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 100846e2 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x100846e8u);
  /* 100846e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100846eb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100846ee jle 0x10084704 */
  if ((C.zf||C.sf!=C.of)) goto L_10084704;
  /* 100846f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100846f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100846f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100846f6 push 0x10093898 */
  push32((uint32_t)(0x10093898u));
  /* 100846fb call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084701u);
  /* 10084701 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084704:;
  /* 10084704 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084706 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10084708 push 0x10096130 */
  push32((uint32_t)(0x10096130u));
  /* 1008470d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084713u);
  /* 10084713 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084716:;
  /* 10084716 push 0x100961b0 */
  push32((uint32_t)(0x100961b0u));
  /* 1008471b call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10084721u);
  /* 10084721 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084724 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084727 jle 0x1008473d */
  if ((C.zf||C.sf!=C.of)) goto L_1008473d;
  /* 10084729 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008472b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008472d push 1 */
  push32((uint32_t)(0x1u));
  /* 1008472f push 0x10093898 */
  push32((uint32_t)(0x10093898u));
  /* 10084734 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x1008473au);
  /* 1008473a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008473d:;
  /* 1008473d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008473f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084741 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084743 push 0x10096208 */
  push32((uint32_t)(0x10096208u));
  /* 10084748 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x1008474eu);
  /* 1008474e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084750 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084752 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084754 push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 10084759 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x1008475fu);
  /* 1008475f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084761 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084763 push 2 */
  push32((uint32_t)(0x2u));
  /* 10084765 push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 1008476a call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084770u);
  /* 10084770 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084772 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084774 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084776 push 0x10095ff0 */
  push32((uint32_t)(0x10095ff0u));
  /* 1008477b call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084781u);
  /* 10084781 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084784 push 5 */
  push32((uint32_t)(0x5u));
  /* 10084786 push 0xa */
  push32((uint32_t)(0xau));
  /* 10084788 push 2 */
  push32((uint32_t)(0x2u));
  /* 1008478a push 0x10096208 */
  push32((uint32_t)(0x10096208u));
  /* 1008478f call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084795u);
  /* 10084795 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084797 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10084799 push 0x10093680 */
  push32((uint32_t)(0x10093680u));
  /* 1008479e call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100847a4u);
  /* 100847a4 push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 100847a9 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100847afu);
  /* 100847af add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100847b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100847b4 jle 0x100847ca */
  if ((C.zf||C.sf!=C.of)) goto L_100847ca;
  /* 100847b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100847b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 100847ba push 1 */
  push32((uint32_t)(0x1u));
  /* 100847bc push 0x10096118 */
  push32((uint32_t)(0x10096118u));
  /* 100847c1 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100847c7u);
  /* 100847c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100847ca:;
  /* 100847ca call dword ptr [0x10096590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096590))), 0x100847d0u);
  /* 100847d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100847d2 je 0x100847e8 */
  if (C.zf) goto L_100847e8;
  /* 100847d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100847d6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100847d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100847da push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 100847df call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100847e5u);
  /* 100847e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100847e8:;
  /* 100847e8 push 0xa */
  push32((uint32_t)(0xau));
  /* 100847ea push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100847ec push 1 */
  push32((uint32_t)(0x1u));
  /* 100847ee push 0x10096008 */
  push32((uint32_t)(0x10096008u));
  /* 100847f3 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100847f9u);
  /* 100847f9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100847fb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100847fd push 1 */
  push32((uint32_t)(0x1u));
  /* 100847ff push 0x10093638 */
  push32((uint32_t)(0x10093638u));
  /* 10084804 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x1008480au);
  /* 1008480a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008480d cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084810 jle 0x10084826 */
  if ((C.zf||C.sf!=C.of)) goto L_10084826;
  /* 10084812 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10084814 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10084816 push 2 */
  push32((uint32_t)(0x2u));
  /* 10084818 push 0x10095ff8 */
  push32((uint32_t)(0x10095ff8u));
  /* 1008481d call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084823u);
  /* 10084823 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084826:;
  /* 10084826 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10084828 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1008482a push 1 */
  push32((uint32_t)(0x1u));
  /* 1008482c push 0x10096278 */
  push32((uint32_t)(0x10096278u));
  /* 10084831 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084837u);
  /* 10084837 push 5 */
  push32((uint32_t)(0x5u));
  /* 10084839 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1008483b push 2 */
  push32((uint32_t)(0x2u));
  /* 1008483d push 0x10096278 */
  push32((uint32_t)(0x10096278u));
  /* 10084842 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084848u);
  /* 10084848 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1008484a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1008484c push 0x10096098 */
  push32((uint32_t)(0x10096098u));
  /* 10084851 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084857u);
  /* 10084857 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084859 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1008485b push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 10084860 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084866u);
  /* 10084866 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084868 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008486a push 0x100961d8 */
  push32((uint32_t)(0x100961d8u));
  /* 1008486f call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084875u);
  /* 10084875 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084878 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1008487a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1008487c push 0x10096060 */
  push32((uint32_t)(0x10096060u));
  /* 10084881 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084887u);
  /* 10084887 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084889 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1008488b push 0x10096050 */
  push32((uint32_t)(0x10096050u));
  /* 10084890 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084896u);
  /* 10084896 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084898 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1008489a push 0x10096058 */
  push32((uint32_t)(0x10096058u));
  /* 1008489f call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100848a5u);
  /* 100848a5 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 100848aa call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x100848b0u);
  /* 100848b0 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100848b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100848b5 je 0x10084974 */
  if (C.zf) goto L_10084974;
  /* 100848bb push 0x100961d8 */
  push32((uint32_t)(0x100961d8u));
  /* 100848c0 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x100848c6u);
  /* 100848c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100848c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100848cb jne 0x10084974 */
  if (!C.zf) goto L_10084974;
  /* 100848d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100848d3 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100848d9u);
  /* 100848d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100848dc cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100848e1 jle 0x10084907 */
  if ((C.zf||C.sf!=C.of)) goto L_10084907;
  /* 100848e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 100848e5 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100848ebu);
  /* 100848eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100848ee cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100848f3 jle 0x10084907 */
  if ((C.zf||C.sf!=C.of)) goto L_10084907;
  /* 100848f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100848f7 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100848fdu);
  /* 100848fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084900 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084905 jg 0x10084974 */
  if ((!C.zf&&C.sf==C.of)) goto L_10084974;
L_10084907:;
  /* 10084907 push 0 */
  push32((uint32_t)(0x0u));
  /* 10084909 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x1008490fu);
  /* 1008490f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084912 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10084914 je 0x1008499b */
  if (C.zf) goto L_1008499b;
  /* 1008491a push 5 */
  push32((uint32_t)(0x5u));
  /* 1008491c call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084922u);
  /* 10084922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084925 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008492a jle 0x1008499b */
  if ((C.zf||C.sf!=C.of)) goto L_1008499b;
  /* 1008492c push 5 */
  push32((uint32_t)(0x5u));
  /* 1008492e call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084934u);
  /* 10084934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084937 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008493c jle 0x1008494f */
  if ((C.zf||C.sf!=C.of)) goto L_1008494f;
  /* 1008493e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10084943 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084945 push 5 */
  push32((uint32_t)(0x5u));
  /* 10084947 call 0x10082650 */
  push32(0x1008494cu); f_10082650();
  /* 1008494c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008494f:;
  /* 1008494f push 4 */
  push32((uint32_t)(0x4u));
  /* 10084951 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084957u);
  /* 10084957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008495a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008495f jle 0x1008499b */
  if ((C.zf||C.sf!=C.of)) goto L_1008499b;
  /* 10084961 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10084966 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084968 push 4 */
  push32((uint32_t)(0x4u));
  /* 1008496a call 0x10082650 */
  push32(0x1008496fu); f_10082650();
  /* 1008496f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084972 jmp 0x1008499b */
  goto L_1008499b;
L_10084974:;
  /* 10084974 push 0 */
  push32((uint32_t)(0x0u));
  /* 10084976 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084978 call 0x10082630 */
  push32(0x1008497du); f_10082630();
  /* 1008497d push 0 */
  push32((uint32_t)(0x0u));
  /* 1008497f push 4 */
  push32((uint32_t)(0x4u));
  /* 10084981 call 0x10082630 */
  push32(0x10084986u); f_10082630();
  /* 10084986 push 0 */
  push32((uint32_t)(0x0u));
  /* 10084988 push 3 */
  push32((uint32_t)(0x3u));
  /* 1008498a call 0x10082630 */
  push32(0x1008498fu); f_10082630();
  /* 1008498f push 0 */
  push32((uint32_t)(0x0u));
  /* 10084991 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084993 call 0x10082630 */
  push32(0x10084998u); f_10082630();
  /* 10084998 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008499b:;
  /* 1008499b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008499d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008499f push 0x100937c0 */
  push32((uint32_t)(0x100937c0u));
  /* 100849a4 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100849aau);
  /* 100849aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100849ac push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100849ae push 1 */
  push32((uint32_t)(0x1u));
  /* 100849b0 push 0x100962f8 */
  push32((uint32_t)(0x100962f8u));
  /* 100849b5 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100849bbu);
  /* 100849bb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100849bd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100849bf push 2 */
  push32((uint32_t)(0x2u));
  /* 100849c1 push 0x100962f8 */
  push32((uint32_t)(0x100962f8u));
  /* 100849c6 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100849ccu);
  /* 100849cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100849ce push 0xa */
  push32((uint32_t)(0xau));
  /* 100849d0 push 3 */
  push32((uint32_t)(0x3u));
  /* 100849d2 push 0x100962f8 */
  push32((uint32_t)(0x100962f8u));
  /* 100849d7 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100849ddu);
  /* 100849dd push 0x10093978 */
  push32((uint32_t)(0x10093978u));
  /* 100849e2 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x100849e8u);
  /* 100849e8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100849eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100849ed jne 0x10084a38 */
  if (!C.zf) goto L_10084a38;
  /* 100849ef push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 100849f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100849f3 call 0x10082680 */
  push32(0x100849f8u); f_10082680();
  /* 100849f8 mov esi, eax */
  ESI = (EAX);
  /* 100849fa push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100849fc push 0 */
  push32((uint32_t)(0x0u));
  /* 100849fe sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10084a01 call 0x10082680 */
  push32(0x10084a06u); f_10082680();
  /* 10084a06 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10084a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10084a0a add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10084a0c call 0x10082680 */
  push32(0x10084a11u); f_10082680();
  /* 10084a11 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10084a13 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084a16 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084a19 jle 0x10084a28 */
  if ((C.zf||C.sf!=C.of)) goto L_10084a28;
  /* 10084a1b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084a1d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084a1f push 6 */
  push32((uint32_t)(0x6u));
  /* 10084a21 push 0x10095fb0 */
  push32((uint32_t)(0x10095fb0u));
  /* 10084a26 jmp 0x10084a43 */
  goto L_10084a43;
L_10084a28:;
  /* 10084a28 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10084a2a je 0x10084a4c */
  if (C.zf) goto L_10084a4c;
  /* 10084a2c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084a2e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084a30 push esi */
  push32((uint32_t)(ESI));
  /* 10084a31 push 0x10095fb0 */
  push32((uint32_t)(0x10095fb0u));
  /* 10084a36 jmp 0x10084a43 */
  goto L_10084a43;
L_10084a38:;
  /* 10084a38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084a3a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084a3c push 0xa */
  push32((uint32_t)(0xau));
  /* 10084a3e push 0x10093908 */
  push32((uint32_t)(0x10093908u));
L_10084a43:;
  /* 10084a43 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084a49u);
  /* 10084a49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084a4c:;
  /* 10084a4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084a4e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10084a50 push 0x10093978 */
  push32((uint32_t)(0x10093978u));
  /* 10084a55 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084a5bu);
  /* 10084a5b push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 10084a60 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10084a66u);
  /* 10084a66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084a69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084a6b je 0x10084a8e */
  if (C.zf) goto L_10084a8e;
  /* 10084a6d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084a6f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084a71 push 0x10093978 */
  push32((uint32_t)(0x10093978u));
  /* 10084a76 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084a7cu);
  /* 10084a7c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084a7e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10084a80 push 0x10093890 */
  push32((uint32_t)(0x10093890u));
  /* 10084a85 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084a8bu);
  /* 10084a8b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084a8e:;
  /* 10084a8e push 0x10093978 */
  push32((uint32_t)(0x10093978u));
  /* 10084a93 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10084a99u);
  /* 10084a99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084a9c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084a9e je 0x10084ac6 */
  if (C.zf) goto L_10084ac6;
  /* 10084aa0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084aa2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084aa4 push 0x10093960 */
  push32((uint32_t)(0x10093960u));
  /* 10084aa9 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084aafu);
  /* 10084aaf push 0xa */
  push32((uint32_t)(0xau));
  /* 10084ab1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10084ab3 push 0x100938a0 */
  push32((uint32_t)(0x100938a0u));
  /* 10084ab8 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084abeu);
  /* 10084abe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084ac1 call 0x10083360 */
  push32(0x10084ac6u); f_10083360();
L_10084ac6:;
  /* 10084ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10084ac8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084aca call 0x10082630 */
  push32(0x10084acfu); f_10082630();
  /* 10084acf push 0 */
  push32((uint32_t)(0x0u));
  /* 10084ad1 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084ad7u);
  /* 10084ad7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084ada cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084adf jle 0x10084b23 */
  if ((C.zf||C.sf!=C.of)) goto L_10084b23;
  /* 10084ae1 push 0x100937c0 */
  push32((uint32_t)(0x100937c0u));
  /* 10084ae6 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10084aecu);
  /* 10084aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084aef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084af1 je 0x10084b23 */
  if (C.zf) goto L_10084b23;
  /* 10084af3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084af5 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084afbu);
  /* 10084afb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084afe cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084b03 jge 0x10084b23 */
  if ((C.sf==C.of)) goto L_10084b23;
  /* 10084b05 push 0x10093978 */
  push32((uint32_t)(0x10093978u));
  /* 10084b0a call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10084b10u);
  /* 10084b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084b13 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084b15 jne 0x10084b23 */
  if (!C.zf) goto L_10084b23;
  /* 10084b17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084b19 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084b1b call 0x10082630 */
  push32(0x10084b20u); f_10082630();
  /* 10084b20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084b23:;
  /* 10084b23 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084b25 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084b27 push 3 */
  push32((uint32_t)(0x3u));
  /* 10084b29 push 0x10096210 */
  push32((uint32_t)(0x10096210u));
  /* 10084b2e call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084b34u);
  /* 10084b34 push 0x10096110 */
  push32((uint32_t)(0x10096110u));
  /* 10084b39 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10084b3fu);
  /* 10084b3f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084b42 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084b44 je 0x10084b5a */
  if (C.zf) goto L_10084b5a;
  /* 10084b46 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084b48 push 0xa */
  push32((uint32_t)(0xau));
  /* 10084b4a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10084b4c push 0x10096210 */
  push32((uint32_t)(0x10096210u));
  /* 10084b51 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084b57u);
  /* 10084b57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084b5a:;
  /* 10084b5a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084b5c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10084b5e push 0x10096110 */
  push32((uint32_t)(0x10096110u));
  /* 10084b63 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084b69u);
  /* 10084b69 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084b6b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10084b6d push 0x10096120 */
  push32((uint32_t)(0x10096120u));
  /* 10084b72 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084b78u);
  /* 10084b78 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084b7a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084b7c push 0x10096308 */
  push32((uint32_t)(0x10096308u));
  /* 10084b81 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084b87u);
  /* 10084b87 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084b89 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084b8b push 0x100962f0 */
  push32((uint32_t)(0x100962f0u));
  /* 10084b90 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084b96u);
  /* 10084b96 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084b98 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084b9a push 0x10096300 */
  push32((uint32_t)(0x10096300u));
  /* 10084b9f call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084ba5u);
  /* 10084ba5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084ba7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084ba9 push 0x100962e0 */
  push32((uint32_t)(0x100962e0u));
  /* 10084bae call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084bb4u);
  /* 10084bb4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084bb7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084bb9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084bbb push 0x100962e8 */
  push32((uint32_t)(0x100962e8u));
  /* 10084bc0 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084bc6u);
  /* 10084bc6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084bc8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084bca push 0x100962d8 */
  push32((uint32_t)(0x100962d8u));
  /* 10084bcf call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084bd5u);
  /* 10084bd5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084bd8 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084bdb jle 0x10084c34 */
  if ((C.zf||C.sf!=C.of)) goto L_10084c34;
  /* 10084bdd mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 10084be1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084be3 je 0x10084c34 */
  if (C.zf) goto L_10084c34;
  /* 10084be5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10084be7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10084be9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084beb push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 10084bf0 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084bf6u);
  /* 10084bf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084bf9 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084bfc jle 0x10084c34 */
  if ((C.zf||C.sf!=C.of)) goto L_10084c34;
  /* 10084bfe push 0xa */
  push32((uint32_t)(0xau));
  /* 10084c00 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10084c02 push 2 */
  push32((uint32_t)(0x2u));
  /* 10084c04 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 10084c09 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084c0fu);
  /* 10084c0f push 0xa */
  push32((uint32_t)(0xau));
  /* 10084c11 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084c13 push 3 */
  push32((uint32_t)(0x3u));
  /* 10084c15 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 10084c1a call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084c20u);
  /* 10084c20 push 0xa */
  push32((uint32_t)(0xau));
  /* 10084c22 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10084c24 push 4 */
  push32((uint32_t)(0x4u));
  /* 10084c26 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 10084c2b call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084c31u);
  /* 10084c31 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084c34:;
  /* 10084c34 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 10084c38 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10084c3a je 0x10084d1e */
  if (C.zf) goto L_10084d1e;
  /* 10084c40 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084c42 push 0xa */
  push32((uint32_t)(0xau));
  /* 10084c44 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084c46 push 0x100938e8 */
  push32((uint32_t)(0x100938e8u));
  /* 10084c4b call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084c51u);
  /* 10084c51 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10084c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084c55 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10084c57 push 0x10096180 */
  push32((uint32_t)(0x10096180u));
  /* 10084c5c call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084c62u);
  /* 10084c62 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10084c64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084c66 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10084c68 push 0x10096298 */
  push32((uint32_t)(0x10096298u));
  /* 10084c6d call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084c73u);
  /* 10084c73 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084c75 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10084c77 push 0x10093650 */
  push32((uint32_t)(0x10093650u));
  /* 10084c7c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084c82u);
  /* 10084c82 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084c84 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10084c86 push 0x10093728 */
  push32((uint32_t)(0x10093728u));
  /* 10084c8b call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084c91u);
  /* 10084c91 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084c94 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084c96 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10084c98 push 0x10093648 */
  push32((uint32_t)(0x10093648u));
  /* 10084c9d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084ca3u);
  /* 10084ca3 push 0x100961b8 */
  push32((uint32_t)(0x100961b8u));
  /* 10084ca8 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10084caeu);
  /* 10084cae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084cb1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084cb3 je 0x10084cc9 */
  if (C.zf) goto L_10084cc9;
  /* 10084cb5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10084cb7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10084cb9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10084cbb push 0x10096390 */
  push32((uint32_t)(0x10096390u));
  /* 10084cc0 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084cc6u);
  /* 10084cc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084cc9:;
  /* 10084cc9 push 0x100960d0 */
  push32((uint32_t)(0x100960d0u));
  /* 10084cce call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10084cd4u);
  /* 10084cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084cd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084cd9 je 0x10084cef */
  if (C.zf) goto L_10084cef;
  /* 10084cdb push 0xa */
  push32((uint32_t)(0xau));
  /* 10084cdd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10084cdf push 0xa */
  push32((uint32_t)(0xau));
  /* 10084ce1 push 0x10093688 */
  push32((uint32_t)(0x10093688u));
  /* 10084ce6 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084cecu);
  /* 10084cec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084cef:;
  /* 10084cef call 0x100843a0 */
  push32(0x10084cf4u); f_100843a0();
L_10084cf4:;
  /* 10084cf4 push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 10084cf9 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10084cffu);
  /* 10084cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084d02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084d04 je 0x10084d54 */
  if (C.zf) goto L_10084d54;
  /* 10084d06 push 0x10096120 */
  push32((uint32_t)(0x10096120u));
  /* 10084d0b call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10084d11u);
  /* 10084d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084d14 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084d16 jne 0x10084d45 */
  if (!C.zf) goto L_10084d45;
  /* 10084d18 push 2 */
  push32((uint32_t)(0x2u));
  /* 10084d1a push 2 */
  push32((uint32_t)(0x2u));
  /* 10084d1c jmp 0x10084d49 */
  goto L_10084d49;
L_10084d1e:;
  /* 10084d1e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10084d20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084d22 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10084d24 push 0x10096180 */
  push32((uint32_t)(0x10096180u));
  /* 10084d29 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084d2fu);
  /* 10084d2f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10084d31 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084d33 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10084d35 push 0x10096298 */
  push32((uint32_t)(0x10096298u));
  /* 10084d3a call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084d40u);
  /* 10084d40 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084d43 jmp 0x10084cf4 */
  goto L_10084cf4;
L_10084d45:;
  /* 10084d45 push 4 */
  push32((uint32_t)(0x4u));
  /* 10084d47 push 4 */
  push32((uint32_t)(0x4u));
L_10084d49:;
  /* 10084d49 push 8 */
  push32((uint32_t)(0x8u));
  /* 10084d4b call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x10084d51u);
  /* 10084d51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084d54:;
  /* 10084d54 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10084d59 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10084d5fu);
  /* 10084d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084d62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10084d64 je 0x10084d7a */
  if (C.zf) goto L_10084d7a;
  /* 10084d66 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084d68 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084d6a push 6 */
  push32((uint32_t)(0x6u));
  /* 10084d6c push 0x10096210 */
  push32((uint32_t)(0x10096210u));
  /* 10084d71 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084d77u);
  /* 10084d77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084d7a:;
  /* 10084d7a push 0x10096110 */
  push32((uint32_t)(0x10096110u));
  /* 10084d7f call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10084d85u);
  /* 10084d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084d88 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084d8a je 0x10084da0 */
  if (C.zf) goto L_10084da0;
  /* 10084d8c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084d8e push 0xa */
  push32((uint32_t)(0xau));
  /* 10084d90 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10084d92 push 0x10096210 */
  push32((uint32_t)(0x10096210u));
  /* 10084d97 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084d9du);
  /* 10084d9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084da0:;
  /* 10084da0 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10084da2 je 0x10084ea3 */
  if (C.zf) goto L_10084ea3;
  /* 10084da8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10084daa push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10084dac push 2 */
  push32((uint32_t)(0x2u));
  /* 10084dae push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10084db3 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084db9u);
  /* 10084db9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10084dbb push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10084dbd push 3 */
  push32((uint32_t)(0x3u));
  /* 10084dbf push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10084dc4 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084dcau);
  /* 10084dca push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10084dcc push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10084dce push 4 */
  push32((uint32_t)(0x4u));
  /* 10084dd0 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10084dd5 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084ddbu);
  /* 10084ddb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10084ddd push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10084ddf push 5 */
  push32((uint32_t)(0x5u));
  /* 10084de1 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10084de6 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084decu);
  /* 10084dec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084def push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10084df1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10084df3 push 6 */
  push32((uint32_t)(0x6u));
  /* 10084df5 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10084dfa call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084e00u);
  /* 10084e00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084e02 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10084e04 push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 10084e09 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084e0fu);
  /* 10084e0f push 0x10096100 */
  push32((uint32_t)(0x10096100u));
  /* 10084e14 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10084e1au);
  /* 10084e1a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084e1d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084e20 jle 0x10084e43 */
  if ((C.zf||C.sf!=C.of)) goto L_10084e43;
  /* 10084e22 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084e24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084e26 push 0x10096228 */
  push32((uint32_t)(0x10096228u));
  /* 10084e2b call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084e31u);
  /* 10084e31 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10084e33 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10084e35 push 0x10096230 */
  push32((uint32_t)(0x10096230u));
  /* 10084e3a call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084e40u);
  /* 10084e40 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084e43:;
  /* 10084e43 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084e45 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10084e47 push 0x10096110 */
  push32((uint32_t)(0x10096110u));
  /* 10084e4c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084e52u);
  /* 10084e52 push 0x10093928 */
  push32((uint32_t)(0x10093928u));
  /* 10084e57 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10084e5du);
  /* 10084e5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084e60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10084e62 je 0x10084ea3 */
  if (C.zf) goto L_10084ea3;
  /* 10084e64 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084e66 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084e68 push 0x10096188 */
  push32((uint32_t)(0x10096188u));
  /* 10084e6d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084e73u);
  /* 10084e73 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084e75 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084e77 push 0x10096198 */
  push32((uint32_t)(0x10096198u));
  /* 10084e7c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084e82u);
  /* 10084e82 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084e84 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10084e86 push 0x100961a0 */
  push32((uint32_t)(0x100961a0u));
  /* 10084e8b call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084e91u);
  /* 10084e91 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084e93 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10084e95 push 0x10096190 */
  push32((uint32_t)(0x10096190u));
  /* 10084e9a call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084ea0u);
  /* 10084ea0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084ea3:;
  /* 10084ea3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084ea5 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10084ea7 push 0x100937c0 */
  push32((uint32_t)(0x100937c0u));
  /* 10084eac call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084eb2u);
  /* 10084eb2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10084eb4 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10084eb6 push 0x10093900 */
  push32((uint32_t)(0x10093900u));
  /* 10084ebb call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084ec1u);
  /* 10084ec1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084ec3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084ec5 push 0x10096170 */
  push32((uint32_t)(0x10096170u));
  /* 10084eca call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10084ed0u);
  /* 10084ed0 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 10084ed4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084ed7 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084edc jle 0x10084efa */
  if ((C.zf||C.sf!=C.of)) goto L_10084efa;
  /* 10084ede push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10084ee0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10084ee2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10084ee7 push 0x10096100 */
  push32((uint32_t)(0x10096100u));
  /* 10084eec call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10084ef2u);
  /* 10084ef2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084ef5 call 0x10084350 */
  push32(0x10084efau); f_10084350();
L_10084efa:;
  /* 10084efa push 0x10093898 */
  push32((uint32_t)(0x10093898u));
  /* 10084eff call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10084f05u);
  /* 10084f05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10084f0a je 0x10085253 */
  if (C.zf) goto L_10085253;
  /* 10084f10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10084f12 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084f18u);
  /* 10084f18 push 2 */
  push32((uint32_t)(0x2u));
  /* 10084f1a mov edi, eax */
  EDI = (EAX);
  /* 10084f1c call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084f22u);
  /* 10084f22 push 4 */
  push32((uint32_t)(0x4u));
  /* 10084f24 mov esi, eax */
  ESI = (EAX);
  /* 10084f26 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084f2cu);
  /* 10084f2c push 5 */
  push32((uint32_t)(0x5u));
  /* 10084f2e mov ebp, eax */
  EBP = (EAX);
  /* 10084f30 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084f36u);
  /* 10084f36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10084f38 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10084f3c call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10084f42u);
  /* 10084f42 mov ebx, eax */
  EBX = (EAX);
  /* 10084f44 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10084f48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084f4b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084f50 jge 0x10084fe3 */
  if ((C.sf==C.of)) goto L_10084fe3;
  /* 10084f56 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084f5c jle 0x10084f69 */
  if ((C.zf||C.sf!=C.of)) goto L_10084f69;
  /* 10084f5e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10084f63 push 3 */
  push32((uint32_t)(0x3u));
  /* 10084f65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10084f67 jmp 0x10084fdb */
  goto L_10084fdb;
L_10084f69:;
  /* 10084f69 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084f6f jle 0x10084f7c */
  if ((C.zf||C.sf!=C.of)) goto L_10084f7c;
  /* 10084f71 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10084f76 push 3 */
  push32((uint32_t)(0x3u));
  /* 10084f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10084f7a jmp 0x10084fdb */
  goto L_10084fdb;
L_10084f7c:;
  /* 10084f7c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084f82 jle 0x10084f8f */
  if ((C.zf||C.sf!=C.of)) goto L_10084f8f;
  /* 10084f84 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10084f89 push 3 */
  push32((uint32_t)(0x3u));
  /* 10084f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10084f8d jmp 0x10084fdb */
  goto L_10084fdb;
L_10084f8f:;
  /* 10084f8f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084f95 jle 0x10084fa2 */
  if ((C.zf||C.sf!=C.of)) goto L_10084fa2;
  /* 10084f97 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10084f9c push 3 */
  push32((uint32_t)(0x3u));
  /* 10084f9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10084fa0 jmp 0x10084fdb */
  goto L_10084fdb;
L_10084fa2:;
  /* 10084fa2 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084faa jle 0x10084fb7 */
  if ((C.zf||C.sf!=C.of)) goto L_10084fb7;
  /* 10084fac push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10084fb1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10084fb3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10084fb5 jmp 0x10084fdb */
  goto L_10084fdb;
L_10084fb7:;
  /* 10084fb7 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084fbd jle 0x10084fca */
  if ((C.zf||C.sf!=C.of)) goto L_10084fca;
  /* 10084fbf push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10084fc4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10084fc6 push 4 */
  push32((uint32_t)(0x4u));
  /* 10084fc8 jmp 0x10084fdb */
  goto L_10084fdb;
L_10084fca:;
  /* 10084fca cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084fd0 jle 0x10084fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_10084fe3;
  /* 10084fd2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10084fd7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10084fd9 push 1 */
  push32((uint32_t)(0x1u));
L_10084fdb:;
  /* 10084fdb call 0x10082650 */
  push32(0x10084fe0u); f_10082650();
  /* 10084fe0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10084fe3:;
  /* 10084fe3 push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 10084fe8 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10084feeu);
  /* 10084fee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10084ff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10084ff3 je 0x10085043 */
  if (C.zf) goto L_10085043;
  /* 10084ff5 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10084ffb jle 0x10085043 */
  if ((C.zf||C.sf!=C.of)) goto L_10085043;
  /* 10084ffd push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 10085002 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10085008u);
  /* 10085008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008500b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008500d jne 0x10085043 */
  if (!C.zf) goto L_10085043;
  /* 1008500f cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085015 jle 0x10085028 */
  if ((C.zf||C.sf!=C.of)) goto L_10085028;
  /* 10085017 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 1008501c push 3 */
  push32((uint32_t)(0x3u));
  /* 1008501e push 4 */
  push32((uint32_t)(0x4u));
  /* 10085020 call 0x10082650 */
  push32(0x10085025u); f_10082650();
  /* 10085025 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085028:;
  /* 10085028 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085030 jle 0x10085043 */
  if ((C.zf||C.sf!=C.of)) goto L_10085043;
  /* 10085032 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10085037 push 3 */
  push32((uint32_t)(0x3u));
  /* 10085039 push 5 */
  push32((uint32_t)(0x5u));
  /* 1008503b call 0x10082650 */
  push32(0x10085040u); f_10082650();
  /* 10085040 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085043:;
  /* 10085043 push 2 */
  push32((uint32_t)(0x2u));
  /* 10085045 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x1008504bu);
  /* 1008504b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008504e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085053 jle 0x10085066 */
  if ((C.zf||C.sf!=C.of)) goto L_10085066;
  /* 10085055 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 1008505a push 1 */
  push32((uint32_t)(0x1u));
  /* 1008505c push 2 */
  push32((uint32_t)(0x2u));
  /* 1008505e call 0x10082650 */
  push32(0x10085063u); f_10082650();
  /* 10085063 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085066:;
  /* 10085066 push 0 */
  push32((uint32_t)(0x0u));
  /* 10085068 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x1008506eu);
  /* 1008506e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085071 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085076 jle 0x10085089 */
  if ((C.zf||C.sf!=C.of)) goto L_10085089;
  /* 10085078 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1008507d push 1 */
  push32((uint32_t)(0x1u));
  /* 1008507f push 0 */
  push32((uint32_t)(0x0u));
  /* 10085081 call 0x10082650 */
  push32(0x10085086u); f_10082650();
  /* 10085086 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085089:;
  /* 10085089 push 0x10096208 */
  push32((uint32_t)(0x10096208u));
  /* 1008508e call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085094u);
  /* 10085094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085099 je 0x10085220 */
  if (C.zf) goto L_10085220;
  /* 1008509f push 0x100961d8 */
  push32((uint32_t)(0x100961d8u));
  /* 100850a4 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x100850aau);
  /* 100850aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100850ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100850af jne 0x10085220 */
  if (!C.zf) goto L_10085220;
  /* 100850b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100850b7 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100850bdu);
  /* 100850bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100850c0 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100850c5 jle 0x10085180 */
  if ((C.zf||C.sf!=C.of)) goto L_10085180;
  /* 100850cb push 0 */
  push32((uint32_t)(0x0u));
  /* 100850cd call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100850d3u);
  /* 100850d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100850d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100850d8 je 0x10085180 */
  if (C.zf) goto L_10085180;
  /* 100850de push 1 */
  push32((uint32_t)(0x1u));
  /* 100850e0 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100850e6u);
  /* 100850e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100850e9 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100850ee jge 0x10085180 */
  if ((C.sf==C.of)) goto L_10085180;
  /* 100850f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100850f6 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100850fcu);
  /* 100850fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100850ff cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085104 jle 0x10085117 */
  if ((C.zf||C.sf!=C.of)) goto L_10085117;
  /* 10085106 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1008510b push 1 */
  push32((uint32_t)(0x1u));
  /* 1008510d push 5 */
  push32((uint32_t)(0x5u));
  /* 1008510f call 0x10082650 */
  push32(0x10085114u); f_10082650();
  /* 10085114 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085117:;
  /* 10085117 push 4 */
  push32((uint32_t)(0x4u));
  /* 10085119 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x1008511fu);
  /* 1008511f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085122 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085127 jle 0x1008513a */
  if ((C.zf||C.sf!=C.of)) goto L_1008513a;
  /* 10085129 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 1008512e push 1 */
  push32((uint32_t)(0x1u));
  /* 10085130 push 4 */
  push32((uint32_t)(0x4u));
  /* 10085132 call 0x10082650 */
  push32(0x10085137u); f_10082650();
  /* 10085137 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008513a:;
  /* 1008513a push 2 */
  push32((uint32_t)(0x2u));
  /* 1008513c call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10085142u);
  /* 10085142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085145 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008514a jle 0x1008515d */
  if ((C.zf||C.sf!=C.of)) goto L_1008515d;
  /* 1008514c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10085151 push 1 */
  push32((uint32_t)(0x1u));
  /* 10085153 push 2 */
  push32((uint32_t)(0x2u));
  /* 10085155 call 0x10082650 */
  push32(0x1008515au); f_10082650();
  /* 1008515a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008515d:;
  /* 1008515d push 3 */
  push32((uint32_t)(0x3u));
  /* 1008515f call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10085165u);
  /* 10085165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085168 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008516d jle 0x10085180 */
  if ((C.zf||C.sf!=C.of)) goto L_10085180;
  /* 1008516f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10085174 push 1 */
  push32((uint32_t)(0x1u));
  /* 10085176 push 3 */
  push32((uint32_t)(0x3u));
  /* 10085178 call 0x10082650 */
  push32(0x1008517du); f_10082650();
  /* 1008517d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085180:;
  /* 10085180 push 5 */
  push32((uint32_t)(0x5u));
  /* 10085182 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10085188u);
  /* 10085188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008518b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085190 jle 0x10085220 */
  if ((C.zf||C.sf!=C.of)) goto L_10085220;
  /* 10085196 push 1 */
  push32((uint32_t)(0x1u));
  /* 10085198 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x1008519eu);
  /* 1008519e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100851a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100851a3 je 0x10085220 */
  if (C.zf) goto L_10085220;
  /* 100851a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100851a7 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100851adu);
  /* 100851ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100851b0 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100851b5 jle 0x10085220 */
  if ((C.zf||C.sf!=C.of)) goto L_10085220;
  /* 100851b7 push 5 */
  push32((uint32_t)(0x5u));
  /* 100851b9 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100851bfu);
  /* 100851bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100851c2 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100851c7 jle 0x100851da */
  if ((C.zf||C.sf!=C.of)) goto L_100851da;
  /* 100851c9 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100851ce push 4 */
  push32((uint32_t)(0x4u));
  /* 100851d0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100851d2 call 0x10082650 */
  push32(0x100851d7u); f_10082650();
  /* 100851d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100851da:;
  /* 100851da push 2 */
  push32((uint32_t)(0x2u));
  /* 100851dc call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100851e2u);
  /* 100851e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100851e5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100851ea jle 0x100851fd */
  if ((C.zf||C.sf!=C.of)) goto L_100851fd;
  /* 100851ec push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 100851f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100851f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100851f5 call 0x10082650 */
  push32(0x100851fau); f_10082650();
  /* 100851fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100851fd:;
  /* 100851fd push 3 */
  push32((uint32_t)(0x3u));
  /* 100851ff call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10085205u);
  /* 10085205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085208 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008520d jle 0x10085220 */
  if ((C.zf||C.sf!=C.of)) goto L_10085220;
  /* 1008520f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10085214 push 4 */
  push32((uint32_t)(0x4u));
  /* 10085216 push 3 */
  push32((uint32_t)(0x3u));
  /* 10085218 call 0x10082650 */
  push32(0x1008521du); f_10082650();
  /* 1008521d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085220:;
  /* 10085220 call dword ptr [0x10096520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096520))), 0x10085226u);
  /* 10085226 mov ecx, dword ptr [eax*4 + 0x1009662c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1009662c)));
  /* 1008522d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1008522f jne 0x10085253 */
  if (!C.zf) goto L_10085253;
  /* 10085231 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10085236 push 3 */
  push32((uint32_t)(0x3u));
  /* 10085238 push 5 */
  push32((uint32_t)(0x5u));
  /* 1008523a call 0x10082650 */
  push32(0x1008523fu); f_10082650();
  /* 1008523f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085242 call dword ptr [0x10096520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096520))), 0x10085248u);
  /* 10085248 mov dword ptr [eax*4 + 0x1009662c], 1 */
  w32((uint32_t)(EAX*4 + 0x1009662c), (0x1u));
L_10085253:;
  /* 10085253 pop edi */
  EDI = (pop32());
  /* 10085254 pop esi */
  ESI = (pop32());
  /* 10085255 pop ebp */
  EBP = (pop32());
  /* 10085256 pop ebx */
  EBX = (pop32());
  /* 10085257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008525a ret  */
  ESPCHK(0x10084420u, _esp0);
  ESP += 4; return;
}

/* FUN_10005260 @ 0x10085260 (72 bytes, 22 insns) */
void f_10085260(void) {
  FTRACE(0x10085260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10085260 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085262 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085264 push 1 */
  push32((uint32_t)(0x1u));
  /* 10085266 push 0x10095ff8 */
  push32((uint32_t)(0x10095ff8u));
  /* 1008526b call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085271u);
  /* 10085271 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085273 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085275 push 1 */
  push32((uint32_t)(0x1u));
  /* 10085277 push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 1008527c call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085282u);
  /* 10085282 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085284 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085286 push 1 */
  push32((uint32_t)(0x1u));
  /* 10085288 push 0x10095ff0 */
  push32((uint32_t)(0x10095ff0u));
  /* 1008528d call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085293u);
  /* 10085293 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085295 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085297 push 1 */
  push32((uint32_t)(0x1u));
  /* 10085299 push 0x10093898 */
  push32((uint32_t)(0x10093898u));
  /* 1008529e call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100852a4u);
  /* 100852a4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100852a7 ret  */
  ESPCHK(0x10085260u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x100852b0 (55 bytes, 16 insns) */
void f_100852b0(void) {
  FTRACE(0x100852b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100852b0 cmp dword ptr [esp + 4], 0x100936a8 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x100936a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100852b8 jne 0x100852e4 */
  if (!C.zf) goto L_100852e4;
  /* 100852ba push 0x10096360 */
  push32((uint32_t)(0x10096360u));
  /* 100852bf call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x100852c5u);
  /* 100852c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100852c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100852ca je 0x100852e4 */
  if (C.zf) goto L_100852e4;
  /* 100852cc push 0x100962a8 */
  push32((uint32_t)(0x100962a8u));
  /* 100852d1 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x100852d7u);
  /* 100852d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100852da test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100852dc je 0x100852e4 */
  if (C.zf) goto L_100852e4;
  /* 100852de mov eax, 1 */
  EAX = (0x1u);
  /* 100852e3 ret  */
  ESPCHK(0x100852b0u, _esp0);
  ESP += 4; return;
L_100852e4:;
  /* 100852e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100852e6 ret  */
  ESPCHK(0x100852b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052f0 @ 0x100852f0 (2008 bytes, 535 insns) */
void f_100852f0(void) {
  FTRACE(0x100852f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100852f0 push 0x10096298 */
  push32((uint32_t)(0x10096298u));
  /* 100852f5 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100852fbu);
  /* 100852fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100852fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085300 jne 0x10085314 */
  if (!C.zf) goto L_10085314;
  /* 10085302 push 0x100938e8 */
  push32((uint32_t)(0x100938e8u));
  /* 10085307 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x1008530du);
  /* 1008530d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085310 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085312 je 0x10085344 */
  if (C.zf) goto L_10085344;
L_10085314:;
  /* 10085314 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085316 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085318 push 0x10093970 */
  push32((uint32_t)(0x10093970u));
  /* 1008531d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085323u);
  /* 10085323 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085325 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085327 push 0x10096218 */
  push32((uint32_t)(0x10096218u));
  /* 1008532c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085332u);
  /* 10085332 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085334 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085336 push 0x10096220 */
  push32((uint32_t)(0x10096220u));
  /* 1008533b call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085341u);
  /* 10085341 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085344:;
  /* 10085344 push 0x100963d0 */
  push32((uint32_t)(0x100963d0u));
  /* 10085349 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x1008534fu);
  /* 1008534f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085352 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085355 jg 0x1008537f */
  if ((!C.zf&&C.sf==C.of)) goto L_1008537f;
  /* 10085357 push 0x10096350 */
  push32((uint32_t)(0x10096350u));
  /* 1008535c call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085362u);
  /* 10085362 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085365 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085368 jg 0x1008537f */
  if ((!C.zf&&C.sf==C.of)) goto L_1008537f;
  /* 1008536a push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 1008536f call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085375u);
  /* 10085375 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085378 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008537d jle 0x100853dd */
  if ((C.zf||C.sf!=C.of)) goto L_100853dd;
L_1008537f:;
  /* 1008537f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085381 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10085383 push 0x10093648 */
  push32((uint32_t)(0x10093648u));
  /* 10085388 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008538eu);
  /* 1008538e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085390 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10085392 push 0x10093650 */
  push32((uint32_t)(0x10093650u));
  /* 10085397 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008539du);
  /* 1008539d push 0x100963d0 */
  push32((uint32_t)(0x100963d0u));
  /* 100853a2 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100853a8u);
  /* 100853a8 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100853ab cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100853b0 jg 0x100853cb */
  if ((!C.zf&&C.sf==C.of)) goto L_100853cb;
  /* 100853b2 push 0x10096350 */
  push32((uint32_t)(0x10096350u));
  /* 100853b7 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100853bdu);
  /* 100853bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100853c0 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100853c3 jg 0x100853cb */
  if ((!C.zf&&C.sf==C.of)) goto L_100853cb;
  /* 100853c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100853c7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100853c9 jmp 0x100853cf */
  goto L_100853cf;
L_100853cb:;
  /* 100853cb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100853cd push 0x5f */
  push32((uint32_t)(0x5fu));
L_100853cf:;
  /* 100853cf push 0x10093728 */
  push32((uint32_t)(0x10093728u));
  /* 100853d4 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100853dau);
  /* 100853da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100853dd:;
  /* 100853dd push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 100853e2 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100853e8u);
  /* 100853e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100853eb cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100853ee jle 0x100854a3 */
  if ((C.zf||C.sf!=C.of)) goto L_100854a3;
  /* 100853f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100853f6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100853f8 push 0x10096370 */
  push32((uint32_t)(0x10096370u));
  /* 100853fd call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085403u);
  /* 10085403 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085405 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10085407 push 0x10096378 */
  push32((uint32_t)(0x10096378u));
  /* 1008540c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085412u);
  /* 10085412 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085414 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085416 push 0x10096360 */
  push32((uint32_t)(0x10096360u));
  /* 1008541b call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085421u);
  /* 10085421 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085423 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10085425 push 0x100962b8 */
  push32((uint32_t)(0x100962b8u));
  /* 1008542a call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085430u);
  /* 10085430 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085432 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10085434 push 0x100962a0 */
  push32((uint32_t)(0x100962a0u));
  /* 10085439 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008543fu);
  /* 1008543f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085441 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085443 push 0x100962a8 */
  push32((uint32_t)(0x100962a8u));
  /* 10085448 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008544eu);
  /* 1008544e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085451 push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 10085456 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x1008545cu);
  /* 1008545c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008545f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085462 jle 0x100854a3 */
  if ((C.zf||C.sf!=C.of)) goto L_100854a3;
  /* 10085464 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085466 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085468 push 0x10096368 */
  push32((uint32_t)(0x10096368u));
  /* 1008546d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085473u);
  /* 10085473 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085475 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085477 push 0x10096380 */
  push32((uint32_t)(0x10096380u));
  /* 1008547c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085482u);
  /* 10085482 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085484 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085486 push 0x100962c0 */
  push32((uint32_t)(0x100962c0u));
  /* 1008548b call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085491u);
  /* 10085491 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085493 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085495 push 0x100962c8 */
  push32((uint32_t)(0x100962c8u));
  /* 1008549a call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100854a0u);
  /* 100854a0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100854a3:;
  /* 100854a3 push 0x10096100 */
  push32((uint32_t)(0x10096100u));
  /* 100854a8 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100854aeu);
  /* 100854ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100854b1 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100854b4 jle 0x1008554b */
  if ((C.zf||C.sf!=C.of)) goto L_1008554b;
  /* 100854ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100854bc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100854be push 0x10093930 */
  push32((uint32_t)(0x10093930u));
  /* 100854c3 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100854c9u);
  /* 100854c9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100854cb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100854cd push 0x10093938 */
  push32((uint32_t)(0x10093938u));
  /* 100854d2 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100854d8u);
  /* 100854d8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100854da push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100854dc push 0x10093928 */
  push32((uint32_t)(0x10093928u));
  /* 100854e1 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100854e7u);
  /* 100854e7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100854e9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100854eb push 0x10095f98 */
  push32((uint32_t)(0x10095f98u));
  /* 100854f0 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100854f6u);
  /* 100854f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100854f8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100854fa push 0x10095f88 */
  push32((uint32_t)(0x10095f88u));
  /* 100854ff call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085505u);
  /* 10085505 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085507 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10085509 push 0x10095f90 */
  push32((uint32_t)(0x10095f90u));
  /* 1008550e call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085514u);
  /* 10085514 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085517 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085519 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1008551b push 0x10096228 */
  push32((uint32_t)(0x10096228u));
  /* 10085520 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085526u);
  /* 10085526 push 0x10096100 */
  push32((uint32_t)(0x10096100u));
  /* 1008552b call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085531u);
  /* 10085531 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085534 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085537 jle 0x1008554b */
  if ((C.zf||C.sf!=C.of)) goto L_1008554b;
  /* 10085539 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008553b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1008553d push 0x10096230 */
  push32((uint32_t)(0x10096230u));
  /* 10085542 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085548u);
  /* 10085548 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008554b:;
  /* 1008554b push 0x10093720 */
  push32((uint32_t)(0x10093720u));
  /* 10085550 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085556u);
  /* 10085556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085559 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008555c jle 0x1008557f */
  if ((C.zf||C.sf!=C.of)) goto L_1008557f;
  /* 1008555e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085560 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085562 push 0x10096280 */
  push32((uint32_t)(0x10096280u));
  /* 10085567 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008556du);
  /* 1008556d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008556f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085571 push 0x10095fe8 */
  push32((uint32_t)(0x10095fe8u));
  /* 10085576 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008557cu);
  /* 1008557c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008557f:;
  /* 1008557f push 0x100963d0 */
  push32((uint32_t)(0x100963d0u));
  /* 10085584 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x1008558au);
  /* 1008558a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008558d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085590 jle 0x10085663 */
  if ((C.zf||C.sf!=C.of)) goto L_10085663;
  /* 10085596 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085598 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1008559a push 0x10096150 */
  push32((uint32_t)(0x10096150u));
  /* 1008559f call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100855a5u);
  /* 100855a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100855a7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100855a9 push 0x10096148 */
  push32((uint32_t)(0x10096148u));
  /* 100855ae call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100855b4u);
  /* 100855b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100855b6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100855b8 push 0x10096140 */
  push32((uint32_t)(0x10096140u));
  /* 100855bd call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100855c3u);
  /* 100855c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100855c5 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100855c7 push 0x10096038 */
  push32((uint32_t)(0x10096038u));
  /* 100855cc call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100855d2u);
  /* 100855d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100855d4 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100855d6 push 0x10096030 */
  push32((uint32_t)(0x10096030u));
  /* 100855db call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100855e1u);
  /* 100855e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100855e3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100855e5 push 0x10096028 */
  push32((uint32_t)(0x10096028u));
  /* 100855ea call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100855f0u);
  /* 100855f0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100855f3 push 0x100963d0 */
  push32((uint32_t)(0x100963d0u));
  /* 100855f8 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100855feu);
  /* 100855fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085601 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085604 jle 0x10085663 */
  if ((C.zf||C.sf!=C.of)) goto L_10085663;
  /* 10085606 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085608 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1008560a push 0x10096138 */
  push32((uint32_t)(0x10096138u));
  /* 1008560f call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085615u);
  /* 10085615 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085617 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10085619 push 0x10096128 */
  push32((uint32_t)(0x10096128u));
  /* 1008561e call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085624u);
  /* 10085624 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085626 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10085628 push 0x10096178 */
  push32((uint32_t)(0x10096178u));
  /* 1008562d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085633u);
  /* 10085633 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085635 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10085637 push 0x10096020 */
  push32((uint32_t)(0x10096020u));
  /* 1008563c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085642u);
  /* 10085642 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085644 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10085646 push 0x10096018 */
  push32((uint32_t)(0x10096018u));
  /* 1008564b call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085651u);
  /* 10085651 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085653 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10085655 push 0x10096010 */
  push32((uint32_t)(0x10096010u));
  /* 1008565a call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085660u);
  /* 10085660 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085663:;
  /* 10085663 push 0x10096350 */
  push32((uint32_t)(0x10096350u));
  /* 10085668 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x1008566eu);
  /* 1008566e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085671 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085674 jle 0x10085746 */
  if ((C.zf||C.sf!=C.of)) goto L_10085746;
  /* 1008567a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008567c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1008567e push 0x10093768 */
  push32((uint32_t)(0x10093768u));
  /* 10085683 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085689u);
  /* 10085689 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008568b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1008568d push 0x10093760 */
  push32((uint32_t)(0x10093760u));
  /* 10085692 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085698u);
  /* 10085698 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008569a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1008569c push 0x10093758 */
  push32((uint32_t)(0x10093758u));
  /* 100856a1 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100856a7u);
  /* 100856a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100856a9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100856ab push 0x100936d8 */
  push32((uint32_t)(0x100936d8u));
  /* 100856b0 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100856b6u);
  /* 100856b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100856b8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100856ba push 0x100936d0 */
  push32((uint32_t)(0x100936d0u));
  /* 100856bf call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100856c5u);
  /* 100856c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100856c7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100856c9 push 0x100936c8 */
  push32((uint32_t)(0x100936c8u));
  /* 100856ce call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100856d4u);
  /* 100856d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100856d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100856d9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100856db push 0x100936c0 */
  push32((uint32_t)(0x100936c0u));
  /* 100856e0 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100856e6u);
  /* 100856e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100856e8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100856ea push 0x10093698 */
  push32((uint32_t)(0x10093698u));
  /* 100856ef call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100856f5u);
  /* 100856f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100856f7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100856f9 push 0x10093690 */
  push32((uint32_t)(0x10093690u));
  /* 100856fe call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085704u);
  /* 10085704 push 0x10093690 */
  push32((uint32_t)(0x10093690u));
  /* 10085709 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x1008570fu);
  /* 1008570f add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085712 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10085714 je 0x10085746 */
  if (C.zf) goto L_10085746;
  /* 10085716 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085718 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1008571a push 0x10093740 */
  push32((uint32_t)(0x10093740u));
  /* 1008571f call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085725u);
  /* 10085725 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085727 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10085729 push 0x10093738 */
  push32((uint32_t)(0x10093738u));
  /* 1008572e call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085734u);
  /* 10085734 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085736 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10085738 push 0x10093730 */
  push32((uint32_t)(0x10093730u));
  /* 1008573d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085743u);
  /* 10085743 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085746:;
  /* 10085746 push 0x100936b0 */
  push32((uint32_t)(0x100936b0u));
  /* 1008574b call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085751u);
  /* 10085751 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085754 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085757 jle 0x100857df */
  if ((C.zf||C.sf!=C.of)) goto L_100857df;
  /* 1008575d push 0x100936a0 */
  push32((uint32_t)(0x100936a0u));
  /* 10085762 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085768u);
  /* 10085768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008576b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008576e jge 0x100857df */
  if ((C.sf==C.of)) goto L_100857df;
  /* 10085770 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085772 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10085774 push 0x10093920 */
  push32((uint32_t)(0x10093920u));
  /* 10085779 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008577fu);
  /* 1008577f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085781 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10085783 push 0x10093918 */
  push32((uint32_t)(0x10093918u));
  /* 10085788 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008578eu);
  /* 1008578e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085790 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085792 push 0x10093910 */
  push32((uint32_t)(0x10093910u));
  /* 10085797 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008579du);
  /* 1008579d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008579f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100857a1 push 0x100938d8 */
  push32((uint32_t)(0x100938d8u));
  /* 100857a6 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100857acu);
  /* 100857ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100857ae push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100857b0 push 0x100938d0 */
  push32((uint32_t)(0x100938d0u));
  /* 100857b5 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100857bbu);
  /* 100857bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100857bd push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100857bf push 0x100938c8 */
  push32((uint32_t)(0x100938c8u));
  /* 100857c4 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100857cau);
  /* 100857ca add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100857cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100857cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100857d1 push 0x10096228 */
  push32((uint32_t)(0x10096228u));
  /* 100857d6 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100857dcu);
  /* 100857dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100857df:;
  /* 100857df push 0x100936a0 */
  push32((uint32_t)(0x100936a0u));
  /* 100857e4 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100857eau);
  /* 100857ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100857ed cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100857f0 jle 0x100858d1 */
  if ((C.zf||C.sf!=C.of)) goto L_100858d1;
  /* 100857f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100857f8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100857fa push 0x10093678 */
  push32((uint32_t)(0x10093678u));
  /* 100857ff call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085805u);
  /* 10085805 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085807 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10085809 push 0x10093670 */
  push32((uint32_t)(0x10093670u));
  /* 1008580e call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085814u);
  /* 10085814 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085816 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085818 push 0x10093668 */
  push32((uint32_t)(0x10093668u));
  /* 1008581d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085823u);
  /* 10085823 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085825 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10085827 push 0x10096338 */
  push32((uint32_t)(0x10096338u));
  /* 1008582c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085832u);
  /* 10085832 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085834 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10085836 push 0x10096330 */
  push32((uint32_t)(0x10096330u));
  /* 1008583b call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085841u);
  /* 10085841 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085843 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10085845 push 0x10096328 */
  push32((uint32_t)(0x10096328u));
  /* 1008584a call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085850u);
  /* 10085850 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085853 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085855 push 0xa */
  push32((uint32_t)(0xau));
  /* 10085857 push 0x100963b0 */
  push32((uint32_t)(0x100963b0u));
  /* 1008585c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085862u);
  /* 10085862 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085864 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10085866 push 0x100963a8 */
  push32((uint32_t)(0x100963a8u));
  /* 1008586b call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085871u);
  /* 10085871 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085873 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10085875 push 0x100963f8 */
  push32((uint32_t)(0x100963f8u));
  /* 1008587a call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085880u);
  /* 10085880 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085882 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10085884 push 0x100963f0 */
  push32((uint32_t)(0x100963f0u));
  /* 10085889 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008588fu);
  /* 1008588f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085891 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10085893 push 0x100963e8 */
  push32((uint32_t)(0x100963e8u));
  /* 10085898 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008589eu);
  /* 1008589e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100858a0 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100858a2 push 0x100963e0 */
  push32((uint32_t)(0x100963e0u));
  /* 100858a7 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100858adu);
  /* 100858ad add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100858b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100858b2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100858b4 push 0x10096228 */
  push32((uint32_t)(0x10096228u));
  /* 100858b9 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100858bfu);
  /* 100858bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100858c1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100858c3 push 0x10096230 */
  push32((uint32_t)(0x10096230u));
  /* 100858c8 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100858ceu);
  /* 100858ce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100858d1:;
  /* 100858d1 push 0x10095fa0 */
  push32((uint32_t)(0x10095fa0u));
  /* 100858d6 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100858dcu);
  /* 100858dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100858df cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100858e2 jle 0x10085a40 */
  if ((C.zf||C.sf!=C.of)) goto L_10085a40;
  /* 100858e8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100858ea push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100858ec push 0x10093700 */
  push32((uint32_t)(0x10093700u));
  /* 100858f1 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100858f7u);
  /* 100858f7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100858f9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100858fb push 0x10093708 */
  push32((uint32_t)(0x10093708u));
  /* 10085900 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085906u);
  /* 10085906 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085908 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1008590a push 0x10093710 */
  push32((uint32_t)(0x10093710u));
  /* 1008590f call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085915u);
  /* 10085915 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085917 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085919 push 0x10093718 */
  push32((uint32_t)(0x10093718u));
  /* 1008591e call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085924u);
  /* 10085924 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085926 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085928 push 0x100936e0 */
  push32((uint32_t)(0x100936e0u));
  /* 1008592d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085933u);
  /* 10085933 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085935 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085937 push 0x100936f0 */
  push32((uint32_t)(0x100936f0u));
  /* 1008593c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085942u);
  /* 10085942 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085945 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085947 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085949 push 0x100937a8 */
  push32((uint32_t)(0x100937a8u));
  /* 1008594e call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085954u);
  /* 10085954 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085956 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085958 push 0x100937b0 */
  push32((uint32_t)(0x100937b0u));
  /* 1008595d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085963u);
  /* 10085963 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085965 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085967 push 0x100937b8 */
  push32((uint32_t)(0x100937b8u));
  /* 1008596c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085972u);
  /* 10085972 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085974 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085976 push 0x10093790 */
  push32((uint32_t)(0x10093790u));
  /* 1008597b call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085981u);
  /* 10085981 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085983 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085985 push 0x10093798 */
  push32((uint32_t)(0x10093798u));
  /* 1008598a call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085990u);
  /* 10085990 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085992 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085994 push 0x100937a0 */
  push32((uint32_t)(0x100937a0u));
  /* 10085999 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008599fu);
  /* 1008599f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100859a2 push 0x10095fa0 */
  push32((uint32_t)(0x10095fa0u));
  /* 100859a7 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100859adu);
  /* 100859ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100859b0 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100859b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100859b5 jle 0x100859ca */
  if ((C.zf||C.sf!=C.of)) goto L_100859ca;
  /* 100859b7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100859b9 push 0x10096048 */
  push32((uint32_t)(0x10096048u));
  /* 100859be call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100859c4u);
  /* 100859c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100859c6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100859c8 jmp 0x100859db */
  goto L_100859db;
L_100859ca:;
  /* 100859ca push 0xf */
  push32((uint32_t)(0xfu));
  /* 100859cc push 0x10096048 */
  push32((uint32_t)(0x10096048u));
  /* 100859d1 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100859d7u);
  /* 100859d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100859d9 push 0xf */
  push32((uint32_t)(0xfu));
L_100859db:;
  /* 100859db push 0x100960a8 */
  push32((uint32_t)(0x100960a8u));
  /* 100859e0 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100859e6u);
  /* 100859e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100859e9 push 0x10096048 */
  push32((uint32_t)(0x10096048u));
  /* 100859ee call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x100859f4u);
  /* 100859f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100859f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100859f9 je 0x10085a1f */
  if (C.zf) goto L_10085a1f;
  /* 100859fb push 0x100960a8 */
  push32((uint32_t)(0x100960a8u));
  /* 10085a00 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10085a06u);
  /* 10085a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085a09 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10085a0b je 0x10085a1f */
  if (C.zf) goto L_10085a1f;
  /* 10085a0d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085a0f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085a11 push 0x100960a0 */
  push32((uint32_t)(0x100960a0u));
  /* 10085a16 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085a1cu);
  /* 10085a1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085a1f:;
  /* 10085a1f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085a21 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085a23 push 0x10096228 */
  push32((uint32_t)(0x10096228u));
  /* 10085a28 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085a2eu);
  /* 10085a2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085a30 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085a32 push 0x10096230 */
  push32((uint32_t)(0x10096230u));
  /* 10085a37 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085a3du);
  /* 10085a3d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085a40:;
  /* 10085a40 push 0x10096328 */
  push32((uint32_t)(0x10096328u));
  /* 10085a45 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10085a4bu);
  /* 10085a4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085a4e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10085a50 je 0x10085ac7 */
  if (C.zf) goto L_10085ac7;
  /* 10085a52 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085a54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085a56 push 0x10096190 */
  push32((uint32_t)(0x10096190u));
  /* 10085a5b call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085a61u);
  /* 10085a61 push 0x10096190 */
  push32((uint32_t)(0x10096190u));
  /* 10085a66 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10085a6cu);
  /* 10085a6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085a6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10085a71 je 0x10085ac7 */
  if (C.zf) goto L_10085ac7;
  /* 10085a73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085a75 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085a77 push 0x100961a0 */
  push32((uint32_t)(0x100961a0u));
  /* 10085a7c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085a82u);
  /* 10085a82 push 0x100961a0 */
  push32((uint32_t)(0x100961a0u));
  /* 10085a87 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10085a8du);
  /* 10085a8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085a90 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10085a92 je 0x10085ac7 */
  if (C.zf) goto L_10085ac7;
  /* 10085a94 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085a96 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085a98 push 0x10096198 */
  push32((uint32_t)(0x10096198u));
  /* 10085a9d call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085aa3u);
  /* 10085aa3 push 0x10096198 */
  push32((uint32_t)(0x10096198u));
  /* 10085aa8 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10085aaeu);
  /* 10085aae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085ab1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10085ab3 je 0x10085ac7 */
  if (C.zf) goto L_10085ac7;
  /* 10085ab5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085ab7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085ab9 push 0x10096188 */
  push32((uint32_t)(0x10096188u));
  /* 10085abe call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085ac4u);
  /* 10085ac4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085ac7:;
  /* 10085ac7 ret  */
  ESPCHK(0x100852f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ad0 @ 0x10085ad0 (305 bytes, 86 insns) */
void f_10085ad0(void) {
  FTRACE(0x10085ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10085ad0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085ad2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10085ad4 push 0x10096398 */
  push32((uint32_t)(0x10096398u));
  /* 10085ad9 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085adfu);
  /* 10085adf push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 10085ae4 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085aeau);
  /* 10085aea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085aed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085aef je 0x10085b03 */
  if (C.zf) goto L_10085b03;
  /* 10085af1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085af3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085af5 push 0x10093680 */
  push32((uint32_t)(0x10093680u));
  /* 10085afa call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085b00u);
  /* 10085b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085b03:;
  /* 10085b03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085b05 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085b07 push 0x10096098 */
  push32((uint32_t)(0x10096098u));
  /* 10085b0c call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085b12u);
  /* 10085b12 push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 10085b17 call 0x100852b0 */
  push32(0x10085b1cu); f_100852b0();
  /* 10085b1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085b1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085b21 jne 0x10085b31 */
  if (!C.zf) goto L_10085b31;
  /* 10085b23 mov eax, dword ptr [0x10095f78] */
  EAX = (r32((uint32_t)(0x10095f78)));
  /* 10085b28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085b2a je 0x10085b43 */
  if (C.zf) goto L_10085b43;
  /* 10085b2c cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085b2f je 0x10085b43 */
  if (C.zf) goto L_10085b43;
L_10085b31:;
  /* 10085b31 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085b33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10085b35 push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 10085b3a call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085b40u);
  /* 10085b40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085b43:;
  /* 10085b43 push 0x10096008 */
  push32((uint32_t)(0x10096008u));
  /* 10085b48 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085b4eu);
  /* 10085b4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085b51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085b53 je 0x10085b67 */
  if (C.zf) goto L_10085b67;
  /* 10085b55 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085b57 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085b59 push 0x10096060 */
  push32((uint32_t)(0x10096060u));
  /* 10085b5e call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085b64u);
  /* 10085b64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085b67:;
  /* 10085b67 push 0x10096170 */
  push32((uint32_t)(0x10096170u));
  /* 10085b6c call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10085b72u);
  /* 10085b72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085b75 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10085b77 je 0x10085b8b */
  if (C.zf) goto L_10085b8b;
  /* 10085b79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085b7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085b7d push 0x10096050 */
  push32((uint32_t)(0x10096050u));
  /* 10085b82 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085b88u);
  /* 10085b88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085b8b:;
  /* 10085b8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085b8d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10085b8f push 0x10096170 */
  push32((uint32_t)(0x10096170u));
  /* 10085b94 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085b9au);
  /* 10085b9a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085b9c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10085b9e push 0x10096120 */
  push32((uint32_t)(0x10096120u));
  /* 10085ba3 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085ba9u);
  /* 10085ba9 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10085bae call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085bb4u);
  /* 10085bb4 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085bb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085bb9 je 0x10085bcd */
  if (C.zf) goto L_10085bcd;
  /* 10085bbb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085bbd push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10085bbf push 0x100961d8 */
  push32((uint32_t)(0x100961d8u));
  /* 10085bc4 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085bcau);
  /* 10085bca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085bcd:;
  /* 10085bcd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085bcf push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10085bd1 push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 10085bd6 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085bdcu);
  /* 10085bdc push 0x10096278 */
  push32((uint32_t)(0x10096278u));
  /* 10085be1 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085be7u);
  /* 10085be7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085bea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085bec je 0x10085c00 */
  if (C.zf) goto L_10085c00;
  /* 10085bee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085bf0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085bf2 push 0x10093900 */
  push32((uint32_t)(0x10093900u));
  /* 10085bf7 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10085bfdu);
  /* 10085bfd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085c00:;
  /* 10085c00 ret  */
  ESPCHK(0x10085ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c10 @ 0x10085c10 (536 bytes, 150 insns) */
void f_10085c10(void) {
  FTRACE(0x10085c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10085c10 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085c12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085c14 push 3 */
  push32((uint32_t)(0x3u));
  /* 10085c16 push 0x10096278 */
  push32((uint32_t)(0x10096278u));
  /* 10085c1b call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085c21u);
  /* 10085c21 push 0x10096008 */
  push32((uint32_t)(0x10096008u));
  /* 10085c26 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10085c2cu);
  /* 10085c2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085c2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085c31 je 0x10085c58 */
  if (C.zf) goto L_10085c58;
  /* 10085c33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085c35 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085c37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10085c39 push 0x10095ff8 */
  push32((uint32_t)(0x10095ff8u));
  /* 10085c3e call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085c44u);
  /* 10085c44 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085c46 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085c48 push 4 */
  push32((uint32_t)(0x4u));
  /* 10085c4a push 0x10095ff0 */
  push32((uint32_t)(0x10095ff0u));
  /* 10085c4f call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085c55u);
  /* 10085c55 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085c58:;
  /* 10085c58 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085c5a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10085c5e push 0x10095ff8 */
  push32((uint32_t)(0x10095ff8u));
  /* 10085c63 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085c69u);
  /* 10085c69 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085c6b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085c6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10085c6f push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 10085c74 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085c7au);
  /* 10085c7a mov eax, dword ptr [0x100962d4] */
  EAX = (r32((uint32_t)(0x100962d4)));
  /* 10085c7f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085c82 mov ecx, dword ptr [eax*4 + 0x10095fb8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10095fb8)));
  /* 10085c89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10085c8b jne 0x10085ca8 */
  if (!C.zf) goto L_10085ca8;
  /* 10085c8d call 0x10085260 */
  push32(0x10085c92u); f_10085260();
  /* 10085c92 push 0x10093898 */
  push32((uint32_t)(0x10093898u));
  /* 10085c97 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10085c9du);
  /* 10085c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085ca0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085ca2 je 0x10085e27 */
  if (C.zf) goto L_10085e27;
L_10085ca8:;
  /* 10085ca8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085caa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085cac push 1 */
  push32((uint32_t)(0x1u));
  /* 10085cae push 0x10096208 */
  push32((uint32_t)(0x10096208u));
  /* 10085cb3 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085cb9u);
  /* 10085cb9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085cbb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085cbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10085cbf push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 10085cc4 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085ccau);
  /* 10085cca push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 10085ccf call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10085cd5u);
  /* 10085cd5 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085cd8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085cdb jge 0x10085cea */
  if ((C.sf==C.of)) goto L_10085cea;
  /* 10085cdd call 0x100826b0 */
  push32(0x10085ce2u); f_100826b0();
  /* 10085ce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085ce4 jne 0x10085e27 */
  if (!C.zf) goto L_10085e27;
L_10085cea:;
  /* 10085cea push esi */
  push32((uint32_t)(ESI));
  /* 10085ceb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085ced push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085cef push 2 */
  push32((uint32_t)(0x2u));
  /* 10085cf1 push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 10085cf6 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085cfcu);
  /* 10085cfc push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 10085d01 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10085d07u);
  /* 10085d07 push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 10085d0c mov esi, eax */
  ESI = (EAX);
  /* 10085d0e call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085d14u);
  /* 10085d14 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085d17 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10085d19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085d1b pop esi */
  ESI = (pop32());
  /* 10085d1c jg 0x10085e27 */
  if ((!C.zf&&C.sf==C.of)) goto L_10085e27;
  /* 10085d22 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085d24 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085d26 push 1 */
  push32((uint32_t)(0x1u));
  /* 10085d28 push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 10085d2d call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085d33u);
  /* 10085d33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085d36 call 0x100827c0 */
  push32(0x10085d3bu); f_100827c0();
  /* 10085d3b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085d3e jge 0x10085d67 */
  if ((C.sf==C.of)) goto L_10085d67;
  /* 10085d40 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085d42 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085d44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10085d46 push 0x10096008 */
  push32((uint32_t)(0x10096008u));
  /* 10085d4b call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085d51u);
  /* 10085d51 push 0x10096008 */
  push32((uint32_t)(0x10096008u));
  /* 10085d56 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10085d5cu);
  /* 10085d5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085d61 je 0x10085e27 */
  if (C.zf) goto L_10085e27;
L_10085d67:;
  /* 10085d67 call 0x10085260 */
  push32(0x10085d6cu); f_10085260();
  /* 10085d6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085d6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085d70 push 4 */
  push32((uint32_t)(0x4u));
  /* 10085d72 push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 10085d77 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085d7du);
  /* 10085d7d push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 10085d82 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10085d88u);
  /* 10085d88 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085d8b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085d8e jl 0x10085e27 */
  if ((C.sf!=C.of)) goto L_10085e27;
  /* 10085d94 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085d96 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085d98 push 3 */
  push32((uint32_t)(0x3u));
  /* 10085d9a push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10085d9f call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085da5u);
  /* 10085da5 push 0x10096278 */
  push32((uint32_t)(0x10096278u));
  /* 10085daa call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085db0u);
  /* 10085db0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085db3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085db5 je 0x10085dcb */
  if (C.zf) goto L_10085dcb;
  /* 10085db7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085db9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085dbb push 4 */
  push32((uint32_t)(0x4u));
  /* 10085dbd push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10085dc2 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085dc8u);
  /* 10085dc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085dcb:;
  /* 10085dcb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085dcd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085dcf push 1 */
  push32((uint32_t)(0x1u));
  /* 10085dd1 push 0x10093638 */
  push32((uint32_t)(0x10093638u));
  /* 10085dd6 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085ddcu);
  /* 10085ddc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085dde push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10085de0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10085de2 push 0x10093638 */
  push32((uint32_t)(0x10093638u));
  /* 10085de7 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085dedu);
  /* 10085ded push 0x10093900 */
  push32((uint32_t)(0x10093900u));
  /* 10085df2 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10085df8u);
  /* 10085df8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085dfb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10085dfd je 0x10085e13 */
  if (C.zf) goto L_10085e13;
  /* 10085dff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085e01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085e03 push 5 */
  push32((uint32_t)(0x5u));
  /* 10085e05 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10085e0a call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085e10u);
  /* 10085e10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085e13:;
  /* 10085e13 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085e15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085e17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10085e19 push 0x10096118 */
  push32((uint32_t)(0x10096118u));
  /* 10085e1e call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085e24u);
  /* 10085e24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085e27:;
  /* 10085e27 ret  */
  ESPCHK(0x10085c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e30 @ 0x10085e30 (472 bytes, 137 insns) */
void f_10085e30(void) {
  FTRACE(0x10085e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10085e30 push ecx */
  push32((uint32_t)(ECX));
  /* 10085e31 push 0x10096298 */
  push32((uint32_t)(0x10096298u));
  /* 10085e36 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085e3cu);
  /* 10085e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085e3f cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085e42 jge 0x10085e57 */
  if ((C.sf==C.of)) goto L_10085e57;
  /* 10085e44 mov eax, dword ptr [0x100962d4] */
  EAX = (r32((uint32_t)(0x100962d4)));
  /* 10085e49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10085e4b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10085e4e push eax */
  push32((uint32_t)(EAX));
  /* 10085e4f call 0x10082710 */
  push32(0x10085e54u); f_10082710();
  /* 10085e54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085e57:;
  /* 10085e57 push 0x10096298 */
  push32((uint32_t)(0x10096298u));
  /* 10085e5c call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085e62u);
  /* 10085e62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085e65 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085e6a jg 0x10085e7e */
  if ((!C.zf&&C.sf==C.of)) goto L_10085e7e;
  /* 10085e6c push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10085e71 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10085e77u);
  /* 10085e77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085e7c je 0x10085e92 */
  if (C.zf) goto L_10085e92;
L_10085e7e:;
  /* 10085e7e mov ecx, dword ptr [0x100962d4] */
  ECX = (r32((uint32_t)(0x100962d4)));
  /* 10085e84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10085e86 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10085e89 push ecx */
  push32((uint32_t)(ECX));
  /* 10085e8a call 0x10082710 */
  push32(0x10085e8fu); f_10082710();
  /* 10085e8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085e92:;
  /* 10085e92 push esi */
  push32((uint32_t)(ESI));
  /* 10085e93 push edi */
  push32((uint32_t)(EDI));
  /* 10085e94 mov edi, 2 */
  EDI = (0x2u);
L_10085e99:;
  /* 10085e99 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085e9b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10085e9d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10085ea2 push 0x100961b0 */
  push32((uint32_t)(0x100961b0u));
  /* 10085ea7 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085eadu);
  /* 10085ead push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 10085eb2 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10085eb8u);
  /* 10085eb8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085ebb cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085ec0 jge 0x10085edb */
  if ((C.sf==C.of)) goto L_10085edb;
  /* 10085ec2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085ec4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10085ec6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10085ecb push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 10085ed0 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085ed6u);
  /* 10085ed6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085ed9 jmp 0x10085f06 */
  goto L_10085f06;
L_10085edb:;
  /* 10085edb push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10085edd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10085edf push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10085ee4 push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 10085ee9 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085eefu);
  /* 10085eef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085ef1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10085ef3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10085ef8 push 0x10096100 */
  push32((uint32_t)(0x10096100u));
  /* 10085efd call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085f03u);
  /* 10085f03 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085f06:;
  /* 10085f06 mov edx, dword ptr [0x100962d4] */
  EDX = (r32((uint32_t)(0x100962d4)));
  /* 10085f0c add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10085f0f push edx */
  push32((uint32_t)(EDX));
  /* 10085f10 call 0x10082730 */
  push32(0x10085f15u); f_10082730();
  /* 10085f15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085f18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085f1a jne 0x10085f3d */
  if (!C.zf) goto L_10085f3d;
  /* 10085f1c call 0x100827c0 */
  push32(0x10085f21u); f_100827c0();
  /* 10085f21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085f24 jge 0x10085f3d */
  if ((C.sf==C.of)) goto L_10085f3d;
  /* 10085f26 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085f28 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10085f2a push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10085f2f push 0x10096298 */
  push32((uint32_t)(0x10096298u));
  /* 10085f34 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085f3au);
  /* 10085f3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10085f3d:;
  /* 10085f3d mov al, byte ptr [0x100962d4] */
  AL = (r8((uint32_t)(0x100962d4)));
  /* 10085f42 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10085f46 mov eax, dword ptr [0x100964d8] */
  EAX = (r32((uint32_t)(0x100964d8)));
  /* 10085f4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10085f4d je 0x10085f65 */
  if (C.zf) goto L_10085f65;
  /* 10085f4f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10085f53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10085f55 push 0x100938a8 */
  push32((uint32_t)(0x100938a8u));
  /* 10085f5a push ecx */
  push32((uint32_t)(ECX));
  /* 10085f5b call eax */
  call_ind((uint32_t)(EAX), 0x10085f5du);
  /* 10085f5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085f60 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085f63 jge 0x10085fa5 */
  if ((C.sf==C.of)) goto L_10085fa5;
L_10085f65:;
  /* 10085f65 push 5 */
  push32((uint32_t)(0x5u));
  /* 10085f67 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10085f6du);
  /* 10085f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085f70 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085f75 jle 0x10085fa5 */
  if ((C.zf||C.sf!=C.of)) goto L_10085fa5;
  /* 10085f77 push 4 */
  push32((uint32_t)(0x4u));
  /* 10085f79 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10085f7fu);
  /* 10085f7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085f82 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10085f87 jle 0x10085fa5 */
  if ((C.zf||C.sf!=C.of)) goto L_10085fa5;
  /* 10085f89 mov esi, 0x1e */
  ESI = (0x1eu);
L_10085f8e:;
  /* 10085f8e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085f90 push 0xa */
  push32((uint32_t)(0xau));
  /* 10085f92 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10085f94 push 0x100938a8 */
  push32((uint32_t)(0x100938a8u));
  /* 10085f99 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085f9fu);
  /* 10085f9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085fa2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10085fa3 jne 0x10085f8e */
  if (!C.zf) goto L_10085f8e;
L_10085fa5:;
  /* 10085fa5 push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 10085faa call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10085fb0u);
  /* 10085fb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085fb3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10085fb5 je 0x10085fbb */
  if (C.zf) goto L_10085fbb;
  /* 10085fb7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10085fb9 jmp 0x10085fbd */
  goto L_10085fbd;
L_10085fbb:;
  /* 10085fbb push 0x64 */
  push32((uint32_t)(0x64u));
L_10085fbd:;
  /* 10085fbd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10085fbf push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10085fc4 push 0x100963d0 */
  push32((uint32_t)(0x100963d0u));
  /* 10085fc9 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085fcfu);
  /* 10085fcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085fd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085fd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10085fd6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10085fdb push 0x100936a0 */
  push32((uint32_t)(0x100936a0u));
  /* 10085fe0 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085fe6u);
  /* 10085fe6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10085fe8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10085fea push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10085fef push 0x10095fa0 */
  push32((uint32_t)(0x10095fa0u));
  /* 10085ff4 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10085ffau);
  /* 10085ffa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10085ffd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10085ffe jne 0x10085e99 */
  if (!C.zf) goto L_10085e99;
  /* 10086004 pop edi */
  EDI = (pop32());
  /* 10086005 pop esi */
  ESI = (pop32());
  /* 10086006 pop ecx */
  ECX = (pop32());
  /* 10086007 ret  */
  ESPCHK(0x10085e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006010 @ 0x10086010 (789 bytes, 244 insns) */
void f_10086010(void) {
  FTRACE(0x10086010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086010 push ecx */
  push32((uint32_t)(ECX));
  /* 10086011 push 0x10093898 */
  push32((uint32_t)(0x10093898u));
  /* 10086016 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x1008601cu);
  /* 1008601c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008601f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086021 je 0x10086323 */
  if (C.zf) goto L_10086323;
  /* 10086027 call 0x100826b0 */
  push32(0x1008602cu); f_100826b0();
  /* 1008602c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008602f jne 0x10086076 */
  if (!C.zf) goto L_10086076;
  /* 10086031 mov eax, dword ptr [0x100962d4] */
  EAX = (r32((uint32_t)(0x100962d4)));
  /* 10086036 push eax */
  push32((uint32_t)(EAX));
  /* 10086037 call 0x10082730 */
  push32(0x1008603cu); f_10082730();
  /* 1008603c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008603f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086041 jne 0x10086323 */
  if (!C.zf) goto L_10086323;
  /* 10086047 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1008604c push 3 */
  push32((uint32_t)(0x3u));
  /* 1008604e push 2 */
  push32((uint32_t)(0x2u));
  /* 10086050 call 0x10082650 */
  push32(0x10086055u); f_10082650();
  /* 10086055 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 1008605a push 3 */
  push32((uint32_t)(0x3u));
  /* 1008605c push 0 */
  push32((uint32_t)(0x0u));
  /* 1008605e call 0x10082650 */
  push32(0x10086063u); f_10082650();
  /* 10086063 mov ecx, dword ptr [0x100962d4] */
  ECX = (r32((uint32_t)(0x100962d4)));
  /* 10086069 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008606b push ecx */
  push32((uint32_t)(ECX));
  /* 1008606c call 0x10082710 */
  push32(0x10086071u); f_10082710();
  /* 10086071 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086074 pop ecx */
  ECX = (pop32());
  /* 10086075 ret  */
  ESPCHK(0x10086010u, _esp0);
  ESP += 4; return;
L_10086076:;
  /* 10086076 push 0x10093898 */
  push32((uint32_t)(0x10093898u));
  /* 1008607b call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10086081u);
  /* 10086081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086086 je 0x10086323 */
  if (C.zf) goto L_10086323;
  /* 1008608c mov edx, dword ptr [0x100962d4] */
  EDX = (r32((uint32_t)(0x100962d4)));
  /* 10086092 push edx */
  push32((uint32_t)(EDX));
  /* 10086093 call 0x10082730 */
  push32(0x10086098u); f_10082730();
  /* 10086098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008609b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008609d jne 0x10086112 */
  if (!C.zf) goto L_10086112;
  /* 1008609f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100860a4 push 3 */
  push32((uint32_t)(0x3u));
  /* 100860a6 push 5 */
  push32((uint32_t)(0x5u));
  /* 100860a8 call 0x10082650 */
  push32(0x100860adu); f_10082650();
  /* 100860ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100860b0 call 0x100826b0 */
  push32(0x100860b5u); f_100826b0();
  /* 100860b5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100860b8 jne 0x100860d9 */
  if (!C.zf) goto L_100860d9;
  /* 100860ba push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100860bf push 0 */
  push32((uint32_t)(0x0u));
  /* 100860c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100860c3 call 0x10082650 */
  push32(0x100860c8u); f_10082650();
  /* 100860c8 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100860cd push 2 */
  push32((uint32_t)(0x2u));
  /* 100860cf push 4 */
  push32((uint32_t)(0x4u));
  /* 100860d1 call 0x10082650 */
  push32(0x100860d6u); f_10082650();
  /* 100860d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100860d9:;
  /* 100860d9 call 0x100826b0 */
  push32(0x100860deu); f_100826b0();
  /* 100860de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100860e1 jne 0x10086102 */
  if (!C.zf) goto L_10086102;
  /* 100860e3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100860e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100860ea push 4 */
  push32((uint32_t)(0x4u));
  /* 100860ec call 0x10082650 */
  push32(0x100860f1u); f_10082650();
  /* 100860f1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100860f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100860f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 100860fa call 0x10082650 */
  push32(0x100860ffu); f_10082650();
  /* 100860ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086102:;
  /* 10086102 mov eax, dword ptr [0x100962d4] */
  EAX = (r32((uint32_t)(0x100962d4)));
  /* 10086107 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086109 push eax */
  push32((uint32_t)(EAX));
  /* 1008610a call 0x10082710 */
  push32(0x1008610fu); f_10082710();
  /* 1008610f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086112:;
  /* 10086112 push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 10086117 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x1008611du);
  /* 1008611d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086120 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10086122 je 0x10086194 */
  if (C.zf) goto L_10086194;
  /* 10086124 push 0x10096170 */
  push32((uint32_t)(0x10096170u));
  /* 10086129 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x1008612fu);
  /* 1008612f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086132 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10086134 jne 0x10086194 */
  if (!C.zf) goto L_10086194;
  /* 10086136 push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 1008613b call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10086141u);
  /* 10086141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086146 je 0x10086194 */
  if (C.zf) goto L_10086194;
  /* 10086148 mov eax, dword ptr [0x100964dc] */
  EAX = (r32((uint32_t)(0x100964dc)));
  /* 1008614d mov cl, byte ptr [0x100962d4] */
  CL = (r8((uint32_t)(0x100962d4)));
  /* 10086153 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086155 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10086159 je 0x1008616e */
  if (C.zf) goto L_1008616e;
  /* 1008615b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1008615f push 5 */
  push32((uint32_t)(0x5u));
  /* 10086161 push 0x10096170 */
  push32((uint32_t)(0x10096170u));
  /* 10086166 push edx */
  push32((uint32_t)(EDX));
  /* 10086167 call eax */
  call_ind((uint32_t)(EAX), 0x10086169u);
  /* 10086169 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008616c jmp 0x10086170 */
  goto L_10086170;
L_1008616e:;
  /* 1008616e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10086170:;
  /* 10086170 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10086173 push 0 */
  push32((uint32_t)(0x0u));
  /* 10086175 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10086178 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 1008617d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1008617f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10086182 mov eax, edx */
  EAX = (EDX);
  /* 10086184 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10086187 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10086189 push edx */
  push32((uint32_t)(EDX));
  /* 1008618a push 5 */
  push32((uint32_t)(0x5u));
  /* 1008618c call 0x10082fd0 */
  push32(0x10086191u); f_10082fd0();
  /* 10086191 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086194:;
  /* 10086194 push 0x10096170 */
  push32((uint32_t)(0x10096170u));
  /* 10086199 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x1008619fu);
  /* 1008619f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100861a2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100861a4 je 0x100862b9 */
  if (C.zf) goto L_100862b9;
  /* 100861aa push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 100861af call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x100861b5u);
  /* 100861b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100861b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100861ba jne 0x100862b9 */
  if (!C.zf) goto L_100862b9;
  /* 100861c0 mov eax, dword ptr [0x100964dc] */
  EAX = (r32((uint32_t)(0x100964dc)));
  /* 100861c5 mov cl, byte ptr [0x100962d4] */
  CL = (r8((uint32_t)(0x100962d4)));
  /* 100861cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100861cd mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100861d1 je 0x100861e6 */
  if (C.zf) goto L_100861e6;
  /* 100861d3 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100861d7 push 3 */
  push32((uint32_t)(0x3u));
  /* 100861d9 push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 100861de push edx */
  push32((uint32_t)(EDX));
  /* 100861df call eax */
  call_ind((uint32_t)(EAX), 0x100861e1u);
  /* 100861e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100861e4 jmp 0x100861e8 */
  goto L_100861e8;
L_100861e6:;
  /* 100861e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100861e8:;
  /* 100861e8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100861eb push 2 */
  push32((uint32_t)(0x2u));
  /* 100861ed lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100861f0 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100861f5 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100861f7 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100861fa mov eax, edx */
  EAX = (EDX);
  /* 100861fc shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100861ff add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10086201 push edx */
  push32((uint32_t)(EDX));
  /* 10086202 push 3 */
  push32((uint32_t)(0x3u));
  /* 10086204 call 0x10082fd0 */
  push32(0x10086209u); f_10082fd0();
  /* 10086209 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008620c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008620e je 0x100862b9 */
  if (C.zf) goto L_100862b9;
  /* 10086214 mov eax, dword ptr [0x100964dc] */
  EAX = (r32((uint32_t)(0x100964dc)));
  /* 10086219 mov cl, byte ptr [0x100962d4] */
  CL = (r8((uint32_t)(0x100962d4)));
  /* 1008621f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086221 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10086225 je 0x1008623a */
  if (C.zf) goto L_1008623a;
  /* 10086227 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1008622b push 1 */
  push32((uint32_t)(0x1u));
  /* 1008622d push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 10086232 push edx */
  push32((uint32_t)(EDX));
  /* 10086233 call eax */
  call_ind((uint32_t)(EAX), 0x10086235u);
  /* 10086235 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086238 jmp 0x1008623c */
  goto L_1008623c;
L_1008623a:;
  /* 1008623a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1008623c:;
  /* 1008623c lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 10086243 push 2 */
  push32((uint32_t)(0x2u));
  /* 10086245 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10086247 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 1008624a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1008624d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 10086252 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10086254 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10086257 mov eax, edx */
  EAX = (EDX);
  /* 10086259 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1008625c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008625e push edx */
  push32((uint32_t)(EDX));
  /* 1008625f push 1 */
  push32((uint32_t)(0x1u));
  /* 10086261 call 0x10082fd0 */
  push32(0x10086266u); f_10082fd0();
  /* 10086266 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086269 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008626b je 0x100862b9 */
  if (C.zf) goto L_100862b9;
  /* 1008626d mov eax, dword ptr [0x100964dc] */
  EAX = (r32((uint32_t)(0x100964dc)));
  /* 10086272 mov cl, byte ptr [0x100962d4] */
  CL = (r8((uint32_t)(0x100962d4)));
  /* 10086278 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008627a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 1008627e je 0x10086293 */
  if (C.zf) goto L_10086293;
  /* 10086280 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10086284 push 4 */
  push32((uint32_t)(0x4u));
  /* 10086286 push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 1008628b push edx */
  push32((uint32_t)(EDX));
  /* 1008628c call eax */
  call_ind((uint32_t)(EAX), 0x1008628eu);
  /* 1008628e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086291 jmp 0x10086295 */
  goto L_10086295;
L_10086293:;
  /* 10086293 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10086295:;
  /* 10086295 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10086298 push 2 */
  push32((uint32_t)(0x2u));
  /* 1008629a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 1008629d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100862a2 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100862a4 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100862a7 mov eax, edx */
  EAX = (EDX);
  /* 100862a9 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100862ac add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100862ae push edx */
  push32((uint32_t)(EDX));
  /* 100862af push 4 */
  push32((uint32_t)(0x4u));
  /* 100862b1 call 0x10082fd0 */
  push32(0x100862b6u); f_10082fd0();
  /* 100862b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100862b9:;
  /* 100862b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 100862bb call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100862c1u);
  /* 100862c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100862c4 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100862c9 jle 0x100862ee */
  if ((C.zf||C.sf!=C.of)) goto L_100862ee;
  /* 100862cb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100862d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 100862d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 100862d4 call 0x10082650 */
  push32(0x100862d9u); f_10082650();
  /* 100862d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 100862db call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100862e1u);
  /* 100862e1 push eax */
  push32((uint32_t)(EAX));
  /* 100862e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100862e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100862e6 call 0x10082650 */
  push32(0x100862ebu); f_10082650();
  /* 100862eb add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100862ee:;
  /* 100862ee push 0 */
  push32((uint32_t)(0x0u));
  /* 100862f0 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100862f6u);
  /* 100862f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100862f9 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100862fe jle 0x10086323 */
  if ((C.zf||C.sf!=C.of)) goto L_10086323;
  /* 10086300 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10086305 push 0 */
  push32((uint32_t)(0x0u));
  /* 10086307 push 2 */
  push32((uint32_t)(0x2u));
  /* 10086309 call 0x10082650 */
  push32(0x1008630eu); f_10082650();
  /* 1008630e push 0 */
  push32((uint32_t)(0x0u));
  /* 10086310 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10086316u);
  /* 10086316 push eax */
  push32((uint32_t)(EAX));
  /* 10086317 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086319 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008631b call 0x10082650 */
  push32(0x10086320u); f_10082650();
  /* 10086320 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086323:;
  /* 10086323 pop ecx */
  ECX = (pop32());
  /* 10086324 ret  */
  ESPCHK(0x10086010u, _esp0);
  ESP += 4; return;
}

/* FUN_10006330 @ 0x10086330 (818 bytes, 268 insns) */
void f_10086330(void) {
  FTRACE(0x10086330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086330 push ecx */
  push32((uint32_t)(ECX));
  /* 10086331 push 4 */
  push32((uint32_t)(0x4u));
  /* 10086333 push 4 */
  push32((uint32_t)(0x4u));
  /* 10086335 push 0 */
  push32((uint32_t)(0x0u));
  /* 10086337 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x1008633du);
  /* 1008633d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086340 call dword ptr [0x10096590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096590))), 0x10086346u);
  /* 10086346 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10086348 je 0x10086660 */
  if (C.zf) goto L_10086660;
  /* 1008634e push 4 */
  push32((uint32_t)(0x4u));
  /* 10086350 push 4 */
  push32((uint32_t)(0x4u));
  /* 10086352 push 9 */
  push32((uint32_t)(0x9u));
  /* 10086354 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x1008635au);
  /* 1008635a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008635d call 0x100826b0 */
  push32(0x10086362u); f_100826b0();
  /* 10086362 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10086365 je 0x10086660 */
  if (C.zf) goto L_10086660;
  /* 1008636b call dword ptr [0x10096590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096590))), 0x10086371u);
  /* 10086371 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10086373 je 0x10086651 */
  if (C.zf) goto L_10086651;
  /* 10086379 push esi */
  push32((uint32_t)(ESI));
  /* 1008637a push edi */
  push32((uint32_t)(EDI));
  /* 1008637b push 4 */
  push32((uint32_t)(0x4u));
  /* 1008637d push 4 */
  push32((uint32_t)(0x4u));
  /* 1008637f push 9 */
  push32((uint32_t)(0x9u));
  /* 10086381 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x10086387u);
  /* 10086387 push 0x10096120 */
  push32((uint32_t)(0x10096120u));
  /* 1008638c call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10086392u);
  /* 10086392 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086395 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10086397 jne 0x100863ff */
  if (!C.zf) goto L_100863ff;
  /* 10086399 mov al, byte ptr [0x100962d4] */
  AL = (r8((uint32_t)(0x100962d4)));
  /* 1008639e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 100863a2 mov eax, dword ptr [0x100964dc] */
  EAX = (r32((uint32_t)(0x100964dc)));
  /* 100863a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100863a9 je 0x100863c0 */
  if (C.zf) goto L_100863c0;
  /* 100863ab mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100863af push 3 */
  push32((uint32_t)(0x3u));
  /* 100863b1 push 0x10096120 */
  push32((uint32_t)(0x10096120u));
  /* 100863b6 push ecx */
  push32((uint32_t)(ECX));
  /* 100863b7 call eax */
  call_ind((uint32_t)(EAX), 0x100863b9u);
  /* 100863b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100863bc mov esi, eax */
  ESI = (EAX);
  /* 100863be jmp 0x100863c2 */
  goto L_100863c2;
L_100863c0:;
  /* 100863c0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100863c2:;
  /* 100863c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 100863c4 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100863cau);
  /* 100863ca lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 100863cd mov edi, eax */
  EDI = (EAX);
  /* 100863cf mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100863d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100863d7 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 100863da imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100863dc sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100863df mov eax, edx */
  EAX = (EDX);
  /* 100863e1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100863e4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100863e6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100863e8 jge 0x100863f0 */
  if ((C.sf==C.of)) goto L_100863f0;
  /* 100863ea push 4 */
  push32((uint32_t)(0x4u));
  /* 100863ec push 4 */
  push32((uint32_t)(0x4u));
  /* 100863ee jmp 0x100863f4 */
  goto L_100863f4;
L_100863f0:;
  /* 100863f0 push 6 */
  push32((uint32_t)(0x6u));
  /* 100863f2 push 6 */
  push32((uint32_t)(0x6u));
L_100863f4:;
  /* 100863f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 100863f6 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x100863fcu);
  /* 100863fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100863ff:;
  /* 100863ff push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 10086404 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x1008640au);
  /* 1008640a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008640d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008640f jne 0x10086478 */
  if (!C.zf) goto L_10086478;
  /* 10086411 mov eax, dword ptr [0x100964dc] */
  EAX = (r32((uint32_t)(0x100964dc)));
  /* 10086416 mov cl, byte ptr [0x100962d4] */
  CL = (r8((uint32_t)(0x100962d4)));
  /* 1008641c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008641e mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10086422 je 0x10086439 */
  if (C.zf) goto L_10086439;
  /* 10086424 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10086428 push 3 */
  push32((uint32_t)(0x3u));
  /* 1008642a push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 1008642f push edx */
  push32((uint32_t)(EDX));
  /* 10086430 call eax */
  call_ind((uint32_t)(EAX), 0x10086432u);
  /* 10086432 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086435 mov esi, eax */
  ESI = (EAX);
  /* 10086437 jmp 0x1008643b */
  goto L_1008643b;
L_10086439:;
  /* 10086439 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1008643b:;
  /* 1008643b push 3 */
  push32((uint32_t)(0x3u));
  /* 1008643d call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10086443u);
  /* 10086443 mov edi, eax */
  EDI = (EAX);
  /* 10086445 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10086448 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008644b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1008644e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10086453 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10086455 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10086458 mov ecx, edx */
  ECX = (EDX);
  /* 1008645a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1008645d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008645f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10086461 jge 0x10086469 */
  if ((C.sf==C.of)) goto L_10086469;
  /* 10086463 push 9 */
  push32((uint32_t)(0x9u));
  /* 10086465 push 2 */
  push32((uint32_t)(0x2u));
  /* 10086467 jmp 0x1008646d */
  goto L_1008646d;
L_10086469:;
  /* 10086469 push 6 */
  push32((uint32_t)(0x6u));
  /* 1008646b push 6 */
  push32((uint32_t)(0x6u));
L_1008646d:;
  /* 1008646d push 9 */
  push32((uint32_t)(0x9u));
  /* 1008646f call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x10086475u);
  /* 10086475 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086478:;
  /* 10086478 push 0x10096170 */
  push32((uint32_t)(0x10096170u));
  /* 1008647d call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10086483u);
  /* 10086483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086486 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10086488 jne 0x100864ef */
  if (!C.zf) goto L_100864ef;
  /* 1008648a mov eax, dword ptr [0x100964dc] */
  EAX = (r32((uint32_t)(0x100964dc)));
  /* 1008648f mov dl, byte ptr [0x100962d4] */
  DL = (r8((uint32_t)(0x100962d4)));
  /* 10086495 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086497 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 1008649b je 0x100864b2 */
  if (C.zf) goto L_100864b2;
  /* 1008649d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100864a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 100864a3 push 0x10096170 */
  push32((uint32_t)(0x10096170u));
  /* 100864a8 push ecx */
  push32((uint32_t)(ECX));
  /* 100864a9 call eax */
  call_ind((uint32_t)(EAX), 0x100864abu);
  /* 100864ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100864ae mov esi, eax */
  ESI = (EAX);
  /* 100864b0 jmp 0x100864b4 */
  goto L_100864b4;
L_100864b2:;
  /* 100864b2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100864b4:;
  /* 100864b4 push 3 */
  push32((uint32_t)(0x3u));
  /* 100864b6 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x100864bcu);
  /* 100864bc lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 100864bf mov edi, eax */
  EDI = (EAX);
  /* 100864c1 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100864c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100864c9 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 100864cc imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100864ce sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100864d1 mov eax, edx */
  EAX = (EDX);
  /* 100864d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100864d5 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100864d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100864da push 9 */
  push32((uint32_t)(0x9u));
  /* 100864dc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100864de jge 0x100864e4 */
  if ((C.sf==C.of)) goto L_100864e4;
  /* 100864e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 100864e2 jmp 0x100864e6 */
  goto L_100864e6;
L_100864e4:;
  /* 100864e4 push 6 */
  push32((uint32_t)(0x6u));
L_100864e6:;
  /* 100864e6 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x100864ecu);
  /* 100864ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100864ef:;
  /* 100864ef push 0x10096360 */
  push32((uint32_t)(0x10096360u));
  /* 100864f4 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x100864fau);
  /* 100864fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100864fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100864ff je 0x10086513 */
  if (C.zf) goto L_10086513;
  /* 10086501 push 0x100962a8 */
  push32((uint32_t)(0x100962a8u));
  /* 10086506 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x1008650cu);
  /* 1008650c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008650f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10086511 jne 0x10086534 */
  if (!C.zf) goto L_10086534;
L_10086513:;
  /* 10086513 push 3 */
  push32((uint32_t)(0x3u));
  /* 10086515 call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x1008651bu);
  /* 1008651b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008651e cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10086523 jge 0x10086534 */
  if ((C.sf==C.of)) goto L_10086534;
  /* 10086525 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086527 push 4 */
  push32((uint32_t)(0x4u));
  /* 10086529 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008652b call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x10086531u);
  /* 10086531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086534:;
  /* 10086534 push 0x10096008 */
  push32((uint32_t)(0x10096008u));
  /* 10086539 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x1008653fu);
  /* 1008653f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086542 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086544 jne 0x100865b7 */
  if (!C.zf) goto L_100865b7;
  /* 10086546 call 0x100827c0 */
  push32(0x1008654bu); f_100827c0();
  /* 1008654b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008654e jge 0x100865b7 */
  if ((C.sf==C.of)) goto L_100865b7;
  /* 10086550 mov eax, dword ptr [0x100964d8] */
  EAX = (r32((uint32_t)(0x100964d8)));
  /* 10086555 mov cl, byte ptr [0x100962d4] */
  CL = (r8((uint32_t)(0x100962d4)));
  /* 1008655b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008655d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10086561 je 0x10086578 */
  if (C.zf) goto L_10086578;
  /* 10086563 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10086567 push 2 */
  push32((uint32_t)(0x2u));
  /* 10086569 push 0x10096008 */
  push32((uint32_t)(0x10096008u));
  /* 1008656e push edx */
  push32((uint32_t)(EDX));
  /* 1008656f call eax */
  call_ind((uint32_t)(EAX), 0x10086571u);
  /* 10086571 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086574 mov esi, eax */
  ESI = (EAX);
  /* 10086576 jmp 0x1008657a */
  goto L_1008657a;
L_10086578:;
  /* 10086578 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1008657a:;
  /* 1008657a push 2 */
  push32((uint32_t)(0x2u));
  /* 1008657c call dword ptr [0x1009655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009655c))), 0x10086582u);
  /* 10086582 mov edi, eax */
  EDI = (EAX);
  /* 10086584 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10086587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008658a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1008658d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10086592 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10086594 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10086597 mov ecx, edx */
  ECX = (EDX);
  /* 10086599 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1008659c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008659e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100865a0 jge 0x100865a8 */
  if ((C.sf==C.of)) goto L_100865a8;
  /* 100865a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 100865a4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100865a6 jmp 0x100865ac */
  goto L_100865ac;
L_100865a8:;
  /* 100865a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100865aa push 7 */
  push32((uint32_t)(0x7u));
L_100865ac:;
  /* 100865ac push 9 */
  push32((uint32_t)(0x9u));
  /* 100865ae call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x100865b4u);
  /* 100865b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100865b7:;
  /* 100865b7 push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 100865bc call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x100865c2u);
  /* 100865c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100865c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100865c7 pop edi */
  EDI = (pop32());
  /* 100865c8 pop esi */
  ESI = (pop32());
  /* 100865c9 jne 0x100865da */
  if (!C.zf) goto L_100865da;
  /* 100865cb push 1 */
  push32((uint32_t)(0x1u));
  /* 100865cd push 1 */
  push32((uint32_t)(0x1u));
  /* 100865cf push 9 */
  push32((uint32_t)(0x9u));
  /* 100865d1 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x100865d7u);
  /* 100865d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100865da:;
  /* 100865da push 0x10096098 */
  push32((uint32_t)(0x10096098u));
  /* 100865df call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x100865e5u);
  /* 100865e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100865e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100865ea je 0x100865fe */
  if (C.zf) goto L_100865fe;
  /* 100865ec push 0x10093680 */
  push32((uint32_t)(0x10093680u));
  /* 100865f1 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x100865f7u);
  /* 100865f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100865fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100865fc jne 0x1008660d */
  if (!C.zf) goto L_1008660d;
L_100865fe:;
  /* 100865fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10086600 push 4 */
  push32((uint32_t)(0x4u));
  /* 10086602 push 9 */
  push32((uint32_t)(0x9u));
  /* 10086604 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x1008660au);
  /* 1008660a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008660d:;
  /* 1008660d push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 10086612 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10086618u);
  /* 10086618 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008661b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008661d jne 0x1008662e */
  if (!C.zf) goto L_1008662e;
  /* 1008661f push 4 */
  push32((uint32_t)(0x4u));
  /* 10086621 push 4 */
  push32((uint32_t)(0x4u));
  /* 10086623 push 6 */
  push32((uint32_t)(0x6u));
  /* 10086625 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x1008662bu);
  /* 1008662b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008662e:;
  /* 1008662e push 0x10096398 */
  push32((uint32_t)(0x10096398u));
  /* 10086633 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10086639u);
  /* 10086639 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008663c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008663e jne 0x10086660 */
  if (!C.zf) goto L_10086660;
  /* 10086640 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086642 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086644 push 9 */
  push32((uint32_t)(0x9u));
  /* 10086646 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x1008664cu);
  /* 1008664c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008664f pop ecx */
  ECX = (pop32());
  /* 10086650 ret  */
  ESPCHK(0x10086330u, _esp0);
  ESP += 4; return;
L_10086651:;
  /* 10086651 push 3 */
  push32((uint32_t)(0x3u));
  /* 10086653 push 6 */
  push32((uint32_t)(0x6u));
  /* 10086655 push 0 */
  push32((uint32_t)(0x0u));
  /* 10086657 call dword ptr [0x10096534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096534))), 0x1008665du);
  /* 1008665d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086660:;
  /* 10086660 pop ecx */
  ECX = (pop32());
  /* 10086661 ret  */
  ESPCHK(0x10086330u, _esp0);
  ESP += 4; return;
}

/* FUN_10006670 @ 0x10086670 (174 bytes, 50 insns) */
void f_10086670(void) {
  FTRACE(0x10086670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086670 push 0x100965b8 */
  push32((uint32_t)(0x100965b8u));
  /* 10086675 call 0x10082760 */
  push32(0x1008667au); f_10082760();
  /* 1008667a push 0x10096360 */
  push32((uint32_t)(0x10096360u));
  /* 1008667f call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10086685u);
  /* 10086685 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086688 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008668a je 0x100866ac */
  if (C.zf) goto L_100866ac;
  /* 1008668c push 0x100962a8 */
  push32((uint32_t)(0x100962a8u));
  /* 10086691 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10086697u);
  /* 10086697 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008669a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008669c je 0x100866ac */
  if (C.zf) goto L_100866ac;
  /* 1008669e push 0x1008f16c */
  push32((uint32_t)(0x1008f16cu));
  /* 100866a3 call 0x10082760 */
  push32(0x100866a8u); f_10082760();
  /* 100866a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100866ab ret  */
  ESPCHK(0x10086670u, _esp0);
  ESP += 4; return;
L_100866ac:;
  /* 100866ac mov eax, dword ptr [0x10095f78] */
  EAX = (r32((uint32_t)(0x10095f78)));
  /* 100866b1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100866b4 je 0x10086712 */
  if (C.zf) goto L_10086712;
  /* 100866b6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100866b9 je 0x10086712 */
  if (C.zf) goto L_10086712;
  /* 100866bb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100866be je 0x10086712 */
  if (C.zf) goto L_10086712;
  /* 100866c0 push 0x10096290 */
  push32((uint32_t)(0x10096290u));
  /* 100866c5 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x100866cbu);
  /* 100866cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100866ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100866d0 je 0x100866f2 */
  if (C.zf) goto L_100866f2;
  /* 100866d2 push 0x10096170 */
  push32((uint32_t)(0x10096170u));
  /* 100866d7 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x100866ddu);
  /* 100866dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100866e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100866e2 jne 0x100866f2 */
  if (!C.zf) goto L_100866f2;
  /* 100866e4 push 0x100965b8 */
  push32((uint32_t)(0x100965b8u));
  /* 100866e9 call 0x10082760 */
  push32(0x100866eeu); f_10082760();
  /* 100866ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100866f1 ret  */
  ESPCHK(0x10086670u, _esp0);
  ESP += 4; return;
L_100866f2:;
  /* 100866f2 push 0x10096170 */
  push32((uint32_t)(0x10096170u));
  /* 100866f7 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x100866fdu);
  /* 100866fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086700 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10086702 je 0x1008671d */
  if (C.zf) goto L_1008671d;
  /* 10086704 push 0x1008f1d8 */
  push32((uint32_t)(0x1008f1d8u));
  /* 10086709 call 0x10082760 */
  push32(0x1008670eu); f_10082760();
  /* 1008670e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086711 ret  */
  ESPCHK(0x10086670u, _esp0);
  ESP += 4; return;
L_10086712:;
  /* 10086712 push 0x1008f1d8 */
  push32((uint32_t)(0x1008f1d8u));
  /* 10086717 call 0x10082760 */
  push32(0x1008671cu); f_10082760();
  /* 1008671c pop ecx */
  ECX = (pop32());
L_1008671d:;
  /* 1008671d ret  */
  ESPCHK(0x10086670u, _esp0);
  ESP += 4; return;
}

/* FUN_10006720 @ 0x10086720 (70 bytes, 22 insns) */
void f_10086720(void) {
  FTRACE(0x10086720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086720 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086722 call 0x100827a0 */
  push32(0x10086727u); f_100827a0();
  /* 10086727 push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 1008672c call 0x100852b0 */
  push32(0x10086731u); f_100852b0();
  /* 10086731 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086734 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086736 je 0x10086742 */
  if (C.zf) goto L_10086742;
  /* 10086738 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008673a call 0x100827a0 */
  push32(0x1008673fu); f_100827a0();
  /* 1008673f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086742:;
  /* 10086742 call 0x100827b0 */
  push32(0x10086747u); f_100827b0();
  /* 10086747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086749 jg 0x1008675d */
  if ((!C.zf&&C.sf==C.of)) goto L_1008675d;
  /* 1008674b push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 10086750 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10086756u);
  /* 10086756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008675b jle 0x10086765 */
  if ((C.zf||C.sf!=C.of)) goto L_10086765;
L_1008675d:;
  /* 1008675d push 0 */
  push32((uint32_t)(0x0u));
  /* 1008675f call 0x100827a0 */
  push32(0x10086764u); f_100827a0();
  /* 10086764 pop ecx */
  ECX = (pop32());
L_10086765:;
  /* 10086765 ret  */
  ESPCHK(0x10086720u, _esp0);
  ESP += 4; return;
}

/* FUN_10006770 @ 0x10086770 (235 bytes, 66 insns) */
void f_10086770(void) {
  FTRACE(0x10086770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086770 push 0x100961b8 */
  push32((uint32_t)(0x100961b8u));
  /* 10086775 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x1008677bu);
  /* 1008677b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008677e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10086780 je 0x10086796 */
  if (C.zf) goto L_10086796;
  /* 10086782 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10086784 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10086786 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10086788 push 0x10096390 */
  push32((uint32_t)(0x10096390u));
  /* 1008678d call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086793u);
  /* 10086793 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086796:;
  /* 10086796 push 0x100960d0 */
  push32((uint32_t)(0x100960d0u));
  /* 1008679b call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x100867a1u);
  /* 100867a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100867a4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100867a6 je 0x100867bc */
  if (C.zf) goto L_100867bc;
  /* 100867a8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100867aa push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100867ac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100867ae push 0x10093688 */
  push32((uint32_t)(0x10093688u));
  /* 100867b3 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100867b9u);
  /* 100867b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100867bc:;
  /* 100867bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100867be push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100867c0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100867c2 push 0x100938e8 */
  push32((uint32_t)(0x100938e8u));
  /* 100867c7 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100867cdu);
  /* 100867cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100867cf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100867d1 push 0x100961f8 */
  push32((uint32_t)(0x100961f8u));
  /* 100867d6 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100867dcu);
  /* 100867dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100867de push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100867e0 push 0x100961f0 */
  push32((uint32_t)(0x100961f0u));
  /* 100867e5 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100867ebu);
  /* 100867eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100867ed push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100867ef push 0x100961c0 */
  push32((uint32_t)(0x100961c0u));
  /* 100867f4 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x100867fau);
  /* 100867fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100867fc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100867fe push 0x100961b8 */
  push32((uint32_t)(0x100961b8u));
  /* 10086803 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10086809u);
  /* 10086809 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008680c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008680e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10086810 push 0x100961c8 */
  push32((uint32_t)(0x100961c8u));
  /* 10086815 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008681bu);
  /* 1008681b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008681d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1008681f push 0x100960b8 */
  push32((uint32_t)(0x100960b8u));
  /* 10086824 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008682au);
  /* 1008682a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008682c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1008682e push 0x100960c0 */
  push32((uint32_t)(0x100960c0u));
  /* 10086833 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10086839u);
  /* 10086839 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008683b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1008683d push 0x100960c8 */
  push32((uint32_t)(0x100960c8u));
  /* 10086842 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10086848u);
  /* 10086848 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008684a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1008684c push 0x100960d0 */
  push32((uint32_t)(0x100960d0u));
  /* 10086851 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x10086857u);
  /* 10086857 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008685a ret  */
  ESPCHK(0x10086770u, _esp0);
  ESP += 4; return;
}

/* FUN_10006860 @ 0x10086860 (303 bytes, 90 insns) */
void f_10086860(void) {
  FTRACE(0x10086860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086860 push ecx */
  push32((uint32_t)(ECX));
  /* 10086861 push ebx */
  push32((uint32_t)(EBX));
  /* 10086862 push ebp */
  push32((uint32_t)(EBP));
  /* 10086863 push esi */
  push32((uint32_t)(ESI));
  /* 10086864 push edi */
  push32((uint32_t)(EDI));
  /* 10086865 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 1008686a call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10086870u);
  /* 10086870 push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 10086875 mov ebx, eax */
  EBX = (EAX);
  /* 10086877 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x1008687du);
  /* 1008687d push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 10086882 mov edi, eax */
  EDI = (EAX);
  /* 10086884 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x1008688au);
  /* 1008688a push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 1008688f mov ebp, eax */
  EBP = (EAX);
  /* 10086891 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10086897u);
  /* 10086897 push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 1008689c mov esi, eax */
  ESI = (EAX);
  /* 1008689e call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x100868a4u);
  /* 100868a4 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 100868a9 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100868ad call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100868b3u);
  /* 100868b3 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 100868b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100868ba sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100868bc add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100868be sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100868c0 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100868c2 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100868c4 pop edi */
  EDI = (pop32());
  /* 100868c5 pop esi */
  ESI = (pop32());
  /* 100868c6 pop ebp */
  EBP = (pop32());
  /* 100868c7 pop ebx */
  EBX = (pop32());
  /* 100868c8 jne 0x10086930 */
  if (!C.zf) goto L_10086930;
  /* 100868ca cmp dword ptr [0x100961d0], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x100961d0))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100868d1 jle 0x10086930 */
  if ((C.zf||C.sf!=C.of)) goto L_10086930;
  /* 100868d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100868d5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100868d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100868d9 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 100868de call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100868e4u);
  /* 100868e4 push 0x100961d8 */
  push32((uint32_t)(0x100961d8u));
  /* 100868e9 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x100868efu);
  /* 100868ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100868f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100868f4 je 0x1008690a */
  if (C.zf) goto L_1008690a;
  /* 100868f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100868f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100868fa push 6 */
  push32((uint32_t)(0x6u));
  /* 100868fc push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 10086901 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086907u);
  /* 10086907 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008690a:;
  /* 1008690a push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 1008690f call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10086915u);
  /* 10086915 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086918 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008691a je 0x10086930 */
  if (C.zf) goto L_10086930;
  /* 1008691c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008691e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10086920 push 8 */
  push32((uint32_t)(0x8u));
  /* 10086922 push 0x100938f8 */
  push32((uint32_t)(0x100938f8u));
  /* 10086927 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x1008692du);
  /* 1008692d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086930:;
  /* 10086930 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086932 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10086934 push 0x10096308 */
  push32((uint32_t)(0x10096308u));
  /* 10086939 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008693fu);
  /* 1008693f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086941 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10086943 push 0x100962f0 */
  push32((uint32_t)(0x100962f0u));
  /* 10086948 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008694eu);
  /* 1008694e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086950 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10086952 push 0x10096300 */
  push32((uint32_t)(0x10096300u));
  /* 10086957 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008695du);
  /* 1008695d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008695f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10086961 push 0x100962e0 */
  push32((uint32_t)(0x100962e0u));
  /* 10086966 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008696cu);
  /* 1008696c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008696e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10086970 push 0x100962e8 */
  push32((uint32_t)(0x100962e8u));
  /* 10086975 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008697bu);
  /* 1008697b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1008697d push 0xa */
  push32((uint32_t)(0xau));
  /* 1008697f push 0x100962d8 */
  push32((uint32_t)(0x100962d8u));
  /* 10086984 call dword ptr [0x10096528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096528))), 0x1008698au);
  /* 1008698a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008698d pop ecx */
  ECX = (pop32());
  /* 1008698e ret  */
  ESPCHK(0x10086860u, _esp0);
  ESP += 4; return;
}

/* FUN_10006990 @ 0x10086990 (517 bytes, 145 insns) */
void f_10086990(void) {
  FTRACE(0x10086990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086990 push esi */
  push32((uint32_t)(ESI));
  /* 10086991 push 0x10096278 */
  push32((uint32_t)(0x10096278u));
  /* 10086996 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x1008699cu);
  /* 1008699c push 0x10096278 */
  push32((uint32_t)(0x10096278u));
  /* 100869a1 mov esi, eax */
  ESI = (EAX);
  /* 100869a3 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x100869a9u);
  /* 100869a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100869ac sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100869ae jne 0x100869c4 */
  if (!C.zf) goto L_100869c4;
  /* 100869b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100869b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100869b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100869b6 push 0x10096278 */
  push32((uint32_t)(0x10096278u));
  /* 100869bb call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100869c1u);
  /* 100869c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100869c4:;
  /* 100869c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100869c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100869c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100869ca push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 100869cf call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100869d5u);
  /* 100869d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100869d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100869d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 100869db push 0x10096208 */
  push32((uint32_t)(0x10096208u));
  /* 100869e0 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100869e6u);
  /* 100869e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100869e8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100869ea push 2 */
  push32((uint32_t)(0x2u));
  /* 100869ec push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 100869f1 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x100869f7u);
  /* 100869f7 push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 100869fc call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10086a02u);
  /* 10086a02 push 0x10096270 */
  push32((uint32_t)(0x10096270u));
  /* 10086a07 mov esi, eax */
  ESI = (EAX);
  /* 10086a09 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10086a0fu);
  /* 10086a0f add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086a12 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10086a14 jne 0x10086b93 */
  if (!C.zf) goto L_10086b93;
  /* 10086a1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086a1c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086a1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10086a20 push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 10086a25 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086a2bu);
  /* 10086a2b push 0x10095f40 */
  push32((uint32_t)(0x10095f40u));
  /* 10086a30 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10086a36u);
  /* 10086a36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086a3b je 0x10086b93 */
  if (C.zf) goto L_10086b93;
  /* 10086a41 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086a43 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086a45 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086a47 push 0x10095ff0 */
  push32((uint32_t)(0x10095ff0u));
  /* 10086a4c call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086a52u);
  /* 10086a52 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086a54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086a56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086a58 push 0x10095ff8 */
  push32((uint32_t)(0x10095ff8u));
  /* 10086a5d call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086a63u);
  /* 10086a63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086a65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086a67 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086a69 push 0x10093898 */
  push32((uint32_t)(0x10093898u));
  /* 10086a6e call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086a74u);
  /* 10086a74 push 0x10093898 */
  push32((uint32_t)(0x10093898u));
  /* 10086a79 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10086a7fu);
  /* 10086a7f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086a84 je 0x10086b93 */
  if (C.zf) goto L_10086b93;
  /* 10086a8a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086a8c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086a8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10086a90 push 0x10096008 */
  push32((uint32_t)(0x10096008u));
  /* 10086a95 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086a9bu);
  /* 10086a9b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086a9d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086a9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10086aa1 push 0x10096118 */
  push32((uint32_t)(0x10096118u));
  /* 10086aa6 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086aacu);
  /* 10086aac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086aae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086ab2 push 0x10093638 */
  push32((uint32_t)(0x10093638u));
  /* 10086ab7 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086abdu);
  /* 10086abd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086abf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086ac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086ac3 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10086ac8 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086aceu);
  /* 10086ace add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086ad1 push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 10086ad6 call dword ptr [0x10096570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096570))), 0x10086adcu);
  /* 10086adc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086adf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10086ae1 je 0x10086b93 */
  if (C.zf) goto L_10086b93;
  /* 10086ae7 push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 10086aec call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10086af2u);
  /* 10086af2 push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 10086af7 mov esi, eax */
  ESI = (EAX);
  /* 10086af9 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10086affu);
  /* 10086aff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086b02 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10086b04 jne 0x10086b2d */
  if (!C.zf) goto L_10086b2d;
  /* 10086b06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086b08 call 0x10082770 */
  push32(0x10086b0du); f_10082770();
  /* 10086b0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086b10 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10086b13 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086b15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086b17 jge 0x10086b1d */
  if ((C.sf==C.of)) goto L_10086b1d;
  /* 10086b19 push 6 */
  push32((uint32_t)(0x6u));
  /* 10086b1b jmp 0x10086b1f */
  goto L_10086b1f;
L_10086b1d:;
  /* 10086b1d push 4 */
  push32((uint32_t)(0x4u));
L_10086b1f:;
  /* 10086b1f push 0x10095fd8 */
  push32((uint32_t)(0x10095fd8u));
  /* 10086b24 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086b2au);
  /* 10086b2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086b2d:;
  /* 10086b2d push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10086b32 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10086b38u);
  /* 10086b38 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10086b3d mov esi, eax */
  ESI = (EAX);
  /* 10086b3f call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10086b45u);
  /* 10086b45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086b48 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10086b4a jne 0x10086b60 */
  if (!C.zf) goto L_10086b60;
  /* 10086b4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086b4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086b50 push 7 */
  push32((uint32_t)(0x7u));
  /* 10086b52 push 0x100960f8 */
  push32((uint32_t)(0x100960f8u));
  /* 10086b57 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086b5du);
  /* 10086b5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086b60:;
  /* 10086b60 push 0x10093638 */
  push32((uint32_t)(0x10093638u));
  /* 10086b65 call dword ptr [0x10096564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096564))), 0x10086b6bu);
  /* 10086b6b push 0x10093638 */
  push32((uint32_t)(0x10093638u));
  /* 10086b70 mov esi, eax */
  ESI = (EAX);
  /* 10086b72 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10086b78u);
  /* 10086b78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086b7b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10086b7d jne 0x10086b93 */
  if (!C.zf) goto L_10086b93;
  /* 10086b7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086b81 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086b83 push 3 */
  push32((uint32_t)(0x3u));
  /* 10086b85 push 0x10093638 */
  push32((uint32_t)(0x10093638u));
  /* 10086b8a call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086b90u);
  /* 10086b90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086b93:;
  /* 10086b93 pop esi */
  ESI = (pop32());
  /* 10086b94 ret  */
  ESPCHK(0x10086990u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x10086ba0 (121 bytes, 36 insns) */
void f_10086ba0(void) {
  FTRACE(0x10086ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086ba0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086ba2 call 0x100827a0 */
  push32(0x10086ba7u); f_100827a0();
  /* 10086ba7 push 0x100938a8 */
  push32((uint32_t)(0x100938a8u));
  /* 10086bac call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10086bb2u);
  /* 10086bb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086bb5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10086bb8 jge 0x10086bcd */
  if ((C.sf==C.of)) goto L_10086bcd;
  /* 10086bba mov eax, dword ptr [0x100962d4] */
  EAX = (r32((uint32_t)(0x100962d4)));
  /* 10086bbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10086bc1 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10086bc4 push eax */
  push32((uint32_t)(EAX));
  /* 10086bc5 call 0x10082710 */
  push32(0x10086bcau); f_10082710();
  /* 10086bca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086bcd:;
  /* 10086bcd push 0x100938a8 */
  push32((uint32_t)(0x100938a8u));
  /* 10086bd2 call dword ptr [0x10096560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096560))), 0x10086bd8u);
  /* 10086bd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086bdb cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10086bde jle 0x10086bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10086bf4;
  /* 10086be0 mov ecx, dword ptr [0x100962d4] */
  ECX = (r32((uint32_t)(0x100962d4)));
  /* 10086be6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10086be8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10086beb push ecx */
  push32((uint32_t)(ECX));
  /* 10086bec call 0x10082710 */
  push32(0x10086bf1u); f_10082710();
  /* 10086bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086bf4:;
  /* 10086bf4 mov edx, dword ptr [0x100962d4] */
  EDX = (r32((uint32_t)(0x100962d4)));
  /* 10086bfa add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10086bfd push edx */
  push32((uint32_t)(EDX));
  /* 10086bfe call 0x10082730 */
  push32(0x10086c03u); f_10082730();
  /* 10086c03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086c05 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10086c08 push eax */
  push32((uint32_t)(EAX));
  /* 10086c09 call 0x100827a0 */
  push32(0x10086c0eu); f_100827a0();
  /* 10086c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10086c10 call 0x100827a0 */
  push32(0x10086c15u); f_100827a0();
  /* 10086c15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086c18 ret  */
  ESPCHK(0x10086ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c20 @ 0x10086c20 (86 bytes, 20 insns) */
void f_10086c20(void) {
  FTRACE(0x10086c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086c20 mov eax, dword ptr [0x100962d4] */
  EAX = (r32((uint32_t)(0x100962d4)));
  /* 10086c25 mov ecx, dword ptr [eax*4 + 0x10095fb8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10095fb8)));
  /* 10086c2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10086c2e je 0x10086c35 */
  if (C.zf) goto L_10086c35;
  /* 10086c30 call 0x10086720 */
  push32(0x10086c35u); f_10086720();
L_10086c35:;
  /* 10086c35 call 0x10085e30 */
  push32(0x10086c3au); f_10085e30();
  /* 10086c3a call 0x10086770 */
  push32(0x10086c3fu); f_10086770();
  /* 10086c3f call 0x100827c0 */
  push32(0x10086c44u); f_100827c0();
  /* 10086c44 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10086c47 jge 0x10086c4e */
  if ((C.sf==C.of)) goto L_10086c4e;
  /* 10086c49 call 0x10086860 */
  push32(0x10086c4eu); f_10086860();
L_10086c4e:;
  /* 10086c4e call 0x10085c10 */
  push32(0x10086c53u); f_10085c10();
  /* 10086c53 call 0x10085ad0 */
  push32(0x10086c58u); f_10085ad0();
  /* 10086c58 call 0x100827c0 */
  push32(0x10086c5du); f_100827c0();
  /* 10086c5d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10086c60 jge 0x10086c67 */
  if ((C.sf==C.of)) goto L_10086c67;
  /* 10086c62 call 0x100852f0 */
  push32(0x10086c67u); f_100852f0();
L_10086c67:;
  /* 10086c67 call 0x10086010 */
  push32(0x10086c6cu); f_10086010();
  /* 10086c6c call 0x10086330 */
  push32(0x10086c71u); f_10086330();
  /* 10086c71 jmp 0x10086670 */
  f_10086670(); return;
}

/* FUN_10006c80 @ 0x10086c80 (247 bytes, 70 insns) */
void f_10086c80(void) {
  FTRACE(0x10086c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086c80 push esi */
  push32((uint32_t)(ESI));
  /* 10086c81 push edi */
  push32((uint32_t)(EDI));
  /* 10086c82 call 0x10086ba0 */
  push32(0x10086c87u); f_10086ba0();
  /* 10086c87 call 0x10086990 */
  push32(0x10086c8cu); f_10086990();
  /* 10086c8c mov edi, 2 */
  EDI = (0x2u);
L_10086c91:;
  /* 10086c91 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086c93 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10086c95 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10086c9a push 0x100961b0 */
  push32((uint32_t)(0x100961b0u));
  /* 10086c9f call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086ca5u);
  /* 10086ca5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086ca7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10086ca9 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10086cae push 0x100936a8 */
  push32((uint32_t)(0x100936a8u));
  /* 10086cb3 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086cb9u);
  /* 10086cb9 mov eax, dword ptr [0x100962d4] */
  EAX = (r32((uint32_t)(0x100962d4)));
  /* 10086cbe add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10086cc1 push eax */
  push32((uint32_t)(EAX));
  /* 10086cc2 call 0x10082730 */
  push32(0x10086cc7u); f_10082730();
  /* 10086cc7 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086cca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086ccc jne 0x10086cec */
  if (!C.zf) goto L_10086cec;
  /* 10086cce mov esi, 0x64 */
  ESI = (0x64u);
L_10086cd3:;
  /* 10086cd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086cd5 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10086cd7 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10086cd9 push 0x100938a8 */
  push32((uint32_t)(0x100938a8u));
  /* 10086cde call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086ce4u);
  /* 10086ce4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086ce7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10086ce8 jne 0x10086cd3 */
  if (!C.zf) goto L_10086cd3;
  /* 10086cea jmp 0x10086d00 */
  goto L_10086d00;
L_10086cec:;
  /* 10086cec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086cee push 0xa */
  push32((uint32_t)(0xau));
  /* 10086cf0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10086cf2 push 0x10096180 */
  push32((uint32_t)(0x10096180u));
  /* 10086cf7 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086cfdu);
  /* 10086cfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086d00:;
  /* 10086d00 push 0x10096040 */
  push32((uint32_t)(0x10096040u));
  /* 10086d05 call dword ptr [0x1009656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009656c))), 0x10086d0bu);
  /* 10086d0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086d0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10086d10 jne 0x10086d29 */
  if (!C.zf) goto L_10086d29;
  /* 10086d12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086d14 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10086d16 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10086d1b push 0x100936b0 */
  push32((uint32_t)(0x100936b0u));
  /* 10086d20 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086d26u);
  /* 10086d26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10086d29:;
  /* 10086d29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086d2b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10086d2d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10086d32 push 0x100936a0 */
  push32((uint32_t)(0x100936a0u));
  /* 10086d37 call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086d3du);
  /* 10086d3d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10086d3f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10086d41 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10086d46 push 0x10095fa0 */
  push32((uint32_t)(0x10095fa0u));
  /* 10086d4b call dword ptr [0x10096524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096524))), 0x10086d51u);
  /* 10086d51 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086d54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10086d55 jne 0x10086c91 */
  if (!C.zf) goto L_10086c91;
  /* 10086d5b call 0x10086770 */
  push32(0x10086d60u); f_10086770();
  /* 10086d60 call 0x10086010 */
  push32(0x10086d65u); f_10086010();
  /* 10086d65 call 0x10086330 */
  push32(0x10086d6au); f_10086330();
  /* 10086d6a call 0x100852f0 */
  push32(0x10086d6fu); f_100852f0();
  /* 10086d6f call 0x10085ad0 */
  push32(0x10086d74u); f_10085ad0();
  /* 10086d74 pop edi */
  EDI = (pop32());
  /* 10086d75 pop esi */
  ESI = (pop32());
  /* 10086d76 ret  */
  ESPCHK(0x10086c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d80 @ 0x10086d80 (279 bytes, 62 insns) [1 switch table(s)] */
void f_10086d80(void) {
  FTRACE(0x10086d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086d80 call 0x100826c0 */
  push32(0x10086d85u); f_100826c0();
  /* 10086d85 mov dword ptr [0x10095f78], eax */
  w32((uint32_t)(0x10095f78), (EAX));
  /* 10086d8a call 0x100826a0 */
  push32(0x10086d8fu); f_100826a0();
  /* 10086d8f mov dword ptr [0x10096388], eax */
  w32((uint32_t)(0x10096388), (EAX));
  /* 10086d94 call 0x100826b0 */
  push32(0x10086d99u); f_100826b0();
  /* 10086d99 mov dword ptr [0x100938b8], eax */
  w32((uint32_t)(0x100938b8), (EAX));
  /* 10086d9e call 0x10083080 */
  push32(0x10086da3u); f_10083080();
  /* 10086da3 push 0x1008f114 */
  push32((uint32_t)(0x1008f114u));
  /* 10086da8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10086daa call dword ptr [0x1009652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009652c))), 0x10086db0u);
  /* 10086db0 call 0x10086670 */
  push32(0x10086db5u); f_10086670();
  /* 10086db5 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10086db7 push 0x1008f244 */
  push32((uint32_t)(0x1008f244u));
  /* 10086dbc call 0x10082740 */
  push32(0x10086dc1u); f_10082740();
  /* 10086dc1 mov eax, dword ptr [0x10095f78] */
  EAX = (r32((uint32_t)(0x10095f78)));
  /* 10086dc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086dc9 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10086dcc ja 0x10086e92 */
  if ((!C.cf&&!C.zf)) goto L_10086e92;
  /* 10086dd2 jmp dword ptr [eax*4 + 0x10086e98] */
  switch (EAX) {
    case 0: goto L_10086dd9;
    case 1: goto L_10086e55;
    case 2: goto L_10086e5c;
    case 3: goto L_10086e5c;
    case 4: goto L_10086e5c;
    case 5: goto L_10086dd9;
    default: x86_unimpl("switch@0x10086dd2 out of table"); return;
  }
L_10086dd9:;
  /* 10086dd9 cmp dword ptr [0x100938b8], 3 */
  { uint32_t _a=(r32((uint32_t)(0x100938b8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10086de0 jne 0x10086e12 */
  if (!C.zf) goto L_10086e12;
  /* 10086de2 push 0x1008f160 */
  push32((uint32_t)(0x1008f160u));
  /* 10086de7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10086de9 call dword ptr [0x1009652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009652c))), 0x10086defu);
  /* 10086def push 0x1008f16c */
  push32((uint32_t)(0x1008f16cu));
  /* 10086df4 call 0x10082760 */
  push32(0x10086df9u); f_10082760();
  /* 10086df9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10086dfb push 0x1008f41c */
  push32((uint32_t)(0x1008f41cu));
  /* 10086e00 call 0x10082740 */
  push32(0x10086e05u); f_10082740();
  /* 10086e05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086e08 call 0x10086c80 */
  push32(0x10086e0du); f_10086c80();
  /* 10086e0d jmp 0x10086e92 */
  goto L_10086e92;
L_10086e12:;
  /* 10086e12 push 0x1008f114 */
  push32((uint32_t)(0x1008f114u));
  /* 10086e17 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10086e19 call dword ptr [0x1009652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009652c))), 0x10086e1fu);
  /* 10086e1f push 0x100965b8 */
  push32((uint32_t)(0x100965b8u));
  /* 10086e24 call 0x10082760 */
  push32(0x10086e29u); f_10082760();
  /* 10086e29 mov eax, dword ptr [0x100938b8] */
  EAX = (r32((uint32_t)(0x100938b8)));
  /* 10086e2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086e31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086e33 jne 0x10086e3f */
  if (!C.zf) goto L_10086e3f;
  /* 10086e35 mov dword ptr [0x1008f248], 4 */
  w32((uint32_t)(0x1008f248), (0x4u));
L_10086e3f:;
  /* 10086e3f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10086e41 push 0x1008f244 */
  push32((uint32_t)(0x1008f244u));
  /* 10086e46 call 0x10082740 */
  push32(0x10086e4bu); f_10082740();
  /* 10086e4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086e4e call 0x10086c20 */
  push32(0x10086e53u); f_10086c20();
  /* 10086e53 jmp 0x10086e92 */
  goto L_10086e92;
L_10086e55:;
  /* 10086e55 call 0x10084420 */
  push32(0x10086e5au); f_10084420();
  /* 10086e5a jmp 0x10086e92 */
  goto L_10086e92;
L_10086e5c:;
  /* 10086e5c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10086e61 call dword ptr [0x10096548] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096548))), 0x10086e67u);
  /* 10086e67 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10086e6c call dword ptr [0x1009654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009654c))), 0x10086e72u);
  /* 10086e72 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10086e77 call dword ptr [0x10096550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096550))), 0x10086e7du);
  /* 10086e7d push 0x1008f07c */
  push32((uint32_t)(0x1008f07cu));
  /* 10086e82 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10086e84 call dword ptr [0x1009652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1009652c))), 0x10086e8au);
  /* 10086e8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086e8d call 0x100833a0 */
  push32(0x10086e92u); f_100833a0();
L_10086e92:;
  /* 10086e92 jmp 0x10083200 */
  f_10083200(); return;
}

/* FUN_10006eb0 @ 0x10086eb0 (82 bytes, 32 insns) */
void f_10086eb0(void) {
  FTRACE(0x10086eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10086eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10086eb3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10086eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10086eb9 push esi */
  push32((uint32_t)(ESI));
  /* 10086eba mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10086ebd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10086ec0 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10086ec3 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 10086eca push eax */
  push32((uint32_t)(EAX));
  /* 10086ecb lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10086ece push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10086ed1 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 10086ed8 push eax */
  push32((uint32_t)(EAX));
  /* 10086ed9 call 0x1008723c */
  push32(0x10086edeu); f_1008723c();
  /* 10086ede add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086ee1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 10086ee4 mov esi, eax */
  ESI = (EAX);
  /* 10086ee6 js 0x10086ef0 */
  if (C.sf) goto L_10086ef0;
  /* 10086ee8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10086eeb and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10086eee jmp 0x10086efd */
  goto L_10086efd;
L_10086ef0:;
  /* 10086ef0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10086ef3 push eax */
  push32((uint32_t)(EAX));
  /* 10086ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10086ef6 call 0x10087124 */
  push32(0x10086efbu); f_10087124();
  /* 10086efb pop ecx */
  ECX = (pop32());
  /* 10086efc pop ecx */
  ECX = (pop32());
L_10086efd:;
  /* 10086efd mov eax, esi */
  EAX = (ESI);
  /* 10086eff pop esi */
  ESI = (pop32());
  /* 10086f00 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10086f01 ret  */
  ESPCHK(0x10086eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f02 @ 0x10086f02 (23 bytes, 6 insns) */
void f_10086f02(void) {
  FTRACE(0x10086f02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086f02 call 0x10086f1a */
  push32(0x10086f07u); f_10086f1a();
  /* 10086f07 call 0x10087a96 */
  push32(0x10086f0cu); f_10087a96();
  /* 10086f0c mov dword ptr [0x10096680], eax */
  w32((uint32_t)(0x10096680), (EAX));
  /* 10086f11 call 0x10087a46 */
  push32(0x10086f16u); f_10087a46();
  /* 10086f16 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10086f18 ret  */
  ESPCHK(0x10086f02u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f1a @ 0x10086f1a (56 bytes, 8 insns) */
void f_10086f1a(void) {
  FTRACE(0x10086f1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086f1a mov eax, 0x10087e6f */
  EAX = (0x10087e6fu);
  /* 10086f1f mov dword ptr [0x100906b8], 0x10087b19 */
  w32((uint32_t)(0x100906b8), (0x10087b19u));
  /* 10086f29 mov dword ptr [0x100906b4], eax */
  w32((uint32_t)(0x100906b4), (EAX));
  /* 10086f2e mov dword ptr [0x100906bc], 0x10087b7f */
  w32((uint32_t)(0x100906bc), (0x10087b7fu));
  /* 10086f38 mov dword ptr [0x100906c0], 0x10087abf */
  w32((uint32_t)(0x100906c0), (0x10087abfu));
  /* 10086f42 mov dword ptr [0x100906c4], 0x10087b67 */
  w32((uint32_t)(0x100906c4), (0x10087b67u));
  /* 10086f4c mov dword ptr [0x100906c8], eax */
  w32((uint32_t)(0x100906c8), (EAX));
  /* 10086f51 ret  */
  ESPCHK(0x10086f1au, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10086f54 (39 bytes, 16 insns) */
void f_10086f54(void) {
  FTRACE(0x10086f54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086f54 push ebp */
  push32((uint32_t)(EBP));
  /* 10086f55 mov ebp, esp */
  EBP = (ESP);
  /* 10086f57 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10086f5a wait  */
  /* wait (no observable integer/reg state) */
  /* 10086f5b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10086f5e wait  */
  /* wait (no observable integer/reg state) */
  /* 10086f5f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10086f63 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10086f66 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10086f6a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10086f6d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10086f70 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10086f73 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10086f76 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10086f79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10086f7a ret  */
  ESPCHK(0x10086f54u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f7b @ 0x10086f7b (217 bytes, 57 insns) */
void f_10086f7b(void) {
  FTRACE(0x10086f7bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10086f7b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10086f7f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10086f82 jne 0x10087010 */
  if (!C.zf) goto L_10087010;
  /* 10086f88 call dword ptr [0x1008e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e014))), 0x10086f8eu);
  /* 10086f8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10086f90 mov dword ptr [0x1009669c], eax */
  w32((uint32_t)(0x1009669c), (EAX));
  /* 10086f95 call 0x1008894c */
  push32(0x10086f9au); f_1008894c();
  /* 10086f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086f9c pop ecx */
  ECX = (pop32());
  /* 10086f9d je 0x10086fdb */
  if (C.zf) goto L_10086fdb;
  /* 10086f9f mov eax, dword ptr [0x1009669c] */
  EAX = (r32((uint32_t)(0x1009669c)));
  /* 10086fa4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10086fa6 mov cl, byte ptr [0x1009669d] */
  CL = (r8((uint32_t)(0x1009669d)));
  /* 10086fac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10086fb1 shr dword ptr [0x1009669c], 0x10 */
  w32((uint32_t)(0x1009669c), (sh_shr((uint32_t)(r32((uint32_t)(0x1009669c))), (0x10u)&0x1f, 32)));
  /* 10086fb8 mov dword ptr [0x100966a4], eax */
  w32((uint32_t)(0x100966a4), (EAX));
  /* 10086fbd mov dword ptr [0x100966a8], ecx */
  w32((uint32_t)(0x100966a8), (ECX));
  /* 10086fc3 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10086fc6 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10086fc8 mov dword ptr [0x100966a0], eax */
  w32((uint32_t)(0x100966a0), (EAX));
  /* 10086fcd call 0x10088003 */
  push32(0x10086fd2u); f_10088003();
  /* 10086fd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10086fd4 jne 0x10086fdf */
  if (!C.zf) goto L_10086fdf;
  /* 10086fd6 call 0x100889a9 */
  push32(0x10086fdbu); f_100889a9();
L_10086fdb:;
  /* 10086fdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10086fdd jmp 0x10087051 */
  goto L_10087051;
L_10086fdf:;
  /* 10086fdf call dword ptr [0x1008e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e010))), 0x10086fe5u);
  /* 10086fe5 mov dword ptr [0x10097d94], eax */
  w32((uint32_t)(0x10097d94), (EAX));
  /* 10086fea call 0x100886a5 */
  push32(0x10086fefu); f_100886a5();
  /* 10086fef mov dword ptr [0x10096688], eax */
  w32((uint32_t)(0x10096688), (EAX));
  /* 10086ff4 call 0x1008818f */
  push32(0x10086ff9u); f_1008818f();
  /* 10086ff9 call 0x10088458 */
  push32(0x10086ffeu); f_10088458();
  /* 10086ffe call 0x1008839f */
  push32(0x10087003u); f_1008839f();
  /* 10087003 call 0x10087ee5 */
  push32(0x10087008u); f_10087ee5();
  /* 10087008 inc dword ptr [0x10096684] */
  { uint32_t _r=(r32((uint32_t)(0x10096684)))+1; w32((uint32_t)(0x10096684), (_r)); fl_inc(_r,32); }
  /* 1008700e jmp 0x1008704e */
  goto L_1008704e;
L_10087010:;
  /* 10087010 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10087012 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087014 jne 0x10087042 */
  if (!C.zf) goto L_10087042;
  /* 10087016 cmp dword ptr [0x10096684], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10096684))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008701c jle 0x10086fdb */
  if ((C.zf||C.sf!=C.of)) goto L_10086fdb;
  /* 1008701e dec dword ptr [0x10096684] */
  { uint32_t _r=(r32((uint32_t)(0x10096684)))-1; w32((uint32_t)(0x10096684), (_r)); fl_dec(_r,32); }
  /* 10087024 cmp dword ptr [0x100966d4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x100966d4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008702a jne 0x10087031 */
  if (!C.zf) goto L_10087031;
  /* 1008702c call 0x10087f23 */
  push32(0x10087031u); f_10087f23();
L_10087031:;
  /* 10087031 call 0x1008834b */
  push32(0x10087036u); f_1008834b();
  /* 10087036 call 0x10088057 */
  push32(0x1008703bu); f_10088057();
  /* 1008703b call 0x100889a9 */
  push32(0x10087040u); f_100889a9();
  /* 10087040 jmp 0x1008704e */
  goto L_1008704e;
L_10087042:;
  /* 10087042 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087045 jne 0x1008704e */
  if (!C.zf) goto L_1008704e;
  /* 10087047 push ecx */
  push32((uint32_t)(ECX));
  /* 10087048 call 0x100880ef */
  push32(0x1008704du); f_100880ef();
  /* 1008704d pop ecx */
  ECX = (pop32());
L_1008704e:;
  /* 1008704e push 1 */
  push32((uint32_t)(0x1u));
  /* 10087050 pop eax */
  EAX = (pop32());
L_10087051:;
  /* 10087051 ret 0xc */
  ESPCHK(0x10086f7bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10087054 (157 bytes, 73 insns) */
void f_10087054(void) {
  FTRACE(0x10087054u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087054 push ebp */
  push32((uint32_t)(EBP));
  /* 10087055 mov ebp, esp */
  EBP = (ESP);
  /* 10087057 push ebx */
  push32((uint32_t)(EBX));
  /* 10087058 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008705b push esi */
  push32((uint32_t)(ESI));
  /* 1008705c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1008705f push edi */
  push32((uint32_t)(EDI));
  /* 10087060 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10087063 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10087065 jne 0x10087070 */
  if (!C.zf) goto L_10087070;
  /* 10087067 cmp dword ptr [0x10096684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10096684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008706e jmp 0x10087096 */
  goto L_10087096;
L_10087070:;
  /* 10087070 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087073 je 0x1008707a */
  if (C.zf) goto L_1008707a;
  /* 10087075 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087078 jne 0x1008709c */
  if (!C.zf) goto L_1008709c;
L_1008707a:;
  /* 1008707a mov eax, dword ptr [0x10097d98] */
  EAX = (r32((uint32_t)(0x10097d98)));
  /* 1008707f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087081 je 0x1008708c */
  if (C.zf) goto L_1008708c;
  /* 10087083 push edi */
  push32((uint32_t)(EDI));
  /* 10087084 push esi */
  push32((uint32_t)(ESI));
  /* 10087085 push ebx */
  push32((uint32_t)(EBX));
  /* 10087086 call eax */
  call_ind((uint32_t)(EAX), 0x10087088u);
  /* 10087088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008708a je 0x10087098 */
  if (C.zf) goto L_10087098;
L_1008708c:;
  /* 1008708c push edi */
  push32((uint32_t)(EDI));
  /* 1008708d push esi */
  push32((uint32_t)(ESI));
  /* 1008708e push ebx */
  push32((uint32_t)(EBX));
  /* 1008708f call 0x10086f7b */
  push32(0x10087094u); f_10086f7b();
  /* 10087094 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10087096:;
  /* 10087096 jne 0x1008709c */
  if (!C.zf) goto L_1008709c;
L_10087098:;
  /* 10087098 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008709a jmp 0x100870ea */
  goto L_100870ea;
L_1008709c:;
  /* 1008709c push edi */
  push32((uint32_t)(EDI));
  /* 1008709d push esi */
  push32((uint32_t)(ESI));
  /* 1008709e push ebx */
  push32((uint32_t)(EBX));
  /* 1008709f call 0x10082830 */
  push32(0x100870a4u); f_10082830();
  /* 100870a4 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100870a7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100870aa jne 0x100870b8 */
  if (!C.zf) goto L_100870b8;
  /* 100870ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100870ae jne 0x100870e7 */
  if (!C.zf) goto L_100870e7;
  /* 100870b0 push edi */
  push32((uint32_t)(EDI));
  /* 100870b1 push eax */
  push32((uint32_t)(EAX));
  /* 100870b2 push ebx */
  push32((uint32_t)(EBX));
  /* 100870b3 call 0x10086f7b */
  push32(0x100870b8u); f_10086f7b();
L_100870b8:;
  /* 100870b8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100870ba je 0x100870c1 */
  if (C.zf) goto L_100870c1;
  /* 100870bc cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100870bf jne 0x100870e7 */
  if (!C.zf) goto L_100870e7;
L_100870c1:;
  /* 100870c1 push edi */
  push32((uint32_t)(EDI));
  /* 100870c2 push esi */
  push32((uint32_t)(ESI));
  /* 100870c3 push ebx */
  push32((uint32_t)(EBX));
  /* 100870c4 call 0x10086f7b */
  push32(0x100870c9u); f_10086f7b();
  /* 100870c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100870cb jne 0x100870d0 */
  if (!C.zf) goto L_100870d0;
  /* 100870cd and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_100870d0:;
  /* 100870d0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100870d4 je 0x100870e7 */
  if (C.zf) goto L_100870e7;
  /* 100870d6 mov eax, dword ptr [0x10097d98] */
  EAX = (r32((uint32_t)(0x10097d98)));
  /* 100870db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100870dd je 0x100870e7 */
  if (C.zf) goto L_100870e7;
  /* 100870df push edi */
  push32((uint32_t)(EDI));
  /* 100870e0 push esi */
  push32((uint32_t)(ESI));
  /* 100870e1 push ebx */
  push32((uint32_t)(EBX));
  /* 100870e2 call eax */
  call_ind((uint32_t)(EAX), 0x100870e4u);
  /* 100870e4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_100870e7:;
  /* 100870e7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_100870ea:;
  /* 100870ea pop edi */
  EDI = (pop32());
  /* 100870eb pop esi */
  ESI = (pop32());
  /* 100870ec pop ebx */
  EBX = (pop32());
  /* 100870ed pop ebp */
  EBP = (pop32());
  /* 100870ee ret 0xc */
  ESPCHK(0x10087054u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x100870f1 (48 bytes, 15 insns) */
void f_100870f1(void) {
  FTRACE(0x100870f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100870f1 mov eax, dword ptr [0x10096690] */
  EAX = (r32((uint32_t)(0x10096690)));
  /* 100870f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100870f9 je 0x10087108 */
  if (C.zf) goto L_10087108;
  /* 100870fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100870fd jne 0x1008710d */
  if (!C.zf) goto L_1008710d;
  /* 100870ff cmp dword ptr [0x10096694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10096694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087106 jne 0x1008710d */
  if (!C.zf) goto L_1008710d;
L_10087108:;
  /* 10087108 call 0x10088a51 */
  push32(0x1008710du); f_10088a51();
L_1008710d:;
  /* 1008710d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10087111 call 0x10088a8a */
  push32(0x10087116u); f_10088a8a();
  /* 10087116 push 0xff */
  push32((uint32_t)(0xffu));
  /* 1008711b call dword ptr [0x100906a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100906a8))), 0x10087121u);
  /* 10087121 pop ecx */
  ECX = (pop32());
  /* 10087122 pop ecx */
  ECX = (pop32());
  /* 10087123 ret  */
  ESPCHK(0x100870f1u, _esp0);
  ESP += 4; return;
}

/* FUN_10007124 @ 0x10087124 (280 bytes, 106 insns) */
void f_10087124(void) {
  FTRACE(0x10087124u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087124 push ebp */
  push32((uint32_t)(EBP));
  /* 10087125 mov ebp, esp */
  EBP = (ESP);
  /* 10087127 push ebx */
  push32((uint32_t)(EBX));
  /* 10087128 push esi */
  push32((uint32_t)(ESI));
  /* 10087129 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1008712c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1008712f mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 10087132 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 10087134 je 0x10087230 */
  if (C.zf) goto L_10087230;
  /* 1008713a test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 1008713c jne 0x10087230 */
  if (!C.zf) goto L_10087230;
  /* 10087142 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10087144 je 0x1008715c */
  if (C.zf) goto L_1008715c;
  /* 10087146 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1008714a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 1008714c je 0x10087230 */
  if (C.zf) goto L_10087230;
  /* 10087152 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 10087155 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10087157 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10087159 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_1008715c:;
  /* 1008715c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1008715f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10087163 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10087167 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 10087169 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1008716b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 1008716f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10087172 jne 0x10087196 */
  if (!C.zf) goto L_10087196;
  /* 10087174 cmp esi, 0x100907a8 */
  { uint32_t _a=(ESI),_b=(0x100907a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008717a je 0x10087184 */
  if (C.zf) goto L_10087184;
  /* 1008717c cmp esi, 0x100907c8 */
  { uint32_t _a=(ESI),_b=(0x100907c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087182 jne 0x1008718f */
  if (!C.zf) goto L_1008718f;
L_10087184:;
  /* 10087184 push ebx */
  push32((uint32_t)(EBX));
  /* 10087185 call 0x10088ee9 */
  push32(0x1008718au); f_10088ee9();
  /* 1008718a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008718c pop ecx */
  ECX = (pop32());
  /* 1008718d jne 0x10087196 */
  if (!C.zf) goto L_10087196;
L_1008718f:;
  /* 1008718f push esi */
  push32((uint32_t)(ESI));
  /* 10087190 call 0x10088ea5 */
  push32(0x10087195u); f_10088ea5();
  /* 10087195 pop ecx */
  ECX = (pop32());
L_10087196:;
  /* 10087196 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 1008719c push edi */
  push32((uint32_t)(EDI));
  /* 1008719d je 0x10087206 */
  if (C.zf) goto L_10087206;
  /* 1008719f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100871a2 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 100871a4 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100871a6 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100871a9 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100871ab mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 100871ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100871af test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100871b1 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 100871b4 jle 0x100871c6 */
  if ((C.zf||C.sf!=C.of)) goto L_100871c6;
  /* 100871b6 push edi */
  push32((uint32_t)(EDI));
  /* 100871b7 push eax */
  push32((uint32_t)(EAX));
  /* 100871b8 push ebx */
  push32((uint32_t)(EBX));
  /* 100871b9 call 0x10088cb5 */
  push32(0x100871beu); f_10088cb5();
  /* 100871be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100871c1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100871c4 jmp 0x100871fc */
  goto L_100871fc;
L_100871c6:;
  /* 100871c6 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100871c9 je 0x100871e4 */
  if (C.zf) goto L_100871e4;
  /* 100871cb mov ecx, ebx */
  ECX = (EBX);
  /* 100871cd mov eax, ebx */
  EAX = (EBX);
  /* 100871cf sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100871d2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100871d5 mov ecx, dword ptr [ecx*4 + 0x10097c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10097c80)));
  /* 100871dc lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100871df lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100871e2 jmp 0x100871e9 */
  goto L_100871e9;
L_100871e4:;
  /* 100871e4 mov eax, 0x100906d0 */
  EAX = (0x100906d0u);
L_100871e9:;
  /* 100871e9 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100871ed je 0x100871fc */
  if (C.zf) goto L_100871fc;
  /* 100871ef push 2 */
  push32((uint32_t)(0x2u));
  /* 100871f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100871f3 push ebx */
  push32((uint32_t)(EBX));
  /* 100871f4 call 0x10088bdd */
  push32(0x100871f9u); f_10088bdd();
  /* 100871f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100871fc:;
  /* 100871fc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100871ff mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10087202 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10087204 jmp 0x1008721a */
  goto L_1008721a;
L_10087206:;
  /* 10087206 push 1 */
  push32((uint32_t)(0x1u));
  /* 10087208 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1008720b pop edi */
  EDI = (pop32());
  /* 1008720c push edi */
  push32((uint32_t)(EDI));
  /* 1008720d push eax */
  push32((uint32_t)(EAX));
  /* 1008720e push ebx */
  push32((uint32_t)(EBX));
  /* 1008720f call 0x10088cb5 */
  push32(0x10087214u); f_10088cb5();
  /* 10087214 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087217 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1008721a:;
  /* 1008721a cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008721d pop edi */
  EDI = (pop32());
  /* 1008721e je 0x10087226 */
  if (C.zf) goto L_10087226;
  /* 10087220 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10087224 jmp 0x10087235 */
  goto L_10087235;
L_10087226:;
  /* 10087226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10087229 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1008722e jmp 0x10087238 */
  goto L_10087238;
L_10087230:;
  /* 10087230 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10087232 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_10087235:;
  /* 10087235 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10087238:;
  /* 10087238 pop esi */
  ESI = (pop32());
  /* 10087239 pop ebx */
  EBX = (pop32());
  /* 1008723a pop ebp */
  EBP = (pop32());
  /* 1008723b ret  */
  ESPCHK(0x10087124u, _esp0);
  ESP += 4; return;
}

/* FUN_1000723c @ 0x1008723c (1825 bytes, 595 insns) [1 switch table(s)] */
void f_1008723c(void) {
  FTRACE(0x1008723cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008723c push ebp */
  push32((uint32_t)(EBP));
  /* 1008723d mov ebp, esp */
  EBP = (ESP);
  /* 1008723f sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087245 push ebx */
  push32((uint32_t)(EBX));
  /* 10087246 push esi */
  push32((uint32_t)(ESI));
  /* 10087247 push edi */
  push32((uint32_t)(EDI));
  /* 10087248 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1008724b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1008724d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1008724f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10087250 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10087252 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10087255 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10087258 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1008725b je 0x10087955 */
  if (C.zf) goto L_10087955;
  /* 10087261 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10087264 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10087266 jmp 0x10087270 */
  goto L_10087270;
L_10087268:;
  /* 10087268 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1008726b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 1008726e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_10087270:;
  /* 10087270 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087273 jl 0x10087955 */
  if ((C.sf!=C.of)) goto L_10087955;
  /* 10087279 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008727c jl 0x10087291 */
  if ((C.sf!=C.of)) goto L_10087291;
  /* 1008727e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10087281 jg 0x10087291 */
  if ((!C.zf&&C.sf==C.of)) goto L_10087291;
  /* 10087283 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10087286 mov al, byte ptr [eax + 0x1008e0c8] */
  AL = (r8((uint32_t)(EAX + 0x1008e0c8)));
  /* 1008728c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1008728f jmp 0x10087293 */
  goto L_10087293;
L_10087291:;
  /* 10087291 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10087293:;
  /* 10087293 movsx eax, byte ptr [esi + eax*8 + 0x1008e0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x1008e0e8))));
  /* 1008729b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1008729e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100872a1 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 100872a4 ja 0x10087944 */
  if ((!C.cf&&!C.zf)) goto L_10087944;
  /* 100872aa jmp dword ptr [eax*4 + 0x1008795d] */
  switch (EAX) {
    case 0: goto L_100873db;
    case 1: goto L_100872b1;
    case 2: goto L_100872cc;
    case 3: goto L_10087318;
    case 4: goto L_1008734f;
    case 5: goto L_10087357;
    case 6: goto L_1008738c;
    case 7: goto L_1008741f;
    default: x86_unimpl("switch@0x100872aa out of table"); return;
  }
L_100872b1:;
  /* 100872b1 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 100872b5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 100872b8 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 100872bb mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 100872be mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 100872c1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 100872c4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100872c7 jmp 0x10087944 */
  goto L_10087944;
L_100872cc:;
  /* 100872cc movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100872cf sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100872d2 je 0x1008730f */
  if (C.zf) goto L_1008730f;
  /* 100872d4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100872d7 je 0x10087306 */
  if (C.zf) goto L_10087306;
  /* 100872d9 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100872dc je 0x100872fd */
  if (C.zf) goto L_100872fd;
  /* 100872de dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100872df dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100872e0 je 0x100872f4 */
  if (C.zf) goto L_100872f4;
  /* 100872e2 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100872e5 jne 0x10087944 */
  if (!C.zf) goto L_10087944;
  /* 100872eb or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100872ef jmp 0x10087944 */
  goto L_10087944;
L_100872f4:;
  /* 100872f4 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100872f8 jmp 0x10087944 */
  goto L_10087944;
L_100872fd:;
  /* 100872fd or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10087301 jmp 0x10087944 */
  goto L_10087944;
L_10087306:;
  /* 10087306 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 1008730a jmp 0x10087944 */
  goto L_10087944;
L_1008730f:;
  /* 1008730f or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10087313 jmp 0x10087944 */
  goto L_10087944;
L_10087318:;
  /* 10087318 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008731b jne 0x10087340 */
  if (!C.zf) goto L_10087340;
  /* 1008731d lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10087320 push eax */
  push32((uint32_t)(EAX));
  /* 10087321 call 0x10087a1b */
  push32(0x10087326u); f_10087a1b();
  /* 10087326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087328 pop ecx */
  ECX = (pop32());
  /* 10087329 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1008732c jge 0x10087944 */
  if ((C.sf==C.of)) goto L_10087944;
  /* 10087332 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10087336 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10087338:;
  /* 10087338 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1008733b jmp 0x10087944 */
  goto L_10087944;
L_10087340:;
  /* 10087340 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10087343 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10087346 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10087349 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1008734d jmp 0x10087338 */
  goto L_10087338;
L_1008734f:;
  /* 1008734f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10087352 jmp 0x10087944 */
  goto L_10087944;
L_10087357:;
  /* 10087357 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008735a jne 0x1008737a */
  if (!C.zf) goto L_1008737a;
  /* 1008735c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1008735f push eax */
  push32((uint32_t)(EAX));
  /* 10087360 call 0x10087a1b */
  push32(0x10087365u); f_10087a1b();
  /* 10087365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087367 pop ecx */
  ECX = (pop32());
  /* 10087368 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1008736b jge 0x10087944 */
  if ((C.sf==C.of)) goto L_10087944;
  /* 10087371 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10087375 jmp 0x10087944 */
  goto L_10087944;
L_1008737a:;
  /* 1008737a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1008737d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10087380 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 10087384 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10087387 jmp 0x10087944 */
  goto L_10087944;
L_1008738c:;
  /* 1008738c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008738f je 0x100873bf */
  if (C.zf) goto L_100873bf;
  /* 10087391 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10087394 je 0x100873b6 */
  if (C.zf) goto L_100873b6;
  /* 10087396 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10087399 je 0x100873ad */
  if (C.zf) goto L_100873ad;
  /* 1008739b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008739e jne 0x10087944 */
  if (!C.zf) goto L_10087944;
  /* 100873a4 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100873a8 jmp 0x10087944 */
  goto L_10087944;
L_100873ad:;
  /* 100873ad or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100873b1 jmp 0x10087944 */
  goto L_10087944;
L_100873b6:;
  /* 100873b6 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100873ba jmp 0x10087944 */
  goto L_10087944;
L_100873bf:;
  /* 100873bf cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100873c2 jne 0x100873d8 */
  if (!C.zf) goto L_100873d8;
  /* 100873c4 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100873c8 jne 0x100873d8 */
  if (!C.zf) goto L_100873d8;
  /* 100873ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100873cb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100873cc or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100873d0 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 100873d3 jmp 0x10087944 */
  goto L_10087944;
L_100873d8:;
  /* 100873d8 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_100873db:;
  /* 100873db mov ecx, dword ptr [0x10090a10] */
  ECX = (r32((uint32_t)(0x10090a10)));
  /* 100873e1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100873e4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100873e7 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100873ec je 0x10087407 */
  if (C.zf) goto L_10087407;
  /* 100873ee lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100873f1 push eax */
  push32((uint32_t)(EAX));
  /* 100873f2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100873f5 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100873f8 push eax */
  push32((uint32_t)(EAX));
  /* 100873f9 call 0x1008797d */
  push32(0x100873feu); f_1008797d();
  /* 100873fe mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10087400 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087403 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10087404 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10087407:;
  /* 10087407 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1008740a push eax */
  push32((uint32_t)(EAX));
  /* 1008740b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008740e movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10087411 push eax */
  push32((uint32_t)(EAX));
  /* 10087412 call 0x1008797d */
  push32(0x10087417u); f_1008797d();
  /* 10087417 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008741a jmp 0x10087944 */
  goto L_10087944;
L_1008741f:;
  /* 1008741f movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10087422 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087425 jg 0x10087647 */
  if ((!C.zf&&C.sf==C.of)) goto L_10087647;
  /* 1008742b cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008742e jge 0x100874ca */
  if ((C.sf==C.of)) goto L_100874ca;
  /* 10087434 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087437 jg 0x10087528 */
  if ((!C.zf&&C.sf==C.of)) goto L_10087528;
  /* 1008743d je 0x100876bb */
  if (C.zf) goto L_100876bb;
  /* 10087443 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087446 je 0x100874eb */
  if (C.zf) goto L_100874eb;
  /* 1008744c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008744d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008744e je 0x100874c0 */
  if (C.zf) goto L_100874c0;
  /* 10087450 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10087451 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10087452 je 0x100874c0 */
  if (C.zf) goto L_100874c0;
  /* 10087454 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087457 jne 0x10087846 */
  if (!C.zf) goto L_10087846;
  /* 1008745d test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10087463 jne 0x10087469 */
  if (!C.zf) goto L_10087469;
  /* 10087465 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10087469:;
  /* 10087469 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1008746c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008746f jne 0x10087476 */
  if (!C.zf) goto L_10087476;
  /* 10087471 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_10087476:;
  /* 10087476 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10087479 push eax */
  push32((uint32_t)(EAX));
  /* 1008747a call 0x10087a1b */
  push32(0x1008747fu); f_10087a1b();
  /* 1008747f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 10087485 pop ecx */
  ECX = (pop32());
  /* 10087486 mov ecx, eax */
  ECX = (EAX);
  /* 10087488 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1008748b je 0x1008768f */
  if (C.zf) goto L_1008768f;
  /* 10087491 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10087493 jne 0x1008749e */
  if (!C.zf) goto L_1008749e;
  /* 10087495 mov ecx, dword ptr [0x100906b0] */
  ECX = (r32((uint32_t)(0x100906b0)));
  /* 1008749b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1008749e:;
  /* 1008749e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 100874a5 mov eax, ecx */
  EAX = (ECX);
L_100874a7:;
  /* 100874a7 mov edx, esi */
  EDX = (ESI);
  /* 100874a9 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100874aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100874ac je 0x10087686 */
  if (C.zf) goto L_10087686;
  /* 100874b2 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100874b6 je 0x10087686 */
  if (C.zf) goto L_10087686;
  /* 100874bc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100874bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100874be jmp 0x100874a7 */
  goto L_100874a7;
L_100874c0:;
  /* 100874c0 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 100874c7 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_100874ca:;
  /* 100874ca or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100874ce lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 100874d4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100874d6 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 100874d9 jge 0x100875ae */
  if ((C.sf==C.of)) goto L_100875ae;
  /* 100874df mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 100874e6 jmp 0x100875bc */
  goto L_100875bc;
L_100874eb:;
  /* 100874eb test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 100874f1 jne 0x100874f7 */
  if (!C.zf) goto L_100874f7;
  /* 100874f3 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_100874f7:;
  /* 100874f7 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 100874fd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10087500 push eax */
  push32((uint32_t)(EAX));
  /* 10087501 je 0x1008753e */
  if (C.zf) goto L_1008753e;
  /* 10087503 call 0x10087a38 */
  push32(0x10087508u); f_10087a38();
  /* 10087508 push eax */
  push32((uint32_t)(EAX));
  /* 10087509 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 1008750f push eax */
  push32((uint32_t)(EAX));
  /* 10087510 call 0x100890fb */
  push32(0x10087515u); f_100890fb();
  /* 10087515 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087518 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1008751b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008751d jge 0x10087551 */
  if ((C.sf==C.of)) goto L_10087551;
  /* 1008751f mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 10087526 jmp 0x10087551 */
  goto L_10087551;
L_10087528:;
  /* 10087528 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008752b je 0x1008755f */
  if (C.zf) goto L_1008755f;
  /* 1008752d sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087530 je 0x100874f7 */
  if (C.zf) goto L_100874f7;
  /* 10087532 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10087533 je 0x10087721 */
  if (C.zf) goto L_10087721;
  /* 10087539 jmp 0x10087846 */
  goto L_10087846;
L_1008753e:;
  /* 1008753e call 0x10087a1b */
  push32(0x10087543u); f_10087a1b();
  /* 10087543 pop ecx */
  ECX = (pop32());
  /* 10087544 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 1008754a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10087551:;
  /* 10087551 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10087557 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1008755a jmp 0x10087846 */
  goto L_10087846;
L_1008755f:;
  /* 1008755f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10087562 push eax */
  push32((uint32_t)(EAX));
  /* 10087563 call 0x10087a1b */
  push32(0x10087568u); f_10087a1b();
  /* 10087568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008756a pop ecx */
  ECX = (pop32());
  /* 1008756b je 0x100875a0 */
  if (C.zf) goto L_100875a0;
  /* 1008756d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10087570 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10087572 je 0x100875a0 */
  if (C.zf) goto L_100875a0;
  /* 10087574 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 10087578 je 0x10087591 */
  if (C.zf) goto L_10087591;
  /* 1008757a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1008757d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1008757f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10087582 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10087585 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1008758c jmp 0x10087846 */
  goto L_10087846;
L_10087591:;
  /* 10087591 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 10087595 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10087598 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1008759b jmp 0x10087843 */
  goto L_10087843;
L_100875a0:;
  /* 100875a0 mov eax, dword ptr [0x100906ac] */
  EAX = (r32((uint32_t)(0x100906ac)));
  /* 100875a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100875a8 push eax */
  push32((uint32_t)(EAX));
  /* 100875a9 jmp 0x1008763c */
  goto L_1008763c;
L_100875ae:;
  /* 100875ae jne 0x100875bc */
  if (!C.zf) goto L_100875bc;
  /* 100875b0 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100875b3 jne 0x100875bc */
  if (!C.zf) goto L_100875bc;
  /* 100875b5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_100875bc:;
  /* 100875bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100875bf push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 100875c2 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100875c5 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 100875c8 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 100875cb mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 100875ce mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 100875d1 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 100875d4 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 100875d7 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100875da push eax */
  push32((uint32_t)(EAX));
  /* 100875db lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100875e1 push eax */
  push32((uint32_t)(EAX));
  /* 100875e2 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 100875e5 push eax */
  push32((uint32_t)(EAX));
  /* 100875e6 call dword ptr [0x100906b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100906b4))), 0x100875ecu);
  /* 100875ec mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 100875ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100875f2 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 100875f8 je 0x1008760e */
  if (C.zf) goto L_1008760e;
  /* 100875fa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100875fe jne 0x1008760e */
  if (!C.zf) goto L_1008760e;
  /* 10087600 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10087606 push eax */
  push32((uint32_t)(EAX));
  /* 10087607 call dword ptr [0x100906c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100906c0))), 0x1008760du);
  /* 1008760d pop ecx */
  ECX = (pop32());
L_1008760e:;
  /* 1008760e cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10087611 jne 0x10087625 */
  if (!C.zf) goto L_10087625;
  /* 10087613 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10087615 jne 0x10087625 */
  if (!C.zf) goto L_10087625;
  /* 10087617 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 1008761d push eax */
  push32((uint32_t)(EAX));
  /* 1008761e call dword ptr [0x100906b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100906b8))), 0x10087624u);
  /* 10087624 pop ecx */
  ECX = (pop32());
L_10087625:;
  /* 10087625 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008762c jne 0x1008763b */
  if (!C.zf) goto L_1008763b;
  /* 1008762e or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10087632 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 10087638 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_1008763b:;
  /* 1008763b push edi */
  push32((uint32_t)(EDI));
L_1008763c:;
  /* 1008763c call 0x10089080 */
  push32(0x10087641u); f_10089080();
  /* 10087641 pop ecx */
  ECX = (pop32());
  /* 10087642 jmp 0x10087843 */
  goto L_10087843;
L_10087647:;
  /* 10087647 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008764a je 0x10087721 */
  if (C.zf) goto L_10087721;
  /* 10087650 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087653 je 0x100876f7 */
  if (C.zf) goto L_100876f7;
  /* 10087659 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008765a je 0x100876e4 */
  if (C.zf) goto L_100876e4;
  /* 10087660 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10087661 je 0x100876b4 */
  if (C.zf) goto L_100876b4;
  /* 10087663 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087666 je 0x10087469 */
  if (C.zf) goto L_10087469;
  /* 1008766c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008766d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008766e je 0x10087725 */
  if (C.zf) goto L_10087725;
  /* 10087674 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087677 jne 0x10087846 */
  if (!C.zf) goto L_10087846;
  /* 1008767d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 10087684 jmp 0x100876c2 */
  goto L_100876c2;
L_10087686:;
  /* 10087686 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087688 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1008768a jmp 0x10087843 */
  goto L_10087843;
L_1008768f:;
  /* 1008768f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10087691 jne 0x1008769c */
  if (!C.zf) goto L_1008769c;
  /* 10087693 mov ecx, dword ptr [0x100906ac] */
  ECX = (r32((uint32_t)(0x100906ac)));
  /* 10087699 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1008769c:;
  /* 1008769c mov eax, ecx */
  EAX = (ECX);
L_1008769e:;
  /* 1008769e mov edx, esi */
  EDX = (ESI);
  /* 100876a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100876a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100876a3 je 0x100876ad */
  if (C.zf) goto L_100876ad;
  /* 100876a5 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100876a8 je 0x100876ad */
  if (C.zf) goto L_100876ad;
  /* 100876aa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100876ab jmp 0x1008769e */
  goto L_1008769e;
L_100876ad:;
  /* 100876ad sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100876af jmp 0x10087843 */
  goto L_10087843;
L_100876b4:;
  /* 100876b4 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_100876bb:;
  /* 100876bb mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_100876c2:;
  /* 100876c2 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100876c6 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 100876cd je 0x1008772c */
  if (C.zf) goto L_1008772c;
  /* 100876cf mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 100876d2 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 100876d6 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100876d8 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 100876df mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 100876e2 jmp 0x1008772c */
  goto L_1008772c;
L_100876e4:;
  /* 100876e4 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100876e8 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 100876ef je 0x1008772c */
  if (C.zf) goto L_1008772c;
  /* 100876f1 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100876f5 jmp 0x1008772c */
  goto L_1008772c;
L_100876f7:;
  /* 100876f7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100876fa push eax */
  push32((uint32_t)(EAX));
  /* 100876fb call 0x10087a1b */
  push32(0x10087700u); f_10087a1b();
  /* 10087700 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10087704 pop ecx */
  ECX = (pop32());
  /* 10087705 je 0x10087710 */
  if (C.zf) goto L_10087710;
  /* 10087707 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1008770b mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 1008770e jmp 0x10087715 */
  goto L_10087715;
L_10087710:;
  /* 10087710 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10087713 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10087715:;
  /* 10087715 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 1008771c jmp 0x10087944 */
  goto L_10087944;
L_10087721:;
  /* 10087721 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10087725:;
  /* 10087725 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_1008772c:;
  /* 1008772c test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10087730 je 0x1008773e */
  if (C.zf) goto L_1008773e;
  /* 10087732 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10087735 push eax */
  push32((uint32_t)(EAX));
  /* 10087736 call 0x10087a28 */
  push32(0x1008773bu); f_10087a28();
  /* 1008773b pop ecx */
  ECX = (pop32());
  /* 1008773c jmp 0x1008777f */
  goto L_1008777f;
L_1008773e:;
  /* 1008773e test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10087742 je 0x10087765 */
  if (C.zf) goto L_10087765;
  /* 10087744 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10087748 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1008774b push eax */
  push32((uint32_t)(EAX));
  /* 1008774c je 0x1008775a */
  if (C.zf) goto L_1008775a;
  /* 1008774e call 0x10087a1b */
  push32(0x10087753u); f_10087a1b();
  /* 10087753 pop ecx */
  ECX = (pop32());
  /* 10087754 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_10087757:;
  /* 10087757 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10087758 jmp 0x1008777f */
  goto L_1008777f;
L_1008775a:;
  /* 1008775a call 0x10087a1b */
  push32(0x1008775fu); f_10087a1b();
  /* 1008775f pop ecx */
  ECX = (pop32());
  /* 10087760 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 10087763 jmp 0x10087757 */
  goto L_10087757;
L_10087765:;
  /* 10087765 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10087769 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1008776c push eax */
  push32((uint32_t)(EAX));
  /* 1008776d je 0x10087777 */
  if (C.zf) goto L_10087777;
  /* 1008776f call 0x10087a1b */
  push32(0x10087774u); f_10087a1b();
  /* 10087774 pop ecx */
  ECX = (pop32());
  /* 10087775 jmp 0x10087757 */
  goto L_10087757;
L_10087777:;
  /* 10087777 call 0x10087a1b */
  push32(0x1008777cu); f_10087a1b();
  /* 1008777c pop ecx */
  ECX = (pop32());
  /* 1008777d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_1008777f:;
  /* 1008777f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10087783 je 0x100877a0 */
  if (C.zf) goto L_100877a0;
  /* 10087785 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10087787 jg 0x100877a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_100877a0;
  /* 10087789 jl 0x1008778f */
  if ((C.sf!=C.of)) goto L_1008778f;
  /* 1008778b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008778d jae 0x100877a0 */
  if (!C.cf) goto L_100877a0;
L_1008778f:;
  /* 1008778f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10087791 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10087794 mov esi, eax */
  ESI = (EAX);
  /* 10087796 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10087798 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1008779c mov edi, edx */
  EDI = (EDX);
  /* 1008779e jmp 0x100877a4 */
  goto L_100877a4;
L_100877a0:;
  /* 100877a0 mov esi, eax */
  ESI = (EAX);
  /* 100877a2 mov edi, edx */
  EDI = (EDX);
L_100877a4:;
  /* 100877a4 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 100877a8 jne 0x100877ad */
  if (!C.zf) goto L_100877ad;
  /* 100877aa and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_100877ad:;
  /* 100877ad cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100877b1 jge 0x100877bc */
  if ((C.sf==C.of)) goto L_100877bc;
  /* 100877b3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 100877ba jmp 0x100877c0 */
  goto L_100877c0;
L_100877bc:;
  /* 100877bc and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_100877c0:;
  /* 100877c0 mov eax, esi */
  EAX = (ESI);
  /* 100877c2 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100877c4 jne 0x100877ca */
  if (!C.zf) goto L_100877ca;
  /* 100877c6 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_100877ca:;
  /* 100877ca lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 100877cd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100877d0:;
  /* 100877d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 100877d3 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 100877d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100877d8 jg 0x100877e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_100877e0;
  /* 100877da mov eax, esi */
  EAX = (ESI);
  /* 100877dc or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100877de je 0x1008781b */
  if (C.zf) goto L_1008781b;
L_100877e0:;
  /* 100877e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100877e3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100877e4 push edx */
  push32((uint32_t)(EDX));
  /* 100877e5 push eax */
  push32((uint32_t)(EAX));
  /* 100877e6 push edi */
  push32((uint32_t)(EDI));
  /* 100877e7 push esi */
  push32((uint32_t)(ESI));
  /* 100877e8 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 100877eb mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 100877ee call 0x10089230 */
  push32(0x100877f3u); f_10089230();
  /* 100877f3 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 100877f6 mov ebx, eax */
  EBX = (EAX);
  /* 100877f8 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100877fb push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 100877fe push edi */
  push32((uint32_t)(EDI));
  /* 100877ff push esi */
  push32((uint32_t)(ESI));
  /* 10087800 call 0x100891c0 */
  push32(0x10087805u); f_100891c0();
  /* 10087805 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087808 mov esi, eax */
  ESI = (EAX);
  /* 1008780a mov edi, edx */
  EDI = (EDX);
  /* 1008780c jle 0x10087811 */
  if ((C.zf||C.sf!=C.of)) goto L_10087811;
  /* 1008780e add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_10087811:;
  /* 10087811 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10087814 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 10087817 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 10087819 jmp 0x100877d0 */
  goto L_100877d0;
L_1008781b:;
  /* 1008781b lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1008781e sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087821 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 10087824 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 10087828 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1008782b je 0x10087846 */
  if (C.zf) goto L_10087846;
  /* 1008782d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10087830 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10087833 jne 0x10087839 */
  if (!C.zf) goto L_10087839;
  /* 10087835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087837 jne 0x10087846 */
  if (!C.zf) goto L_10087846;
L_10087839:;
  /* 10087839 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1008783c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008783d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10087840 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_10087843:;
  /* 10087843 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10087846:;
  /* 10087846 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008784a jne 0x10087944 */
  if (!C.zf) goto L_10087944;
  /* 10087850 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 10087853 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 10087856 je 0x1008787e */
  if (C.zf) goto L_1008787e;
  /* 10087858 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 1008785b je 0x10087863 */
  if (C.zf) goto L_10087863;
  /* 1008785d mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 10087861 jmp 0x10087877 */
  goto L_10087877;
L_10087863:;
  /* 10087863 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10087866 je 0x1008786e */
  if (C.zf) goto L_1008786e;
  /* 10087868 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 1008786c jmp 0x10087877 */
  goto L_10087877;
L_1008786e:;
  /* 1008786e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10087871 je 0x1008787e */
  if (C.zf) goto L_1008787e;
  /* 10087873 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_10087877:;
  /* 10087877 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_1008787e:;
  /* 1008787e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 10087881 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087884 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087887 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 1008788a jne 0x1008789e */
  if (!C.zf) goto L_1008789e;
  /* 1008788c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1008788f push eax */
  push32((uint32_t)(EAX));
  /* 10087890 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10087893 push esi */
  push32((uint32_t)(ESI));
  /* 10087894 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10087896 call 0x100879b2 */
  push32(0x1008789bu); f_100879b2();
  /* 1008789b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008789e:;
  /* 1008789e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100878a1 push eax */
  push32((uint32_t)(EAX));
  /* 100878a2 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 100878a5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100878a8 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 100878ab push eax */
  push32((uint32_t)(EAX));
  /* 100878ac call 0x100879e3 */
  push32(0x100878b1u); f_100879e3();
  /* 100878b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100878b4 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100878b7 je 0x100878d0 */
  if (C.zf) goto L_100878d0;
  /* 100878b9 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100878bc jne 0x100878d0 */
  if (!C.zf) goto L_100878d0;
  /* 100878be lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100878c1 push eax */
  push32((uint32_t)(EAX));
  /* 100878c2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100878c5 push esi */
  push32((uint32_t)(ESI));
  /* 100878c6 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 100878c8 call 0x100879b2 */
  push32(0x100878cdu); f_100879b2();
  /* 100878cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100878d0:;
  /* 100878d0 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100878d4 je 0x10087917 */
  if (C.zf) goto L_10087917;
  /* 100878d6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100878da jle 0x10087917 */
  if ((C.zf||C.sf!=C.of)) goto L_10087917;
  /* 100878dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100878df mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 100878e2 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_100878e5:;
  /* 100878e5 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 100878e8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100878e9 push eax */
  push32((uint32_t)(EAX));
  /* 100878ea lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100878ed push eax */
  push32((uint32_t)(EAX));
  /* 100878ee inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100878ef call 0x100890fb */
  push32(0x100878f4u); f_100890fb();
  /* 100878f4 pop ecx */
  ECX = (pop32());
  /* 100878f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100878f7 pop ecx */
  ECX = (pop32());
  /* 100878f8 jle 0x1008792c */
  if ((C.zf||C.sf!=C.of)) goto L_1008792c;
  /* 100878fa lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 100878fd push ecx */
  push32((uint32_t)(ECX));
  /* 100878fe push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10087901 push eax */
  push32((uint32_t)(EAX));
  /* 10087902 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 10087905 push eax */
  push32((uint32_t)(EAX));
  /* 10087906 call 0x100879e3 */
  push32(0x1008790bu); f_100879e3();
  /* 1008790b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008790e mov eax, edi */
  EAX = (EDI);
  /* 10087910 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10087911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087913 jne 0x100878e5 */
  if (!C.zf) goto L_100878e5;
  /* 10087915 jmp 0x1008792c */
  goto L_1008792c;
L_10087917:;
  /* 10087917 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1008791a push eax */
  push32((uint32_t)(EAX));
  /* 1008791b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008791e push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 10087921 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 10087924 call 0x100879e3 */
  push32(0x10087929u); f_100879e3();
  /* 10087929 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008792c:;
  /* 1008792c test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 10087930 je 0x10087944 */
  if (C.zf) goto L_10087944;
  /* 10087932 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10087935 push eax */
  push32((uint32_t)(EAX));
  /* 10087936 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10087939 push esi */
  push32((uint32_t)(ESI));
  /* 1008793a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1008793c call 0x100879b2 */
  push32(0x10087941u); f_100879b2();
  /* 10087941 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10087944:;
  /* 10087944 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10087947 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10087949 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008794a test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1008794c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1008794f jne 0x10087268 */
  if (!C.zf) goto L_10087268;
L_10087955:;
  /* 10087955 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10087958 pop edi */
  EDI = (pop32());
  /* 10087959 pop esi */
  ESI = (pop32());
  /* 1008795a pop ebx */
  EBX = (pop32());
  /* 1008795b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008795c ret  */
  ESPCHK(0x1008723cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000797d @ 0x1008797d (53 bytes, 25 insns) */
void f_1008797d(void) {
  FTRACE(0x1008797du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008797d push ebp */
  push32((uint32_t)(EBP));
  /* 1008797e mov ebp, esp */
  EBP = (ESP);
  /* 10087980 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10087983 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 10087986 js 0x10087996 */
  if (C.sf) goto L_10087996;
  /* 10087988 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1008798a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1008798d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1008798f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10087991 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10087994 jmp 0x100879a1 */
  goto L_100879a1;
L_10087996:;
  /* 10087996 push ecx */
  push32((uint32_t)(ECX));
  /* 10087997 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008799a call 0x10087124 */
  push32(0x1008799fu); f_10087124();
  /* 1008799f pop ecx */
  ECX = (pop32());
  /* 100879a0 pop ecx */
  ECX = (pop32());
L_100879a1:;
  /* 100879a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100879a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100879a7 jne 0x100879ae */
  if (!C.zf) goto L_100879ae;
  /* 100879a9 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100879ac pop ebp */
  EBP = (pop32());
  /* 100879ad ret  */
  ESPCHK(0x1008797du, _esp0);
  ESP += 4; return;
L_100879ae:;
  /* 100879ae inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 100879b0 pop ebp */
  EBP = (pop32());
  /* 100879b1 ret  */
  ESPCHK(0x1008797du, _esp0);
  ESP += 4; return;
}

/* FUN_100079b2 @ 0x100879b2 (49 bytes, 22 insns) */
void f_100879b2(void) {
  FTRACE(0x100879b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100879b2 push esi */
  push32((uint32_t)(ESI));
  /* 100879b3 push edi */
  push32((uint32_t)(EDI));
  /* 100879b4 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100879b8 mov eax, edi */
  EAX = (EDI);
  /* 100879ba dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100879bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100879bd jle 0x100879e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100879e0;
  /* 100879bf mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_100879c3:;
  /* 100879c3 push esi */
  push32((uint32_t)(ESI));
  /* 100879c4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100879c8 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 100879cc call 0x1008797d */
  push32(0x100879d1u); f_1008797d();
  /* 100879d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100879d4 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100879d7 je 0x100879e0 */
  if (C.zf) goto L_100879e0;
  /* 100879d9 mov eax, edi */
  EAX = (EDI);
  /* 100879db dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100879dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100879de jg 0x100879c3 */
  if ((!C.zf&&C.sf==C.of)) goto L_100879c3;
L_100879e0:;
  /* 100879e0 pop edi */
  EDI = (pop32());
  /* 100879e1 pop esi */
  ESI = (pop32());
  /* 100879e2 ret  */
  ESPCHK(0x100879b2u, _esp0);
  ESP += 4; return;
}

/* FUN_100079e3 @ 0x100879e3 (56 bytes, 27 insns) */
void f_100879e3(void) {
  FTRACE(0x100879e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100879e3 push ebx */
  push32((uint32_t)(EBX));
  /* 100879e4 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 100879e8 mov eax, ebx */
  EAX = (EBX);
  /* 100879ea dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100879eb push esi */
  push32((uint32_t)(ESI));
  /* 100879ec push edi */
  push32((uint32_t)(EDI));
  /* 100879ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100879ef jle 0x10087a17 */
  if ((C.zf||C.sf!=C.of)) goto L_10087a17;
  /* 100879f1 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 100879f5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_100879f9:;
  /* 100879f9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100879fc push edi */
  push32((uint32_t)(EDI));
  /* 100879fd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100879fe push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 10087a02 push eax */
  push32((uint32_t)(EAX));
  /* 10087a03 call 0x1008797d */
  push32(0x10087a08u); f_1008797d();
  /* 10087a08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087a0b cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087a0e je 0x10087a17 */
  if (C.zf) goto L_10087a17;
  /* 10087a10 mov eax, ebx */
  EAX = (EBX);
  /* 10087a12 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10087a13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087a15 jg 0x100879f9 */
  if ((!C.zf&&C.sf==C.of)) goto L_100879f9;
L_10087a17:;
  /* 10087a17 pop edi */
  EDI = (pop32());
  /* 10087a18 pop esi */
  ESI = (pop32());
  /* 10087a19 pop ebx */
  EBX = (pop32());
  /* 10087a1a ret  */
  ESPCHK(0x100879e3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a1b @ 0x10087a1b (13 bytes, 5 insns) */
void f_10087a1b(void) {
  FTRACE(0x10087a1bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087a1b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10087a1f add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10087a22 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10087a24 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10087a27 ret  */
  ESPCHK(0x10087a1bu, _esp0);
  ESP += 4; return;
}

/* FUN_10007a28 @ 0x10087a28 (16 bytes, 6 insns) */
void f_10087a28(void) {
  FTRACE(0x10087a28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087a28 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10087a2c add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10087a2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10087a31 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 10087a34 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10087a37 ret  */
  ESPCHK(0x10087a28u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a38 @ 0x10087a38 (14 bytes, 5 insns) */
void f_10087a38(void) {
  FTRACE(0x10087a38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087a38 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10087a3c add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10087a3f mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10087a41 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 10087a45 ret  */
  ESPCHK(0x10087a38u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a46 @ 0x10087a46 (18 bytes, 6 insns) */
void f_10087a46(void) {
  FTRACE(0x10087a46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087a46 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 10087a4b push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 10087a50 call 0x100892da */
  push32(0x10087a55u); f_100892da();
  /* 10087a55 pop ecx */
  ECX = (pop32());
  /* 10087a56 pop ecx */
  ECX = (pop32());
  /* 10087a57 ret  */
  ESPCHK(0x10087a46u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a58 @ 0x10087a58 (62 bytes, 24 insns) */
void f_10087a58(void) {
  FTRACE(0x10087a58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087a58 push ebp */
  push32((uint32_t)(EBP));
  /* 10087a59 mov ebp, esp */
  EBP = (ESP);
  /* 10087a5b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087a5e fld qword ptr [0x1008e170] */
  fpu_push(rf64((uint32_t)(0x1008e170)));
  /* 10087a64 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10087a67 fld qword ptr [0x1008e168] */
  fpu_push(rf64((uint32_t)(0x1008e168)));
  /* 10087a6d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10087a70 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10087a73 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 10087a76 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 10087a79 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 10087a7c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 10087a7f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 10087a82 fcomp qword ptr [0x1008e160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1008e160)));
  (void)fpu_pop();
  /* 10087a88 fnstsw ax */
  AX = fpu_status();
  /* 10087a8a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10087a8b jbe 0x10087a92 */
  if ((C.cf||C.zf)) goto L_10087a92;
  /* 10087a8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10087a8f pop eax */
  EAX = (pop32());
  /* 10087a90 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10087a91 ret  */
  ESPCHK(0x10087a58u, _esp0);
  ESP += 4; return;
L_10087a92:;
  /* 10087a92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10087a94 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10087a95 ret  */
  ESPCHK(0x10087a58u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a96 @ 0x10087a96 (41 bytes, 13 insns) */
void f_10087a96(void) {
  FTRACE(0x10087a96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087a96 push 0x1008e194 */
  push32((uint32_t)(0x1008e194u));
  /* 10087a9b call dword ptr [0x1008e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e004))), 0x10087aa1u);
  /* 10087aa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087aa3 je 0x10087aba */
  if (C.zf) goto L_10087aba;
  /* 10087aa5 push 0x1008e178 */
  push32((uint32_t)(0x1008e178u));
  /* 10087aaa push eax */
  push32((uint32_t)(EAX));
  /* 10087aab call dword ptr [0x1008e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e088))), 0x10087ab1u);
  /* 10087ab1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087ab3 je 0x10087aba */
  if (C.zf) goto L_10087aba;
  /* 10087ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10087ab7 call eax */
  call_ind((uint32_t)(EAX), 0x10087ab9u);
  /* 10087ab9 ret  */
  ESPCHK(0x10087a96u, _esp0);
  ESP += 4; return;
L_10087aba:;
  /* 10087aba jmp 0x10087a58 */
  f_10087a58(); return;
}

/* FUN_10007abf @ 0x10087abf (90 bytes, 37 insns) */
void f_10087abf(void) {
  FTRACE(0x10087abfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087abf push esi */
  push32((uint32_t)(ESI));
  /* 10087ac0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10087ac4 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10087ac7 push eax */
  push32((uint32_t)(EAX));
  /* 10087ac8 call 0x10089480 */
  push32(0x10087acdu); f_10089480();
  /* 10087acd cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087ad0 pop ecx */
  ECX = (pop32());
  /* 10087ad1 je 0x10087aff */
  if (C.zf) goto L_10087aff;
L_10087ad3:;
  /* 10087ad3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10087ad4 cmp dword ptr [0x10090c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10090c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087adb jle 0x10087aec */
  if ((C.zf||C.sf!=C.of)) goto L_10087aec;
  /* 10087add movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10087ae0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10087ae2 push eax */
  push32((uint32_t)(EAX));
  /* 10087ae3 call 0x1008940b */
  push32(0x10087ae8u); f_1008940b();
  /* 10087ae8 pop ecx */
  ECX = (pop32());
  /* 10087ae9 pop ecx */
  ECX = (pop32());
  /* 10087aea jmp 0x10087afb */
  goto L_10087afb;
L_10087aec:;
  /* 10087aec movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10087aef mov ecx, dword ptr [0x10090a10] */
  ECX = (r32((uint32_t)(0x10090a10)));
  /* 10087af5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10087af8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10087afb:;
  /* 10087afb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087afd jne 0x10087ad3 */
  if (!C.zf) goto L_10087ad3;
L_10087aff:;
  /* 10087aff mov cl, byte ptr [0x10090c24] */
  CL = (r8((uint32_t)(0x10090c24)));
  /* 10087b05 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10087b07 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 10087b09 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10087b0a:;
  /* 10087b0a mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10087b0c mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 10087b0e mov al, cl */
  AL = (CL);
  /* 10087b10 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10087b12 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10087b13 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10087b15 jne 0x10087b0a */
  if (!C.zf) goto L_10087b0a;
  /* 10087b17 pop esi */
  ESI = (pop32());
  /* 10087b18 ret  */
  ESPCHK(0x10087abfu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10087b7f (62 bytes, 29 insns) */
void f_10087b7f(void) {
  FTRACE(0x10087b7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087b7f push ebp */
  push32((uint32_t)(EBP));
  /* 10087b80 mov ebp, esp */
  EBP = (ESP);
  /* 10087b82 push ecx */
  push32((uint32_t)(ECX));
  /* 10087b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10087b84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087b88 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10087b8b je 0x10087ba8 */
  if (C.zf) goto L_10087ba8;
  /* 10087b8d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10087b90 push eax */
  push32((uint32_t)(EAX));
  /* 10087b91 call 0x1008994c */
  push32(0x10087b96u); f_1008994c();
  /* 10087b96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10087b99 pop ecx */
  ECX = (pop32());
  /* 10087b9a pop ecx */
  ECX = (pop32());
  /* 10087b9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10087b9e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10087ba0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10087ba3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10087ba6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10087ba7 ret  */
  ESPCHK(0x10087b7fu, _esp0);
  ESP += 4; return;
L_10087ba8:;
  /* 10087ba8 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10087bab push eax */
  push32((uint32_t)(EAX));
  /* 10087bac call 0x10089979 */
  push32(0x10087bb1u); f_10089979();
  /* 10087bb1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10087bb4 pop ecx */
  ECX = (pop32());
  /* 10087bb5 pop ecx */
  ECX = (pop32());
  /* 10087bb6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10087bb9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10087bbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10087bbc ret  */
  ESPCHK(0x10087b7fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007bbd @ 0x10087bbd (97 bytes, 42 insns) */
void f_10087bbd(void) {
  FTRACE(0x10087bbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087bbd push ebp */
  push32((uint32_t)(EBP));
  /* 10087bbe mov ebp, esp */
  EBP = (ESP);
  /* 10087bc0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087bc3 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10087bc6 push esi */
  push32((uint32_t)(ESI));
  /* 10087bc7 push eax */
  push32((uint32_t)(EAX));
  /* 10087bc8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10087bcb push eax */
  push32((uint32_t)(EAX));
  /* 10087bcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10087bcf push ecx */
  push32((uint32_t)(ECX));
  /* 10087bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10087bd1 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10087bd3 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10087bd6 call 0x10089a1d */
  push32(0x10087bdbu); f_10089a1d();
  /* 10087bdb mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10087bde lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10087be1 push eax */
  push32((uint32_t)(EAX));
  /* 10087be2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10087be5 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10087be8 push eax */
  push32((uint32_t)(EAX));
  /* 10087be9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10087beb cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087bef sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10087bf2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10087bf4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10087bf6 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10087bf9 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10087bfb add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10087bfd push ecx */
  push32((uint32_t)(ECX));
  /* 10087bfe call 0x100899a6 */
  push32(0x10087c03u); f_100899a6();
  /* 10087c03 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10087c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10087c08 push eax */
  push32((uint32_t)(EAX));
  /* 10087c09 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10087c0c push esi */
  push32((uint32_t)(ESI));
  /* 10087c0d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10087c10 call 0x10087c1e */
  push32(0x10087c15u); f_10087c1e();
  /* 10087c15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10087c18 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087c1b pop esi */
  ESI = (pop32());
  /* 10087c1c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10087c1d ret  */
  ESPCHK(0x10087bbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10007c1e @ 0x10087c1e (194 bytes, 91 insns) */
void f_10087c1e(void) {
  FTRACE(0x10087c1eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087c1e push ebp */
  push32((uint32_t)(EBP));
  /* 10087c1f mov ebp, esp */
  EBP = (ESP);
  /* 10087c21 push ebx */
  push32((uint32_t)(EBX));
  /* 10087c22 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10087c24 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10087c27 push esi */
  push32((uint32_t)(ESI));
  /* 10087c28 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10087c2b push edi */
  push32((uint32_t)(EDI));
  /* 10087c2c mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10087c2f je 0x10087c4c */
  if (C.zf) goto L_10087c4c;
  /* 10087c31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10087c33 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087c36 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10087c39 push eax */
  push32((uint32_t)(EAX));
  /* 10087c3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10087c3c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087c3f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10087c42 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10087c44 push eax */
  push32((uint32_t)(EAX));
  /* 10087c45 call 0x10087ec0 */
  push32(0x10087c4au); f_10087ec0();
  /* 10087c4a pop ecx */
  ECX = (pop32());
  /* 10087c4b pop ecx */
  ECX = (pop32());
L_10087c4c:;
  /* 10087c4c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087c4f mov eax, edi */
  EAX = (EDI);
  /* 10087c51 jne 0x10087c59 */
  if (!C.zf) goto L_10087c59;
  /* 10087c53 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 10087c56 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_10087c59:;
  /* 10087c59 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087c5c jle 0x10087c70 */
  if ((C.zf||C.sf!=C.of)) goto L_10087c70;
  /* 10087c5e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10087c61 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10087c64 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10087c66 mov eax, ecx */
  EAX = (ECX);
  /* 10087c68 mov cl, byte ptr [0x10090c24] */
  CL = (r8((uint32_t)(0x10090c24)));
  /* 10087c6e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_10087c70:;
  /* 10087c70 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10087c72 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10087c75 push 0x1008e1a8 */
  push32((uint32_t)(0x1008e1a8u));
  /* 10087c7a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10087c7d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10087c7f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10087c82 push ecx */
  push32((uint32_t)(ECX));
  /* 10087c83 call 0x10089b30 */
  push32(0x10087c88u); f_10089b30();
  /* 10087c88 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087c8b pop ecx */
  ECX = (pop32());
  /* 10087c8c pop ecx */
  ECX = (pop32());
  /* 10087c8d mov ecx, eax */
  ECX = (EAX);
  /* 10087c8f je 0x10087c94 */
  if (C.zf) goto L_10087c94;
  /* 10087c91 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_10087c94:;
  /* 10087c94 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10087c97 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10087c98 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10087c9b je 0x10087cd9 */
  if (C.zf) goto L_10087cd9;
  /* 10087c9d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 10087ca0 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10087ca1 jns 0x10087ca8 */
  if (!C.sf) goto L_10087ca8;
  /* 10087ca3 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 10087ca5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_10087ca8:;
  /* 10087ca8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10087ca9 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087cac jl 0x10087cbf */
  if ((C.sf!=C.of)) goto L_10087cbf;
  /* 10087cae mov eax, ebx */
  EAX = (EBX);
  /* 10087cb0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10087cb2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10087cb3 pop esi */
  ESI = (pop32());
  /* 10087cb4 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10087cb6 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10087cb8 mov eax, ebx */
  EAX = (EBX);
  /* 10087cba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10087cbb idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10087cbd mov ebx, edx */
  EBX = (EDX);
L_10087cbf:;
  /* 10087cbf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10087cc0 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087cc3 jl 0x10087cd6 */
  if ((C.sf!=C.of)) goto L_10087cd6;
  /* 10087cc5 mov eax, ebx */
  EAX = (EBX);
  /* 10087cc7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10087cc9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10087cca pop esi */
  ESI = (pop32());
  /* 10087ccb idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10087ccd add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10087ccf mov eax, ebx */
  EAX = (EBX);
  /* 10087cd1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10087cd2 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10087cd4 mov ebx, edx */
  EBX = (EDX);
L_10087cd6:;
  /* 10087cd6 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_10087cd9:;
  /* 10087cd9 mov eax, edi */
  EAX = (EDI);
  /* 10087cdb pop edi */
  EDI = (pop32());
  /* 10087cdc pop esi */
  ESI = (pop32());
  /* 10087cdd pop ebx */
  EBX = (pop32());
  /* 10087cde pop ebp */
  EBP = (pop32());
  /* 10087cdf ret  */
  ESPCHK(0x10087c1eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x10087ce0 (85 bytes, 37 insns) */
void f_10087ce0(void) {
  FTRACE(0x10087ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10087ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10087ce3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087ce6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10087ce9 push esi */
  push32((uint32_t)(ESI));
  /* 10087cea push eax */
  push32((uint32_t)(EAX));
  /* 10087ceb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10087cee push eax */
  push32((uint32_t)(EAX));
  /* 10087cef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10087cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10087cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10087cf4 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10087cf6 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10087cf9 call 0x10089a1d */
  push32(0x10087cfeu); f_10089a1d();
  /* 10087cfe mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10087d01 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10087d04 push eax */
  push32((uint32_t)(EAX));
  /* 10087d05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10087d08 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10087d0a push eax */
  push32((uint32_t)(EAX));
  /* 10087d0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10087d0d cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087d11 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10087d14 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10087d17 push eax */
  push32((uint32_t)(EAX));
  /* 10087d18 call 0x100899a6 */
  push32(0x10087d1du); f_100899a6();
  /* 10087d1d lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10087d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10087d22 push eax */
  push32((uint32_t)(EAX));
  /* 10087d23 push esi */
  push32((uint32_t)(ESI));
  /* 10087d24 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10087d27 call 0x10087d35 */
  push32(0x10087d2cu); f_10087d35();
  /* 10087d2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10087d2f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087d32 pop esi */
  ESI = (pop32());
  /* 10087d33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10087d34 ret  */
  ESPCHK(0x10087ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d35 @ 0x10087d35 (167 bytes, 73 insns) */
void f_10087d35(void) {
  FTRACE(0x10087d35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087d35 push ebp */
  push32((uint32_t)(EBP));
  /* 10087d36 mov ebp, esp */
  EBP = (ESP);
  /* 10087d38 push ebx */
  push32((uint32_t)(EBX));
  /* 10087d39 push esi */
  push32((uint32_t)(ESI));
  /* 10087d3a mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10087d3d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10087d40 push edi */
  push32((uint32_t)(EDI));
  /* 10087d41 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10087d44 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10087d45 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10087d49 je 0x10087d65 */
  if (C.zf) goto L_10087d65;
  /* 10087d4b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087d4e jne 0x10087d65 */
  if (!C.zf) goto L_10087d65;
  /* 10087d50 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10087d52 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087d55 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10087d58 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10087d5a add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10087d5c mov eax, ecx */
  EAX = (ECX);
  /* 10087d5e mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10087d61 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_10087d65:;
  /* 10087d65 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087d68 mov edi, ebx */
  EDI = (EBX);
  /* 10087d6a jne 0x10087d72 */
  if (!C.zf) goto L_10087d72;
  /* 10087d6c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 10087d6f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_10087d72:;
  /* 10087d72 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10087d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087d77 jg 0x10087d89 */
  if ((!C.zf&&C.sf==C.of)) goto L_10087d89;
  /* 10087d79 push 1 */
  push32((uint32_t)(0x1u));
  /* 10087d7b push edi */
  push32((uint32_t)(EDI));
  /* 10087d7c call 0x10087ec0 */
  push32(0x10087d81u); f_10087ec0();
  /* 10087d81 pop ecx */
  ECX = (pop32());
  /* 10087d82 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 10087d85 pop ecx */
  ECX = (pop32());
  /* 10087d86 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10087d87 jmp 0x10087d8b */
  goto L_10087d8b;
L_10087d89:;
  /* 10087d89 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10087d8b:;
  /* 10087d8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087d8f jle 0x10087dd5 */
  if ((C.zf||C.sf!=C.of)) goto L_10087dd5;
  /* 10087d91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10087d93 push edi */
  push32((uint32_t)(EDI));
  /* 10087d94 call 0x10087ec0 */
  push32(0x10087d99u); f_10087ec0();
  /* 10087d99 mov al, byte ptr [0x10090c24] */
  AL = (r8((uint32_t)(0x10090c24)));
  /* 10087d9e pop ecx */
  ECX = (pop32());
  /* 10087d9f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10087da1 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10087da4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10087da5 pop ecx */
  ECX = (pop32());
  /* 10087da6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10087da8 jge 0x10087dd5 */
  if ((C.sf==C.of)) goto L_10087dd5;
  /* 10087daa cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10087dae je 0x10087db4 */
  if (C.zf) goto L_10087db4;
  /* 10087db0 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10087db2 jmp 0x10087dbb */
  goto L_10087dbb;
L_10087db4:;
  /* 10087db4 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10087db6 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087db9 jl 0x10087dbe */
  if ((C.sf!=C.of)) goto L_10087dbe;
L_10087dbb:;
  /* 10087dbb mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10087dbe:;
  /* 10087dbe push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10087dc1 push edi */
  push32((uint32_t)(EDI));
  /* 10087dc2 call 0x10087ec0 */
  push32(0x10087dc7u); f_10087ec0();
  /* 10087dc7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10087dca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10087dcc push edi */
  push32((uint32_t)(EDI));
  /* 10087dcd call 0x10089c20 */
  push32(0x10087dd2u); f_10089c20();
  /* 10087dd2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10087dd5:;
  /* 10087dd5 pop edi */
  EDI = (pop32());
  /* 10087dd6 mov eax, ebx */
  EAX = (EBX);
  /* 10087dd8 pop esi */
  ESI = (pop32());
  /* 10087dd9 pop ebx */
  EBX = (pop32());
  /* 10087dda pop ebp */
  EBP = (pop32());
  /* 10087ddb ret  */
  ESPCHK(0x10087d35u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ddc @ 0x10087ddc (147 bytes, 66 insns) */
void f_10087ddc(void) {
  FTRACE(0x10087ddcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087ddc push ebp */
  push32((uint32_t)(EBP));
  /* 10087ddd mov ebp, esp */
  EBP = (ESP);
  /* 10087ddf sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087de2 push ebx */
  push32((uint32_t)(EBX));
  /* 10087de3 push esi */
  push32((uint32_t)(ESI));
  /* 10087de4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10087de7 push edi */
  push32((uint32_t)(EDI));
  /* 10087de8 push eax */
  push32((uint32_t)(EAX));
  /* 10087de9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10087dec push eax */
  push32((uint32_t)(EAX));
  /* 10087ded mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10087df0 push ecx */
  push32((uint32_t)(ECX));
  /* 10087df1 push ecx */
  push32((uint32_t)(ECX));
  /* 10087df2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10087df4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10087df7 call 0x10089a1d */
  push32(0x10087dfcu); f_10089a1d();
  /* 10087dfc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10087dff mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10087e02 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 10087e05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10087e07 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087e0b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10087e0e add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10087e11 mov edi, eax */
  EDI = (EAX);
  /* 10087e13 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10087e16 push eax */
  push32((uint32_t)(EAX));
  /* 10087e17 push ebx */
  push32((uint32_t)(EBX));
  /* 10087e18 push edi */
  push32((uint32_t)(EDI));
  /* 10087e19 call 0x100899a6 */
  push32(0x10087e1eu); f_100899a6();
  /* 10087e1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10087e21 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087e24 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10087e25 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087e27 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10087e2a cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087e2d jl 0x10087e55 */
  if ((C.sf!=C.of)) goto L_10087e55;
  /* 10087e2f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087e31 jge 0x10087e55 */
  if ((C.sf==C.of)) goto L_10087e55;
  /* 10087e33 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10087e35 je 0x10087e41 */
  if (C.zf) goto L_10087e41;
L_10087e37:;
  /* 10087e37 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10087e39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10087e3a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10087e3c jne 0x10087e37 */
  if (!C.zf) goto L_10087e37;
  /* 10087e3e and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_10087e41:;
  /* 10087e41 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10087e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10087e46 push eax */
  push32((uint32_t)(EAX));
  /* 10087e47 push ebx */
  push32((uint32_t)(EBX));
  /* 10087e48 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10087e4b call 0x10087d35 */
  push32(0x10087e50u); f_10087d35();
  /* 10087e50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087e53 jmp 0x10087e6a */
  goto L_10087e6a;
L_10087e55:;
  /* 10087e55 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10087e58 push 1 */
  push32((uint32_t)(0x1u));
  /* 10087e5a push eax */
  push32((uint32_t)(EAX));
  /* 10087e5b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10087e5e push ebx */
  push32((uint32_t)(EBX));
  /* 10087e5f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10087e62 call 0x10087c1e */
  push32(0x10087e67u); f_10087c1e();
  /* 10087e67 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10087e6a:;
  /* 10087e6a pop edi */
  EDI = (pop32());
  /* 10087e6b pop esi */
  ESI = (pop32());
  /* 10087e6c pop ebx */
  EBX = (pop32());
  /* 10087e6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10087e6e ret  */
  ESPCHK(0x10087ddcu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10087e6f (81 bytes, 29 insns) */
void f_10087e6f(void) {
  FTRACE(0x10087e6fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087e6f push ebp */
  push32((uint32_t)(EBP));
  /* 10087e70 mov ebp, esp */
  EBP = (ESP);
  /* 10087e72 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087e76 je 0x10087eaa */
  if (C.zf) goto L_10087eaa;
  /* 10087e78 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087e7c je 0x10087eaa */
  if (C.zf) goto L_10087eaa;
  /* 10087e7e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087e82 jne 0x10087e97 */
  if (!C.zf) goto L_10087e97;
  /* 10087e84 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10087e87 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10087e8a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10087e8d call 0x10087ce0 */
  push32(0x10087e92u); f_10087ce0();
  /* 10087e92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087e95 pop ebp */
  EBP = (pop32());
  /* 10087e96 ret  */
  ESPCHK(0x10087e6fu, _esp0);
  ESP += 4; return;
L_10087e97:;
  /* 10087e97 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10087e9a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10087e9d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10087ea0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10087ea3 call 0x10087ddc */
  push32(0x10087ea8u); f_10087ddc();
  /* 10087ea8 jmp 0x10087ebb */
  goto L_10087ebb;
L_10087eaa:;
  /* 10087eaa push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10087ead push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10087eb0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10087eb3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10087eb6 call 0x10087bbd */
  push32(0x10087ebbu); f_10087bbd();
L_10087ebb:;
  /* 10087ebb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087ebe pop ebp */
  EBP = (pop32());
  /* 10087ebf ret  */
  ESPCHK(0x10087e6fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec0 @ 0x10087ec0 (37 bytes, 18 insns) */
void f_10087ec0(void) {
  FTRACE(0x10087ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087ec0 push edi */
  push32((uint32_t)(EDI));
  /* 10087ec1 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10087ec5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10087ec7 je 0x10087ee3 */
  if (C.zf) goto L_10087ee3;
  /* 10087ec9 push esi */
  push32((uint32_t)(ESI));
  /* 10087eca mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10087ece push esi */
  push32((uint32_t)(ESI));
  /* 10087ecf call 0x10089080 */
  push32(0x10087ed4u); f_10089080();
  /* 10087ed4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10087ed5 push eax */
  push32((uint32_t)(EAX));
  /* 10087ed6 push esi */
  push32((uint32_t)(ESI));
  /* 10087ed7 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10087ed9 push esi */
  push32((uint32_t)(ESI));
  /* 10087eda call 0x10089c80 */
  push32(0x10087edfu); f_10089c80();
  /* 10087edf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087ee2 pop esi */
  ESI = (pop32());
L_10087ee3:;
  /* 10087ee3 pop edi */
  EDI = (pop32());
  /* 10087ee4 ret  */
  ESPCHK(0x10087ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee5 @ 0x10087ee5 (45 bytes, 12 insns) */
void f_10087ee5(void) {
  FTRACE(0x10087ee5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087ee5 mov eax, dword ptr [0x1009069c] */
  EAX = (r32((uint32_t)(0x1009069c)));
  /* 10087eea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087eec je 0x10087ef0 */
  if (C.zf) goto L_10087ef0;
  /* 10087eee call eax */
  call_ind((uint32_t)(EAX), 0x10087ef0u);
L_10087ef0:;
  /* 10087ef0 push 0x1008f014 */
  push32((uint32_t)(0x1008f014u));
  /* 10087ef5 push 0x1008f008 */
  push32((uint32_t)(0x1008f008u));
  /* 10087efa call 0x10087fe9 */
  push32(0x10087effu); f_10087fe9();
  /* 10087eff push 0x1008f004 */
  push32((uint32_t)(0x1008f004u));
  /* 10087f04 push 0x1008f000 */
  push32((uint32_t)(0x1008f000u));
  /* 10087f09 call 0x10087fe9 */
  push32(0x10087f0eu); f_10087fe9();
  /* 10087f0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087f11 ret  */
  ESPCHK(0x10087ee5u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10087f12 (17 bytes, 6 insns) */
void f_10087f12(void) {
  FTRACE(0x10087f12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087f12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10087f14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10087f16 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10087f1a call 0x10087f32 */
  push32(0x10087f1fu); f_10087f32();
  /* 10087f1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087f22 ret  */
  ESPCHK(0x10087f12u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f23 @ 0x10087f23 (15 bytes, 6 insns) */
void f_10087f23(void) {
  FTRACE(0x10087f23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087f23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10087f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10087f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10087f29 call 0x10087f32 */
  push32(0x10087f2eu); f_10087f32();
  /* 10087f2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10087f31 ret  */
  ESPCHK(0x10087f23u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f32 @ 0x10087f32 (163 bytes, 53 insns) */
void f_10087f32(void) {
  FTRACE(0x10087f32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087f32 push edi */
  push32((uint32_t)(EDI));
  /* 10087f33 call 0x10087fd7 */
  push32(0x10087f38u); f_10087fd7();
  /* 10087f38 push 1 */
  push32((uint32_t)(0x1u));
  /* 10087f3a pop edi */
  EDI = (pop32());
  /* 10087f3b cmp dword ptr [0x100966d8], edi */
  { uint32_t _a=(r32((uint32_t)(0x100966d8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087f41 jne 0x10087f54 */
  if (!C.zf) goto L_10087f54;
  /* 10087f43 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10087f47 call dword ptr [0x1008e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e020))), 0x10087f4du);
  /* 10087f4d push eax */
  push32((uint32_t)(EAX));
  /* 10087f4e call dword ptr [0x1008e01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e01c))), 0x10087f54u);
L_10087f54:;
  /* 10087f54 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087f59 push ebx */
  push32((uint32_t)(EBX));
  /* 10087f5a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10087f5e mov dword ptr [0x100966d4], edi */
  w32((uint32_t)(0x100966d4), (EDI));
  /* 10087f64 mov byte ptr [0x100966d0], bl */
  w8((uint32_t)(0x100966d0), (BL));
  /* 10087f6a jne 0x10087fa8 */
  if (!C.zf) goto L_10087fa8;
  /* 10087f6c mov eax, dword ptr [0x10097d90] */
  EAX = (r32((uint32_t)(0x10097d90)));
  /* 10087f71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087f73 je 0x10087f97 */
  if (C.zf) goto L_10087f97;
  /* 10087f75 mov ecx, dword ptr [0x10097d8c] */
  ECX = (r32((uint32_t)(0x10097d8c)));
  /* 10087f7b push esi */
  push32((uint32_t)(ESI));
  /* 10087f7c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10087f7f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087f81 jb 0x10087f96 */
  if (C.cf) goto L_10087f96;
L_10087f83:;
  /* 10087f83 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10087f85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087f87 je 0x10087f8b */
  if (C.zf) goto L_10087f8b;
  /* 10087f89 call eax */
  call_ind((uint32_t)(EAX), 0x10087f8bu);
L_10087f8b:;
  /* 10087f8b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10087f8e cmp esi, dword ptr [0x10097d90] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10097d90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087f94 jae 0x10087f83 */
  if (!C.cf) goto L_10087f83;
L_10087f96:;
  /* 10087f96 pop esi */
  ESI = (pop32());
L_10087f97:;
  /* 10087f97 push 0x1008f020 */
  push32((uint32_t)(0x1008f020u));
  /* 10087f9c push 0x1008f018 */
  push32((uint32_t)(0x1008f018u));
  /* 10087fa1 call 0x10087fe9 */
  push32(0x10087fa6u); f_10087fe9();
  /* 10087fa6 pop ecx */
  ECX = (pop32());
  /* 10087fa7 pop ecx */
  ECX = (pop32());
L_10087fa8:;
  /* 10087fa8 push 0x1008f028 */
  push32((uint32_t)(0x1008f028u));
  /* 10087fad push 0x1008f024 */
  push32((uint32_t)(0x1008f024u));
  /* 10087fb2 call 0x10087fe9 */
  push32(0x10087fb7u); f_10087fe9();
  /* 10087fb7 pop ecx */
  ECX = (pop32());
  /* 10087fb8 pop ecx */
  ECX = (pop32());
  /* 10087fb9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10087fbb pop ebx */
  EBX = (pop32());
  /* 10087fbc je 0x10087fc5 */
  if (C.zf) goto L_10087fc5;
  /* 10087fbe call 0x10087fe0 */
  push32(0x10087fc3u); f_10087fe0();
  /* 10087fc3 pop edi */
  EDI = (pop32());
  /* 10087fc4 ret  */
  ESPCHK(0x10087f32u, _esp0);
  ESP += 4; return;
L_10087fc5:;
  /* 10087fc5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10087fc9 mov dword ptr [0x100966d8], edi */
  w32((uint32_t)(0x100966d8), (EDI));
  /* 10087fcf call dword ptr [0x1008e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e018))), 0x10087fd5u);
  /* 10087fd5 pop edi */
  EDI = (pop32());
  /* 10087fd6 ret  */
  ESPCHK(0x10087f32u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fd7 @ 0x10087fd7 (9 bytes, 4 insns) */
void f_10087fd7(void) {
  FTRACE(0x10087fd7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087fd7 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10087fd9 call 0x1008a053 */
  push32(0x10087fdeu); f_1008a053();
  /* 10087fde pop ecx */
  ECX = (pop32());
  /* 10087fdf ret  */
  ESPCHK(0x10087fd7u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fe0 @ 0x10087fe0 (9 bytes, 4 insns) */
void f_10087fe0(void) {
  FTRACE(0x10087fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087fe0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10087fe2 call 0x1008a0b4 */
  push32(0x10087fe7u); f_1008a0b4();
  /* 10087fe7 pop ecx */
  ECX = (pop32());
  /* 10087fe8 ret  */
  ESPCHK(0x10087fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fe9 @ 0x10087fe9 (26 bytes, 12 insns) */
void f_10087fe9(void) {
  FTRACE(0x10087fe9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10087fe9 push esi */
  push32((uint32_t)(ESI));
  /* 10087fea mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10087fee:;
  /* 10087fee cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10087ff2 jae 0x10088001 */
  if (!C.cf) goto L_10088001;
  /* 10087ff4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10087ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10087ff8 je 0x10087ffc */
  if (C.zf) goto L_10087ffc;
  /* 10087ffa call eax */
  call_ind((uint32_t)(EAX), 0x10087ffcu);
L_10087ffc:;
  /* 10087ffc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10087fff jmp 0x10087fee */
  goto L_10087fee;
L_10088001:;
  /* 10088001 pop esi */
  ESI = (pop32());
  /* 10088002 ret  */
  ESPCHK(0x10087fe9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008003 @ 0x10088003 (84 bytes, 32 insns) */
void f_10088003(void) {
  FTRACE(0x10088003u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088003 push esi */
  push32((uint32_t)(ESI));
  /* 10088004 call 0x10089fbe */
  push32(0x10088009u); f_10089fbe();
  /* 10088009 call dword ptr [0x1008e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e02c))), 0x1008800fu);
  /* 1008800f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088012 mov dword ptr [0x100906cc], eax */
  w32((uint32_t)(0x100906cc), (EAX));
  /* 10088017 je 0x10088053 */
  if (C.zf) goto L_10088053;
  /* 10088019 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1008801b push 1 */
  push32((uint32_t)(0x1u));
  /* 1008801d call 0x1008a0c9 */
  push32(0x10088022u); f_1008a0c9();
  /* 10088022 mov esi, eax */
  ESI = (EAX);
  /* 10088024 pop ecx */
  ECX = (pop32());
  /* 10088025 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10088027 pop ecx */
  ECX = (pop32());
  /* 10088028 je 0x10088053 */
  if (C.zf) goto L_10088053;
  /* 1008802a push esi */
  push32((uint32_t)(ESI));
  /* 1008802b push dword ptr [0x100906cc] */
  push32((uint32_t)(r32((uint32_t)(0x100906cc))));
  /* 10088031 call dword ptr [0x1008e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e028))), 0x10088037u);
  /* 10088037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088039 je 0x10088053 */
  if (C.zf) goto L_10088053;
  /* 1008803b push esi */
  push32((uint32_t)(ESI));
  /* 1008803c call 0x10088075 */
  push32(0x10088041u); f_10088075();
  /* 10088041 pop ecx */
  ECX = (pop32());
  /* 10088042 call dword ptr [0x1008e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e024))), 0x10088048u);
  /* 10088048 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1008804c push 1 */
  push32((uint32_t)(0x1u));
  /* 1008804e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10088050 pop eax */
  EAX = (pop32());
  /* 10088051 pop esi */
  ESI = (pop32());
  /* 10088052 ret  */
  ESPCHK(0x10088003u, _esp0);
  ESP += 4; return;
L_10088053:;
  /* 10088053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10088055 pop esi */
  ESI = (pop32());
  /* 10088056 ret  */
  ESPCHK(0x10088003u, _esp0);
  ESP += 4; return;
}

/* FUN_10008057 @ 0x10088057 (30 bytes, 8 insns) */
void f_10088057(void) {
  FTRACE(0x10088057u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088057 call 0x10089fe7 */
  push32(0x1008805cu); f_10089fe7();
  /* 1008805c mov eax, dword ptr [0x100906cc] */
  EAX = (r32((uint32_t)(0x100906cc)));
  /* 10088061 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088064 je 0x10088074 */
  if (C.zf) goto L_10088074;
  /* 10088066 push eax */
  push32((uint32_t)(EAX));
  /* 10088067 call dword ptr [0x1008e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e030))), 0x1008806du);
  /* 1008806d or dword ptr [0x100906cc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x100906cc)))|(0xffffffffu); w32((uint32_t)(0x100906cc), (_r)); fl_logic(_r,32); }
L_10088074:;
  /* 10088074 ret  */
  ESPCHK(0x10088057u, _esp0);
  ESP += 4; return;
}

/* FUN_10008075 @ 0x10088075 (19 bytes, 4 insns) */
void f_10088075(void) {
  FTRACE(0x10088075u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088075 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10088079 mov dword ptr [eax + 0x50], 0x10090d20 */
  w32((uint32_t)(EAX + 0x50), (0x10090d20u));
  /* 10088080 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10088087 ret  */
  ESPCHK(0x10088075u, _esp0);
  ESP += 4; return;
}

/* FUN_10008088 @ 0x10088088 (103 bytes, 38 insns) */
void f_10088088(void) {
  FTRACE(0x10088088u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088088 push esi */
  push32((uint32_t)(ESI));
  /* 10088089 push edi */
  push32((uint32_t)(EDI));
  /* 1008808a call dword ptr [0x1008e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e03c))), 0x10088090u);
  /* 10088090 push dword ptr [0x100906cc] */
  push32((uint32_t)(r32((uint32_t)(0x100906cc))));
  /* 10088096 mov edi, eax */
  EDI = (EAX);
  /* 10088098 call dword ptr [0x1008e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e038))), 0x1008809eu);
  /* 1008809e mov esi, eax */
  ESI = (EAX);
  /* 100880a0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100880a2 jne 0x100880e3 */
  if (!C.zf) goto L_100880e3;
  /* 100880a4 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 100880a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100880a8 call 0x1008a0c9 */
  push32(0x100880adu); f_1008a0c9();
  /* 100880ad mov esi, eax */
  ESI = (EAX);
  /* 100880af pop ecx */
  ECX = (pop32());
  /* 100880b0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100880b2 pop ecx */
  ECX = (pop32());
  /* 100880b3 je 0x100880db */
  if (C.zf) goto L_100880db;
  /* 100880b5 push esi */
  push32((uint32_t)(ESI));
  /* 100880b6 push dword ptr [0x100906cc] */
  push32((uint32_t)(r32((uint32_t)(0x100906cc))));
  /* 100880bc call dword ptr [0x1008e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e028))), 0x100880c2u);
  /* 100880c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100880c4 je 0x100880db */
  if (C.zf) goto L_100880db;
  /* 100880c6 push esi */
  push32((uint32_t)(ESI));
  /* 100880c7 call 0x10088075 */
  push32(0x100880ccu); f_10088075();
  /* 100880cc pop ecx */
  ECX = (pop32());
  /* 100880cd call dword ptr [0x1008e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e024))), 0x100880d3u);
  /* 100880d3 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100880d7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100880d9 jmp 0x100880e3 */
  goto L_100880e3;
L_100880db:;
  /* 100880db push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100880dd call 0x100870f1 */
  push32(0x100880e2u); f_100870f1();
  /* 100880e2 pop ecx */
  ECX = (pop32());
L_100880e3:;
  /* 100880e3 push edi */
  push32((uint32_t)(EDI));
  /* 100880e4 call dword ptr [0x1008e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e034))), 0x100880eau);
  /* 100880ea mov eax, esi */
  EAX = (ESI);
  /* 100880ec pop edi */
  EDI = (pop32());
  /* 100880ed pop esi */
  ESI = (pop32());
  /* 100880ee ret  */
  ESPCHK(0x10088088u, _esp0);
  ESP += 4; return;
}

/* FUN_100080ef @ 0x100880ef (160 bytes, 62 insns) */
void f_100880ef(void) {
  FTRACE(0x100880efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100880ef mov eax, dword ptr [0x100906cc] */
  EAX = (r32((uint32_t)(0x100906cc)));
  /* 100880f4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100880f7 je 0x1008818e */
  if (C.zf) goto L_1008818e;
  /* 100880fd push esi */
  push32((uint32_t)(ESI));
  /* 100880fe mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10088102 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10088104 jne 0x10088113 */
  if (!C.zf) goto L_10088113;
  /* 10088106 push eax */
  push32((uint32_t)(EAX));
  /* 10088107 call dword ptr [0x1008e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e038))), 0x1008810du);
  /* 1008810d mov esi, eax */
  ESI = (EAX);
  /* 1008810f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10088111 je 0x1008817f */
  if (C.zf) goto L_1008817f;
L_10088113:;
  /* 10088113 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10088116 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088118 je 0x10088121 */
  if (C.zf) goto L_10088121;
  /* 1008811a push eax */
  push32((uint32_t)(EAX));
  /* 1008811b call 0x1008a206 */
  push32(0x10088120u); f_1008a206();
  /* 10088120 pop ecx */
  ECX = (pop32());
L_10088121:;
  /* 10088121 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10088124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088126 je 0x1008812f */
  if (C.zf) goto L_1008812f;
  /* 10088128 push eax */
  push32((uint32_t)(EAX));
  /* 10088129 call 0x1008a206 */
  push32(0x1008812eu); f_1008a206();
  /* 1008812e pop ecx */
  ECX = (pop32());
L_1008812f:;
  /* 1008812f mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10088132 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088134 je 0x1008813d */
  if (C.zf) goto L_1008813d;
  /* 10088136 push eax */
  push32((uint32_t)(EAX));
  /* 10088137 call 0x1008a206 */
  push32(0x1008813cu); f_1008a206();
  /* 1008813c pop ecx */
  ECX = (pop32());
L_1008813d:;
  /* 1008813d mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10088140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088142 je 0x1008814b */
  if (C.zf) goto L_1008814b;
  /* 10088144 push eax */
  push32((uint32_t)(EAX));
  /* 10088145 call 0x1008a206 */
  push32(0x1008814au); f_1008a206();
  /* 1008814a pop ecx */
  ECX = (pop32());
L_1008814b:;
  /* 1008814b mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1008814e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088150 je 0x10088159 */
  if (C.zf) goto L_10088159;
  /* 10088152 push eax */
  push32((uint32_t)(EAX));
  /* 10088153 call 0x1008a206 */
  push32(0x10088158u); f_1008a206();
  /* 10088158 pop ecx */
  ECX = (pop32());
L_10088159:;
  /* 10088159 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 1008815c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008815e je 0x10088167 */
  if (C.zf) goto L_10088167;
  /* 10088160 push eax */
  push32((uint32_t)(EAX));
  /* 10088161 call 0x1008a206 */
  push32(0x10088166u); f_1008a206();
  /* 10088166 pop ecx */
  ECX = (pop32());
L_10088167:;
  /* 10088167 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1008816a cmp eax, 0x10090d20 */
  { uint32_t _a=(EAX),_b=(0x10090d20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008816f je 0x10088178 */
  if (C.zf) goto L_10088178;
  /* 10088171 push eax */
  push32((uint32_t)(EAX));
  /* 10088172 call 0x1008a206 */
  push32(0x10088177u); f_1008a206();
  /* 10088177 pop ecx */
  ECX = (pop32());
L_10088178:;
  /* 10088178 push esi */
  push32((uint32_t)(ESI));
  /* 10088179 call 0x1008a206 */
  push32(0x1008817eu); f_1008a206();
  /* 1008817e pop ecx */
  ECX = (pop32());
L_1008817f:;
  /* 1008817f push 0 */
  push32((uint32_t)(0x0u));
  /* 10088181 push dword ptr [0x100906cc] */
  push32((uint32_t)(r32((uint32_t)(0x100906cc))));
  /* 10088187 call dword ptr [0x1008e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e028))), 0x1008818du);
  /* 1008818d pop esi */
  ESI = (pop32());
L_1008818e:;
  /* 1008818e ret  */
  ESPCHK(0x100880efu, _esp0);
  ESP += 4; return;
}

/* FUN_1000818f @ 0x1008818f (444 bytes, 150 insns) */
void f_1008818f(void) {
  FTRACE(0x1008818fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008818f push ebp */
  push32((uint32_t)(EBP));
  /* 10088190 mov ebp, esp */
  EBP = (ESP);
  /* 10088192 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10088195 push ebx */
  push32((uint32_t)(EBX));
  /* 10088196 push esi */
  push32((uint32_t)(ESI));
  /* 10088197 push edi */
  push32((uint32_t)(EDI));
  /* 10088198 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1008819d call 0x1008a2ef */
  push32(0x100881a2u); f_1008a2ef();
  /* 100881a2 mov esi, eax */
  ESI = (EAX);
  /* 100881a4 pop ecx */
  ECX = (pop32());
  /* 100881a5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100881a7 jne 0x100881b1 */
  if (!C.zf) goto L_100881b1;
  /* 100881a9 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100881ab call 0x100870f1 */
  push32(0x100881b0u); f_100870f1();
  /* 100881b0 pop ecx */
  ECX = (pop32());
L_100881b1:;
  /* 100881b1 mov dword ptr [0x10097c80], esi */
  w32((uint32_t)(0x10097c80), (ESI));
  /* 100881b7 mov dword ptr [0x10097d80], 0x20 */
  w32((uint32_t)(0x10097d80), (0x20u));
  /* 100881c1 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_100881c7:;
  /* 100881c7 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100881c9 jae 0x100881e9 */
  if (!C.cf) goto L_100881e9;
  /* 100881cb and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100881cf or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100881d2 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 100881d6 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 100881da mov eax, dword ptr [0x10097c80] */
  EAX = (r32((uint32_t)(0x10097c80)));
  /* 100881df add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100881e2 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100881e7 jmp 0x100881c7 */
  goto L_100881c7;
L_100881e9:;
  /* 100881e9 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 100881ec push eax */
  push32((uint32_t)(EAX));
  /* 100881ed call dword ptr [0x1008e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e04c))), 0x100881f3u);
  /* 100881f3 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100881f8 je 0x100882cf */
  if (C.zf) goto L_100882cf;
  /* 100881fe mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10088201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088203 je 0x100882cf */
  if (C.zf) goto L_100882cf;
  /* 10088209 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 1008820b lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 1008820e lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10088211 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10088214 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10088219 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008821b jl 0x1008821f */
  if ((C.sf!=C.of)) goto L_1008821f;
  /* 1008821d mov edi, eax */
  EDI = (EAX);
L_1008821f:;
  /* 1008821f cmp dword ptr [0x10097d80], edi */
  { uint32_t _a=(r32((uint32_t)(0x10097d80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088225 jge 0x1008827d */
  if ((C.sf==C.of)) goto L_1008827d;
  /* 10088227 mov esi, 0x10097c84 */
  ESI = (0x10097c84u);
L_1008822c:;
  /* 1008822c push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10088231 call 0x1008a2ef */
  push32(0x10088236u); f_1008a2ef();
  /* 10088236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088238 pop ecx */
  ECX = (pop32());
  /* 10088239 je 0x10088277 */
  if (C.zf) goto L_10088277;
  /* 1008823b add dword ptr [0x10097d80], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10097d80))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10097d80), (_r)); fl_add(_a,_b,_r,32); }
  /* 10088242 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10088244 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_1008824a:;
  /* 1008824a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008824c jae 0x1008826a */
  if (!C.cf) goto L_1008826a;
  /* 1008824e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10088252 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10088255 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10088259 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1008825d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1008825f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10088262 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10088268 jmp 0x1008824a */
  goto L_1008824a;
L_1008826a:;
  /* 1008826a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008826d cmp dword ptr [0x10097d80], edi */
  { uint32_t _a=(r32((uint32_t)(0x10097d80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088273 jl 0x1008822c */
  if ((C.sf!=C.of)) goto L_1008822c;
  /* 10088275 jmp 0x1008827d */
  goto L_1008827d;
L_10088277:;
  /* 10088277 mov edi, dword ptr [0x10097d80] */
  EDI = (r32((uint32_t)(0x10097d80)));
L_1008827d:;
  /* 1008827d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1008827f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10088281 jle 0x100882cf */
  if ((C.zf||C.sf!=C.of)) goto L_100882cf;
L_10088283:;
  /* 10088283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10088286 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10088288 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008828b je 0x100882c5 */
  if (C.zf) goto L_100882c5;
  /* 1008828d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1008828f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10088291 je 0x100882c5 */
  if (C.zf) goto L_100882c5;
  /* 10088293 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10088295 jne 0x100882a2 */
  if (!C.zf) goto L_100882a2;
  /* 10088297 push ecx */
  push32((uint32_t)(ECX));
  /* 10088298 call dword ptr [0x1008e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e048))), 0x1008829eu);
  /* 1008829e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100882a0 je 0x100882c5 */
  if (C.zf) goto L_100882c5;
L_100882a2:;
  /* 100882a2 mov ecx, esi */
  ECX = (ESI);
  /* 100882a4 mov eax, esi */
  EAX = (ESI);
  /* 100882a6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100882a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100882ac mov ecx, dword ptr [ecx*4 + 0x10097c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10097c80)));
  /* 100882b3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100882b6 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100882b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100882bc mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 100882be mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100882c0 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 100882c2 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_100882c5:;
  /* 100882c5 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100882c9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100882ca inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100882cb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100882cd jl 0x10088283 */
  if ((C.sf!=C.of)) goto L_10088283;
L_100882cf:;
  /* 100882cf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100882d1:;
  /* 100882d1 mov ecx, dword ptr [0x10097c80] */
  ECX = (r32((uint32_t)(0x10097c80)));
  /* 100882d7 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 100882da cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100882de lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 100882e1 jne 0x10088330 */
  if (!C.zf) goto L_10088330;
  /* 100882e3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100882e5 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 100882e9 jne 0x100882f0 */
  if (!C.zf) goto L_100882f0;
  /* 100882eb push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 100882ed pop eax */
  EAX = (pop32());
  /* 100882ee jmp 0x100882fa */
  goto L_100882fa;
L_100882f0:;
  /* 100882f0 mov eax, ebx */
  EAX = (EBX);
  /* 100882f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100882f3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100882f5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100882f7 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100882fa:;
  /* 100882fa push eax */
  push32((uint32_t)(EAX));
  /* 100882fb call dword ptr [0x1008e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e044))), 0x10088301u);
  /* 10088301 mov edi, eax */
  EDI = (EAX);
  /* 10088303 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088306 je 0x1008831f */
  if (C.zf) goto L_1008831f;
  /* 10088308 push edi */
  push32((uint32_t)(EDI));
  /* 10088309 call dword ptr [0x1008e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e048))), 0x1008830fu);
  /* 1008830f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088311 je 0x1008831f */
  if (C.zf) goto L_1008831f;
  /* 10088313 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10088318 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1008831a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008831d jne 0x10088325 */
  if (!C.zf) goto L_10088325;
L_1008831f:;
  /* 1008831f or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10088323 jmp 0x10088334 */
  goto L_10088334;
L_10088325:;
  /* 10088325 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088328 jne 0x10088334 */
  if (!C.zf) goto L_10088334;
  /* 1008832a or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1008832e jmp 0x10088334 */
  goto L_10088334;
L_10088330:;
  /* 10088330 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10088334:;
  /* 10088334 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10088335 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088338 jl 0x100882d1 */
  if ((C.sf!=C.of)) goto L_100882d1;
  /* 1008833a push dword ptr [0x10097d80] */
  push32((uint32_t)(r32((uint32_t)(0x10097d80))));
  /* 10088340 call dword ptr [0x1008e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e040))), 0x10088346u);
  /* 10088346 pop edi */
  EDI = (pop32());
  /* 10088347 pop esi */
  ESI = (pop32());
  /* 10088348 pop ebx */
  EBX = (pop32());
  /* 10088349 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008834a ret  */
  ESPCHK(0x1008818fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000834b @ 0x1008834b (84 bytes, 33 insns) */
void f_1008834b(void) {
  FTRACE(0x1008834bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008834b push ebx */
  push32((uint32_t)(EBX));
  /* 1008834c push esi */
  push32((uint32_t)(ESI));
  /* 1008834d push edi */
  push32((uint32_t)(EDI));
  /* 1008834e mov esi, 0x10097c80 */
  ESI = (0x10097c80u);
L_10088353:;
  /* 10088353 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10088355 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088357 je 0x10088390 */
  if (C.zf) goto L_10088390;
  /* 10088359 mov edi, eax */
  EDI = (EAX);
  /* 1008835b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10088360 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088362 jae 0x10088385 */
  if (!C.cf) goto L_10088385;
  /* 10088364 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10088367:;
  /* 10088367 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008836b je 0x10088374 */
  if (C.zf) goto L_10088374;
  /* 1008836d push ebx */
  push32((uint32_t)(EBX));
  /* 1008836e call dword ptr [0x1008e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e050))), 0x10088374u);
L_10088374:;
  /* 10088374 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10088376 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10088379 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008837e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10088381 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088383 jb 0x10088367 */
  if (C.cf) goto L_10088367;
L_10088385:;
  /* 10088385 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10088387 call 0x1008a206 */
  push32(0x1008838cu); f_1008a206();
  /* 1008838c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1008838f pop ecx */
  ECX = (pop32());
L_10088390:;
  /* 10088390 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10088393 cmp esi, 0x10097d80 */
  { uint32_t _a=(ESI),_b=(0x10097d80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088399 jl 0x10088353 */
  if ((C.sf!=C.of)) goto L_10088353;
  /* 1008839b pop edi */
  EDI = (pop32());
  /* 1008839c pop esi */
  ESI = (pop32());
  /* 1008839d pop ebx */
  EBX = (pop32());
  /* 1008839e ret  */
  ESPCHK(0x1008834bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000839f @ 0x1008839f (185 bytes, 71 insns) */
void f_1008839f(void) {
  FTRACE(0x1008839fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008839f push ebx */
  push32((uint32_t)(EBX));
  /* 100883a0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100883a2 cmp dword ptr [0x10097d88], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10097d88))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100883a8 push esi */
  push32((uint32_t)(ESI));
  /* 100883a9 push edi */
  push32((uint32_t)(EDI));
  /* 100883aa jne 0x100883b1 */
  if (!C.zf) goto L_100883b1;
  /* 100883ac call 0x1008a801 */
  push32(0x100883b1u); f_1008a801();
L_100883b1:;
  /* 100883b1 mov esi, dword ptr [0x10096688] */
  ESI = (r32((uint32_t)(0x10096688)));
  /* 100883b7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_100883b9:;
  /* 100883b9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100883bb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100883bd je 0x100883d1 */
  if (C.zf) goto L_100883d1;
  /* 100883bf cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100883c1 je 0x100883c4 */
  if (C.zf) goto L_100883c4;
  /* 100883c3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_100883c4:;
  /* 100883c4 push esi */
  push32((uint32_t)(ESI));
  /* 100883c5 call 0x10089080 */
  push32(0x100883cau); f_10089080();
  /* 100883ca pop ecx */
  ECX = (pop32());
  /* 100883cb lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 100883cf jmp 0x100883b9 */
  goto L_100883b9;
L_100883d1:;
  /* 100883d1 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 100883d8 push eax */
  push32((uint32_t)(EAX));
  /* 100883d9 call 0x1008a2ef */
  push32(0x100883deu); f_1008a2ef();
  /* 100883de mov esi, eax */
  ESI = (EAX);
  /* 100883e0 pop ecx */
  ECX = (pop32());
  /* 100883e1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100883e3 mov dword ptr [0x100966b8], esi */
  w32((uint32_t)(0x100966b8), (ESI));
  /* 100883e9 jne 0x100883f3 */
  if (!C.zf) goto L_100883f3;
  /* 100883eb push 9 */
  push32((uint32_t)(0x9u));
  /* 100883ed call 0x100870f1 */
  push32(0x100883f2u); f_100870f1();
  /* 100883f2 pop ecx */
  ECX = (pop32());
L_100883f3:;
  /* 100883f3 mov edi, dword ptr [0x10096688] */
  EDI = (r32((uint32_t)(0x10096688)));
  /* 100883f9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100883fb je 0x10088436 */
  if (C.zf) goto L_10088436;
  /* 100883fd push ebp */
  push32((uint32_t)(EBP));
L_100883fe:;
  /* 100883fe push edi */
  push32((uint32_t)(EDI));
  /* 100883ff call 0x10089080 */
  push32(0x10088404u); f_10089080();
  /* 10088404 mov ebp, eax */
  EBP = (EAX);
  /* 10088406 pop ecx */
  ECX = (pop32());
  /* 10088407 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10088408 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008840b je 0x1008842f */
  if (C.zf) goto L_1008842f;
  /* 1008840d push ebp */
  push32((uint32_t)(EBP));
  /* 1008840e call 0x1008a2ef */
  push32(0x10088413u); f_1008a2ef();
  /* 10088413 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088415 pop ecx */
  ECX = (pop32());
  /* 10088416 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10088418 jne 0x10088422 */
  if (!C.zf) goto L_10088422;
  /* 1008841a push 9 */
  push32((uint32_t)(0x9u));
  /* 1008841c call 0x100870f1 */
  push32(0x10088421u); f_100870f1();
  /* 10088421 pop ecx */
  ECX = (pop32());
L_10088422:;
  /* 10088422 push edi */
  push32((uint32_t)(EDI));
  /* 10088423 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10088425 call 0x10089b30 */
  push32(0x1008842au); f_10089b30();
  /* 1008842a pop ecx */
  ECX = (pop32());
  /* 1008842b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008842e pop ecx */
  ECX = (pop32());
L_1008842f:;
  /* 1008842f add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10088431 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088433 jne 0x100883fe */
  if (!C.zf) goto L_100883fe;
  /* 10088435 pop ebp */
  EBP = (pop32());
L_10088436:;
  /* 10088436 push dword ptr [0x10096688] */
  push32((uint32_t)(r32((uint32_t)(0x10096688))));
  /* 1008843c call 0x1008a206 */
  push32(0x10088441u); f_1008a206();
  /* 10088441 pop ecx */
  ECX = (pop32());
  /* 10088442 mov dword ptr [0x10096688], ebx */
  w32((uint32_t)(0x10096688), (EBX));
  /* 10088448 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 1008844a pop edi */
  EDI = (pop32());
  /* 1008844b pop esi */
  ESI = (pop32());
  /* 1008844c mov dword ptr [0x10097d84], 1 */
  w32((uint32_t)(0x10097d84), (0x1u));
  /* 10088456 pop ebx */
  EBX = (pop32());
  /* 10088457 ret  */
  ESPCHK(0x1008839fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008458 @ 0x10088458 (153 bytes, 62 insns) */
void f_10088458(void) {
  FTRACE(0x10088458u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088458 push ebp */
  push32((uint32_t)(EBP));
  /* 10088459 mov ebp, esp */
  EBP = (ESP);
  /* 1008845b push ecx */
  push32((uint32_t)(ECX));
  /* 1008845c push ecx */
  push32((uint32_t)(ECX));
  /* 1008845d push ebx */
  push32((uint32_t)(EBX));
  /* 1008845e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10088460 cmp dword ptr [0x10097d88], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10097d88))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088466 push esi */
  push32((uint32_t)(ESI));
  /* 10088467 push edi */
  push32((uint32_t)(EDI));
  /* 10088468 jne 0x1008846f */
  if (!C.zf) goto L_1008846f;
  /* 1008846a call 0x1008a801 */
  push32(0x1008846fu); f_1008a801();
L_1008846f:;
  /* 1008846f mov esi, 0x100966dc */
  ESI = (0x100966dcu);
  /* 10088474 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10088479 push esi */
  push32((uint32_t)(ESI));
  /* 1008847a push ebx */
  push32((uint32_t)(EBX));
  /* 1008847b call dword ptr [0x1008e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e054))), 0x10088481u);
  /* 10088481 mov eax, dword ptr [0x10097d94] */
  EAX = (r32((uint32_t)(0x10097d94)));
  /* 10088486 mov dword ptr [0x100966c8], esi */
  w32((uint32_t)(0x100966c8), (ESI));
  /* 1008848c mov edi, esi */
  EDI = (ESI);
  /* 1008848e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088490 je 0x10088494 */
  if (C.zf) goto L_10088494;
  /* 10088492 mov edi, eax */
  EDI = (EAX);
L_10088494:;
  /* 10088494 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10088497 push eax */
  push32((uint32_t)(EAX));
  /* 10088498 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1008849b push eax */
  push32((uint32_t)(EAX));
  /* 1008849c push ebx */
  push32((uint32_t)(EBX));
  /* 1008849d push ebx */
  push32((uint32_t)(EBX));
  /* 1008849e push edi */
  push32((uint32_t)(EDI));
  /* 1008849f call 0x100884f1 */
  push32(0x100884a4u); f_100884f1();
  /* 100884a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100884a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100884aa lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 100884ad push eax */
  push32((uint32_t)(EAX));
  /* 100884ae call 0x1008a2ef */
  push32(0x100884b3u); f_1008a2ef();
  /* 100884b3 mov esi, eax */
  ESI = (EAX);
  /* 100884b5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100884b8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100884ba jne 0x100884c4 */
  if (!C.zf) goto L_100884c4;
  /* 100884bc push 8 */
  push32((uint32_t)(0x8u));
  /* 100884be call 0x100870f1 */
  push32(0x100884c3u); f_100870f1();
  /* 100884c3 pop ecx */
  ECX = (pop32());
L_100884c4:;
  /* 100884c4 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 100884c7 push eax */
  push32((uint32_t)(EAX));
  /* 100884c8 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100884cb push eax */
  push32((uint32_t)(EAX));
  /* 100884cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100884cf lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 100884d2 push eax */
  push32((uint32_t)(EAX));
  /* 100884d3 push esi */
  push32((uint32_t)(ESI));
  /* 100884d4 push edi */
  push32((uint32_t)(EDI));
  /* 100884d5 call 0x100884f1 */
  push32(0x100884dau); f_100884f1();
  /* 100884da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100884dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100884e0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100884e1 mov dword ptr [0x100966b0], esi */
  w32((uint32_t)(0x100966b0), (ESI));
  /* 100884e7 pop edi */
  EDI = (pop32());
  /* 100884e8 pop esi */
  ESI = (pop32());
  /* 100884e9 mov dword ptr [0x100966ac], eax */
  w32((uint32_t)(0x100966ac), (EAX));
  /* 100884ee pop ebx */
  EBX = (pop32());
  /* 100884ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100884f0 ret  */
  ESPCHK(0x10088458u, _esp0);
  ESP += 4; return;
}

/* FUN_100084f1 @ 0x100884f1 (436 bytes, 187 insns) */
void f_100884f1(void) {
  FTRACE(0x100884f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100884f1 push ebp */
  push32((uint32_t)(EBP));
  /* 100884f2 mov ebp, esp */
  EBP = (ESP);
  /* 100884f4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 100884f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100884fa push ebx */
  push32((uint32_t)(EBX));
  /* 100884fb push esi */
  push32((uint32_t)(ESI));
  /* 100884fc and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100884ff mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10088502 push edi */
  push32((uint32_t)(EDI));
  /* 10088503 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10088506 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 1008850c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008850f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10088511 je 0x1008851b */
  if (C.zf) goto L_1008851b;
  /* 10088513 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10088515 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10088518 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_1008851b:;
  /* 1008851b cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008851e jne 0x10088564 */
  if (!C.zf) goto L_10088564;
L_10088520:;
  /* 10088520 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10088523 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10088524 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088527 je 0x10088552 */
  if (C.zf) goto L_10088552;
  /* 10088529 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1008852b je 0x10088552 */
  if (C.zf) goto L_10088552;
  /* 1008852d movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10088530 test byte ptr [edx + 0x10096b41], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10096b41)))&(0x4u); fl_logic(_r,8); }
  /* 10088537 je 0x10088545 */
  if (C.zf) goto L_10088545;
  /* 10088539 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1008853b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1008853d je 0x10088545 */
  if (C.zf) goto L_10088545;
  /* 1008853f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10088541 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10088543 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10088544 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10088545:;
  /* 10088545 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10088547 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10088549 je 0x10088520 */
  if (C.zf) goto L_10088520;
  /* 1008854b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1008854d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1008854f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10088550 jmp 0x10088520 */
  goto L_10088520;
L_10088552:;
  /* 10088552 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10088554 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10088556 je 0x1008855c */
  if (C.zf) goto L_1008855c;
  /* 10088558 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1008855b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1008855c:;
  /* 1008855c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008855f jne 0x100885a7 */
  if (!C.zf) goto L_100885a7;
  /* 10088561 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10088562 jmp 0x100885a7 */
  goto L_100885a7;
L_10088564:;
  /* 10088564 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10088566 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10088568 je 0x1008856f */
  if (C.zf) goto L_1008856f;
  /* 1008856a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1008856c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1008856e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1008856f:;
  /* 1008856f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10088571 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10088572 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10088575 test byte ptr [ebx + 0x10096b41], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10096b41)))&(0x4u); fl_logic(_r,8); }
  /* 1008857c je 0x1008858a */
  if (C.zf) goto L_1008858a;
  /* 1008857e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10088580 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10088582 je 0x10088589 */
  if (C.zf) goto L_10088589;
  /* 10088584 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10088586 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10088588 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10088589:;
  /* 10088589 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1008858a:;
  /* 1008858a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008858d je 0x10088598 */
  if (C.zf) goto L_10088598;
  /* 1008858f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10088591 je 0x1008859c */
  if (C.zf) goto L_1008859c;
  /* 10088593 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088596 jne 0x10088564 */
  if (!C.zf) goto L_10088564;
L_10088598:;
  /* 10088598 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1008859a jne 0x1008859f */
  if (!C.zf) goto L_1008859f;
L_1008859c:;
  /* 1008859c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008859d jmp 0x100885a7 */
  goto L_100885a7;
L_1008859f:;
  /* 1008859f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100885a1 je 0x100885a7 */
  if (C.zf) goto L_100885a7;
  /* 100885a3 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_100885a7:;
  /* 100885a7 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_100885ab:;
  /* 100885ab cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100885ae je 0x10088694 */
  if (C.zf) goto L_10088694;
L_100885b4:;
  /* 100885b4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100885b6 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100885b9 je 0x100885c0 */
  if (C.zf) goto L_100885c0;
  /* 100885bb cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100885be jne 0x100885c3 */
  if (!C.zf) goto L_100885c3;
L_100885c0:;
  /* 100885c0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100885c1 jmp 0x100885b4 */
  goto L_100885b4;
L_100885c3:;
  /* 100885c3 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100885c6 je 0x10088694 */
  if (C.zf) goto L_10088694;
  /* 100885cc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100885ce je 0x100885d8 */
  if (C.zf) goto L_100885d8;
  /* 100885d0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 100885d2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100885d5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100885d8:;
  /* 100885d8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 100885db inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_100885dd:;
  /* 100885dd mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 100885e4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100885e6:;
  /* 100885e6 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100885e9 jne 0x100885ef */
  if (!C.zf) goto L_100885ef;
  /* 100885eb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100885ec inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100885ed jmp 0x100885e6 */
  goto L_100885e6;
L_100885ef:;
  /* 100885ef cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100885f2 jne 0x10088620 */
  if (!C.zf) goto L_10088620;
  /* 100885f4 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100885f7 jne 0x1008861e */
  if (!C.zf) goto L_1008861e;
  /* 100885f9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100885fb cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100885fe je 0x1008860d */
  if (C.zf) goto L_1008860d;
  /* 10088600 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088604 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10088607 jne 0x1008860d */
  if (!C.zf) goto L_1008860d;
  /* 10088609 mov eax, edx */
  EAX = (EDX);
  /* 1008860b jmp 0x10088610 */
  goto L_10088610;
L_1008860d:;
  /* 1008860d mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10088610:;
  /* 10088610 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10088613 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10088615 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088618 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1008861b mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1008861e:;
  /* 1008861e shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10088620:;
  /* 10088620 mov edx, ebx */
  EDX = (EBX);
  /* 10088622 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10088623 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10088625 je 0x10088635 */
  if (C.zf) goto L_10088635;
  /* 10088627 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10088628:;
  /* 10088628 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1008862a je 0x10088630 */
  if (C.zf) goto L_10088630;
  /* 1008862c mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 1008862f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10088630:;
  /* 10088630 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10088632 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10088633 jne 0x10088628 */
  if (!C.zf) goto L_10088628;
L_10088635:;
  /* 10088635 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10088637 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10088639 je 0x10088685 */
  if (C.zf) goto L_10088685;
  /* 1008863b cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008863f jne 0x1008864b */
  if (!C.zf) goto L_1008864b;
  /* 10088641 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088644 je 0x10088685 */
  if (C.zf) goto L_10088685;
  /* 10088646 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088649 je 0x10088685 */
  if (C.zf) goto L_10088685;
L_1008864b:;
  /* 1008864b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008864f je 0x1008867f */
  if (C.zf) goto L_1008867f;
  /* 10088651 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10088653 je 0x1008866e */
  if (C.zf) goto L_1008866e;
  /* 10088655 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10088658 test byte ptr [ebx + 0x10096b41], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10096b41)))&(0x4u); fl_logic(_r,8); }
  /* 1008865f je 0x10088667 */
  if (C.zf) goto L_10088667;
  /* 10088661 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10088663 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10088664 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10088665 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10088667:;
  /* 10088667 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10088669 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1008866b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008866c jmp 0x1008867d */
  goto L_1008867d;
L_1008866e:;
  /* 1008866e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10088671 test byte ptr [edx + 0x10096b41], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10096b41)))&(0x4u); fl_logic(_r,8); }
  /* 10088678 je 0x1008867d */
  if (C.zf) goto L_1008867d;
  /* 1008867a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008867b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1008867d:;
  /* 1008867d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1008867f:;
  /* 1008867f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10088680 jmp 0x100885dd */
  goto L_100885dd;
L_10088685:;
  /* 10088685 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10088687 je 0x1008868d */
  if (C.zf) goto L_1008868d;
  /* 10088689 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1008868c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1008868d:;
  /* 1008868d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1008868f jmp 0x100885ab */
  goto L_100885ab;
L_10088694:;
  /* 10088694 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10088696 je 0x1008869b */
  if (C.zf) goto L_1008869b;
  /* 10088698 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1008869b:;
  /* 1008869b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1008869e pop edi */
  EDI = (pop32());
  /* 1008869f pop esi */
  ESI = (pop32());
  /* 100886a0 pop ebx */
  EBX = (pop32());
  /* 100886a1 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 100886a3 pop ebp */
  EBP = (pop32());
  /* 100886a4 ret  */
  ESPCHK(0x100884f1u, _esp0);
  ESP += 4; return;
}

/* FUN_100086a5 @ 0x100886a5 (306 bytes, 132 insns) */
void f_100886a5(void) {
  FTRACE(0x100886a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100886a5 push ecx */
  push32((uint32_t)(ECX));
  /* 100886a6 push ecx */
  push32((uint32_t)(ECX));
  /* 100886a7 mov eax, dword ptr [0x100967e0] */
  EAX = (r32((uint32_t)(0x100967e0)));
  /* 100886ac push ebx */
  push32((uint32_t)(EBX));
  /* 100886ad push ebp */
  push32((uint32_t)(EBP));
  /* 100886ae mov ebp, dword ptr [0x1008e068] */
  EBP = (r32((uint32_t)(0x1008e068)));
  /* 100886b4 push esi */
  push32((uint32_t)(ESI));
  /* 100886b5 push edi */
  push32((uint32_t)(EDI));
  /* 100886b6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100886b8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100886ba xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100886bc cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100886be jne 0x100886f3 */
  if (!C.zf) goto L_100886f3;
  /* 100886c0 call ebp */
  call_ind((uint32_t)(EBP), 0x100886c2u);
  /* 100886c2 mov esi, eax */
  ESI = (EAX);
  /* 100886c4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100886c6 je 0x100886d4 */
  if (C.zf) goto L_100886d4;
  /* 100886c8 mov dword ptr [0x100967e0], 1 */
  w32((uint32_t)(0x100967e0), (0x1u));
  /* 100886d2 jmp 0x100886fc */
  goto L_100886fc;
L_100886d4:;
  /* 100886d4 call dword ptr [0x1008e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e064))), 0x100886dau);
  /* 100886da mov edi, eax */
  EDI = (EAX);
  /* 100886dc cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100886de je 0x100887ce */
  if (C.zf) goto L_100887ce;
  /* 100886e4 mov dword ptr [0x100967e0], 2 */
  w32((uint32_t)(0x100967e0), (0x2u));
  /* 100886ee jmp 0x10088782 */
  goto L_10088782;
L_100886f3:;
  /* 100886f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100886f6 jne 0x1008877d */
  if (!C.zf) goto L_1008877d;
L_100886fc:;
  /* 100886fc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100886fe jne 0x1008870c */
  if (!C.zf) goto L_1008870c;
  /* 10088700 call ebp */
  call_ind((uint32_t)(EBP), 0x10088702u);
  /* 10088702 mov esi, eax */
  ESI = (EAX);
  /* 10088704 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088706 je 0x100887ce */
  if (C.zf) goto L_100887ce;
L_1008870c:;
  /* 1008870c cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008870f mov eax, esi */
  EAX = (ESI);
  /* 10088711 je 0x10088721 */
  if (C.zf) goto L_10088721;
L_10088713:;
  /* 10088713 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10088714 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10088715 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10088718 jne 0x10088713 */
  if (!C.zf) goto L_10088713;
  /* 1008871a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008871b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008871c cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008871f jne 0x10088713 */
  if (!C.zf) goto L_10088713;
L_10088721:;
  /* 10088721 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10088723 mov edi, dword ptr [0x1008e060] */
  EDI = (r32((uint32_t)(0x1008e060)));
  /* 10088729 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1008872b push ebx */
  push32((uint32_t)(EBX));
  /* 1008872c push ebx */
  push32((uint32_t)(EBX));
  /* 1008872d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008872e push ebx */
  push32((uint32_t)(EBX));
  /* 1008872f push ebx */
  push32((uint32_t)(EBX));
  /* 10088730 push eax */
  push32((uint32_t)(EAX));
  /* 10088731 push esi */
  push32((uint32_t)(ESI));
  /* 10088732 push ebx */
  push32((uint32_t)(EBX));
  /* 10088733 push ebx */
  push32((uint32_t)(EBX));
  /* 10088734 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10088738 call edi */
  call_ind((uint32_t)(EDI), 0x1008873au);
  /* 1008873a mov ebp, eax */
  EBP = (EAX);
  /* 1008873c cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008873e je 0x10088772 */
  if (C.zf) goto L_10088772;
  /* 10088740 push ebp */
  push32((uint32_t)(EBP));
  /* 10088741 call 0x1008a2ef */
  push32(0x10088746u); f_1008a2ef();
  /* 10088746 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088748 pop ecx */
  ECX = (pop32());
  /* 10088749 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1008874d je 0x10088772 */
  if (C.zf) goto L_10088772;
  /* 1008874f push ebx */
  push32((uint32_t)(EBX));
  /* 10088750 push ebx */
  push32((uint32_t)(EBX));
  /* 10088751 push ebp */
  push32((uint32_t)(EBP));
  /* 10088752 push eax */
  push32((uint32_t)(EAX));
  /* 10088753 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10088757 push esi */
  push32((uint32_t)(ESI));
  /* 10088758 push ebx */
  push32((uint32_t)(EBX));
  /* 10088759 push ebx */
  push32((uint32_t)(EBX));
  /* 1008875a call edi */
  call_ind((uint32_t)(EDI), 0x1008875cu);
  /* 1008875c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008875e jne 0x1008876e */
  if (!C.zf) goto L_1008876e;
  /* 10088760 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10088764 call 0x1008a206 */
  push32(0x10088769u); f_1008a206();
  /* 10088769 pop ecx */
  ECX = (pop32());
  /* 1008876a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1008876e:;
  /* 1008876e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10088772:;
  /* 10088772 push esi */
  push32((uint32_t)(ESI));
  /* 10088773 call dword ptr [0x1008e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e05c))), 0x10088779u);
  /* 10088779 mov eax, ebx */
  EAX = (EBX);
  /* 1008877b jmp 0x100887d0 */
  goto L_100887d0;
L_1008877d:;
  /* 1008877d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088780 jne 0x100887ce */
  if (!C.zf) goto L_100887ce;
L_10088782:;
  /* 10088782 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088784 jne 0x10088792 */
  if (!C.zf) goto L_10088792;
  /* 10088786 call dword ptr [0x1008e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e064))), 0x1008878cu);
  /* 1008878c mov edi, eax */
  EDI = (EAX);
  /* 1008878e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088790 je 0x100887ce */
  if (C.zf) goto L_100887ce;
L_10088792:;
  /* 10088792 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088794 mov eax, edi */
  EAX = (EDI);
  /* 10088796 je 0x100887a2 */
  if (C.zf) goto L_100887a2;
L_10088798:;
  /* 10088798 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10088799 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008879b jne 0x10088798 */
  if (!C.zf) goto L_10088798;
  /* 1008879d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008879e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100887a0 jne 0x10088798 */
  if (!C.zf) goto L_10088798;
L_100887a2:;
  /* 100887a2 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100887a4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100887a5 mov ebp, eax */
  EBP = (EAX);
  /* 100887a7 push ebp */
  push32((uint32_t)(EBP));
  /* 100887a8 call 0x1008a2ef */
  push32(0x100887adu); f_1008a2ef();
  /* 100887ad mov esi, eax */
  ESI = (EAX);
  /* 100887af pop ecx */
  ECX = (pop32());
  /* 100887b0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100887b2 jne 0x100887b8 */
  if (!C.zf) goto L_100887b8;
  /* 100887b4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100887b6 jmp 0x100887c3 */
  goto L_100887c3;
L_100887b8:;
  /* 100887b8 push ebp */
  push32((uint32_t)(EBP));
  /* 100887b9 push edi */
  push32((uint32_t)(EDI));
  /* 100887ba push esi */
  push32((uint32_t)(ESI));
  /* 100887bb call 0x1008a820 */
  push32(0x100887c0u); f_1008a820();
  /* 100887c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100887c3:;
  /* 100887c3 push edi */
  push32((uint32_t)(EDI));
  /* 100887c4 call dword ptr [0x1008e058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e058))), 0x100887cau);
  /* 100887ca mov eax, esi */
  EAX = (ESI);
  /* 100887cc jmp 0x100887d0 */
  goto L_100887d0;
L_100887ce:;
  /* 100887ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100887d0:;
  /* 100887d0 pop edi */
  EDI = (pop32());
  /* 100887d1 pop esi */
  ESI = (pop32());
  /* 100887d2 pop ebp */
  EBP = (pop32());
  /* 100887d3 pop ebx */
  EBX = (pop32());
  /* 100887d4 pop ecx */
  ECX = (pop32());
  /* 100887d5 pop ecx */
  ECX = (pop32());
  /* 100887d6 ret  */
  ESPCHK(0x100886a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100087d7 @ 0x100887d7 (45 bytes, 17 insns) */
void f_100887d7(void) {
  FTRACE(0x100887d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100887d7 push esi */
  push32((uint32_t)(ESI));
  /* 100887d8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100887dc push 0 */
  push32((uint32_t)(0x0u));
  /* 100887de and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100887e1 call dword ptr [0x1008e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e004))), 0x100887e7u);
  /* 100887e7 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100887ec jne 0x10088802 */
  if (!C.zf) goto L_10088802;
  /* 100887ee mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 100887f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100887f3 je 0x10088802 */
  if (C.zf) goto L_10088802;
  /* 100887f5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100887f7 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 100887fa mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 100887fc mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 100887ff mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_10088802:;
  /* 10088802 pop esi */
  ESI = (pop32());
  /* 10088803 ret  */
  ESPCHK(0x100887d7u, _esp0);
  ESP += 4; return;
}

/* FUN_10008804 @ 0x10088804 (328 bytes, 115 insns) */
void f_10088804(void) {
  FTRACE(0x10088804u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088804 push ebp */
  push32((uint32_t)(EBP));
  /* 10088805 mov ebp, esp */
  EBP = (ESP);
  /* 10088807 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 1008880c call 0x1008af10 */
  push32(0x10088811u); f_1008af10();
  /* 10088811 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10088817 push ebx */
  push32((uint32_t)(EBX));
  /* 10088818 push eax */
  push32((uint32_t)(EAX));
  /* 10088819 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 10088823 call dword ptr [0x1008e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e070))), 0x10088829u);
  /* 10088829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008882b je 0x10088847 */
  if (C.zf) goto L_10088847;
  /* 1008882d cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088834 jne 0x10088847 */
  if (!C.zf) goto L_10088847;
  /* 10088836 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008883d jb 0x10088847 */
  if (C.cf) goto L_10088847;
  /* 1008883f push 1 */
  push32((uint32_t)(0x1u));
  /* 10088841 pop eax */
  EAX = (pop32());
  /* 10088842 jmp 0x10088949 */
  goto L_10088949;
L_10088847:;
  /* 10088847 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1008884d push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 10088852 push eax */
  push32((uint32_t)(EAX));
  /* 10088853 push 0x1008e1c8 */
  push32((uint32_t)(0x1008e1c8u));
  /* 10088858 call dword ptr [0x1008e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e06c))), 0x1008885eu);
  /* 1008885e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088860 je 0x10088936 */
  if (C.zf) goto L_10088936;
  /* 10088866 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10088868 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 1008886e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088874 je 0x10088889 */
  if (C.zf) goto L_10088889;
L_10088876:;
  /* 10088876 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10088878 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008887a jl 0x10088884 */
  if ((C.sf!=C.of)) goto L_10088884;
  /* 1008887c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008887e jg 0x10088884 */
  if ((!C.zf&&C.sf==C.of)) goto L_10088884;
  /* 10088880 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10088882 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_10088884:;
  /* 10088884 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10088885 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088887 jne 0x10088876 */
  if (!C.zf) goto L_10088876;
L_10088889:;
  /* 10088889 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1008888f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10088891 push eax */
  push32((uint32_t)(EAX));
  /* 10088892 push 0x1008e1b0 */
  push32((uint32_t)(0x1008e1b0u));
  /* 10088897 call 0x1008aed0 */
  push32(0x1008889cu); f_1008aed0();
  /* 1008889c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008889f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100888a1 jne 0x100888ab */
  if (!C.zf) goto L_100888ab;
  /* 100888a3 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100888a9 jmp 0x100888f4 */
  goto L_100888f4;
L_100888ab:;
  /* 100888ab lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 100888b1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 100888b6 push eax */
  push32((uint32_t)(EAX));
  /* 100888b7 push ebx */
  push32((uint32_t)(EBX));
  /* 100888b8 call dword ptr [0x1008e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e054))), 0x100888beu);
  /* 100888be cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100888c4 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 100888ca je 0x100888df */
  if (C.zf) goto L_100888df;
L_100888cc:;
  /* 100888cc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100888ce cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100888d0 jl 0x100888da */
  if ((C.sf!=C.of)) goto L_100888da;
  /* 100888d2 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100888d4 jg 0x100888da */
  if ((!C.zf&&C.sf==C.of)) goto L_100888da;
  /* 100888d6 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100888d8 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_100888da:;
  /* 100888da inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100888db cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100888dd jne 0x100888cc */
  if (!C.zf) goto L_100888cc;
L_100888df:;
  /* 100888df lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 100888e5 push eax */
  push32((uint32_t)(EAX));
  /* 100888e6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100888ec push eax */
  push32((uint32_t)(EAX));
  /* 100888ed call 0x1008ae50 */
  push32(0x100888f2u); f_1008ae50();
  /* 100888f2 pop ecx */
  ECX = (pop32());
  /* 100888f3 pop ecx */
  ECX = (pop32());
L_100888f4:;
  /* 100888f4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100888f6 je 0x10088936 */
  if (C.zf) goto L_10088936;
  /* 100888f8 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 100888fa push eax */
  push32((uint32_t)(EAX));
  /* 100888fb call 0x1008ad90 */
  push32(0x10088900u); f_1008ad90();
  /* 10088900 pop ecx */
  ECX = (pop32());
  /* 10088901 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088903 pop ecx */
  ECX = (pop32());
  /* 10088904 je 0x10088936 */
  if (C.zf) goto L_10088936;
  /* 10088906 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10088907 mov ecx, eax */
  ECX = (EAX);
  /* 10088909 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008890b je 0x1008891b */
  if (C.zf) goto L_1008891b;
L_1008890d:;
  /* 1008890d cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088910 jne 0x10088916 */
  if (!C.zf) goto L_10088916;
  /* 10088912 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 10088914 jmp 0x10088917 */
  goto L_10088917;
L_10088916:;
  /* 10088916 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_10088917:;
  /* 10088917 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088919 jne 0x1008890d */
  if (!C.zf) goto L_1008890d;
L_1008891b:;
  /* 1008891b push 0xa */
  push32((uint32_t)(0xau));
  /* 1008891d push ebx */
  push32((uint32_t)(EBX));
  /* 1008891e push eax */
  push32((uint32_t)(EAX));
  /* 1008891f call 0x1008ab55 */
  push32(0x10088924u); f_1008ab55();
  /* 10088924 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10088927 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008892a je 0x10088949 */
  if (C.zf) goto L_10088949;
  /* 1008892c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008892f je 0x10088949 */
  if (C.zf) goto L_10088949;
  /* 10088931 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088934 je 0x10088949 */
  if (C.zf) goto L_10088949;
L_10088936:;
  /* 10088936 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10088939 push eax */
  push32((uint32_t)(EAX));
  /* 1008893a call 0x100887d7 */
  push32(0x1008893fu); f_100887d7();
  /* 1008893f cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088943 pop ecx */
  ECX = (pop32());
  /* 10088944 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10088946 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10088949:;
  /* 10088949 pop ebx */
  EBX = (pop32());
  /* 1008894a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008894b ret  */
  ESPCHK(0x10088804u, _esp0);
  ESP += 4; return;
}

/* FUN_1000894c @ 0x1008894c (93 bytes, 30 insns) */
void f_1008894c(void) {
  FTRACE(0x1008894cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008894c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008894e push 0 */
  push32((uint32_t)(0x0u));
  /* 10088950 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088954 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10088959 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1008895c push eax */
  push32((uint32_t)(EAX));
  /* 1008895d call dword ptr [0x1008e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e078))), 0x10088963u);
  /* 10088963 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088965 mov dword ptr [0x10097c64], eax */
  w32((uint32_t)(0x10097c64), (EAX));
  /* 1008896a je 0x100889a2 */
  if (C.zf) goto L_100889a2;
  /* 1008896c call 0x10088804 */
  push32(0x10088971u); f_10088804();
  /* 10088971 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088974 mov dword ptr [0x10097c68], eax */
  w32((uint32_t)(0x10097c68), (EAX));
  /* 10088979 jne 0x10088988 */
  if (!C.zf) goto L_10088988;
  /* 1008897b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 10088980 call 0x1008af3f */
  push32(0x10088985u); f_1008af3f();
  /* 10088985 pop ecx */
  ECX = (pop32());
  /* 10088986 jmp 0x10088992 */
  goto L_10088992;
L_10088988:;
  /* 10088988 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008898b jne 0x100889a5 */
  if (!C.zf) goto L_100889a5;
  /* 1008898d call 0x1008b790 */
  push32(0x10088992u); f_1008b790();
L_10088992:;
  /* 10088992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088994 jne 0x100889a5 */
  if (!C.zf) goto L_100889a5;
  /* 10088996 push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
  /* 1008899c call dword ptr [0x1008e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e074))), 0x100889a2u);
L_100889a2:;
  /* 100889a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100889a4 ret  */
  ESPCHK(0x1008894cu, _esp0);
  ESP += 4; return;
L_100889a5:;
  /* 100889a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100889a7 pop eax */
  EAX = (pop32());
  /* 100889a8 ret  */
  ESPCHK(0x1008894cu, _esp0);
  ESP += 4; return;
}

/* FUN_100089a9 @ 0x100889a9 (168 bytes, 56 insns) */
void f_100889a9(void) {
  FTRACE(0x100889a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100889a9 mov eax, dword ptr [0x10097c68] */
  EAX = (r32((uint32_t)(0x10097c68)));
  /* 100889ae push esi */
  push32((uint32_t)(ESI));
  /* 100889af cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100889b2 push edi */
  push32((uint32_t)(EDI));
  /* 100889b3 jne 0x10088a1b */
  if (!C.zf) goto L_10088a1b;
  /* 100889b5 push ebx */
  push32((uint32_t)(EBX));
  /* 100889b6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100889b8 cmp dword ptr [0x10096a08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10096a08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100889be push ebp */
  push32((uint32_t)(EBP));
  /* 100889bf mov ebp, dword ptr [0x1008e080] */
  EBP = (r32((uint32_t)(0x1008e080)));
  /* 100889c5 jle 0x10088a07 */
  if ((C.zf||C.sf!=C.of)) goto L_10088a07;
  /* 100889c7 mov eax, dword ptr [0x10096a0c] */
  EAX = (r32((uint32_t)(0x10096a0c)));
  /* 100889cc mov edi, dword ptr [0x1008e07c] */
  EDI = (r32((uint32_t)(0x1008e07c)));
  /* 100889d2 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_100889d5:;
  /* 100889d5 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 100889da push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 100889df push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100889e1 call edi */
  call_ind((uint32_t)(EDI), 0x100889e3u);
  /* 100889e3 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100889e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100889ea push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100889ec call edi */
  call_ind((uint32_t)(EDI), 0x100889eeu);
  /* 100889ee push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 100889f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100889f3 push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
  /* 100889f9 call ebp */
  call_ind((uint32_t)(EBP), 0x100889fbu);
  /* 100889fb add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100889fe inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100889ff cmp ebx, dword ptr [0x10096a08] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10096a08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088a05 jl 0x100889d5 */
  if ((C.sf!=C.of)) goto L_100889d5;
L_10088a07:;
  /* 10088a07 push dword ptr [0x10096a0c] */
  push32((uint32_t)(r32((uint32_t)(0x10096a0c))));
  /* 10088a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10088a0f push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
  /* 10088a15 call ebp */
  call_ind((uint32_t)(EBP), 0x10088a17u);
  /* 10088a17 pop ebp */
  EBP = (pop32());
  /* 10088a18 pop ebx */
  EBX = (pop32());
  /* 10088a19 jmp 0x10088a42 */
  goto L_10088a42;
L_10088a1b:;
  /* 10088a1b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088a1e jne 0x10088a42 */
  if (!C.zf) goto L_10088a42;
  /* 10088a20 mov edi, 0x10090ea0 */
  EDI = (0x10090ea0u);
  /* 10088a25 mov esi, edi */
  ESI = (EDI);
L_10088a27:;
  /* 10088a27 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10088a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088a2c je 0x10088a3c */
  if (C.zf) goto L_10088a3c;
  /* 10088a2e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10088a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10088a35 push eax */
  push32((uint32_t)(EAX));
  /* 10088a36 call dword ptr [0x1008e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e07c))), 0x10088a3cu);
L_10088a3c:;
  /* 10088a3c mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 10088a3e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088a40 jne 0x10088a27 */
  if (!C.zf) goto L_10088a27;
L_10088a42:;
  /* 10088a42 push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
  /* 10088a48 call dword ptr [0x1008e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e074))), 0x10088a4eu);
  /* 10088a4e pop edi */
  EDI = (pop32());
  /* 10088a4f pop esi */
  ESI = (pop32());
  /* 10088a50 ret  */
  ESPCHK(0x100889a9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a51 @ 0x10088a51 (57 bytes, 18 insns) */
void f_10088a51(void) {
  FTRACE(0x10088a51u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088a51 mov eax, dword ptr [0x10096690] */
  EAX = (r32((uint32_t)(0x10096690)));
  /* 10088a56 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088a59 je 0x10088a68 */
  if (C.zf) goto L_10088a68;
  /* 10088a5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088a5d jne 0x10088a89 */
  if (!C.zf) goto L_10088a89;
  /* 10088a5f cmp dword ptr [0x10096694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10096694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088a66 jne 0x10088a89 */
  if (!C.zf) goto L_10088a89;
L_10088a68:;
  /* 10088a68 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10088a6d call 0x10088a8a */
  push32(0x10088a72u); f_10088a8a();
  /* 10088a72 mov eax, dword ptr [0x100967e4] */
  EAX = (r32((uint32_t)(0x100967e4)));
  /* 10088a77 pop ecx */
  ECX = (pop32());
  /* 10088a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088a7a je 0x10088a7e */
  if (C.zf) goto L_10088a7e;
  /* 10088a7c call eax */
  call_ind((uint32_t)(EAX), 0x10088a7eu);
L_10088a7e:;
  /* 10088a7e push 0xff */
  push32((uint32_t)(0xffu));
  /* 10088a83 call 0x10088a8a */
  push32(0x10088a88u); f_10088a8a();
  /* 10088a88 pop ecx */
  ECX = (pop32());
L_10088a89:;
  /* 10088a89 ret  */
  ESPCHK(0x10088a51u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a8a @ 0x10088a8a (339 bytes, 100 insns) */
void f_10088a8a(void) {
  FTRACE(0x10088a8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088a8a push ebp */
  push32((uint32_t)(EBP));
  /* 10088a8b mov ebp, esp */
  EBP = (ESP);
  /* 10088a8d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10088a93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10088a96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10088a98 mov eax, 0x100906f8 */
  EAX = (0x100906f8u);
L_10088a9d:;
  /* 10088a9d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088a9f je 0x10088aac */
  if (C.zf) goto L_10088aac;
  /* 10088aa1 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10088aa4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10088aa5 cmp eax, 0x10090788 */
  { uint32_t _a=(EAX),_b=(0x10090788u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088aaa jl 0x10088a9d */
  if ((C.sf!=C.of)) goto L_10088a9d;
L_10088aac:;
  /* 10088aac push esi */
  push32((uint32_t)(ESI));
  /* 10088aad mov esi, ecx */
  ESI = (ECX);
  /* 10088aaf shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10088ab2 cmp edx, dword ptr [esi + 0x100906f8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x100906f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088ab8 jne 0x10088bda */
  if (!C.zf) goto L_10088bda;
  /* 10088abe mov eax, dword ptr [0x10096690] */
  EAX = (r32((uint32_t)(0x10096690)));
  /* 10088ac3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088ac6 je 0x10088bb4 */
  if (C.zf) goto L_10088bb4;
  /* 10088acc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088ace jne 0x10088add */
  if (!C.zf) goto L_10088add;
  /* 10088ad0 cmp dword ptr [0x10096694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10096694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088ad7 je 0x10088bb4 */
  if (C.zf) goto L_10088bb4;
L_10088add:;
  /* 10088add cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088ae3 je 0x10088bda */
  if (C.zf) goto L_10088bda;
  /* 10088ae9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10088aef push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10088af4 push eax */
  push32((uint32_t)(EAX));
  /* 10088af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10088af7 call dword ptr [0x1008e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e054))), 0x10088afdu);
  /* 10088afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088aff jne 0x10088b14 */
  if (!C.zf) goto L_10088b14;
  /* 10088b01 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10088b07 push 0x1008e4b8 */
  push32((uint32_t)(0x1008e4b8u));
  /* 10088b0c push eax */
  push32((uint32_t)(EAX));
  /* 10088b0d call 0x10089b30 */
  push32(0x10088b12u); f_10089b30();
  /* 10088b12 pop ecx */
  ECX = (pop32());
  /* 10088b13 pop ecx */
  ECX = (pop32());
L_10088b14:;
  /* 10088b14 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10088b1a push edi */
  push32((uint32_t)(EDI));
  /* 10088b1b push eax */
  push32((uint32_t)(EAX));
  /* 10088b1c lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10088b22 call 0x10089080 */
  push32(0x10088b27u); f_10089080();
  /* 10088b27 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10088b28 pop ecx */
  ECX = (pop32());
  /* 10088b29 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088b2c jbe 0x10088b57 */
  if ((C.cf||C.zf)) goto L_10088b57;
  /* 10088b2e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10088b34 push eax */
  push32((uint32_t)(EAX));
  /* 10088b35 call 0x10089080 */
  push32(0x10088b3au); f_10089080();
  /* 10088b3a mov edi, eax */
  EDI = (EAX);
  /* 10088b3c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10088b42 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10088b45 push 3 */
  push32((uint32_t)(0x3u));
  /* 10088b47 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10088b49 push 0x1008e4b4 */
  push32((uint32_t)(0x1008e4b4u));
  /* 10088b4e push edi */
  push32((uint32_t)(EDI));
  /* 10088b4f call 0x1008be40 */
  push32(0x10088b54u); f_1008be40();
  /* 10088b54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10088b57:;
  /* 10088b57 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10088b5d push 0x1008e498 */
  push32((uint32_t)(0x1008e498u));
  /* 10088b62 push eax */
  push32((uint32_t)(EAX));
  /* 10088b63 call 0x10089b30 */
  push32(0x10088b68u); f_10089b30();
  /* 10088b68 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10088b6e push edi */
  push32((uint32_t)(EDI));
  /* 10088b6f push eax */
  push32((uint32_t)(EAX));
  /* 10088b70 call 0x10089b40 */
  push32(0x10088b75u); f_10089b40();
  /* 10088b75 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10088b7b push 0x1008e494 */
  push32((uint32_t)(0x1008e494u));
  /* 10088b80 push eax */
  push32((uint32_t)(EAX));
  /* 10088b81 call 0x10089b40 */
  push32(0x10088b86u); f_10089b40();
  /* 10088b86 push dword ptr [esi + 0x100906fc] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x100906fc))));
  /* 10088b8c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10088b92 push eax */
  push32((uint32_t)(EAX));
  /* 10088b93 call 0x10089b40 */
  push32(0x10088b98u); f_10089b40();
  /* 10088b98 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10088b9d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10088ba3 push 0x1008e46c */
  push32((uint32_t)(0x1008e46cu));
  /* 10088ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10088ba9 call 0x1008bdb4 */
  push32(0x10088baeu); f_1008bdb4();
  /* 10088bae add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10088bb1 pop edi */
  EDI = (pop32());
  /* 10088bb2 jmp 0x10088bda */
  goto L_10088bda;
L_10088bb4:;
  /* 10088bb4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10088bb7 lea esi, [esi + 0x100906fc] */
  ESI = ((uint32_t)(ESI + 0x100906fc));
  /* 10088bbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10088bbf push eax */
  push32((uint32_t)(EAX));
  /* 10088bc0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10088bc2 call 0x10089080 */
  push32(0x10088bc7u); f_10089080();
  /* 10088bc7 pop ecx */
  ECX = (pop32());
  /* 10088bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10088bc9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10088bcb push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10088bcd call dword ptr [0x1008e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e044))), 0x10088bd3u);
  /* 10088bd3 push eax */
  push32((uint32_t)(EAX));
  /* 10088bd4 call dword ptr [0x1008e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e084))), 0x10088bdau);
L_10088bda:;
  /* 10088bda pop esi */
  ESI = (pop32());
  /* 10088bdb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10088bdc ret  */
  ESPCHK(0x10088a8au, _esp0);
  ESP += 4; return;
}

/* FUN_10008bdd @ 0x10088bdd (101 bytes, 34 insns) */
void f_10088bdd(void) {
  FTRACE(0x10088bddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088bdd push esi */
  push32((uint32_t)(ESI));
  /* 10088bde mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10088be2 cmp esi, dword ptr [0x10097d80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10097d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088be8 jae 0x10088c2a */
  if (!C.cf) goto L_10088c2a;
  /* 10088bea mov ecx, esi */
  ECX = (ESI);
  /* 10088bec mov eax, esi */
  EAX = (ESI);
  /* 10088bee sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10088bf1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10088bf4 mov ecx, dword ptr [ecx*4 + 0x10097c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10097c80)));
  /* 10088bfb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10088bfe test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10088c03 je 0x10088c2a */
  if (C.zf) goto L_10088c2a;
  /* 10088c05 push edi */
  push32((uint32_t)(EDI));
  /* 10088c06 push esi */
  push32((uint32_t)(ESI));
  /* 10088c07 call 0x1008c084 */
  push32(0x10088c0cu); f_1008c084();
  /* 10088c0c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10088c10 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10088c14 push esi */
  push32((uint32_t)(ESI));
  /* 10088c15 call 0x10088c42 */
  push32(0x10088c1au); f_10088c42();
  /* 10088c1a push esi */
  push32((uint32_t)(ESI));
  /* 10088c1b mov edi, eax */
  EDI = (EAX);
  /* 10088c1d call 0x1008c0e3 */
  push32(0x10088c22u); f_1008c0e3();
  /* 10088c22 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10088c25 mov eax, edi */
  EAX = (EDI);
  /* 10088c27 pop edi */
  EDI = (pop32());
  /* 10088c28 pop esi */
  ESI = (pop32());
  /* 10088c29 ret  */
  ESPCHK(0x10088bddu, _esp0);
  ESP += 4; return;
L_10088c2a:;
  /* 10088c2a call 0x1008bfb1 */
  push32(0x10088c2fu); f_1008bfb1();
  /* 10088c2f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10088c35 call 0x1008bfba */
  push32(0x10088c3au); f_1008bfba();
  /* 10088c3a and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10088c3d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10088c40 pop esi */
  ESI = (pop32());
  /* 10088c41 ret  */
  ESPCHK(0x10088bddu, _esp0);
  ESP += 4; return;
}

/* FUN_10008c42 @ 0x10088c42 (115 bytes, 41 insns) */
void f_10088c42(void) {
  FTRACE(0x10088c42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088c42 push esi */
  push32((uint32_t)(ESI));
  /* 10088c43 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10088c47 push edi */
  push32((uint32_t)(EDI));
  /* 10088c48 push esi */
  push32((uint32_t)(ESI));
  /* 10088c49 call 0x1008c042 */
  push32(0x10088c4eu); f_1008c042();
  /* 10088c4e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088c51 pop ecx */
  ECX = (pop32());
  /* 10088c52 jne 0x10088c61 */
  if (!C.zf) goto L_10088c61;
  /* 10088c54 call 0x1008bfb1 */
  push32(0x10088c59u); f_1008bfb1();
  /* 10088c59 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10088c5f jmp 0x10088c8e */
  goto L_10088c8e;
L_10088c61:;
  /* 10088c61 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10088c65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10088c67 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10088c6b push eax */
  push32((uint32_t)(EAX));
  /* 10088c6c call dword ptr [0x1008e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e000))), 0x10088c72u);
  /* 10088c72 mov edi, eax */
  EDI = (EAX);
  /* 10088c74 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088c77 jne 0x10088c81 */
  if (!C.zf) goto L_10088c81;
  /* 10088c79 call dword ptr [0x1008e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e03c))), 0x10088c7fu);
  /* 10088c7f jmp 0x10088c83 */
  goto L_10088c83;
L_10088c81:;
  /* 10088c81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10088c83:;
  /* 10088c83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088c85 je 0x10088c93 */
  if (C.zf) goto L_10088c93;
  /* 10088c87 push eax */
  push32((uint32_t)(EAX));
  /* 10088c88 call 0x1008bf3e */
  push32(0x10088c8du); f_1008bf3e();
  /* 10088c8d pop ecx */
  ECX = (pop32());
L_10088c8e:;
  /* 10088c8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10088c91 jmp 0x10088cb2 */
  goto L_10088cb2;
L_10088c93:;
  /* 10088c93 mov ecx, esi */
  ECX = (ESI);
  /* 10088c95 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10088c98 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10088c9b mov eax, esi */
  EAX = (ESI);
  /* 10088c9d mov ecx, dword ptr [ecx*4 + 0x10097c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10097c80)));
  /* 10088ca4 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10088ca7 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10088cac lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 10088cb0 mov eax, edi */
  EAX = (EDI);
L_10088cb2:;
  /* 10088cb2 pop edi */
  EDI = (pop32());
  /* 10088cb3 pop esi */
  ESI = (pop32());
  /* 10088cb4 ret  */
  ESPCHK(0x10088c42u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cb5 @ 0x10088cb5 (101 bytes, 34 insns) */
void f_10088cb5(void) {
  FTRACE(0x10088cb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088cb5 push esi */
  push32((uint32_t)(ESI));
  /* 10088cb6 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10088cba cmp esi, dword ptr [0x10097d80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10097d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088cc0 jae 0x10088d02 */
  if (!C.cf) goto L_10088d02;
  /* 10088cc2 mov ecx, esi */
  ECX = (ESI);
  /* 10088cc4 mov eax, esi */
  EAX = (ESI);
  /* 10088cc6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10088cc9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10088ccc mov ecx, dword ptr [ecx*4 + 0x10097c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10097c80)));
  /* 10088cd3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10088cd6 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10088cdb je 0x10088d02 */
  if (C.zf) goto L_10088d02;
  /* 10088cdd push edi */
  push32((uint32_t)(EDI));
  /* 10088cde push esi */
  push32((uint32_t)(ESI));
  /* 10088cdf call 0x1008c084 */
  push32(0x10088ce4u); f_1008c084();
  /* 10088ce4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10088ce8 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10088cec push esi */
  push32((uint32_t)(ESI));
  /* 10088ced call 0x10088d1a */
  push32(0x10088cf2u); f_10088d1a();
  /* 10088cf2 push esi */
  push32((uint32_t)(ESI));
  /* 10088cf3 mov edi, eax */
  EDI = (EAX);
  /* 10088cf5 call 0x1008c0e3 */
  push32(0x10088cfau); f_1008c0e3();
  /* 10088cfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10088cfd mov eax, edi */
  EAX = (EDI);
  /* 10088cff pop edi */
  EDI = (pop32());
  /* 10088d00 pop esi */
  ESI = (pop32());
  /* 10088d01 ret  */
  ESPCHK(0x10088cb5u, _esp0);
  ESP += 4; return;
L_10088d02:;
  /* 10088d02 call 0x1008bfb1 */
  push32(0x10088d07u); f_1008bfb1();
  /* 10088d07 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10088d0d call 0x1008bfba */
  push32(0x10088d12u); f_1008bfba();
  /* 10088d12 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10088d15 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10088d18 pop esi */
  ESI = (pop32());
  /* 10088d19 ret  */
  ESPCHK(0x10088cb5u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d1a @ 0x10088d1a (395 bytes, 135 insns) */
void f_10088d1a(void) {
  FTRACE(0x10088d1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088d1a push ebp */
  push32((uint32_t)(EBP));
  /* 10088d1b mov ebp, esp */
  EBP = (ESP);
  /* 10088d1d sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10088d23 push ebx */
  push32((uint32_t)(EBX));
  /* 10088d24 push esi */
  push32((uint32_t)(ESI));
  /* 10088d25 push edi */
  push32((uint32_t)(EDI));
  /* 10088d26 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10088d28 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088d2b mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10088d2e mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10088d31 jne 0x10088d3a */
  if (!C.zf) goto L_10088d3a;
L_10088d33:;
  /* 10088d33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10088d35 jmp 0x10088ea0 */
  goto L_10088ea0;
L_10088d3a:;
  /* 10088d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10088d3d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10088d40 lea ebx, [eax*4 + 0x10097c80] */
  EBX = ((uint32_t)(EAX*4 + 0x10097c80));
  /* 10088d47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10088d4a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10088d4d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10088d50 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10088d52 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10088d55 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10088d5a je 0x10088d6a */
  if (C.zf) goto L_10088d6a;
  /* 10088d5c push 2 */
  push32((uint32_t)(0x2u));
  /* 10088d5e push edi */
  push32((uint32_t)(EDI));
  /* 10088d5f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10088d62 call 0x10088c42 */
  push32(0x10088d67u); f_10088c42();
  /* 10088d67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10088d6a:;
  /* 10088d6a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10088d6c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10088d6e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10088d72 je 0x10088e39 */
  if (C.zf) goto L_10088e39;
  /* 10088d78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10088d7b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088d7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10088d81 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10088d84 jbe 0x10088e74 */
  if ((C.cf||C.zf)) goto L_10088e74;
L_10088d8a:;
  /* 10088d8a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_10088d90:;
  /* 10088d90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10088d93 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10088d96 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088d99 jae 0x10088dc4 */
  if (!C.cf) goto L_10088dc4;
  /* 10088d9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10088d9e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10088da1 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10088da3 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088da6 jne 0x10088daf */
  if (!C.zf) goto L_10088daf;
  /* 10088da8 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10088dab mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10088dae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10088daf:;
  /* 10088daf mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10088db1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10088db2 mov ecx, eax */
  ECX = (EAX);
  /* 10088db4 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10088dba sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10088dbc cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088dc2 jl 0x10088d90 */
  if ((C.sf!=C.of)) goto L_10088d90;
L_10088dc4:;
  /* 10088dc4 mov edi, eax */
  EDI = (EAX);
  /* 10088dc6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10088dcc sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10088dce lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10088dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10088dd3 push eax */
  push32((uint32_t)(EAX));
  /* 10088dd4 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10088dda push edi */
  push32((uint32_t)(EDI));
  /* 10088ddb push eax */
  push32((uint32_t)(EAX));
  /* 10088ddc mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10088dde push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10088de1 call dword ptr [0x1008e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e084))), 0x10088de7u);
  /* 10088de7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088de9 je 0x10088e2e */
  if (C.zf) goto L_10088e2e;
  /* 10088deb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10088dee add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10088df1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088df3 jl 0x10088e00 */
  if ((C.sf!=C.of)) goto L_10088e00;
  /* 10088df5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10088df8 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10088dfb cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088dfe jb 0x10088d8a */
  if (C.cf) goto L_10088d8a;
L_10088e00:;
  /* 10088e00 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10088e02:;
  /* 10088e02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10088e05 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088e07 jne 0x10088e9d */
  if (!C.zf) goto L_10088e9d;
  /* 10088e0d cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088e10 je 0x10088e74 */
  if (C.zf) goto L_10088e74;
  /* 10088e12 push 5 */
  push32((uint32_t)(0x5u));
  /* 10088e14 pop esi */
  ESI = (pop32());
  /* 10088e15 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088e18 jne 0x10088e66 */
  if (!C.zf) goto L_10088e66;
  /* 10088e1a call 0x1008bfb1 */
  push32(0x10088e1fu); f_1008bfb1();
  /* 10088e1f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10088e25 call 0x1008bfba */
  push32(0x10088e2au); f_1008bfba();
  /* 10088e2a mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10088e2c jmp 0x10088e6f */
  goto L_10088e6f;
L_10088e2e:;
  /* 10088e2e call dword ptr [0x1008e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e03c))), 0x10088e34u);
  /* 10088e34 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10088e37 jmp 0x10088e00 */
  goto L_10088e00;
L_10088e39:;
  /* 10088e39 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10088e3c push edi */
  push32((uint32_t)(EDI));
  /* 10088e3d push ecx */
  push32((uint32_t)(ECX));
  /* 10088e3e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10088e41 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10088e44 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10088e46 call dword ptr [0x1008e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e084))), 0x10088e4cu);
  /* 10088e4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088e4e je 0x10088e5b */
  if (C.zf) goto L_10088e5b;
  /* 10088e50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10088e53 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10088e56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10088e59 jmp 0x10088e02 */
  goto L_10088e02;
L_10088e5b:;
  /* 10088e5b call dword ptr [0x1008e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e03c))), 0x10088e61u);
  /* 10088e61 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10088e64 jmp 0x10088e02 */
  goto L_10088e02;
L_10088e66:;
  /* 10088e66 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10088e69 call 0x1008bf3e */
  push32(0x10088e6eu); f_1008bf3e();
  /* 10088e6e pop ecx */
  ECX = (pop32());
L_10088e6f:;
  /* 10088e6f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10088e72 jmp 0x10088ea0 */
  goto L_10088ea0;
L_10088e74:;
  /* 10088e74 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10088e76 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10088e7b je 0x10088e89 */
  if (C.zf) goto L_10088e89;
  /* 10088e7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10088e80 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10088e83 je 0x10088d33 */
  if (C.zf) goto L_10088d33;
L_10088e89:;
  /* 10088e89 call 0x1008bfb1 */
  push32(0x10088e8eu); f_1008bfb1();
  /* 10088e8e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10088e94 call 0x1008bfba */
  push32(0x10088e99u); f_1008bfba();
  /* 10088e99 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10088e9b jmp 0x10088e6f */
  goto L_10088e6f;
L_10088e9d:;
  /* 10088e9d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10088ea0:;
  /* 10088ea0 pop edi */
  EDI = (pop32());
  /* 10088ea1 pop esi */
  ESI = (pop32());
  /* 10088ea2 pop ebx */
  EBX = (pop32());
  /* 10088ea3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10088ea4 ret  */
  ESPCHK(0x10088d1au, _esp0);
  ESP += 4; return;
}

/* FUN_10008ea5 @ 0x10088ea5 (68 bytes, 19 insns) */
void f_10088ea5(void) {
  FTRACE(0x10088ea5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088ea5 inc dword ptr [0x100967e8] */
  { uint32_t _r=(r32((uint32_t)(0x100967e8)))+1; w32((uint32_t)(0x100967e8), (_r)); fl_inc(_r,32); }
  /* 10088eab push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10088eb0 call 0x1008a2ef */
  push32(0x10088eb5u); f_1008a2ef();
  /* 10088eb5 pop ecx */
  ECX = (pop32());
  /* 10088eb6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10088eba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10088ebc mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10088ebf je 0x10088ece */
  if (C.zf) goto L_10088ece;
  /* 10088ec1 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10088ec5 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 10088ecc jmp 0x10088edf */
  goto L_10088edf;
L_10088ece:;
  /* 10088ece or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10088ed2 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10088ed5 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10088ed8 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_10088edf:;
  /* 10088edf mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10088ee2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10088ee6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10088ee8 ret  */
  ESPCHK(0x10088ea5u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ee9 @ 0x10088ee9 (41 bytes, 13 insns) */
void f_10088ee9(void) {
  FTRACE(0x10088ee9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088ee9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10088eed cmp eax, dword ptr [0x10097d80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10097d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088ef3 jb 0x10088ef8 */
  if (C.cf) goto L_10088ef8;
  /* 10088ef5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10088ef7 ret  */
  ESPCHK(0x10088ee9u, _esp0);
  ESP += 4; return;
L_10088ef8:;
  /* 10088ef8 mov ecx, eax */
  ECX = (EAX);
  /* 10088efa and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10088efd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10088f00 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10088f03 mov ecx, dword ptr [ecx*4 + 0x10097c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10097c80)));
  /* 10088f0a mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10088f0e and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10088f11 ret  */
  ESPCHK(0x10088ee9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fce @ 0x10088fce (47 bytes, 17 insns) */
void f_10088fce(void) {
  FTRACE(0x10088fceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088fce mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10088fd2 mov ecx, 0x10090788 */
  ECX = (0x10090788u);
  /* 10088fd7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088fd9 jb 0x10088ff2 */
  if (C.cf) goto L_10088ff2;
  /* 10088fdb cmp eax, 0x100909e8 */
  { uint32_t _a=(EAX),_b=(0x100909e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10088fe0 ja 0x10088ff2 */
  if ((!C.cf&&!C.zf)) goto L_10088ff2;
  /* 10088fe2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10088fe4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10088fe7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10088fea push eax */
  push32((uint32_t)(EAX));
  /* 10088feb call 0x1008a053 */
  push32(0x10088ff0u); f_1008a053();
  /* 10088ff0 pop ecx */
  ECX = (pop32());
  /* 10088ff1 ret  */
  ESPCHK(0x10088fceu, _esp0);
  ESP += 4; return;
L_10088ff2:;
  /* 10088ff2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10088ff5 push eax */
  push32((uint32_t)(EAX));
  /* 10088ff6 call dword ptr [0x1008e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e00c))), 0x10088ffcu);
  /* 10088ffc ret  */
  ESPCHK(0x10088fceu, _esp0);
  ESP += 4; return;
}

/* FUN_10008ffd @ 0x10088ffd (35 bytes, 13 insns) */
void f_10088ffd(void) {
  FTRACE(0x10088ffdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10088ffd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10089001 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089004 jge 0x10089011 */
  if ((C.sf==C.of)) goto L_10089011;
  /* 10089006 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10089009 push eax */
  push32((uint32_t)(EAX));
  /* 1008900a call 0x1008a053 */
  push32(0x1008900fu); f_1008a053();
  /* 1008900f pop ecx */
  ECX = (pop32());
  /* 10089010 ret  */
  ESPCHK(0x10088ffdu, _esp0);
  ESP += 4; return;
L_10089011:;
  /* 10089011 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10089015 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10089018 push eax */
  push32((uint32_t)(EAX));
  /* 10089019 call dword ptr [0x1008e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e00c))), 0x1008901fu);
  /* 1008901f ret  */
  ESPCHK(0x10088ffdu, _esp0);
  ESP += 4; return;
}

/* FUN_10009020 @ 0x10089020 (47 bytes, 17 insns) */
void f_10089020(void) {
  FTRACE(0x10089020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089020 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10089024 mov ecx, 0x10090788 */
  ECX = (0x10090788u);
  /* 10089029 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008902b jb 0x10089044 */
  if (C.cf) goto L_10089044;
  /* 1008902d cmp eax, 0x100909e8 */
  { uint32_t _a=(EAX),_b=(0x100909e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089032 ja 0x10089044 */
  if ((!C.cf&&!C.zf)) goto L_10089044;
  /* 10089034 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089036 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10089039 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008903c push eax */
  push32((uint32_t)(EAX));
  /* 1008903d call 0x1008a0b4 */
  push32(0x10089042u); f_1008a0b4();
  /* 10089042 pop ecx */
  ECX = (pop32());
  /* 10089043 ret  */
  ESPCHK(0x10089020u, _esp0);
  ESP += 4; return;
L_10089044:;
  /* 10089044 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10089047 push eax */
  push32((uint32_t)(EAX));
  /* 10089048 call dword ptr [0x1008e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e008))), 0x1008904eu);
  /* 1008904e ret  */
  ESPCHK(0x10089020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000904f @ 0x1008904f (35 bytes, 13 insns) */
void f_1008904f(void) {
  FTRACE(0x1008904fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008904f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10089053 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089056 jge 0x10089063 */
  if ((C.sf==C.of)) goto L_10089063;
  /* 10089058 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008905b push eax */
  push32((uint32_t)(EAX));
  /* 1008905c call 0x1008a0b4 */
  push32(0x10089061u); f_1008a0b4();
  /* 10089061 pop ecx */
  ECX = (pop32());
  /* 10089062 ret  */
  ESPCHK(0x1008904fu, _esp0);
  ESP += 4; return;
L_10089063:;
  /* 10089063 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10089067 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008906a push eax */
  push32((uint32_t)(EAX));
  /* 1008906b call dword ptr [0x1008e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e008))), 0x10089071u);
  /* 10089071 ret  */
  ESPCHK(0x1008904fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10089080 (123 bytes, 44 insns) */
void f_10089080(void) {
  FTRACE(0x10089080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089080 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10089084 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1008908a je 0x100890a0 */
  if (C.zf) goto L_100890a0;
L_1008908c:;
  /* 1008908c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1008908e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1008908f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10089091 je 0x100890d3 */
  if (C.zf) goto L_100890d3;
  /* 10089093 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10089099 jne 0x1008908c */
  if (!C.zf) goto L_1008908c;
  /* 1008909b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100890a0:;
  /* 100890a0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 100890a2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100890a7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100890a9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100890ac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100890ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100890b1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100890b6 je 0x100890a0 */
  if (C.zf) goto L_100890a0;
  /* 100890b8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 100890bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100890bd je 0x100890f1 */
  if (C.zf) goto L_100890f1;
  /* 100890bf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100890c1 je 0x100890e7 */
  if (C.zf) goto L_100890e7;
  /* 100890c3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 100890c8 je 0x100890dd */
  if (C.zf) goto L_100890dd;
  /* 100890ca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 100890cf je 0x100890d3 */
  if (C.zf) goto L_100890d3;
  /* 100890d1 jmp 0x100890a0 */
  goto L_100890a0;
L_100890d3:;
  /* 100890d3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 100890d6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100890da sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100890dc ret  */
  ESPCHK(0x10089080u, _esp0);
  ESP += 4; return;
L_100890dd:;
  /* 100890dd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 100890e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100890e4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100890e6 ret  */
  ESPCHK(0x10089080u, _esp0);
  ESP += 4; return;
L_100890e7:;
  /* 100890e7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 100890ea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100890ee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100890f0 ret  */
  ESPCHK(0x10089080u, _esp0);
  ESP += 4; return;
L_100890f1:;
  /* 100890f1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 100890f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100890f8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100890fa ret  */
  ESPCHK(0x10089080u, _esp0);
  ESP += 4; return;
}

/* FUN_100090fb @ 0x100890fb (89 bytes, 39 insns) */
void f_100890fb(void) {
  FTRACE(0x100890fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100890fb push ebp */
  push32((uint32_t)(EBP));
  /* 100890fc mov ebp, esp */
  EBP = (ESP);
  /* 100890fe push ebx */
  push32((uint32_t)(EBX));
  /* 100890ff push esi */
  push32((uint32_t)(ESI));
  /* 10089100 mov esi, 0x100969f4 */
  ESI = (0x100969f4u);
  /* 10089105 push edi */
  push32((uint32_t)(EDI));
  /* 10089106 push esi */
  push32((uint32_t)(ESI));
  /* 10089107 call dword ptr [0x1008e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e090))), 0x1008910du);
  /* 1008910d mov edi, dword ptr [0x1008e08c] */
  EDI = (r32((uint32_t)(0x1008e08c)));
  /* 10089113 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10089115 cmp dword ptr [0x100969f0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100969f0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008911b je 0x1008912b */
  if (C.zf) goto L_1008912b;
  /* 1008911d push esi */
  push32((uint32_t)(ESI));
  /* 1008911e call edi */
  call_ind((uint32_t)(EDI), 0x10089120u);
  /* 10089120 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10089122 call 0x1008a053 */
  push32(0x10089127u); f_1008a053();
  /* 10089127 pop ecx */
  ECX = (pop32());
  /* 10089128 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008912a pop ebx */
  EBX = (pop32());
L_1008912b:;
  /* 1008912b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1008912e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10089131 call 0x10089154 */
  push32(0x10089136u); f_10089154();
  /* 10089136 pop ecx */
  ECX = (pop32());
  /* 10089137 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1008913a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1008913c pop ecx */
  ECX = (pop32());
  /* 1008913d je 0x10089149 */
  if (C.zf) goto L_10089149;
  /* 1008913f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10089141 call 0x1008a0b4 */
  push32(0x10089146u); f_1008a0b4();
  /* 10089146 pop ecx */
  ECX = (pop32());
  /* 10089147 jmp 0x1008914c */
  goto L_1008914c;
L_10089149:;
  /* 10089149 push esi */
  push32((uint32_t)(ESI));
  /* 1008914a call edi */
  call_ind((uint32_t)(EDI), 0x1008914cu);
L_1008914c:;
  /* 1008914c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008914f pop edi */
  EDI = (pop32());
  /* 10089150 pop esi */
  ESI = (pop32());
  /* 10089151 pop ebx */
  EBX = (pop32());
  /* 10089152 pop ebp */
  EBP = (pop32());
  /* 10089153 ret  */
  ESPCHK(0x100890fbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009154 @ 0x10089154 (105 bytes, 38 insns) */
void f_10089154(void) {
  FTRACE(0x10089154u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089154 push ebp */
  push32((uint32_t)(EBP));
  /* 10089155 mov ebp, esp */
  EBP = (ESP);
  /* 10089157 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008915a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008915c jne 0x10089160 */
  if (!C.zf) goto L_10089160;
  /* 1008915e pop ebp */
  EBP = (pop32());
  /* 1008915f ret  */
  ESPCHK(0x10089154u, _esp0);
  ESP += 4; return;
L_10089160:;
  /* 10089160 cmp dword ptr [0x10096878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10096878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089167 jne 0x1008917b */
  if (!C.zf) goto L_1008917b;
  /* 10089169 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 1008916d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10089172 ja 0x100891ad */
  if ((!C.cf&&!C.zf)) goto L_100891ad;
  /* 10089174 push 1 */
  push32((uint32_t)(0x1u));
  /* 10089176 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10089178 pop eax */
  EAX = (pop32());
  /* 10089179 pop ebp */
  EBP = (pop32());
  /* 1008917a ret  */
  ESPCHK(0x10089154u, _esp0);
  ESP += 4; return;
L_1008917b:;
  /* 1008917b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 1008917e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 10089182 push ecx */
  push32((uint32_t)(ECX));
  /* 10089183 push 0 */
  push32((uint32_t)(0x0u));
  /* 10089185 push dword ptr [0x10090c20] */
  push32((uint32_t)(r32((uint32_t)(0x10090c20))));
  /* 1008918b push eax */
  push32((uint32_t)(EAX));
  /* 1008918c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1008918f push 1 */
  push32((uint32_t)(0x1u));
  /* 10089191 push eax */
  push32((uint32_t)(EAX));
  /* 10089192 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10089197 push dword ptr [0x10096888] */
  push32((uint32_t)(r32((uint32_t)(0x10096888))));
  /* 1008919d call dword ptr [0x1008e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e060))), 0x100891a3u);
  /* 100891a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100891a5 je 0x100891ad */
  if (C.zf) goto L_100891ad;
  /* 100891a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100891ab je 0x100891bb */
  if (C.zf) goto L_100891bb;
L_100891ad:;
  /* 100891ad call 0x1008bfb1 */
  push32(0x100891b2u); f_1008bfb1();
  /* 100891b2 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 100891b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100891bb:;
  /* 100891bb pop ebp */
  EBP = (pop32());
  /* 100891bc ret  */
  ESPCHK(0x10089154u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x100891c0 (104 bytes, 43 insns) */
void f_100891c0(void) {
  FTRACE(0x100891c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100891c0 push ebx */
  push32((uint32_t)(EBX));
  /* 100891c1 push esi */
  push32((uint32_t)(ESI));
  /* 100891c2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 100891c6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100891c8 jne 0x100891e2 */
  if (!C.zf) goto L_100891e2;
  /* 100891ca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 100891ce mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100891d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100891d4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100891d6 mov ebx, eax */
  EBX = (EAX);
  /* 100891d8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100891dc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100891de mov edx, ebx */
  EDX = (EBX);
  /* 100891e0 jmp 0x10089223 */
  goto L_10089223;
L_100891e2:;
  /* 100891e2 mov ecx, eax */
  ECX = (EAX);
  /* 100891e4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100891e8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 100891ec mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_100891f0:;
  /* 100891f0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100891f2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 100891f4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100891f6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 100891f8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100891fa jne 0x100891f0 */
  if (!C.zf) goto L_100891f0;
  /* 100891fc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100891fe mov esi, eax */
  ESI = (EAX);
  /* 10089200 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10089204 mov ecx, eax */
  ECX = (EAX);
  /* 10089206 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1008920a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1008920c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008920e jb 0x1008921e */
  if (C.cf) goto L_1008921e;
  /* 10089210 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089214 ja 0x1008921e */
  if ((!C.cf&&!C.zf)) goto L_1008921e;
  /* 10089216 jb 0x1008921f */
  if (C.cf) goto L_1008921f;
  /* 10089218 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008921c jbe 0x1008921f */
  if ((C.cf||C.zf)) goto L_1008921f;
L_1008921e:;
  /* 1008921e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1008921f:;
  /* 1008921f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10089221 mov eax, esi */
  EAX = (ESI);
L_10089223:;
  /* 10089223 pop esi */
  ESI = (pop32());
  /* 10089224 pop ebx */
  EBX = (pop32());
  /* 10089225 ret 0x10 */
  ESPCHK(0x100891c0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10089230 (117 bytes, 44 insns) */
void f_10089230(void) {
  FTRACE(0x10089230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089230 push ebx */
  push32((uint32_t)(EBX));
  /* 10089231 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10089235 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10089237 jne 0x10089251 */
  if (!C.zf) goto L_10089251;
  /* 10089239 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1008923d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10089241 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10089243 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10089245 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10089249 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1008924b mov eax, edx */
  EAX = (EDX);
  /* 1008924d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1008924f jmp 0x100892a1 */
  goto L_100892a1;
L_10089251:;
  /* 10089251 mov ecx, eax */
  ECX = (EAX);
  /* 10089253 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10089257 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1008925b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1008925f:;
  /* 1008925f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10089261 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10089263 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10089265 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10089267 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10089269 jne 0x1008925f */
  if (!C.zf) goto L_1008925f;
  /* 1008926b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1008926d mov ecx, eax */
  ECX = (EAX);
  /* 1008926f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10089273 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10089274 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10089278 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008927a jb 0x1008928a */
  if (C.cf) goto L_1008928a;
  /* 1008927c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089280 ja 0x1008928a */
  if ((!C.cf&&!C.zf)) goto L_1008928a;
  /* 10089282 jb 0x10089292 */
  if (C.cf) goto L_10089292;
  /* 10089284 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089288 jbe 0x10089292 */
  if ((C.cf||C.zf)) goto L_10089292;
L_1008928a:;
  /* 1008928a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008928e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10089292:;
  /* 10089292 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089296 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008929a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1008929c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1008929e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_100892a1:;
  /* 100892a1 pop ebx */
  EBX = (pop32());
  /* 100892a2 ret 0x10 */
  ESPCHK(0x10089230u, _esp0);
  ESP += 20; return;
}

