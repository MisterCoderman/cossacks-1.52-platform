#include "recomp.h"

/* ProcessAI @ 0x10101000 (16 bytes, 3 insns) */
void f_10101000(void) {
  FTRACE(0x10101000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10101000 call dword ptr [0x10116630] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116630))), 0x10101006u);
  /* 10101006 mov dword ptr [0x101163e4], eax */
  w32((uint32_t)(0x101163e4), (EAX));
  /* 1010100b jmp 0x10106d80 */
  f_10106d80(); return;
}

/* InitAI @ 0x10101010 (5654 bytes, 1474 insns) */
void f_10101010(void) {
  FTRACE(0x10101010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10101010 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101015 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10101018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010101a je 0x10101078 */
  if (C.zf) goto L_10101078;
  /* 1010101c push 0x10110020 */
  push32((uint32_t)(0x10110020u));
  /* 10101021 push 0x101161b8 */
  push32((uint32_t)(0x101161b8u));
  /* 10101026 call eax */
  call_ind((uint32_t)(EAX), 0x10101028u);
  /* 10101028 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010102d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101032 je 0x10101078 */
  if (C.zf) goto L_10101078;
  /* 10101034 push 0x10110018 */
  push32((uint32_t)(0x10110018u));
  /* 10101039 push 0x10116158 */
  push32((uint32_t)(0x10116158u));
  /* 1010103e call eax */
  call_ind((uint32_t)(EAX), 0x10101040u);
  /* 10101040 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010104a je 0x10101078 */
  if (C.zf) goto L_10101078;
  /* 1010104c push 0x10110010 */
  push32((uint32_t)(0x10110010u));
  /* 10101051 push 0x101161b0 */
  push32((uint32_t)(0x101161b0u));
  /* 10101056 call eax */
  call_ind((uint32_t)(EAX), 0x10101058u);
  /* 10101058 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101062 je 0x10101078 */
  if (C.zf) goto L_10101078;
  /* 10101064 push 0x10110008 */
  push32((uint32_t)(0x10110008u));
  /* 10101069 push 0x101161c0 */
  push32((uint32_t)(0x101161c0u));
  /* 1010106e call eax */
  call_ind((uint32_t)(EAX), 0x10101070u);
  /* 10101070 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10101078:;
  /* 10101078 mov ecx, dword ptr [0x10116528] */
  ECX = (r32((uint32_t)(0x10116528)));
  /* 1010107e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10101080 je 0x10101096 */
  if (C.zf) goto L_10101096;
  /* 10101082 push 0x1010fffc */
  push32((uint32_t)(0x1010fffcu));
  /* 10101087 push 0x101137c0 */
  push32((uint32_t)(0x101137c0u));
  /* 1010108c call ecx */
  call_ind((uint32_t)(ECX), 0x1010108eu);
  /* 1010108e mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10101096:;
  /* 10101096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101098 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 1010109e push 0x1010ffe8 */
  push32((uint32_t)(0x1010ffe8u));
  /* 101010a3 push 0x10113a30 */
  push32((uint32_t)(0x10113a30u));
  /* 101010a8 call eax */
  call_ind((uint32_t)(EAX), 0x101010aau);
  /* 101010aa mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101010af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101010b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101010b4 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 101010ba push 0x1010ffd4 */
  push32((uint32_t)(0x1010ffd4u));
  /* 101010bf push 0x10113a28 */
  push32((uint32_t)(0x10113a28u));
  /* 101010c4 call eax */
  call_ind((uint32_t)(EAX), 0x101010c6u);
  /* 101010c6 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101010cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101010ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101010d0 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 101010d6 push 0x1010ffc0 */
  push32((uint32_t)(0x1010ffc0u));
  /* 101010db push 0x10113a20 */
  push32((uint32_t)(0x10113a20u));
  /* 101010e0 call eax */
  call_ind((uint32_t)(EAX), 0x101010e2u);
  /* 101010e2 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101010e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101010ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101010ec je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 101010f2 push 0x1010ffac */
  push32((uint32_t)(0x1010ffacu));
  /* 101010f7 push 0x10113a68 */
  push32((uint32_t)(0x10113a68u));
  /* 101010fc call eax */
  call_ind((uint32_t)(EAX), 0x101010feu);
  /* 101010fe mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101108 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 1010110e push 0x1010ff98 */
  push32((uint32_t)(0x1010ff98u));
  /* 10101113 push 0x10113a58 */
  push32((uint32_t)(0x10113a58u));
  /* 10101118 call eax */
  call_ind((uint32_t)(EAX), 0x1010111au);
  /* 1010111a mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010111f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101124 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 1010112a push 0x1010ff84 */
  push32((uint32_t)(0x1010ff84u));
  /* 1010112f push 0x10113a50 */
  push32((uint32_t)(0x10113a50u));
  /* 10101134 call eax */
  call_ind((uint32_t)(EAX), 0x10101136u);
  /* 10101136 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010113b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101140 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 10101146 push 0x1010ff70 */
  push32((uint32_t)(0x1010ff70u));
  /* 1010114b push 0x10113808 */
  push32((uint32_t)(0x10113808u));
  /* 10101150 call eax */
  call_ind((uint32_t)(EAX), 0x10101152u);
  /* 10101152 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010115a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010115c je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 10101162 push 0x1010ff5c */
  push32((uint32_t)(0x1010ff5cu));
  /* 10101167 push 0x101137f8 */
  push32((uint32_t)(0x101137f8u));
  /* 1010116c call eax */
  call_ind((uint32_t)(EAX), 0x1010116eu);
  /* 1010116e mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101178 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 1010117e push 0x1010ff48 */
  push32((uint32_t)(0x1010ff48u));
  /* 10101183 push 0x101139f0 */
  push32((uint32_t)(0x101139f0u));
  /* 10101188 call eax */
  call_ind((uint32_t)(EAX), 0x1010118au);
  /* 1010118a mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101194 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 1010119a push 0x1010ff34 */
  push32((uint32_t)(0x1010ff34u));
  /* 1010119f push 0x101139e8 */
  push32((uint32_t)(0x101139e8u));
  /* 101011a4 call eax */
  call_ind((uint32_t)(EAX), 0x101011a6u);
  /* 101011a6 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101011ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101011ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101011b0 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 101011b6 push 0x1010ff20 */
  push32((uint32_t)(0x1010ff20u));
  /* 101011bb push 0x101139e0 */
  push32((uint32_t)(0x101139e0u));
  /* 101011c0 call eax */
  call_ind((uint32_t)(EAX), 0x101011c2u);
  /* 101011c2 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101011c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101011ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101011cc je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 101011d2 push 0x1010ff0c */
  push32((uint32_t)(0x1010ff0cu));
  /* 101011d7 push 0x101139d8 */
  push32((uint32_t)(0x101139d8u));
  /* 101011dc call eax */
  call_ind((uint32_t)(EAX), 0x101011deu);
  /* 101011de mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101011e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101011e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101011e8 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 101011ee push 0x1010ffe8 */
  push32((uint32_t)(0x1010ffe8u));
  /* 101011f3 push 0x10113a30 */
  push32((uint32_t)(0x10113a30u));
  /* 101011f8 call eax */
  call_ind((uint32_t)(EAX), 0x101011fau);
  /* 101011fa mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101011ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101204 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 1010120a push 0x1010ffd4 */
  push32((uint32_t)(0x1010ffd4u));
  /* 1010120f push 0x10113a28 */
  push32((uint32_t)(0x10113a28u));
  /* 10101214 call eax */
  call_ind((uint32_t)(EAX), 0x10101216u);
  /* 10101216 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010121b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010121e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101220 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 10101226 push 0x1010ffc0 */
  push32((uint32_t)(0x1010ffc0u));
  /* 1010122b push 0x10113a20 */
  push32((uint32_t)(0x10113a20u));
  /* 10101230 call eax */
  call_ind((uint32_t)(EAX), 0x10101232u);
  /* 10101232 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010123c je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 10101242 push 0x1010ffac */
  push32((uint32_t)(0x1010ffacu));
  /* 10101247 push 0x10113a68 */
  push32((uint32_t)(0x10113a68u));
  /* 1010124c call eax */
  call_ind((uint32_t)(EAX), 0x1010124eu);
  /* 1010124e mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101258 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 1010125e push 0x1010ff98 */
  push32((uint32_t)(0x1010ff98u));
  /* 10101263 push 0x10113a58 */
  push32((uint32_t)(0x10113a58u));
  /* 10101268 call eax */
  call_ind((uint32_t)(EAX), 0x1010126au);
  /* 1010126a mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101274 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 1010127a push 0x1010ff84 */
  push32((uint32_t)(0x1010ff84u));
  /* 1010127f push 0x10113a50 */
  push32((uint32_t)(0x10113a50u));
  /* 10101284 call eax */
  call_ind((uint32_t)(EAX), 0x10101286u);
  /* 10101286 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010128e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101290 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 10101296 push 0x1010ff70 */
  push32((uint32_t)(0x1010ff70u));
  /* 1010129b push 0x10113808 */
  push32((uint32_t)(0x10113808u));
  /* 101012a0 call eax */
  call_ind((uint32_t)(EAX), 0x101012a2u);
  /* 101012a2 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101012a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101012aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101012ac je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 101012ae push 0x1010ff5c */
  push32((uint32_t)(0x1010ff5cu));
  /* 101012b3 push 0x101137f8 */
  push32((uint32_t)(0x101137f8u));
  /* 101012b8 call eax */
  call_ind((uint32_t)(EAX), 0x101012bau);
  /* 101012ba mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101012bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101012c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101012c4 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 101012c6 push 0x1010ff48 */
  push32((uint32_t)(0x1010ff48u));
  /* 101012cb push 0x101139f0 */
  push32((uint32_t)(0x101139f0u));
  /* 101012d0 call eax */
  call_ind((uint32_t)(EAX), 0x101012d2u);
  /* 101012d2 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101012d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101012da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101012dc je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 101012de push 0x1010ff34 */
  push32((uint32_t)(0x1010ff34u));
  /* 101012e3 push 0x101139e8 */
  push32((uint32_t)(0x101139e8u));
  /* 101012e8 call eax */
  call_ind((uint32_t)(EAX), 0x101012eau);
  /* 101012ea mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101012ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101012f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101012f4 je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 101012f6 push 0x1010ff20 */
  push32((uint32_t)(0x1010ff20u));
  /* 101012fb push 0x101139e0 */
  push32((uint32_t)(0x101139e0u));
  /* 10101300 call eax */
  call_ind((uint32_t)(EAX), 0x10101302u);
  /* 10101302 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010130c je 0x10101322 */
  if (C.zf) goto L_10101322;
  /* 1010130e push 0x1010ff0c */
  push32((uint32_t)(0x1010ff0cu));
  /* 10101313 push 0x101139d8 */
  push32((uint32_t)(0x101139d8u));
  /* 10101318 call eax */
  call_ind((uint32_t)(EAX), 0x1010131au);
  /* 1010131a mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10101322:;
  /* 10101322 mov ecx, dword ptr [0x10116528] */
  ECX = (r32((uint32_t)(0x10116528)));
  /* 10101328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1010132a je 0x10101340 */
  if (C.zf) goto L_10101340;
  /* 1010132c push 0x1010fefc */
  push32((uint32_t)(0x1010fefcu));
  /* 10101331 push 0x101137b0 */
  push32((uint32_t)(0x101137b0u));
  /* 10101336 call ecx */
  call_ind((uint32_t)(ECX), 0x10101338u);
  /* 10101338 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010133d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10101340:;
  /* 10101340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101342 je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 10101348 push 0x1010fee8 */
  push32((uint32_t)(0x1010fee8u));
  /* 1010134d push 0x10113788 */
  push32((uint32_t)(0x10113788u));
  /* 10101352 call eax */
  call_ind((uint32_t)(EAX), 0x10101354u);
  /* 10101354 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010135c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010135e je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 10101364 push 0x1010fed0 */
  push32((uint32_t)(0x1010fed0u));
  /* 10101369 push 0x10113780 */
  push32((uint32_t)(0x10113780u));
  /* 1010136e call eax */
  call_ind((uint32_t)(EAX), 0x10101370u);
  /* 10101370 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010137a je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 10101380 push 0x1010feb8 */
  push32((uint32_t)(0x1010feb8u));
  /* 10101385 push 0x10113778 */
  push32((uint32_t)(0x10113778u));
  /* 1010138a call eax */
  call_ind((uint32_t)(EAX), 0x1010138cu);
  /* 1010138c mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101396 je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 1010139c push 0x1010fea0 */
  push32((uint32_t)(0x1010fea0u));
  /* 101013a1 push 0x10116448 */
  push32((uint32_t)(0x10116448u));
  /* 101013a6 call eax */
  call_ind((uint32_t)(EAX), 0x101013a8u);
  /* 101013a8 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101013ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101013b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101013b2 je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 101013b8 push 0x1010fe88 */
  push32((uint32_t)(0x1010fe88u));
  /* 101013bd push 0x10116440 */
  push32((uint32_t)(0x10116440u));
  /* 101013c2 call eax */
  call_ind((uint32_t)(EAX), 0x101013c4u);
  /* 101013c4 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101013c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101013cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101013ce je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 101013d4 push 0x1010fe70 */
  push32((uint32_t)(0x1010fe70u));
  /* 101013d9 push 0x10116438 */
  push32((uint32_t)(0x10116438u));
  /* 101013de call eax */
  call_ind((uint32_t)(EAX), 0x101013e0u);
  /* 101013e0 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101013e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101013e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101013ea je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 101013f0 push 0x1010fe5c */
  push32((uint32_t)(0x1010fe5cu));
  /* 101013f5 push 0x101164c0 */
  push32((uint32_t)(0x101164c0u));
  /* 101013fa call eax */
  call_ind((uint32_t)(EAX), 0x101013fcu);
  /* 101013fc mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101406 je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 1010140c push 0x1010fe44 */
  push32((uint32_t)(0x1010fe44u));
  /* 10101411 push 0x101164b8 */
  push32((uint32_t)(0x101164b8u));
  /* 10101416 call eax */
  call_ind((uint32_t)(EAX), 0x10101418u);
  /* 10101418 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010141d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101422 je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 10101428 push 0x1010fe2c */
  push32((uint32_t)(0x1010fe2cu));
  /* 1010142d push 0x10116508 */
  push32((uint32_t)(0x10116508u));
  /* 10101432 call eax */
  call_ind((uint32_t)(EAX), 0x10101434u);
  /* 10101434 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010143c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010143e je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 10101444 push 0x1010fe14 */
  push32((uint32_t)(0x1010fe14u));
  /* 10101449 push 0x10116500 */
  push32((uint32_t)(0x10116500u));
  /* 1010144e call eax */
  call_ind((uint32_t)(EAX), 0x10101450u);
  /* 10101450 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010145a je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 10101460 push 0x1010fdfc */
  push32((uint32_t)(0x1010fdfcu));
  /* 10101465 push 0x101164f8 */
  push32((uint32_t)(0x101164f8u));
  /* 1010146a call eax */
  call_ind((uint32_t)(EAX), 0x1010146cu);
  /* 1010146c mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101476 je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 1010147c push 0x1010fde4 */
  push32((uint32_t)(0x1010fde4u));
  /* 10101481 push 0x101164f0 */
  push32((uint32_t)(0x101164f0u));
  /* 10101486 call eax */
  call_ind((uint32_t)(EAX), 0x10101488u);
  /* 10101488 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010148d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101492 je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 10101498 push 0x1010fee8 */
  push32((uint32_t)(0x1010fee8u));
  /* 1010149d push 0x10113788 */
  push32((uint32_t)(0x10113788u));
  /* 101014a2 call eax */
  call_ind((uint32_t)(EAX), 0x101014a4u);
  /* 101014a4 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101014a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101014ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101014ae je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 101014b4 push 0x1010fed0 */
  push32((uint32_t)(0x1010fed0u));
  /* 101014b9 push 0x10113780 */
  push32((uint32_t)(0x10113780u));
  /* 101014be call eax */
  call_ind((uint32_t)(EAX), 0x101014c0u);
  /* 101014c0 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101014c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101014c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101014ca je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 101014d0 push 0x1010feb8 */
  push32((uint32_t)(0x1010feb8u));
  /* 101014d5 push 0x10113778 */
  push32((uint32_t)(0x10113778u));
  /* 101014da call eax */
  call_ind((uint32_t)(EAX), 0x101014dcu);
  /* 101014dc mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101014e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101014e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101014e6 je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 101014ec push 0x1010fea0 */
  push32((uint32_t)(0x1010fea0u));
  /* 101014f1 push 0x10116448 */
  push32((uint32_t)(0x10116448u));
  /* 101014f6 call eax */
  call_ind((uint32_t)(EAX), 0x101014f8u);
  /* 101014f8 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101014fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101502 je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 10101508 push 0x1010fe88 */
  push32((uint32_t)(0x1010fe88u));
  /* 1010150d push 0x10116440 */
  push32((uint32_t)(0x10116440u));
  /* 10101512 call eax */
  call_ind((uint32_t)(EAX), 0x10101514u);
  /* 10101514 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010151e je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 10101524 push 0x1010fe70 */
  push32((uint32_t)(0x1010fe70u));
  /* 10101529 push 0x10116438 */
  push32((uint32_t)(0x10116438u));
  /* 1010152e call eax */
  call_ind((uint32_t)(EAX), 0x10101530u);
  /* 10101530 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010153a je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 10101540 push 0x1010fe5c */
  push32((uint32_t)(0x1010fe5cu));
  /* 10101545 push 0x101164c0 */
  push32((uint32_t)(0x101164c0u));
  /* 1010154a call eax */
  call_ind((uint32_t)(EAX), 0x1010154cu);
  /* 1010154c mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101556 je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 10101558 push 0x1010fe44 */
  push32((uint32_t)(0x1010fe44u));
  /* 1010155d push 0x101164b8 */
  push32((uint32_t)(0x101164b8u));
  /* 10101562 call eax */
  call_ind((uint32_t)(EAX), 0x10101564u);
  /* 10101564 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010156c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010156e je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 10101570 push 0x1010fe2c */
  push32((uint32_t)(0x1010fe2cu));
  /* 10101575 push 0x10116508 */
  push32((uint32_t)(0x10116508u));
  /* 1010157a call eax */
  call_ind((uint32_t)(EAX), 0x1010157cu);
  /* 1010157c mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101586 je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 10101588 push 0x1010fe14 */
  push32((uint32_t)(0x1010fe14u));
  /* 1010158d push 0x10116500 */
  push32((uint32_t)(0x10116500u));
  /* 10101592 call eax */
  call_ind((uint32_t)(EAX), 0x10101594u);
  /* 10101594 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010159e je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 101015a0 push 0x1010fdfc */
  push32((uint32_t)(0x1010fdfcu));
  /* 101015a5 push 0x101164f8 */
  push32((uint32_t)(0x101164f8u));
  /* 101015aa call eax */
  call_ind((uint32_t)(EAX), 0x101015acu);
  /* 101015ac mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101015b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101015b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101015b6 je 0x101015c7 */
  if (C.zf) goto L_101015c7;
  /* 101015b8 push 0x1010fde4 */
  push32((uint32_t)(0x1010fde4u));
  /* 101015bd push 0x101164f0 */
  push32((uint32_t)(0x101164f0u));
  /* 101015c2 call eax */
  call_ind((uint32_t)(EAX), 0x101015c4u);
  /* 101015c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101015c7:;
  /* 101015c7 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101015cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101015ce je 0x101015df */
  if (C.zf) goto L_101015df;
  /* 101015d0 push 0x1010fdd0 */
  push32((uint32_t)(0x1010fdd0u));
  /* 101015d5 push 0x10116110 */
  push32((uint32_t)(0x10116110u));
  /* 101015da call eax */
  call_ind((uint32_t)(EAX), 0x101015dcu);
  /* 101015dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101015df:;
  /* 101015df call dword ptr [0x10116630] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116630))), 0x101015e5u);
  /* 101015e5 mov dword ptr [0x101163e4], eax */
  w32((uint32_t)(0x101163e4), (EAX));
  /* 101015ea call 0x10102700 */
  push32(0x101015efu); f_10102700();
  /* 101015ef mov ecx, eax */
  ECX = (EAX);
  /* 101015f1 mov eax, dword ptr [0x101163e4] */
  EAX = (r32((uint32_t)(0x101163e4)));
  /* 101015f6 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 101015fc mov dword ptr [eax*4 + 0x101160c8], ecx */
  w32((uint32_t)(EAX*4 + 0x101160c8), (ECX));
  /* 10101603 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10101606 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10101609 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 1010160c lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 1010160f shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10101612 mov dword ptr [eax + 0x10113c20], 0 */
  w32((uint32_t)(EAX + 0x10113c20), (0x0u));
  /* 1010161c mov dword ptr [eax + 0x10113db4], 0 */
  w32((uint32_t)(EAX + 0x10113db4), (0x0u));
  /* 10101626 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010162b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010162d je 0x1010163e */
  if (C.zf) goto L_1010163e;
  /* 1010162f push 0x1010fdb4 */
  push32((uint32_t)(0x1010fdb4u));
  /* 10101634 push 0x10116200 */
  push32((uint32_t)(0x10116200u));
  /* 10101639 call eax */
  call_ind((uint32_t)(EAX), 0x1010163bu);
  /* 1010163b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010163e:;
  /* 1010163e mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101645 je 0x10101656 */
  if (C.zf) goto L_10101656;
  /* 10101647 push 0x1010fda0 */
  push32((uint32_t)(0x1010fda0u));
  /* 1010164c push 0x101139b8 */
  push32((uint32_t)(0x101139b8u));
  /* 10101651 call eax */
  call_ind((uint32_t)(EAX), 0x10101653u);
  /* 10101653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10101656:;
  /* 10101656 push ebp */
  push32((uint32_t)(EBP));
  /* 10101657 push esi */
  push32((uint32_t)(ESI));
  /* 10101658 push edi */
  push32((uint32_t)(EDI));
  /* 10101659 call 0x10102700 */
  push32(0x1010165eu); f_10102700();
  /* 1010165e mov edx, eax */
  EDX = (EAX);
  /* 10101660 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10101663 cmp al, 2 */
  { uint32_t _a=(AL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10101665 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 10101669 mov edi, 0x1010fd8c */
  EDI = (0x1010fd8cu);
  /* 1010166e je 0x10101675 */
  if (C.zf) goto L_10101675;
  /* 10101670 mov edi, 0x1010fd78 */
  EDI = (0x1010fd78u);
L_10101675:;
  /* 10101675 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10101678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010167a repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1010167c not ecx */
  ECX = (~(ECX));
  /* 1010167e sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10101680 and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 10101683 mov eax, ecx */
  EAX = (ECX);
  /* 10101685 mov esi, edi */
  ESI = (EDI);
  /* 10101687 mov edi, ebp */
  EDI = (EBP);
  /* 10101689 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1010168c rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1010168e mov ecx, eax */
  ECX = (EAX);
  /* 10101690 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10101693 cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10101696 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 10101698 lea edx, [esp + 0x3c] */
  EDX = ((uint32_t)(ESP + 0x3c));
  /* 1010169c mov edi, 0x1010fd68 */
  EDI = (0x1010fd68u);
  /* 101016a1 je 0x101016a8 */
  if (C.zf) goto L_101016a8;
  /* 101016a3 mov edi, 0x1010fd58 */
  EDI = (0x1010fd58u);
L_101016a8:;
  /* 101016a8 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101016ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101016ad repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 101016af not ecx */
  ECX = (~(ECX));
  /* 101016b1 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101016b3 mov eax, ecx */
  EAX = (ECX);
  /* 101016b5 mov esi, edi */
  ESI = (EDI);
  /* 101016b7 mov edi, edx */
  EDI = (EDX);
  /* 101016b9 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101016bc rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101016be mov ecx, eax */
  ECX = (EAX);
  /* 101016c0 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101016c5 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101016c8 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 101016ca pop edi */
  EDI = (pop32());
  /* 101016cb pop esi */
  ESI = (pop32());
  /* 101016cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101016ce pop ebp */
  EBP = (pop32());
  /* 101016cf je 0x1010172d */
  if (C.zf) goto L_1010172d;
  /* 101016d1 push 0x1010fda0 */
  push32((uint32_t)(0x1010fda0u));
  /* 101016d6 push 0x101139b8 */
  push32((uint32_t)(0x101139b8u));
  /* 101016db call eax */
  call_ind((uint32_t)(EAX), 0x101016ddu);
  /* 101016dd mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101016e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101016e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101016e7 je 0x1010172d */
  if (C.zf) goto L_1010172d;
  /* 101016e9 push 0x1010fd40 */
  push32((uint32_t)(0x1010fd40u));
  /* 101016ee push 0x101163a8 */
  push32((uint32_t)(0x101163a8u));
  /* 101016f3 call eax */
  call_ind((uint32_t)(EAX), 0x101016f5u);
  /* 101016f5 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101016fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101016fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101016ff je 0x1010172d */
  if (C.zf) goto L_1010172d;
  /* 10101701 push 0x1010fd28 */
  push32((uint32_t)(0x1010fd28u));
  /* 10101706 push 0x10116458 */
  push32((uint32_t)(0x10116458u));
  /* 1010170b call eax */
  call_ind((uint32_t)(EAX), 0x1010170du);
  /* 1010170d mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101715 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101717 je 0x1010172d */
  if (C.zf) goto L_1010172d;
  /* 10101719 push 0x1010fd14 */
  push32((uint32_t)(0x1010fd14u));
  /* 1010171e push 0x10113830 */
  push32((uint32_t)(0x10113830u));
  /* 10101723 call eax */
  call_ind((uint32_t)(EAX), 0x10101725u);
  /* 10101725 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 1010172a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010172d:;
  /* 1010172d mov ecx, dword ptr [0x1011652c] */
  ECX = (r32((uint32_t)(0x1011652c)));
  /* 10101733 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10101735 je 0x10101763 */
  if (C.zf) goto L_10101763;
  /* 10101737 push 0x1010fcfc */
  push32((uint32_t)(0x1010fcfcu));
  /* 1010173c push 0x10116390 */
  push32((uint32_t)(0x10116390u));
  /* 10101741 call ecx */
  call_ind((uint32_t)(ECX), 0x10101743u);
  /* 10101743 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101748 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010174b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010174d je 0x1010175e */
  if (C.zf) goto L_1010175e;
  /* 1010174f push 0x1010fce4 */
  push32((uint32_t)(0x1010fce4u));
  /* 10101754 push 0x101160f8 */
  push32((uint32_t)(0x101160f8u));
  /* 10101759 call eax */
  call_ind((uint32_t)(EAX), 0x1010175bu);
  /* 1010175b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010175e:;
  /* 1010175e mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
L_10101763:;
  /* 10101763 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101765 je 0x10101776 */
  if (C.zf) goto L_10101776;
  /* 10101767 push 0x1010fcd0 */
  push32((uint32_t)(0x1010fcd0u));
  /* 1010176c push 0x10113770 */
  push32((uint32_t)(0x10113770u));
  /* 10101771 call eax */
  call_ind((uint32_t)(EAX), 0x10101773u);
  /* 10101773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10101776:;
  /* 10101776 push 0x1010fcbc */
  push32((uint32_t)(0x1010fcbcu));
  /* 1010177b call 0x101026d0 */
  push32(0x10101780u); f_101026d0();
  /* 10101780 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010178a je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101790 push 0x1010fcbc */
  push32((uint32_t)(0x1010fcbcu));
  /* 10101795 push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 1010179a call eax */
  call_ind((uint32_t)(EAX), 0x1010179cu);
  /* 1010179c mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101017a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101017a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101017a6 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 101017ac push 0x1010fca8 */
  push32((uint32_t)(0x1010fca8u));
  /* 101017b1 push 0x101162c0 */
  push32((uint32_t)(0x101162c0u));
  /* 101017b6 call eax */
  call_ind((uint32_t)(EAX), 0x101017b8u);
  /* 101017b8 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101017bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101017c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101017c2 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 101017c8 push 0x1010fc94 */
  push32((uint32_t)(0x1010fc94u));
  /* 101017cd push 0x10116290 */
  push32((uint32_t)(0x10116290u));
  /* 101017d2 call eax */
  call_ind((uint32_t)(EAX), 0x101017d4u);
  /* 101017d4 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101017d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101017dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101017de je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 101017e4 push 0x1010fc7c */
  push32((uint32_t)(0x1010fc7cu));
  /* 101017e9 push 0x10116210 */
  push32((uint32_t)(0x10116210u));
  /* 101017ee call eax */
  call_ind((uint32_t)(EAX), 0x101017f0u);
  /* 101017f0 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101017f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101017f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101017fa je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101800 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 10101804 push ecx */
  push32((uint32_t)(ECX));
  /* 10101805 push 0x101164e0 */
  push32((uint32_t)(0x101164e0u));
  /* 1010180a call eax */
  call_ind((uint32_t)(EAX), 0x1010180cu);
  /* 1010180c mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101811 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101814 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101816 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 1010181c push 0x1010fc70 */
  push32((uint32_t)(0x1010fc70u));
  /* 10101821 push 0x10116460 */
  push32((uint32_t)(0x10116460u));
  /* 10101826 call eax */
  call_ind((uint32_t)(EAX), 0x10101828u);
  /* 10101828 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 1010182d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101830 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101832 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101838 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 1010183c push edx */
  push32((uint32_t)(EDX));
  /* 1010183d push 0x101160b0 */
  push32((uint32_t)(0x101160b0u));
  /* 10101842 call eax */
  call_ind((uint32_t)(EAX), 0x10101844u);
  /* 10101844 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101849 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010184c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010184e je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101854 push 0x1010fc64 */
  push32((uint32_t)(0x1010fc64u));
  /* 10101859 push 0x101164a0 */
  push32((uint32_t)(0x101164a0u));
  /* 1010185e call eax */
  call_ind((uint32_t)(EAX), 0x10101860u);
  /* 10101860 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101865 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010186a je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101870 push 0x1010fc58 */
  push32((uint32_t)(0x1010fc58u));
  /* 10101875 push 0x10113798 */
  push32((uint32_t)(0x10113798u));
  /* 1010187a call eax */
  call_ind((uint32_t)(EAX), 0x1010187cu);
  /* 1010187c mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101881 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101886 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 1010188c push 0x1010fc48 */
  push32((uint32_t)(0x1010fc48u));
  /* 10101891 push 0x101139f8 */
  push32((uint32_t)(0x101139f8u));
  /* 10101896 call eax */
  call_ind((uint32_t)(EAX), 0x10101898u);
  /* 10101898 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 1010189d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101018a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101018a2 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 101018a8 push 0x1010fc3c */
  push32((uint32_t)(0x1010fc3cu));
  /* 101018ad push 0x10116320 */
  push32((uint32_t)(0x10116320u));
  /* 101018b2 call eax */
  call_ind((uint32_t)(EAX), 0x101018b4u);
  /* 101018b4 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101018b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101018bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101018be je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 101018c4 push 0x1010fc28 */
  push32((uint32_t)(0x1010fc28u));
  /* 101018c9 push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 101018ce call eax */
  call_ind((uint32_t)(EAX), 0x101018d0u);
  /* 101018d0 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101018d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101018d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101018da je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 101018e0 push 0x1010fc1c */
  push32((uint32_t)(0x1010fc1cu));
  /* 101018e5 push 0x10116108 */
  push32((uint32_t)(0x10116108u));
  /* 101018ea call eax */
  call_ind((uint32_t)(EAX), 0x101018ecu);
  /* 101018ec mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101018f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101018f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101018f6 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 101018fc push 0x1010fc08 */
  push32((uint32_t)(0x1010fc08u));
  /* 10101901 push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 10101906 call eax */
  call_ind((uint32_t)(EAX), 0x10101908u);
  /* 10101908 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 1010190d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101910 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101912 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101918 push 0x1010fbfc */
  push32((uint32_t)(0x1010fbfcu));
  /* 1010191d push 0x10116388 */
  push32((uint32_t)(0x10116388u));
  /* 10101922 call eax */
  call_ind((uint32_t)(EAX), 0x10101924u);
  /* 10101924 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010192c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010192e je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101934 push 0x1010fbf0 */
  push32((uint32_t)(0x1010fbf0u));
  /* 10101939 push 0x10116100 */
  push32((uint32_t)(0x10116100u));
  /* 1010193e call eax */
  call_ind((uint32_t)(EAX), 0x10101940u);
  /* 10101940 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010194a je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101950 push 0x1010fbe0 */
  push32((uint32_t)(0x1010fbe0u));
  /* 10101955 push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 1010195a call eax */
  call_ind((uint32_t)(EAX), 0x1010195cu);
  /* 1010195c mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101961 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101966 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 1010196c push 0x1010fbc8 */
  push32((uint32_t)(0x1010fbc8u));
  /* 10101971 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10101976 call eax */
  call_ind((uint32_t)(EAX), 0x10101978u);
  /* 10101978 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 1010197d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101982 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101988 push 0x1010fbb8 */
  push32((uint32_t)(0x1010fbb8u));
  /* 1010198d push 0x10116118 */
  push32((uint32_t)(0x10116118u));
  /* 10101992 call eax */
  call_ind((uint32_t)(EAX), 0x10101994u);
  /* 10101994 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010199c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010199e je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 101019a4 push 0x1010fba4 */
  push32((uint32_t)(0x1010fba4u));
  /* 101019a9 push 0x10113748 */
  push32((uint32_t)(0x10113748u));
  /* 101019ae call eax */
  call_ind((uint32_t)(EAX), 0x101019b0u);
  /* 101019b0 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101019b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101019b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101019ba je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 101019c0 push 0x1010fb98 */
  push32((uint32_t)(0x1010fb98u));
  /* 101019c5 push 0x101139a8 */
  push32((uint32_t)(0x101139a8u));
  /* 101019ca call eax */
  call_ind((uint32_t)(EAX), 0x101019ccu);
  /* 101019cc mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101019d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101019d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101019d6 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 101019dc push 0x1010fb8c */
  push32((uint32_t)(0x1010fb8cu));
  /* 101019e1 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 101019e6 call eax */
  call_ind((uint32_t)(EAX), 0x101019e8u);
  /* 101019e8 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 101019ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101019f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101019f2 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 101019f8 push 0x1010fb80 */
  push32((uint32_t)(0x1010fb80u));
  /* 101019fd push 0x10116318 */
  push32((uint32_t)(0x10116318u));
  /* 10101a02 call eax */
  call_ind((uint32_t)(EAX), 0x10101a04u);
  /* 10101a04 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101a09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101a0e je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101a14 push 0x1010fb6c */
  push32((uint32_t)(0x1010fb6cu));
  /* 10101a19 push 0x10116228 */
  push32((uint32_t)(0x10116228u));
  /* 10101a1e call eax */
  call_ind((uint32_t)(EAX), 0x10101a20u);
  /* 10101a20 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101a25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101a28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101a2a je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101a30 push 0x1010fb60 */
  push32((uint32_t)(0x1010fb60u));
  /* 10101a35 push 0x10116408 */
  push32((uint32_t)(0x10116408u));
  /* 10101a3a call eax */
  call_ind((uint32_t)(EAX), 0x10101a3cu);
  /* 10101a3c mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101a46 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101a48 push 0x1010fb54 */
  push32((uint32_t)(0x1010fb54u));
  /* 10101a4d push 0x10113a18 */
  push32((uint32_t)(0x10113a18u));
  /* 10101a52 call eax */
  call_ind((uint32_t)(EAX), 0x10101a54u);
  /* 10101a54 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101a5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101a5e je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101a60 push 0x1010fb48 */
  push32((uint32_t)(0x1010fb48u));
  /* 10101a65 push 0x101160c0 */
  push32((uint32_t)(0x101160c0u));
  /* 10101a6a call eax */
  call_ind((uint32_t)(EAX), 0x10101a6cu);
  /* 10101a6c mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101a71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101a76 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101a78 push 0x1010fb3c */
  push32((uint32_t)(0x1010fb3cu));
  /* 10101a7d push 0x101164c8 */
  push32((uint32_t)(0x101164c8u));
  /* 10101a82 call eax */
  call_ind((uint32_t)(EAX), 0x10101a84u);
  /* 10101a84 mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101a8e je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101a90 push 0x1010fb30 */
  push32((uint32_t)(0x1010fb30u));
  /* 10101a95 push 0x101160b8 */
  push32((uint32_t)(0x101160b8u));
  /* 10101a9a call eax */
  call_ind((uint32_t)(EAX), 0x10101a9cu);
  /* 10101a9c mov eax, dword ptr [0x10116528] */
  EAX = (r32((uint32_t)(0x10116528)));
  /* 10101aa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101aa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101aa6 je 0x10101ab7 */
  if (C.zf) goto L_10101ab7;
  /* 10101aa8 push 0x1010fb20 */
  push32((uint32_t)(0x1010fb20u));
  /* 10101aad push 0x101139d0 */
  push32((uint32_t)(0x101139d0u));
  /* 10101ab2 call eax */
  call_ind((uint32_t)(EAX), 0x10101ab4u);
  /* 10101ab4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10101ab7:;
  /* 10101ab7 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101abc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101abe je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101ac4 push 0x1010fb0c */
  push32((uint32_t)(0x1010fb0cu));
  /* 10101ac9 push 0x101164a8 */
  push32((uint32_t)(0x101164a8u));
  /* 10101ace call eax */
  call_ind((uint32_t)(EAX), 0x10101ad0u);
  /* 10101ad0 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101ad5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101ada je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101ae0 push 0x1010faf8 */
  push32((uint32_t)(0x1010faf8u));
  /* 10101ae5 push 0x10116230 */
  push32((uint32_t)(0x10116230u));
  /* 10101aea call eax */
  call_ind((uint32_t)(EAX), 0x10101aecu);
  /* 10101aec mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101af1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101af4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101af6 je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101afc push 0x1010faf0 */
  push32((uint32_t)(0x1010faf0u));
  /* 10101b01 push 0x10113790 */
  push32((uint32_t)(0x10113790u));
  /* 10101b06 call eax */
  call_ind((uint32_t)(EAX), 0x10101b08u);
  /* 10101b08 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101b0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101b10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101b12 je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101b18 push 0x1010fad8 */
  push32((uint32_t)(0x1010fad8u));
  /* 10101b1d push 0x10116480 */
  push32((uint32_t)(0x10116480u));
  /* 10101b22 call eax */
  call_ind((uint32_t)(EAX), 0x10101b24u);
  /* 10101b24 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101b29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101b2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101b2e je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101b34 push 0x1010fabc */
  push32((uint32_t)(0x1010fabcu));
  /* 10101b39 push 0x10116488 */
  push32((uint32_t)(0x10116488u));
  /* 10101b3e call eax */
  call_ind((uint32_t)(EAX), 0x10101b40u);
  /* 10101b40 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101b45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101b4a je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101b50 push 0x1010faa0 */
  push32((uint32_t)(0x1010faa0u));
  /* 10101b55 push 0x10116470 */
  push32((uint32_t)(0x10116470u));
  /* 10101b5a call eax */
  call_ind((uint32_t)(EAX), 0x10101b5cu);
  /* 10101b5c mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101b61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101b64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101b66 je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101b6c push 0x1010fa84 */
  push32((uint32_t)(0x1010fa84u));
  /* 10101b71 push 0x10116478 */
  push32((uint32_t)(0x10116478u));
  /* 10101b76 call eax */
  call_ind((uint32_t)(EAX), 0x10101b78u);
  /* 10101b78 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101b80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101b82 je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101b88 push 0x1010fa68 */
  push32((uint32_t)(0x1010fa68u));
  /* 10101b8d push 0x10116490 */
  push32((uint32_t)(0x10116490u));
  /* 10101b92 call eax */
  call_ind((uint32_t)(EAX), 0x10101b94u);
  /* 10101b94 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101b99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101b9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101b9e je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101ba4 push 0x1010fa50 */
  push32((uint32_t)(0x1010fa50u));
  /* 10101ba9 push 0x101163c8 */
  push32((uint32_t)(0x101163c8u));
  /* 10101bae call eax */
  call_ind((uint32_t)(EAX), 0x10101bb0u);
  /* 10101bb0 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101bb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101bb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101bba je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101bc0 push 0x1010fa34 */
  push32((uint32_t)(0x1010fa34u));
  /* 10101bc5 push 0x101163b0 */
  push32((uint32_t)(0x101163b0u));
  /* 10101bca call eax */
  call_ind((uint32_t)(EAX), 0x10101bccu);
  /* 10101bcc mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101bd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101bd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101bd6 je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101bdc push 0x1010fa18 */
  push32((uint32_t)(0x1010fa18u));
  /* 10101be1 push 0x101163b8 */
  push32((uint32_t)(0x101163b8u));
  /* 10101be6 call eax */
  call_ind((uint32_t)(EAX), 0x10101be8u);
  /* 10101be8 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101bed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101bf2 je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101bf8 push 0x1010f9fc */
  push32((uint32_t)(0x1010f9fcu));
  /* 10101bfd push 0x101163d0 */
  push32((uint32_t)(0x101163d0u));
  /* 10101c02 call eax */
  call_ind((uint32_t)(EAX), 0x10101c04u);
  /* 10101c04 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101c09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101c0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101c0e je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101c14 push 0x1010f9e0 */
  push32((uint32_t)(0x1010f9e0u));
  /* 10101c19 push 0x101163d8 */
  push32((uint32_t)(0x101163d8u));
  /* 10101c1e call eax */
  call_ind((uint32_t)(EAX), 0x10101c20u);
  /* 10101c20 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101c25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101c28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101c2a je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101c30 push 0x1010f9c4 */
  push32((uint32_t)(0x1010f9c4u));
  /* 10101c35 push 0x10113a40 */
  push32((uint32_t)(0x10113a40u));
  /* 10101c3a call eax */
  call_ind((uint32_t)(EAX), 0x10101c3cu);
  /* 10101c3c mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101c44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101c46 je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101c48 push 0x1010f9a8 */
  push32((uint32_t)(0x1010f9a8u));
  /* 10101c4d push 0x10113a48 */
  push32((uint32_t)(0x10113a48u));
  /* 10101c52 call eax */
  call_ind((uint32_t)(EAX), 0x10101c54u);
  /* 10101c54 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101c59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101c5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101c5e je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101c60 push 0x1010f98c */
  push32((uint32_t)(0x1010f98cu));
  /* 10101c65 push 0x10113a38 */
  push32((uint32_t)(0x10113a38u));
  /* 10101c6a call eax */
  call_ind((uint32_t)(EAX), 0x10101c6cu);
  /* 10101c6c mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101c71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101c74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101c76 je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101c78 push 0x1010f970 */
  push32((uint32_t)(0x1010f970u));
  /* 10101c7d push 0x101160a8 */
  push32((uint32_t)(0x101160a8u));
  /* 10101c82 call eax */
  call_ind((uint32_t)(EAX), 0x10101c84u);
  /* 10101c84 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101c8e je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101c90 push 0x1010f954 */
  push32((uint32_t)(0x1010f954u));
  /* 10101c95 push 0x10116098 */
  push32((uint32_t)(0x10116098u));
  /* 10101c9a call eax */
  call_ind((uint32_t)(EAX), 0x10101c9cu);
  /* 10101c9c mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101ca6 je 0x10101cb7 */
  if (C.zf) goto L_10101cb7;
  /* 10101ca8 push 0x1010f938 */
  push32((uint32_t)(0x1010f938u));
  /* 10101cad push 0x101160a0 */
  push32((uint32_t)(0x101160a0u));
  /* 10101cb2 call eax */
  call_ind((uint32_t)(EAX), 0x10101cb4u);
  /* 10101cb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10101cb7:;
  /* 10101cb7 lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 10101cbb push 0x1010f930 */
  push32((uint32_t)(0x1010f930u));
  /* 10101cc0 push eax */
  push32((uint32_t)(EAX));
  /* 10101cc1 call 0x10102f70 */
  push32(0x10101cc6u); f_10102f70();
  /* 10101cc6 push eax */
  push32((uint32_t)(EAX));
  /* 10101cc7 push 0x10116148 */
  push32((uint32_t)(0x10116148u));
  /* 10101ccc call 0x101026e0 */
  push32(0x10101cd1u); f_101026e0();
  /* 10101cd1 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 10101cd5 push 0x1010f928 */
  push32((uint32_t)(0x1010f928u));
  /* 10101cda push ecx */
  push32((uint32_t)(ECX));
  /* 10101cdb call 0x10102f70 */
  push32(0x10101ce0u); f_10102f70();
  /* 10101ce0 push eax */
  push32((uint32_t)(EAX));
  /* 10101ce1 push 0x10116140 */
  push32((uint32_t)(0x10116140u));
  /* 10101ce6 call 0x101026e0 */
  push32(0x10101cebu); f_101026e0();
  /* 10101ceb lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 10101cef push 0x1010f920 */
  push32((uint32_t)(0x1010f920u));
  /* 10101cf4 push edx */
  push32((uint32_t)(EDX));
  /* 10101cf5 call 0x10102f70 */
  push32(0x10101cfau); f_10102f70();
  /* 10101cfa push eax */
  push32((uint32_t)(EAX));
  /* 10101cfb push 0x10116138 */
  push32((uint32_t)(0x10116138u));
  /* 10101d00 call 0x101026e0 */
  push32(0x10101d05u); f_101026e0();
  /* 10101d05 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10101d09 push 0x1010f918 */
  push32((uint32_t)(0x1010f918u));
  /* 10101d0e push eax */
  push32((uint32_t)(EAX));
  /* 10101d0f call 0x10102f70 */
  push32(0x10101d14u); f_10102f70();
  /* 10101d14 push eax */
  push32((uint32_t)(EAX));
  /* 10101d15 push 0x10116130 */
  push32((uint32_t)(0x10116130u));
  /* 10101d1a call 0x101026e0 */
  push32(0x10101d1fu); f_101026e0();
  /* 10101d1f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101d22 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 10101d26 push 0x1010f910 */
  push32((uint32_t)(0x1010f910u));
  /* 10101d2b push ecx */
  push32((uint32_t)(ECX));
  /* 10101d2c call 0x10102f70 */
  push32(0x10101d31u); f_10102f70();
  /* 10101d31 push eax */
  push32((uint32_t)(EAX));
  /* 10101d32 push 0x10116128 */
  push32((uint32_t)(0x10116128u));
  /* 10101d37 call 0x101026e0 */
  push32(0x10101d3cu); f_101026e0();
  /* 10101d3c lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 10101d40 push 0x1010f908 */
  push32((uint32_t)(0x1010f908u));
  /* 10101d45 push edx */
  push32((uint32_t)(EDX));
  /* 10101d46 call 0x10102f70 */
  push32(0x10101d4bu); f_10102f70();
  /* 10101d4b push eax */
  push32((uint32_t)(EAX));
  /* 10101d4c push 0x10116120 */
  push32((uint32_t)(0x10116120u));
  /* 10101d51 call 0x101026e0 */
  push32(0x10101d56u); f_101026e0();
  /* 10101d56 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 10101d5a push 0x1010f900 */
  push32((uint32_t)(0x1010f900u));
  /* 10101d5f push eax */
  push32((uint32_t)(EAX));
  /* 10101d60 call 0x10102f70 */
  push32(0x10101d65u); f_10102f70();
  /* 10101d65 push eax */
  push32((uint32_t)(EAX));
  /* 10101d66 push 0x10116260 */
  push32((uint32_t)(0x10116260u));
  /* 10101d6b call 0x101026e0 */
  push32(0x10101d70u); f_101026e0();
  /* 10101d70 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10101d74 push 0x1010f8f8 */
  push32((uint32_t)(0x1010f8f8u));
  /* 10101d79 push ecx */
  push32((uint32_t)(ECX));
  /* 10101d7a call 0x10102f70 */
  push32(0x10101d7fu); f_10102f70();
  /* 10101d7f push eax */
  push32((uint32_t)(EAX));
  /* 10101d80 push 0x10116258 */
  push32((uint32_t)(0x10116258u));
  /* 10101d85 call 0x101026e0 */
  push32(0x10101d8au); f_101026e0();
  /* 10101d8a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101d8d lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 10101d91 push 0x1010f8f0 */
  push32((uint32_t)(0x1010f8f0u));
  /* 10101d96 push edx */
  push32((uint32_t)(EDX));
  /* 10101d97 call 0x10102f70 */
  push32(0x10101d9cu); f_10102f70();
  /* 10101d9c push eax */
  push32((uint32_t)(EAX));
  /* 10101d9d push 0x10116250 */
  push32((uint32_t)(0x10116250u));
  /* 10101da2 call 0x101026e0 */
  push32(0x10101da7u); f_101026e0();
  /* 10101da7 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 10101dab push 0x1010f8e8 */
  push32((uint32_t)(0x1010f8e8u));
  /* 10101db0 push eax */
  push32((uint32_t)(EAX));
  /* 10101db1 call 0x10102f70 */
  push32(0x10101db6u); f_10102f70();
  /* 10101db6 push eax */
  push32((uint32_t)(EAX));
  /* 10101db7 push 0x10116248 */
  push32((uint32_t)(0x10116248u));
  /* 10101dbc call 0x101026e0 */
  push32(0x10101dc1u); f_101026e0();
  /* 10101dc1 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 10101dc5 push 0x1010f8e0 */
  push32((uint32_t)(0x1010f8e0u));
  /* 10101dca push ecx */
  push32((uint32_t)(ECX));
  /* 10101dcb call 0x10102f70 */
  push32(0x10101dd0u); f_10102f70();
  /* 10101dd0 push eax */
  push32((uint32_t)(EAX));
  /* 10101dd1 push 0x10116238 */
  push32((uint32_t)(0x10116238u));
  /* 10101dd6 call 0x101026e0 */
  push32(0x10101ddbu); f_101026e0();
  /* 10101ddb push 0x1010f8d8 */
  push32((uint32_t)(0x1010f8d8u));
  /* 10101de0 lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 10101de4 push edx */
  push32((uint32_t)(EDX));
  /* 10101de5 call 0x10102f70 */
  push32(0x10101deau); f_10102f70();
  /* 10101dea push eax */
  push32((uint32_t)(EAX));
  /* 10101deb push 0x10116288 */
  push32((uint32_t)(0x10116288u));
  /* 10101df0 call 0x101026e0 */
  push32(0x10101df5u); f_101026e0();
  /* 10101df5 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101dfa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101dfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101dff je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101e05 push 0x1010f8c4 */
  push32((uint32_t)(0x1010f8c4u));
  /* 10101e0a push 0x101137e8 */
  push32((uint32_t)(0x101137e8u));
  /* 10101e0f call eax */
  call_ind((uint32_t)(EAX), 0x10101e11u);
  /* 10101e11 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101e16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101e1b je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101e21 push 0x1010f8b0 */
  push32((uint32_t)(0x1010f8b0u));
  /* 10101e26 push 0x101137e0 */
  push32((uint32_t)(0x101137e0u));
  /* 10101e2b call eax */
  call_ind((uint32_t)(EAX), 0x10101e2du);
  /* 10101e2d mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101e32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101e35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101e37 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101e3d push 0x1010f89c */
  push32((uint32_t)(0x1010f89cu));
  /* 10101e42 push 0x101137d8 */
  push32((uint32_t)(0x101137d8u));
  /* 10101e47 call eax */
  call_ind((uint32_t)(EAX), 0x10101e49u);
  /* 10101e49 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101e4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101e51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101e53 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101e59 push 0x1010f888 */
  push32((uint32_t)(0x1010f888u));
  /* 10101e5e push 0x101137d0 */
  push32((uint32_t)(0x101137d0u));
  /* 10101e63 call eax */
  call_ind((uint32_t)(EAX), 0x10101e65u);
  /* 10101e65 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101e6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101e6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101e6f je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101e75 push 0x1010f874 */
  push32((uint32_t)(0x1010f874u));
  /* 10101e7a push 0x101137a8 */
  push32((uint32_t)(0x101137a8u));
  /* 10101e7f call eax */
  call_ind((uint32_t)(EAX), 0x10101e81u);
  /* 10101e81 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101e86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101e89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101e8b je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101e91 push 0x1010f860 */
  push32((uint32_t)(0x1010f860u));
  /* 10101e96 push 0x101137a0 */
  push32((uint32_t)(0x101137a0u));
  /* 10101e9b call eax */
  call_ind((uint32_t)(EAX), 0x10101e9du);
  /* 10101e9d mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101ea2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101ea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101ea7 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101ead push 0x1010f84c */
  push32((uint32_t)(0x1010f84cu));
  /* 10101eb2 push 0x10113878 */
  push32((uint32_t)(0x10113878u));
  /* 10101eb7 call eax */
  call_ind((uint32_t)(EAX), 0x10101eb9u);
  /* 10101eb9 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101ebe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101ec3 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101ec9 push 0x1010f838 */
  push32((uint32_t)(0x1010f838u));
  /* 10101ece push 0x10113870 */
  push32((uint32_t)(0x10113870u));
  /* 10101ed3 call eax */
  call_ind((uint32_t)(EAX), 0x10101ed5u);
  /* 10101ed5 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101eda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101edd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101edf je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101ee5 push 0x1010f824 */
  push32((uint32_t)(0x1010f824u));
  /* 10101eea push 0x10113868 */
  push32((uint32_t)(0x10113868u));
  /* 10101eef call eax */
  call_ind((uint32_t)(EAX), 0x10101ef1u);
  /* 10101ef1 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101ef6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101efb je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101f01 push 0x1010f810 */
  push32((uint32_t)(0x1010f810u));
  /* 10101f06 push 0x10113850 */
  push32((uint32_t)(0x10113850u));
  /* 10101f0b call eax */
  call_ind((uint32_t)(EAX), 0x10101f0du);
  /* 10101f0d mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101f12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101f15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101f17 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101f1d push 0x1010f7fc */
  push32((uint32_t)(0x1010f7fcu));
  /* 10101f22 push 0x10113848 */
  push32((uint32_t)(0x10113848u));
  /* 10101f27 call eax */
  call_ind((uint32_t)(EAX), 0x10101f29u);
  /* 10101f29 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101f2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101f33 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101f39 push 0x1010f7e8 */
  push32((uint32_t)(0x1010f7e8u));
  /* 10101f3e push 0x10113840 */
  push32((uint32_t)(0x10113840u));
  /* 10101f43 call eax */
  call_ind((uint32_t)(EAX), 0x10101f45u);
  /* 10101f45 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101f4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101f4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101f4f je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101f55 push 0x1010f7d4 */
  push32((uint32_t)(0x1010f7d4u));
  /* 10101f5a push 0x10113810 */
  push32((uint32_t)(0x10113810u));
  /* 10101f5f call eax */
  call_ind((uint32_t)(EAX), 0x10101f61u);
  /* 10101f61 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101f66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101f6b je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101f71 push 0x1010f7c0 */
  push32((uint32_t)(0x1010f7c0u));
  /* 10101f76 push 0x10113818 */
  push32((uint32_t)(0x10113818u));
  /* 10101f7b call eax */
  call_ind((uint32_t)(EAX), 0x10101f7du);
  /* 10101f7d mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101f82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101f85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101f87 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101f8d push 0x1010f7ac */
  push32((uint32_t)(0x1010f7acu));
  /* 10101f92 push 0x10113820 */
  push32((uint32_t)(0x10113820u));
  /* 10101f97 call eax */
  call_ind((uint32_t)(EAX), 0x10101f99u);
  /* 10101f99 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101f9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101fa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101fa3 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101fa9 push 0x1010f798 */
  push32((uint32_t)(0x1010f798u));
  /* 10101fae push 0x10113828 */
  push32((uint32_t)(0x10113828u));
  /* 10101fb3 call eax */
  call_ind((uint32_t)(EAX), 0x10101fb5u);
  /* 10101fb5 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101fba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101fbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101fbf je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101fc5 push 0x1010f784 */
  push32((uint32_t)(0x1010f784u));
  /* 10101fca push 0x101137f0 */
  push32((uint32_t)(0x101137f0u));
  /* 10101fcf call eax */
  call_ind((uint32_t)(EAX), 0x10101fd1u);
  /* 10101fd1 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101fd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101fd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101fdb je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101fe1 push 0x1010f770 */
  push32((uint32_t)(0x1010f770u));
  /* 10101fe6 push 0x10113800 */
  push32((uint32_t)(0x10113800u));
  /* 10101feb call eax */
  call_ind((uint32_t)(EAX), 0x10101fedu);
  /* 10101fed mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10101ff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10101ff5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10101ff7 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10101ffd push 0x1010f75c */
  push32((uint32_t)(0x1010f75cu));
  /* 10102002 push 0x101138b8 */
  push32((uint32_t)(0x101138b8u));
  /* 10102007 call eax */
  call_ind((uint32_t)(EAX), 0x10102009u);
  /* 10102009 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010200e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102013 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102019 push 0x1010f748 */
  push32((uint32_t)(0x1010f748u));
  /* 1010201e push 0x101138c0 */
  push32((uint32_t)(0x101138c0u));
  /* 10102023 call eax */
  call_ind((uint32_t)(EAX), 0x10102025u);
  /* 10102025 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010202a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010202d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010202f je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102035 push 0x1010f734 */
  push32((uint32_t)(0x1010f734u));
  /* 1010203a push 0x101138c8 */
  push32((uint32_t)(0x101138c8u));
  /* 1010203f call eax */
  call_ind((uint32_t)(EAX), 0x10102041u);
  /* 10102041 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102046 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010204b je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102051 push 0x1010f720 */
  push32((uint32_t)(0x1010f720u));
  /* 10102056 push 0x101138a0 */
  push32((uint32_t)(0x101138a0u));
  /* 1010205b call eax */
  call_ind((uint32_t)(EAX), 0x1010205du);
  /* 1010205d mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102062 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102065 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102067 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 1010206d push 0x1010f70c */
  push32((uint32_t)(0x1010f70cu));
  /* 10102072 push 0x101138a8 */
  push32((uint32_t)(0x101138a8u));
  /* 10102077 call eax */
  call_ind((uint32_t)(EAX), 0x10102079u);
  /* 10102079 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010207e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102083 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102089 push 0x1010f6f8 */
  push32((uint32_t)(0x1010f6f8u));
  /* 1010208e push 0x101138b0 */
  push32((uint32_t)(0x101138b0u));
  /* 10102093 call eax */
  call_ind((uint32_t)(EAX), 0x10102095u);
  /* 10102095 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010209a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010209d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010209f je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101020a5 push 0x1010f6e8 */
  push32((uint32_t)(0x1010f6e8u));
  /* 101020aa push 0x10116308 */
  push32((uint32_t)(0x10116308u));
  /* 101020af call eax */
  call_ind((uint32_t)(EAX), 0x101020b1u);
  /* 101020b1 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101020b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101020b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101020bb je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101020c1 push 0x1010f6d4 */
  push32((uint32_t)(0x1010f6d4u));
  /* 101020c6 push 0x10116300 */
  push32((uint32_t)(0x10116300u));
  /* 101020cb call eax */
  call_ind((uint32_t)(EAX), 0x101020cdu);
  /* 101020cd mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101020d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101020d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101020d7 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101020dd push 0x1010f6c0 */
  push32((uint32_t)(0x1010f6c0u));
  /* 101020e2 push 0x101162d0 */
  push32((uint32_t)(0x101162d0u));
  /* 101020e7 call eax */
  call_ind((uint32_t)(EAX), 0x101020e9u);
  /* 101020e9 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101020ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101020f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101020f3 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101020f9 push 0x1010f6ac */
  push32((uint32_t)(0x1010f6acu));
  /* 101020fe push 0x101162c8 */
  push32((uint32_t)(0x101162c8u));
  /* 10102103 call eax */
  call_ind((uint32_t)(EAX), 0x10102105u);
  /* 10102105 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010210a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010210d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010210f je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102115 push 0x1010f698 */
  push32((uint32_t)(0x1010f698u));
  /* 1010211a push 0x101162d8 */
  push32((uint32_t)(0x101162d8u));
  /* 1010211f call eax */
  call_ind((uint32_t)(EAX), 0x10102121u);
  /* 10102121 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102126 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010212b je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102131 push 0x1010f684 */
  push32((uint32_t)(0x1010f684u));
  /* 10102136 push 0x101161c8 */
  push32((uint32_t)(0x101161c8u));
  /* 1010213b call eax */
  call_ind((uint32_t)(EAX), 0x1010213du);
  /* 1010213d mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102142 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102145 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102147 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 1010214d push 0x1010f670 */
  push32((uint32_t)(0x1010f670u));
  /* 10102152 push 0x101161d0 */
  push32((uint32_t)(0x101161d0u));
  /* 10102157 call eax */
  call_ind((uint32_t)(EAX), 0x10102159u);
  /* 10102159 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010215e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102163 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102169 push 0x1010f65c */
  push32((uint32_t)(0x1010f65cu));
  /* 1010216e push 0x101161d8 */
  push32((uint32_t)(0x101161d8u));
  /* 10102173 call eax */
  call_ind((uint32_t)(EAX), 0x10102175u);
  /* 10102175 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010217a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010217d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010217f je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102185 push 0x1010f648 */
  push32((uint32_t)(0x1010f648u));
  /* 1010218a push 0x101161e0 */
  push32((uint32_t)(0x101161e0u));
  /* 1010218f call eax */
  call_ind((uint32_t)(EAX), 0x10102191u);
  /* 10102191 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102196 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102199 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010219b je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101021a1 push 0x1010f640 */
  push32((uint32_t)(0x1010f640u));
  /* 101021a6 push 0x101162e8 */
  push32((uint32_t)(0x101162e8u));
  /* 101021ab call eax */
  call_ind((uint32_t)(EAX), 0x101021adu);
  /* 101021ad mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101021b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101021b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101021b7 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101021bd push 0x1010f638 */
  push32((uint32_t)(0x1010f638u));
  /* 101021c2 push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 101021c7 call eax */
  call_ind((uint32_t)(EAX), 0x101021c9u);
  /* 101021c9 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101021ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101021d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101021d3 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101021d9 push 0x1010f630 */
  push32((uint32_t)(0x1010f630u));
  /* 101021de push 0x10113a88 */
  push32((uint32_t)(0x10113a88u));
  /* 101021e3 call eax */
  call_ind((uint32_t)(EAX), 0x101021e5u);
  /* 101021e5 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101021ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101021ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101021ef je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101021f5 push 0x1010f628 */
  push32((uint32_t)(0x1010f628u));
  /* 101021fa push 0x101161a8 */
  push32((uint32_t)(0x101161a8u));
  /* 101021ff call eax */
  call_ind((uint32_t)(EAX), 0x10102201u);
  /* 10102201 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010220b je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102211 push 0x1010f620 */
  push32((uint32_t)(0x1010f620u));
  /* 10102216 push 0x10116160 */
  push32((uint32_t)(0x10116160u));
  /* 1010221b call eax */
  call_ind((uint32_t)(EAX), 0x1010221du);
  /* 1010221d mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102227 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 1010222d push 0x1010f618 */
  push32((uint32_t)(0x1010f618u));
  /* 10102232 push 0x10116168 */
  push32((uint32_t)(0x10116168u));
  /* 10102237 call eax */
  call_ind((uint32_t)(EAX), 0x10102239u);
  /* 10102239 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010223e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102243 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102249 push 0x1010f610 */
  push32((uint32_t)(0x1010f610u));
  /* 1010224e push 0x10116170 */
  push32((uint32_t)(0x10116170u));
  /* 10102253 call eax */
  call_ind((uint32_t)(EAX), 0x10102255u);
  /* 10102255 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010225a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010225d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010225f je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102265 push 0x1010f608 */
  push32((uint32_t)(0x1010f608u));
  /* 1010226a push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 1010226f call eax */
  call_ind((uint32_t)(EAX), 0x10102271u);
  /* 10102271 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102276 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010227b je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102281 push 0x1010f600 */
  push32((uint32_t)(0x1010f600u));
  /* 10102286 push 0x10116240 */
  push32((uint32_t)(0x10116240u));
  /* 1010228b call eax */
  call_ind((uint32_t)(EAX), 0x1010228du);
  /* 1010228d mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102297 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 1010229d push 0x1010f5f8 */
  push32((uint32_t)(0x1010f5f8u));
  /* 101022a2 push 0x10116280 */
  push32((uint32_t)(0x10116280u));
  /* 101022a7 call eax */
  call_ind((uint32_t)(EAX), 0x101022a9u);
  /* 101022a9 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101022ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101022b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101022b3 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101022b9 push 0x1010f5f0 */
  push32((uint32_t)(0x1010f5f0u));
  /* 101022be push 0x10116338 */
  push32((uint32_t)(0x10116338u));
  /* 101022c3 call eax */
  call_ind((uint32_t)(EAX), 0x101022c5u);
  /* 101022c5 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101022ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101022cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101022cf je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101022d5 push 0x1010f5e8 */
  push32((uint32_t)(0x1010f5e8u));
  /* 101022da push 0x10116340 */
  push32((uint32_t)(0x10116340u));
  /* 101022df call eax */
  call_ind((uint32_t)(EAX), 0x101022e1u);
  /* 101022e1 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101022e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101022e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101022eb je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101022f1 push 0x1010f5e0 */
  push32((uint32_t)(0x1010f5e0u));
  /* 101022f6 push 0x10116298 */
  push32((uint32_t)(0x10116298u));
  /* 101022fb call eax */
  call_ind((uint32_t)(EAX), 0x101022fdu);
  /* 101022fd mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102307 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 1010230d push 0x1010f5d8 */
  push32((uint32_t)(0x1010f5d8u));
  /* 10102312 push 0x101162a8 */
  push32((uint32_t)(0x101162a8u));
  /* 10102317 call eax */
  call_ind((uint32_t)(EAX), 0x10102319u);
  /* 10102319 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010231e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102323 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102329 push 0x1010f5d0 */
  push32((uint32_t)(0x1010f5d0u));
  /* 1010232e push 0x101162b0 */
  push32((uint32_t)(0x101162b0u));
  /* 10102333 call eax */
  call_ind((uint32_t)(EAX), 0x10102335u);
  /* 10102335 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010233a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010233d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010233f je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102345 push 0x1010f5c8 */
  push32((uint32_t)(0x1010f5c8u));
  /* 1010234a push 0x101162a0 */
  push32((uint32_t)(0x101162a0u));
  /* 1010234f call eax */
  call_ind((uint32_t)(EAX), 0x10102351u);
  /* 10102351 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010235b je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102361 push 0x1010f5c0 */
  push32((uint32_t)(0x1010f5c0u));
  /* 10102366 push 0x10113a80 */
  push32((uint32_t)(0x10113a80u));
  /* 1010236b call eax */
  call_ind((uint32_t)(EAX), 0x1010236du);
  /* 1010236d mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102375 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102377 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 1010237d push 0x1010f5b8 */
  push32((uint32_t)(0x1010f5b8u));
  /* 10102382 push 0x10113a10 */
  push32((uint32_t)(0x10113a10u));
  /* 10102387 call eax */
  call_ind((uint32_t)(EAX), 0x10102389u);
  /* 10102389 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010238e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102393 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102399 push 0x1010f5b0 */
  push32((uint32_t)(0x1010f5b0u));
  /* 1010239e push 0x101138d0 */
  push32((uint32_t)(0x101138d0u));
  /* 101023a3 call eax */
  call_ind((uint32_t)(EAX), 0x101023a5u);
  /* 101023a5 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101023aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101023ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101023af je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101023b5 push 0x1010f5a8 */
  push32((uint32_t)(0x1010f5a8u));
  /* 101023ba push 0x10116220 */
  push32((uint32_t)(0x10116220u));
  /* 101023bf call eax */
  call_ind((uint32_t)(EAX), 0x101023c1u);
  /* 101023c1 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101023c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101023c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101023cb je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101023d1 push 0x1010f5a0 */
  push32((uint32_t)(0x1010f5a0u));
  /* 101023d6 push 0x10113a70 */
  push32((uint32_t)(0x10113a70u));
  /* 101023db call eax */
  call_ind((uint32_t)(EAX), 0x101023ddu);
  /* 101023dd mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101023e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101023e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101023e7 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101023ed push 0x1010f598 */
  push32((uint32_t)(0x1010f598u));
  /* 101023f2 push 0x10116328 */
  push32((uint32_t)(0x10116328u));
  /* 101023f7 call eax */
  call_ind((uint32_t)(EAX), 0x101023f9u);
  /* 101023f9 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101023fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102403 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102409 push 0x1010f590 */
  push32((uint32_t)(0x1010f590u));
  /* 1010240e push 0x10116330 */
  push32((uint32_t)(0x10116330u));
  /* 10102413 call eax */
  call_ind((uint32_t)(EAX), 0x10102415u);
  /* 10102415 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010241a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010241d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010241f je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102425 push 0x1010f588 */
  push32((uint32_t)(0x1010f588u));
  /* 1010242a push 0x101139a0 */
  push32((uint32_t)(0x101139a0u));
  /* 1010242f call eax */
  call_ind((uint32_t)(EAX), 0x10102431u);
  /* 10102431 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010243b je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102441 push 0x1010f580 */
  push32((uint32_t)(0x1010f580u));
  /* 10102446 push 0x101139b0 */
  push32((uint32_t)(0x101139b0u));
  /* 1010244b call eax */
  call_ind((uint32_t)(EAX), 0x1010244du);
  /* 1010244d mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102457 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 1010245d push 0x1010f578 */
  push32((uint32_t)(0x1010f578u));
  /* 10102462 push 0x10113898 */
  push32((uint32_t)(0x10113898u));
  /* 10102467 call eax */
  call_ind((uint32_t)(EAX), 0x10102469u);
  /* 10102469 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010246e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102473 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102479 push 0x1010f570 */
  push32((uint32_t)(0x1010f570u));
  /* 1010247e push 0x10113758 */
  push32((uint32_t)(0x10113758u));
  /* 10102483 call eax */
  call_ind((uint32_t)(EAX), 0x10102485u);
  /* 10102485 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010248a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010248d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010248f je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102495 push 0x1010f568 */
  push32((uint32_t)(0x1010f568u));
  /* 1010249a push 0x10113838 */
  push32((uint32_t)(0x10113838u));
  /* 1010249f call eax */
  call_ind((uint32_t)(EAX), 0x101024a1u);
  /* 101024a1 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101024a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101024a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101024ab je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101024b1 push 0x1010f560 */
  push32((uint32_t)(0x1010f560u));
  /* 101024b6 push 0x10113760 */
  push32((uint32_t)(0x10113760u));
  /* 101024bb call eax */
  call_ind((uint32_t)(EAX), 0x101024bdu);
  /* 101024bd mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101024c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101024c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101024c7 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101024cd push 0x1010f54c */
  push32((uint32_t)(0x1010f54cu));
  /* 101024d2 push 0x10116418 */
  push32((uint32_t)(0x10116418u));
  /* 101024d7 call eax */
  call_ind((uint32_t)(EAX), 0x101024d9u);
  /* 101024d9 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101024de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101024e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101024e3 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101024e5 push 0x1010f538 */
  push32((uint32_t)(0x1010f538u));
  /* 101024ea push 0x10116400 */
  push32((uint32_t)(0x10116400u));
  /* 101024ef call eax */
  call_ind((uint32_t)(EAX), 0x101024f1u);
  /* 101024f1 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 101024f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101024f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101024fb je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 101024fd push 0x1010f524 */
  push32((uint32_t)(0x1010f524u));
  /* 10102502 push 0x10116410 */
  push32((uint32_t)(0x10116410u));
  /* 10102507 call eax */
  call_ind((uint32_t)(EAX), 0x10102509u);
  /* 10102509 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010250e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102511 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102513 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102515 push 0x1010f510 */
  push32((uint32_t)(0x1010f510u));
  /* 1010251a push 0x101163f0 */
  push32((uint32_t)(0x101163f0u));
  /* 1010251f call eax */
  call_ind((uint32_t)(EAX), 0x10102521u);
  /* 10102521 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 10102526 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010252b je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 1010252d push 0x1010f4fc */
  push32((uint32_t)(0x1010f4fcu));
  /* 10102532 push 0x101163f8 */
  push32((uint32_t)(0x101163f8u));
  /* 10102537 call eax */
  call_ind((uint32_t)(EAX), 0x10102539u);
  /* 10102539 mov eax, dword ptr [0x1011652c] */
  EAX = (r32((uint32_t)(0x1011652c)));
  /* 1010253e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102541 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102543 je 0x10102554 */
  if (C.zf) goto L_10102554;
  /* 10102545 push 0x1010f4e8 */
  push32((uint32_t)(0x1010f4e8u));
  /* 1010254a push 0x101163e8 */
  push32((uint32_t)(0x101163e8u));
  /* 1010254f call eax */
  call_ind((uint32_t)(EAX), 0x10102551u);
  /* 10102551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10102554:;
  /* 10102554 push 4 */
  push32((uint32_t)(0x4u));
  /* 10102556 push 4 */
  push32((uint32_t)(0x4u));
  /* 10102558 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010255a call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x10102560u);
  /* 10102560 push 6 */
  push32((uint32_t)(0x6u));
  /* 10102562 call dword ptr [0x10116650] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116650))), 0x10102568u);
  /* 10102568 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1010256a push 0x1010f4d4 */
  push32((uint32_t)(0x1010f4d4u));
  /* 1010256f push 0 */
  push32((uint32_t)(0x0u));
  /* 10102571 call dword ptr [0x10116654] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116654))), 0x10102577u);
  /* 10102577 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10102579 push 0x1010f4c0 */
  push32((uint32_t)(0x1010f4c0u));
  /* 1010257e push 1 */
  push32((uint32_t)(0x1u));
  /* 10102580 call dword ptr [0x10116654] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116654))), 0x10102586u);
  /* 10102586 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10102588 push 0x1010f4ac */
  push32((uint32_t)(0x1010f4acu));
  /* 1010258d push 2 */
  push32((uint32_t)(0x2u));
  /* 1010258f call dword ptr [0x10116654] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116654))), 0x10102595u);
  /* 10102595 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10102597 push 0x1010f498 */
  push32((uint32_t)(0x1010f498u));
  /* 1010259c push 3 */
  push32((uint32_t)(0x3u));
  /* 1010259e call dword ptr [0x10116654] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116654))), 0x101025a4u);
  /* 101025a4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101025a7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101025a9 push 0x1010f484 */
  push32((uint32_t)(0x1010f484u));
  /* 101025ae push 4 */
  push32((uint32_t)(0x4u));
  /* 101025b0 call dword ptr [0x10116654] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116654))), 0x101025b6u);
  /* 101025b6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101025b8 push 0x1010f470 */
  push32((uint32_t)(0x1010f470u));
  /* 101025bd push 5 */
  push32((uint32_t)(0x5u));
  /* 101025bf call dword ptr [0x10116654] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116654))), 0x101025c5u);
  /* 101025c5 push 0x1010fca8 */
  push32((uint32_t)(0x1010fca8u));
  /* 101025ca call dword ptr [0x10116690] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116690))), 0x101025d0u);
  /* 101025d0 push 0x1010f464 */
  push32((uint32_t)(0x1010f464u));
  /* 101025d5 call dword ptr [0x1011668c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011668c))), 0x101025dbu);
  /* 101025db push 0x1010f454 */
  push32((uint32_t)(0x1010f454u));
  /* 101025e0 call dword ptr [0x10116694] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116694))), 0x101025e6u);
  /* 101025e6 push 0x1010f448 */
  push32((uint32_t)(0x1010f448u));
  /* 101025eb call dword ptr [0x1011669c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011669c))), 0x101025f1u);
  /* 101025f1 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101025f6 call dword ptr [0x10116658] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116658))), 0x101025fcu);
  /* 101025fc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101025fe call dword ptr [0x1011665c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011665c))), 0x10102604u);
  /* 10102604 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10102606 call dword ptr [0x10116660] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116660))), 0x1010260cu);
  /* 1010260c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10102611 call dword ptr [0x10116664] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116664))), 0x10102617u);
  /* 10102617 push 5 */
  push32((uint32_t)(0x5u));
  /* 10102619 call dword ptr [0x10116668] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116668))), 0x1010261fu);
  /* 1010261f add esp, 0x9c */
  { uint32_t _a=(ESP),_b=(0x9cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102625 ret  */
  ESPCHK(0x10101010u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x10102630 (20 bytes, 7 insns) */
void f_10102630(void) {
  FTRACE(0x10102630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102630 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10102634 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10102638 push eax */
  push32((uint32_t)(EAX));
  /* 10102639 push ecx */
  push32((uint32_t)(ECX));
  /* 1010263a call dword ptr [0x10116640] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116640))), 0x10102640u);
  /* 10102640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102643 ret  */
  ESPCHK(0x10102630u, _esp0);
  ESP += 4; return;
}

/* FUN_10002650 @ 0x10102650 (25 bytes, 9 insns) */
void f_10102650(void) {
  FTRACE(0x10102650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102650 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10102654 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10102658 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010265c push eax */
  push32((uint32_t)(EAX));
  /* 1010265d push ecx */
  push32((uint32_t)(ECX));
  /* 1010265e push edx */
  push32((uint32_t)(EDX));
  /* 1010265f call dword ptr [0x1011664c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011664c))), 0x10102665u);
  /* 10102665 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102668 ret  */
  ESPCHK(0x10102650u, _esp0);
  ESP += 4; return;
}

/* FUN_10002670 @ 0x10102670 (6 bytes, 1 insns) */
void f_10102670(void) {
  FTRACE(0x10102670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102670 jmp dword ptr [0x10116678] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10116678)))); return;
}

/* FUN_10002680 @ 0x10102680 (20 bytes, 7 insns) */
void f_10102680(void) {
  FTRACE(0x10102680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102680 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10102684 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10102688 push eax */
  push32((uint32_t)(EAX));
  /* 10102689 push ecx */
  push32((uint32_t)(ECX));
  /* 1010268a call dword ptr [0x10116698] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116698))), 0x10102690u);
  /* 10102690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102693 ret  */
  ESPCHK(0x10102680u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x101026a0 (6 bytes, 1 insns) */
void f_101026a0(void) {
  FTRACE(0x101026a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101026a0 jmp dword ptr [0x101166a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101166a4)))); return;
}

/* FUN_100026b0 @ 0x101026b0 (6 bytes, 1 insns) */
void f_101026b0(void) {
  FTRACE(0x101026b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101026b0 jmp dword ptr [0x101166a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101166a8)))); return;
}

/* FUN_100026c0 @ 0x101026c0 (6 bytes, 1 insns) */
void f_101026c0(void) {
  FTRACE(0x101026c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101026c0 jmp dword ptr [0x101166b0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101166b0)))); return;
}

/* FUN_100026d0 @ 0x101026d0 (13 bytes, 5 insns) */
void f_101026d0(void) {
  FTRACE(0x101026d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101026d0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101026d4 push eax */
  push32((uint32_t)(EAX));
  /* 101026d5 call dword ptr [0x101166b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101166b4))), 0x101026dbu);
  /* 101026db pop ecx */
  ECX = (pop32());
  /* 101026dc ret  */
  ESPCHK(0x101026d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026e0 @ 0x101026e0 (20 bytes, 7 insns) */
void f_101026e0(void) {
  FTRACE(0x101026e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101026e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101026e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101026e8 push eax */
  push32((uint32_t)(EAX));
  /* 101026e9 push ecx */
  push32((uint32_t)(ECX));
  /* 101026ea call dword ptr [0x101166b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101166b8))), 0x101026f0u);
  /* 101026f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101026f3 ret  */
  ESPCHK(0x101026e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10102700 (6 bytes, 1 insns) */
void f_10102700(void) {
  FTRACE(0x10102700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102700 jmp dword ptr [0x101166bc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101166bc)))); return;
}

/* FUN_10002710 @ 0x10102710 (20 bytes, 7 insns) */
void f_10102710(void) {
  FTRACE(0x10102710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102710 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10102714 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10102718 push eax */
  push32((uint32_t)(EAX));
  /* 10102719 push ecx */
  push32((uint32_t)(ECX));
  /* 1010271a call dword ptr [0x10116398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116398))), 0x10102720u);
  /* 10102720 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102723 ret  */
  ESPCHK(0x10102710u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x10102730 (15 bytes, 5 insns) */
void f_10102730(void) {
  FTRACE(0x10102730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102730 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10102734 push eax */
  push32((uint32_t)(EAX));
  /* 10102735 call dword ptr [0x101163e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101163e0))), 0x1010273bu);
  /* 1010273b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010273e ret  */
  ESPCHK(0x10102730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10102740 (20 bytes, 7 insns) */
void f_10102740(void) {
  FTRACE(0x10102740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102740 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10102744 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10102748 push eax */
  push32((uint32_t)(EAX));
  /* 10102749 push ecx */
  push32((uint32_t)(ECX));
  /* 1010274a call dword ptr [0x10113860] */
  call_ind((uint32_t)(r32((uint32_t)(0x10113860))), 0x10102750u);
  /* 10102750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102753 ret  */
  ESPCHK(0x10102740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x10102760 (13 bytes, 5 insns) */
void f_10102760(void) {
  FTRACE(0x10102760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102760 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10102764 push eax */
  push32((uint32_t)(EAX));
  /* 10102765 call dword ptr [0x10113a00] */
  call_ind((uint32_t)(r32((uint32_t)(0x10113a00))), 0x1010276bu);
  /* 1010276b pop ecx */
  ECX = (pop32());
  /* 1010276c ret  */
  ESPCHK(0x10102760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x10102770 (15 bytes, 5 insns) */
void f_10102770(void) {
  FTRACE(0x10102770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102770 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10102774 push eax */
  push32((uint32_t)(EAX));
  /* 10102775 call dword ptr [0x101166c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101166c0))), 0x1010277bu);
  /* 1010277b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010277e ret  */
  ESPCHK(0x10102770u, _esp0);
  ESP += 4; return;
}

/* FUN_10002780 @ 0x10102780 (25 bytes, 9 insns) */
void f_10102780(void) {
  FTRACE(0x10102780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102780 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10102784 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10102788 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010278c push eax */
  push32((uint32_t)(EAX));
  /* 1010278d push ecx */
  push32((uint32_t)(ECX));
  /* 1010278e push edx */
  push32((uint32_t)(EDX));
  /* 1010278f call dword ptr [0x101160f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101160f0))), 0x10102795u);
  /* 10102795 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102798 ret  */
  ESPCHK(0x10102780u, _esp0);
  ESP += 4; return;
}

/* FUN_100027a0 @ 0x101027a0 (13 bytes, 5 insns) */
void f_101027a0(void) {
  FTRACE(0x101027a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101027a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101027a4 push eax */
  push32((uint32_t)(EAX));
  /* 101027a5 call dword ptr [0x10113a60] */
  call_ind((uint32_t)(r32((uint32_t)(0x10113a60))), 0x101027abu);
  /* 101027ab pop ecx */
  ECX = (pop32());
  /* 101027ac ret  */
  ESPCHK(0x101027a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027b0 @ 0x101027b0 (6 bytes, 1 insns) */
void f_101027b0(void) {
  FTRACE(0x101027b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101027b0 jmp dword ptr [0x10116378] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10116378)))); return;
}

/* FUN_100027c0 @ 0x101027c0 (6 bytes, 1 insns) */
void f_101027c0(void) {
  FTRACE(0x101027c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101027c0 jmp dword ptr [0x10113a78] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10113a78)))); return;
}

/* FUN_100027d0 @ 0x101027d0 (82 bytes, 28 insns) */
void f_101027d0(void) {
  FTRACE(0x101027d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101027d0 mov eax, dword ptr [0x10116510] */
  EAX = (r32((uint32_t)(0x10116510)));
  /* 101027d5 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101027db push esi */
  push32((uint32_t)(ESI));
  /* 101027dc push edi */
  push32((uint32_t)(EDI));
  /* 101027dd mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 101027e4 push edi */
  push32((uint32_t)(EDI));
  /* 101027e5 push eax */
  push32((uint32_t)(EAX));
  /* 101027e6 call dword ptr [0x1010e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e088))), 0x101027ecu);
  /* 101027ec mov esi, eax */
  ESI = (EAX);
  /* 101027ee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101027f0 jne 0x10102817 */
  if (!C.zf) goto L_10102817;
  /* 101027f2 push edi */
  push32((uint32_t)(EDI));
  /* 101027f3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 101027f7 push 0x10110038 */
  push32((uint32_t)(0x10110038u));
  /* 101027fc push ecx */
  push32((uint32_t)(ECX));
  /* 101027fd call 0x10106eb0 */
  push32(0x10102802u); f_10106eb0();
  /* 10102802 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102805 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 10102809 push esi */
  push32((uint32_t)(ESI));
  /* 1010280a push 0x10110028 */
  push32((uint32_t)(0x10110028u));
  /* 1010280f push edx */
  push32((uint32_t)(EDX));
  /* 10102810 push esi */
  push32((uint32_t)(ESI));
  /* 10102811 call dword ptr [0x1010e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0dc))), 0x10102817u);
L_10102817:;
  /* 10102817 mov eax, esi */
  EAX = (ESI);
  /* 10102819 pop edi */
  EDI = (pop32());
  /* 1010281a pop esi */
  ESI = (pop32());
  /* 1010281b add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102821 ret  */
  ESPCHK(0x101027d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002830 @ 0x10102830 (1844 bytes, 376 insns) */
void f_10102830(void) {
  FTRACE(0x10102830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102830 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10102834 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10102835 jne 0x10102f5c */
  if (!C.zf) goto L_10102f5c;
  /* 1010283b push 0x1011078c */
  push32((uint32_t)(0x1011078cu));
  /* 10102840 call dword ptr [0x1010e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e004))), 0x10102846u);
  /* 10102846 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10102848 mov dword ptr [0x10116510], eax */
  w32((uint32_t)(0x10116510), (EAX));
  /* 1010284d jne 0x10102869 */
  if (!C.zf) goto L_10102869;
  /* 1010284f push eax */
  push32((uint32_t)(EAX));
  /* 10102850 push 0x10110784 */
  push32((uint32_t)(0x10110784u));
  /* 10102855 push 0x1011076c */
  push32((uint32_t)(0x1011076cu));
  /* 1010285a push eax */
  push32((uint32_t)(EAX));
  /* 1010285b call dword ptr [0x1010e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0dc))), 0x10102861u);
  /* 10102861 mov eax, 1 */
  EAX = (0x1u);
  /* 10102866 ret 0xc */
  ESPCHK(0x10102830u, _esp0);
  ESP += 16; return;
L_10102869:;
  /* 10102869 push 0x1011075c */
  push32((uint32_t)(0x1011075cu));
  /* 1010286e call 0x101027d0 */
  push32(0x10102873u); f_101027d0();
  /* 10102873 push 0x1011074c */
  push32((uint32_t)(0x1011074cu));
  /* 10102878 mov dword ptr [0x10116514], eax */
  w32((uint32_t)(0x10116514), (EAX));
  /* 1010287d call 0x101027d0 */
  push32(0x10102882u); f_101027d0();
  /* 10102882 push 0x1011073c */
  push32((uint32_t)(0x1011073cu));
  /* 10102887 mov dword ptr [0x10116518], eax */
  w32((uint32_t)(0x10116518), (EAX));
  /* 1010288c call 0x101027d0 */
  push32(0x10102891u); f_101027d0();
  /* 10102891 push 0x10110730 */
  push32((uint32_t)(0x10110730u));
  /* 10102896 mov dword ptr [0x1011651c], eax */
  w32((uint32_t)(0x1011651c), (EAX));
  /* 1010289b call 0x101027d0 */
  push32(0x101028a0u); f_101027d0();
  /* 101028a0 push 0x10110720 */
  push32((uint32_t)(0x10110720u));
  /* 101028a5 mov dword ptr [0x10116520], eax */
  w32((uint32_t)(0x10116520), (EAX));
  /* 101028aa call 0x101027d0 */
  push32(0x101028afu); f_101027d0();
  /* 101028af push 0x1011070c */
  push32((uint32_t)(0x1011070cu));
  /* 101028b4 mov dword ptr [0x10116524], eax */
  w32((uint32_t)(0x10116524), (EAX));
  /* 101028b9 call 0x101027d0 */
  push32(0x101028beu); f_101027d0();
  /* 101028be push 0x101106fc */
  push32((uint32_t)(0x101106fcu));
  /* 101028c3 mov dword ptr [0x10116528], eax */
  w32((uint32_t)(0x10116528), (EAX));
  /* 101028c8 call 0x101027d0 */
  push32(0x101028cdu); f_101027d0();
  /* 101028cd push 0x101106ec */
  push32((uint32_t)(0x101106ecu));
  /* 101028d2 mov dword ptr [0x1011652c], eax */
  w32((uint32_t)(0x1011652c), (EAX));
  /* 101028d7 call 0x101027d0 */
  push32(0x101028dcu); f_101027d0();
  /* 101028dc push 0x101106d8 */
  push32((uint32_t)(0x101106d8u));
  /* 101028e1 mov dword ptr [0x10116530], eax */
  w32((uint32_t)(0x10116530), (EAX));
  /* 101028e6 call 0x101027d0 */
  push32(0x101028ebu); f_101027d0();
  /* 101028eb push 0x101106c4 */
  push32((uint32_t)(0x101106c4u));
  /* 101028f0 mov dword ptr [0x10116534], eax */
  w32((uint32_t)(0x10116534), (EAX));
  /* 101028f5 call 0x101027d0 */
  push32(0x101028fau); f_101027d0();
  /* 101028fa push 0x101106b4 */
  push32((uint32_t)(0x101106b4u));
  /* 101028ff mov dword ptr [0x10116538], eax */
  w32((uint32_t)(0x10116538), (EAX));
  /* 10102904 call 0x101027d0 */
  push32(0x10102909u); f_101027d0();
  /* 10102909 push 0x101106a4 */
  push32((uint32_t)(0x101106a4u));
  /* 1010290e mov dword ptr [0x1011653c], eax */
  w32((uint32_t)(0x1011653c), (EAX));
  /* 10102913 call 0x101027d0 */
  push32(0x10102918u); f_101027d0();
  /* 10102918 push 0x10110694 */
  push32((uint32_t)(0x10110694u));
  /* 1010291d mov dword ptr [0x10116540], eax */
  w32((uint32_t)(0x10116540), (EAX));
  /* 10102922 call 0x101027d0 */
  push32(0x10102927u); f_101027d0();
  /* 10102927 push 0x10110684 */
  push32((uint32_t)(0x10110684u));
  /* 1010292c mov dword ptr [0x10116544], eax */
  w32((uint32_t)(0x10116544), (EAX));
  /* 10102931 call 0x101027d0 */
  push32(0x10102936u); f_101027d0();
  /* 10102936 push 0x10110674 */
  push32((uint32_t)(0x10110674u));
  /* 1010293b mov dword ptr [0x10116548], eax */
  w32((uint32_t)(0x10116548), (EAX));
  /* 10102940 call 0x101027d0 */
  push32(0x10102945u); f_101027d0();
  /* 10102945 push 0x10110664 */
  push32((uint32_t)(0x10110664u));
  /* 1010294a mov dword ptr [0x1011654c], eax */
  w32((uint32_t)(0x1011654c), (EAX));
  /* 1010294f call 0x101027d0 */
  push32(0x10102954u); f_101027d0();
  /* 10102954 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102957 mov dword ptr [0x10116550], eax */
  w32((uint32_t)(0x10116550), (EAX));
  /* 1010295c push 0x10110654 */
  push32((uint32_t)(0x10110654u));
  /* 10102961 call 0x101027d0 */
  push32(0x10102966u); f_101027d0();
  /* 10102966 push 0x10110644 */
  push32((uint32_t)(0x10110644u));
  /* 1010296b mov dword ptr [0x10116554], eax */
  w32((uint32_t)(0x10116554), (EAX));
  /* 10102970 call 0x101027d0 */
  push32(0x10102975u); f_101027d0();
  /* 10102975 push 0x10110630 */
  push32((uint32_t)(0x10110630u));
  /* 1010297a mov dword ptr [0x10116558], eax */
  w32((uint32_t)(0x10116558), (EAX));
  /* 1010297f call 0x101027d0 */
  push32(0x10102984u); f_101027d0();
  /* 10102984 push 0x10110628 */
  push32((uint32_t)(0x10110628u));
  /* 10102989 mov dword ptr [0x1011655c], eax */
  w32((uint32_t)(0x1011655c), (EAX));
  /* 1010298e call 0x101027d0 */
  push32(0x10102993u); f_101027d0();
  /* 10102993 push 0x10110618 */
  push32((uint32_t)(0x10110618u));
  /* 10102998 mov dword ptr [0x10116560], eax */
  w32((uint32_t)(0x10116560), (EAX));
  /* 1010299d call 0x101027d0 */
  push32(0x101029a2u); f_101027d0();
  /* 101029a2 push 0x10110608 */
  push32((uint32_t)(0x10110608u));
  /* 101029a7 mov dword ptr [0x10116564], eax */
  w32((uint32_t)(0x10116564), (EAX));
  /* 101029ac call 0x101027d0 */
  push32(0x101029b1u); f_101027d0();
  /* 101029b1 push 0x101105fc */
  push32((uint32_t)(0x101105fcu));
  /* 101029b6 mov dword ptr [0x10116568], eax */
  w32((uint32_t)(0x10116568), (EAX));
  /* 101029bb call 0x101027d0 */
  push32(0x101029c0u); f_101027d0();
  /* 101029c0 push 0x101105ec */
  push32((uint32_t)(0x101105ecu));
  /* 101029c5 mov dword ptr [0x1011656c], eax */
  w32((uint32_t)(0x1011656c), (EAX));
  /* 101029ca call 0x101027d0 */
  push32(0x101029cfu); f_101027d0();
  /* 101029cf push 0x101105e4 */
  push32((uint32_t)(0x101105e4u));
  /* 101029d4 mov dword ptr [0x10116570], eax */
  w32((uint32_t)(0x10116570), (EAX));
  /* 101029d9 call 0x101027d0 */
  push32(0x101029deu); f_101027d0();
  /* 101029de push 0x101105d4 */
  push32((uint32_t)(0x101105d4u));
  /* 101029e3 mov dword ptr [0x10116588], eax */
  w32((uint32_t)(0x10116588), (EAX));
  /* 101029e8 call 0x101027d0 */
  push32(0x101029edu); f_101027d0();
  /* 101029ed push 0x101105c4 */
  push32((uint32_t)(0x101105c4u));
  /* 101029f2 mov dword ptr [0x1011658c], eax */
  w32((uint32_t)(0x1011658c), (EAX));
  /* 101029f7 call 0x101027d0 */
  push32(0x101029fcu); f_101027d0();
  /* 101029fc push 0x101105b8 */
  push32((uint32_t)(0x101105b8u));
  /* 10102a01 mov dword ptr [0x10116590], eax */
  w32((uint32_t)(0x10116590), (EAX));
  /* 10102a06 call 0x101027d0 */
  push32(0x10102a0bu); f_101027d0();
  /* 10102a0b push 0x101105a8 */
  push32((uint32_t)(0x101105a8u));
  /* 10102a10 mov dword ptr [0x10116594], eax */
  w32((uint32_t)(0x10116594), (EAX));
  /* 10102a15 call 0x101027d0 */
  push32(0x10102a1au); f_101027d0();
  /* 10102a1a push 0x1011059c */
  push32((uint32_t)(0x1011059cu));
  /* 10102a1f mov dword ptr [0x10116598], eax */
  w32((uint32_t)(0x10116598), (EAX));
  /* 10102a24 call 0x101027d0 */
  push32(0x10102a29u); f_101027d0();
  /* 10102a29 push 0x1011058c */
  push32((uint32_t)(0x1011058cu));
  /* 10102a2e mov dword ptr [0x101165b4], eax */
  w32((uint32_t)(0x101165b4), (EAX));
  /* 10102a33 call 0x101027d0 */
  push32(0x10102a38u); f_101027d0();
  /* 10102a38 push 0x10110584 */
  push32((uint32_t)(0x10110584u));
  /* 10102a3d mov dword ptr [0x1011659c], eax */
  w32((uint32_t)(0x1011659c), (EAX));
  /* 10102a42 call 0x101027d0 */
  push32(0x10102a47u); f_101027d0();
  /* 10102a47 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102a4a mov dword ptr [0x101165a0], eax */
  w32((uint32_t)(0x101165a0), (EAX));
  /* 10102a4f push 0x10110574 */
  push32((uint32_t)(0x10110574u));
  /* 10102a54 call 0x101027d0 */
  push32(0x10102a59u); f_101027d0();
  /* 10102a59 push 0x10110564 */
  push32((uint32_t)(0x10110564u));
  /* 10102a5e mov dword ptr [0x101165a4], eax */
  w32((uint32_t)(0x101165a4), (EAX));
  /* 10102a63 call 0x101027d0 */
  push32(0x10102a68u); f_101027d0();
  /* 10102a68 push 0x10110554 */
  push32((uint32_t)(0x10110554u));
  /* 10102a6d mov dword ptr [0x101165a8], eax */
  w32((uint32_t)(0x101165a8), (EAX));
  /* 10102a72 call 0x101027d0 */
  push32(0x10102a77u); f_101027d0();
  /* 10102a77 push 0x10110548 */
  push32((uint32_t)(0x10110548u));
  /* 10102a7c mov dword ptr [0x101165ac], eax */
  w32((uint32_t)(0x101165ac), (EAX));
  /* 10102a81 call 0x101027d0 */
  push32(0x10102a86u); f_101027d0();
  /* 10102a86 push 0x10110540 */
  push32((uint32_t)(0x10110540u));
  /* 10102a8b mov dword ptr [0x101165b0], eax */
  w32((uint32_t)(0x101165b0), (EAX));
  /* 10102a90 call 0x101027d0 */
  push32(0x10102a95u); f_101027d0();
  /* 10102a95 push 0x10110530 */
  push32((uint32_t)(0x10110530u));
  /* 10102a9a mov dword ptr [0x101165b8], eax */
  w32((uint32_t)(0x101165b8), (EAX));
  /* 10102a9f call 0x101027d0 */
  push32(0x10102aa4u); f_101027d0();
  /* 10102aa4 push 0x10110520 */
  push32((uint32_t)(0x10110520u));
  /* 10102aa9 mov dword ptr [0x101165bc], eax */
  w32((uint32_t)(0x101165bc), (EAX));
  /* 10102aae call 0x101027d0 */
  push32(0x10102ab3u); f_101027d0();
  /* 10102ab3 push 0x10110510 */
  push32((uint32_t)(0x10110510u));
  /* 10102ab8 mov dword ptr [0x101165c0], eax */
  w32((uint32_t)(0x101165c0), (EAX));
  /* 10102abd call 0x101027d0 */
  push32(0x10102ac2u); f_101027d0();
  /* 10102ac2 push 0x10110500 */
  push32((uint32_t)(0x10110500u));
  /* 10102ac7 mov dword ptr [0x101165c4], eax */
  w32((uint32_t)(0x101165c4), (EAX));
  /* 10102acc call 0x101027d0 */
  push32(0x10102ad1u); f_101027d0();
  /* 10102ad1 push 0x101104f4 */
  push32((uint32_t)(0x101104f4u));
  /* 10102ad6 mov dword ptr [0x101165c8], eax */
  w32((uint32_t)(0x101165c8), (EAX));
  /* 10102adb call 0x101027d0 */
  push32(0x10102ae0u); f_101027d0();
  /* 10102ae0 push 0x101104e8 */
  push32((uint32_t)(0x101104e8u));
  /* 10102ae5 mov dword ptr [0x101165cc], eax */
  w32((uint32_t)(0x101165cc), (EAX));
  /* 10102aea call 0x101027d0 */
  push32(0x10102aefu); f_101027d0();
  /* 10102aef push 0x101104d8 */
  push32((uint32_t)(0x101104d8u));
  /* 10102af4 mov dword ptr [0x101165d0], eax */
  w32((uint32_t)(0x101165d0), (EAX));
  /* 10102af9 call 0x101027d0 */
  push32(0x10102afeu); f_101027d0();
  /* 10102afe push 0x101104cc */
  push32((uint32_t)(0x101104ccu));
  /* 10102b03 mov dword ptr [0x101165d4], eax */
  w32((uint32_t)(0x101165d4), (EAX));
  /* 10102b08 call 0x101027d0 */
  push32(0x10102b0du); f_101027d0();
  /* 10102b0d push 0x101104c0 */
  push32((uint32_t)(0x101104c0u));
  /* 10102b12 mov dword ptr [0x101165d8], eax */
  w32((uint32_t)(0x101165d8), (EAX));
  /* 10102b17 call 0x101027d0 */
  push32(0x10102b1cu); f_101027d0();
  /* 10102b1c push 0x101104b4 */
  push32((uint32_t)(0x101104b4u));
  /* 10102b21 mov dword ptr [0x101165dc], eax */
  w32((uint32_t)(0x101165dc), (EAX));
  /* 10102b26 call 0x101027d0 */
  push32(0x10102b2bu); f_101027d0();
  /* 10102b2b push 0x101104a8 */
  push32((uint32_t)(0x101104a8u));
  /* 10102b30 mov dword ptr [0x10116310], eax */
  w32((uint32_t)(0x10116310), (EAX));
  /* 10102b35 call 0x101027d0 */
  push32(0x10102b3au); f_101027d0();
  /* 10102b3a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102b3d mov dword ptr [0x101165e0], eax */
  w32((uint32_t)(0x101165e0), (EAX));
  /* 10102b42 push 0x1011049c */
  push32((uint32_t)(0x1011049cu));
  /* 10102b47 call 0x101027d0 */
  push32(0x10102b4cu); f_101027d0();
  /* 10102b4c push 0x10110490 */
  push32((uint32_t)(0x10110490u));
  /* 10102b51 mov dword ptr [0x101165e4], eax */
  w32((uint32_t)(0x101165e4), (EAX));
  /* 10102b56 call 0x101027d0 */
  push32(0x10102b5bu); f_101027d0();
  /* 10102b5b push 0x10110480 */
  push32((uint32_t)(0x10110480u));
  /* 10102b60 mov dword ptr [0x101165e8], eax */
  w32((uint32_t)(0x101165e8), (EAX));
  /* 10102b65 call 0x101027d0 */
  push32(0x10102b6au); f_101027d0();
  /* 10102b6a push 0x10110474 */
  push32((uint32_t)(0x10110474u));
  /* 10102b6f mov dword ptr [0x101165ec], eax */
  w32((uint32_t)(0x101165ec), (EAX));
  /* 10102b74 call 0x101027d0 */
  push32(0x10102b79u); f_101027d0();
  /* 10102b79 push 0x10110468 */
  push32((uint32_t)(0x10110468u));
  /* 10102b7e mov dword ptr [0x101165f0], eax */
  w32((uint32_t)(0x101165f0), (EAX));
  /* 10102b83 call 0x101027d0 */
  push32(0x10102b88u); f_101027d0();
  /* 10102b88 mov dword ptr [0x101165f4], eax */
  w32((uint32_t)(0x101165f4), (EAX));
  /* 10102b8d push 0x10110458 */
  push32((uint32_t)(0x10110458u));
  /* 10102b92 call 0x101027d0 */
  push32(0x10102b97u); f_101027d0();
  /* 10102b97 push 0x10110448 */
  push32((uint32_t)(0x10110448u));
  /* 10102b9c mov dword ptr [0x101165f8], eax */
  w32((uint32_t)(0x101165f8), (EAX));
  /* 10102ba1 call 0x101027d0 */
  push32(0x10102ba6u); f_101027d0();
  /* 10102ba6 push 0x1011043c */
  push32((uint32_t)(0x1011043cu));
  /* 10102bab mov dword ptr [0x101165fc], eax */
  w32((uint32_t)(0x101165fc), (EAX));
  /* 10102bb0 call 0x101027d0 */
  push32(0x10102bb5u); f_101027d0();
  /* 10102bb5 push 0x10110434 */
  push32((uint32_t)(0x10110434u));
  /* 10102bba mov dword ptr [0x10116600], eax */
  w32((uint32_t)(0x10116600), (EAX));
  /* 10102bbf call 0x101027d0 */
  push32(0x10102bc4u); f_101027d0();
  /* 10102bc4 push 0x10110424 */
  push32((uint32_t)(0x10110424u));
  /* 10102bc9 mov dword ptr [0x10116604], eax */
  w32((uint32_t)(0x10116604), (EAX));
  /* 10102bce call 0x101027d0 */
  push32(0x10102bd3u); f_101027d0();
  /* 10102bd3 push 0x1011041c */
  push32((uint32_t)(0x1011041cu));
  /* 10102bd8 mov dword ptr [0x10116608], eax */
  w32((uint32_t)(0x10116608), (EAX));
  /* 10102bdd call 0x101027d0 */
  push32(0x10102be2u); f_101027d0();
  /* 10102be2 push 0x10110410 */
  push32((uint32_t)(0x10110410u));
  /* 10102be7 mov dword ptr [0x1011660c], eax */
  w32((uint32_t)(0x1011660c), (EAX));
  /* 10102bec call 0x101027d0 */
  push32(0x10102bf1u); f_101027d0();
  /* 10102bf1 push 0x10110408 */
  push32((uint32_t)(0x10110408u));
  /* 10102bf6 mov dword ptr [0x10116610], eax */
  w32((uint32_t)(0x10116610), (EAX));
  /* 10102bfb call 0x101027d0 */
  push32(0x10102c00u); f_101027d0();
  /* 10102c00 push 0x101103f4 */
  push32((uint32_t)(0x101103f4u));
  /* 10102c05 mov dword ptr [0x10116614], eax */
  w32((uint32_t)(0x10116614), (EAX));
  /* 10102c0a call 0x101027d0 */
  push32(0x10102c0fu); f_101027d0();
  /* 10102c0f push 0x101103e8 */
  push32((uint32_t)(0x101103e8u));
  /* 10102c14 mov dword ptr [0x10113768], eax */
  w32((uint32_t)(0x10113768), (EAX));
  /* 10102c19 call 0x101027d0 */
  push32(0x10102c1eu); f_101027d0();
  /* 10102c1e push 0x101103dc */
  push32((uint32_t)(0x101103dcu));
  /* 10102c23 mov dword ptr [0x10116620], eax */
  w32((uint32_t)(0x10116620), (EAX));
  /* 10102c28 call 0x101027d0 */
  push32(0x10102c2du); f_101027d0();
  /* 10102c2d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102c30 mov dword ptr [0x1011661c], eax */
  w32((uint32_t)(0x1011661c), (EAX));
  /* 10102c35 push 0x101103c8 */
  push32((uint32_t)(0x101103c8u));
  /* 10102c3a call 0x101027d0 */
  push32(0x10102c3fu); f_101027d0();
  /* 10102c3f push 0x101103b8 */
  push32((uint32_t)(0x101103b8u));
  /* 10102c44 mov dword ptr [0x10116624], eax */
  w32((uint32_t)(0x10116624), (EAX));
  /* 10102c49 call 0x101027d0 */
  push32(0x10102c4eu); f_101027d0();
  /* 10102c4e push 0x101103a8 */
  push32((uint32_t)(0x101103a8u));
  /* 10102c53 mov dword ptr [0x10116628], eax */
  w32((uint32_t)(0x10116628), (EAX));
  /* 10102c58 call 0x101027d0 */
  push32(0x10102c5du); f_101027d0();
  /* 10102c5d push 0x10110398 */
  push32((uint32_t)(0x10110398u));
  /* 10102c62 mov dword ptr [0x1011662c], eax */
  w32((uint32_t)(0x1011662c), (EAX));
  /* 10102c67 call 0x101027d0 */
  push32(0x10102c6cu); f_101027d0();
  /* 10102c6c push 0x1011038c */
  push32((uint32_t)(0x1011038cu));
  /* 10102c71 mov dword ptr [0x10116578], eax */
  w32((uint32_t)(0x10116578), (EAX));
  /* 10102c76 call 0x101027d0 */
  push32(0x10102c7bu); f_101027d0();
  /* 10102c7b push 0x1011037c */
  push32((uint32_t)(0x1011037cu));
  /* 10102c80 mov dword ptr [0x10116574], eax */
  w32((uint32_t)(0x10116574), (EAX));
  /* 10102c85 call 0x101027d0 */
  push32(0x10102c8au); f_101027d0();
  /* 10102c8a push 0x10110368 */
  push32((uint32_t)(0x10110368u));
  /* 10102c8f mov dword ptr [0x1011657c], eax */
  w32((uint32_t)(0x1011657c), (EAX));
  /* 10102c94 call 0x101027d0 */
  push32(0x10102c99u); f_101027d0();
  /* 10102c99 push 0x10110350 */
  push32((uint32_t)(0x10110350u));
  /* 10102c9e mov dword ptr [0x10116580], eax */
  w32((uint32_t)(0x10116580), (EAX));
  /* 10102ca3 call 0x101027d0 */
  push32(0x10102ca8u); f_101027d0();
  /* 10102ca8 push 0x10110340 */
  push32((uint32_t)(0x10110340u));
  /* 10102cad mov dword ptr [0x10116584], eax */
  w32((uint32_t)(0x10116584), (EAX));
  /* 10102cb2 call 0x101027d0 */
  push32(0x10102cb7u); f_101027d0();
  /* 10102cb7 push 0x10110328 */
  push32((uint32_t)(0x10110328u));
  /* 10102cbc mov dword ptr [0x10116648], eax */
  w32((uint32_t)(0x10116648), (EAX));
  /* 10102cc1 call 0x101027d0 */
  push32(0x10102cc6u); f_101027d0();
  /* 10102cc6 push 0x10110318 */
  push32((uint32_t)(0x10110318u));
  /* 10102ccb mov dword ptr [0x10116678], eax */
  w32((uint32_t)(0x10116678), (EAX));
  /* 10102cd0 call 0x101027d0 */
  push32(0x10102cd5u); f_101027d0();
  /* 10102cd5 push 0x10110310 */
  push32((uint32_t)(0x10110310u));
  /* 10102cda mov dword ptr [0x10116640], eax */
  w32((uint32_t)(0x10116640), (EAX));
  /* 10102cdf call 0x101027d0 */
  push32(0x10102ce4u); f_101027d0();
  /* 10102ce4 push 0x10110300 */
  push32((uint32_t)(0x10110300u));
  /* 10102ce9 mov dword ptr [0x1011664c], eax */
  w32((uint32_t)(0x1011664c), (EAX));
  /* 10102cee call 0x101027d0 */
  push32(0x10102cf3u); f_101027d0();
  /* 10102cf3 push 0x101102f4 */
  push32((uint32_t)(0x101102f4u));
  /* 10102cf8 mov dword ptr [0x10116698], eax */
  w32((uint32_t)(0x10116698), (EAX));
  /* 10102cfd call 0x101027d0 */
  push32(0x10102d02u); f_101027d0();
  /* 10102d02 push 0x101102ec */
  push32((uint32_t)(0x101102ecu));
  /* 10102d07 mov dword ptr [0x10116630], eax */
  w32((uint32_t)(0x10116630), (EAX));
  /* 10102d0c call 0x101027d0 */
  push32(0x10102d11u); f_101027d0();
  /* 10102d11 push 0x101102e0 */
  push32((uint32_t)(0x101102e0u));
  /* 10102d16 mov dword ptr [0x10116634], eax */
  w32((uint32_t)(0x10116634), (EAX));
  /* 10102d1b call 0x101027d0 */
  push32(0x10102d20u); f_101027d0();
  /* 10102d20 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102d23 mov dword ptr [0x10116638], eax */
  w32((uint32_t)(0x10116638), (EAX));
  /* 10102d28 push 0x101102d0 */
  push32((uint32_t)(0x101102d0u));
  /* 10102d2d call 0x101027d0 */
  push32(0x10102d32u); f_101027d0();
  /* 10102d32 push 0x101102bc */
  push32((uint32_t)(0x101102bcu));
  /* 10102d37 mov dword ptr [0x1011663c], eax */
  w32((uint32_t)(0x1011663c), (EAX));
  /* 10102d3c call 0x101027d0 */
  push32(0x10102d41u); f_101027d0();
  /* 10102d41 push 0x101102a0 */
  push32((uint32_t)(0x101102a0u));
  /* 10102d46 mov dword ptr [0x10116644], eax */
  w32((uint32_t)(0x10116644), (EAX));
  /* 10102d4b call 0x101027d0 */
  push32(0x10102d50u); f_101027d0();
  /* 10102d50 push 0x1011028c */
  push32((uint32_t)(0x1011028cu));
  /* 10102d55 mov dword ptr [0x10116650], eax */
  w32((uint32_t)(0x10116650), (EAX));
  /* 10102d5a call 0x101027d0 */
  push32(0x10102d5fu); f_101027d0();
  /* 10102d5f push 0x10110280 */
  push32((uint32_t)(0x10110280u));
  /* 10102d64 mov dword ptr [0x10116654], eax */
  w32((uint32_t)(0x10116654), (EAX));
  /* 10102d69 call 0x101027d0 */
  push32(0x10102d6eu); f_101027d0();
  /* 10102d6e push 0x10110270 */
  push32((uint32_t)(0x10110270u));
  /* 10102d73 mov dword ptr [0x1011668c], eax */
  w32((uint32_t)(0x1011668c), (EAX));
  /* 10102d78 call 0x101027d0 */
  push32(0x10102d7du); f_101027d0();
  /* 10102d7d push 0x10110264 */
  push32((uint32_t)(0x10110264u));
  /* 10102d82 mov dword ptr [0x10116690], eax */
  w32((uint32_t)(0x10116690), (EAX));
  /* 10102d87 call 0x101027d0 */
  push32(0x10102d8cu); f_101027d0();
  /* 10102d8c push 0x10110258 */
  push32((uint32_t)(0x10110258u));
  /* 10102d91 mov dword ptr [0x10116694], eax */
  w32((uint32_t)(0x10116694), (EAX));
  /* 10102d96 call 0x101027d0 */
  push32(0x10102d9bu); f_101027d0();
  /* 10102d9b push 0x10110240 */
  push32((uint32_t)(0x10110240u));
  /* 10102da0 mov dword ptr [0x1011669c], eax */
  w32((uint32_t)(0x1011669c), (EAX));
  /* 10102da5 call 0x101027d0 */
  push32(0x10102daau); f_101027d0();
  /* 10102daa push 0x10110224 */
  push32((uint32_t)(0x10110224u));
  /* 10102daf mov dword ptr [0x10116658], eax */
  w32((uint32_t)(0x10116658), (EAX));
  /* 10102db4 call 0x101027d0 */
  push32(0x10102db9u); f_101027d0();
  /* 10102db9 push 0x10110208 */
  push32((uint32_t)(0x10110208u));
  /* 10102dbe mov dword ptr [0x1011665c], eax */
  w32((uint32_t)(0x1011665c), (EAX));
  /* 10102dc3 call 0x101027d0 */
  push32(0x10102dc8u); f_101027d0();
  /* 10102dc8 push 0x101101f0 */
  push32((uint32_t)(0x101101f0u));
  /* 10102dcd mov dword ptr [0x10116660], eax */
  w32((uint32_t)(0x10116660), (EAX));
  /* 10102dd2 call 0x101027d0 */
  push32(0x10102dd7u); f_101027d0();
  /* 10102dd7 push 0x101101d8 */
  push32((uint32_t)(0x101101d8u));
  /* 10102ddc mov dword ptr [0x10116664], eax */
  w32((uint32_t)(0x10116664), (EAX));
  /* 10102de1 call 0x101027d0 */
  push32(0x10102de6u); f_101027d0();
  /* 10102de6 push 0x101101cc */
  push32((uint32_t)(0x101101ccu));
  /* 10102deb mov dword ptr [0x10116668], eax */
  w32((uint32_t)(0x10116668), (EAX));
  /* 10102df0 call 0x101027d0 */
  push32(0x10102df5u); f_101027d0();
  /* 10102df5 push 0x101101c0 */
  push32((uint32_t)(0x101101c0u));
  /* 10102dfa mov dword ptr [0x1011666c], eax */
  w32((uint32_t)(0x1011666c), (EAX));
  /* 10102dff call 0x101027d0 */
  push32(0x10102e04u); f_101027d0();
  /* 10102e04 push 0x101101b0 */
  push32((uint32_t)(0x101101b0u));
  /* 10102e09 mov dword ptr [0x10116670], eax */
  w32((uint32_t)(0x10116670), (EAX));
  /* 10102e0e call 0x101027d0 */
  push32(0x10102e13u); f_101027d0();
  /* 10102e13 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102e16 mov dword ptr [0x10116674], eax */
  w32((uint32_t)(0x10116674), (EAX));
  /* 10102e1b push 0x101101a4 */
  push32((uint32_t)(0x101101a4u));
  /* 10102e20 call 0x101027d0 */
  push32(0x10102e25u); f_101027d0();
  /* 10102e25 push 0x10110198 */
  push32((uint32_t)(0x10110198u));
  /* 10102e2a mov dword ptr [0x1011667c], eax */
  w32((uint32_t)(0x1011667c), (EAX));
  /* 10102e2f call 0x101027d0 */
  push32(0x10102e34u); f_101027d0();
  /* 10102e34 push 0x1011018c */
  push32((uint32_t)(0x1011018cu));
  /* 10102e39 mov dword ptr [0x10116680], eax */
  w32((uint32_t)(0x10116680), (EAX));
  /* 10102e3e call 0x101027d0 */
  push32(0x10102e43u); f_101027d0();
  /* 10102e43 push 0x1011017c */
  push32((uint32_t)(0x1011017cu));
  /* 10102e48 mov dword ptr [0x101166a0], eax */
  w32((uint32_t)(0x101166a0), (EAX));
  /* 10102e4d call 0x101027d0 */
  push32(0x10102e52u); f_101027d0();
  /* 10102e52 push 0x10110170 */
  push32((uint32_t)(0x10110170u));
  /* 10102e57 mov dword ptr [0x101166a4], eax */
  w32((uint32_t)(0x101166a4), (EAX));
  /* 10102e5c call 0x101027d0 */
  push32(0x10102e61u); f_101027d0();
  /* 10102e61 push 0x10110164 */
  push32((uint32_t)(0x10110164u));
  /* 10102e66 mov dword ptr [0x101166a8], eax */
  w32((uint32_t)(0x101166a8), (EAX));
  /* 10102e6b call 0x101027d0 */
  push32(0x10102e70u); f_101027d0();
  /* 10102e70 push 0x10110158 */
  push32((uint32_t)(0x10110158u));
  /* 10102e75 mov dword ptr [0x101166ac], eax */
  w32((uint32_t)(0x101166ac), (EAX));
  /* 10102e7a call 0x101027d0 */
  push32(0x10102e7fu); f_101027d0();
  /* 10102e7f push 0x10110148 */
  push32((uint32_t)(0x10110148u));
  /* 10102e84 mov dword ptr [0x101166b0], eax */
  w32((uint32_t)(0x101166b0), (EAX));
  /* 10102e89 call 0x101027d0 */
  push32(0x10102e8eu); f_101027d0();
  /* 10102e8e push 0x10110138 */
  push32((uint32_t)(0x10110138u));
  /* 10102e93 mov dword ptr [0x101166b4], eax */
  w32((uint32_t)(0x101166b4), (EAX));
  /* 10102e98 call 0x101027d0 */
  push32(0x10102e9du); f_101027d0();
  /* 10102e9d push 0x10110124 */
  push32((uint32_t)(0x10110124u));
  /* 10102ea2 mov dword ptr [0x101166bc], eax */
  w32((uint32_t)(0x101166bc), (EAX));
  /* 10102ea7 call 0x101027d0 */
  push32(0x10102eacu); f_101027d0();
  /* 10102eac mov dword ptr [0x101166b8], eax */
  w32((uint32_t)(0x101166b8), (EAX));
  /* 10102eb1 push 0x1011010c */
  push32((uint32_t)(0x1011010cu));
  /* 10102eb6 call 0x101027d0 */
  push32(0x10102ebbu); f_101027d0();
  /* 10102ebb push 0x101100f4 */
  push32((uint32_t)(0x101100f4u));
  /* 10102ec0 mov dword ptr [0x10113a00], eax */
  w32((uint32_t)(0x10113a00), (EAX));
  /* 10102ec5 call 0x101027d0 */
  push32(0x10102ecau); f_101027d0();
  /* 10102eca push 0x101100e4 */
  push32((uint32_t)(0x101100e4u));
  /* 10102ecf mov dword ptr [0x10113860], eax */
  w32((uint32_t)(0x10113860), (EAX));
  /* 10102ed4 call 0x101027d0 */
  push32(0x10102ed9u); f_101027d0();
  /* 10102ed9 push 0x101100d4 */
  push32((uint32_t)(0x101100d4u));
  /* 10102ede mov dword ptr [0x101166c0], eax */
  w32((uint32_t)(0x101166c0), (EAX));
  /* 10102ee3 call 0x101027d0 */
  push32(0x10102ee8u); f_101027d0();
  /* 10102ee8 push 0x101100c4 */
  push32((uint32_t)(0x101100c4u));
  /* 10102eed mov dword ptr [0x10116684], eax */
  w32((uint32_t)(0x10116684), (EAX));
  /* 10102ef2 call 0x101027d0 */
  push32(0x10102ef7u); f_101027d0();
  /* 10102ef7 push 0x101100b4 */
  push32((uint32_t)(0x101100b4u));
  /* 10102efc mov dword ptr [0x10116688], eax */
  w32((uint32_t)(0x10116688), (EAX));
  /* 10102f01 call 0x101027d0 */
  push32(0x10102f06u); f_101027d0();
  /* 10102f06 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102f09 mov dword ptr [0x101163e0], eax */
  w32((uint32_t)(0x101163e0), (EAX));
  /* 10102f0e push 0x101100a4 */
  push32((uint32_t)(0x101100a4u));
  /* 10102f13 call 0x101027d0 */
  push32(0x10102f18u); f_101027d0();
  /* 10102f18 push 0x10110094 */
  push32((uint32_t)(0x10110094u));
  /* 10102f1d mov dword ptr [0x10116398], eax */
  w32((uint32_t)(0x10116398), (EAX));
  /* 10102f22 call 0x101027d0 */
  push32(0x10102f27u); f_101027d0();
  /* 10102f27 push 0x10110084 */
  push32((uint32_t)(0x10110084u));
  /* 10102f2c mov dword ptr [0x101160f0], eax */
  w32((uint32_t)(0x101160f0), (EAX));
  /* 10102f31 call 0x101027d0 */
  push32(0x10102f36u); f_101027d0();
  /* 10102f36 push 0x10110074 */
  push32((uint32_t)(0x10110074u));
  /* 10102f3b mov dword ptr [0x10113a60], eax */
  w32((uint32_t)(0x10113a60), (EAX));
  /* 10102f40 call 0x101027d0 */
  push32(0x10102f45u); f_101027d0();
  /* 10102f45 push 0x10110060 */
  push32((uint32_t)(0x10110060u));
  /* 10102f4a mov dword ptr [0x10116378], eax */
  w32((uint32_t)(0x10116378), (EAX));
  /* 10102f4f call 0x101027d0 */
  push32(0x10102f54u); f_101027d0();
  /* 10102f54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102f57 mov dword ptr [0x10113a78], eax */
  w32((uint32_t)(0x10113a78), (EAX));
L_10102f5c:;
  /* 10102f5c mov eax, 1 */
  EAX = (0x1u);
  /* 10102f61 ret 0xc */
  ESPCHK(0x10102830u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f70 @ 0x10102f70 (34 bytes, 10 insns) */
void f_10102f70(void) {
  FTRACE(0x10102f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102f70 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10102f74 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10102f78 push eax */
  push32((uint32_t)(EAX));
  /* 10102f79 push ecx */
  push32((uint32_t)(ECX));
  /* 10102f7a push 0x10110798 */
  push32((uint32_t)(0x10110798u));
  /* 10102f7f push 0x101138d8 */
  push32((uint32_t)(0x101138d8u));
  /* 10102f84 call 0x10106eb0 */
  push32(0x10102f89u); f_10106eb0();
  /* 10102f89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102f8c mov eax, 0x101138d8 */
  EAX = (0x101138d8u);
  /* 10102f91 ret  */
  ESPCHK(0x10102f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fa0 @ 0x10102fa0 (45 bytes, 16 insns) */
void f_10102fa0(void) {
  FTRACE(0x10102fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102fa0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10102fa4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10102fa8 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10102fad push eax */
  push32((uint32_t)(EAX));
  /* 10102fae push ecx */
  push32((uint32_t)(ECX));
  /* 10102faf call 0x10102780 */
  push32(0x10102fb4u); f_10102780();
  /* 10102fb4 mov ecx, eax */
  ECX = (EAX);
  /* 10102fb6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10102fba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102fbd lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10102fc0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10102fc3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10102fc6 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10102fc9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10102fca idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10102fcc ret  */
  ESPCHK(0x10102fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fd0 @ 0x10102fd0 (171 bytes, 77 insns) */
void f_10102fd0(void) {
  FTRACE(0x10102fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10102fd0 push ebx */
  push32((uint32_t)(EBX));
  /* 10102fd1 push ebp */
  push32((uint32_t)(EBP));
  /* 10102fd2 push esi */
  push32((uint32_t)(ESI));
  /* 10102fd3 push edi */
  push32((uint32_t)(EDI));
  /* 10102fd4 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 10102fd8 push edi */
  push32((uint32_t)(EDI));
  /* 10102fd9 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10102fdfu);
  /* 10102fdf mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10102fe3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10102fe6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10102fe8 jl 0x10102ff1 */
  if ((C.sf!=C.of)) goto L_10102ff1;
  /* 10102fea pop edi */
  EDI = (pop32());
  /* 10102feb pop esi */
  ESI = (pop32());
  /* 10102fec pop ebp */
  EBP = (pop32());
  /* 10102fed mov al, 1 */
  AL = (0x1u);
  /* 10102fef pop ebx */
  EBX = (pop32());
  /* 10102ff0 ret  */
  ESPCHK(0x10102fd0u, _esp0);
  ESP += 4; return;
L_10102ff1:;
  /* 10102ff1 push edi */
  push32((uint32_t)(EDI));
  /* 10102ff2 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10102ff8u);
  /* 10102ff8 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10102ffc sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10102ffe push esi */
  push32((uint32_t)(ESI));
  /* 10102fff push edi */
  push32((uint32_t)(EDI));
  /* 10103000 push ebp */
  push32((uint32_t)(EBP));
  /* 10103001 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 10103005 call 0x10102fa0 */
  push32(0x1010300au); f_10102fa0();
  /* 1010300a push ebp */
  push32((uint32_t)(EBP));
  /* 1010300b mov ebx, eax */
  EBX = (EAX);
  /* 1010300d call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103013u);
  /* 10103013 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103016 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103018 jle 0x10103074 */
  if ((C.zf||C.sf!=C.of)) goto L_10103074;
  /* 1010301a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103020 jle 0x10103074 */
  if ((C.zf||C.sf!=C.of)) goto L_10103074;
  /* 10103022 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 10103027 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10103029 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1010302b sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 1010302e mov eax, edx */
  EAX = (EDX);
  /* 10103030 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10103033 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10103035 mov ebx, edx */
  EBX = (EDX);
L_10103037:;
  /* 10103037 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010303a mov eax, 0xf */
  EAX = (0xfu);
  /* 1010303f jg 0x10103043 */
  if ((!C.zf&&C.sf==C.of)) goto L_10103043;
  /* 10103041 mov eax, ebx */
  EAX = (EBX);
L_10103043:;
  /* 10103043 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103045 jge 0x10103056 */
  if ((C.sf==C.of)) goto L_10103056;
  /* 10103047 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10103049 push ebp */
  push32((uint32_t)(EBP));
  /* 1010304a push edi */
  push32((uint32_t)(EDI));
  /* 1010304b call 0x10102650 */
  push32(0x10103050u); f_10102650();
  /* 10103050 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103053 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10103054 jmp 0x10103037 */
  goto L_10103037;
L_10103056:;
  /* 10103056 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1010305a push ecx */
  push32((uint32_t)(ECX));
  /* 1010305b push edi */
  push32((uint32_t)(EDI));
  /* 1010305c push ebp */
  push32((uint32_t)(EBP));
  /* 1010305d call 0x10102fa0 */
  push32(0x10103062u); f_10102fa0();
  /* 10103062 push eax */
  push32((uint32_t)(EAX));
  /* 10103063 push edi */
  push32((uint32_t)(EDI));
  /* 10103064 push ebp */
  push32((uint32_t)(EBP));
  /* 10103065 call 0x10102650 */
  push32(0x1010306au); f_10102650();
  /* 1010306a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010306d mov al, 1 */
  AL = (0x1u);
  /* 1010306f pop edi */
  EDI = (pop32());
  /* 10103070 pop esi */
  ESI = (pop32());
  /* 10103071 pop ebp */
  EBP = (pop32());
  /* 10103072 pop ebx */
  EBX = (pop32());
  /* 10103073 ret  */
  ESPCHK(0x10102fd0u, _esp0);
  ESP += 4; return;
L_10103074:;
  /* 10103074 pop edi */
  EDI = (pop32());
  /* 10103075 pop esi */
  ESI = (pop32());
  /* 10103076 pop ebp */
  EBP = (pop32());
  /* 10103077 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 10103079 pop ebx */
  EBX = (pop32());
  /* 1010307a ret  */
  ESPCHK(0x10102fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003080 @ 0x10103080 (369 bytes, 82 insns) */
void f_10103080(void) {
  FTRACE(0x10103080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10103080 push ebx */
  push32((uint32_t)(EBX));
  /* 10103081 push esi */
  push32((uint32_t)(ESI));
  /* 10103082 call dword ptr [0x10116630] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116630))), 0x10103088u);
  /* 10103088 push 0x101162c0 */
  push32((uint32_t)(0x101162c0u));
  /* 1010308d mov dword ptr [0x101163e4], eax */
  w32((uint32_t)(0x101163e4), (EAX));
  /* 10103092 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10103098u);
  /* 10103098 mov ebx, 1 */
  EBX = (0x1u);
  /* 1010309d mov esi, eax */
  ESI = (EAX);
  /* 1010309f push ebx */
  push32((uint32_t)(EBX));
  /* 101030a0 call 0x10102770 */
  push32(0x101030a5u); f_10102770();
  /* 101030a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 101030a7 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101030a9 call 0x10102770 */
  push32(0x101030aeu); f_10102770();
  /* 101030ae push 5 */
  push32((uint32_t)(0x5u));
  /* 101030b0 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101030b2 call 0x10102770 */
  push32(0x101030b7u); f_10102770();
  /* 101030b7 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101030b9 mov eax, dword ptr [0x101163e4] */
  EAX = (r32((uint32_t)(0x101163e4)));
  /* 101030be push 3 */
  push32((uint32_t)(0x3u));
  /* 101030c0 mov dword ptr [0x101162e0], esi */
  w32((uint32_t)(0x101162e0), (ESI));
  /* 101030c6 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 101030c9 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101030cc lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101030cf lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 101030d2 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 101030d5 mov ecx, dword ptr [eax + 0x10113c20] */
  ECX = (r32((uint32_t)(EAX + 0x10113c20)));
  /* 101030db lea edx, [eax + 0x10113a90] */
  EDX = ((uint32_t)(EAX + 0x10113a90));
  /* 101030e1 mov dword ptr [0x101162f0], edx */
  w32((uint32_t)(0x101162f0), (EDX));
  /* 101030e7 lea edx, [eax + 0x10113c24] */
  EDX = ((uint32_t)(EAX + 0x10113c24));
  /* 101030ed mov dword ptr [0x10116734], ecx */
  w32((uint32_t)(0x10116734), (ECX));
  /* 101030f3 mov ecx, dword ptr [eax + 0x10113db4] */
  ECX = (r32((uint32_t)(EAX + 0x10113db4)));
  /* 101030f9 mov dword ptr [0x101162f4], edx */
  w32((uint32_t)(0x101162f4), (EDX));
  /* 101030ff lea edx, [eax + 0x10113db8] */
  EDX = ((uint32_t)(EAX + 0x10113db8));
  /* 10103105 mov dword ptr [0x10116738], ecx */
  w32((uint32_t)(0x10116738), (ECX));
  /* 1010310b mov dword ptr [0x1011637c], edx */
  w32((uint32_t)(0x1011637c), (EDX));
  /* 10103111 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103117u);
  /* 10103117 push 0 */
  push32((uint32_t)(0x0u));
  /* 10103119 mov dword ptr [0x101163c0], eax */
  w32((uint32_t)(0x101163c0), (EAX));
  /* 1010311e call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103124u);
  /* 10103124 push 2 */
  push32((uint32_t)(0x2u));
  /* 10103126 mov dword ptr [0x10113750], eax */
  w32((uint32_t)(0x10113750), (EAX));
  /* 1010312b call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103131u);
  /* 10103131 push 4 */
  push32((uint32_t)(0x4u));
  /* 10103133 mov dword ptr [0x101164b0], eax */
  w32((uint32_t)(0x101164b0), (EAX));
  /* 10103138 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x1010313eu);
  /* 1010313e push 5 */
  push32((uint32_t)(0x5u));
  /* 10103140 mov dword ptr [0x10113858], eax */
  w32((uint32_t)(0x10113858), (EAX));
  /* 10103145 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x1010314bu);
  /* 1010314b push ebx */
  push32((uint32_t)(EBX));
  /* 1010314c mov dword ptr [0x10116218], eax */
  w32((uint32_t)(0x10116218), (EAX));
  /* 10103151 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103157u);
  /* 10103157 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010315a mov dword ptr [0x10116468], eax */
  w32((uint32_t)(0x10116468), (EAX));
  /* 1010315f call 0x101026b0 */
  push32(0x10103164u); f_101026b0();
  /* 10103164 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10103166 jne 0x10103172 */
  if (!C.zf) goto L_10103172;
  /* 10103168 mov dword ptr [0x1010f248], 4 */
  w32((uint32_t)(0x1010f248), (0x4u));
L_10103172:;
  /* 10103172 push 0x1010f114 */
  push32((uint32_t)(0x1010f114u));
  /* 10103177 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10103179 call dword ptr [0x1011663c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011663c))), 0x1010317fu);
  /* 1010317f push 0x101166c8 */
  push32((uint32_t)(0x101166c8u));
  /* 10103184 call 0x10102760 */
  push32(0x10103189u); f_10102760();
  /* 10103189 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1010318b push 0x1010f244 */
  push32((uint32_t)(0x1010f244u));
  /* 10103190 call 0x10102740 */
  push32(0x10103195u); f_10102740();
  /* 10103195 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103198 mov byte ptr [0x101162b8], bl */
  w8((uint32_t)(0x101162b8), (BL));
  /* 1010319e mov byte ptr [0x101162ba], bl */
  w8((uint32_t)(0x101162ba), (BL));
  /* 101031a4 mov byte ptr [0x101162bc], bl */
  w8((uint32_t)(0x101162bc), (BL));
  /* 101031aa mov byte ptr [0x101162bd], bl */
  w8((uint32_t)(0x101162bd), (BL));
  /* 101031b0 mov byte ptr [0x10116453], bl */
  w8((uint32_t)(0x10116453), (BL));
  /* 101031b6 mov byte ptr [0x10116451], bl */
  w8((uint32_t)(0x10116451), (BL));
  /* 101031bc mov byte ptr [0x10116454], bl */
  w8((uint32_t)(0x10116454), (BL));
  /* 101031c2 mov byte ptr [0x10116455], bl */
  w8((uint32_t)(0x10116455), (BL));
  /* 101031c8 pop esi */
  ESI = (pop32());
  /* 101031c9 mov byte ptr [0x101162bb], 0 */
  w8((uint32_t)(0x101162bb), (0x0u));
  /* 101031d0 mov byte ptr [0x101162b9], 0 */
  w8((uint32_t)(0x101162b9), (0x0u));
  /* 101031d7 mov byte ptr [0x10116450], 0 */
  w8((uint32_t)(0x10116450), (0x0u));
  /* 101031de mov byte ptr [0x10116452], 0 */
  w8((uint32_t)(0x10116452), (0x0u));
  /* 101031e5 mov dword ptr [0x1011677c], 0 */
  w32((uint32_t)(0x1011677c), (0x0u));
  /* 101031ef pop ebx */
  EBX = (pop32());
  /* 101031f0 ret  */
  ESPCHK(0x10103080u, _esp0);
  ESP += 4; return;
}

/* FUN_10003200 @ 0x10103200 (85 bytes, 29 insns) */
void f_10103200(void) {
  FTRACE(0x10103200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10103200 mov eax, dword ptr [0x10116088] */
  EAX = (r32((uint32_t)(0x10116088)));
  /* 10103205 push esi */
  push32((uint32_t)(ESI));
  /* 10103206 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103209 jg 0x10103253 */
  if ((!C.zf&&C.sf==C.of)) goto L_10103253;
  /* 1010320b push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 10103210 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10103216u);
  /* 10103216 mov ecx, eax */
  ECX = (EAX);
  /* 10103218 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 1010321d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1010321f sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 10103222 mov eax, edx */
  EAX = (EDX);
  /* 10103224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103227 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1010322a add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010322c mov esi, edx */
  ESI = (EDX);
  /* 1010322e je 0x10103253 */
  if (C.zf) goto L_10103253;
  /* 10103230 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103232 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103234 push esi */
  push32((uint32_t)(ESI));
  /* 10103235 push 0x10113830 */
  push32((uint32_t)(0x10113830u));
  /* 1010323a call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103240u);
  /* 10103240 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103242 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10103244 push esi */
  push32((uint32_t)(ESI));
  /* 10103245 push 0x10113770 */
  push32((uint32_t)(0x10113770u));
  /* 1010324a call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103250u);
  /* 10103250 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103253:;
  /* 10103253 pop esi */
  ESI = (pop32());
  /* 10103254 ret  */
  ESPCHK(0x10103200u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x10103260 (1 bytes, 1 insns) */
void f_10103260(void) {
  FTRACE(0x10103260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10103260 ret  */
  ESPCHK(0x10103260u, _esp0);
  ESP += 4; return;
}

/* FUN_10003270 @ 0x10103270 (157 bytes, 43 insns) */
void f_10103270(void) {
  FTRACE(0x10103270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10103270 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10103272 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10103274 push 0x10116480 */
  push32((uint32_t)(0x10116480u));
  /* 10103279 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010327fu);
  /* 1010327f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10103281 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10103283 push 0x10116488 */
  push32((uint32_t)(0x10116488u));
  /* 10103288 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010328eu);
  /* 1010328e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10103290 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10103292 push 0x10116470 */
  push32((uint32_t)(0x10116470u));
  /* 10103297 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010329du);
  /* 1010329d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010329f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101032a1 push 0x10116478 */
  push32((uint32_t)(0x10116478u));
  /* 101032a6 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101032acu);
  /* 101032ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101032ae push 0xa */
  push32((uint32_t)(0xau));
  /* 101032b0 push 0x10116490 */
  push32((uint32_t)(0x10116490u));
  /* 101032b5 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101032bbu);
  /* 101032bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101032bd push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101032bf push 0x101163c8 */
  push32((uint32_t)(0x101163c8u));
  /* 101032c4 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101032cau);
  /* 101032ca add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101032cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101032cf push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101032d1 push 0x101163b0 */
  push32((uint32_t)(0x101163b0u));
  /* 101032d6 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101032dcu);
  /* 101032dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101032de push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101032e0 push 0x101163b8 */
  push32((uint32_t)(0x101163b8u));
  /* 101032e5 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101032ebu);
  /* 101032eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101032ed push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101032ef push 0x101163d0 */
  push32((uint32_t)(0x101163d0u));
  /* 101032f4 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101032fau);
  /* 101032fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101032fc push 0xa */
  push32((uint32_t)(0xau));
  /* 101032fe push 0x101163d8 */
  push32((uint32_t)(0x101163d8u));
  /* 10103303 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103309u);
  /* 10103309 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010330c ret  */
  ESPCHK(0x10103270u, _esp0);
  ESP += 4; return;
}

/* FUN_10003310 @ 0x10103310 (79 bytes, 22 insns) */
void f_10103310(void) {
  FTRACE(0x10103310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10103310 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10103312 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103314 push 0x10113a40 */
  push32((uint32_t)(0x10113a40u));
  /* 10103319 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010331fu);
  /* 1010331f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10103321 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103323 push 0x10113a48 */
  push32((uint32_t)(0x10113a48u));
  /* 10103328 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010332eu);
  /* 1010332e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10103330 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103332 push 0x10113a38 */
  push32((uint32_t)(0x10113a38u));
  /* 10103337 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010333du);
  /* 1010333d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010333f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103341 push 0x101160a8 */
  push32((uint32_t)(0x101160a8u));
  /* 10103346 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010334cu);
  /* 1010334c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010334e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103350 push 0x10116098 */
  push32((uint32_t)(0x10116098u));
  /* 10103355 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010335bu);
  /* 1010335b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010335e ret  */
  ESPCHK(0x10103310u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x10103360 (64 bytes, 18 insns) */
void f_10103360(void) {
  FTRACE(0x10103360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10103360 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103362 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103364 push 0x101161c8 */
  push32((uint32_t)(0x101161c8u));
  /* 10103369 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010336fu);
  /* 1010336f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103371 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103373 push 0x101161d0 */
  push32((uint32_t)(0x101161d0u));
  /* 10103378 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010337eu);
  /* 1010337e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103380 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103382 push 0x101161d8 */
  push32((uint32_t)(0x101161d8u));
  /* 10103387 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010338du);
  /* 1010338d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1010338f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103391 push 0x101161e0 */
  push32((uint32_t)(0x101161e0u));
  /* 10103396 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010339cu);
  /* 1010339c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010339f ret  */
  ESPCHK(0x10103360u, _esp0);
  ESP += 4; return;
}

/* FUN_100033a0 @ 0x101033a0 (3787 bytes, 1079 insns) */
void f_101033a0(void) {
  FTRACE(0x101033a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101033a0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101033a3 push ebx */
  push32((uint32_t)(EBX));
  /* 101033a4 push ebp */
  push32((uint32_t)(EBP));
  /* 101033a5 push esi */
  push32((uint32_t)(ESI));
  /* 101033a6 push edi */
  push32((uint32_t)(EDI));
  /* 101033a7 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 101033ac push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 101033b1 call dword ptr [0x10116648] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116648))), 0x101033b7u);
  /* 101033b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101033b9 call 0x101027a0 */
  push32(0x101033beu); f_101027a0();
  /* 101033be push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101033c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 101033c2 call 0x10102680 */
  push32(0x101033c7u); f_10102680();
  /* 101033c7 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101033c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 101033cb mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 101033cf call 0x10102680 */
  push32(0x101033d4u); f_10102680();
  /* 101033d4 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 101033d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 101033d8 mov edi, eax */
  EDI = (EAX);
  /* 101033da call 0x10102680 */
  push32(0x101033dfu); f_10102680();
  /* 101033df push 0xe */
  push32((uint32_t)(0xeu));
  /* 101033e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101033e3 mov esi, eax */
  ESI = (EAX);
  /* 101033e5 call 0x10102680 */
  push32(0x101033eau); f_10102680();
  /* 101033ea push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 101033ef mov ebx, eax */
  EBX = (EAX);
  /* 101033f1 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x101033f7u);
  /* 101033f7 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101033fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101033ff add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10103401 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 10103405 push 0x10116408 */
  push32((uint32_t)(0x10116408u));
  /* 1010340a lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 1010340d mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 10103411 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10103417u);
  /* 10103417 push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 1010341c mov ebx, eax */
  EBX = (EAX);
  /* 1010341e call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10103424u);
  /* 10103424 push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 10103429 mov ebp, eax */
  EBP = (EAX);
  /* 1010342b call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10103431u);
  /* 10103431 push 0x10116118 */
  push32((uint32_t)(0x10116118u));
  /* 10103436 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 1010343a call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10103440u);
  /* 10103440 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103443 mov edi, eax */
  EDI = (EAX);
  /* 10103445 push 0x10116118 */
  push32((uint32_t)(0x10116118u));
  /* 1010344a call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10103450u);
  /* 10103450 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10103455 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10103459 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x1010345fu);
  /* 1010345f push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10103464 mov esi, eax */
  ESI = (EAX);
  /* 10103466 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x1010346cu);
  /* 1010346c push 0x10116408 */
  push32((uint32_t)(0x10116408u));
  /* 10103471 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 10103475 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x1010347bu);
  /* 1010347b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 1010347f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 10103483 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10103485 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10103489 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010348b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010348d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010348f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10103491 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10103493 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10103495 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10103497 push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 1010349c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010349e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 101034a2 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101034a8u);
  /* 101034a8 push 3 */
  push32((uint32_t)(0x3u));
  /* 101034aa mov bl, 1 */
  BL = (0x1u);
  /* 101034ac call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101034b2u);
  /* 101034b2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101034b5 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101034ba jle 0x101034ea */
  if ((C.zf||C.sf!=C.of)) goto L_101034ea;
  /* 101034bc push 1 */
  push32((uint32_t)(0x1u));
  /* 101034be call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101034c4u);
  /* 101034c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101034c7 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101034cc jle 0x101034ea */
  if ((C.zf||C.sf!=C.of)) goto L_101034ea;
  /* 101034ce push 4 */
  push32((uint32_t)(0x4u));
  /* 101034d0 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101034d6u);
  /* 101034d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101034d9 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101034de jle 0x101034ea */
  if ((C.zf||C.sf!=C.of)) goto L_101034ea;
  /* 101034e0 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 101034e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101034e6 jne 0x101034ea */
  if (!C.zf) goto L_101034ea;
  /* 101034e8 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_101034ea:;
  /* 101034ea push 0x101162c0 */
  push32((uint32_t)(0x101162c0u));
  /* 101034ef call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101034f5u);
  /* 101034f5 push 3 */
  push32((uint32_t)(0x3u));
  /* 101034f7 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 101034fb call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103501u);
  /* 10103501 push 0x101162e8 */
  push32((uint32_t)(0x101162e8u));
  /* 10103506 mov esi, eax */
  ESI = (EAX);
  /* 10103508 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x1010350eu);
  /* 1010350e push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 10103513 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 10103517 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x1010351du);
  /* 1010351d push 0x10116210 */
  push32((uint32_t)(0x10116210u));
  /* 10103522 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10103528u);
  /* 10103528 push 0x101164e0 */
  push32((uint32_t)(0x101164e0u));
  /* 1010352d mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 10103531 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10103537u);
  /* 10103537 push 0x10116460 */
  push32((uint32_t)(0x10116460u));
  /* 1010353c mov edi, eax */
  EDI = (EAX);
  /* 1010353e call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10103544u);
  /* 10103544 push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 10103549 mov ebp, eax */
  EBP = (EAX);
  /* 1010354b call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10103551u);
  /* 10103551 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10103553 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10103555 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10103557 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10103559 push 0x10116240 */
  push32((uint32_t)(0x10116240u));
  /* 1010355e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 10103562 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 10103567 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010356du);
  /* 1010356d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1010356f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10103571 push 0x10116280 */
  push32((uint32_t)(0x10116280u));
  /* 10103576 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010357cu);
  /* 1010357c push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 10103581 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10103587u);
  /* 10103587 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 1010358c mov edi, eax */
  EDI = (EAX);
  /* 1010358e call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10103594u);
  /* 10103594 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103597 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10103599 je 0x101035a0 */
  if (C.zf) goto L_101035a0;
  /* 1010359b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_101035a0:;
  /* 101035a0 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 101035a4 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 101035a6 je 0x10103f6d */
  if (C.zf) goto L_10103f6d;
  /* 101035ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101035ae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101035b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101035b2 push 0x10116108 */
  push32((uint32_t)(0x10116108u));
  /* 101035b7 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101035bdu);
  /* 101035bd push 0x10116108 */
  push32((uint32_t)(0x10116108u));
  /* 101035c2 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101035c8u);
  /* 101035c8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101035cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101035cd je 0x10104263 */
  if (C.zf) goto L_10104263;
  /* 101035d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101035d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101035d7 push 0x101164a8 */
  push32((uint32_t)(0x101164a8u));
  /* 101035dc call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101035e2u);
  /* 101035e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101035e5 call dword ptr [0x101166a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101166a0))), 0x101035ebu);
  /* 101035eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101035ed jne 0x10103630 */
  if (!C.zf) goto L_10103630;
  /* 101035ef cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101035f5 jle 0x1010361c */
  if ((C.zf||C.sf!=C.of)) goto L_1010361c;
  /* 101035f7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101035f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101035fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101035fd push 0x101162c0 */
  push32((uint32_t)(0x101162c0u));
  /* 10103602 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103608u);
  /* 10103608 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010360a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010360c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010360e push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 10103613 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103619u);
  /* 10103619 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010361c:;
  /* 1010361c push 1 */
  push32((uint32_t)(0x1u));
  /* 1010361e push 1 */
  push32((uint32_t)(0x1u));
  /* 10103620 push 0 */
  push32((uint32_t)(0x0u));
  /* 10103622 call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x10103628u);
  /* 10103628 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010362b jmp 0x1010373e */
  goto L_1010373e;
L_10103630:;
  /* 10103630 push 0x101138d0 */
  push32((uint32_t)(0x101138d0u));
  /* 10103635 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x1010363bu);
  /* 1010363b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010363e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103640 je 0x1010366a */
  if (C.zf) goto L_1010366a;
  /* 10103642 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103648 jle 0x10103652 */
  if ((C.zf||C.sf!=C.of)) goto L_10103652;
  /* 1010364a push 6 */
  push32((uint32_t)(0x6u));
  /* 1010364c push 8 */
  push32((uint32_t)(0x8u));
  /* 1010364e push 9 */
  push32((uint32_t)(0x9u));
  /* 10103650 jmp 0x10103690 */
  goto L_10103690;
L_10103652:;
  /* 10103652 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103658 jle 0x10103662 */
  if ((C.zf||C.sf!=C.of)) goto L_10103662;
  /* 1010365a push 3 */
  push32((uint32_t)(0x3u));
  /* 1010365c push 5 */
  push32((uint32_t)(0x5u));
  /* 1010365e push 9 */
  push32((uint32_t)(0x9u));
  /* 10103660 jmp 0x10103690 */
  goto L_10103690;
L_10103662:;
  /* 10103662 push 1 */
  push32((uint32_t)(0x1u));
  /* 10103664 push 4 */
  push32((uint32_t)(0x4u));
  /* 10103666 push 9 */
  push32((uint32_t)(0x9u));
  /* 10103668 jmp 0x10103690 */
  goto L_10103690;
L_1010366a:;
  /* 1010366a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103670 jle 0x1010367a */
  if ((C.zf||C.sf!=C.of)) goto L_1010367a;
  /* 10103672 push 8 */
  push32((uint32_t)(0x8u));
  /* 10103674 push 8 */
  push32((uint32_t)(0x8u));
  /* 10103676 push 9 */
  push32((uint32_t)(0x9u));
  /* 10103678 jmp 0x10103690 */
  goto L_10103690;
L_1010367a:;
  /* 1010367a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103680 jle 0x1010368a */
  if ((C.zf||C.sf!=C.of)) goto L_1010368a;
  /* 10103682 push 5 */
  push32((uint32_t)(0x5u));
  /* 10103684 push 5 */
  push32((uint32_t)(0x5u));
  /* 10103686 push 9 */
  push32((uint32_t)(0x9u));
  /* 10103688 jmp 0x10103690 */
  goto L_10103690;
L_1010368a:;
  /* 1010368a push 4 */
  push32((uint32_t)(0x4u));
  /* 1010368c push 4 */
  push32((uint32_t)(0x4u));
  /* 1010368e push 0xa */
  push32((uint32_t)(0xau));
L_10103690:;
  /* 10103690 call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x10103696u);
  /* 10103696 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 1010369a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010369d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010369f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 101036a4 je 0x101036ab */
  if (C.zf) goto L_101036ab;
  /* 101036a6 mov edi, 0x12c */
  EDI = (0x12cu);
L_101036ab:;
  /* 101036ab cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101036ae jge 0x101036cc */
  if ((C.sf==C.of)) goto L_101036cc;
  /* 101036b0 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101036b6 jle 0x101036cc */
  if ((C.zf||C.sf!=C.of)) goto L_101036cc;
  /* 101036b8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101036ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101036bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101036be push 0x101162c0 */
  push32((uint32_t)(0x101162c0u));
  /* 101036c3 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101036c9u);
  /* 101036c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101036cc:;
  /* 101036cc cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101036d2 jle 0x1010370d */
  if ((C.zf||C.sf!=C.of)) goto L_1010370d;
  /* 101036d4 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101036d6 je 0x101036f2 */
  if (C.zf) goto L_101036f2;
  /* 101036d8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101036da push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 101036df push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101036e4 push 0x101162c0 */
  push32((uint32_t)(0x101162c0u));
  /* 101036e9 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101036efu);
  /* 101036ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101036f2:;
  /* 101036f2 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101036f8 jle 0x1010370d */
  if ((C.zf||C.sf!=C.of)) goto L_1010370d;
  /* 101036fa push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101036fc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101036fe push edi */
  push32((uint32_t)(EDI));
  /* 101036ff push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 10103704 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x1010370au);
  /* 1010370a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010370d:;
  /* 1010370d push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 10103712 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10103718u);
  /* 10103718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010371b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010371d je 0x1010373e */
  if (C.zf) goto L_1010373e;
  /* 1010371f cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103725 jle 0x1010373e */
  if ((C.zf||C.sf!=C.of)) goto L_1010373e;
  /* 10103727 push 0x10116408 */
  push32((uint32_t)(0x10116408u));
  /* 1010372c call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10103732u);
  /* 10103732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103735 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10103737 jle 0x1010373e */
  if ((C.zf||C.sf!=C.of)) goto L_1010373e;
  /* 10103739 call 0x10103270 */
  push32(0x1010373eu); f_10103270();
L_1010373e:;
  /* 1010373e mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 10103742 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103744 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103747 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10103749 jge 0x1010374f */
  if ((C.sf==C.of)) goto L_1010374f;
  /* 1010374b push 5 */
  push32((uint32_t)(0x5u));
  /* 1010374d jmp 0x10103753 */
  goto L_10103753;
L_1010374f:;
  /* 1010374f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10103752 push eax */
  push32((uint32_t)(EAX));
L_10103753:;
  /* 10103753 push 0x101160c0 */
  push32((uint32_t)(0x101160c0u));
  /* 10103758 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x1010375eu);
  /* 1010375e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 10103762 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103765 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103768 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1010376a jge 0x10103780 */
  if ((C.sf==C.of)) goto L_10103780;
  /* 1010376c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1010376e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10103770 push 0x10113a18 */
  push32((uint32_t)(0x10113a18u));
  /* 10103775 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x1010377bu);
  /* 1010377b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010377e jmp 0x101037ba */
  goto L_101037ba;
L_10103780:;
  /* 10103780 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 10103783 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103785 push ecx */
  push32((uint32_t)(ECX));
  /* 10103786 push 0x10113a18 */
  push32((uint32_t)(0x10113a18u));
  /* 1010378b call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103791u);
  /* 10103791 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103793 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 10103796 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10103798 push edx */
  push32((uint32_t)(EDX));
  /* 10103799 push 0x10113a18 */
  push32((uint32_t)(0x10113a18u));
  /* 1010379e call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101037a4u);
  /* 101037a4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101037a6 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101037a9 push 0xa */
  push32((uint32_t)(0xau));
  /* 101037ab push edi */
  push32((uint32_t)(EDI));
  /* 101037ac push 0x10113a18 */
  push32((uint32_t)(0x10113a18u));
  /* 101037b1 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101037b7u);
  /* 101037b7 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101037ba:;
  /* 101037ba push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101037bc push 0 */
  push32((uint32_t)(0x0u));
  /* 101037be call 0x10102680 */
  push32(0x101037c3u); f_10102680();
  /* 101037c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101037c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101037c8 je 0x10103827 */
  if (C.zf) goto L_10103827;
  /* 101037ca push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101037cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101037ce push 0x10116418 */
  push32((uint32_t)(0x10116418u));
  /* 101037d3 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101037d9u);
  /* 101037d9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101037db push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101037dd push 0x10116400 */
  push32((uint32_t)(0x10116400u));
  /* 101037e2 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101037e8u);
  /* 101037e8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101037ea push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101037ec push 0x10116410 */
  push32((uint32_t)(0x10116410u));
  /* 101037f1 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101037f7u);
  /* 101037f7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101037f9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101037fb push 0x101163f0 */
  push32((uint32_t)(0x101163f0u));
  /* 10103800 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103806u);
  /* 10103806 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103808 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1010380a push 0x101163f8 */
  push32((uint32_t)(0x101163f8u));
  /* 1010380f call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103815u);
  /* 10103815 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103817 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103819 push 0x101163e8 */
  push32((uint32_t)(0x101163e8u));
  /* 1010381e call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103824u);
  /* 10103824 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103827:;
  /* 10103827 push 0xa */
  push32((uint32_t)(0xau));
  /* 10103829 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1010382b push 3 */
  push32((uint32_t)(0x3u));
  /* 1010382d push 0x101139d0 */
  push32((uint32_t)(0x101139d0u));
  /* 10103832 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103838u);
  /* 10103838 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010383a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010383c push 1 */
  push32((uint32_t)(0x1u));
  /* 1010383e push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 10103843 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103849u);
  /* 10103849 push 5 */
  push32((uint32_t)(0x5u));
  /* 1010384b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1010384d push 2 */
  push32((uint32_t)(0x2u));
  /* 1010384f push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 10103854 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x1010385au);
  /* 1010385a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 1010385e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103861 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10103863 jne 0x10103879 */
  if (!C.zf) goto L_10103879;
  /* 10103865 push 5 */
  push32((uint32_t)(0x5u));
  /* 10103867 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10103869 push 3 */
  push32((uint32_t)(0x3u));
  /* 1010386b push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 10103870 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103876u);
  /* 10103876 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103879:;
  /* 10103879 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010387b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010387d push 1 */
  push32((uint32_t)(0x1u));
  /* 1010387f push 0x10116318 */
  push32((uint32_t)(0x10116318u));
  /* 10103884 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x1010388au);
  /* 1010388a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010388c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010388e push 1 */
  push32((uint32_t)(0x1u));
  /* 10103890 push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 10103895 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x1010389bu);
  /* 1010389b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1010389d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1010389f push 1 */
  push32((uint32_t)(0x1u));
  /* 101038a1 push 0x10116100 */
  push32((uint32_t)(0x10116100u));
  /* 101038a6 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101038acu);
  /* 101038ac push 5 */
  push32((uint32_t)(0x5u));
  /* 101038ae push 0xa */
  push32((uint32_t)(0xau));
  /* 101038b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 101038b2 push 0x10116318 */
  push32((uint32_t)(0x10116318u));
  /* 101038b7 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101038bdu);
  /* 101038bd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101038c0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101038c2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101038c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101038c6 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 101038cb call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101038d1u);
  /* 101038d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101038d3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101038d5 push 0x10113790 */
  push32((uint32_t)(0x10113790u));
  /* 101038da call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101038e0u);
  /* 101038e0 push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 101038e5 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101038ebu);
  /* 101038eb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101038ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101038f0 jle 0x10103917 */
  if ((C.zf||C.sf!=C.of)) goto L_10103917;
  /* 101038f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101038f4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101038f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101038f8 push 0x101139a8 */
  push32((uint32_t)(0x101139a8u));
  /* 101038fd call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103903u);
  /* 10103903 push 3 */
  push32((uint32_t)(0x3u));
  /* 10103905 push 5 */
  push32((uint32_t)(0x5u));
  /* 10103907 push 1 */
  push32((uint32_t)(0x1u));
  /* 10103909 push 0x10116228 */
  push32((uint32_t)(0x10116228u));
  /* 1010390e call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103914u);
  /* 10103914 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103917:;
  /* 10103917 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103919 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1010391b push 1 */
  push32((uint32_t)(0x1u));
  /* 1010391d push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 10103922 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103928u);
  /* 10103928 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010392b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1010392d jne 0x10103943 */
  if (!C.zf) goto L_10103943;
  /* 1010392f push 0xa */
  push32((uint32_t)(0xau));
  /* 10103931 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10103933 push 1 */
  push32((uint32_t)(0x1u));
  /* 10103935 push 0x10116118 */
  push32((uint32_t)(0x10116118u));
  /* 1010393a call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103940u);
  /* 10103940 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103943:;
  /* 10103943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103945 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103947 push 1 */
  push32((uint32_t)(0x1u));
  /* 10103949 push 0x10113748 */
  push32((uint32_t)(0x10113748u));
  /* 1010394e call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103954u);
  /* 10103954 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103957 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010395a jle 0x10103970 */
  if ((C.zf||C.sf!=C.of)) goto L_10103970;
  /* 1010395c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1010395e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103960 push 2 */
  push32((uint32_t)(0x2u));
  /* 10103962 push 0x10116108 */
  push32((uint32_t)(0x10116108u));
  /* 10103967 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x1010396du);
  /* 1010396d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103970:;
  /* 10103970 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10103972 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103974 push 1 */
  push32((uint32_t)(0x1u));
  /* 10103976 push 0x10116388 */
  push32((uint32_t)(0x10116388u));
  /* 1010397b call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103981u);
  /* 10103981 push 5 */
  push32((uint32_t)(0x5u));
  /* 10103983 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103985 push 2 */
  push32((uint32_t)(0x2u));
  /* 10103987 push 0x10116388 */
  push32((uint32_t)(0x10116388u));
  /* 1010398c call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103992u);
  /* 10103992 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10103994 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103996 push 0x101161a8 */
  push32((uint32_t)(0x101161a8u));
  /* 1010399b call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101039a1u);
  /* 101039a1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101039a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101039a5 push 0x10116160 */
  push32((uint32_t)(0x10116160u));
  /* 101039aa call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101039b0u);
  /* 101039b0 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101039b2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101039b4 push 0x10116168 */
  push32((uint32_t)(0x10116168u));
  /* 101039b9 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101039bfu);
  /* 101039bf add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101039c2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101039c4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101039c6 push 0x10116170 */
  push32((uint32_t)(0x10116170u));
  /* 101039cb call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101039d1u);
  /* 101039d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101039d3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101039d5 push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 101039da call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101039e0u);
  /* 101039e0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101039e2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101039e4 push 0x101162e8 */
  push32((uint32_t)(0x101162e8u));
  /* 101039e9 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101039efu);
  /* 101039ef push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101039f1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101039f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101039f5 push 0x10116408 */
  push32((uint32_t)(0x10116408u));
  /* 101039fa call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103a00u);
  /* 10103a00 push 5 */
  push32((uint32_t)(0x5u));
  /* 10103a02 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103a04 push 2 */
  push32((uint32_t)(0x2u));
  /* 10103a06 push 0x10116408 */
  push32((uint32_t)(0x10116408u));
  /* 10103a0b call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103a11u);
  /* 10103a11 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103a14 push 5 */
  push32((uint32_t)(0x5u));
  /* 10103a16 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103a18 push 3 */
  push32((uint32_t)(0x3u));
  /* 10103a1a push 0x10116408 */
  push32((uint32_t)(0x10116408u));
  /* 10103a1f call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103a25u);
  /* 10103a25 push 5 */
  push32((uint32_t)(0x5u));
  /* 10103a27 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10103a29 push 5 */
  push32((uint32_t)(0x5u));
  /* 10103a2b push 0x10116408 */
  push32((uint32_t)(0x10116408u));
  /* 10103a30 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103a36u);
  /* 10103a36 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10103a38 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10103a3a push 0x10113a88 */
  push32((uint32_t)(0x10113a88u));
  /* 10103a3f call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103a45u);
  /* 10103a45 call 0x10102670 */
  push32(0x10103a4au); f_10102670();
  /* 10103a4a push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 10103a4f mov edi, eax */
  EDI = (EAX);
  /* 10103a51 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10103a57u);
  /* 10103a57 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103a5a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103a5c je 0x10103a7f */
  if (C.zf) goto L_10103a7f;
  /* 10103a5e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103a60 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103a62 push 0x10113a88 */
  push32((uint32_t)(0x10113a88u));
  /* 10103a67 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103a6du);
  /* 10103a6d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10103a6f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10103a71 push 0x101139a0 */
  push32((uint32_t)(0x101139a0u));
  /* 10103a76 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103a7cu);
  /* 10103a7c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103a7f:;
  /* 10103a7f push 0x10113a88 */
  push32((uint32_t)(0x10113a88u));
  /* 10103a84 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10103a8au);
  /* 10103a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103a8d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103a8f je 0x10103ab7 */
  if (C.zf) goto L_10103ab7;
  /* 10103a91 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103a93 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103a95 push 0x10113a70 */
  push32((uint32_t)(0x10113a70u));
  /* 10103a9a call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103aa0u);
  /* 10103aa0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10103aa2 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10103aa4 push 0x101139b0 */
  push32((uint32_t)(0x101139b0u));
  /* 10103aa9 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103aafu);
  /* 10103aaf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103ab2 call 0x10103360 */
  push32(0x10103ab7u); f_10103360();
L_10103ab7:;
  /* 10103ab7 push 0x101161e0 */
  push32((uint32_t)(0x101161e0u));
  /* 10103abc call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10103ac2u);
  /* 10103ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103ac5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103ac7 je 0x10103aee */
  if (C.zf) goto L_10103aee;
  /* 10103ac9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103acb push 0xa */
  push32((uint32_t)(0xau));
  /* 10103acd push 0xa */
  push32((uint32_t)(0xau));
  /* 10103acf push 0x10113798 */
  push32((uint32_t)(0x10113798u));
  /* 10103ad4 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103adau);
  /* 10103ada push 0xa */
  push32((uint32_t)(0xau));
  /* 10103adc push 3 */
  push32((uint32_t)(0x3u));
  /* 10103ade push 0xf */
  push32((uint32_t)(0xfu));
  /* 10103ae0 push 0x10113798 */
  push32((uint32_t)(0x10113798u));
  /* 10103ae5 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103aebu);
  /* 10103aeb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103aee:;
  /* 10103aee push 0 */
  push32((uint32_t)(0x0u));
  /* 10103af0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10103af2 call 0x10102630 */
  push32(0x10103af7u); f_10102630();
  /* 10103af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10103af9 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103affu);
  /* 10103aff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103b02 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103b07 jle 0x10103b4b */
  if ((C.zf||C.sf!=C.of)) goto L_10103b4b;
  /* 10103b09 push 0x101138d0 */
  push32((uint32_t)(0x101138d0u));
  /* 10103b0e call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10103b14u);
  /* 10103b14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103b17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103b19 je 0x10103b4b */
  if (C.zf) goto L_10103b4b;
  /* 10103b1b push 1 */
  push32((uint32_t)(0x1u));
  /* 10103b1d call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103b23u);
  /* 10103b23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103b26 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103b2b jge 0x10103b4b */
  if ((C.sf==C.of)) goto L_10103b4b;
  /* 10103b2d push 0x10113a88 */
  push32((uint32_t)(0x10113a88u));
  /* 10103b32 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10103b38u);
  /* 10103b38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103b3b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103b3d jne 0x10103b4b */
  if (!C.zf) goto L_10103b4b;
  /* 10103b3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10103b41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10103b43 call 0x10102630 */
  push32(0x10103b48u); f_10102630();
  /* 10103b48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103b4b:;
  /* 10103b4b push 0x10113a88 */
  push32((uint32_t)(0x10113a88u));
  /* 10103b50 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10103b56u);
  /* 10103b56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103b59 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103b5b je 0x10103cdc */
  if (C.zf) goto L_10103cdc;
  /* 10103b61 push 0x10116220 */
  push32((uint32_t)(0x10116220u));
  /* 10103b66 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10103b6cu);
  /* 10103b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103b6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103b71 je 0x10103cdc */
  if (C.zf) goto L_10103cdc;
  /* 10103b77 push 0x101162e8 */
  push32((uint32_t)(0x101162e8u));
  /* 10103b7c call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10103b82u);
  /* 10103b82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103b85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103b87 je 0x10103cdc */
  if (C.zf) goto L_10103cdc;
  /* 10103b8d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103b90 je 0x10103b97 */
  if (C.zf) goto L_10103b97;
  /* 10103b92 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103b95 jne 0x10103bc7 */
  if (!C.zf) goto L_10103bc7;
L_10103b97:;
  /* 10103b97 push 3 */
  push32((uint32_t)(0x3u));
  /* 10103b99 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103b9fu);
  /* 10103b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103ba2 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103ba7 jle 0x10103bc7 */
  if ((C.zf||C.sf!=C.of)) goto L_10103bc7;
  /* 10103ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10103bab call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103bb1u);
  /* 10103bb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103bb4 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103bb9 jge 0x10103bc7 */
  if ((C.sf==C.of)) goto L_10103bc7;
  /* 10103bbb push 1 */
  push32((uint32_t)(0x1u));
  /* 10103bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10103bbf call 0x10102630 */
  push32(0x10103bc4u); f_10102630();
  /* 10103bc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103bc7:;
  /* 10103bc7 push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 10103bcc call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10103bd2u);
  /* 10103bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103bd5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103bd7 jne 0x10103c09 */
  if (!C.zf) goto L_10103c09;
  /* 10103bd9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10103bdb call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103be1u);
  /* 10103be1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103be4 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103be9 jle 0x10103c09 */
  if ((C.zf||C.sf!=C.of)) goto L_10103c09;
  /* 10103beb push 1 */
  push32((uint32_t)(0x1u));
  /* 10103bed call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103bf3u);
  /* 10103bf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103bf6 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103bfb jge 0x10103c09 */
  if ((C.sf==C.of)) goto L_10103c09;
  /* 10103bfd push 1 */
  push32((uint32_t)(0x1u));
  /* 10103bff push 1 */
  push32((uint32_t)(0x1u));
  /* 10103c01 call 0x10102630 */
  push32(0x10103c06u); f_10102630();
  /* 10103c06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103c09:;
  /* 10103c09 push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 10103c0e call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10103c14u);
  /* 10103c14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103c17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103c19 je 0x10103cdc */
  if (C.zf) goto L_10103cdc;
  /* 10103c1f cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103c22 jne 0x10103c62 */
  if (!C.zf) goto L_10103c62;
  /* 10103c24 push 3 */
  push32((uint32_t)(0x3u));
  /* 10103c26 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103c2cu);
  /* 10103c2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103c2f cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103c34 jle 0x10103d37 */
  if ((C.zf||C.sf!=C.of)) goto L_10103d37;
  /* 10103c3a push 4 */
  push32((uint32_t)(0x4u));
  /* 10103c3c call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103c42u);
  /* 10103c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103c45 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103c4a jle 0x10103d37 */
  if ((C.zf||C.sf!=C.of)) goto L_10103d37;
  /* 10103c50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10103c52 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103c58u);
  /* 10103c58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103c5b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103c60 jmp 0x10103ccc */
  goto L_10103ccc;
L_10103c62:;
  /* 10103c62 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103c65 jne 0x10103ca5 */
  if (!C.zf) goto L_10103ca5;
  /* 10103c67 push 3 */
  push32((uint32_t)(0x3u));
  /* 10103c69 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103c6fu);
  /* 10103c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103c72 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103c77 jle 0x10103d37 */
  if ((C.zf||C.sf!=C.of)) goto L_10103d37;
  /* 10103c7d push 4 */
  push32((uint32_t)(0x4u));
  /* 10103c7f call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103c85u);
  /* 10103c85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103c88 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103c8d jle 0x10103d37 */
  if ((C.zf||C.sf!=C.of)) goto L_10103d37;
  /* 10103c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10103c95 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103c9bu);
  /* 10103c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103c9e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103ca3 jmp 0x10103ccc */
  goto L_10103ccc;
L_10103ca5:;
  /* 10103ca5 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103ca8 jne 0x10103cdc */
  if (!C.zf) goto L_10103cdc;
  /* 10103caa push 3 */
  push32((uint32_t)(0x3u));
  /* 10103cac call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103cb2u);
  /* 10103cb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103cb5 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103cba jle 0x10103d37 */
  if ((C.zf||C.sf!=C.of)) goto L_10103d37;
  /* 10103cbc push 1 */
  push32((uint32_t)(0x1u));
  /* 10103cbe call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10103cc4u);
  /* 10103cc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103cc7 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10103ccc:;
  /* 10103ccc jge 0x10103d37 */
  if ((C.sf==C.of)) goto L_10103d37;
  /* 10103cce push 1 */
  push32((uint32_t)(0x1u));
  /* 10103cd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10103cd2 call 0x10102630 */
  push32(0x10103cd7u); f_10102630();
  /* 10103cd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103cda jmp 0x10103d37 */
  goto L_10103d37;
L_10103cdc:;
  /* 10103cdc cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103cdf jne 0x10103d37 */
  if (!C.zf) goto L_10103d37;
  /* 10103ce1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10103ce3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10103ce5 push 0x10113898 */
  push32((uint32_t)(0x10113898u));
  /* 10103cea call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103cf0u);
  /* 10103cf0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103cf2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103cf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10103cf6 push 0x101164c8 */
  push32((uint32_t)(0x101164c8u));
  /* 10103cfb call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103d01u);
  /* 10103d01 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103d03 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103d05 push 2 */
  push32((uint32_t)(0x2u));
  /* 10103d07 push 0x101164c8 */
  push32((uint32_t)(0x101164c8u));
  /* 10103d0c call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103d12u);
  /* 10103d12 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103d14 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10103d16 push 3 */
  push32((uint32_t)(0x3u));
  /* 10103d18 push 0x101164c8 */
  push32((uint32_t)(0x101164c8u));
  /* 10103d1d call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103d23u);
  /* 10103d23 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103d25 push 0xa */
  push32((uint32_t)(0xau));
  /* 10103d27 push 5 */
  push32((uint32_t)(0x5u));
  /* 10103d29 push 0x101164c8 */
  push32((uint32_t)(0x101164c8u));
  /* 10103d2e call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103d34u);
  /* 10103d34 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103d37:;
  /* 10103d37 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103d3a jle 0x10103d93 */
  if ((C.zf||C.sf!=C.of)) goto L_10103d93;
  /* 10103d3c mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10103d40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103d42 je 0x10103d93 */
  if (C.zf) goto L_10103d93;
  /* 10103d44 push 0xa */
  push32((uint32_t)(0xau));
  /* 10103d46 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10103d48 push 1 */
  push32((uint32_t)(0x1u));
  /* 10103d4a push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 10103d4f call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103d55u);
  /* 10103d55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103d58 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103d5b jle 0x10103d93 */
  if ((C.zf||C.sf!=C.of)) goto L_10103d93;
  /* 10103d5d push 0xa */
  push32((uint32_t)(0xau));
  /* 10103d5f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10103d61 push 2 */
  push32((uint32_t)(0x2u));
  /* 10103d63 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 10103d68 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103d6eu);
  /* 10103d6e push 0xa */
  push32((uint32_t)(0xau));
  /* 10103d70 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10103d72 push 3 */
  push32((uint32_t)(0x3u));
  /* 10103d74 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 10103d79 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103d7fu);
  /* 10103d7f push 0xa */
  push32((uint32_t)(0xau));
  /* 10103d81 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103d83 push 4 */
  push32((uint32_t)(0x4u));
  /* 10103d85 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 10103d8a call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103d90u);
  /* 10103d90 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103d93:;
  /* 10103d93 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 10103d97 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10103d99 je 0x10103dd7 */
  if (C.zf) goto L_10103dd7;
  /* 10103d9b push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 10103da0 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10103da6u);
  /* 10103da6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103da9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103dab je 0x10103dd7 */
  if (C.zf) goto L_10103dd7;
  /* 10103dad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10103daf push 1 */
  push32((uint32_t)(0x1u));
  /* 10103db1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10103db3 push 0x10116290 */
  push32((uint32_t)(0x10116290u));
  /* 10103db8 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103dbeu);
  /* 10103dbe push 0x101162c8 */
  push32((uint32_t)(0x101162c8u));
  /* 10103dc3 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10103dc9u);
  /* 10103dc9 push 0x101161e0 */
  push32((uint32_t)(0x101161e0u));
  /* 10103dce call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10103dd4u);
  /* 10103dd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103dd7:;
  /* 10103dd7 push 0x10113748 */
  push32((uint32_t)(0x10113748u));
  /* 10103ddc call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10103de2u);
  /* 10103de2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103de4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103de6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10103de8 push 0x10116320 */
  push32((uint32_t)(0x10116320u));
  /* 10103ded call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103df3u);
  /* 10103df3 push 0x10116220 */
  push32((uint32_t)(0x10116220u));
  /* 10103df8 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10103dfeu);
  /* 10103dfe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103e01 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103e03 je 0x10103e19 */
  if (C.zf) goto L_10103e19;
  /* 10103e05 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103e07 push 0xa */
  push32((uint32_t)(0xau));
  /* 10103e09 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10103e0b push 0x10116320 */
  push32((uint32_t)(0x10116320u));
  /* 10103e10 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103e16u);
  /* 10103e16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103e19:;
  /* 10103e19 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10103e1b je 0x10103f05 */
  if (C.zf) goto L_10103f05;
  /* 10103e21 push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 10103e26 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10103e2cu);
  /* 10103e2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103e2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103e31 je 0x10103f05 */
  if (C.zf) goto L_10103f05;
  /* 10103e37 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10103e39 jne 0x10103e71 */
  if (!C.zf) goto L_10103e71;
  /* 10103e3b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10103e3d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103e3f push 2 */
  push32((uint32_t)(0x2u));
  /* 10103e41 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10103e46 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103e4cu);
  /* 10103e4c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10103e4e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103e50 push 3 */
  push32((uint32_t)(0x3u));
  /* 10103e52 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10103e57 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103e5du);
  /* 10103e5d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10103e5f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103e61 push 4 */
  push32((uint32_t)(0x4u));
  /* 10103e63 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10103e68 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103e6eu);
  /* 10103e6e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103e71:;
  /* 10103e71 push 0x10116210 */
  push32((uint32_t)(0x10116210u));
  /* 10103e76 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10103e7cu);
  /* 10103e7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103e7f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103e82 jle 0x10103ea5 */
  if ((C.zf||C.sf!=C.of)) goto L_10103ea5;
  /* 10103e84 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10103e86 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103e88 push 0x10116338 */
  push32((uint32_t)(0x10116338u));
  /* 10103e8d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103e93u);
  /* 10103e93 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10103e95 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10103e97 push 0x10116340 */
  push32((uint32_t)(0x10116340u));
  /* 10103e9c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103ea2u);
  /* 10103ea2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103ea5:;
  /* 10103ea5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103ea7 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10103ea9 push 0x10116220 */
  push32((uint32_t)(0x10116220u));
  /* 10103eae call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103eb4u);
  /* 10103eb4 push 0x10113a38 */
  push32((uint32_t)(0x10113a38u));
  /* 10103eb9 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10103ebfu);
  /* 10103ebf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103ec2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103ec4 je 0x10103f05 */
  if (C.zf) goto L_10103f05;
  /* 10103ec6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103ec8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103eca push 0x10116298 */
  push32((uint32_t)(0x10116298u));
  /* 10103ecf call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103ed5u);
  /* 10103ed5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103ed7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103ed9 push 0x101162a8 */
  push32((uint32_t)(0x101162a8u));
  /* 10103ede call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103ee4u);
  /* 10103ee4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103ee6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10103ee8 push 0x101162b0 */
  push32((uint32_t)(0x101162b0u));
  /* 10103eed call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103ef3u);
  /* 10103ef3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103ef5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10103ef7 push 0x101162a0 */
  push32((uint32_t)(0x101162a0u));
  /* 10103efc call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103f02u);
  /* 10103f02 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103f05:;
  /* 10103f05 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10103f07 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10103f09 push 0x101138d0 */
  push32((uint32_t)(0x101138d0u));
  /* 10103f0e call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103f14u);
  /* 10103f14 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103f16 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10103f18 push 0x10113a10 */
  push32((uint32_t)(0x10113a10u));
  /* 10103f1d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103f23u);
  /* 10103f23 push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 10103f28 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10103f2eu);
  /* 10103f2e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103f31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103f34 jle 0x10103f71 */
  if ((C.zf||C.sf!=C.of)) goto L_10103f71;
  /* 10103f36 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10103f3a cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103f3f jle 0x10103f71 */
  if ((C.zf||C.sf!=C.of)) goto L_10103f71;
  /* 10103f41 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 10103f44 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10103f48 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10103f4b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10103f4d jge 0x10103f66 */
  if ((C.sf==C.of)) goto L_10103f66;
  /* 10103f4f push 0xa */
  push32((uint32_t)(0xau));
  /* 10103f51 push 0xa */
  push32((uint32_t)(0xau));
  /* 10103f53 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10103f58 push 0x10116210 */
  push32((uint32_t)(0x10116210u));
  /* 10103f5d call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103f63u);
  /* 10103f63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103f66:;
  /* 10103f66 call 0x10103310 */
  push32(0x10103f6bu); f_10103310();
  /* 10103f6b jmp 0x10103f71 */
  goto L_10103f71;
L_10103f6d:;
  /* 10103f6d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_10103f71:;
  /* 10103f71 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10103f73 je 0x10103fb6 */
  if (C.zf) goto L_10103fb6;
  /* 10103f75 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103f77 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10103f79 push 0x10113760 */
  push32((uint32_t)(0x10113760u));
  /* 10103f7e call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103f84u);
  /* 10103f84 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103f86 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10103f88 push 0x10113838 */
  push32((uint32_t)(0x10113838u));
  /* 10103f8d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103f93u);
  /* 10103f93 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103f95 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10103f97 push 0x10113758 */
  push32((uint32_t)(0x10113758u));
  /* 10103f9c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103fa2u);
  /* 10103fa2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103fa4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10103fa6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10103fa8 push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 10103fad call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10103fb3u);
  /* 10103fb3 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103fb6:;
  /* 10103fb6 push 0x101138d0 */
  push32((uint32_t)(0x101138d0u));
  /* 10103fbb call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10103fc1u);
  /* 10103fc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103fc4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10103fc6 je 0x10103fe9 */
  if (C.zf) goto L_10103fe9;
  /* 10103fc8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103fca push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10103fcc push 0x10116328 */
  push32((uint32_t)(0x10116328u));
  /* 10103fd1 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103fd7u);
  /* 10103fd7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10103fd9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10103fdb push 0x10116330 */
  push32((uint32_t)(0x10116330u));
  /* 10103fe0 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10103fe6u);
  /* 10103fe6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10103fe9:;
  /* 10103fe9 push 0x101139a8 */
  push32((uint32_t)(0x101139a8u));
  /* 10103fee call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10103ff4u);
  /* 10103ff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10103ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10103ff9 je 0x10104263 */
  if (C.zf) goto L_10104263;
  /* 10103fff push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 10104004 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x1010400au);
  /* 1010400a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010400d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010400f je 0x1010406a */
  if (C.zf) goto L_1010406a;
  /* 10104011 push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 10104016 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x1010401cu);
  /* 1010401c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010401f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104021 jne 0x1010406a */
  if (!C.zf) goto L_1010406a;
  /* 10104023 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104025 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x1010402bu);
  /* 1010402b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010402e cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104033 jle 0x1010406a */
  if ((C.zf||C.sf!=C.of)) goto L_1010406a;
  /* 10104035 push 3 */
  push32((uint32_t)(0x3u));
  /* 10104037 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x1010403du);
  /* 1010403d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104040 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104045 jge 0x1010406a */
  if ((C.sf==C.of)) goto L_1010406a;
  /* 10104047 push 4 */
  push32((uint32_t)(0x4u));
  /* 10104049 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x1010404fu);
  /* 1010404f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104052 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104057 jle 0x1010406a */
  if ((C.zf||C.sf!=C.of)) goto L_1010406a;
  /* 10104059 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1010405e push 3 */
  push32((uint32_t)(0x3u));
  /* 10104060 push 4 */
  push32((uint32_t)(0x4u));
  /* 10104062 call 0x10102650 */
  push32(0x10104067u); f_10102650();
  /* 10104067 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010406a:;
  /* 1010406a push 3 */
  push32((uint32_t)(0x3u));
  /* 1010406c call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104072u);
  /* 10104072 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104075 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010407a jge 0x1010409f */
  if ((C.sf==C.of)) goto L_1010409f;
  /* 1010407c push 2 */
  push32((uint32_t)(0x2u));
  /* 1010407e call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104084u);
  /* 10104084 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104087 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010408c jle 0x1010409f */
  if ((C.zf||C.sf!=C.of)) goto L_1010409f;
  /* 1010408e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10104093 push 3 */
  push32((uint32_t)(0x3u));
  /* 10104095 push 2 */
  push32((uint32_t)(0x2u));
  /* 10104097 call 0x10102650 */
  push32(0x1010409cu); f_10102650();
  /* 1010409c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010409f:;
  /* 1010409f push 0x10116328 */
  push32((uint32_t)(0x10116328u));
  /* 101040a4 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x101040aau);
  /* 101040aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101040ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101040af je 0x101041d7 */
  if (C.zf) goto L_101041d7;
  /* 101040b5 push 0x10116330 */
  push32((uint32_t)(0x10116330u));
  /* 101040ba call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x101040c0u);
  /* 101040c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101040c3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101040c5 je 0x101041d7 */
  if (C.zf) goto L_101041d7;
  /* 101040cb push 2 */
  push32((uint32_t)(0x2u));
  /* 101040cd call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101040d3u);
  /* 101040d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101040d6 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101040db jle 0x101040ee */
  if ((C.zf||C.sf!=C.of)) goto L_101040ee;
  /* 101040dd push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101040e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101040e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101040e6 call 0x10102650 */
  push32(0x101040ebu); f_10102650();
  /* 101040eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101040ee:;
  /* 101040ee push 0 */
  push32((uint32_t)(0x0u));
  /* 101040f0 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101040f6u);
  /* 101040f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101040f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101040fb je 0x101041fa */
  if (C.zf) goto L_101041fa;
  /* 10104101 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104103 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104109u);
  /* 10104109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010410c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010410e je 0x1010417b */
  if (C.zf) goto L_1010417b;
  /* 10104110 push 4 */
  push32((uint32_t)(0x4u));
  /* 10104112 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104118u);
  /* 10104118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010411b cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104120 jge 0x1010417b */
  if ((C.sf==C.of)) goto L_1010417b;
  /* 10104122 push 4 */
  push32((uint32_t)(0x4u));
  /* 10104124 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x1010412au);
  /* 1010412a push 5 */
  push32((uint32_t)(0x5u));
  /* 1010412c mov esi, eax */
  ESI = (EAX);
  /* 1010412e call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104134u);
  /* 10104134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104137 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104139 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1010413e jge 0x1010415f */
  if ((C.sf==C.of)) goto L_1010415f;
  /* 10104140 push 5 */
  push32((uint32_t)(0x5u));
  /* 10104142 push 2 */
  push32((uint32_t)(0x2u));
  /* 10104144 call 0x10102650 */
  push32(0x10104149u); f_10102650();
  /* 10104149 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1010414e push 4 */
  push32((uint32_t)(0x4u));
  /* 10104150 push 2 */
  push32((uint32_t)(0x2u));
  /* 10104152 call 0x10102650 */
  push32(0x10104157u); f_10102650();
  /* 10104157 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010415a jmp 0x101041fa */
  goto L_101041fa;
L_1010415f:;
  /* 1010415f push 4 */
  push32((uint32_t)(0x4u));
  /* 10104161 push 2 */
  push32((uint32_t)(0x2u));
  /* 10104163 call 0x10102650 */
  push32(0x10104168u); f_10102650();
  /* 10104168 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1010416d push 5 */
  push32((uint32_t)(0x5u));
  /* 1010416f push 2 */
  push32((uint32_t)(0x2u));
  /* 10104171 call 0x10102650 */
  push32(0x10104176u); f_10102650();
  /* 10104176 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104179 jmp 0x101041fa */
  goto L_101041fa;
L_1010417b:;
  /* 1010417b push 5 */
  push32((uint32_t)(0x5u));
  /* 1010417d call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104183u);
  /* 10104183 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104186 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010418b jge 0x101041ad */
  if ((C.sf==C.of)) goto L_101041ad;
  /* 1010418d push 0 */
  push32((uint32_t)(0x0u));
  /* 1010418f call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104195u);
  /* 10104195 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104198 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010419a je 0x101041ad */
  if (C.zf) goto L_101041ad;
  /* 1010419c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 101041a1 push 5 */
  push32((uint32_t)(0x5u));
  /* 101041a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 101041a5 call 0x10102650 */
  push32(0x101041aau); f_10102650();
  /* 101041aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101041ad:;
  /* 101041ad push 5 */
  push32((uint32_t)(0x5u));
  /* 101041af call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101041b5u);
  /* 101041b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101041b8 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101041bd jge 0x101041fa */
  if ((C.sf==C.of)) goto L_101041fa;
  /* 101041bf push 0 */
  push32((uint32_t)(0x0u));
  /* 101041c1 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101041c7u);
  /* 101041c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101041ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101041cc je 0x101041fa */
  if (C.zf) goto L_101041fa;
  /* 101041ce push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 101041d3 push 5 */
  push32((uint32_t)(0x5u));
  /* 101041d5 jmp 0x101041f0 */
  goto L_101041f0;
L_101041d7:;
  /* 101041d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 101041d9 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101041dfu);
  /* 101041df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101041e2 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101041e7 jle 0x101041fa */
  if ((C.zf||C.sf!=C.of)) goto L_101041fa;
  /* 101041e9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101041ee push 1 */
  push32((uint32_t)(0x1u));
L_101041f0:;
  /* 101041f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 101041f2 call 0x10102650 */
  push32(0x101041f7u); f_10102650();
  /* 101041f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101041fa:;
  /* 101041fa push 0 */
  push32((uint32_t)(0x0u));
  /* 101041fc call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104202u);
  /* 10104202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104205 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010420a jle 0x1010421d */
  if ((C.zf||C.sf!=C.of)) goto L_1010421d;
  /* 1010420c push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10104211 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104213 push 0 */
  push32((uint32_t)(0x0u));
  /* 10104215 call 0x10102650 */
  push32(0x1010421au); f_10102650();
  /* 1010421a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010421d:;
  /* 1010421d push 4 */
  push32((uint32_t)(0x4u));
  /* 1010421f call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104225u);
  /* 10104225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104228 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010422d jle 0x10104240 */
  if ((C.zf||C.sf!=C.of)) goto L_10104240;
  /* 1010422f push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10104234 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104236 push 4 */
  push32((uint32_t)(0x4u));
  /* 10104238 call 0x10102650 */
  push32(0x1010423du); f_10102650();
  /* 1010423d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104240:;
  /* 10104240 push 5 */
  push32((uint32_t)(0x5u));
  /* 10104242 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104248u);
  /* 10104248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010424b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104250 jle 0x10104263 */
  if ((C.zf||C.sf!=C.of)) goto L_10104263;
  /* 10104252 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10104257 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104259 push 5 */
  push32((uint32_t)(0x5u));
  /* 1010425b call 0x10102650 */
  push32(0x10104260u); f_10102650();
  /* 10104260 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104263:;
  /* 10104263 pop edi */
  EDI = (pop32());
  /* 10104264 pop esi */
  ESI = (pop32());
  /* 10104265 pop ebp */
  EBP = (pop32());
  /* 10104266 pop ebx */
  EBX = (pop32());
  /* 10104267 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010426a ret  */
  ESPCHK(0x101033a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004270 @ 0x10104270 (209 bytes, 56 insns) */
void f_10104270(void) {
  FTRACE(0x10104270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10104270 push 3 */
  push32((uint32_t)(0x3u));
  /* 10104272 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104278u);
  /* 10104278 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010427b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104280 jle 0x10104340 */
  if ((C.zf||C.sf!=C.of)) goto L_10104340;
  /* 10104286 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104288 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1010428a push 0x10116480 */
  push32((uint32_t)(0x10116480u));
  /* 1010428f call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104295u);
  /* 10104295 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104297 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104299 push 0x10116488 */
  push32((uint32_t)(0x10116488u));
  /* 1010429e call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101042a4u);
  /* 101042a4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101042a6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101042a8 push 0x10116470 */
  push32((uint32_t)(0x10116470u));
  /* 101042ad call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101042b3u);
  /* 101042b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101042b5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101042b7 push 0x10116478 */
  push32((uint32_t)(0x10116478u));
  /* 101042bc call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101042c2u);
  /* 101042c2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101042c4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101042c6 push 0x10116490 */
  push32((uint32_t)(0x10116490u));
  /* 101042cb call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101042d1u);
  /* 101042d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101042d3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101042d5 push 0x101163c8 */
  push32((uint32_t)(0x101163c8u));
  /* 101042da call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101042e0u);
  /* 101042e0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101042e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101042e5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101042e7 push 0x101163b0 */
  push32((uint32_t)(0x101163b0u));
  /* 101042ec call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101042f2u);
  /* 101042f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101042f4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101042f6 push 0x101163b8 */
  push32((uint32_t)(0x101163b8u));
  /* 101042fb call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104301u);
  /* 10104301 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104303 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104305 push 0x101163d0 */
  push32((uint32_t)(0x101163d0u));
  /* 1010430a call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104310u);
  /* 10104310 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104312 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104314 push 0x101163d8 */
  push32((uint32_t)(0x101163d8u));
  /* 10104319 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010431fu);
  /* 1010431f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104321 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104323 push 0x10116390 */
  push32((uint32_t)(0x10116390u));
  /* 10104328 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010432eu);
  /* 1010432e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104330 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104332 push 0x101160f8 */
  push32((uint32_t)(0x101160f8u));
  /* 10104337 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010433du);
  /* 1010433d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104340:;
  /* 10104340 ret  */
  ESPCHK(0x10104270u, _esp0);
  ESP += 4; return;
}

/* FUN_10004350 @ 0x10104350 (79 bytes, 22 insns) */
void f_10104350(void) {
  FTRACE(0x10104350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10104350 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104352 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104354 push 0x10113a40 */
  push32((uint32_t)(0x10113a40u));
  /* 10104359 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010435fu);
  /* 1010435f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104361 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104363 push 0x10113a48 */
  push32((uint32_t)(0x10113a48u));
  /* 10104368 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010436eu);
  /* 1010436e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104370 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104372 push 0x10113a38 */
  push32((uint32_t)(0x10113a38u));
  /* 10104377 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010437du);
  /* 1010437d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010437f push 0xa */
  push32((uint32_t)(0xau));
  /* 10104381 push 0x101160a8 */
  push32((uint32_t)(0x101160a8u));
  /* 10104386 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010438cu);
  /* 1010438c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010438e push 0xa */
  push32((uint32_t)(0xau));
  /* 10104390 push 0x10116098 */
  push32((uint32_t)(0x10116098u));
  /* 10104395 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010439bu);
  /* 1010439b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010439e ret  */
  ESPCHK(0x10104350u, _esp0);
  ESP += 4; return;
}

/* FUN_100043a0 @ 0x101043a0 (127 bytes, 35 insns) */
void f_101043a0(void) {
  FTRACE(0x101043a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101043a0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101043a2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101043a4 push 0x10116308 */
  push32((uint32_t)(0x10116308u));
  /* 101043a9 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101043afu);
  /* 101043af push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101043b1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101043b3 push 0x10116300 */
  push32((uint32_t)(0x10116300u));
  /* 101043b8 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101043beu);
  /* 101043be push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101043c0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101043c2 push 0x101162d0 */
  push32((uint32_t)(0x101162d0u));
  /* 101043c7 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101043cdu);
  /* 101043cd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101043cf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101043d1 push 0x101162c8 */
  push32((uint32_t)(0x101162c8u));
  /* 101043d6 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101043dcu);
  /* 101043dc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101043de push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101043e0 push 0x101161c8 */
  push32((uint32_t)(0x101161c8u));
  /* 101043e5 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101043ebu);
  /* 101043eb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101043ed push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101043ef push 0x101161d0 */
  push32((uint32_t)(0x101161d0u));
  /* 101043f4 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101043fau);
  /* 101043fa add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101043fd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101043ff push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10104401 push 0x101161d8 */
  push32((uint32_t)(0x101161d8u));
  /* 10104406 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010440cu);
  /* 1010440c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1010440e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10104410 push 0x101161e0 */
  push32((uint32_t)(0x101161e0u));
  /* 10104415 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010441bu);
  /* 1010441b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010441e ret  */
  ESPCHK(0x101043a0u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x10104420 (3643 bytes, 1035 insns) */
void f_10104420(void) {
  FTRACE(0x10104420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10104420 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10104423 push ebx */
  push32((uint32_t)(EBX));
  /* 10104424 push ebp */
  push32((uint32_t)(EBP));
  /* 10104425 push esi */
  push32((uint32_t)(ESI));
  /* 10104426 push edi */
  push32((uint32_t)(EDI));
  /* 10104427 push 0 */
  push32((uint32_t)(0x0u));
  /* 10104429 call 0x101027a0 */
  push32(0x1010442eu); f_101027a0();
  /* 1010442e push 0x1010f030 */
  push32((uint32_t)(0x1010f030u));
  /* 10104433 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10104435 call dword ptr [0x1011663c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011663c))), 0x1010443bu);
  /* 1010443b push 0x101162c0 */
  push32((uint32_t)(0x101162c0u));
  /* 10104440 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10104446u);
  /* 10104446 push 3 */
  push32((uint32_t)(0x3u));
  /* 10104448 mov ebx, eax */
  EBX = (EAX);
  /* 1010444a call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104450u);
  /* 10104450 mov ebp, eax */
  EBP = (EAX);
  /* 10104452 push 0x101162e8 */
  push32((uint32_t)(0x101162e8u));
  /* 10104457 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 1010445b call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10104461u);
  /* 10104461 push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 10104466 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 1010446a call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10104470u);
  /* 10104470 push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 10104475 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x1010447bu);
  /* 1010447b push 0x10116210 */
  push32((uint32_t)(0x10116210u));
  /* 10104480 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10104486u);
  /* 10104486 push 0x101164e0 */
  push32((uint32_t)(0x101164e0u));
  /* 1010448b call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10104491u);
  /* 10104491 push 0x10116460 */
  push32((uint32_t)(0x10116460u));
  /* 10104496 mov esi, eax */
  ESI = (EAX);
  /* 10104498 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x1010449eu);
  /* 1010449e push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 101044a3 mov edi, eax */
  EDI = (EAX);
  /* 101044a5 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101044abu);
  /* 101044ab add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101044ad add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101044b0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101044b2 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 101044b7 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 101044bb call 0x101026a0 */
  push32(0x101044c0u); f_101026a0();
  /* 101044c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101044c2 jle 0x101044d8 */
  if ((C.zf||C.sf!=C.of)) goto L_101044d8;
  /* 101044c4 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101044c6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101044c8 push 0xf */
  push32((uint32_t)(0xfu));
  /* 101044ca push 0x10116458 */
  push32((uint32_t)(0x10116458u));
  /* 101044cf call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101044d5u);
  /* 101044d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101044d8:;
  /* 101044d8 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 101044dd call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x101044e3u);
  /* 101044e3 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 101044e8 mov esi, eax */
  ESI = (EAX);
  /* 101044ea call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101044f0u);
  /* 101044f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101044f3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101044f5 je 0x101044fc */
  if (C.zf) goto L_101044fc;
  /* 101044f7 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_101044fc:;
  /* 101044fc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101044fe je 0x10105253 */
  if (C.zf) goto L_10105253;
  /* 10104504 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104506 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104508 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010450a push 0x10116108 */
  push32((uint32_t)(0x10116108u));
  /* 1010450f call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104515u);
  /* 10104515 push 0x10116108 */
  push32((uint32_t)(0x10116108u));
  /* 1010451a call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10104520u);
  /* 10104520 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104523 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10104525 je 0x10105253 */
  if (C.zf) goto L_10105253;
  /* 1010452b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010452d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010452f push 0x101164a8 */
  push32((uint32_t)(0x101164a8u));
  /* 10104534 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010453au);
  /* 1010453a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010453d call dword ptr [0x101166a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101166a0))), 0x10104543u);
  /* 10104543 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104545 jne 0x1010459c */
  if (!C.zf) goto L_1010459c;
  /* 10104547 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010454d jle 0x10104574 */
  if ((C.zf||C.sf!=C.of)) goto L_10104574;
  /* 1010454f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104551 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104553 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104555 push 0x101162c0 */
  push32((uint32_t)(0x101162c0u));
  /* 1010455a call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104560u);
  /* 10104560 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104562 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104564 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104566 push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 1010456b call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104571u);
  /* 10104571 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104574:;
  /* 10104574 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010457a jle 0x10104588 */
  if ((C.zf||C.sf!=C.of)) goto L_10104588;
  /* 1010457c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104581 jle 0x10104588 */
  if ((C.zf||C.sf!=C.of)) goto L_10104588;
  /* 10104583 call 0x10104270 */
  push32(0x10104588u); f_10104270();
L_10104588:;
  /* 10104588 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010458a push 1 */
  push32((uint32_t)(0x1u));
  /* 1010458c push 0 */
  push32((uint32_t)(0x0u));
  /* 1010458e call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x10104594u);
  /* 10104594 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104597 jmp 0x1010465f */
  goto L_1010465f;
L_1010459c:;
  /* 1010459c mov eax, dword ptr [0x101166c4] */
  EAX = (r32((uint32_t)(0x101166c4)));
  /* 101045a1 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101045a4 je 0x101045b8 */
  if (C.zf) goto L_101045b8;
  /* 101045a6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101045a7 je 0x101045b2 */
  if (C.zf) goto L_101045b2;
  /* 101045a9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101045aa jne 0x101045e4 */
  if (!C.zf) goto L_101045e4;
  /* 101045ac push 9 */
  push32((uint32_t)(0x9u));
  /* 101045ae push 4 */
  push32((uint32_t)(0x4u));
  /* 101045b0 jmp 0x101045d9 */
  goto L_101045d9;
L_101045b2:;
  /* 101045b2 push 4 */
  push32((uint32_t)(0x4u));
  /* 101045b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 101045b6 jmp 0x101045d9 */
  goto L_101045d9;
L_101045b8:;
  /* 101045b8 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101045be jle 0x101045cf */
  if ((C.zf||C.sf!=C.of)) goto L_101045cf;
  /* 101045c0 push 6 */
  push32((uint32_t)(0x6u));
  /* 101045c2 push 6 */
  push32((uint32_t)(0x6u));
  /* 101045c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 101045c6 call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x101045ccu);
  /* 101045cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101045cf:;
  /* 101045cf push 5 */
  push32((uint32_t)(0x5u));
  /* 101045d1 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101045d7 push 5 */
  push32((uint32_t)(0x5u));
L_101045d9:;
  /* 101045d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 101045db call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x101045e1u);
  /* 101045e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101045e4:;
  /* 101045e4 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 101045e8 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 101045ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101045ef je 0x101045f6 */
  if (C.zf) goto L_101045f6;
  /* 101045f1 mov esi, 0x17c */
  ESI = (0x17cu);
L_101045f6:;
  /* 101045f6 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101045f9 jge 0x10104617 */
  if ((C.sf==C.of)) goto L_10104617;
  /* 101045fb cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104601 jle 0x10104653 */
  if ((C.zf||C.sf!=C.of)) goto L_10104653;
  /* 10104603 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104605 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104607 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104609 push 0x101162c0 */
  push32((uint32_t)(0x101162c0u));
  /* 1010460e call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104614u);
  /* 10104614 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104617:;
  /* 10104617 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010461d jle 0x10104653 */
  if ((C.zf||C.sf!=C.of)) goto L_10104653;
  /* 1010461f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104621 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 10104626 push esi */
  push32((uint32_t)(ESI));
  /* 10104627 push 0x101162c0 */
  push32((uint32_t)(0x101162c0u));
  /* 1010462c call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104632u);
  /* 10104632 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104635 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010463b jle 0x10104653 */
  if ((C.zf||C.sf!=C.of)) goto L_10104653;
  /* 1010463d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010463f push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 10104644 push esi */
  push32((uint32_t)(ESI));
  /* 10104645 push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 1010464a call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104650u);
  /* 10104650 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104653:;
  /* 10104653 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104658 jle 0x1010465f */
  if ((C.zf||C.sf!=C.of)) goto L_1010465f;
  /* 1010465a call 0x10104270 */
  push32(0x1010465fu); f_10104270();
L_1010465f:;
  /* 1010465f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104661 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104663 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104665 push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 1010466a call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104670u);
  /* 10104670 push 5 */
  push32((uint32_t)(0x5u));
  /* 10104672 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104674 push 2 */
  push32((uint32_t)(0x2u));
  /* 10104676 push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 1010467b call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104681u);
  /* 10104681 push 5 */
  push32((uint32_t)(0x5u));
  /* 10104683 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104685 push 3 */
  push32((uint32_t)(0x3u));
  /* 10104687 push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 1010468c call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104692u);
  /* 10104692 push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 10104697 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x1010469du);
  /* 1010469d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101046a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101046a3 jle 0x10104716 */
  if ((C.zf||C.sf!=C.of)) goto L_10104716;
  /* 101046a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101046a7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101046a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 101046ab push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 101046b0 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101046b6u);
  /* 101046b6 push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 101046bb call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101046c1u);
  /* 101046c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101046c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101046c7 jle 0x101046dd */
  if ((C.zf||C.sf!=C.of)) goto L_101046dd;
  /* 101046c9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101046cb push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101046cd push 1 */
  push32((uint32_t)(0x1u));
  /* 101046cf push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 101046d4 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101046dau);
  /* 101046da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101046dd:;
  /* 101046dd push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 101046e2 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x101046e8u);
  /* 101046e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101046eb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101046ee jle 0x10104704 */
  if ((C.zf||C.sf!=C.of)) goto L_10104704;
  /* 101046f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101046f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101046f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101046f6 push 0x101139a8 */
  push32((uint32_t)(0x101139a8u));
  /* 101046fb call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104701u);
  /* 10104701 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104704:;
  /* 10104704 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104706 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10104708 push 0x10116240 */
  push32((uint32_t)(0x10116240u));
  /* 1010470d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104713u);
  /* 10104713 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104716:;
  /* 10104716 push 0x101162c0 */
  push32((uint32_t)(0x101162c0u));
  /* 1010471b call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10104721u);
  /* 10104721 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104724 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104727 jle 0x1010473d */
  if ((C.zf||C.sf!=C.of)) goto L_1010473d;
  /* 10104729 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010472b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010472d push 1 */
  push32((uint32_t)(0x1u));
  /* 1010472f push 0x101139a8 */
  push32((uint32_t)(0x101139a8u));
  /* 10104734 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x1010473au);
  /* 1010473a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010473d:;
  /* 1010473d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010473f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104741 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104743 push 0x10116318 */
  push32((uint32_t)(0x10116318u));
  /* 10104748 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x1010474eu);
  /* 1010474e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104750 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104752 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104754 push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 10104759 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x1010475fu);
  /* 1010475f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104761 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104763 push 2 */
  push32((uint32_t)(0x2u));
  /* 10104765 push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 1010476a call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104770u);
  /* 10104770 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104772 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104774 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104776 push 0x10116100 */
  push32((uint32_t)(0x10116100u));
  /* 1010477b call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104781u);
  /* 10104781 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104784 push 5 */
  push32((uint32_t)(0x5u));
  /* 10104786 push 0xa */
  push32((uint32_t)(0xau));
  /* 10104788 push 2 */
  push32((uint32_t)(0x2u));
  /* 1010478a push 0x10116318 */
  push32((uint32_t)(0x10116318u));
  /* 1010478f call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104795u);
  /* 10104795 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104797 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10104799 push 0x10113790 */
  push32((uint32_t)(0x10113790u));
  /* 1010479e call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101047a4u);
  /* 101047a4 push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 101047a9 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101047afu);
  /* 101047af add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101047b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101047b4 jle 0x101047ca */
  if ((C.zf||C.sf!=C.of)) goto L_101047ca;
  /* 101047b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101047b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 101047ba push 1 */
  push32((uint32_t)(0x1u));
  /* 101047bc push 0x10116228 */
  push32((uint32_t)(0x10116228u));
  /* 101047c1 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101047c7u);
  /* 101047c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101047ca:;
  /* 101047ca call dword ptr [0x101166a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101166a0))), 0x101047d0u);
  /* 101047d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101047d2 je 0x101047e8 */
  if (C.zf) goto L_101047e8;
  /* 101047d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101047d6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101047d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101047da push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 101047df call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101047e5u);
  /* 101047e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101047e8:;
  /* 101047e8 push 0xa */
  push32((uint32_t)(0xau));
  /* 101047ea push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101047ec push 1 */
  push32((uint32_t)(0x1u));
  /* 101047ee push 0x10116118 */
  push32((uint32_t)(0x10116118u));
  /* 101047f3 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101047f9u);
  /* 101047f9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101047fb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101047fd push 1 */
  push32((uint32_t)(0x1u));
  /* 101047ff push 0x10113748 */
  push32((uint32_t)(0x10113748u));
  /* 10104804 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x1010480au);
  /* 1010480a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010480d cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104810 jle 0x10104826 */
  if ((C.zf||C.sf!=C.of)) goto L_10104826;
  /* 10104812 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10104814 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10104816 push 2 */
  push32((uint32_t)(0x2u));
  /* 10104818 push 0x10116108 */
  push32((uint32_t)(0x10116108u));
  /* 1010481d call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104823u);
  /* 10104823 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104826:;
  /* 10104826 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10104828 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1010482a push 1 */
  push32((uint32_t)(0x1u));
  /* 1010482c push 0x10116388 */
  push32((uint32_t)(0x10116388u));
  /* 10104831 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104837u);
  /* 10104837 push 5 */
  push32((uint32_t)(0x5u));
  /* 10104839 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1010483b push 2 */
  push32((uint32_t)(0x2u));
  /* 1010483d push 0x10116388 */
  push32((uint32_t)(0x10116388u));
  /* 10104842 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104848u);
  /* 10104848 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1010484a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1010484c push 0x101161a8 */
  push32((uint32_t)(0x101161a8u));
  /* 10104851 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104857u);
  /* 10104857 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104859 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1010485b push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 10104860 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104866u);
  /* 10104866 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104868 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010486a push 0x101162e8 */
  push32((uint32_t)(0x101162e8u));
  /* 1010486f call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104875u);
  /* 10104875 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104878 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1010487a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1010487c push 0x10116170 */
  push32((uint32_t)(0x10116170u));
  /* 10104881 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104887u);
  /* 10104887 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104889 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1010488b push 0x10116160 */
  push32((uint32_t)(0x10116160u));
  /* 10104890 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104896u);
  /* 10104896 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104898 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1010489a push 0x10116168 */
  push32((uint32_t)(0x10116168u));
  /* 1010489f call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101048a5u);
  /* 101048a5 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 101048aa call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x101048b0u);
  /* 101048b0 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101048b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101048b5 je 0x10104974 */
  if (C.zf) goto L_10104974;
  /* 101048bb push 0x101162e8 */
  push32((uint32_t)(0x101162e8u));
  /* 101048c0 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x101048c6u);
  /* 101048c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101048c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101048cb jne 0x10104974 */
  if (!C.zf) goto L_10104974;
  /* 101048d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101048d3 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101048d9u);
  /* 101048d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101048dc cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101048e1 jle 0x10104907 */
  if ((C.zf||C.sf!=C.of)) goto L_10104907;
  /* 101048e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 101048e5 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101048ebu);
  /* 101048eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101048ee cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101048f3 jle 0x10104907 */
  if ((C.zf||C.sf!=C.of)) goto L_10104907;
  /* 101048f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101048f7 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101048fdu);
  /* 101048fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104900 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104905 jg 0x10104974 */
  if ((!C.zf&&C.sf==C.of)) goto L_10104974;
L_10104907:;
  /* 10104907 push 0 */
  push32((uint32_t)(0x0u));
  /* 10104909 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x1010490fu);
  /* 1010490f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104912 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10104914 je 0x1010499b */
  if (C.zf) goto L_1010499b;
  /* 1010491a push 5 */
  push32((uint32_t)(0x5u));
  /* 1010491c call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104922u);
  /* 10104922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104925 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010492a jle 0x1010499b */
  if ((C.zf||C.sf!=C.of)) goto L_1010499b;
  /* 1010492c push 5 */
  push32((uint32_t)(0x5u));
  /* 1010492e call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104934u);
  /* 10104934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104937 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010493c jle 0x1010494f */
  if ((C.zf||C.sf!=C.of)) goto L_1010494f;
  /* 1010493e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10104943 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104945 push 5 */
  push32((uint32_t)(0x5u));
  /* 10104947 call 0x10102650 */
  push32(0x1010494cu); f_10102650();
  /* 1010494c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010494f:;
  /* 1010494f push 4 */
  push32((uint32_t)(0x4u));
  /* 10104951 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104957u);
  /* 10104957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010495a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010495f jle 0x1010499b */
  if ((C.zf||C.sf!=C.of)) goto L_1010499b;
  /* 10104961 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10104966 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104968 push 4 */
  push32((uint32_t)(0x4u));
  /* 1010496a call 0x10102650 */
  push32(0x1010496fu); f_10102650();
  /* 1010496f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104972 jmp 0x1010499b */
  goto L_1010499b;
L_10104974:;
  /* 10104974 push 0 */
  push32((uint32_t)(0x0u));
  /* 10104976 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104978 call 0x10102630 */
  push32(0x1010497du); f_10102630();
  /* 1010497d push 0 */
  push32((uint32_t)(0x0u));
  /* 1010497f push 4 */
  push32((uint32_t)(0x4u));
  /* 10104981 call 0x10102630 */
  push32(0x10104986u); f_10102630();
  /* 10104986 push 0 */
  push32((uint32_t)(0x0u));
  /* 10104988 push 3 */
  push32((uint32_t)(0x3u));
  /* 1010498a call 0x10102630 */
  push32(0x1010498fu); f_10102630();
  /* 1010498f push 0 */
  push32((uint32_t)(0x0u));
  /* 10104991 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104993 call 0x10102630 */
  push32(0x10104998u); f_10102630();
  /* 10104998 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010499b:;
  /* 1010499b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010499d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010499f push 0x101138d0 */
  push32((uint32_t)(0x101138d0u));
  /* 101049a4 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101049aau);
  /* 101049aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101049ac push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101049ae push 1 */
  push32((uint32_t)(0x1u));
  /* 101049b0 push 0x10116408 */
  push32((uint32_t)(0x10116408u));
  /* 101049b5 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101049bbu);
  /* 101049bb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101049bd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101049bf push 2 */
  push32((uint32_t)(0x2u));
  /* 101049c1 push 0x10116408 */
  push32((uint32_t)(0x10116408u));
  /* 101049c6 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101049ccu);
  /* 101049cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101049ce push 0xa */
  push32((uint32_t)(0xau));
  /* 101049d0 push 3 */
  push32((uint32_t)(0x3u));
  /* 101049d2 push 0x10116408 */
  push32((uint32_t)(0x10116408u));
  /* 101049d7 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101049ddu);
  /* 101049dd push 0x10113a88 */
  push32((uint32_t)(0x10113a88u));
  /* 101049e2 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x101049e8u);
  /* 101049e8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101049eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101049ed jne 0x10104a38 */
  if (!C.zf) goto L_10104a38;
  /* 101049ef push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 101049f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101049f3 call 0x10102680 */
  push32(0x101049f8u); f_10102680();
  /* 101049f8 mov esi, eax */
  ESI = (EAX);
  /* 101049fa push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101049fc push 0 */
  push32((uint32_t)(0x0u));
  /* 101049fe sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10104a01 call 0x10102680 */
  push32(0x10104a06u); f_10102680();
  /* 10104a06 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10104a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10104a0a add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10104a0c call 0x10102680 */
  push32(0x10104a11u); f_10102680();
  /* 10104a11 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10104a13 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104a16 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104a19 jle 0x10104a28 */
  if ((C.zf||C.sf!=C.of)) goto L_10104a28;
  /* 10104a1b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104a1d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104a1f push 6 */
  push32((uint32_t)(0x6u));
  /* 10104a21 push 0x101160c0 */
  push32((uint32_t)(0x101160c0u));
  /* 10104a26 jmp 0x10104a43 */
  goto L_10104a43;
L_10104a28:;
  /* 10104a28 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10104a2a je 0x10104a4c */
  if (C.zf) goto L_10104a4c;
  /* 10104a2c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104a2e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104a30 push esi */
  push32((uint32_t)(ESI));
  /* 10104a31 push 0x101160c0 */
  push32((uint32_t)(0x101160c0u));
  /* 10104a36 jmp 0x10104a43 */
  goto L_10104a43;
L_10104a38:;
  /* 10104a38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104a3a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104a3c push 0xa */
  push32((uint32_t)(0xau));
  /* 10104a3e push 0x10113a18 */
  push32((uint32_t)(0x10113a18u));
L_10104a43:;
  /* 10104a43 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104a49u);
  /* 10104a49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104a4c:;
  /* 10104a4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104a4e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10104a50 push 0x10113a88 */
  push32((uint32_t)(0x10113a88u));
  /* 10104a55 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104a5bu);
  /* 10104a5b push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 10104a60 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10104a66u);
  /* 10104a66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104a69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104a6b je 0x10104a8e */
  if (C.zf) goto L_10104a8e;
  /* 10104a6d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104a6f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104a71 push 0x10113a88 */
  push32((uint32_t)(0x10113a88u));
  /* 10104a76 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104a7cu);
  /* 10104a7c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104a7e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10104a80 push 0x101139a0 */
  push32((uint32_t)(0x101139a0u));
  /* 10104a85 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104a8bu);
  /* 10104a8b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104a8e:;
  /* 10104a8e push 0x10113a88 */
  push32((uint32_t)(0x10113a88u));
  /* 10104a93 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10104a99u);
  /* 10104a99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104a9c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104a9e je 0x10104ac6 */
  if (C.zf) goto L_10104ac6;
  /* 10104aa0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104aa2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104aa4 push 0x10113a70 */
  push32((uint32_t)(0x10113a70u));
  /* 10104aa9 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104aafu);
  /* 10104aaf push 0xa */
  push32((uint32_t)(0xau));
  /* 10104ab1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10104ab3 push 0x101139b0 */
  push32((uint32_t)(0x101139b0u));
  /* 10104ab8 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104abeu);
  /* 10104abe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104ac1 call 0x10103360 */
  push32(0x10104ac6u); f_10103360();
L_10104ac6:;
  /* 10104ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10104ac8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104aca call 0x10102630 */
  push32(0x10104acfu); f_10102630();
  /* 10104acf push 0 */
  push32((uint32_t)(0x0u));
  /* 10104ad1 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104ad7u);
  /* 10104ad7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104ada cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104adf jle 0x10104b23 */
  if ((C.zf||C.sf!=C.of)) goto L_10104b23;
  /* 10104ae1 push 0x101138d0 */
  push32((uint32_t)(0x101138d0u));
  /* 10104ae6 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10104aecu);
  /* 10104aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104aef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104af1 je 0x10104b23 */
  if (C.zf) goto L_10104b23;
  /* 10104af3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104af5 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104afbu);
  /* 10104afb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104afe cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104b03 jge 0x10104b23 */
  if ((C.sf==C.of)) goto L_10104b23;
  /* 10104b05 push 0x10113a88 */
  push32((uint32_t)(0x10113a88u));
  /* 10104b0a call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10104b10u);
  /* 10104b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104b13 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104b15 jne 0x10104b23 */
  if (!C.zf) goto L_10104b23;
  /* 10104b17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104b19 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104b1b call 0x10102630 */
  push32(0x10104b20u); f_10102630();
  /* 10104b20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104b23:;
  /* 10104b23 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104b25 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104b27 push 3 */
  push32((uint32_t)(0x3u));
  /* 10104b29 push 0x10116320 */
  push32((uint32_t)(0x10116320u));
  /* 10104b2e call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104b34u);
  /* 10104b34 push 0x10116220 */
  push32((uint32_t)(0x10116220u));
  /* 10104b39 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10104b3fu);
  /* 10104b3f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104b42 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104b44 je 0x10104b5a */
  if (C.zf) goto L_10104b5a;
  /* 10104b46 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104b48 push 0xa */
  push32((uint32_t)(0xau));
  /* 10104b4a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10104b4c push 0x10116320 */
  push32((uint32_t)(0x10116320u));
  /* 10104b51 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104b57u);
  /* 10104b57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104b5a:;
  /* 10104b5a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104b5c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10104b5e push 0x10116220 */
  push32((uint32_t)(0x10116220u));
  /* 10104b63 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104b69u);
  /* 10104b69 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104b6b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10104b6d push 0x10116230 */
  push32((uint32_t)(0x10116230u));
  /* 10104b72 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104b78u);
  /* 10104b78 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104b7a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104b7c push 0x10116418 */
  push32((uint32_t)(0x10116418u));
  /* 10104b81 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104b87u);
  /* 10104b87 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104b89 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104b8b push 0x10116400 */
  push32((uint32_t)(0x10116400u));
  /* 10104b90 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104b96u);
  /* 10104b96 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104b98 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104b9a push 0x10116410 */
  push32((uint32_t)(0x10116410u));
  /* 10104b9f call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104ba5u);
  /* 10104ba5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104ba7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104ba9 push 0x101163f0 */
  push32((uint32_t)(0x101163f0u));
  /* 10104bae call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104bb4u);
  /* 10104bb4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104bb7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104bb9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104bbb push 0x101163f8 */
  push32((uint32_t)(0x101163f8u));
  /* 10104bc0 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104bc6u);
  /* 10104bc6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104bc8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104bca push 0x101163e8 */
  push32((uint32_t)(0x101163e8u));
  /* 10104bcf call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104bd5u);
  /* 10104bd5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104bd8 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104bdb jle 0x10104c34 */
  if ((C.zf||C.sf!=C.of)) goto L_10104c34;
  /* 10104bdd mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 10104be1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104be3 je 0x10104c34 */
  if (C.zf) goto L_10104c34;
  /* 10104be5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10104be7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10104be9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104beb push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 10104bf0 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104bf6u);
  /* 10104bf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104bf9 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104bfc jle 0x10104c34 */
  if ((C.zf||C.sf!=C.of)) goto L_10104c34;
  /* 10104bfe push 0xa */
  push32((uint32_t)(0xau));
  /* 10104c00 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10104c02 push 2 */
  push32((uint32_t)(0x2u));
  /* 10104c04 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 10104c09 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104c0fu);
  /* 10104c0f push 0xa */
  push32((uint32_t)(0xau));
  /* 10104c11 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104c13 push 3 */
  push32((uint32_t)(0x3u));
  /* 10104c15 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 10104c1a call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104c20u);
  /* 10104c20 push 0xa */
  push32((uint32_t)(0xau));
  /* 10104c22 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10104c24 push 4 */
  push32((uint32_t)(0x4u));
  /* 10104c26 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 10104c2b call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104c31u);
  /* 10104c31 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104c34:;
  /* 10104c34 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 10104c38 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10104c3a je 0x10104d1e */
  if (C.zf) goto L_10104d1e;
  /* 10104c40 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104c42 push 0xa */
  push32((uint32_t)(0xau));
  /* 10104c44 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104c46 push 0x101139f8 */
  push32((uint32_t)(0x101139f8u));
  /* 10104c4b call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104c51u);
  /* 10104c51 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10104c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104c55 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10104c57 push 0x10116290 */
  push32((uint32_t)(0x10116290u));
  /* 10104c5c call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104c62u);
  /* 10104c62 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10104c64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104c66 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10104c68 push 0x101163a8 */
  push32((uint32_t)(0x101163a8u));
  /* 10104c6d call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104c73u);
  /* 10104c73 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104c75 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10104c77 push 0x10113760 */
  push32((uint32_t)(0x10113760u));
  /* 10104c7c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104c82u);
  /* 10104c82 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104c84 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10104c86 push 0x10113838 */
  push32((uint32_t)(0x10113838u));
  /* 10104c8b call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104c91u);
  /* 10104c91 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104c94 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104c96 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10104c98 push 0x10113758 */
  push32((uint32_t)(0x10113758u));
  /* 10104c9d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104ca3u);
  /* 10104ca3 push 0x101162c8 */
  push32((uint32_t)(0x101162c8u));
  /* 10104ca8 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10104caeu);
  /* 10104cae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104cb1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104cb3 je 0x10104cc9 */
  if (C.zf) goto L_10104cc9;
  /* 10104cb5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10104cb7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10104cb9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10104cbb push 0x101164a0 */
  push32((uint32_t)(0x101164a0u));
  /* 10104cc0 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104cc6u);
  /* 10104cc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104cc9:;
  /* 10104cc9 push 0x101161e0 */
  push32((uint32_t)(0x101161e0u));
  /* 10104cce call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10104cd4u);
  /* 10104cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104cd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104cd9 je 0x10104cef */
  if (C.zf) goto L_10104cef;
  /* 10104cdb push 0xa */
  push32((uint32_t)(0xau));
  /* 10104cdd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10104cdf push 0xa */
  push32((uint32_t)(0xau));
  /* 10104ce1 push 0x10113798 */
  push32((uint32_t)(0x10113798u));
  /* 10104ce6 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104cecu);
  /* 10104cec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104cef:;
  /* 10104cef call 0x101043a0 */
  push32(0x10104cf4u); f_101043a0();
L_10104cf4:;
  /* 10104cf4 push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 10104cf9 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10104cffu);
  /* 10104cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104d02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104d04 je 0x10104d54 */
  if (C.zf) goto L_10104d54;
  /* 10104d06 push 0x10116230 */
  push32((uint32_t)(0x10116230u));
  /* 10104d0b call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10104d11u);
  /* 10104d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104d14 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104d16 jne 0x10104d45 */
  if (!C.zf) goto L_10104d45;
  /* 10104d18 push 2 */
  push32((uint32_t)(0x2u));
  /* 10104d1a push 2 */
  push32((uint32_t)(0x2u));
  /* 10104d1c jmp 0x10104d49 */
  goto L_10104d49;
L_10104d1e:;
  /* 10104d1e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10104d20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104d22 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10104d24 push 0x10116290 */
  push32((uint32_t)(0x10116290u));
  /* 10104d29 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104d2fu);
  /* 10104d2f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10104d31 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104d33 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10104d35 push 0x101163a8 */
  push32((uint32_t)(0x101163a8u));
  /* 10104d3a call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104d40u);
  /* 10104d40 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104d43 jmp 0x10104cf4 */
  goto L_10104cf4;
L_10104d45:;
  /* 10104d45 push 4 */
  push32((uint32_t)(0x4u));
  /* 10104d47 push 4 */
  push32((uint32_t)(0x4u));
L_10104d49:;
  /* 10104d49 push 8 */
  push32((uint32_t)(0x8u));
  /* 10104d4b call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x10104d51u);
  /* 10104d51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104d54:;
  /* 10104d54 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10104d59 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10104d5fu);
  /* 10104d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104d62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10104d64 je 0x10104d7a */
  if (C.zf) goto L_10104d7a;
  /* 10104d66 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104d68 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104d6a push 6 */
  push32((uint32_t)(0x6u));
  /* 10104d6c push 0x10116320 */
  push32((uint32_t)(0x10116320u));
  /* 10104d71 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104d77u);
  /* 10104d77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104d7a:;
  /* 10104d7a push 0x10116220 */
  push32((uint32_t)(0x10116220u));
  /* 10104d7f call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10104d85u);
  /* 10104d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104d88 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104d8a je 0x10104da0 */
  if (C.zf) goto L_10104da0;
  /* 10104d8c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104d8e push 0xa */
  push32((uint32_t)(0xau));
  /* 10104d90 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10104d92 push 0x10116320 */
  push32((uint32_t)(0x10116320u));
  /* 10104d97 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104d9du);
  /* 10104d9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104da0:;
  /* 10104da0 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10104da2 je 0x10104ea3 */
  if (C.zf) goto L_10104ea3;
  /* 10104da8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10104daa push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10104dac push 2 */
  push32((uint32_t)(0x2u));
  /* 10104dae push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10104db3 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104db9u);
  /* 10104db9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10104dbb push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10104dbd push 3 */
  push32((uint32_t)(0x3u));
  /* 10104dbf push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10104dc4 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104dcau);
  /* 10104dca push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10104dcc push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10104dce push 4 */
  push32((uint32_t)(0x4u));
  /* 10104dd0 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10104dd5 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104ddbu);
  /* 10104ddb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10104ddd push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10104ddf push 5 */
  push32((uint32_t)(0x5u));
  /* 10104de1 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10104de6 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104decu);
  /* 10104dec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104def push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10104df1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10104df3 push 6 */
  push32((uint32_t)(0x6u));
  /* 10104df5 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10104dfa call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104e00u);
  /* 10104e00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104e02 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10104e04 push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 10104e09 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104e0fu);
  /* 10104e0f push 0x10116210 */
  push32((uint32_t)(0x10116210u));
  /* 10104e14 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10104e1au);
  /* 10104e1a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104e1d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104e20 jle 0x10104e43 */
  if ((C.zf||C.sf!=C.of)) goto L_10104e43;
  /* 10104e22 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104e24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104e26 push 0x10116338 */
  push32((uint32_t)(0x10116338u));
  /* 10104e2b call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104e31u);
  /* 10104e31 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10104e33 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10104e35 push 0x10116340 */
  push32((uint32_t)(0x10116340u));
  /* 10104e3a call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104e40u);
  /* 10104e40 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104e43:;
  /* 10104e43 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104e45 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10104e47 push 0x10116220 */
  push32((uint32_t)(0x10116220u));
  /* 10104e4c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104e52u);
  /* 10104e52 push 0x10113a38 */
  push32((uint32_t)(0x10113a38u));
  /* 10104e57 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10104e5du);
  /* 10104e5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104e60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10104e62 je 0x10104ea3 */
  if (C.zf) goto L_10104ea3;
  /* 10104e64 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104e66 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104e68 push 0x10116298 */
  push32((uint32_t)(0x10116298u));
  /* 10104e6d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104e73u);
  /* 10104e73 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104e75 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104e77 push 0x101162a8 */
  push32((uint32_t)(0x101162a8u));
  /* 10104e7c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104e82u);
  /* 10104e82 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104e84 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10104e86 push 0x101162b0 */
  push32((uint32_t)(0x101162b0u));
  /* 10104e8b call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104e91u);
  /* 10104e91 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104e93 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10104e95 push 0x101162a0 */
  push32((uint32_t)(0x101162a0u));
  /* 10104e9a call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104ea0u);
  /* 10104ea0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104ea3:;
  /* 10104ea3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104ea5 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10104ea7 push 0x101138d0 */
  push32((uint32_t)(0x101138d0u));
  /* 10104eac call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104eb2u);
  /* 10104eb2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10104eb4 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10104eb6 push 0x10113a10 */
  push32((uint32_t)(0x10113a10u));
  /* 10104ebb call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104ec1u);
  /* 10104ec1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104ec3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104ec5 push 0x10116280 */
  push32((uint32_t)(0x10116280u));
  /* 10104eca call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10104ed0u);
  /* 10104ed0 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 10104ed4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104ed7 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104edc jle 0x10104efa */
  if ((C.zf||C.sf!=C.of)) goto L_10104efa;
  /* 10104ede push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10104ee0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10104ee2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10104ee7 push 0x10116210 */
  push32((uint32_t)(0x10116210u));
  /* 10104eec call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10104ef2u);
  /* 10104ef2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104ef5 call 0x10104350 */
  push32(0x10104efau); f_10104350();
L_10104efa:;
  /* 10104efa push 0x101139a8 */
  push32((uint32_t)(0x101139a8u));
  /* 10104eff call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10104f05u);
  /* 10104f05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10104f0a je 0x10105253 */
  if (C.zf) goto L_10105253;
  /* 10104f10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10104f12 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104f18u);
  /* 10104f18 push 2 */
  push32((uint32_t)(0x2u));
  /* 10104f1a mov edi, eax */
  EDI = (EAX);
  /* 10104f1c call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104f22u);
  /* 10104f22 push 4 */
  push32((uint32_t)(0x4u));
  /* 10104f24 mov esi, eax */
  ESI = (EAX);
  /* 10104f26 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104f2cu);
  /* 10104f2c push 5 */
  push32((uint32_t)(0x5u));
  /* 10104f2e mov ebp, eax */
  EBP = (EAX);
  /* 10104f30 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104f36u);
  /* 10104f36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10104f38 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10104f3c call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10104f42u);
  /* 10104f42 mov ebx, eax */
  EBX = (EAX);
  /* 10104f44 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10104f48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104f4b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104f50 jge 0x10104fe3 */
  if ((C.sf==C.of)) goto L_10104fe3;
  /* 10104f56 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104f5c jle 0x10104f69 */
  if ((C.zf||C.sf!=C.of)) goto L_10104f69;
  /* 10104f5e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10104f63 push 3 */
  push32((uint32_t)(0x3u));
  /* 10104f65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10104f67 jmp 0x10104fdb */
  goto L_10104fdb;
L_10104f69:;
  /* 10104f69 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104f6f jle 0x10104f7c */
  if ((C.zf||C.sf!=C.of)) goto L_10104f7c;
  /* 10104f71 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10104f76 push 3 */
  push32((uint32_t)(0x3u));
  /* 10104f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10104f7a jmp 0x10104fdb */
  goto L_10104fdb;
L_10104f7c:;
  /* 10104f7c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104f82 jle 0x10104f8f */
  if ((C.zf||C.sf!=C.of)) goto L_10104f8f;
  /* 10104f84 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10104f89 push 3 */
  push32((uint32_t)(0x3u));
  /* 10104f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10104f8d jmp 0x10104fdb */
  goto L_10104fdb;
L_10104f8f:;
  /* 10104f8f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104f95 jle 0x10104fa2 */
  if ((C.zf||C.sf!=C.of)) goto L_10104fa2;
  /* 10104f97 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10104f9c push 3 */
  push32((uint32_t)(0x3u));
  /* 10104f9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10104fa0 jmp 0x10104fdb */
  goto L_10104fdb;
L_10104fa2:;
  /* 10104fa2 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104faa jle 0x10104fb7 */
  if ((C.zf||C.sf!=C.of)) goto L_10104fb7;
  /* 10104fac push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10104fb1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10104fb3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10104fb5 jmp 0x10104fdb */
  goto L_10104fdb;
L_10104fb7:;
  /* 10104fb7 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104fbd jle 0x10104fca */
  if ((C.zf||C.sf!=C.of)) goto L_10104fca;
  /* 10104fbf push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10104fc4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10104fc6 push 4 */
  push32((uint32_t)(0x4u));
  /* 10104fc8 jmp 0x10104fdb */
  goto L_10104fdb;
L_10104fca:;
  /* 10104fca cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104fd0 jle 0x10104fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_10104fe3;
  /* 10104fd2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10104fd7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10104fd9 push 1 */
  push32((uint32_t)(0x1u));
L_10104fdb:;
  /* 10104fdb call 0x10102650 */
  push32(0x10104fe0u); f_10102650();
  /* 10104fe0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10104fe3:;
  /* 10104fe3 push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 10104fe8 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10104feeu);
  /* 10104fee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10104ff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10104ff3 je 0x10105043 */
  if (C.zf) goto L_10105043;
  /* 10104ff5 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10104ffb jle 0x10105043 */
  if ((C.zf||C.sf!=C.of)) goto L_10105043;
  /* 10104ffd push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 10105002 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10105008u);
  /* 10105008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010500b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010500d jne 0x10105043 */
  if (!C.zf) goto L_10105043;
  /* 1010500f cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105015 jle 0x10105028 */
  if ((C.zf||C.sf!=C.of)) goto L_10105028;
  /* 10105017 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 1010501c push 3 */
  push32((uint32_t)(0x3u));
  /* 1010501e push 4 */
  push32((uint32_t)(0x4u));
  /* 10105020 call 0x10102650 */
  push32(0x10105025u); f_10102650();
  /* 10105025 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105028:;
  /* 10105028 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105030 jle 0x10105043 */
  if ((C.zf||C.sf!=C.of)) goto L_10105043;
  /* 10105032 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10105037 push 3 */
  push32((uint32_t)(0x3u));
  /* 10105039 push 5 */
  push32((uint32_t)(0x5u));
  /* 1010503b call 0x10102650 */
  push32(0x10105040u); f_10102650();
  /* 10105040 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105043:;
  /* 10105043 push 2 */
  push32((uint32_t)(0x2u));
  /* 10105045 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x1010504bu);
  /* 1010504b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010504e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105053 jle 0x10105066 */
  if ((C.zf||C.sf!=C.of)) goto L_10105066;
  /* 10105055 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 1010505a push 1 */
  push32((uint32_t)(0x1u));
  /* 1010505c push 2 */
  push32((uint32_t)(0x2u));
  /* 1010505e call 0x10102650 */
  push32(0x10105063u); f_10102650();
  /* 10105063 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105066:;
  /* 10105066 push 0 */
  push32((uint32_t)(0x0u));
  /* 10105068 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x1010506eu);
  /* 1010506e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105071 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105076 jle 0x10105089 */
  if ((C.zf||C.sf!=C.of)) goto L_10105089;
  /* 10105078 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1010507d push 1 */
  push32((uint32_t)(0x1u));
  /* 1010507f push 0 */
  push32((uint32_t)(0x0u));
  /* 10105081 call 0x10102650 */
  push32(0x10105086u); f_10102650();
  /* 10105086 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105089:;
  /* 10105089 push 0x10116318 */
  push32((uint32_t)(0x10116318u));
  /* 1010508e call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105094u);
  /* 10105094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105099 je 0x10105220 */
  if (C.zf) goto L_10105220;
  /* 1010509f push 0x101162e8 */
  push32((uint32_t)(0x101162e8u));
  /* 101050a4 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x101050aau);
  /* 101050aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101050ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101050af jne 0x10105220 */
  if (!C.zf) goto L_10105220;
  /* 101050b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101050b7 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101050bdu);
  /* 101050bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101050c0 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101050c5 jle 0x10105180 */
  if ((C.zf||C.sf!=C.of)) goto L_10105180;
  /* 101050cb push 0 */
  push32((uint32_t)(0x0u));
  /* 101050cd call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101050d3u);
  /* 101050d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101050d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101050d8 je 0x10105180 */
  if (C.zf) goto L_10105180;
  /* 101050de push 1 */
  push32((uint32_t)(0x1u));
  /* 101050e0 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101050e6u);
  /* 101050e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101050e9 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101050ee jge 0x10105180 */
  if ((C.sf==C.of)) goto L_10105180;
  /* 101050f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101050f6 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101050fcu);
  /* 101050fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101050ff cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105104 jle 0x10105117 */
  if ((C.zf||C.sf!=C.of)) goto L_10105117;
  /* 10105106 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1010510b push 1 */
  push32((uint32_t)(0x1u));
  /* 1010510d push 5 */
  push32((uint32_t)(0x5u));
  /* 1010510f call 0x10102650 */
  push32(0x10105114u); f_10102650();
  /* 10105114 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105117:;
  /* 10105117 push 4 */
  push32((uint32_t)(0x4u));
  /* 10105119 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x1010511fu);
  /* 1010511f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105122 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105127 jle 0x1010513a */
  if ((C.zf||C.sf!=C.of)) goto L_1010513a;
  /* 10105129 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 1010512e push 1 */
  push32((uint32_t)(0x1u));
  /* 10105130 push 4 */
  push32((uint32_t)(0x4u));
  /* 10105132 call 0x10102650 */
  push32(0x10105137u); f_10102650();
  /* 10105137 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010513a:;
  /* 1010513a push 2 */
  push32((uint32_t)(0x2u));
  /* 1010513c call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10105142u);
  /* 10105142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105145 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010514a jle 0x1010515d */
  if ((C.zf||C.sf!=C.of)) goto L_1010515d;
  /* 1010514c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10105151 push 1 */
  push32((uint32_t)(0x1u));
  /* 10105153 push 2 */
  push32((uint32_t)(0x2u));
  /* 10105155 call 0x10102650 */
  push32(0x1010515au); f_10102650();
  /* 1010515a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010515d:;
  /* 1010515d push 3 */
  push32((uint32_t)(0x3u));
  /* 1010515f call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10105165u);
  /* 10105165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105168 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010516d jle 0x10105180 */
  if ((C.zf||C.sf!=C.of)) goto L_10105180;
  /* 1010516f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10105174 push 1 */
  push32((uint32_t)(0x1u));
  /* 10105176 push 3 */
  push32((uint32_t)(0x3u));
  /* 10105178 call 0x10102650 */
  push32(0x1010517du); f_10102650();
  /* 1010517d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105180:;
  /* 10105180 push 5 */
  push32((uint32_t)(0x5u));
  /* 10105182 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10105188u);
  /* 10105188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010518b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105190 jle 0x10105220 */
  if ((C.zf||C.sf!=C.of)) goto L_10105220;
  /* 10105196 push 1 */
  push32((uint32_t)(0x1u));
  /* 10105198 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x1010519eu);
  /* 1010519e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101051a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101051a3 je 0x10105220 */
  if (C.zf) goto L_10105220;
  /* 101051a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101051a7 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101051adu);
  /* 101051ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101051b0 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101051b5 jle 0x10105220 */
  if ((C.zf||C.sf!=C.of)) goto L_10105220;
  /* 101051b7 push 5 */
  push32((uint32_t)(0x5u));
  /* 101051b9 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101051bfu);
  /* 101051bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101051c2 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101051c7 jle 0x101051da */
  if ((C.zf||C.sf!=C.of)) goto L_101051da;
  /* 101051c9 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101051ce push 4 */
  push32((uint32_t)(0x4u));
  /* 101051d0 push 5 */
  push32((uint32_t)(0x5u));
  /* 101051d2 call 0x10102650 */
  push32(0x101051d7u); f_10102650();
  /* 101051d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101051da:;
  /* 101051da push 2 */
  push32((uint32_t)(0x2u));
  /* 101051dc call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101051e2u);
  /* 101051e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101051e5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101051ea jle 0x101051fd */
  if ((C.zf||C.sf!=C.of)) goto L_101051fd;
  /* 101051ec push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 101051f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101051f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 101051f5 call 0x10102650 */
  push32(0x101051fau); f_10102650();
  /* 101051fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101051fd:;
  /* 101051fd push 3 */
  push32((uint32_t)(0x3u));
  /* 101051ff call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10105205u);
  /* 10105205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105208 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010520d jle 0x10105220 */
  if ((C.zf||C.sf!=C.of)) goto L_10105220;
  /* 1010520f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10105214 push 4 */
  push32((uint32_t)(0x4u));
  /* 10105216 push 3 */
  push32((uint32_t)(0x3u));
  /* 10105218 call 0x10102650 */
  push32(0x1010521du); f_10102650();
  /* 1010521d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105220:;
  /* 10105220 call dword ptr [0x10116630] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116630))), 0x10105226u);
  /* 10105226 mov ecx, dword ptr [eax*4 + 0x1011673c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1011673c)));
  /* 1010522d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1010522f jne 0x10105253 */
  if (!C.zf) goto L_10105253;
  /* 10105231 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10105236 push 3 */
  push32((uint32_t)(0x3u));
  /* 10105238 push 5 */
  push32((uint32_t)(0x5u));
  /* 1010523a call 0x10102650 */
  push32(0x1010523fu); f_10102650();
  /* 1010523f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105242 call dword ptr [0x10116630] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116630))), 0x10105248u);
  /* 10105248 mov dword ptr [eax*4 + 0x1011673c], 1 */
  w32((uint32_t)(EAX*4 + 0x1011673c), (0x1u));
L_10105253:;
  /* 10105253 pop edi */
  EDI = (pop32());
  /* 10105254 pop esi */
  ESI = (pop32());
  /* 10105255 pop ebp */
  EBP = (pop32());
  /* 10105256 pop ebx */
  EBX = (pop32());
  /* 10105257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010525a ret  */
  ESPCHK(0x10104420u, _esp0);
  ESP += 4; return;
}

/* FUN_10005260 @ 0x10105260 (72 bytes, 22 insns) */
void f_10105260(void) {
  FTRACE(0x10105260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10105260 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105262 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105264 push 1 */
  push32((uint32_t)(0x1u));
  /* 10105266 push 0x10116108 */
  push32((uint32_t)(0x10116108u));
  /* 1010526b call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105271u);
  /* 10105271 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105273 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105275 push 1 */
  push32((uint32_t)(0x1u));
  /* 10105277 push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 1010527c call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105282u);
  /* 10105282 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105284 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105286 push 1 */
  push32((uint32_t)(0x1u));
  /* 10105288 push 0x10116100 */
  push32((uint32_t)(0x10116100u));
  /* 1010528d call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105293u);
  /* 10105293 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105295 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105297 push 1 */
  push32((uint32_t)(0x1u));
  /* 10105299 push 0x101139a8 */
  push32((uint32_t)(0x101139a8u));
  /* 1010529e call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101052a4u);
  /* 101052a4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101052a7 ret  */
  ESPCHK(0x10105260u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x101052b0 (55 bytes, 16 insns) */
void f_101052b0(void) {
  FTRACE(0x101052b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101052b0 cmp dword ptr [esp + 4], 0x101137b8 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x101137b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101052b8 jne 0x101052e4 */
  if (!C.zf) goto L_101052e4;
  /* 101052ba push 0x10116470 */
  push32((uint32_t)(0x10116470u));
  /* 101052bf call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x101052c5u);
  /* 101052c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101052c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101052ca je 0x101052e4 */
  if (C.zf) goto L_101052e4;
  /* 101052cc push 0x101163b8 */
  push32((uint32_t)(0x101163b8u));
  /* 101052d1 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x101052d7u);
  /* 101052d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101052da test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101052dc je 0x101052e4 */
  if (C.zf) goto L_101052e4;
  /* 101052de mov eax, 1 */
  EAX = (0x1u);
  /* 101052e3 ret  */
  ESPCHK(0x101052b0u, _esp0);
  ESP += 4; return;
L_101052e4:;
  /* 101052e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101052e6 ret  */
  ESPCHK(0x101052b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052f0 @ 0x101052f0 (2008 bytes, 535 insns) */
void f_101052f0(void) {
  FTRACE(0x101052f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101052f0 push 0x101163a8 */
  push32((uint32_t)(0x101163a8u));
  /* 101052f5 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101052fbu);
  /* 101052fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101052fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105300 jne 0x10105314 */
  if (!C.zf) goto L_10105314;
  /* 10105302 push 0x101139f8 */
  push32((uint32_t)(0x101139f8u));
  /* 10105307 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x1010530du);
  /* 1010530d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105310 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105312 je 0x10105344 */
  if (C.zf) goto L_10105344;
L_10105314:;
  /* 10105314 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105316 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105318 push 0x10113a80 */
  push32((uint32_t)(0x10113a80u));
  /* 1010531d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105323u);
  /* 10105323 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105325 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105327 push 0x10116328 */
  push32((uint32_t)(0x10116328u));
  /* 1010532c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105332u);
  /* 10105332 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105334 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105336 push 0x10116330 */
  push32((uint32_t)(0x10116330u));
  /* 1010533b call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105341u);
  /* 10105341 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105344:;
  /* 10105344 push 0x101164e0 */
  push32((uint32_t)(0x101164e0u));
  /* 10105349 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x1010534fu);
  /* 1010534f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105352 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105355 jg 0x1010537f */
  if ((!C.zf&&C.sf==C.of)) goto L_1010537f;
  /* 10105357 push 0x10116460 */
  push32((uint32_t)(0x10116460u));
  /* 1010535c call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105362u);
  /* 10105362 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105365 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105368 jg 0x1010537f */
  if ((!C.zf&&C.sf==C.of)) goto L_1010537f;
  /* 1010536a push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 1010536f call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105375u);
  /* 10105375 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105378 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010537d jle 0x101053dd */
  if ((C.zf||C.sf!=C.of)) goto L_101053dd;
L_1010537f:;
  /* 1010537f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105381 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10105383 push 0x10113758 */
  push32((uint32_t)(0x10113758u));
  /* 10105388 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010538eu);
  /* 1010538e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105390 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10105392 push 0x10113760 */
  push32((uint32_t)(0x10113760u));
  /* 10105397 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010539du);
  /* 1010539d push 0x101164e0 */
  push32((uint32_t)(0x101164e0u));
  /* 101053a2 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101053a8u);
  /* 101053a8 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101053ab cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101053b0 jg 0x101053cb */
  if ((!C.zf&&C.sf==C.of)) goto L_101053cb;
  /* 101053b2 push 0x10116460 */
  push32((uint32_t)(0x10116460u));
  /* 101053b7 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101053bdu);
  /* 101053bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101053c0 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101053c3 jg 0x101053cb */
  if ((!C.zf&&C.sf==C.of)) goto L_101053cb;
  /* 101053c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101053c7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 101053c9 jmp 0x101053cf */
  goto L_101053cf;
L_101053cb:;
  /* 101053cb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101053cd push 0x5f */
  push32((uint32_t)(0x5fu));
L_101053cf:;
  /* 101053cf push 0x10113838 */
  push32((uint32_t)(0x10113838u));
  /* 101053d4 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101053dau);
  /* 101053da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101053dd:;
  /* 101053dd push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 101053e2 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101053e8u);
  /* 101053e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101053eb cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101053ee jle 0x101054a3 */
  if ((C.zf||C.sf!=C.of)) goto L_101054a3;
  /* 101053f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101053f6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101053f8 push 0x10116480 */
  push32((uint32_t)(0x10116480u));
  /* 101053fd call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105403u);
  /* 10105403 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105405 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10105407 push 0x10116488 */
  push32((uint32_t)(0x10116488u));
  /* 1010540c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105412u);
  /* 10105412 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105414 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105416 push 0x10116470 */
  push32((uint32_t)(0x10116470u));
  /* 1010541b call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105421u);
  /* 10105421 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105423 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10105425 push 0x101163c8 */
  push32((uint32_t)(0x101163c8u));
  /* 1010542a call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105430u);
  /* 10105430 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105432 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10105434 push 0x101163b0 */
  push32((uint32_t)(0x101163b0u));
  /* 10105439 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010543fu);
  /* 1010543f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105441 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105443 push 0x101163b8 */
  push32((uint32_t)(0x101163b8u));
  /* 10105448 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010544eu);
  /* 1010544e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105451 push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 10105456 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x1010545cu);
  /* 1010545c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010545f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105462 jle 0x101054a3 */
  if ((C.zf||C.sf!=C.of)) goto L_101054a3;
  /* 10105464 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105466 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105468 push 0x10116478 */
  push32((uint32_t)(0x10116478u));
  /* 1010546d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105473u);
  /* 10105473 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105475 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105477 push 0x10116490 */
  push32((uint32_t)(0x10116490u));
  /* 1010547c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105482u);
  /* 10105482 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105484 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105486 push 0x101163d0 */
  push32((uint32_t)(0x101163d0u));
  /* 1010548b call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105491u);
  /* 10105491 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105493 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105495 push 0x101163d8 */
  push32((uint32_t)(0x101163d8u));
  /* 1010549a call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101054a0u);
  /* 101054a0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101054a3:;
  /* 101054a3 push 0x10116210 */
  push32((uint32_t)(0x10116210u));
  /* 101054a8 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101054aeu);
  /* 101054ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101054b1 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101054b4 jle 0x1010554b */
  if ((C.zf||C.sf!=C.of)) goto L_1010554b;
  /* 101054ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101054bc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101054be push 0x10113a40 */
  push32((uint32_t)(0x10113a40u));
  /* 101054c3 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101054c9u);
  /* 101054c9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101054cb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101054cd push 0x10113a48 */
  push32((uint32_t)(0x10113a48u));
  /* 101054d2 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101054d8u);
  /* 101054d8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101054da push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101054dc push 0x10113a38 */
  push32((uint32_t)(0x10113a38u));
  /* 101054e1 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101054e7u);
  /* 101054e7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101054e9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101054eb push 0x101160a8 */
  push32((uint32_t)(0x101160a8u));
  /* 101054f0 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101054f6u);
  /* 101054f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101054f8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101054fa push 0x10116098 */
  push32((uint32_t)(0x10116098u));
  /* 101054ff call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105505u);
  /* 10105505 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105507 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10105509 push 0x101160a0 */
  push32((uint32_t)(0x101160a0u));
  /* 1010550e call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105514u);
  /* 10105514 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105517 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105519 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1010551b push 0x10116338 */
  push32((uint32_t)(0x10116338u));
  /* 10105520 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105526u);
  /* 10105526 push 0x10116210 */
  push32((uint32_t)(0x10116210u));
  /* 1010552b call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105531u);
  /* 10105531 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105534 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105537 jle 0x1010554b */
  if ((C.zf||C.sf!=C.of)) goto L_1010554b;
  /* 10105539 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010553b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1010553d push 0x10116340 */
  push32((uint32_t)(0x10116340u));
  /* 10105542 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105548u);
  /* 10105548 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010554b:;
  /* 1010554b push 0x10113830 */
  push32((uint32_t)(0x10113830u));
  /* 10105550 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105556u);
  /* 10105556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105559 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010555c jle 0x1010557f */
  if ((C.zf||C.sf!=C.of)) goto L_1010557f;
  /* 1010555e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105560 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105562 push 0x10116390 */
  push32((uint32_t)(0x10116390u));
  /* 10105567 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010556du);
  /* 1010556d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010556f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105571 push 0x101160f8 */
  push32((uint32_t)(0x101160f8u));
  /* 10105576 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010557cu);
  /* 1010557c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010557f:;
  /* 1010557f push 0x101164e0 */
  push32((uint32_t)(0x101164e0u));
  /* 10105584 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x1010558au);
  /* 1010558a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010558d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105590 jle 0x10105663 */
  if ((C.zf||C.sf!=C.of)) goto L_10105663;
  /* 10105596 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105598 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1010559a push 0x10116260 */
  push32((uint32_t)(0x10116260u));
  /* 1010559f call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101055a5u);
  /* 101055a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101055a7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101055a9 push 0x10116258 */
  push32((uint32_t)(0x10116258u));
  /* 101055ae call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101055b4u);
  /* 101055b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101055b6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101055b8 push 0x10116250 */
  push32((uint32_t)(0x10116250u));
  /* 101055bd call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101055c3u);
  /* 101055c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101055c5 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101055c7 push 0x10116148 */
  push32((uint32_t)(0x10116148u));
  /* 101055cc call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101055d2u);
  /* 101055d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101055d4 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101055d6 push 0x10116140 */
  push32((uint32_t)(0x10116140u));
  /* 101055db call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101055e1u);
  /* 101055e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101055e3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101055e5 push 0x10116138 */
  push32((uint32_t)(0x10116138u));
  /* 101055ea call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101055f0u);
  /* 101055f0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101055f3 push 0x101164e0 */
  push32((uint32_t)(0x101164e0u));
  /* 101055f8 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101055feu);
  /* 101055fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105601 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105604 jle 0x10105663 */
  if ((C.zf||C.sf!=C.of)) goto L_10105663;
  /* 10105606 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105608 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1010560a push 0x10116248 */
  push32((uint32_t)(0x10116248u));
  /* 1010560f call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105615u);
  /* 10105615 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105617 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10105619 push 0x10116238 */
  push32((uint32_t)(0x10116238u));
  /* 1010561e call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105624u);
  /* 10105624 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105626 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10105628 push 0x10116288 */
  push32((uint32_t)(0x10116288u));
  /* 1010562d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105633u);
  /* 10105633 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105635 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10105637 push 0x10116130 */
  push32((uint32_t)(0x10116130u));
  /* 1010563c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105642u);
  /* 10105642 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105644 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10105646 push 0x10116128 */
  push32((uint32_t)(0x10116128u));
  /* 1010564b call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105651u);
  /* 10105651 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105653 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10105655 push 0x10116120 */
  push32((uint32_t)(0x10116120u));
  /* 1010565a call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105660u);
  /* 10105660 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105663:;
  /* 10105663 push 0x10116460 */
  push32((uint32_t)(0x10116460u));
  /* 10105668 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x1010566eu);
  /* 1010566e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105671 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105674 jle 0x10105746 */
  if ((C.zf||C.sf!=C.of)) goto L_10105746;
  /* 1010567a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010567c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1010567e push 0x10113878 */
  push32((uint32_t)(0x10113878u));
  /* 10105683 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105689u);
  /* 10105689 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010568b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1010568d push 0x10113870 */
  push32((uint32_t)(0x10113870u));
  /* 10105692 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105698u);
  /* 10105698 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010569a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1010569c push 0x10113868 */
  push32((uint32_t)(0x10113868u));
  /* 101056a1 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101056a7u);
  /* 101056a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101056a9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101056ab push 0x101137e8 */
  push32((uint32_t)(0x101137e8u));
  /* 101056b0 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101056b6u);
  /* 101056b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101056b8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101056ba push 0x101137e0 */
  push32((uint32_t)(0x101137e0u));
  /* 101056bf call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101056c5u);
  /* 101056c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101056c7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101056c9 push 0x101137d8 */
  push32((uint32_t)(0x101137d8u));
  /* 101056ce call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101056d4u);
  /* 101056d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101056d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101056d9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101056db push 0x101137d0 */
  push32((uint32_t)(0x101137d0u));
  /* 101056e0 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101056e6u);
  /* 101056e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101056e8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101056ea push 0x101137a8 */
  push32((uint32_t)(0x101137a8u));
  /* 101056ef call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101056f5u);
  /* 101056f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101056f7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101056f9 push 0x101137a0 */
  push32((uint32_t)(0x101137a0u));
  /* 101056fe call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105704u);
  /* 10105704 push 0x101137a0 */
  push32((uint32_t)(0x101137a0u));
  /* 10105709 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x1010570fu);
  /* 1010570f add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105712 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10105714 je 0x10105746 */
  if (C.zf) goto L_10105746;
  /* 10105716 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105718 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1010571a push 0x10113850 */
  push32((uint32_t)(0x10113850u));
  /* 1010571f call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105725u);
  /* 10105725 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105727 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10105729 push 0x10113848 */
  push32((uint32_t)(0x10113848u));
  /* 1010572e call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105734u);
  /* 10105734 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105736 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10105738 push 0x10113840 */
  push32((uint32_t)(0x10113840u));
  /* 1010573d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105743u);
  /* 10105743 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105746:;
  /* 10105746 push 0x101137c0 */
  push32((uint32_t)(0x101137c0u));
  /* 1010574b call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105751u);
  /* 10105751 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105754 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105757 jle 0x101057df */
  if ((C.zf||C.sf!=C.of)) goto L_101057df;
  /* 1010575d push 0x101137b0 */
  push32((uint32_t)(0x101137b0u));
  /* 10105762 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105768u);
  /* 10105768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010576b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010576e jge 0x101057df */
  if ((C.sf==C.of)) goto L_101057df;
  /* 10105770 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105772 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10105774 push 0x10113a30 */
  push32((uint32_t)(0x10113a30u));
  /* 10105779 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010577fu);
  /* 1010577f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105781 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10105783 push 0x10113a28 */
  push32((uint32_t)(0x10113a28u));
  /* 10105788 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010578eu);
  /* 1010578e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105790 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105792 push 0x10113a20 */
  push32((uint32_t)(0x10113a20u));
  /* 10105797 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010579du);
  /* 1010579d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010579f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101057a1 push 0x101139e8 */
  push32((uint32_t)(0x101139e8u));
  /* 101057a6 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101057acu);
  /* 101057ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101057ae push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101057b0 push 0x101139e0 */
  push32((uint32_t)(0x101139e0u));
  /* 101057b5 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101057bbu);
  /* 101057bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101057bd push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101057bf push 0x101139d8 */
  push32((uint32_t)(0x101139d8u));
  /* 101057c4 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101057cau);
  /* 101057ca add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101057cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101057cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101057d1 push 0x10116338 */
  push32((uint32_t)(0x10116338u));
  /* 101057d6 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101057dcu);
  /* 101057dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101057df:;
  /* 101057df push 0x101137b0 */
  push32((uint32_t)(0x101137b0u));
  /* 101057e4 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101057eau);
  /* 101057ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101057ed cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101057f0 jle 0x101058d1 */
  if ((C.zf||C.sf!=C.of)) goto L_101058d1;
  /* 101057f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101057f8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101057fa push 0x10113788 */
  push32((uint32_t)(0x10113788u));
  /* 101057ff call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105805u);
  /* 10105805 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105807 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10105809 push 0x10113780 */
  push32((uint32_t)(0x10113780u));
  /* 1010580e call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105814u);
  /* 10105814 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105816 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105818 push 0x10113778 */
  push32((uint32_t)(0x10113778u));
  /* 1010581d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105823u);
  /* 10105823 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105825 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10105827 push 0x10116448 */
  push32((uint32_t)(0x10116448u));
  /* 1010582c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105832u);
  /* 10105832 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105834 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10105836 push 0x10116440 */
  push32((uint32_t)(0x10116440u));
  /* 1010583b call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105841u);
  /* 10105841 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105843 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10105845 push 0x10116438 */
  push32((uint32_t)(0x10116438u));
  /* 1010584a call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105850u);
  /* 10105850 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105853 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105855 push 0xa */
  push32((uint32_t)(0xau));
  /* 10105857 push 0x101164c0 */
  push32((uint32_t)(0x101164c0u));
  /* 1010585c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105862u);
  /* 10105862 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105864 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10105866 push 0x101164b8 */
  push32((uint32_t)(0x101164b8u));
  /* 1010586b call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105871u);
  /* 10105871 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105873 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10105875 push 0x10116508 */
  push32((uint32_t)(0x10116508u));
  /* 1010587a call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105880u);
  /* 10105880 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105882 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10105884 push 0x10116500 */
  push32((uint32_t)(0x10116500u));
  /* 10105889 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010588fu);
  /* 1010588f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105891 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10105893 push 0x101164f8 */
  push32((uint32_t)(0x101164f8u));
  /* 10105898 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010589eu);
  /* 1010589e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101058a0 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101058a2 push 0x101164f0 */
  push32((uint32_t)(0x101164f0u));
  /* 101058a7 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101058adu);
  /* 101058ad add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101058b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101058b2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101058b4 push 0x10116338 */
  push32((uint32_t)(0x10116338u));
  /* 101058b9 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101058bfu);
  /* 101058bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101058c1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101058c3 push 0x10116340 */
  push32((uint32_t)(0x10116340u));
  /* 101058c8 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101058ceu);
  /* 101058ce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101058d1:;
  /* 101058d1 push 0x101160b0 */
  push32((uint32_t)(0x101160b0u));
  /* 101058d6 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101058dcu);
  /* 101058dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101058df cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101058e2 jle 0x10105a40 */
  if ((C.zf||C.sf!=C.of)) goto L_10105a40;
  /* 101058e8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101058ea push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101058ec push 0x10113810 */
  push32((uint32_t)(0x10113810u));
  /* 101058f1 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101058f7u);
  /* 101058f7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101058f9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101058fb push 0x10113818 */
  push32((uint32_t)(0x10113818u));
  /* 10105900 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105906u);
  /* 10105906 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105908 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1010590a push 0x10113820 */
  push32((uint32_t)(0x10113820u));
  /* 1010590f call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105915u);
  /* 10105915 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105917 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105919 push 0x10113828 */
  push32((uint32_t)(0x10113828u));
  /* 1010591e call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105924u);
  /* 10105924 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105926 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105928 push 0x101137f0 */
  push32((uint32_t)(0x101137f0u));
  /* 1010592d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105933u);
  /* 10105933 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105935 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105937 push 0x10113800 */
  push32((uint32_t)(0x10113800u));
  /* 1010593c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105942u);
  /* 10105942 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105945 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105947 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105949 push 0x101138b8 */
  push32((uint32_t)(0x101138b8u));
  /* 1010594e call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105954u);
  /* 10105954 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105956 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105958 push 0x101138c0 */
  push32((uint32_t)(0x101138c0u));
  /* 1010595d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105963u);
  /* 10105963 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105965 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105967 push 0x101138c8 */
  push32((uint32_t)(0x101138c8u));
  /* 1010596c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105972u);
  /* 10105972 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105974 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105976 push 0x101138a0 */
  push32((uint32_t)(0x101138a0u));
  /* 1010597b call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105981u);
  /* 10105981 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105983 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105985 push 0x101138a8 */
  push32((uint32_t)(0x101138a8u));
  /* 1010598a call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105990u);
  /* 10105990 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105992 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105994 push 0x101138b0 */
  push32((uint32_t)(0x101138b0u));
  /* 10105999 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010599fu);
  /* 1010599f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101059a2 push 0x101160b0 */
  push32((uint32_t)(0x101160b0u));
  /* 101059a7 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101059adu);
  /* 101059ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101059b0 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101059b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101059b5 jle 0x101059ca */
  if ((C.zf||C.sf!=C.of)) goto L_101059ca;
  /* 101059b7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101059b9 push 0x10116158 */
  push32((uint32_t)(0x10116158u));
  /* 101059be call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101059c4u);
  /* 101059c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101059c6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101059c8 jmp 0x101059db */
  goto L_101059db;
L_101059ca:;
  /* 101059ca push 0xf */
  push32((uint32_t)(0xfu));
  /* 101059cc push 0x10116158 */
  push32((uint32_t)(0x10116158u));
  /* 101059d1 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101059d7u);
  /* 101059d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101059d9 push 0xf */
  push32((uint32_t)(0xfu));
L_101059db:;
  /* 101059db push 0x101161b8 */
  push32((uint32_t)(0x101161b8u));
  /* 101059e0 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101059e6u);
  /* 101059e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101059e9 push 0x10116158 */
  push32((uint32_t)(0x10116158u));
  /* 101059ee call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x101059f4u);
  /* 101059f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101059f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101059f9 je 0x10105a1f */
  if (C.zf) goto L_10105a1f;
  /* 101059fb push 0x101161b8 */
  push32((uint32_t)(0x101161b8u));
  /* 10105a00 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10105a06u);
  /* 10105a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105a09 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10105a0b je 0x10105a1f */
  if (C.zf) goto L_10105a1f;
  /* 10105a0d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105a0f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105a11 push 0x101161b0 */
  push32((uint32_t)(0x101161b0u));
  /* 10105a16 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105a1cu);
  /* 10105a1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105a1f:;
  /* 10105a1f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105a21 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105a23 push 0x10116338 */
  push32((uint32_t)(0x10116338u));
  /* 10105a28 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105a2eu);
  /* 10105a2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105a30 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105a32 push 0x10116340 */
  push32((uint32_t)(0x10116340u));
  /* 10105a37 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105a3du);
  /* 10105a3d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105a40:;
  /* 10105a40 push 0x10116438 */
  push32((uint32_t)(0x10116438u));
  /* 10105a45 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10105a4bu);
  /* 10105a4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105a4e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10105a50 je 0x10105ac7 */
  if (C.zf) goto L_10105ac7;
  /* 10105a52 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105a54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105a56 push 0x101162a0 */
  push32((uint32_t)(0x101162a0u));
  /* 10105a5b call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105a61u);
  /* 10105a61 push 0x101162a0 */
  push32((uint32_t)(0x101162a0u));
  /* 10105a66 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10105a6cu);
  /* 10105a6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105a6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10105a71 je 0x10105ac7 */
  if (C.zf) goto L_10105ac7;
  /* 10105a73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105a75 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105a77 push 0x101162b0 */
  push32((uint32_t)(0x101162b0u));
  /* 10105a7c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105a82u);
  /* 10105a82 push 0x101162b0 */
  push32((uint32_t)(0x101162b0u));
  /* 10105a87 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10105a8du);
  /* 10105a8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105a90 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10105a92 je 0x10105ac7 */
  if (C.zf) goto L_10105ac7;
  /* 10105a94 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105a96 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105a98 push 0x101162a8 */
  push32((uint32_t)(0x101162a8u));
  /* 10105a9d call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105aa3u);
  /* 10105aa3 push 0x101162a8 */
  push32((uint32_t)(0x101162a8u));
  /* 10105aa8 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10105aaeu);
  /* 10105aae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105ab1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10105ab3 je 0x10105ac7 */
  if (C.zf) goto L_10105ac7;
  /* 10105ab5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105ab7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105ab9 push 0x10116298 */
  push32((uint32_t)(0x10116298u));
  /* 10105abe call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105ac4u);
  /* 10105ac4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105ac7:;
  /* 10105ac7 ret  */
  ESPCHK(0x101052f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ad0 @ 0x10105ad0 (305 bytes, 86 insns) */
void f_10105ad0(void) {
  FTRACE(0x10105ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10105ad0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105ad2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10105ad4 push 0x101164a8 */
  push32((uint32_t)(0x101164a8u));
  /* 10105ad9 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105adfu);
  /* 10105adf push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 10105ae4 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105aeau);
  /* 10105aea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105aed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105aef je 0x10105b03 */
  if (C.zf) goto L_10105b03;
  /* 10105af1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105af3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105af5 push 0x10113790 */
  push32((uint32_t)(0x10113790u));
  /* 10105afa call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105b00u);
  /* 10105b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105b03:;
  /* 10105b03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105b05 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105b07 push 0x101161a8 */
  push32((uint32_t)(0x101161a8u));
  /* 10105b0c call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105b12u);
  /* 10105b12 push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 10105b17 call 0x101052b0 */
  push32(0x10105b1cu); f_101052b0();
  /* 10105b1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105b1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105b21 jne 0x10105b31 */
  if (!C.zf) goto L_10105b31;
  /* 10105b23 mov eax, dword ptr [0x10116088] */
  EAX = (r32((uint32_t)(0x10116088)));
  /* 10105b28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105b2a je 0x10105b43 */
  if (C.zf) goto L_10105b43;
  /* 10105b2c cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105b2f je 0x10105b43 */
  if (C.zf) goto L_10105b43;
L_10105b31:;
  /* 10105b31 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105b33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10105b35 push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 10105b3a call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105b40u);
  /* 10105b40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105b43:;
  /* 10105b43 push 0x10116118 */
  push32((uint32_t)(0x10116118u));
  /* 10105b48 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105b4eu);
  /* 10105b4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105b51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105b53 je 0x10105b67 */
  if (C.zf) goto L_10105b67;
  /* 10105b55 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105b57 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105b59 push 0x10116170 */
  push32((uint32_t)(0x10116170u));
  /* 10105b5e call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105b64u);
  /* 10105b64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105b67:;
  /* 10105b67 push 0x10116280 */
  push32((uint32_t)(0x10116280u));
  /* 10105b6c call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10105b72u);
  /* 10105b72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105b75 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10105b77 je 0x10105b8b */
  if (C.zf) goto L_10105b8b;
  /* 10105b79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105b7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105b7d push 0x10116160 */
  push32((uint32_t)(0x10116160u));
  /* 10105b82 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105b88u);
  /* 10105b88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105b8b:;
  /* 10105b8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105b8d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10105b8f push 0x10116280 */
  push32((uint32_t)(0x10116280u));
  /* 10105b94 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105b9au);
  /* 10105b9a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105b9c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10105b9e push 0x10116230 */
  push32((uint32_t)(0x10116230u));
  /* 10105ba3 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105ba9u);
  /* 10105ba9 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10105bae call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105bb4u);
  /* 10105bb4 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105bb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105bb9 je 0x10105bcd */
  if (C.zf) goto L_10105bcd;
  /* 10105bbb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105bbd push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10105bbf push 0x101162e8 */
  push32((uint32_t)(0x101162e8u));
  /* 10105bc4 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105bcau);
  /* 10105bca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105bcd:;
  /* 10105bcd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105bcf push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10105bd1 push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 10105bd6 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105bdcu);
  /* 10105bdc push 0x10116388 */
  push32((uint32_t)(0x10116388u));
  /* 10105be1 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105be7u);
  /* 10105be7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105bea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105bec je 0x10105c00 */
  if (C.zf) goto L_10105c00;
  /* 10105bee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105bf0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105bf2 push 0x10113a10 */
  push32((uint32_t)(0x10113a10u));
  /* 10105bf7 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10105bfdu);
  /* 10105bfd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105c00:;
  /* 10105c00 ret  */
  ESPCHK(0x10105ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c10 @ 0x10105c10 (536 bytes, 150 insns) */
void f_10105c10(void) {
  FTRACE(0x10105c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10105c10 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105c12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105c14 push 3 */
  push32((uint32_t)(0x3u));
  /* 10105c16 push 0x10116388 */
  push32((uint32_t)(0x10116388u));
  /* 10105c1b call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105c21u);
  /* 10105c21 push 0x10116118 */
  push32((uint32_t)(0x10116118u));
  /* 10105c26 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10105c2cu);
  /* 10105c2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105c2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105c31 je 0x10105c58 */
  if (C.zf) goto L_10105c58;
  /* 10105c33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105c35 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105c37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10105c39 push 0x10116108 */
  push32((uint32_t)(0x10116108u));
  /* 10105c3e call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105c44u);
  /* 10105c44 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105c46 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105c48 push 4 */
  push32((uint32_t)(0x4u));
  /* 10105c4a push 0x10116100 */
  push32((uint32_t)(0x10116100u));
  /* 10105c4f call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105c55u);
  /* 10105c55 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105c58:;
  /* 10105c58 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105c5a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10105c5e push 0x10116108 */
  push32((uint32_t)(0x10116108u));
  /* 10105c63 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105c69u);
  /* 10105c69 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105c6b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105c6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10105c6f push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 10105c74 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105c7au);
  /* 10105c7a mov eax, dword ptr [0x101163e4] */
  EAX = (r32((uint32_t)(0x101163e4)));
  /* 10105c7f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105c82 mov ecx, dword ptr [eax*4 + 0x101160c8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x101160c8)));
  /* 10105c89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10105c8b jne 0x10105ca8 */
  if (!C.zf) goto L_10105ca8;
  /* 10105c8d call 0x10105260 */
  push32(0x10105c92u); f_10105260();
  /* 10105c92 push 0x101139a8 */
  push32((uint32_t)(0x101139a8u));
  /* 10105c97 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10105c9du);
  /* 10105c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105ca0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105ca2 je 0x10105e27 */
  if (C.zf) goto L_10105e27;
L_10105ca8:;
  /* 10105ca8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105caa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105cac push 1 */
  push32((uint32_t)(0x1u));
  /* 10105cae push 0x10116318 */
  push32((uint32_t)(0x10116318u));
  /* 10105cb3 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105cb9u);
  /* 10105cb9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105cbb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105cbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10105cbf push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 10105cc4 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105ccau);
  /* 10105cca push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 10105ccf call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10105cd5u);
  /* 10105cd5 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105cd8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105cdb jge 0x10105cea */
  if ((C.sf==C.of)) goto L_10105cea;
  /* 10105cdd call 0x101026b0 */
  push32(0x10105ce2u); f_101026b0();
  /* 10105ce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105ce4 jne 0x10105e27 */
  if (!C.zf) goto L_10105e27;
L_10105cea:;
  /* 10105cea push esi */
  push32((uint32_t)(ESI));
  /* 10105ceb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105ced push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105cef push 2 */
  push32((uint32_t)(0x2u));
  /* 10105cf1 push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 10105cf6 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105cfcu);
  /* 10105cfc push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 10105d01 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10105d07u);
  /* 10105d07 push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 10105d0c mov esi, eax */
  ESI = (EAX);
  /* 10105d0e call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105d14u);
  /* 10105d14 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105d17 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10105d19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105d1b pop esi */
  ESI = (pop32());
  /* 10105d1c jg 0x10105e27 */
  if ((!C.zf&&C.sf==C.of)) goto L_10105e27;
  /* 10105d22 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105d24 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105d26 push 1 */
  push32((uint32_t)(0x1u));
  /* 10105d28 push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 10105d2d call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105d33u);
  /* 10105d33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105d36 call 0x101027c0 */
  push32(0x10105d3bu); f_101027c0();
  /* 10105d3b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105d3e jge 0x10105d67 */
  if ((C.sf==C.of)) goto L_10105d67;
  /* 10105d40 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105d42 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105d44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10105d46 push 0x10116118 */
  push32((uint32_t)(0x10116118u));
  /* 10105d4b call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105d51u);
  /* 10105d51 push 0x10116118 */
  push32((uint32_t)(0x10116118u));
  /* 10105d56 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10105d5cu);
  /* 10105d5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105d61 je 0x10105e27 */
  if (C.zf) goto L_10105e27;
L_10105d67:;
  /* 10105d67 call 0x10105260 */
  push32(0x10105d6cu); f_10105260();
  /* 10105d6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105d6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105d70 push 4 */
  push32((uint32_t)(0x4u));
  /* 10105d72 push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 10105d77 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105d7du);
  /* 10105d7d push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 10105d82 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10105d88u);
  /* 10105d88 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105d8b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105d8e jl 0x10105e27 */
  if ((C.sf!=C.of)) goto L_10105e27;
  /* 10105d94 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105d96 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105d98 push 3 */
  push32((uint32_t)(0x3u));
  /* 10105d9a push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10105d9f call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105da5u);
  /* 10105da5 push 0x10116388 */
  push32((uint32_t)(0x10116388u));
  /* 10105daa call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105db0u);
  /* 10105db0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105db3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105db5 je 0x10105dcb */
  if (C.zf) goto L_10105dcb;
  /* 10105db7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105db9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105dbb push 4 */
  push32((uint32_t)(0x4u));
  /* 10105dbd push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10105dc2 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105dc8u);
  /* 10105dc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105dcb:;
  /* 10105dcb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105dcd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105dcf push 1 */
  push32((uint32_t)(0x1u));
  /* 10105dd1 push 0x10113748 */
  push32((uint32_t)(0x10113748u));
  /* 10105dd6 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105ddcu);
  /* 10105ddc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105dde push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10105de0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10105de2 push 0x10113748 */
  push32((uint32_t)(0x10113748u));
  /* 10105de7 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105dedu);
  /* 10105ded push 0x10113a10 */
  push32((uint32_t)(0x10113a10u));
  /* 10105df2 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10105df8u);
  /* 10105df8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105dfb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10105dfd je 0x10105e13 */
  if (C.zf) goto L_10105e13;
  /* 10105dff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105e01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105e03 push 5 */
  push32((uint32_t)(0x5u));
  /* 10105e05 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10105e0a call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105e10u);
  /* 10105e10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105e13:;
  /* 10105e13 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105e15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105e17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10105e19 push 0x10116228 */
  push32((uint32_t)(0x10116228u));
  /* 10105e1e call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105e24u);
  /* 10105e24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105e27:;
  /* 10105e27 ret  */
  ESPCHK(0x10105c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e30 @ 0x10105e30 (472 bytes, 137 insns) */
void f_10105e30(void) {
  FTRACE(0x10105e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10105e30 push ecx */
  push32((uint32_t)(ECX));
  /* 10105e31 push 0x101163a8 */
  push32((uint32_t)(0x101163a8u));
  /* 10105e36 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105e3cu);
  /* 10105e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105e3f cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105e42 jge 0x10105e57 */
  if ((C.sf==C.of)) goto L_10105e57;
  /* 10105e44 mov eax, dword ptr [0x101163e4] */
  EAX = (r32((uint32_t)(0x101163e4)));
  /* 10105e49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10105e4b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10105e4e push eax */
  push32((uint32_t)(EAX));
  /* 10105e4f call 0x10102710 */
  push32(0x10105e54u); f_10102710();
  /* 10105e54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105e57:;
  /* 10105e57 push 0x101163a8 */
  push32((uint32_t)(0x101163a8u));
  /* 10105e5c call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105e62u);
  /* 10105e62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105e65 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105e6a jg 0x10105e7e */
  if ((!C.zf&&C.sf==C.of)) goto L_10105e7e;
  /* 10105e6c push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10105e71 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10105e77u);
  /* 10105e77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105e7c je 0x10105e92 */
  if (C.zf) goto L_10105e92;
L_10105e7e:;
  /* 10105e7e mov ecx, dword ptr [0x101163e4] */
  ECX = (r32((uint32_t)(0x101163e4)));
  /* 10105e84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10105e86 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10105e89 push ecx */
  push32((uint32_t)(ECX));
  /* 10105e8a call 0x10102710 */
  push32(0x10105e8fu); f_10102710();
  /* 10105e8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105e92:;
  /* 10105e92 push esi */
  push32((uint32_t)(ESI));
  /* 10105e93 push edi */
  push32((uint32_t)(EDI));
  /* 10105e94 mov edi, 2 */
  EDI = (0x2u);
L_10105e99:;
  /* 10105e99 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105e9b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10105e9d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10105ea2 push 0x101162c0 */
  push32((uint32_t)(0x101162c0u));
  /* 10105ea7 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105eadu);
  /* 10105ead push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 10105eb2 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10105eb8u);
  /* 10105eb8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105ebb cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105ec0 jge 0x10105edb */
  if ((C.sf==C.of)) goto L_10105edb;
  /* 10105ec2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105ec4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10105ec6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10105ecb push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 10105ed0 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105ed6u);
  /* 10105ed6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105ed9 jmp 0x10105f06 */
  goto L_10105f06;
L_10105edb:;
  /* 10105edb push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10105edd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10105edf push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10105ee4 push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 10105ee9 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105eefu);
  /* 10105eef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105ef1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10105ef3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10105ef8 push 0x10116210 */
  push32((uint32_t)(0x10116210u));
  /* 10105efd call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105f03u);
  /* 10105f03 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105f06:;
  /* 10105f06 mov edx, dword ptr [0x101163e4] */
  EDX = (r32((uint32_t)(0x101163e4)));
  /* 10105f0c add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10105f0f push edx */
  push32((uint32_t)(EDX));
  /* 10105f10 call 0x10102730 */
  push32(0x10105f15u); f_10102730();
  /* 10105f15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105f18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105f1a jne 0x10105f3d */
  if (!C.zf) goto L_10105f3d;
  /* 10105f1c call 0x101027c0 */
  push32(0x10105f21u); f_101027c0();
  /* 10105f21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105f24 jge 0x10105f3d */
  if ((C.sf==C.of)) goto L_10105f3d;
  /* 10105f26 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105f28 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10105f2a push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10105f2f push 0x101163a8 */
  push32((uint32_t)(0x101163a8u));
  /* 10105f34 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105f3au);
  /* 10105f3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10105f3d:;
  /* 10105f3d mov al, byte ptr [0x101163e4] */
  AL = (r8((uint32_t)(0x101163e4)));
  /* 10105f42 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10105f46 mov eax, dword ptr [0x101165e8] */
  EAX = (r32((uint32_t)(0x101165e8)));
  /* 10105f4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10105f4d je 0x10105f65 */
  if (C.zf) goto L_10105f65;
  /* 10105f4f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10105f53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10105f55 push 0x101139b8 */
  push32((uint32_t)(0x101139b8u));
  /* 10105f5a push ecx */
  push32((uint32_t)(ECX));
  /* 10105f5b call eax */
  call_ind((uint32_t)(EAX), 0x10105f5du);
  /* 10105f5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105f60 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105f63 jge 0x10105fa5 */
  if ((C.sf==C.of)) goto L_10105fa5;
L_10105f65:;
  /* 10105f65 push 5 */
  push32((uint32_t)(0x5u));
  /* 10105f67 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10105f6du);
  /* 10105f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105f70 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105f75 jle 0x10105fa5 */
  if ((C.zf||C.sf!=C.of)) goto L_10105fa5;
  /* 10105f77 push 4 */
  push32((uint32_t)(0x4u));
  /* 10105f79 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10105f7fu);
  /* 10105f7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105f82 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10105f87 jle 0x10105fa5 */
  if ((C.zf||C.sf!=C.of)) goto L_10105fa5;
  /* 10105f89 mov esi, 0x1e */
  ESI = (0x1eu);
L_10105f8e:;
  /* 10105f8e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105f90 push 0xa */
  push32((uint32_t)(0xau));
  /* 10105f92 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10105f94 push 0x101139b8 */
  push32((uint32_t)(0x101139b8u));
  /* 10105f99 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105f9fu);
  /* 10105f9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105fa2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10105fa3 jne 0x10105f8e */
  if (!C.zf) goto L_10105f8e;
L_10105fa5:;
  /* 10105fa5 push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 10105faa call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10105fb0u);
  /* 10105fb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105fb3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10105fb5 je 0x10105fbb */
  if (C.zf) goto L_10105fbb;
  /* 10105fb7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10105fb9 jmp 0x10105fbd */
  goto L_10105fbd;
L_10105fbb:;
  /* 10105fbb push 0x64 */
  push32((uint32_t)(0x64u));
L_10105fbd:;
  /* 10105fbd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10105fbf push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10105fc4 push 0x101164e0 */
  push32((uint32_t)(0x101164e0u));
  /* 10105fc9 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105fcfu);
  /* 10105fcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105fd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105fd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10105fd6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10105fdb push 0x101137b0 */
  push32((uint32_t)(0x101137b0u));
  /* 10105fe0 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105fe6u);
  /* 10105fe6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10105fe8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10105fea push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10105fef push 0x101160b0 */
  push32((uint32_t)(0x101160b0u));
  /* 10105ff4 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10105ffau);
  /* 10105ffa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10105ffd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10105ffe jne 0x10105e99 */
  if (!C.zf) goto L_10105e99;
  /* 10106004 pop edi */
  EDI = (pop32());
  /* 10106005 pop esi */
  ESI = (pop32());
  /* 10106006 pop ecx */
  ECX = (pop32());
  /* 10106007 ret  */
  ESPCHK(0x10105e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006010 @ 0x10106010 (789 bytes, 244 insns) */
void f_10106010(void) {
  FTRACE(0x10106010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106010 push ecx */
  push32((uint32_t)(ECX));
  /* 10106011 push 0x101139a8 */
  push32((uint32_t)(0x101139a8u));
  /* 10106016 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x1010601cu);
  /* 1010601c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010601f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106021 je 0x10106323 */
  if (C.zf) goto L_10106323;
  /* 10106027 call 0x101026b0 */
  push32(0x1010602cu); f_101026b0();
  /* 1010602c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010602f jne 0x10106076 */
  if (!C.zf) goto L_10106076;
  /* 10106031 mov eax, dword ptr [0x101163e4] */
  EAX = (r32((uint32_t)(0x101163e4)));
  /* 10106036 push eax */
  push32((uint32_t)(EAX));
  /* 10106037 call 0x10102730 */
  push32(0x1010603cu); f_10102730();
  /* 1010603c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010603f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106041 jne 0x10106323 */
  if (!C.zf) goto L_10106323;
  /* 10106047 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1010604c push 3 */
  push32((uint32_t)(0x3u));
  /* 1010604e push 2 */
  push32((uint32_t)(0x2u));
  /* 10106050 call 0x10102650 */
  push32(0x10106055u); f_10102650();
  /* 10106055 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 1010605a push 3 */
  push32((uint32_t)(0x3u));
  /* 1010605c push 0 */
  push32((uint32_t)(0x0u));
  /* 1010605e call 0x10102650 */
  push32(0x10106063u); f_10102650();
  /* 10106063 mov ecx, dword ptr [0x101163e4] */
  ECX = (r32((uint32_t)(0x101163e4)));
  /* 10106069 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010606b push ecx */
  push32((uint32_t)(ECX));
  /* 1010606c call 0x10102710 */
  push32(0x10106071u); f_10102710();
  /* 10106071 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106074 pop ecx */
  ECX = (pop32());
  /* 10106075 ret  */
  ESPCHK(0x10106010u, _esp0);
  ESP += 4; return;
L_10106076:;
  /* 10106076 push 0x101139a8 */
  push32((uint32_t)(0x101139a8u));
  /* 1010607b call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10106081u);
  /* 10106081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106086 je 0x10106323 */
  if (C.zf) goto L_10106323;
  /* 1010608c mov edx, dword ptr [0x101163e4] */
  EDX = (r32((uint32_t)(0x101163e4)));
  /* 10106092 push edx */
  push32((uint32_t)(EDX));
  /* 10106093 call 0x10102730 */
  push32(0x10106098u); f_10102730();
  /* 10106098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010609b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010609d jne 0x10106112 */
  if (!C.zf) goto L_10106112;
  /* 1010609f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 101060a4 push 3 */
  push32((uint32_t)(0x3u));
  /* 101060a6 push 5 */
  push32((uint32_t)(0x5u));
  /* 101060a8 call 0x10102650 */
  push32(0x101060adu); f_10102650();
  /* 101060ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101060b0 call 0x101026b0 */
  push32(0x101060b5u); f_101026b0();
  /* 101060b5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101060b8 jne 0x101060d9 */
  if (!C.zf) goto L_101060d9;
  /* 101060ba push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101060bf push 0 */
  push32((uint32_t)(0x0u));
  /* 101060c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101060c3 call 0x10102650 */
  push32(0x101060c8u); f_10102650();
  /* 101060c8 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101060cd push 2 */
  push32((uint32_t)(0x2u));
  /* 101060cf push 4 */
  push32((uint32_t)(0x4u));
  /* 101060d1 call 0x10102650 */
  push32(0x101060d6u); f_10102650();
  /* 101060d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101060d9:;
  /* 101060d9 call 0x101026b0 */
  push32(0x101060deu); f_101026b0();
  /* 101060de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101060e1 jne 0x10106102 */
  if (!C.zf) goto L_10106102;
  /* 101060e3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 101060e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101060ea push 4 */
  push32((uint32_t)(0x4u));
  /* 101060ec call 0x10102650 */
  push32(0x101060f1u); f_10102650();
  /* 101060f1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 101060f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 101060f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 101060fa call 0x10102650 */
  push32(0x101060ffu); f_10102650();
  /* 101060ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106102:;
  /* 10106102 mov eax, dword ptr [0x101163e4] */
  EAX = (r32((uint32_t)(0x101163e4)));
  /* 10106107 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106109 push eax */
  push32((uint32_t)(EAX));
  /* 1010610a call 0x10102710 */
  push32(0x1010610fu); f_10102710();
  /* 1010610f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106112:;
  /* 10106112 push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 10106117 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x1010611du);
  /* 1010611d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106120 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10106122 je 0x10106194 */
  if (C.zf) goto L_10106194;
  /* 10106124 push 0x10116280 */
  push32((uint32_t)(0x10116280u));
  /* 10106129 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x1010612fu);
  /* 1010612f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106132 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10106134 jne 0x10106194 */
  if (!C.zf) goto L_10106194;
  /* 10106136 push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 1010613b call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10106141u);
  /* 10106141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106146 je 0x10106194 */
  if (C.zf) goto L_10106194;
  /* 10106148 mov eax, dword ptr [0x101165ec] */
  EAX = (r32((uint32_t)(0x101165ec)));
  /* 1010614d mov cl, byte ptr [0x101163e4] */
  CL = (r8((uint32_t)(0x101163e4)));
  /* 10106153 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106155 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10106159 je 0x1010616e */
  if (C.zf) goto L_1010616e;
  /* 1010615b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1010615f push 5 */
  push32((uint32_t)(0x5u));
  /* 10106161 push 0x10116280 */
  push32((uint32_t)(0x10116280u));
  /* 10106166 push edx */
  push32((uint32_t)(EDX));
  /* 10106167 call eax */
  call_ind((uint32_t)(EAX), 0x10106169u);
  /* 10106169 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010616c jmp 0x10106170 */
  goto L_10106170;
L_1010616e:;
  /* 1010616e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10106170:;
  /* 10106170 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10106173 push 0 */
  push32((uint32_t)(0x0u));
  /* 10106175 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10106178 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 1010617d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1010617f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10106182 mov eax, edx */
  EAX = (EDX);
  /* 10106184 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10106187 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10106189 push edx */
  push32((uint32_t)(EDX));
  /* 1010618a push 5 */
  push32((uint32_t)(0x5u));
  /* 1010618c call 0x10102fd0 */
  push32(0x10106191u); f_10102fd0();
  /* 10106191 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106194:;
  /* 10106194 push 0x10116280 */
  push32((uint32_t)(0x10116280u));
  /* 10106199 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x1010619fu);
  /* 1010619f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101061a2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101061a4 je 0x101062b9 */
  if (C.zf) goto L_101062b9;
  /* 101061aa push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 101061af call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x101061b5u);
  /* 101061b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101061b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101061ba jne 0x101062b9 */
  if (!C.zf) goto L_101062b9;
  /* 101061c0 mov eax, dword ptr [0x101165ec] */
  EAX = (r32((uint32_t)(0x101165ec)));
  /* 101061c5 mov cl, byte ptr [0x101163e4] */
  CL = (r8((uint32_t)(0x101163e4)));
  /* 101061cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101061cd mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101061d1 je 0x101061e6 */
  if (C.zf) goto L_101061e6;
  /* 101061d3 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101061d7 push 3 */
  push32((uint32_t)(0x3u));
  /* 101061d9 push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 101061de push edx */
  push32((uint32_t)(EDX));
  /* 101061df call eax */
  call_ind((uint32_t)(EAX), 0x101061e1u);
  /* 101061e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101061e4 jmp 0x101061e8 */
  goto L_101061e8;
L_101061e6:;
  /* 101061e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101061e8:;
  /* 101061e8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101061eb push 2 */
  push32((uint32_t)(0x2u));
  /* 101061ed lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 101061f0 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101061f5 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101061f7 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101061fa mov eax, edx */
  EAX = (EDX);
  /* 101061fc shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101061ff add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10106201 push edx */
  push32((uint32_t)(EDX));
  /* 10106202 push 3 */
  push32((uint32_t)(0x3u));
  /* 10106204 call 0x10102fd0 */
  push32(0x10106209u); f_10102fd0();
  /* 10106209 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010620c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010620e je 0x101062b9 */
  if (C.zf) goto L_101062b9;
  /* 10106214 mov eax, dword ptr [0x101165ec] */
  EAX = (r32((uint32_t)(0x101165ec)));
  /* 10106219 mov cl, byte ptr [0x101163e4] */
  CL = (r8((uint32_t)(0x101163e4)));
  /* 1010621f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106221 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10106225 je 0x1010623a */
  if (C.zf) goto L_1010623a;
  /* 10106227 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1010622b push 1 */
  push32((uint32_t)(0x1u));
  /* 1010622d push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 10106232 push edx */
  push32((uint32_t)(EDX));
  /* 10106233 call eax */
  call_ind((uint32_t)(EAX), 0x10106235u);
  /* 10106235 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106238 jmp 0x1010623c */
  goto L_1010623c;
L_1010623a:;
  /* 1010623a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1010623c:;
  /* 1010623c lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 10106243 push 2 */
  push32((uint32_t)(0x2u));
  /* 10106245 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10106247 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 1010624a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1010624d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 10106252 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10106254 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10106257 mov eax, edx */
  EAX = (EDX);
  /* 10106259 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1010625c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010625e push edx */
  push32((uint32_t)(EDX));
  /* 1010625f push 1 */
  push32((uint32_t)(0x1u));
  /* 10106261 call 0x10102fd0 */
  push32(0x10106266u); f_10102fd0();
  /* 10106266 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106269 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010626b je 0x101062b9 */
  if (C.zf) goto L_101062b9;
  /* 1010626d mov eax, dword ptr [0x101165ec] */
  EAX = (r32((uint32_t)(0x101165ec)));
  /* 10106272 mov cl, byte ptr [0x101163e4] */
  CL = (r8((uint32_t)(0x101163e4)));
  /* 10106278 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010627a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 1010627e je 0x10106293 */
  if (C.zf) goto L_10106293;
  /* 10106280 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10106284 push 4 */
  push32((uint32_t)(0x4u));
  /* 10106286 push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 1010628b push edx */
  push32((uint32_t)(EDX));
  /* 1010628c call eax */
  call_ind((uint32_t)(EAX), 0x1010628eu);
  /* 1010628e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106291 jmp 0x10106295 */
  goto L_10106295;
L_10106293:;
  /* 10106293 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10106295:;
  /* 10106295 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10106298 push 2 */
  push32((uint32_t)(0x2u));
  /* 1010629a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 1010629d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101062a2 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101062a4 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101062a7 mov eax, edx */
  EAX = (EDX);
  /* 101062a9 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101062ac add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101062ae push edx */
  push32((uint32_t)(EDX));
  /* 101062af push 4 */
  push32((uint32_t)(0x4u));
  /* 101062b1 call 0x10102fd0 */
  push32(0x101062b6u); f_10102fd0();
  /* 101062b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101062b9:;
  /* 101062b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 101062bb call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101062c1u);
  /* 101062c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101062c4 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101062c9 jle 0x101062ee */
  if ((C.zf||C.sf!=C.of)) goto L_101062ee;
  /* 101062cb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101062d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 101062d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 101062d4 call 0x10102650 */
  push32(0x101062d9u); f_10102650();
  /* 101062d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 101062db call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101062e1u);
  /* 101062e1 push eax */
  push32((uint32_t)(EAX));
  /* 101062e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101062e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101062e6 call 0x10102650 */
  push32(0x101062ebu); f_10102650();
  /* 101062eb add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101062ee:;
  /* 101062ee push 0 */
  push32((uint32_t)(0x0u));
  /* 101062f0 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101062f6u);
  /* 101062f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101062f9 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101062fe jle 0x10106323 */
  if ((C.zf||C.sf!=C.of)) goto L_10106323;
  /* 10106300 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10106305 push 0 */
  push32((uint32_t)(0x0u));
  /* 10106307 push 2 */
  push32((uint32_t)(0x2u));
  /* 10106309 call 0x10102650 */
  push32(0x1010630eu); f_10102650();
  /* 1010630e push 0 */
  push32((uint32_t)(0x0u));
  /* 10106310 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10106316u);
  /* 10106316 push eax */
  push32((uint32_t)(EAX));
  /* 10106317 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106319 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010631b call 0x10102650 */
  push32(0x10106320u); f_10102650();
  /* 10106320 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106323:;
  /* 10106323 pop ecx */
  ECX = (pop32());
  /* 10106324 ret  */
  ESPCHK(0x10106010u, _esp0);
  ESP += 4; return;
}

/* FUN_10006330 @ 0x10106330 (818 bytes, 268 insns) */
void f_10106330(void) {
  FTRACE(0x10106330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106330 push ecx */
  push32((uint32_t)(ECX));
  /* 10106331 push 4 */
  push32((uint32_t)(0x4u));
  /* 10106333 push 4 */
  push32((uint32_t)(0x4u));
  /* 10106335 push 0 */
  push32((uint32_t)(0x0u));
  /* 10106337 call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x1010633du);
  /* 1010633d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106340 call dword ptr [0x101166a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101166a0))), 0x10106346u);
  /* 10106346 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10106348 je 0x10106660 */
  if (C.zf) goto L_10106660;
  /* 1010634e push 4 */
  push32((uint32_t)(0x4u));
  /* 10106350 push 4 */
  push32((uint32_t)(0x4u));
  /* 10106352 push 9 */
  push32((uint32_t)(0x9u));
  /* 10106354 call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x1010635au);
  /* 1010635a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010635d call 0x101026b0 */
  push32(0x10106362u); f_101026b0();
  /* 10106362 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10106365 je 0x10106660 */
  if (C.zf) goto L_10106660;
  /* 1010636b call dword ptr [0x101166a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101166a0))), 0x10106371u);
  /* 10106371 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10106373 je 0x10106651 */
  if (C.zf) goto L_10106651;
  /* 10106379 push esi */
  push32((uint32_t)(ESI));
  /* 1010637a push edi */
  push32((uint32_t)(EDI));
  /* 1010637b push 4 */
  push32((uint32_t)(0x4u));
  /* 1010637d push 4 */
  push32((uint32_t)(0x4u));
  /* 1010637f push 9 */
  push32((uint32_t)(0x9u));
  /* 10106381 call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x10106387u);
  /* 10106387 push 0x10116230 */
  push32((uint32_t)(0x10116230u));
  /* 1010638c call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10106392u);
  /* 10106392 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106395 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10106397 jne 0x101063ff */
  if (!C.zf) goto L_101063ff;
  /* 10106399 mov al, byte ptr [0x101163e4] */
  AL = (r8((uint32_t)(0x101163e4)));
  /* 1010639e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 101063a2 mov eax, dword ptr [0x101165ec] */
  EAX = (r32((uint32_t)(0x101165ec)));
  /* 101063a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101063a9 je 0x101063c0 */
  if (C.zf) goto L_101063c0;
  /* 101063ab mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101063af push 3 */
  push32((uint32_t)(0x3u));
  /* 101063b1 push 0x10116230 */
  push32((uint32_t)(0x10116230u));
  /* 101063b6 push ecx */
  push32((uint32_t)(ECX));
  /* 101063b7 call eax */
  call_ind((uint32_t)(EAX), 0x101063b9u);
  /* 101063b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101063bc mov esi, eax */
  ESI = (EAX);
  /* 101063be jmp 0x101063c2 */
  goto L_101063c2;
L_101063c0:;
  /* 101063c0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101063c2:;
  /* 101063c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 101063c4 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101063cau);
  /* 101063ca lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 101063cd mov edi, eax */
  EDI = (EAX);
  /* 101063cf mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101063d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101063d7 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 101063da imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101063dc sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101063df mov eax, edx */
  EAX = (EDX);
  /* 101063e1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101063e4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101063e6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101063e8 jge 0x101063f0 */
  if ((C.sf==C.of)) goto L_101063f0;
  /* 101063ea push 4 */
  push32((uint32_t)(0x4u));
  /* 101063ec push 4 */
  push32((uint32_t)(0x4u));
  /* 101063ee jmp 0x101063f4 */
  goto L_101063f4;
L_101063f0:;
  /* 101063f0 push 6 */
  push32((uint32_t)(0x6u));
  /* 101063f2 push 6 */
  push32((uint32_t)(0x6u));
L_101063f4:;
  /* 101063f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 101063f6 call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x101063fcu);
  /* 101063fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101063ff:;
  /* 101063ff push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 10106404 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x1010640au);
  /* 1010640a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010640d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010640f jne 0x10106478 */
  if (!C.zf) goto L_10106478;
  /* 10106411 mov eax, dword ptr [0x101165ec] */
  EAX = (r32((uint32_t)(0x101165ec)));
  /* 10106416 mov cl, byte ptr [0x101163e4] */
  CL = (r8((uint32_t)(0x101163e4)));
  /* 1010641c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010641e mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10106422 je 0x10106439 */
  if (C.zf) goto L_10106439;
  /* 10106424 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10106428 push 3 */
  push32((uint32_t)(0x3u));
  /* 1010642a push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 1010642f push edx */
  push32((uint32_t)(EDX));
  /* 10106430 call eax */
  call_ind((uint32_t)(EAX), 0x10106432u);
  /* 10106432 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106435 mov esi, eax */
  ESI = (EAX);
  /* 10106437 jmp 0x1010643b */
  goto L_1010643b;
L_10106439:;
  /* 10106439 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1010643b:;
  /* 1010643b push 3 */
  push32((uint32_t)(0x3u));
  /* 1010643d call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10106443u);
  /* 10106443 mov edi, eax */
  EDI = (EAX);
  /* 10106445 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10106448 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010644b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1010644e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10106453 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10106455 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10106458 mov ecx, edx */
  ECX = (EDX);
  /* 1010645a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1010645d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010645f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10106461 jge 0x10106469 */
  if ((C.sf==C.of)) goto L_10106469;
  /* 10106463 push 9 */
  push32((uint32_t)(0x9u));
  /* 10106465 push 2 */
  push32((uint32_t)(0x2u));
  /* 10106467 jmp 0x1010646d */
  goto L_1010646d;
L_10106469:;
  /* 10106469 push 6 */
  push32((uint32_t)(0x6u));
  /* 1010646b push 6 */
  push32((uint32_t)(0x6u));
L_1010646d:;
  /* 1010646d push 9 */
  push32((uint32_t)(0x9u));
  /* 1010646f call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x10106475u);
  /* 10106475 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106478:;
  /* 10106478 push 0x10116280 */
  push32((uint32_t)(0x10116280u));
  /* 1010647d call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10106483u);
  /* 10106483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106486 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10106488 jne 0x101064ef */
  if (!C.zf) goto L_101064ef;
  /* 1010648a mov eax, dword ptr [0x101165ec] */
  EAX = (r32((uint32_t)(0x101165ec)));
  /* 1010648f mov dl, byte ptr [0x101163e4] */
  DL = (r8((uint32_t)(0x101163e4)));
  /* 10106495 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106497 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 1010649b je 0x101064b2 */
  if (C.zf) goto L_101064b2;
  /* 1010649d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101064a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 101064a3 push 0x10116280 */
  push32((uint32_t)(0x10116280u));
  /* 101064a8 push ecx */
  push32((uint32_t)(ECX));
  /* 101064a9 call eax */
  call_ind((uint32_t)(EAX), 0x101064abu);
  /* 101064ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101064ae mov esi, eax */
  ESI = (EAX);
  /* 101064b0 jmp 0x101064b4 */
  goto L_101064b4;
L_101064b2:;
  /* 101064b2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101064b4:;
  /* 101064b4 push 3 */
  push32((uint32_t)(0x3u));
  /* 101064b6 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x101064bcu);
  /* 101064bc lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 101064bf mov edi, eax */
  EDI = (EAX);
  /* 101064c1 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101064c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101064c9 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 101064cc imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101064ce sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101064d1 mov eax, edx */
  EAX = (EDX);
  /* 101064d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101064d5 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101064d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101064da push 9 */
  push32((uint32_t)(0x9u));
  /* 101064dc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101064de jge 0x101064e4 */
  if ((C.sf==C.of)) goto L_101064e4;
  /* 101064e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 101064e2 jmp 0x101064e6 */
  goto L_101064e6;
L_101064e4:;
  /* 101064e4 push 6 */
  push32((uint32_t)(0x6u));
L_101064e6:;
  /* 101064e6 call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x101064ecu);
  /* 101064ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101064ef:;
  /* 101064ef push 0x10116470 */
  push32((uint32_t)(0x10116470u));
  /* 101064f4 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x101064fau);
  /* 101064fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101064fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101064ff je 0x10106513 */
  if (C.zf) goto L_10106513;
  /* 10106501 push 0x101163b8 */
  push32((uint32_t)(0x101163b8u));
  /* 10106506 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x1010650cu);
  /* 1010650c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010650f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10106511 jne 0x10106534 */
  if (!C.zf) goto L_10106534;
L_10106513:;
  /* 10106513 push 3 */
  push32((uint32_t)(0x3u));
  /* 10106515 call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x1010651bu);
  /* 1010651b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010651e cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10106523 jge 0x10106534 */
  if ((C.sf==C.of)) goto L_10106534;
  /* 10106525 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106527 push 4 */
  push32((uint32_t)(0x4u));
  /* 10106529 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010652b call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x10106531u);
  /* 10106531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106534:;
  /* 10106534 push 0x10116118 */
  push32((uint32_t)(0x10116118u));
  /* 10106539 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x1010653fu);
  /* 1010653f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106542 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106544 jne 0x101065b7 */
  if (!C.zf) goto L_101065b7;
  /* 10106546 call 0x101027c0 */
  push32(0x1010654bu); f_101027c0();
  /* 1010654b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010654e jge 0x101065b7 */
  if ((C.sf==C.of)) goto L_101065b7;
  /* 10106550 mov eax, dword ptr [0x101165e8] */
  EAX = (r32((uint32_t)(0x101165e8)));
  /* 10106555 mov cl, byte ptr [0x101163e4] */
  CL = (r8((uint32_t)(0x101163e4)));
  /* 1010655b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010655d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10106561 je 0x10106578 */
  if (C.zf) goto L_10106578;
  /* 10106563 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10106567 push 2 */
  push32((uint32_t)(0x2u));
  /* 10106569 push 0x10116118 */
  push32((uint32_t)(0x10116118u));
  /* 1010656e push edx */
  push32((uint32_t)(EDX));
  /* 1010656f call eax */
  call_ind((uint32_t)(EAX), 0x10106571u);
  /* 10106571 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106574 mov esi, eax */
  ESI = (EAX);
  /* 10106576 jmp 0x1010657a */
  goto L_1010657a;
L_10106578:;
  /* 10106578 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1010657a:;
  /* 1010657a push 2 */
  push32((uint32_t)(0x2u));
  /* 1010657c call dword ptr [0x1011666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011666c))), 0x10106582u);
  /* 10106582 mov edi, eax */
  EDI = (EAX);
  /* 10106584 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10106587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010658a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1010658d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10106592 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10106594 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10106597 mov ecx, edx */
  ECX = (EDX);
  /* 10106599 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1010659c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010659e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101065a0 jge 0x101065a8 */
  if ((C.sf==C.of)) goto L_101065a8;
  /* 101065a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 101065a4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101065a6 jmp 0x101065ac */
  goto L_101065ac;
L_101065a8:;
  /* 101065a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101065aa push 7 */
  push32((uint32_t)(0x7u));
L_101065ac:;
  /* 101065ac push 9 */
  push32((uint32_t)(0x9u));
  /* 101065ae call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x101065b4u);
  /* 101065b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101065b7:;
  /* 101065b7 push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 101065bc call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x101065c2u);
  /* 101065c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101065c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101065c7 pop edi */
  EDI = (pop32());
  /* 101065c8 pop esi */
  ESI = (pop32());
  /* 101065c9 jne 0x101065da */
  if (!C.zf) goto L_101065da;
  /* 101065cb push 1 */
  push32((uint32_t)(0x1u));
  /* 101065cd push 1 */
  push32((uint32_t)(0x1u));
  /* 101065cf push 9 */
  push32((uint32_t)(0x9u));
  /* 101065d1 call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x101065d7u);
  /* 101065d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101065da:;
  /* 101065da push 0x101161a8 */
  push32((uint32_t)(0x101161a8u));
  /* 101065df call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x101065e5u);
  /* 101065e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101065e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101065ea je 0x101065fe */
  if (C.zf) goto L_101065fe;
  /* 101065ec push 0x10113790 */
  push32((uint32_t)(0x10113790u));
  /* 101065f1 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x101065f7u);
  /* 101065f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101065fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101065fc jne 0x1010660d */
  if (!C.zf) goto L_1010660d;
L_101065fe:;
  /* 101065fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10106600 push 4 */
  push32((uint32_t)(0x4u));
  /* 10106602 push 9 */
  push32((uint32_t)(0x9u));
  /* 10106604 call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x1010660au);
  /* 1010660a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010660d:;
  /* 1010660d push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 10106612 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10106618u);
  /* 10106618 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010661b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010661d jne 0x1010662e */
  if (!C.zf) goto L_1010662e;
  /* 1010661f push 4 */
  push32((uint32_t)(0x4u));
  /* 10106621 push 4 */
  push32((uint32_t)(0x4u));
  /* 10106623 push 6 */
  push32((uint32_t)(0x6u));
  /* 10106625 call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x1010662bu);
  /* 1010662b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010662e:;
  /* 1010662e push 0x101164a8 */
  push32((uint32_t)(0x101164a8u));
  /* 10106633 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10106639u);
  /* 10106639 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010663c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010663e jne 0x10106660 */
  if (!C.zf) goto L_10106660;
  /* 10106640 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106642 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106644 push 9 */
  push32((uint32_t)(0x9u));
  /* 10106646 call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x1010664cu);
  /* 1010664c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010664f pop ecx */
  ECX = (pop32());
  /* 10106650 ret  */
  ESPCHK(0x10106330u, _esp0);
  ESP += 4; return;
L_10106651:;
  /* 10106651 push 3 */
  push32((uint32_t)(0x3u));
  /* 10106653 push 6 */
  push32((uint32_t)(0x6u));
  /* 10106655 push 0 */
  push32((uint32_t)(0x0u));
  /* 10106657 call dword ptr [0x10116644] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116644))), 0x1010665du);
  /* 1010665d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106660:;
  /* 10106660 pop ecx */
  ECX = (pop32());
  /* 10106661 ret  */
  ESPCHK(0x10106330u, _esp0);
  ESP += 4; return;
}

/* FUN_10006670 @ 0x10106670 (174 bytes, 50 insns) */
void f_10106670(void) {
  FTRACE(0x10106670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106670 push 0x101166c8 */
  push32((uint32_t)(0x101166c8u));
  /* 10106675 call 0x10102760 */
  push32(0x1010667au); f_10102760();
  /* 1010667a push 0x10116470 */
  push32((uint32_t)(0x10116470u));
  /* 1010667f call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10106685u);
  /* 10106685 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106688 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010668a je 0x101066ac */
  if (C.zf) goto L_101066ac;
  /* 1010668c push 0x101163b8 */
  push32((uint32_t)(0x101163b8u));
  /* 10106691 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10106697u);
  /* 10106697 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010669a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010669c je 0x101066ac */
  if (C.zf) goto L_101066ac;
  /* 1010669e push 0x1010f16c */
  push32((uint32_t)(0x1010f16cu));
  /* 101066a3 call 0x10102760 */
  push32(0x101066a8u); f_10102760();
  /* 101066a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101066ab ret  */
  ESPCHK(0x10106670u, _esp0);
  ESP += 4; return;
L_101066ac:;
  /* 101066ac mov eax, dword ptr [0x10116088] */
  EAX = (r32((uint32_t)(0x10116088)));
  /* 101066b1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101066b4 je 0x10106712 */
  if (C.zf) goto L_10106712;
  /* 101066b6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101066b9 je 0x10106712 */
  if (C.zf) goto L_10106712;
  /* 101066bb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101066be je 0x10106712 */
  if (C.zf) goto L_10106712;
  /* 101066c0 push 0x101163a0 */
  push32((uint32_t)(0x101163a0u));
  /* 101066c5 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x101066cbu);
  /* 101066cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101066ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101066d0 je 0x101066f2 */
  if (C.zf) goto L_101066f2;
  /* 101066d2 push 0x10116280 */
  push32((uint32_t)(0x10116280u));
  /* 101066d7 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x101066ddu);
  /* 101066dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101066e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101066e2 jne 0x101066f2 */
  if (!C.zf) goto L_101066f2;
  /* 101066e4 push 0x101166c8 */
  push32((uint32_t)(0x101166c8u));
  /* 101066e9 call 0x10102760 */
  push32(0x101066eeu); f_10102760();
  /* 101066ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101066f1 ret  */
  ESPCHK(0x10106670u, _esp0);
  ESP += 4; return;
L_101066f2:;
  /* 101066f2 push 0x10116280 */
  push32((uint32_t)(0x10116280u));
  /* 101066f7 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x101066fdu);
  /* 101066fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106700 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10106702 je 0x1010671d */
  if (C.zf) goto L_1010671d;
  /* 10106704 push 0x1010f1d8 */
  push32((uint32_t)(0x1010f1d8u));
  /* 10106709 call 0x10102760 */
  push32(0x1010670eu); f_10102760();
  /* 1010670e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106711 ret  */
  ESPCHK(0x10106670u, _esp0);
  ESP += 4; return;
L_10106712:;
  /* 10106712 push 0x1010f1d8 */
  push32((uint32_t)(0x1010f1d8u));
  /* 10106717 call 0x10102760 */
  push32(0x1010671cu); f_10102760();
  /* 1010671c pop ecx */
  ECX = (pop32());
L_1010671d:;
  /* 1010671d ret  */
  ESPCHK(0x10106670u, _esp0);
  ESP += 4; return;
}

/* FUN_10006720 @ 0x10106720 (70 bytes, 22 insns) */
void f_10106720(void) {
  FTRACE(0x10106720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106720 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106722 call 0x101027a0 */
  push32(0x10106727u); f_101027a0();
  /* 10106727 push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 1010672c call 0x101052b0 */
  push32(0x10106731u); f_101052b0();
  /* 10106731 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106734 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106736 je 0x10106742 */
  if (C.zf) goto L_10106742;
  /* 10106738 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010673a call 0x101027a0 */
  push32(0x1010673fu); f_101027a0();
  /* 1010673f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106742:;
  /* 10106742 call 0x101027b0 */
  push32(0x10106747u); f_101027b0();
  /* 10106747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106749 jg 0x1010675d */
  if ((!C.zf&&C.sf==C.of)) goto L_1010675d;
  /* 1010674b push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 10106750 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10106756u);
  /* 10106756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010675b jle 0x10106765 */
  if ((C.zf||C.sf!=C.of)) goto L_10106765;
L_1010675d:;
  /* 1010675d push 0 */
  push32((uint32_t)(0x0u));
  /* 1010675f call 0x101027a0 */
  push32(0x10106764u); f_101027a0();
  /* 10106764 pop ecx */
  ECX = (pop32());
L_10106765:;
  /* 10106765 ret  */
  ESPCHK(0x10106720u, _esp0);
  ESP += 4; return;
}

/* FUN_10006770 @ 0x10106770 (235 bytes, 66 insns) */
void f_10106770(void) {
  FTRACE(0x10106770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106770 push 0x101162c8 */
  push32((uint32_t)(0x101162c8u));
  /* 10106775 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x1010677bu);
  /* 1010677b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010677e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10106780 je 0x10106796 */
  if (C.zf) goto L_10106796;
  /* 10106782 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10106784 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10106786 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10106788 push 0x101164a0 */
  push32((uint32_t)(0x101164a0u));
  /* 1010678d call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106793u);
  /* 10106793 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106796:;
  /* 10106796 push 0x101161e0 */
  push32((uint32_t)(0x101161e0u));
  /* 1010679b call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x101067a1u);
  /* 101067a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101067a4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101067a6 je 0x101067bc */
  if (C.zf) goto L_101067bc;
  /* 101067a8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101067aa push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101067ac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101067ae push 0x10113798 */
  push32((uint32_t)(0x10113798u));
  /* 101067b3 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101067b9u);
  /* 101067b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101067bc:;
  /* 101067bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101067be push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101067c0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101067c2 push 0x101139f8 */
  push32((uint32_t)(0x101139f8u));
  /* 101067c7 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101067cdu);
  /* 101067cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101067cf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101067d1 push 0x10116308 */
  push32((uint32_t)(0x10116308u));
  /* 101067d6 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101067dcu);
  /* 101067dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101067de push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101067e0 push 0x10116300 */
  push32((uint32_t)(0x10116300u));
  /* 101067e5 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101067ebu);
  /* 101067eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101067ed push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101067ef push 0x101162d0 */
  push32((uint32_t)(0x101162d0u));
  /* 101067f4 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x101067fau);
  /* 101067fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101067fc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101067fe push 0x101162c8 */
  push32((uint32_t)(0x101162c8u));
  /* 10106803 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10106809u);
  /* 10106809 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010680c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010680e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10106810 push 0x101162d8 */
  push32((uint32_t)(0x101162d8u));
  /* 10106815 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010681bu);
  /* 1010681b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010681d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1010681f push 0x101161c8 */
  push32((uint32_t)(0x101161c8u));
  /* 10106824 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010682au);
  /* 1010682a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010682c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1010682e push 0x101161d0 */
  push32((uint32_t)(0x101161d0u));
  /* 10106833 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10106839u);
  /* 10106839 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010683b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1010683d push 0x101161d8 */
  push32((uint32_t)(0x101161d8u));
  /* 10106842 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10106848u);
  /* 10106848 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010684a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1010684c push 0x101161e0 */
  push32((uint32_t)(0x101161e0u));
  /* 10106851 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x10106857u);
  /* 10106857 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010685a ret  */
  ESPCHK(0x10106770u, _esp0);
  ESP += 4; return;
}

/* FUN_10006860 @ 0x10106860 (303 bytes, 90 insns) */
void f_10106860(void) {
  FTRACE(0x10106860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106860 push ecx */
  push32((uint32_t)(ECX));
  /* 10106861 push ebx */
  push32((uint32_t)(EBX));
  /* 10106862 push ebp */
  push32((uint32_t)(EBP));
  /* 10106863 push esi */
  push32((uint32_t)(ESI));
  /* 10106864 push edi */
  push32((uint32_t)(EDI));
  /* 10106865 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 1010686a call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10106870u);
  /* 10106870 push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 10106875 mov ebx, eax */
  EBX = (EAX);
  /* 10106877 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x1010687du);
  /* 1010687d push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 10106882 mov edi, eax */
  EDI = (EAX);
  /* 10106884 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x1010688au);
  /* 1010688a push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 1010688f mov ebp, eax */
  EBP = (EAX);
  /* 10106891 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10106897u);
  /* 10106897 push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 1010689c mov esi, eax */
  ESI = (EAX);
  /* 1010689e call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x101068a4u);
  /* 101068a4 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 101068a9 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 101068ad call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101068b3u);
  /* 101068b3 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 101068b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101068ba sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101068bc add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101068be sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101068c0 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101068c2 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101068c4 pop edi */
  EDI = (pop32());
  /* 101068c5 pop esi */
  ESI = (pop32());
  /* 101068c6 pop ebp */
  EBP = (pop32());
  /* 101068c7 pop ebx */
  EBX = (pop32());
  /* 101068c8 jne 0x10106930 */
  if (!C.zf) goto L_10106930;
  /* 101068ca cmp dword ptr [0x101162e0], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x101162e0))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101068d1 jle 0x10106930 */
  if ((C.zf||C.sf!=C.of)) goto L_10106930;
  /* 101068d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101068d5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101068d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101068d9 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 101068de call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101068e4u);
  /* 101068e4 push 0x101162e8 */
  push32((uint32_t)(0x101162e8u));
  /* 101068e9 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x101068efu);
  /* 101068ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101068f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101068f4 je 0x1010690a */
  if (C.zf) goto L_1010690a;
  /* 101068f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101068f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101068fa push 6 */
  push32((uint32_t)(0x6u));
  /* 101068fc push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 10106901 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106907u);
  /* 10106907 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010690a:;
  /* 1010690a push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 1010690f call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10106915u);
  /* 10106915 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106918 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010691a je 0x10106930 */
  if (C.zf) goto L_10106930;
  /* 1010691c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010691e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10106920 push 8 */
  push32((uint32_t)(0x8u));
  /* 10106922 push 0x10113a08 */
  push32((uint32_t)(0x10113a08u));
  /* 10106927 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x1010692du);
  /* 1010692d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106930:;
  /* 10106930 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106932 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10106934 push 0x10116418 */
  push32((uint32_t)(0x10116418u));
  /* 10106939 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010693fu);
  /* 1010693f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106941 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10106943 push 0x10116400 */
  push32((uint32_t)(0x10116400u));
  /* 10106948 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010694eu);
  /* 1010694e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106950 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10106952 push 0x10116410 */
  push32((uint32_t)(0x10116410u));
  /* 10106957 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010695du);
  /* 1010695d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010695f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10106961 push 0x101163f0 */
  push32((uint32_t)(0x101163f0u));
  /* 10106966 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010696cu);
  /* 1010696c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010696e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10106970 push 0x101163f8 */
  push32((uint32_t)(0x101163f8u));
  /* 10106975 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010697bu);
  /* 1010697b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1010697d push 0xa */
  push32((uint32_t)(0xau));
  /* 1010697f push 0x101163e8 */
  push32((uint32_t)(0x101163e8u));
  /* 10106984 call dword ptr [0x10116638] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116638))), 0x1010698au);
  /* 1010698a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010698d pop ecx */
  ECX = (pop32());
  /* 1010698e ret  */
  ESPCHK(0x10106860u, _esp0);
  ESP += 4; return;
}

/* FUN_10006990 @ 0x10106990 (517 bytes, 145 insns) */
void f_10106990(void) {
  FTRACE(0x10106990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106990 push esi */
  push32((uint32_t)(ESI));
  /* 10106991 push 0x10116388 */
  push32((uint32_t)(0x10116388u));
  /* 10106996 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x1010699cu);
  /* 1010699c push 0x10116388 */
  push32((uint32_t)(0x10116388u));
  /* 101069a1 mov esi, eax */
  ESI = (EAX);
  /* 101069a3 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x101069a9u);
  /* 101069a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101069ac sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101069ae jne 0x101069c4 */
  if (!C.zf) goto L_101069c4;
  /* 101069b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101069b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101069b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101069b6 push 0x10116388 */
  push32((uint32_t)(0x10116388u));
  /* 101069bb call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101069c1u);
  /* 101069c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101069c4:;
  /* 101069c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101069c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101069c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101069ca push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 101069cf call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101069d5u);
  /* 101069d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101069d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101069d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101069db push 0x10116318 */
  push32((uint32_t)(0x10116318u));
  /* 101069e0 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101069e6u);
  /* 101069e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101069e8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101069ea push 2 */
  push32((uint32_t)(0x2u));
  /* 101069ec push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 101069f1 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x101069f7u);
  /* 101069f7 push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 101069fc call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10106a02u);
  /* 10106a02 push 0x10116380 */
  push32((uint32_t)(0x10116380u));
  /* 10106a07 mov esi, eax */
  ESI = (EAX);
  /* 10106a09 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10106a0fu);
  /* 10106a0f add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106a12 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10106a14 jne 0x10106b93 */
  if (!C.zf) goto L_10106b93;
  /* 10106a1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106a1c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106a1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10106a20 push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 10106a25 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106a2bu);
  /* 10106a2b push 0x10116050 */
  push32((uint32_t)(0x10116050u));
  /* 10106a30 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10106a36u);
  /* 10106a36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106a3b je 0x10106b93 */
  if (C.zf) goto L_10106b93;
  /* 10106a41 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106a43 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106a45 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106a47 push 0x10116100 */
  push32((uint32_t)(0x10116100u));
  /* 10106a4c call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106a52u);
  /* 10106a52 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106a54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106a56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106a58 push 0x10116108 */
  push32((uint32_t)(0x10116108u));
  /* 10106a5d call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106a63u);
  /* 10106a63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106a65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106a67 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106a69 push 0x101139a8 */
  push32((uint32_t)(0x101139a8u));
  /* 10106a6e call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106a74u);
  /* 10106a74 push 0x101139a8 */
  push32((uint32_t)(0x101139a8u));
  /* 10106a79 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10106a7fu);
  /* 10106a7f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106a84 je 0x10106b93 */
  if (C.zf) goto L_10106b93;
  /* 10106a8a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106a8c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106a8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10106a90 push 0x10116118 */
  push32((uint32_t)(0x10116118u));
  /* 10106a95 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106a9bu);
  /* 10106a9b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106a9d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106a9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10106aa1 push 0x10116228 */
  push32((uint32_t)(0x10116228u));
  /* 10106aa6 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106aacu);
  /* 10106aac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106aae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106ab2 push 0x10113748 */
  push32((uint32_t)(0x10113748u));
  /* 10106ab7 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106abdu);
  /* 10106abd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106abf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106ac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106ac3 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10106ac8 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106aceu);
  /* 10106ace add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106ad1 push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 10106ad6 call dword ptr [0x10116680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116680))), 0x10106adcu);
  /* 10106adc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106adf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10106ae1 je 0x10106b93 */
  if (C.zf) goto L_10106b93;
  /* 10106ae7 push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 10106aec call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10106af2u);
  /* 10106af2 push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 10106af7 mov esi, eax */
  ESI = (EAX);
  /* 10106af9 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10106affu);
  /* 10106aff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106b02 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10106b04 jne 0x10106b2d */
  if (!C.zf) goto L_10106b2d;
  /* 10106b06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106b08 call 0x10102770 */
  push32(0x10106b0du); f_10102770();
  /* 10106b0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106b10 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10106b13 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106b15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106b17 jge 0x10106b1d */
  if ((C.sf==C.of)) goto L_10106b1d;
  /* 10106b19 push 6 */
  push32((uint32_t)(0x6u));
  /* 10106b1b jmp 0x10106b1f */
  goto L_10106b1f;
L_10106b1d:;
  /* 10106b1d push 4 */
  push32((uint32_t)(0x4u));
L_10106b1f:;
  /* 10106b1f push 0x101160e8 */
  push32((uint32_t)(0x101160e8u));
  /* 10106b24 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106b2au);
  /* 10106b2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106b2d:;
  /* 10106b2d push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10106b32 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10106b38u);
  /* 10106b38 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10106b3d mov esi, eax */
  ESI = (EAX);
  /* 10106b3f call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10106b45u);
  /* 10106b45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106b48 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10106b4a jne 0x10106b60 */
  if (!C.zf) goto L_10106b60;
  /* 10106b4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106b4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106b50 push 7 */
  push32((uint32_t)(0x7u));
  /* 10106b52 push 0x10116208 */
  push32((uint32_t)(0x10116208u));
  /* 10106b57 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106b5du);
  /* 10106b5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106b60:;
  /* 10106b60 push 0x10113748 */
  push32((uint32_t)(0x10113748u));
  /* 10106b65 call dword ptr [0x10116674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116674))), 0x10106b6bu);
  /* 10106b6b push 0x10113748 */
  push32((uint32_t)(0x10113748u));
  /* 10106b70 mov esi, eax */
  ESI = (EAX);
  /* 10106b72 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10106b78u);
  /* 10106b78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106b7b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10106b7d jne 0x10106b93 */
  if (!C.zf) goto L_10106b93;
  /* 10106b7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106b81 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106b83 push 3 */
  push32((uint32_t)(0x3u));
  /* 10106b85 push 0x10113748 */
  push32((uint32_t)(0x10113748u));
  /* 10106b8a call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106b90u);
  /* 10106b90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106b93:;
  /* 10106b93 pop esi */
  ESI = (pop32());
  /* 10106b94 ret  */
  ESPCHK(0x10106990u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x10106ba0 (121 bytes, 36 insns) */
void f_10106ba0(void) {
  FTRACE(0x10106ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106ba0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106ba2 call 0x101027a0 */
  push32(0x10106ba7u); f_101027a0();
  /* 10106ba7 push 0x101139b8 */
  push32((uint32_t)(0x101139b8u));
  /* 10106bac call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10106bb2u);
  /* 10106bb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106bb5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10106bb8 jge 0x10106bcd */
  if ((C.sf==C.of)) goto L_10106bcd;
  /* 10106bba mov eax, dword ptr [0x101163e4] */
  EAX = (r32((uint32_t)(0x101163e4)));
  /* 10106bbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10106bc1 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10106bc4 push eax */
  push32((uint32_t)(EAX));
  /* 10106bc5 call 0x10102710 */
  push32(0x10106bcau); f_10102710();
  /* 10106bca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106bcd:;
  /* 10106bcd push 0x101139b8 */
  push32((uint32_t)(0x101139b8u));
  /* 10106bd2 call dword ptr [0x10116670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116670))), 0x10106bd8u);
  /* 10106bd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106bdb cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10106bde jle 0x10106bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10106bf4;
  /* 10106be0 mov ecx, dword ptr [0x101163e4] */
  ECX = (r32((uint32_t)(0x101163e4)));
  /* 10106be6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10106be8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10106beb push ecx */
  push32((uint32_t)(ECX));
  /* 10106bec call 0x10102710 */
  push32(0x10106bf1u); f_10102710();
  /* 10106bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106bf4:;
  /* 10106bf4 mov edx, dword ptr [0x101163e4] */
  EDX = (r32((uint32_t)(0x101163e4)));
  /* 10106bfa add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10106bfd push edx */
  push32((uint32_t)(EDX));
  /* 10106bfe call 0x10102730 */
  push32(0x10106c03u); f_10102730();
  /* 10106c03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106c05 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10106c08 push eax */
  push32((uint32_t)(EAX));
  /* 10106c09 call 0x101027a0 */
  push32(0x10106c0eu); f_101027a0();
  /* 10106c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10106c10 call 0x101027a0 */
  push32(0x10106c15u); f_101027a0();
  /* 10106c15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106c18 ret  */
  ESPCHK(0x10106ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c20 @ 0x10106c20 (86 bytes, 20 insns) */
void f_10106c20(void) {
  FTRACE(0x10106c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106c20 mov eax, dword ptr [0x101163e4] */
  EAX = (r32((uint32_t)(0x101163e4)));
  /* 10106c25 mov ecx, dword ptr [eax*4 + 0x101160c8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x101160c8)));
  /* 10106c2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10106c2e je 0x10106c35 */
  if (C.zf) goto L_10106c35;
  /* 10106c30 call 0x10106720 */
  push32(0x10106c35u); f_10106720();
L_10106c35:;
  /* 10106c35 call 0x10105e30 */
  push32(0x10106c3au); f_10105e30();
  /* 10106c3a call 0x10106770 */
  push32(0x10106c3fu); f_10106770();
  /* 10106c3f call 0x101027c0 */
  push32(0x10106c44u); f_101027c0();
  /* 10106c44 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10106c47 jge 0x10106c4e */
  if ((C.sf==C.of)) goto L_10106c4e;
  /* 10106c49 call 0x10106860 */
  push32(0x10106c4eu); f_10106860();
L_10106c4e:;
  /* 10106c4e call 0x10105c10 */
  push32(0x10106c53u); f_10105c10();
  /* 10106c53 call 0x10105ad0 */
  push32(0x10106c58u); f_10105ad0();
  /* 10106c58 call 0x101027c0 */
  push32(0x10106c5du); f_101027c0();
  /* 10106c5d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10106c60 jge 0x10106c67 */
  if ((C.sf==C.of)) goto L_10106c67;
  /* 10106c62 call 0x101052f0 */
  push32(0x10106c67u); f_101052f0();
L_10106c67:;
  /* 10106c67 call 0x10106010 */
  push32(0x10106c6cu); f_10106010();
  /* 10106c6c call 0x10106330 */
  push32(0x10106c71u); f_10106330();
  /* 10106c71 jmp 0x10106670 */
  f_10106670(); return;
}

/* FUN_10006c80 @ 0x10106c80 (247 bytes, 70 insns) */
void f_10106c80(void) {
  FTRACE(0x10106c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106c80 push esi */
  push32((uint32_t)(ESI));
  /* 10106c81 push edi */
  push32((uint32_t)(EDI));
  /* 10106c82 call 0x10106ba0 */
  push32(0x10106c87u); f_10106ba0();
  /* 10106c87 call 0x10106990 */
  push32(0x10106c8cu); f_10106990();
  /* 10106c8c mov edi, 2 */
  EDI = (0x2u);
L_10106c91:;
  /* 10106c91 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106c93 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10106c95 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10106c9a push 0x101162c0 */
  push32((uint32_t)(0x101162c0u));
  /* 10106c9f call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106ca5u);
  /* 10106ca5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106ca7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10106ca9 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10106cae push 0x101137b8 */
  push32((uint32_t)(0x101137b8u));
  /* 10106cb3 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106cb9u);
  /* 10106cb9 mov eax, dword ptr [0x101163e4] */
  EAX = (r32((uint32_t)(0x101163e4)));
  /* 10106cbe add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10106cc1 push eax */
  push32((uint32_t)(EAX));
  /* 10106cc2 call 0x10102730 */
  push32(0x10106cc7u); f_10102730();
  /* 10106cc7 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106cca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106ccc jne 0x10106cec */
  if (!C.zf) goto L_10106cec;
  /* 10106cce mov esi, 0x64 */
  ESI = (0x64u);
L_10106cd3:;
  /* 10106cd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106cd5 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10106cd7 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10106cd9 push 0x101139b8 */
  push32((uint32_t)(0x101139b8u));
  /* 10106cde call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106ce4u);
  /* 10106ce4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106ce7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10106ce8 jne 0x10106cd3 */
  if (!C.zf) goto L_10106cd3;
  /* 10106cea jmp 0x10106d00 */
  goto L_10106d00;
L_10106cec:;
  /* 10106cec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106cee push 0xa */
  push32((uint32_t)(0xau));
  /* 10106cf0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10106cf2 push 0x10116290 */
  push32((uint32_t)(0x10116290u));
  /* 10106cf7 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106cfdu);
  /* 10106cfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106d00:;
  /* 10106d00 push 0x10116150 */
  push32((uint32_t)(0x10116150u));
  /* 10106d05 call dword ptr [0x1011667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011667c))), 0x10106d0bu);
  /* 10106d0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106d0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10106d10 jne 0x10106d29 */
  if (!C.zf) goto L_10106d29;
  /* 10106d12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106d14 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10106d16 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10106d1b push 0x101137c0 */
  push32((uint32_t)(0x101137c0u));
  /* 10106d20 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106d26u);
  /* 10106d26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10106d29:;
  /* 10106d29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106d2b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10106d2d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10106d32 push 0x101137b0 */
  push32((uint32_t)(0x101137b0u));
  /* 10106d37 call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106d3du);
  /* 10106d3d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10106d3f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10106d41 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10106d46 push 0x101160b0 */
  push32((uint32_t)(0x101160b0u));
  /* 10106d4b call dword ptr [0x10116634] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116634))), 0x10106d51u);
  /* 10106d51 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106d54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10106d55 jne 0x10106c91 */
  if (!C.zf) goto L_10106c91;
  /* 10106d5b call 0x10106770 */
  push32(0x10106d60u); f_10106770();
  /* 10106d60 call 0x10106010 */
  push32(0x10106d65u); f_10106010();
  /* 10106d65 call 0x10106330 */
  push32(0x10106d6au); f_10106330();
  /* 10106d6a call 0x101052f0 */
  push32(0x10106d6fu); f_101052f0();
  /* 10106d6f call 0x10105ad0 */
  push32(0x10106d74u); f_10105ad0();
  /* 10106d74 pop edi */
  EDI = (pop32());
  /* 10106d75 pop esi */
  ESI = (pop32());
  /* 10106d76 ret  */
  ESPCHK(0x10106c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d80 @ 0x10106d80 (279 bytes, 62 insns) [1 switch table(s)] */
void f_10106d80(void) {
  FTRACE(0x10106d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106d80 call 0x101026c0 */
  push32(0x10106d85u); f_101026c0();
  /* 10106d85 mov dword ptr [0x10116088], eax */
  w32((uint32_t)(0x10116088), (EAX));
  /* 10106d8a call 0x101026a0 */
  push32(0x10106d8fu); f_101026a0();
  /* 10106d8f mov dword ptr [0x10116498], eax */
  w32((uint32_t)(0x10116498), (EAX));
  /* 10106d94 call 0x101026b0 */
  push32(0x10106d99u); f_101026b0();
  /* 10106d99 mov dword ptr [0x101139c8], eax */
  w32((uint32_t)(0x101139c8), (EAX));
  /* 10106d9e call 0x10103080 */
  push32(0x10106da3u); f_10103080();
  /* 10106da3 push 0x1010f114 */
  push32((uint32_t)(0x1010f114u));
  /* 10106da8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10106daa call dword ptr [0x1011663c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011663c))), 0x10106db0u);
  /* 10106db0 call 0x10106670 */
  push32(0x10106db5u); f_10106670();
  /* 10106db5 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10106db7 push 0x1010f244 */
  push32((uint32_t)(0x1010f244u));
  /* 10106dbc call 0x10102740 */
  push32(0x10106dc1u); f_10102740();
  /* 10106dc1 mov eax, dword ptr [0x10116088] */
  EAX = (r32((uint32_t)(0x10116088)));
  /* 10106dc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106dc9 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10106dcc ja 0x10106e92 */
  if ((!C.cf&&!C.zf)) goto L_10106e92;
  /* 10106dd2 jmp dword ptr [eax*4 + 0x10106e98] */
  switch (EAX) {
    case 0: goto L_10106dd9;
    case 1: goto L_10106e55;
    case 2: goto L_10106e5c;
    case 3: goto L_10106e5c;
    case 4: goto L_10106e5c;
    case 5: goto L_10106dd9;
    default: x86_unimpl("switch@0x10106dd2 out of table"); return;
  }
L_10106dd9:;
  /* 10106dd9 cmp dword ptr [0x101139c8], 3 */
  { uint32_t _a=(r32((uint32_t)(0x101139c8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10106de0 jne 0x10106e12 */
  if (!C.zf) goto L_10106e12;
  /* 10106de2 push 0x1010f160 */
  push32((uint32_t)(0x1010f160u));
  /* 10106de7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10106de9 call dword ptr [0x1011663c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011663c))), 0x10106defu);
  /* 10106def push 0x1010f16c */
  push32((uint32_t)(0x1010f16cu));
  /* 10106df4 call 0x10102760 */
  push32(0x10106df9u); f_10102760();
  /* 10106df9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10106dfb push 0x1010f41c */
  push32((uint32_t)(0x1010f41cu));
  /* 10106e00 call 0x10102740 */
  push32(0x10106e05u); f_10102740();
  /* 10106e05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106e08 call 0x10106c80 */
  push32(0x10106e0du); f_10106c80();
  /* 10106e0d jmp 0x10106e92 */
  goto L_10106e92;
L_10106e12:;
  /* 10106e12 push 0x1010f114 */
  push32((uint32_t)(0x1010f114u));
  /* 10106e17 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10106e19 call dword ptr [0x1011663c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011663c))), 0x10106e1fu);
  /* 10106e1f push 0x101166c8 */
  push32((uint32_t)(0x101166c8u));
  /* 10106e24 call 0x10102760 */
  push32(0x10106e29u); f_10102760();
  /* 10106e29 mov eax, dword ptr [0x101139c8] */
  EAX = (r32((uint32_t)(0x101139c8)));
  /* 10106e2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106e31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106e33 jne 0x10106e3f */
  if (!C.zf) goto L_10106e3f;
  /* 10106e35 mov dword ptr [0x1010f248], 4 */
  w32((uint32_t)(0x1010f248), (0x4u));
L_10106e3f:;
  /* 10106e3f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10106e41 push 0x1010f244 */
  push32((uint32_t)(0x1010f244u));
  /* 10106e46 call 0x10102740 */
  push32(0x10106e4bu); f_10102740();
  /* 10106e4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106e4e call 0x10106c20 */
  push32(0x10106e53u); f_10106c20();
  /* 10106e53 jmp 0x10106e92 */
  goto L_10106e92;
L_10106e55:;
  /* 10106e55 call 0x10104420 */
  push32(0x10106e5au); f_10104420();
  /* 10106e5a jmp 0x10106e92 */
  goto L_10106e92;
L_10106e5c:;
  /* 10106e5c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10106e61 call dword ptr [0x10116658] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116658))), 0x10106e67u);
  /* 10106e67 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10106e6c call dword ptr [0x1011665c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011665c))), 0x10106e72u);
  /* 10106e72 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10106e77 call dword ptr [0x10116660] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116660))), 0x10106e7du);
  /* 10106e7d push 0x1010f07c */
  push32((uint32_t)(0x1010f07cu));
  /* 10106e82 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10106e84 call dword ptr [0x1011663c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1011663c))), 0x10106e8au);
  /* 10106e8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106e8d call 0x101033a0 */
  push32(0x10106e92u); f_101033a0();
L_10106e92:;
  /* 10106e92 jmp 0x10103200 */
  f_10103200(); return;
}

/* FUN_10006eb0 @ 0x10106eb0 (82 bytes, 32 insns) */
void f_10106eb0(void) {
  FTRACE(0x10106eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10106eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10106eb3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10106eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10106eb9 push esi */
  push32((uint32_t)(ESI));
  /* 10106eba mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10106ebd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10106ec0 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10106ec3 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 10106eca push eax */
  push32((uint32_t)(EAX));
  /* 10106ecb lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10106ece push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10106ed1 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 10106ed8 push eax */
  push32((uint32_t)(EAX));
  /* 10106ed9 call 0x1010723c */
  push32(0x10106edeu); f_1010723c();
  /* 10106ede add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106ee1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 10106ee4 mov esi, eax */
  ESI = (EAX);
  /* 10106ee6 js 0x10106ef0 */
  if (C.sf) goto L_10106ef0;
  /* 10106ee8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10106eeb and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10106eee jmp 0x10106efd */
  goto L_10106efd;
L_10106ef0:;
  /* 10106ef0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10106ef3 push eax */
  push32((uint32_t)(EAX));
  /* 10106ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10106ef6 call 0x10107124 */
  push32(0x10106efbu); f_10107124();
  /* 10106efb pop ecx */
  ECX = (pop32());
  /* 10106efc pop ecx */
  ECX = (pop32());
L_10106efd:;
  /* 10106efd mov eax, esi */
  EAX = (ESI);
  /* 10106eff pop esi */
  ESI = (pop32());
  /* 10106f00 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10106f01 ret  */
  ESPCHK(0x10106eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f02 @ 0x10106f02 (23 bytes, 6 insns) */
void f_10106f02(void) {
  FTRACE(0x10106f02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106f02 call 0x10106f1a */
  push32(0x10106f07u); f_10106f1a();
  /* 10106f07 call 0x10107a96 */
  push32(0x10106f0cu); f_10107a96();
  /* 10106f0c mov dword ptr [0x10116790], eax */
  w32((uint32_t)(0x10116790), (EAX));
  /* 10106f11 call 0x10107a46 */
  push32(0x10106f16u); f_10107a46();
  /* 10106f16 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10106f18 ret  */
  ESPCHK(0x10106f02u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f1a @ 0x10106f1a (56 bytes, 8 insns) */
void f_10106f1a(void) {
  FTRACE(0x10106f1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106f1a mov eax, 0x10107e6f */
  EAX = (0x10107e6fu);
  /* 10106f1f mov dword ptr [0x101107c4], 0x10107b19 */
  w32((uint32_t)(0x101107c4), (0x10107b19u));
  /* 10106f29 mov dword ptr [0x101107c0], eax */
  w32((uint32_t)(0x101107c0), (EAX));
  /* 10106f2e mov dword ptr [0x101107c8], 0x10107b7f */
  w32((uint32_t)(0x101107c8), (0x10107b7fu));
  /* 10106f38 mov dword ptr [0x101107cc], 0x10107abf */
  w32((uint32_t)(0x101107cc), (0x10107abfu));
  /* 10106f42 mov dword ptr [0x101107d0], 0x10107b67 */
  w32((uint32_t)(0x101107d0), (0x10107b67u));
  /* 10106f4c mov dword ptr [0x101107d4], eax */
  w32((uint32_t)(0x101107d4), (EAX));
  /* 10106f51 ret  */
  ESPCHK(0x10106f1au, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10106f54 (39 bytes, 16 insns) */
void f_10106f54(void) {
  FTRACE(0x10106f54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106f54 push ebp */
  push32((uint32_t)(EBP));
  /* 10106f55 mov ebp, esp */
  EBP = (ESP);
  /* 10106f57 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10106f5a wait  */
  /* wait (no observable integer/reg state) */
  /* 10106f5b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10106f5e wait  */
  /* wait (no observable integer/reg state) */
  /* 10106f5f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10106f63 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10106f66 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10106f6a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10106f6d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10106f70 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10106f73 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10106f76 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10106f79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10106f7a ret  */
  ESPCHK(0x10106f54u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f7b @ 0x10106f7b (217 bytes, 57 insns) */
void f_10106f7b(void) {
  FTRACE(0x10106f7bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10106f7b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10106f7f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10106f82 jne 0x10107010 */
  if (!C.zf) goto L_10107010;
  /* 10106f88 call dword ptr [0x1010e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e014))), 0x10106f8eu);
  /* 10106f8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10106f90 mov dword ptr [0x101167ac], eax */
  w32((uint32_t)(0x101167ac), (EAX));
  /* 10106f95 call 0x1010894c */
  push32(0x10106f9au); f_1010894c();
  /* 10106f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106f9c pop ecx */
  ECX = (pop32());
  /* 10106f9d je 0x10106fdb */
  if (C.zf) goto L_10106fdb;
  /* 10106f9f mov eax, dword ptr [0x101167ac] */
  EAX = (r32((uint32_t)(0x101167ac)));
  /* 10106fa4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10106fa6 mov cl, byte ptr [0x101167ad] */
  CL = (r8((uint32_t)(0x101167ad)));
  /* 10106fac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10106fb1 shr dword ptr [0x101167ac], 0x10 */
  w32((uint32_t)(0x101167ac), (sh_shr((uint32_t)(r32((uint32_t)(0x101167ac))), (0x10u)&0x1f, 32)));
  /* 10106fb8 mov dword ptr [0x101167b4], eax */
  w32((uint32_t)(0x101167b4), (EAX));
  /* 10106fbd mov dword ptr [0x101167b8], ecx */
  w32((uint32_t)(0x101167b8), (ECX));
  /* 10106fc3 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10106fc6 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10106fc8 mov dword ptr [0x101167b0], eax */
  w32((uint32_t)(0x101167b0), (EAX));
  /* 10106fcd call 0x10108003 */
  push32(0x10106fd2u); f_10108003();
  /* 10106fd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10106fd4 jne 0x10106fdf */
  if (!C.zf) goto L_10106fdf;
  /* 10106fd6 call 0x101089a9 */
  push32(0x10106fdbu); f_101089a9();
L_10106fdb:;
  /* 10106fdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10106fdd jmp 0x10107051 */
  goto L_10107051;
L_10106fdf:;
  /* 10106fdf call dword ptr [0x1010e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e010))), 0x10106fe5u);
  /* 10106fe5 mov dword ptr [0x10117e94], eax */
  w32((uint32_t)(0x10117e94), (EAX));
  /* 10106fea call 0x101086a5 */
  push32(0x10106fefu); f_101086a5();
  /* 10106fef mov dword ptr [0x10116798], eax */
  w32((uint32_t)(0x10116798), (EAX));
  /* 10106ff4 call 0x1010818f */
  push32(0x10106ff9u); f_1010818f();
  /* 10106ff9 call 0x10108458 */
  push32(0x10106ffeu); f_10108458();
  /* 10106ffe call 0x1010839f */
  push32(0x10107003u); f_1010839f();
  /* 10107003 call 0x10107ee5 */
  push32(0x10107008u); f_10107ee5();
  /* 10107008 inc dword ptr [0x10116794] */
  { uint32_t _r=(r32((uint32_t)(0x10116794)))+1; w32((uint32_t)(0x10116794), (_r)); fl_inc(_r,32); }
  /* 1010700e jmp 0x1010704e */
  goto L_1010704e;
L_10107010:;
  /* 10107010 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10107012 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107014 jne 0x10107042 */
  if (!C.zf) goto L_10107042;
  /* 10107016 cmp dword ptr [0x10116794], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10116794))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010701c jle 0x10106fdb */
  if ((C.zf||C.sf!=C.of)) goto L_10106fdb;
  /* 1010701e dec dword ptr [0x10116794] */
  { uint32_t _r=(r32((uint32_t)(0x10116794)))-1; w32((uint32_t)(0x10116794), (_r)); fl_dec(_r,32); }
  /* 10107024 cmp dword ptr [0x101167e4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x101167e4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010702a jne 0x10107031 */
  if (!C.zf) goto L_10107031;
  /* 1010702c call 0x10107f23 */
  push32(0x10107031u); f_10107f23();
L_10107031:;
  /* 10107031 call 0x1010834b */
  push32(0x10107036u); f_1010834b();
  /* 10107036 call 0x10108057 */
  push32(0x1010703bu); f_10108057();
  /* 1010703b call 0x101089a9 */
  push32(0x10107040u); f_101089a9();
  /* 10107040 jmp 0x1010704e */
  goto L_1010704e;
L_10107042:;
  /* 10107042 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107045 jne 0x1010704e */
  if (!C.zf) goto L_1010704e;
  /* 10107047 push ecx */
  push32((uint32_t)(ECX));
  /* 10107048 call 0x101080ef */
  push32(0x1010704du); f_101080ef();
  /* 1010704d pop ecx */
  ECX = (pop32());
L_1010704e:;
  /* 1010704e push 1 */
  push32((uint32_t)(0x1u));
  /* 10107050 pop eax */
  EAX = (pop32());
L_10107051:;
  /* 10107051 ret 0xc */
  ESPCHK(0x10106f7bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10107054 (157 bytes, 73 insns) */
void f_10107054(void) {
  FTRACE(0x10107054u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107054 push ebp */
  push32((uint32_t)(EBP));
  /* 10107055 mov ebp, esp */
  EBP = (ESP);
  /* 10107057 push ebx */
  push32((uint32_t)(EBX));
  /* 10107058 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010705b push esi */
  push32((uint32_t)(ESI));
  /* 1010705c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1010705f push edi */
  push32((uint32_t)(EDI));
  /* 10107060 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10107063 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10107065 jne 0x10107070 */
  if (!C.zf) goto L_10107070;
  /* 10107067 cmp dword ptr [0x10116794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10116794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010706e jmp 0x10107096 */
  goto L_10107096;
L_10107070:;
  /* 10107070 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107073 je 0x1010707a */
  if (C.zf) goto L_1010707a;
  /* 10107075 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107078 jne 0x1010709c */
  if (!C.zf) goto L_1010709c;
L_1010707a:;
  /* 1010707a mov eax, dword ptr [0x10117e98] */
  EAX = (r32((uint32_t)(0x10117e98)));
  /* 1010707f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107081 je 0x1010708c */
  if (C.zf) goto L_1010708c;
  /* 10107083 push edi */
  push32((uint32_t)(EDI));
  /* 10107084 push esi */
  push32((uint32_t)(ESI));
  /* 10107085 push ebx */
  push32((uint32_t)(EBX));
  /* 10107086 call eax */
  call_ind((uint32_t)(EAX), 0x10107088u);
  /* 10107088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010708a je 0x10107098 */
  if (C.zf) goto L_10107098;
L_1010708c:;
  /* 1010708c push edi */
  push32((uint32_t)(EDI));
  /* 1010708d push esi */
  push32((uint32_t)(ESI));
  /* 1010708e push ebx */
  push32((uint32_t)(EBX));
  /* 1010708f call 0x10106f7b */
  push32(0x10107094u); f_10106f7b();
  /* 10107094 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10107096:;
  /* 10107096 jne 0x1010709c */
  if (!C.zf) goto L_1010709c;
L_10107098:;
  /* 10107098 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010709a jmp 0x101070ea */
  goto L_101070ea;
L_1010709c:;
  /* 1010709c push edi */
  push32((uint32_t)(EDI));
  /* 1010709d push esi */
  push32((uint32_t)(ESI));
  /* 1010709e push ebx */
  push32((uint32_t)(EBX));
  /* 1010709f call 0x10102830 */
  push32(0x101070a4u); f_10102830();
  /* 101070a4 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101070a7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101070aa jne 0x101070b8 */
  if (!C.zf) goto L_101070b8;
  /* 101070ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101070ae jne 0x101070e7 */
  if (!C.zf) goto L_101070e7;
  /* 101070b0 push edi */
  push32((uint32_t)(EDI));
  /* 101070b1 push eax */
  push32((uint32_t)(EAX));
  /* 101070b2 push ebx */
  push32((uint32_t)(EBX));
  /* 101070b3 call 0x10106f7b */
  push32(0x101070b8u); f_10106f7b();
L_101070b8:;
  /* 101070b8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101070ba je 0x101070c1 */
  if (C.zf) goto L_101070c1;
  /* 101070bc cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101070bf jne 0x101070e7 */
  if (!C.zf) goto L_101070e7;
L_101070c1:;
  /* 101070c1 push edi */
  push32((uint32_t)(EDI));
  /* 101070c2 push esi */
  push32((uint32_t)(ESI));
  /* 101070c3 push ebx */
  push32((uint32_t)(EBX));
  /* 101070c4 call 0x10106f7b */
  push32(0x101070c9u); f_10106f7b();
  /* 101070c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101070cb jne 0x101070d0 */
  if (!C.zf) goto L_101070d0;
  /* 101070cd and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_101070d0:;
  /* 101070d0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101070d4 je 0x101070e7 */
  if (C.zf) goto L_101070e7;
  /* 101070d6 mov eax, dword ptr [0x10117e98] */
  EAX = (r32((uint32_t)(0x10117e98)));
  /* 101070db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101070dd je 0x101070e7 */
  if (C.zf) goto L_101070e7;
  /* 101070df push edi */
  push32((uint32_t)(EDI));
  /* 101070e0 push esi */
  push32((uint32_t)(ESI));
  /* 101070e1 push ebx */
  push32((uint32_t)(EBX));
  /* 101070e2 call eax */
  call_ind((uint32_t)(EAX), 0x101070e4u);
  /* 101070e4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101070e7:;
  /* 101070e7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_101070ea:;
  /* 101070ea pop edi */
  EDI = (pop32());
  /* 101070eb pop esi */
  ESI = (pop32());
  /* 101070ec pop ebx */
  EBX = (pop32());
  /* 101070ed pop ebp */
  EBP = (pop32());
  /* 101070ee ret 0xc */
  ESPCHK(0x10107054u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x101070f1 (48 bytes, 15 insns) */
void f_101070f1(void) {
  FTRACE(0x101070f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101070f1 mov eax, dword ptr [0x101167a0] */
  EAX = (r32((uint32_t)(0x101167a0)));
  /* 101070f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101070f9 je 0x10107108 */
  if (C.zf) goto L_10107108;
  /* 101070fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101070fd jne 0x1010710d */
  if (!C.zf) goto L_1010710d;
  /* 101070ff cmp dword ptr [0x101167a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101167a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107106 jne 0x1010710d */
  if (!C.zf) goto L_1010710d;
L_10107108:;
  /* 10107108 call 0x10108a51 */
  push32(0x1010710du); f_10108a51();
L_1010710d:;
  /* 1010710d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10107111 call 0x10108a8a */
  push32(0x10107116u); f_10108a8a();
  /* 10107116 push 0xff */
  push32((uint32_t)(0xffu));
  /* 1010711b call dword ptr [0x101107b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101107b4))), 0x10107121u);
  /* 10107121 pop ecx */
  ECX = (pop32());
  /* 10107122 pop ecx */
  ECX = (pop32());
  /* 10107123 ret  */
  ESPCHK(0x101070f1u, _esp0);
  ESP += 4; return;
}

/* FUN_10007124 @ 0x10107124 (280 bytes, 106 insns) */
void f_10107124(void) {
  FTRACE(0x10107124u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107124 push ebp */
  push32((uint32_t)(EBP));
  /* 10107125 mov ebp, esp */
  EBP = (ESP);
  /* 10107127 push ebx */
  push32((uint32_t)(EBX));
  /* 10107128 push esi */
  push32((uint32_t)(ESI));
  /* 10107129 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1010712c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1010712f mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 10107132 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 10107134 je 0x10107230 */
  if (C.zf) goto L_10107230;
  /* 1010713a test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 1010713c jne 0x10107230 */
  if (!C.zf) goto L_10107230;
  /* 10107142 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10107144 je 0x1010715c */
  if (C.zf) goto L_1010715c;
  /* 10107146 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1010714a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 1010714c je 0x10107230 */
  if (C.zf) goto L_10107230;
  /* 10107152 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 10107155 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10107157 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10107159 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_1010715c:;
  /* 1010715c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1010715f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10107163 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10107167 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 10107169 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1010716b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 1010716f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10107172 jne 0x10107196 */
  if (!C.zf) goto L_10107196;
  /* 10107174 cmp esi, 0x101108b8 */
  { uint32_t _a=(ESI),_b=(0x101108b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010717a je 0x10107184 */
  if (C.zf) goto L_10107184;
  /* 1010717c cmp esi, 0x101108d8 */
  { uint32_t _a=(ESI),_b=(0x101108d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107182 jne 0x1010718f */
  if (!C.zf) goto L_1010718f;
L_10107184:;
  /* 10107184 push ebx */
  push32((uint32_t)(EBX));
  /* 10107185 call 0x10108ee9 */
  push32(0x1010718au); f_10108ee9();
  /* 1010718a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010718c pop ecx */
  ECX = (pop32());
  /* 1010718d jne 0x10107196 */
  if (!C.zf) goto L_10107196;
L_1010718f:;
  /* 1010718f push esi */
  push32((uint32_t)(ESI));
  /* 10107190 call 0x10108ea5 */
  push32(0x10107195u); f_10108ea5();
  /* 10107195 pop ecx */
  ECX = (pop32());
L_10107196:;
  /* 10107196 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 1010719c push edi */
  push32((uint32_t)(EDI));
  /* 1010719d je 0x10107206 */
  if (C.zf) goto L_10107206;
  /* 1010719f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101071a2 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 101071a4 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101071a6 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101071a9 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 101071ab mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 101071ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101071af test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101071b1 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 101071b4 jle 0x101071c6 */
  if ((C.zf||C.sf!=C.of)) goto L_101071c6;
  /* 101071b6 push edi */
  push32((uint32_t)(EDI));
  /* 101071b7 push eax */
  push32((uint32_t)(EAX));
  /* 101071b8 push ebx */
  push32((uint32_t)(EBX));
  /* 101071b9 call 0x10108cb5 */
  push32(0x101071beu); f_10108cb5();
  /* 101071be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101071c1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101071c4 jmp 0x101071fc */
  goto L_101071fc;
L_101071c6:;
  /* 101071c6 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101071c9 je 0x101071e4 */
  if (C.zf) goto L_101071e4;
  /* 101071cb mov ecx, ebx */
  ECX = (EBX);
  /* 101071cd mov eax, ebx */
  EAX = (EBX);
  /* 101071cf sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101071d2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101071d5 mov ecx, dword ptr [ecx*4 + 0x10117d80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10117d80)));
  /* 101071dc lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101071df lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101071e2 jmp 0x101071e9 */
  goto L_101071e9;
L_101071e4:;
  /* 101071e4 mov eax, 0x101107e0 */
  EAX = (0x101107e0u);
L_101071e9:;
  /* 101071e9 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101071ed je 0x101071fc */
  if (C.zf) goto L_101071fc;
  /* 101071ef push 2 */
  push32((uint32_t)(0x2u));
  /* 101071f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101071f3 push ebx */
  push32((uint32_t)(EBX));
  /* 101071f4 call 0x10108bdd */
  push32(0x101071f9u); f_10108bdd();
  /* 101071f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101071fc:;
  /* 101071fc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101071ff mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10107202 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10107204 jmp 0x1010721a */
  goto L_1010721a;
L_10107206:;
  /* 10107206 push 1 */
  push32((uint32_t)(0x1u));
  /* 10107208 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1010720b pop edi */
  EDI = (pop32());
  /* 1010720c push edi */
  push32((uint32_t)(EDI));
  /* 1010720d push eax */
  push32((uint32_t)(EAX));
  /* 1010720e push ebx */
  push32((uint32_t)(EBX));
  /* 1010720f call 0x10108cb5 */
  push32(0x10107214u); f_10108cb5();
  /* 10107214 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107217 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1010721a:;
  /* 1010721a cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010721d pop edi */
  EDI = (pop32());
  /* 1010721e je 0x10107226 */
  if (C.zf) goto L_10107226;
  /* 10107220 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10107224 jmp 0x10107235 */
  goto L_10107235;
L_10107226:;
  /* 10107226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10107229 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1010722e jmp 0x10107238 */
  goto L_10107238;
L_10107230:;
  /* 10107230 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10107232 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_10107235:;
  /* 10107235 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10107238:;
  /* 10107238 pop esi */
  ESI = (pop32());
  /* 10107239 pop ebx */
  EBX = (pop32());
  /* 1010723a pop ebp */
  EBP = (pop32());
  /* 1010723b ret  */
  ESPCHK(0x10107124u, _esp0);
  ESP += 4; return;
}

/* FUN_1000723c @ 0x1010723c (1825 bytes, 595 insns) [1 switch table(s)] */
void f_1010723c(void) {
  FTRACE(0x1010723cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010723c push ebp */
  push32((uint32_t)(EBP));
  /* 1010723d mov ebp, esp */
  EBP = (ESP);
  /* 1010723f sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107245 push ebx */
  push32((uint32_t)(EBX));
  /* 10107246 push esi */
  push32((uint32_t)(ESI));
  /* 10107247 push edi */
  push32((uint32_t)(EDI));
  /* 10107248 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1010724b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1010724d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1010724f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10107250 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10107252 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10107255 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10107258 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1010725b je 0x10107955 */
  if (C.zf) goto L_10107955;
  /* 10107261 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10107264 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10107266 jmp 0x10107270 */
  goto L_10107270;
L_10107268:;
  /* 10107268 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1010726b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 1010726e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_10107270:;
  /* 10107270 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107273 jl 0x10107955 */
  if ((C.sf!=C.of)) goto L_10107955;
  /* 10107279 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010727c jl 0x10107291 */
  if ((C.sf!=C.of)) goto L_10107291;
  /* 1010727e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10107281 jg 0x10107291 */
  if ((!C.zf&&C.sf==C.of)) goto L_10107291;
  /* 10107283 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10107286 mov al, byte ptr [eax + 0x1010e0c8] */
  AL = (r8((uint32_t)(EAX + 0x1010e0c8)));
  /* 1010728c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1010728f jmp 0x10107293 */
  goto L_10107293;
L_10107291:;
  /* 10107291 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10107293:;
  /* 10107293 movsx eax, byte ptr [esi + eax*8 + 0x1010e0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x1010e0e8))));
  /* 1010729b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1010729e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101072a1 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 101072a4 ja 0x10107944 */
  if ((!C.cf&&!C.zf)) goto L_10107944;
  /* 101072aa jmp dword ptr [eax*4 + 0x1010795d] */
  switch (EAX) {
    case 0: goto L_101073db;
    case 1: goto L_101072b1;
    case 2: goto L_101072cc;
    case 3: goto L_10107318;
    case 4: goto L_1010734f;
    case 5: goto L_10107357;
    case 6: goto L_1010738c;
    case 7: goto L_1010741f;
    default: x86_unimpl("switch@0x101072aa out of table"); return;
  }
L_101072b1:;
  /* 101072b1 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 101072b5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 101072b8 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 101072bb mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 101072be mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 101072c1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 101072c4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101072c7 jmp 0x10107944 */
  goto L_10107944;
L_101072cc:;
  /* 101072cc movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101072cf sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101072d2 je 0x1010730f */
  if (C.zf) goto L_1010730f;
  /* 101072d4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101072d7 je 0x10107306 */
  if (C.zf) goto L_10107306;
  /* 101072d9 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101072dc je 0x101072fd */
  if (C.zf) goto L_101072fd;
  /* 101072de dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101072df dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101072e0 je 0x101072f4 */
  if (C.zf) goto L_101072f4;
  /* 101072e2 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101072e5 jne 0x10107944 */
  if (!C.zf) goto L_10107944;
  /* 101072eb or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101072ef jmp 0x10107944 */
  goto L_10107944;
L_101072f4:;
  /* 101072f4 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101072f8 jmp 0x10107944 */
  goto L_10107944;
L_101072fd:;
  /* 101072fd or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10107301 jmp 0x10107944 */
  goto L_10107944;
L_10107306:;
  /* 10107306 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 1010730a jmp 0x10107944 */
  goto L_10107944;
L_1010730f:;
  /* 1010730f or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10107313 jmp 0x10107944 */
  goto L_10107944;
L_10107318:;
  /* 10107318 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010731b jne 0x10107340 */
  if (!C.zf) goto L_10107340;
  /* 1010731d lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10107320 push eax */
  push32((uint32_t)(EAX));
  /* 10107321 call 0x10107a1b */
  push32(0x10107326u); f_10107a1b();
  /* 10107326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107328 pop ecx */
  ECX = (pop32());
  /* 10107329 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1010732c jge 0x10107944 */
  if ((C.sf==C.of)) goto L_10107944;
  /* 10107332 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10107336 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10107338:;
  /* 10107338 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1010733b jmp 0x10107944 */
  goto L_10107944;
L_10107340:;
  /* 10107340 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10107343 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10107346 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10107349 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1010734d jmp 0x10107338 */
  goto L_10107338;
L_1010734f:;
  /* 1010734f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10107352 jmp 0x10107944 */
  goto L_10107944;
L_10107357:;
  /* 10107357 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010735a jne 0x1010737a */
  if (!C.zf) goto L_1010737a;
  /* 1010735c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1010735f push eax */
  push32((uint32_t)(EAX));
  /* 10107360 call 0x10107a1b */
  push32(0x10107365u); f_10107a1b();
  /* 10107365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107367 pop ecx */
  ECX = (pop32());
  /* 10107368 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1010736b jge 0x10107944 */
  if ((C.sf==C.of)) goto L_10107944;
  /* 10107371 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10107375 jmp 0x10107944 */
  goto L_10107944;
L_1010737a:;
  /* 1010737a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1010737d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10107380 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 10107384 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10107387 jmp 0x10107944 */
  goto L_10107944;
L_1010738c:;
  /* 1010738c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010738f je 0x101073bf */
  if (C.zf) goto L_101073bf;
  /* 10107391 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10107394 je 0x101073b6 */
  if (C.zf) goto L_101073b6;
  /* 10107396 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10107399 je 0x101073ad */
  if (C.zf) goto L_101073ad;
  /* 1010739b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010739e jne 0x10107944 */
  if (!C.zf) goto L_10107944;
  /* 101073a4 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101073a8 jmp 0x10107944 */
  goto L_10107944;
L_101073ad:;
  /* 101073ad or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101073b1 jmp 0x10107944 */
  goto L_10107944;
L_101073b6:;
  /* 101073b6 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101073ba jmp 0x10107944 */
  goto L_10107944;
L_101073bf:;
  /* 101073bf cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101073c2 jne 0x101073d8 */
  if (!C.zf) goto L_101073d8;
  /* 101073c4 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101073c8 jne 0x101073d8 */
  if (!C.zf) goto L_101073d8;
  /* 101073ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101073cb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101073cc or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101073d0 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 101073d3 jmp 0x10107944 */
  goto L_10107944;
L_101073d8:;
  /* 101073d8 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_101073db:;
  /* 101073db mov ecx, dword ptr [0x10110b20] */
  ECX = (r32((uint32_t)(0x10110b20)));
  /* 101073e1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101073e4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101073e7 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101073ec je 0x10107407 */
  if (C.zf) goto L_10107407;
  /* 101073ee lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101073f1 push eax */
  push32((uint32_t)(EAX));
  /* 101073f2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101073f5 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101073f8 push eax */
  push32((uint32_t)(EAX));
  /* 101073f9 call 0x1010797d */
  push32(0x101073feu); f_1010797d();
  /* 101073fe mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10107400 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107403 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10107404 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10107407:;
  /* 10107407 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1010740a push eax */
  push32((uint32_t)(EAX));
  /* 1010740b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010740e movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10107411 push eax */
  push32((uint32_t)(EAX));
  /* 10107412 call 0x1010797d */
  push32(0x10107417u); f_1010797d();
  /* 10107417 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010741a jmp 0x10107944 */
  goto L_10107944;
L_1010741f:;
  /* 1010741f movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10107422 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107425 jg 0x10107647 */
  if ((!C.zf&&C.sf==C.of)) goto L_10107647;
  /* 1010742b cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010742e jge 0x101074ca */
  if ((C.sf==C.of)) goto L_101074ca;
  /* 10107434 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107437 jg 0x10107528 */
  if ((!C.zf&&C.sf==C.of)) goto L_10107528;
  /* 1010743d je 0x101076bb */
  if (C.zf) goto L_101076bb;
  /* 10107443 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107446 je 0x101074eb */
  if (C.zf) goto L_101074eb;
  /* 1010744c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010744d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010744e je 0x101074c0 */
  if (C.zf) goto L_101074c0;
  /* 10107450 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10107451 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10107452 je 0x101074c0 */
  if (C.zf) goto L_101074c0;
  /* 10107454 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107457 jne 0x10107846 */
  if (!C.zf) goto L_10107846;
  /* 1010745d test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10107463 jne 0x10107469 */
  if (!C.zf) goto L_10107469;
  /* 10107465 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10107469:;
  /* 10107469 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1010746c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010746f jne 0x10107476 */
  if (!C.zf) goto L_10107476;
  /* 10107471 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_10107476:;
  /* 10107476 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10107479 push eax */
  push32((uint32_t)(EAX));
  /* 1010747a call 0x10107a1b */
  push32(0x1010747fu); f_10107a1b();
  /* 1010747f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 10107485 pop ecx */
  ECX = (pop32());
  /* 10107486 mov ecx, eax */
  ECX = (EAX);
  /* 10107488 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1010748b je 0x1010768f */
  if (C.zf) goto L_1010768f;
  /* 10107491 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10107493 jne 0x1010749e */
  if (!C.zf) goto L_1010749e;
  /* 10107495 mov ecx, dword ptr [0x101107bc] */
  ECX = (r32((uint32_t)(0x101107bc)));
  /* 1010749b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1010749e:;
  /* 1010749e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 101074a5 mov eax, ecx */
  EAX = (ECX);
L_101074a7:;
  /* 101074a7 mov edx, esi */
  EDX = (ESI);
  /* 101074a9 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101074aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101074ac je 0x10107686 */
  if (C.zf) goto L_10107686;
  /* 101074b2 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101074b6 je 0x10107686 */
  if (C.zf) goto L_10107686;
  /* 101074bc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101074bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101074be jmp 0x101074a7 */
  goto L_101074a7;
L_101074c0:;
  /* 101074c0 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 101074c7 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_101074ca:;
  /* 101074ca or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101074ce lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 101074d4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101074d6 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 101074d9 jge 0x101075ae */
  if ((C.sf==C.of)) goto L_101075ae;
  /* 101074df mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 101074e6 jmp 0x101075bc */
  goto L_101075bc;
L_101074eb:;
  /* 101074eb test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 101074f1 jne 0x101074f7 */
  if (!C.zf) goto L_101074f7;
  /* 101074f3 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_101074f7:;
  /* 101074f7 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 101074fd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10107500 push eax */
  push32((uint32_t)(EAX));
  /* 10107501 je 0x1010753e */
  if (C.zf) goto L_1010753e;
  /* 10107503 call 0x10107a38 */
  push32(0x10107508u); f_10107a38();
  /* 10107508 push eax */
  push32((uint32_t)(EAX));
  /* 10107509 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 1010750f push eax */
  push32((uint32_t)(EAX));
  /* 10107510 call 0x101090fb */
  push32(0x10107515u); f_101090fb();
  /* 10107515 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107518 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1010751b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010751d jge 0x10107551 */
  if ((C.sf==C.of)) goto L_10107551;
  /* 1010751f mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 10107526 jmp 0x10107551 */
  goto L_10107551;
L_10107528:;
  /* 10107528 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010752b je 0x1010755f */
  if (C.zf) goto L_1010755f;
  /* 1010752d sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107530 je 0x101074f7 */
  if (C.zf) goto L_101074f7;
  /* 10107532 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10107533 je 0x10107721 */
  if (C.zf) goto L_10107721;
  /* 10107539 jmp 0x10107846 */
  goto L_10107846;
L_1010753e:;
  /* 1010753e call 0x10107a1b */
  push32(0x10107543u); f_10107a1b();
  /* 10107543 pop ecx */
  ECX = (pop32());
  /* 10107544 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 1010754a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10107551:;
  /* 10107551 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10107557 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1010755a jmp 0x10107846 */
  goto L_10107846;
L_1010755f:;
  /* 1010755f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10107562 push eax */
  push32((uint32_t)(EAX));
  /* 10107563 call 0x10107a1b */
  push32(0x10107568u); f_10107a1b();
  /* 10107568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010756a pop ecx */
  ECX = (pop32());
  /* 1010756b je 0x101075a0 */
  if (C.zf) goto L_101075a0;
  /* 1010756d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10107570 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10107572 je 0x101075a0 */
  if (C.zf) goto L_101075a0;
  /* 10107574 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 10107578 je 0x10107591 */
  if (C.zf) goto L_10107591;
  /* 1010757a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1010757d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1010757f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10107582 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10107585 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1010758c jmp 0x10107846 */
  goto L_10107846;
L_10107591:;
  /* 10107591 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 10107595 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10107598 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1010759b jmp 0x10107843 */
  goto L_10107843;
L_101075a0:;
  /* 101075a0 mov eax, dword ptr [0x101107b8] */
  EAX = (r32((uint32_t)(0x101107b8)));
  /* 101075a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101075a8 push eax */
  push32((uint32_t)(EAX));
  /* 101075a9 jmp 0x1010763c */
  goto L_1010763c;
L_101075ae:;
  /* 101075ae jne 0x101075bc */
  if (!C.zf) goto L_101075bc;
  /* 101075b0 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101075b3 jne 0x101075bc */
  if (!C.zf) goto L_101075bc;
  /* 101075b5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_101075bc:;
  /* 101075bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101075bf push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 101075c2 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101075c5 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 101075c8 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 101075cb mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 101075ce mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 101075d1 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 101075d4 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 101075d7 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101075da push eax */
  push32((uint32_t)(EAX));
  /* 101075db lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101075e1 push eax */
  push32((uint32_t)(EAX));
  /* 101075e2 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101075e5 push eax */
  push32((uint32_t)(EAX));
  /* 101075e6 call dword ptr [0x101107c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101107c0))), 0x101075ecu);
  /* 101075ec mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 101075ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101075f2 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 101075f8 je 0x1010760e */
  if (C.zf) goto L_1010760e;
  /* 101075fa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101075fe jne 0x1010760e */
  if (!C.zf) goto L_1010760e;
  /* 10107600 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10107606 push eax */
  push32((uint32_t)(EAX));
  /* 10107607 call dword ptr [0x101107cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101107cc))), 0x1010760du);
  /* 1010760d pop ecx */
  ECX = (pop32());
L_1010760e:;
  /* 1010760e cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10107611 jne 0x10107625 */
  if (!C.zf) goto L_10107625;
  /* 10107613 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10107615 jne 0x10107625 */
  if (!C.zf) goto L_10107625;
  /* 10107617 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 1010761d push eax */
  push32((uint32_t)(EAX));
  /* 1010761e call dword ptr [0x101107c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101107c4))), 0x10107624u);
  /* 10107624 pop ecx */
  ECX = (pop32());
L_10107625:;
  /* 10107625 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010762c jne 0x1010763b */
  if (!C.zf) goto L_1010763b;
  /* 1010762e or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10107632 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 10107638 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_1010763b:;
  /* 1010763b push edi */
  push32((uint32_t)(EDI));
L_1010763c:;
  /* 1010763c call 0x10109080 */
  push32(0x10107641u); f_10109080();
  /* 10107641 pop ecx */
  ECX = (pop32());
  /* 10107642 jmp 0x10107843 */
  goto L_10107843;
L_10107647:;
  /* 10107647 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010764a je 0x10107721 */
  if (C.zf) goto L_10107721;
  /* 10107650 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107653 je 0x101076f7 */
  if (C.zf) goto L_101076f7;
  /* 10107659 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010765a je 0x101076e4 */
  if (C.zf) goto L_101076e4;
  /* 10107660 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10107661 je 0x101076b4 */
  if (C.zf) goto L_101076b4;
  /* 10107663 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107666 je 0x10107469 */
  if (C.zf) goto L_10107469;
  /* 1010766c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010766d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010766e je 0x10107725 */
  if (C.zf) goto L_10107725;
  /* 10107674 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107677 jne 0x10107846 */
  if (!C.zf) goto L_10107846;
  /* 1010767d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 10107684 jmp 0x101076c2 */
  goto L_101076c2;
L_10107686:;
  /* 10107686 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107688 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1010768a jmp 0x10107843 */
  goto L_10107843;
L_1010768f:;
  /* 1010768f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10107691 jne 0x1010769c */
  if (!C.zf) goto L_1010769c;
  /* 10107693 mov ecx, dword ptr [0x101107b8] */
  ECX = (r32((uint32_t)(0x101107b8)));
  /* 10107699 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1010769c:;
  /* 1010769c mov eax, ecx */
  EAX = (ECX);
L_1010769e:;
  /* 1010769e mov edx, esi */
  EDX = (ESI);
  /* 101076a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101076a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101076a3 je 0x101076ad */
  if (C.zf) goto L_101076ad;
  /* 101076a5 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101076a8 je 0x101076ad */
  if (C.zf) goto L_101076ad;
  /* 101076aa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101076ab jmp 0x1010769e */
  goto L_1010769e;
L_101076ad:;
  /* 101076ad sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101076af jmp 0x10107843 */
  goto L_10107843;
L_101076b4:;
  /* 101076b4 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_101076bb:;
  /* 101076bb mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_101076c2:;
  /* 101076c2 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101076c6 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 101076cd je 0x1010772c */
  if (C.zf) goto L_1010772c;
  /* 101076cf mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 101076d2 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 101076d6 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101076d8 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 101076df mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 101076e2 jmp 0x1010772c */
  goto L_1010772c;
L_101076e4:;
  /* 101076e4 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101076e8 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 101076ef je 0x1010772c */
  if (C.zf) goto L_1010772c;
  /* 101076f1 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101076f5 jmp 0x1010772c */
  goto L_1010772c;
L_101076f7:;
  /* 101076f7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101076fa push eax */
  push32((uint32_t)(EAX));
  /* 101076fb call 0x10107a1b */
  push32(0x10107700u); f_10107a1b();
  /* 10107700 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10107704 pop ecx */
  ECX = (pop32());
  /* 10107705 je 0x10107710 */
  if (C.zf) goto L_10107710;
  /* 10107707 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1010770b mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 1010770e jmp 0x10107715 */
  goto L_10107715;
L_10107710:;
  /* 10107710 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10107713 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10107715:;
  /* 10107715 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 1010771c jmp 0x10107944 */
  goto L_10107944;
L_10107721:;
  /* 10107721 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10107725:;
  /* 10107725 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_1010772c:;
  /* 1010772c test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10107730 je 0x1010773e */
  if (C.zf) goto L_1010773e;
  /* 10107732 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10107735 push eax */
  push32((uint32_t)(EAX));
  /* 10107736 call 0x10107a28 */
  push32(0x1010773bu); f_10107a28();
  /* 1010773b pop ecx */
  ECX = (pop32());
  /* 1010773c jmp 0x1010777f */
  goto L_1010777f;
L_1010773e:;
  /* 1010773e test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10107742 je 0x10107765 */
  if (C.zf) goto L_10107765;
  /* 10107744 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10107748 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1010774b push eax */
  push32((uint32_t)(EAX));
  /* 1010774c je 0x1010775a */
  if (C.zf) goto L_1010775a;
  /* 1010774e call 0x10107a1b */
  push32(0x10107753u); f_10107a1b();
  /* 10107753 pop ecx */
  ECX = (pop32());
  /* 10107754 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_10107757:;
  /* 10107757 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10107758 jmp 0x1010777f */
  goto L_1010777f;
L_1010775a:;
  /* 1010775a call 0x10107a1b */
  push32(0x1010775fu); f_10107a1b();
  /* 1010775f pop ecx */
  ECX = (pop32());
  /* 10107760 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 10107763 jmp 0x10107757 */
  goto L_10107757;
L_10107765:;
  /* 10107765 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10107769 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1010776c push eax */
  push32((uint32_t)(EAX));
  /* 1010776d je 0x10107777 */
  if (C.zf) goto L_10107777;
  /* 1010776f call 0x10107a1b */
  push32(0x10107774u); f_10107a1b();
  /* 10107774 pop ecx */
  ECX = (pop32());
  /* 10107775 jmp 0x10107757 */
  goto L_10107757;
L_10107777:;
  /* 10107777 call 0x10107a1b */
  push32(0x1010777cu); f_10107a1b();
  /* 1010777c pop ecx */
  ECX = (pop32());
  /* 1010777d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_1010777f:;
  /* 1010777f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10107783 je 0x101077a0 */
  if (C.zf) goto L_101077a0;
  /* 10107785 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10107787 jg 0x101077a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_101077a0;
  /* 10107789 jl 0x1010778f */
  if ((C.sf!=C.of)) goto L_1010778f;
  /* 1010778b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010778d jae 0x101077a0 */
  if (!C.cf) goto L_101077a0;
L_1010778f:;
  /* 1010778f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10107791 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10107794 mov esi, eax */
  ESI = (EAX);
  /* 10107796 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10107798 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1010779c mov edi, edx */
  EDI = (EDX);
  /* 1010779e jmp 0x101077a4 */
  goto L_101077a4;
L_101077a0:;
  /* 101077a0 mov esi, eax */
  ESI = (EAX);
  /* 101077a2 mov edi, edx */
  EDI = (EDX);
L_101077a4:;
  /* 101077a4 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 101077a8 jne 0x101077ad */
  if (!C.zf) goto L_101077ad;
  /* 101077aa and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_101077ad:;
  /* 101077ad cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101077b1 jge 0x101077bc */
  if ((C.sf==C.of)) goto L_101077bc;
  /* 101077b3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 101077ba jmp 0x101077c0 */
  goto L_101077c0;
L_101077bc:;
  /* 101077bc and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_101077c0:;
  /* 101077c0 mov eax, esi */
  EAX = (ESI);
  /* 101077c2 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101077c4 jne 0x101077ca */
  if (!C.zf) goto L_101077ca;
  /* 101077c6 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_101077ca:;
  /* 101077ca lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 101077cd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_101077d0:;
  /* 101077d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 101077d3 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 101077d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101077d8 jg 0x101077e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_101077e0;
  /* 101077da mov eax, esi */
  EAX = (ESI);
  /* 101077dc or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101077de je 0x1010781b */
  if (C.zf) goto L_1010781b;
L_101077e0:;
  /* 101077e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101077e3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101077e4 push edx */
  push32((uint32_t)(EDX));
  /* 101077e5 push eax */
  push32((uint32_t)(EAX));
  /* 101077e6 push edi */
  push32((uint32_t)(EDI));
  /* 101077e7 push esi */
  push32((uint32_t)(ESI));
  /* 101077e8 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 101077eb mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 101077ee call 0x10109230 */
  push32(0x101077f3u); f_10109230();
  /* 101077f3 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 101077f6 mov ebx, eax */
  EBX = (EAX);
  /* 101077f8 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101077fb push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 101077fe push edi */
  push32((uint32_t)(EDI));
  /* 101077ff push esi */
  push32((uint32_t)(ESI));
  /* 10107800 call 0x101091c0 */
  push32(0x10107805u); f_101091c0();
  /* 10107805 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107808 mov esi, eax */
  ESI = (EAX);
  /* 1010780a mov edi, edx */
  EDI = (EDX);
  /* 1010780c jle 0x10107811 */
  if ((C.zf||C.sf!=C.of)) goto L_10107811;
  /* 1010780e add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_10107811:;
  /* 10107811 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10107814 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 10107817 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 10107819 jmp 0x101077d0 */
  goto L_101077d0;
L_1010781b:;
  /* 1010781b lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1010781e sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107821 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 10107824 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 10107828 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1010782b je 0x10107846 */
  if (C.zf) goto L_10107846;
  /* 1010782d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10107830 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10107833 jne 0x10107839 */
  if (!C.zf) goto L_10107839;
  /* 10107835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107837 jne 0x10107846 */
  if (!C.zf) goto L_10107846;
L_10107839:;
  /* 10107839 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1010783c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010783d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10107840 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_10107843:;
  /* 10107843 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10107846:;
  /* 10107846 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010784a jne 0x10107944 */
  if (!C.zf) goto L_10107944;
  /* 10107850 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 10107853 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 10107856 je 0x1010787e */
  if (C.zf) goto L_1010787e;
  /* 10107858 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 1010785b je 0x10107863 */
  if (C.zf) goto L_10107863;
  /* 1010785d mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 10107861 jmp 0x10107877 */
  goto L_10107877;
L_10107863:;
  /* 10107863 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10107866 je 0x1010786e */
  if (C.zf) goto L_1010786e;
  /* 10107868 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 1010786c jmp 0x10107877 */
  goto L_10107877;
L_1010786e:;
  /* 1010786e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10107871 je 0x1010787e */
  if (C.zf) goto L_1010787e;
  /* 10107873 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_10107877:;
  /* 10107877 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_1010787e:;
  /* 1010787e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 10107881 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107884 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107887 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 1010788a jne 0x1010789e */
  if (!C.zf) goto L_1010789e;
  /* 1010788c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1010788f push eax */
  push32((uint32_t)(EAX));
  /* 10107890 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10107893 push esi */
  push32((uint32_t)(ESI));
  /* 10107894 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10107896 call 0x101079b2 */
  push32(0x1010789bu); f_101079b2();
  /* 1010789b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010789e:;
  /* 1010789e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101078a1 push eax */
  push32((uint32_t)(EAX));
  /* 101078a2 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 101078a5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101078a8 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 101078ab push eax */
  push32((uint32_t)(EAX));
  /* 101078ac call 0x101079e3 */
  push32(0x101078b1u); f_101079e3();
  /* 101078b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101078b4 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101078b7 je 0x101078d0 */
  if (C.zf) goto L_101078d0;
  /* 101078b9 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101078bc jne 0x101078d0 */
  if (!C.zf) goto L_101078d0;
  /* 101078be lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101078c1 push eax */
  push32((uint32_t)(EAX));
  /* 101078c2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101078c5 push esi */
  push32((uint32_t)(ESI));
  /* 101078c6 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 101078c8 call 0x101079b2 */
  push32(0x101078cdu); f_101079b2();
  /* 101078cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101078d0:;
  /* 101078d0 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101078d4 je 0x10107917 */
  if (C.zf) goto L_10107917;
  /* 101078d6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101078da jle 0x10107917 */
  if ((C.zf||C.sf!=C.of)) goto L_10107917;
  /* 101078dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101078df mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 101078e2 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_101078e5:;
  /* 101078e5 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 101078e8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101078e9 push eax */
  push32((uint32_t)(EAX));
  /* 101078ea lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101078ed push eax */
  push32((uint32_t)(EAX));
  /* 101078ee inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101078ef call 0x101090fb */
  push32(0x101078f4u); f_101090fb();
  /* 101078f4 pop ecx */
  ECX = (pop32());
  /* 101078f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101078f7 pop ecx */
  ECX = (pop32());
  /* 101078f8 jle 0x1010792c */
  if ((C.zf||C.sf!=C.of)) goto L_1010792c;
  /* 101078fa lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 101078fd push ecx */
  push32((uint32_t)(ECX));
  /* 101078fe push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10107901 push eax */
  push32((uint32_t)(EAX));
  /* 10107902 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 10107905 push eax */
  push32((uint32_t)(EAX));
  /* 10107906 call 0x101079e3 */
  push32(0x1010790bu); f_101079e3();
  /* 1010790b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010790e mov eax, edi */
  EAX = (EDI);
  /* 10107910 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10107911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107913 jne 0x101078e5 */
  if (!C.zf) goto L_101078e5;
  /* 10107915 jmp 0x1010792c */
  goto L_1010792c;
L_10107917:;
  /* 10107917 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1010791a push eax */
  push32((uint32_t)(EAX));
  /* 1010791b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010791e push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 10107921 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 10107924 call 0x101079e3 */
  push32(0x10107929u); f_101079e3();
  /* 10107929 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010792c:;
  /* 1010792c test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 10107930 je 0x10107944 */
  if (C.zf) goto L_10107944;
  /* 10107932 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10107935 push eax */
  push32((uint32_t)(EAX));
  /* 10107936 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10107939 push esi */
  push32((uint32_t)(ESI));
  /* 1010793a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1010793c call 0x101079b2 */
  push32(0x10107941u); f_101079b2();
  /* 10107941 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10107944:;
  /* 10107944 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10107947 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10107949 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010794a test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1010794c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1010794f jne 0x10107268 */
  if (!C.zf) goto L_10107268;
L_10107955:;
  /* 10107955 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10107958 pop edi */
  EDI = (pop32());
  /* 10107959 pop esi */
  ESI = (pop32());
  /* 1010795a pop ebx */
  EBX = (pop32());
  /* 1010795b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010795c ret  */
  ESPCHK(0x1010723cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000797d @ 0x1010797d (53 bytes, 25 insns) */
void f_1010797d(void) {
  FTRACE(0x1010797du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010797d push ebp */
  push32((uint32_t)(EBP));
  /* 1010797e mov ebp, esp */
  EBP = (ESP);
  /* 10107980 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10107983 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 10107986 js 0x10107996 */
  if (C.sf) goto L_10107996;
  /* 10107988 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1010798a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1010798d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1010798f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10107991 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10107994 jmp 0x101079a1 */
  goto L_101079a1;
L_10107996:;
  /* 10107996 push ecx */
  push32((uint32_t)(ECX));
  /* 10107997 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010799a call 0x10107124 */
  push32(0x1010799fu); f_10107124();
  /* 1010799f pop ecx */
  ECX = (pop32());
  /* 101079a0 pop ecx */
  ECX = (pop32());
L_101079a1:;
  /* 101079a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101079a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101079a7 jne 0x101079ae */
  if (!C.zf) goto L_101079ae;
  /* 101079a9 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101079ac pop ebp */
  EBP = (pop32());
  /* 101079ad ret  */
  ESPCHK(0x1010797du, _esp0);
  ESP += 4; return;
L_101079ae:;
  /* 101079ae inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 101079b0 pop ebp */
  EBP = (pop32());
  /* 101079b1 ret  */
  ESPCHK(0x1010797du, _esp0);
  ESP += 4; return;
}

/* FUN_100079b2 @ 0x101079b2 (49 bytes, 22 insns) */
void f_101079b2(void) {
  FTRACE(0x101079b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101079b2 push esi */
  push32((uint32_t)(ESI));
  /* 101079b3 push edi */
  push32((uint32_t)(EDI));
  /* 101079b4 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 101079b8 mov eax, edi */
  EAX = (EDI);
  /* 101079ba dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101079bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101079bd jle 0x101079e0 */
  if ((C.zf||C.sf!=C.of)) goto L_101079e0;
  /* 101079bf mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_101079c3:;
  /* 101079c3 push esi */
  push32((uint32_t)(ESI));
  /* 101079c4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101079c8 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 101079cc call 0x1010797d */
  push32(0x101079d1u); f_1010797d();
  /* 101079d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101079d4 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101079d7 je 0x101079e0 */
  if (C.zf) goto L_101079e0;
  /* 101079d9 mov eax, edi */
  EAX = (EDI);
  /* 101079db dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101079dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101079de jg 0x101079c3 */
  if ((!C.zf&&C.sf==C.of)) goto L_101079c3;
L_101079e0:;
  /* 101079e0 pop edi */
  EDI = (pop32());
  /* 101079e1 pop esi */
  ESI = (pop32());
  /* 101079e2 ret  */
  ESPCHK(0x101079b2u, _esp0);
  ESP += 4; return;
}

/* FUN_100079e3 @ 0x101079e3 (56 bytes, 27 insns) */
void f_101079e3(void) {
  FTRACE(0x101079e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101079e3 push ebx */
  push32((uint32_t)(EBX));
  /* 101079e4 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 101079e8 mov eax, ebx */
  EAX = (EBX);
  /* 101079ea dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101079eb push esi */
  push32((uint32_t)(ESI));
  /* 101079ec push edi */
  push32((uint32_t)(EDI));
  /* 101079ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101079ef jle 0x10107a17 */
  if ((C.zf||C.sf!=C.of)) goto L_10107a17;
  /* 101079f1 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 101079f5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_101079f9:;
  /* 101079f9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101079fc push edi */
  push32((uint32_t)(EDI));
  /* 101079fd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101079fe push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 10107a02 push eax */
  push32((uint32_t)(EAX));
  /* 10107a03 call 0x1010797d */
  push32(0x10107a08u); f_1010797d();
  /* 10107a08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107a0b cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107a0e je 0x10107a17 */
  if (C.zf) goto L_10107a17;
  /* 10107a10 mov eax, ebx */
  EAX = (EBX);
  /* 10107a12 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10107a13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107a15 jg 0x101079f9 */
  if ((!C.zf&&C.sf==C.of)) goto L_101079f9;
L_10107a17:;
  /* 10107a17 pop edi */
  EDI = (pop32());
  /* 10107a18 pop esi */
  ESI = (pop32());
  /* 10107a19 pop ebx */
  EBX = (pop32());
  /* 10107a1a ret  */
  ESPCHK(0x101079e3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a1b @ 0x10107a1b (13 bytes, 5 insns) */
void f_10107a1b(void) {
  FTRACE(0x10107a1bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107a1b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10107a1f add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10107a22 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10107a24 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10107a27 ret  */
  ESPCHK(0x10107a1bu, _esp0);
  ESP += 4; return;
}

/* FUN_10007a28 @ 0x10107a28 (16 bytes, 6 insns) */
void f_10107a28(void) {
  FTRACE(0x10107a28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107a28 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10107a2c add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10107a2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10107a31 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 10107a34 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10107a37 ret  */
  ESPCHK(0x10107a28u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a38 @ 0x10107a38 (14 bytes, 5 insns) */
void f_10107a38(void) {
  FTRACE(0x10107a38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107a38 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10107a3c add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10107a3f mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10107a41 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 10107a45 ret  */
  ESPCHK(0x10107a38u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a46 @ 0x10107a46 (18 bytes, 6 insns) */
void f_10107a46(void) {
  FTRACE(0x10107a46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107a46 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 10107a4b push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 10107a50 call 0x101092da */
  push32(0x10107a55u); f_101092da();
  /* 10107a55 pop ecx */
  ECX = (pop32());
  /* 10107a56 pop ecx */
  ECX = (pop32());
  /* 10107a57 ret  */
  ESPCHK(0x10107a46u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a58 @ 0x10107a58 (62 bytes, 24 insns) */
void f_10107a58(void) {
  FTRACE(0x10107a58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107a58 push ebp */
  push32((uint32_t)(EBP));
  /* 10107a59 mov ebp, esp */
  EBP = (ESP);
  /* 10107a5b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107a5e fld qword ptr [0x1010e170] */
  fpu_push(rf64((uint32_t)(0x1010e170)));
  /* 10107a64 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10107a67 fld qword ptr [0x1010e168] */
  fpu_push(rf64((uint32_t)(0x1010e168)));
  /* 10107a6d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10107a70 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10107a73 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 10107a76 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 10107a79 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 10107a7c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 10107a7f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 10107a82 fcomp qword ptr [0x1010e160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1010e160)));
  (void)fpu_pop();
  /* 10107a88 fnstsw ax */
  AX = fpu_status();
  /* 10107a8a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10107a8b jbe 0x10107a92 */
  if ((C.cf||C.zf)) goto L_10107a92;
  /* 10107a8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10107a8f pop eax */
  EAX = (pop32());
  /* 10107a90 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10107a91 ret  */
  ESPCHK(0x10107a58u, _esp0);
  ESP += 4; return;
L_10107a92:;
  /* 10107a92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10107a94 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10107a95 ret  */
  ESPCHK(0x10107a58u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a96 @ 0x10107a96 (41 bytes, 13 insns) */
void f_10107a96(void) {
  FTRACE(0x10107a96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107a96 push 0x1010e194 */
  push32((uint32_t)(0x1010e194u));
  /* 10107a9b call dword ptr [0x1010e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e004))), 0x10107aa1u);
  /* 10107aa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107aa3 je 0x10107aba */
  if (C.zf) goto L_10107aba;
  /* 10107aa5 push 0x1010e178 */
  push32((uint32_t)(0x1010e178u));
  /* 10107aaa push eax */
  push32((uint32_t)(EAX));
  /* 10107aab call dword ptr [0x1010e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e088))), 0x10107ab1u);
  /* 10107ab1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107ab3 je 0x10107aba */
  if (C.zf) goto L_10107aba;
  /* 10107ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10107ab7 call eax */
  call_ind((uint32_t)(EAX), 0x10107ab9u);
  /* 10107ab9 ret  */
  ESPCHK(0x10107a96u, _esp0);
  ESP += 4; return;
L_10107aba:;
  /* 10107aba jmp 0x10107a58 */
  f_10107a58(); return;
}

/* FUN_10007abf @ 0x10107abf (90 bytes, 37 insns) */
void f_10107abf(void) {
  FTRACE(0x10107abfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107abf push esi */
  push32((uint32_t)(ESI));
  /* 10107ac0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10107ac4 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10107ac7 push eax */
  push32((uint32_t)(EAX));
  /* 10107ac8 call 0x10109480 */
  push32(0x10107acdu); f_10109480();
  /* 10107acd cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107ad0 pop ecx */
  ECX = (pop32());
  /* 10107ad1 je 0x10107aff */
  if (C.zf) goto L_10107aff;
L_10107ad3:;
  /* 10107ad3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10107ad4 cmp dword ptr [0x10110d30], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10110d30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107adb jle 0x10107aec */
  if ((C.zf||C.sf!=C.of)) goto L_10107aec;
  /* 10107add movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10107ae0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10107ae2 push eax */
  push32((uint32_t)(EAX));
  /* 10107ae3 call 0x1010940b */
  push32(0x10107ae8u); f_1010940b();
  /* 10107ae8 pop ecx */
  ECX = (pop32());
  /* 10107ae9 pop ecx */
  ECX = (pop32());
  /* 10107aea jmp 0x10107afb */
  goto L_10107afb;
L_10107aec:;
  /* 10107aec movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10107aef mov ecx, dword ptr [0x10110b20] */
  ECX = (r32((uint32_t)(0x10110b20)));
  /* 10107af5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10107af8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10107afb:;
  /* 10107afb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107afd jne 0x10107ad3 */
  if (!C.zf) goto L_10107ad3;
L_10107aff:;
  /* 10107aff mov cl, byte ptr [0x10110d34] */
  CL = (r8((uint32_t)(0x10110d34)));
  /* 10107b05 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10107b07 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 10107b09 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10107b0a:;
  /* 10107b0a mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10107b0c mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 10107b0e mov al, cl */
  AL = (CL);
  /* 10107b10 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10107b12 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10107b13 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10107b15 jne 0x10107b0a */
  if (!C.zf) goto L_10107b0a;
  /* 10107b17 pop esi */
  ESI = (pop32());
  /* 10107b18 ret  */
  ESPCHK(0x10107abfu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10107b7f (62 bytes, 29 insns) */
void f_10107b7f(void) {
  FTRACE(0x10107b7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107b7f push ebp */
  push32((uint32_t)(EBP));
  /* 10107b80 mov ebp, esp */
  EBP = (ESP);
  /* 10107b82 push ecx */
  push32((uint32_t)(ECX));
  /* 10107b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10107b84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107b88 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10107b8b je 0x10107ba8 */
  if (C.zf) goto L_10107ba8;
  /* 10107b8d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10107b90 push eax */
  push32((uint32_t)(EAX));
  /* 10107b91 call 0x1010994c */
  push32(0x10107b96u); f_1010994c();
  /* 10107b96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10107b99 pop ecx */
  ECX = (pop32());
  /* 10107b9a pop ecx */
  ECX = (pop32());
  /* 10107b9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10107b9e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10107ba0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10107ba3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10107ba6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10107ba7 ret  */
  ESPCHK(0x10107b7fu, _esp0);
  ESP += 4; return;
L_10107ba8:;
  /* 10107ba8 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10107bab push eax */
  push32((uint32_t)(EAX));
  /* 10107bac call 0x10109979 */
  push32(0x10107bb1u); f_10109979();
  /* 10107bb1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10107bb4 pop ecx */
  ECX = (pop32());
  /* 10107bb5 pop ecx */
  ECX = (pop32());
  /* 10107bb6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10107bb9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10107bbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10107bbc ret  */
  ESPCHK(0x10107b7fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007bbd @ 0x10107bbd (97 bytes, 42 insns) */
void f_10107bbd(void) {
  FTRACE(0x10107bbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107bbd push ebp */
  push32((uint32_t)(EBP));
  /* 10107bbe mov ebp, esp */
  EBP = (ESP);
  /* 10107bc0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107bc3 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10107bc6 push esi */
  push32((uint32_t)(ESI));
  /* 10107bc7 push eax */
  push32((uint32_t)(EAX));
  /* 10107bc8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10107bcb push eax */
  push32((uint32_t)(EAX));
  /* 10107bcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10107bcf push ecx */
  push32((uint32_t)(ECX));
  /* 10107bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10107bd1 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10107bd3 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10107bd6 call 0x10109a1d */
  push32(0x10107bdbu); f_10109a1d();
  /* 10107bdb mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10107bde lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10107be1 push eax */
  push32((uint32_t)(EAX));
  /* 10107be2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10107be5 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10107be8 push eax */
  push32((uint32_t)(EAX));
  /* 10107be9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10107beb cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107bef sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10107bf2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10107bf4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10107bf6 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10107bf9 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10107bfb add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10107bfd push ecx */
  push32((uint32_t)(ECX));
  /* 10107bfe call 0x101099a6 */
  push32(0x10107c03u); f_101099a6();
  /* 10107c03 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10107c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10107c08 push eax */
  push32((uint32_t)(EAX));
  /* 10107c09 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10107c0c push esi */
  push32((uint32_t)(ESI));
  /* 10107c0d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10107c10 call 0x10107c1e */
  push32(0x10107c15u); f_10107c1e();
  /* 10107c15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10107c18 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107c1b pop esi */
  ESI = (pop32());
  /* 10107c1c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10107c1d ret  */
  ESPCHK(0x10107bbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10007c1e @ 0x10107c1e (194 bytes, 91 insns) */
void f_10107c1e(void) {
  FTRACE(0x10107c1eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107c1e push ebp */
  push32((uint32_t)(EBP));
  /* 10107c1f mov ebp, esp */
  EBP = (ESP);
  /* 10107c21 push ebx */
  push32((uint32_t)(EBX));
  /* 10107c22 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10107c24 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10107c27 push esi */
  push32((uint32_t)(ESI));
  /* 10107c28 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10107c2b push edi */
  push32((uint32_t)(EDI));
  /* 10107c2c mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10107c2f je 0x10107c4c */
  if (C.zf) goto L_10107c4c;
  /* 10107c31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10107c33 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107c36 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10107c39 push eax */
  push32((uint32_t)(EAX));
  /* 10107c3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10107c3c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107c3f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10107c42 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10107c44 push eax */
  push32((uint32_t)(EAX));
  /* 10107c45 call 0x10107ec0 */
  push32(0x10107c4au); f_10107ec0();
  /* 10107c4a pop ecx */
  ECX = (pop32());
  /* 10107c4b pop ecx */
  ECX = (pop32());
L_10107c4c:;
  /* 10107c4c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107c4f mov eax, edi */
  EAX = (EDI);
  /* 10107c51 jne 0x10107c59 */
  if (!C.zf) goto L_10107c59;
  /* 10107c53 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 10107c56 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_10107c59:;
  /* 10107c59 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107c5c jle 0x10107c70 */
  if ((C.zf||C.sf!=C.of)) goto L_10107c70;
  /* 10107c5e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10107c61 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10107c64 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10107c66 mov eax, ecx */
  EAX = (ECX);
  /* 10107c68 mov cl, byte ptr [0x10110d34] */
  CL = (r8((uint32_t)(0x10110d34)));
  /* 10107c6e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_10107c70:;
  /* 10107c70 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10107c72 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10107c75 push 0x1010e1a8 */
  push32((uint32_t)(0x1010e1a8u));
  /* 10107c7a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10107c7d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10107c7f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10107c82 push ecx */
  push32((uint32_t)(ECX));
  /* 10107c83 call 0x10109b30 */
  push32(0x10107c88u); f_10109b30();
  /* 10107c88 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107c8b pop ecx */
  ECX = (pop32());
  /* 10107c8c pop ecx */
  ECX = (pop32());
  /* 10107c8d mov ecx, eax */
  ECX = (EAX);
  /* 10107c8f je 0x10107c94 */
  if (C.zf) goto L_10107c94;
  /* 10107c91 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_10107c94:;
  /* 10107c94 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10107c97 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10107c98 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10107c9b je 0x10107cd9 */
  if (C.zf) goto L_10107cd9;
  /* 10107c9d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 10107ca0 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10107ca1 jns 0x10107ca8 */
  if (!C.sf) goto L_10107ca8;
  /* 10107ca3 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 10107ca5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_10107ca8:;
  /* 10107ca8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10107ca9 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107cac jl 0x10107cbf */
  if ((C.sf!=C.of)) goto L_10107cbf;
  /* 10107cae mov eax, ebx */
  EAX = (EBX);
  /* 10107cb0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10107cb2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10107cb3 pop esi */
  ESI = (pop32());
  /* 10107cb4 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10107cb6 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10107cb8 mov eax, ebx */
  EAX = (EBX);
  /* 10107cba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10107cbb idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10107cbd mov ebx, edx */
  EBX = (EDX);
L_10107cbf:;
  /* 10107cbf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10107cc0 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107cc3 jl 0x10107cd6 */
  if ((C.sf!=C.of)) goto L_10107cd6;
  /* 10107cc5 mov eax, ebx */
  EAX = (EBX);
  /* 10107cc7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10107cc9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10107cca pop esi */
  ESI = (pop32());
  /* 10107ccb idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10107ccd add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10107ccf mov eax, ebx */
  EAX = (EBX);
  /* 10107cd1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10107cd2 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10107cd4 mov ebx, edx */
  EBX = (EDX);
L_10107cd6:;
  /* 10107cd6 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_10107cd9:;
  /* 10107cd9 mov eax, edi */
  EAX = (EDI);
  /* 10107cdb pop edi */
  EDI = (pop32());
  /* 10107cdc pop esi */
  ESI = (pop32());
  /* 10107cdd pop ebx */
  EBX = (pop32());
  /* 10107cde pop ebp */
  EBP = (pop32());
  /* 10107cdf ret  */
  ESPCHK(0x10107c1eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x10107ce0 (85 bytes, 37 insns) */
void f_10107ce0(void) {
  FTRACE(0x10107ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10107ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10107ce3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107ce6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10107ce9 push esi */
  push32((uint32_t)(ESI));
  /* 10107cea push eax */
  push32((uint32_t)(EAX));
  /* 10107ceb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10107cee push eax */
  push32((uint32_t)(EAX));
  /* 10107cef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10107cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10107cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10107cf4 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10107cf6 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10107cf9 call 0x10109a1d */
  push32(0x10107cfeu); f_10109a1d();
  /* 10107cfe mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10107d01 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10107d04 push eax */
  push32((uint32_t)(EAX));
  /* 10107d05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10107d08 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10107d0a push eax */
  push32((uint32_t)(EAX));
  /* 10107d0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10107d0d cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107d11 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10107d14 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10107d17 push eax */
  push32((uint32_t)(EAX));
  /* 10107d18 call 0x101099a6 */
  push32(0x10107d1du); f_101099a6();
  /* 10107d1d lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10107d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10107d22 push eax */
  push32((uint32_t)(EAX));
  /* 10107d23 push esi */
  push32((uint32_t)(ESI));
  /* 10107d24 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10107d27 call 0x10107d35 */
  push32(0x10107d2cu); f_10107d35();
  /* 10107d2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10107d2f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107d32 pop esi */
  ESI = (pop32());
  /* 10107d33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10107d34 ret  */
  ESPCHK(0x10107ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d35 @ 0x10107d35 (167 bytes, 73 insns) */
void f_10107d35(void) {
  FTRACE(0x10107d35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107d35 push ebp */
  push32((uint32_t)(EBP));
  /* 10107d36 mov ebp, esp */
  EBP = (ESP);
  /* 10107d38 push ebx */
  push32((uint32_t)(EBX));
  /* 10107d39 push esi */
  push32((uint32_t)(ESI));
  /* 10107d3a mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10107d3d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10107d40 push edi */
  push32((uint32_t)(EDI));
  /* 10107d41 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10107d44 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10107d45 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10107d49 je 0x10107d65 */
  if (C.zf) goto L_10107d65;
  /* 10107d4b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107d4e jne 0x10107d65 */
  if (!C.zf) goto L_10107d65;
  /* 10107d50 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10107d52 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107d55 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10107d58 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10107d5a add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10107d5c mov eax, ecx */
  EAX = (ECX);
  /* 10107d5e mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10107d61 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_10107d65:;
  /* 10107d65 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107d68 mov edi, ebx */
  EDI = (EBX);
  /* 10107d6a jne 0x10107d72 */
  if (!C.zf) goto L_10107d72;
  /* 10107d6c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 10107d6f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_10107d72:;
  /* 10107d72 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10107d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107d77 jg 0x10107d89 */
  if ((!C.zf&&C.sf==C.of)) goto L_10107d89;
  /* 10107d79 push 1 */
  push32((uint32_t)(0x1u));
  /* 10107d7b push edi */
  push32((uint32_t)(EDI));
  /* 10107d7c call 0x10107ec0 */
  push32(0x10107d81u); f_10107ec0();
  /* 10107d81 pop ecx */
  ECX = (pop32());
  /* 10107d82 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 10107d85 pop ecx */
  ECX = (pop32());
  /* 10107d86 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10107d87 jmp 0x10107d8b */
  goto L_10107d8b;
L_10107d89:;
  /* 10107d89 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10107d8b:;
  /* 10107d8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107d8f jle 0x10107dd5 */
  if ((C.zf||C.sf!=C.of)) goto L_10107dd5;
  /* 10107d91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10107d93 push edi */
  push32((uint32_t)(EDI));
  /* 10107d94 call 0x10107ec0 */
  push32(0x10107d99u); f_10107ec0();
  /* 10107d99 mov al, byte ptr [0x10110d34] */
  AL = (r8((uint32_t)(0x10110d34)));
  /* 10107d9e pop ecx */
  ECX = (pop32());
  /* 10107d9f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10107da1 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10107da4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10107da5 pop ecx */
  ECX = (pop32());
  /* 10107da6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10107da8 jge 0x10107dd5 */
  if ((C.sf==C.of)) goto L_10107dd5;
  /* 10107daa cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10107dae je 0x10107db4 */
  if (C.zf) goto L_10107db4;
  /* 10107db0 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10107db2 jmp 0x10107dbb */
  goto L_10107dbb;
L_10107db4:;
  /* 10107db4 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10107db6 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107db9 jl 0x10107dbe */
  if ((C.sf!=C.of)) goto L_10107dbe;
L_10107dbb:;
  /* 10107dbb mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10107dbe:;
  /* 10107dbe push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10107dc1 push edi */
  push32((uint32_t)(EDI));
  /* 10107dc2 call 0x10107ec0 */
  push32(0x10107dc7u); f_10107ec0();
  /* 10107dc7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10107dca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10107dcc push edi */
  push32((uint32_t)(EDI));
  /* 10107dcd call 0x10109c20 */
  push32(0x10107dd2u); f_10109c20();
  /* 10107dd2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10107dd5:;
  /* 10107dd5 pop edi */
  EDI = (pop32());
  /* 10107dd6 mov eax, ebx */
  EAX = (EBX);
  /* 10107dd8 pop esi */
  ESI = (pop32());
  /* 10107dd9 pop ebx */
  EBX = (pop32());
  /* 10107dda pop ebp */
  EBP = (pop32());
  /* 10107ddb ret  */
  ESPCHK(0x10107d35u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ddc @ 0x10107ddc (147 bytes, 66 insns) */
void f_10107ddc(void) {
  FTRACE(0x10107ddcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107ddc push ebp */
  push32((uint32_t)(EBP));
  /* 10107ddd mov ebp, esp */
  EBP = (ESP);
  /* 10107ddf sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107de2 push ebx */
  push32((uint32_t)(EBX));
  /* 10107de3 push esi */
  push32((uint32_t)(ESI));
  /* 10107de4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10107de7 push edi */
  push32((uint32_t)(EDI));
  /* 10107de8 push eax */
  push32((uint32_t)(EAX));
  /* 10107de9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10107dec push eax */
  push32((uint32_t)(EAX));
  /* 10107ded mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10107df0 push ecx */
  push32((uint32_t)(ECX));
  /* 10107df1 push ecx */
  push32((uint32_t)(ECX));
  /* 10107df2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10107df4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10107df7 call 0x10109a1d */
  push32(0x10107dfcu); f_10109a1d();
  /* 10107dfc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10107dff mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10107e02 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 10107e05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10107e07 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107e0b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10107e0e add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10107e11 mov edi, eax */
  EDI = (EAX);
  /* 10107e13 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10107e16 push eax */
  push32((uint32_t)(EAX));
  /* 10107e17 push ebx */
  push32((uint32_t)(EBX));
  /* 10107e18 push edi */
  push32((uint32_t)(EDI));
  /* 10107e19 call 0x101099a6 */
  push32(0x10107e1eu); f_101099a6();
  /* 10107e1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10107e21 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107e24 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10107e25 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107e27 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10107e2a cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107e2d jl 0x10107e55 */
  if ((C.sf!=C.of)) goto L_10107e55;
  /* 10107e2f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107e31 jge 0x10107e55 */
  if ((C.sf==C.of)) goto L_10107e55;
  /* 10107e33 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10107e35 je 0x10107e41 */
  if (C.zf) goto L_10107e41;
L_10107e37:;
  /* 10107e37 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10107e39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10107e3a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10107e3c jne 0x10107e37 */
  if (!C.zf) goto L_10107e37;
  /* 10107e3e and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_10107e41:;
  /* 10107e41 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10107e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10107e46 push eax */
  push32((uint32_t)(EAX));
  /* 10107e47 push ebx */
  push32((uint32_t)(EBX));
  /* 10107e48 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10107e4b call 0x10107d35 */
  push32(0x10107e50u); f_10107d35();
  /* 10107e50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107e53 jmp 0x10107e6a */
  goto L_10107e6a;
L_10107e55:;
  /* 10107e55 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10107e58 push 1 */
  push32((uint32_t)(0x1u));
  /* 10107e5a push eax */
  push32((uint32_t)(EAX));
  /* 10107e5b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10107e5e push ebx */
  push32((uint32_t)(EBX));
  /* 10107e5f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10107e62 call 0x10107c1e */
  push32(0x10107e67u); f_10107c1e();
  /* 10107e67 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10107e6a:;
  /* 10107e6a pop edi */
  EDI = (pop32());
  /* 10107e6b pop esi */
  ESI = (pop32());
  /* 10107e6c pop ebx */
  EBX = (pop32());
  /* 10107e6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10107e6e ret  */
  ESPCHK(0x10107ddcu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10107e6f (81 bytes, 29 insns) */
void f_10107e6f(void) {
  FTRACE(0x10107e6fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107e6f push ebp */
  push32((uint32_t)(EBP));
  /* 10107e70 mov ebp, esp */
  EBP = (ESP);
  /* 10107e72 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107e76 je 0x10107eaa */
  if (C.zf) goto L_10107eaa;
  /* 10107e78 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107e7c je 0x10107eaa */
  if (C.zf) goto L_10107eaa;
  /* 10107e7e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107e82 jne 0x10107e97 */
  if (!C.zf) goto L_10107e97;
  /* 10107e84 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10107e87 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10107e8a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10107e8d call 0x10107ce0 */
  push32(0x10107e92u); f_10107ce0();
  /* 10107e92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107e95 pop ebp */
  EBP = (pop32());
  /* 10107e96 ret  */
  ESPCHK(0x10107e6fu, _esp0);
  ESP += 4; return;
L_10107e97:;
  /* 10107e97 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10107e9a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10107e9d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10107ea0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10107ea3 call 0x10107ddc */
  push32(0x10107ea8u); f_10107ddc();
  /* 10107ea8 jmp 0x10107ebb */
  goto L_10107ebb;
L_10107eaa:;
  /* 10107eaa push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10107ead push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10107eb0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10107eb3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10107eb6 call 0x10107bbd */
  push32(0x10107ebbu); f_10107bbd();
L_10107ebb:;
  /* 10107ebb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107ebe pop ebp */
  EBP = (pop32());
  /* 10107ebf ret  */
  ESPCHK(0x10107e6fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec0 @ 0x10107ec0 (37 bytes, 18 insns) */
void f_10107ec0(void) {
  FTRACE(0x10107ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107ec0 push edi */
  push32((uint32_t)(EDI));
  /* 10107ec1 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10107ec5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10107ec7 je 0x10107ee3 */
  if (C.zf) goto L_10107ee3;
  /* 10107ec9 push esi */
  push32((uint32_t)(ESI));
  /* 10107eca mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10107ece push esi */
  push32((uint32_t)(ESI));
  /* 10107ecf call 0x10109080 */
  push32(0x10107ed4u); f_10109080();
  /* 10107ed4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10107ed5 push eax */
  push32((uint32_t)(EAX));
  /* 10107ed6 push esi */
  push32((uint32_t)(ESI));
  /* 10107ed7 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10107ed9 push esi */
  push32((uint32_t)(ESI));
  /* 10107eda call 0x10109c80 */
  push32(0x10107edfu); f_10109c80();
  /* 10107edf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107ee2 pop esi */
  ESI = (pop32());
L_10107ee3:;
  /* 10107ee3 pop edi */
  EDI = (pop32());
  /* 10107ee4 ret  */
  ESPCHK(0x10107ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee5 @ 0x10107ee5 (45 bytes, 12 insns) */
void f_10107ee5(void) {
  FTRACE(0x10107ee5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107ee5 mov eax, dword ptr [0x101107a8] */
  EAX = (r32((uint32_t)(0x101107a8)));
  /* 10107eea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107eec je 0x10107ef0 */
  if (C.zf) goto L_10107ef0;
  /* 10107eee call eax */
  call_ind((uint32_t)(EAX), 0x10107ef0u);
L_10107ef0:;
  /* 10107ef0 push 0x1010f014 */
  push32((uint32_t)(0x1010f014u));
  /* 10107ef5 push 0x1010f008 */
  push32((uint32_t)(0x1010f008u));
  /* 10107efa call 0x10107fe9 */
  push32(0x10107effu); f_10107fe9();
  /* 10107eff push 0x1010f004 */
  push32((uint32_t)(0x1010f004u));
  /* 10107f04 push 0x1010f000 */
  push32((uint32_t)(0x1010f000u));
  /* 10107f09 call 0x10107fe9 */
  push32(0x10107f0eu); f_10107fe9();
  /* 10107f0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107f11 ret  */
  ESPCHK(0x10107ee5u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10107f12 (17 bytes, 6 insns) */
void f_10107f12(void) {
  FTRACE(0x10107f12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107f12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10107f14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10107f16 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10107f1a call 0x10107f32 */
  push32(0x10107f1fu); f_10107f32();
  /* 10107f1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107f22 ret  */
  ESPCHK(0x10107f12u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f23 @ 0x10107f23 (15 bytes, 6 insns) */
void f_10107f23(void) {
  FTRACE(0x10107f23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107f23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10107f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10107f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10107f29 call 0x10107f32 */
  push32(0x10107f2eu); f_10107f32();
  /* 10107f2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10107f31 ret  */
  ESPCHK(0x10107f23u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f32 @ 0x10107f32 (163 bytes, 53 insns) */
void f_10107f32(void) {
  FTRACE(0x10107f32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107f32 push edi */
  push32((uint32_t)(EDI));
  /* 10107f33 call 0x10107fd7 */
  push32(0x10107f38u); f_10107fd7();
  /* 10107f38 push 1 */
  push32((uint32_t)(0x1u));
  /* 10107f3a pop edi */
  EDI = (pop32());
  /* 10107f3b cmp dword ptr [0x101167e8], edi */
  { uint32_t _a=(r32((uint32_t)(0x101167e8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107f41 jne 0x10107f54 */
  if (!C.zf) goto L_10107f54;
  /* 10107f43 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10107f47 call dword ptr [0x1010e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e020))), 0x10107f4du);
  /* 10107f4d push eax */
  push32((uint32_t)(EAX));
  /* 10107f4e call dword ptr [0x1010e01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e01c))), 0x10107f54u);
L_10107f54:;
  /* 10107f54 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107f59 push ebx */
  push32((uint32_t)(EBX));
  /* 10107f5a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10107f5e mov dword ptr [0x101167e4], edi */
  w32((uint32_t)(0x101167e4), (EDI));
  /* 10107f64 mov byte ptr [0x101167e0], bl */
  w8((uint32_t)(0x101167e0), (BL));
  /* 10107f6a jne 0x10107fa8 */
  if (!C.zf) goto L_10107fa8;
  /* 10107f6c mov eax, dword ptr [0x10117e90] */
  EAX = (r32((uint32_t)(0x10117e90)));
  /* 10107f71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107f73 je 0x10107f97 */
  if (C.zf) goto L_10107f97;
  /* 10107f75 mov ecx, dword ptr [0x10117e8c] */
  ECX = (r32((uint32_t)(0x10117e8c)));
  /* 10107f7b push esi */
  push32((uint32_t)(ESI));
  /* 10107f7c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10107f7f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107f81 jb 0x10107f96 */
  if (C.cf) goto L_10107f96;
L_10107f83:;
  /* 10107f83 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10107f85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107f87 je 0x10107f8b */
  if (C.zf) goto L_10107f8b;
  /* 10107f89 call eax */
  call_ind((uint32_t)(EAX), 0x10107f8bu);
L_10107f8b:;
  /* 10107f8b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10107f8e cmp esi, dword ptr [0x10117e90] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10117e90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107f94 jae 0x10107f83 */
  if (!C.cf) goto L_10107f83;
L_10107f96:;
  /* 10107f96 pop esi */
  ESI = (pop32());
L_10107f97:;
  /* 10107f97 push 0x1010f020 */
  push32((uint32_t)(0x1010f020u));
  /* 10107f9c push 0x1010f018 */
  push32((uint32_t)(0x1010f018u));
  /* 10107fa1 call 0x10107fe9 */
  push32(0x10107fa6u); f_10107fe9();
  /* 10107fa6 pop ecx */
  ECX = (pop32());
  /* 10107fa7 pop ecx */
  ECX = (pop32());
L_10107fa8:;
  /* 10107fa8 push 0x1010f028 */
  push32((uint32_t)(0x1010f028u));
  /* 10107fad push 0x1010f024 */
  push32((uint32_t)(0x1010f024u));
  /* 10107fb2 call 0x10107fe9 */
  push32(0x10107fb7u); f_10107fe9();
  /* 10107fb7 pop ecx */
  ECX = (pop32());
  /* 10107fb8 pop ecx */
  ECX = (pop32());
  /* 10107fb9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10107fbb pop ebx */
  EBX = (pop32());
  /* 10107fbc je 0x10107fc5 */
  if (C.zf) goto L_10107fc5;
  /* 10107fbe call 0x10107fe0 */
  push32(0x10107fc3u); f_10107fe0();
  /* 10107fc3 pop edi */
  EDI = (pop32());
  /* 10107fc4 ret  */
  ESPCHK(0x10107f32u, _esp0);
  ESP += 4; return;
L_10107fc5:;
  /* 10107fc5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10107fc9 mov dword ptr [0x101167e8], edi */
  w32((uint32_t)(0x101167e8), (EDI));
  /* 10107fcf call dword ptr [0x1010e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e018))), 0x10107fd5u);
  /* 10107fd5 pop edi */
  EDI = (pop32());
  /* 10107fd6 ret  */
  ESPCHK(0x10107f32u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fd7 @ 0x10107fd7 (9 bytes, 4 insns) */
void f_10107fd7(void) {
  FTRACE(0x10107fd7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107fd7 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10107fd9 call 0x1010a053 */
  push32(0x10107fdeu); f_1010a053();
  /* 10107fde pop ecx */
  ECX = (pop32());
  /* 10107fdf ret  */
  ESPCHK(0x10107fd7u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fe0 @ 0x10107fe0 (9 bytes, 4 insns) */
void f_10107fe0(void) {
  FTRACE(0x10107fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107fe0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10107fe2 call 0x1010a0b4 */
  push32(0x10107fe7u); f_1010a0b4();
  /* 10107fe7 pop ecx */
  ECX = (pop32());
  /* 10107fe8 ret  */
  ESPCHK(0x10107fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fe9 @ 0x10107fe9 (26 bytes, 12 insns) */
void f_10107fe9(void) {
  FTRACE(0x10107fe9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10107fe9 push esi */
  push32((uint32_t)(ESI));
  /* 10107fea mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10107fee:;
  /* 10107fee cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10107ff2 jae 0x10108001 */
  if (!C.cf) goto L_10108001;
  /* 10107ff4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10107ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10107ff8 je 0x10107ffc */
  if (C.zf) goto L_10107ffc;
  /* 10107ffa call eax */
  call_ind((uint32_t)(EAX), 0x10107ffcu);
L_10107ffc:;
  /* 10107ffc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10107fff jmp 0x10107fee */
  goto L_10107fee;
L_10108001:;
  /* 10108001 pop esi */
  ESI = (pop32());
  /* 10108002 ret  */
  ESPCHK(0x10107fe9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008003 @ 0x10108003 (84 bytes, 32 insns) */
void f_10108003(void) {
  FTRACE(0x10108003u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108003 push esi */
  push32((uint32_t)(ESI));
  /* 10108004 call 0x10109fbe */
  push32(0x10108009u); f_10109fbe();
  /* 10108009 call dword ptr [0x1010e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e02c))), 0x1010800fu);
  /* 1010800f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108012 mov dword ptr [0x101107d8], eax */
  w32((uint32_t)(0x101107d8), (EAX));
  /* 10108017 je 0x10108053 */
  if (C.zf) goto L_10108053;
  /* 10108019 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1010801b push 1 */
  push32((uint32_t)(0x1u));
  /* 1010801d call 0x1010a0c9 */
  push32(0x10108022u); f_1010a0c9();
  /* 10108022 mov esi, eax */
  ESI = (EAX);
  /* 10108024 pop ecx */
  ECX = (pop32());
  /* 10108025 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10108027 pop ecx */
  ECX = (pop32());
  /* 10108028 je 0x10108053 */
  if (C.zf) goto L_10108053;
  /* 1010802a push esi */
  push32((uint32_t)(ESI));
  /* 1010802b push dword ptr [0x101107d8] */
  push32((uint32_t)(r32((uint32_t)(0x101107d8))));
  /* 10108031 call dword ptr [0x1010e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e028))), 0x10108037u);
  /* 10108037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108039 je 0x10108053 */
  if (C.zf) goto L_10108053;
  /* 1010803b push esi */
  push32((uint32_t)(ESI));
  /* 1010803c call 0x10108075 */
  push32(0x10108041u); f_10108075();
  /* 10108041 pop ecx */
  ECX = (pop32());
  /* 10108042 call dword ptr [0x1010e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e024))), 0x10108048u);
  /* 10108048 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1010804c push 1 */
  push32((uint32_t)(0x1u));
  /* 1010804e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10108050 pop eax */
  EAX = (pop32());
  /* 10108051 pop esi */
  ESI = (pop32());
  /* 10108052 ret  */
  ESPCHK(0x10108003u, _esp0);
  ESP += 4; return;
L_10108053:;
  /* 10108053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10108055 pop esi */
  ESI = (pop32());
  /* 10108056 ret  */
  ESPCHK(0x10108003u, _esp0);
  ESP += 4; return;
}

/* FUN_10008057 @ 0x10108057 (30 bytes, 8 insns) */
void f_10108057(void) {
  FTRACE(0x10108057u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108057 call 0x10109fe7 */
  push32(0x1010805cu); f_10109fe7();
  /* 1010805c mov eax, dword ptr [0x101107d8] */
  EAX = (r32((uint32_t)(0x101107d8)));
  /* 10108061 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108064 je 0x10108074 */
  if (C.zf) goto L_10108074;
  /* 10108066 push eax */
  push32((uint32_t)(EAX));
  /* 10108067 call dword ptr [0x1010e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e030))), 0x1010806du);
  /* 1010806d or dword ptr [0x101107d8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x101107d8)))|(0xffffffffu); w32((uint32_t)(0x101107d8), (_r)); fl_logic(_r,32); }
L_10108074:;
  /* 10108074 ret  */
  ESPCHK(0x10108057u, _esp0);
  ESP += 4; return;
}

/* FUN_10008075 @ 0x10108075 (19 bytes, 4 insns) */
void f_10108075(void) {
  FTRACE(0x10108075u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108075 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10108079 mov dword ptr [eax + 0x50], 0x10110e30 */
  w32((uint32_t)(EAX + 0x50), (0x10110e30u));
  /* 10108080 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10108087 ret  */
  ESPCHK(0x10108075u, _esp0);
  ESP += 4; return;
}

/* FUN_10008088 @ 0x10108088 (103 bytes, 38 insns) */
void f_10108088(void) {
  FTRACE(0x10108088u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108088 push esi */
  push32((uint32_t)(ESI));
  /* 10108089 push edi */
  push32((uint32_t)(EDI));
  /* 1010808a call dword ptr [0x1010e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e03c))), 0x10108090u);
  /* 10108090 push dword ptr [0x101107d8] */
  push32((uint32_t)(r32((uint32_t)(0x101107d8))));
  /* 10108096 mov edi, eax */
  EDI = (EAX);
  /* 10108098 call dword ptr [0x1010e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e038))), 0x1010809eu);
  /* 1010809e mov esi, eax */
  ESI = (EAX);
  /* 101080a0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101080a2 jne 0x101080e3 */
  if (!C.zf) goto L_101080e3;
  /* 101080a4 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 101080a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101080a8 call 0x1010a0c9 */
  push32(0x101080adu); f_1010a0c9();
  /* 101080ad mov esi, eax */
  ESI = (EAX);
  /* 101080af pop ecx */
  ECX = (pop32());
  /* 101080b0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101080b2 pop ecx */
  ECX = (pop32());
  /* 101080b3 je 0x101080db */
  if (C.zf) goto L_101080db;
  /* 101080b5 push esi */
  push32((uint32_t)(ESI));
  /* 101080b6 push dword ptr [0x101107d8] */
  push32((uint32_t)(r32((uint32_t)(0x101107d8))));
  /* 101080bc call dword ptr [0x1010e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e028))), 0x101080c2u);
  /* 101080c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101080c4 je 0x101080db */
  if (C.zf) goto L_101080db;
  /* 101080c6 push esi */
  push32((uint32_t)(ESI));
  /* 101080c7 call 0x10108075 */
  push32(0x101080ccu); f_10108075();
  /* 101080cc pop ecx */
  ECX = (pop32());
  /* 101080cd call dword ptr [0x1010e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e024))), 0x101080d3u);
  /* 101080d3 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101080d7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101080d9 jmp 0x101080e3 */
  goto L_101080e3;
L_101080db:;
  /* 101080db push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101080dd call 0x101070f1 */
  push32(0x101080e2u); f_101070f1();
  /* 101080e2 pop ecx */
  ECX = (pop32());
L_101080e3:;
  /* 101080e3 push edi */
  push32((uint32_t)(EDI));
  /* 101080e4 call dword ptr [0x1010e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e034))), 0x101080eau);
  /* 101080ea mov eax, esi */
  EAX = (ESI);
  /* 101080ec pop edi */
  EDI = (pop32());
  /* 101080ed pop esi */
  ESI = (pop32());
  /* 101080ee ret  */
  ESPCHK(0x10108088u, _esp0);
  ESP += 4; return;
}

/* FUN_100080ef @ 0x101080ef (160 bytes, 62 insns) */
void f_101080ef(void) {
  FTRACE(0x101080efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101080ef mov eax, dword ptr [0x101107d8] */
  EAX = (r32((uint32_t)(0x101107d8)));
  /* 101080f4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101080f7 je 0x1010818e */
  if (C.zf) goto L_1010818e;
  /* 101080fd push esi */
  push32((uint32_t)(ESI));
  /* 101080fe mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10108102 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10108104 jne 0x10108113 */
  if (!C.zf) goto L_10108113;
  /* 10108106 push eax */
  push32((uint32_t)(EAX));
  /* 10108107 call dword ptr [0x1010e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e038))), 0x1010810du);
  /* 1010810d mov esi, eax */
  ESI = (EAX);
  /* 1010810f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10108111 je 0x1010817f */
  if (C.zf) goto L_1010817f;
L_10108113:;
  /* 10108113 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10108116 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108118 je 0x10108121 */
  if (C.zf) goto L_10108121;
  /* 1010811a push eax */
  push32((uint32_t)(EAX));
  /* 1010811b call 0x1010a206 */
  push32(0x10108120u); f_1010a206();
  /* 10108120 pop ecx */
  ECX = (pop32());
L_10108121:;
  /* 10108121 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10108124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108126 je 0x1010812f */
  if (C.zf) goto L_1010812f;
  /* 10108128 push eax */
  push32((uint32_t)(EAX));
  /* 10108129 call 0x1010a206 */
  push32(0x1010812eu); f_1010a206();
  /* 1010812e pop ecx */
  ECX = (pop32());
L_1010812f:;
  /* 1010812f mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10108132 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108134 je 0x1010813d */
  if (C.zf) goto L_1010813d;
  /* 10108136 push eax */
  push32((uint32_t)(EAX));
  /* 10108137 call 0x1010a206 */
  push32(0x1010813cu); f_1010a206();
  /* 1010813c pop ecx */
  ECX = (pop32());
L_1010813d:;
  /* 1010813d mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10108140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108142 je 0x1010814b */
  if (C.zf) goto L_1010814b;
  /* 10108144 push eax */
  push32((uint32_t)(EAX));
  /* 10108145 call 0x1010a206 */
  push32(0x1010814au); f_1010a206();
  /* 1010814a pop ecx */
  ECX = (pop32());
L_1010814b:;
  /* 1010814b mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1010814e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108150 je 0x10108159 */
  if (C.zf) goto L_10108159;
  /* 10108152 push eax */
  push32((uint32_t)(EAX));
  /* 10108153 call 0x1010a206 */
  push32(0x10108158u); f_1010a206();
  /* 10108158 pop ecx */
  ECX = (pop32());
L_10108159:;
  /* 10108159 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 1010815c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010815e je 0x10108167 */
  if (C.zf) goto L_10108167;
  /* 10108160 push eax */
  push32((uint32_t)(EAX));
  /* 10108161 call 0x1010a206 */
  push32(0x10108166u); f_1010a206();
  /* 10108166 pop ecx */
  ECX = (pop32());
L_10108167:;
  /* 10108167 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1010816a cmp eax, 0x10110e30 */
  { uint32_t _a=(EAX),_b=(0x10110e30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010816f je 0x10108178 */
  if (C.zf) goto L_10108178;
  /* 10108171 push eax */
  push32((uint32_t)(EAX));
  /* 10108172 call 0x1010a206 */
  push32(0x10108177u); f_1010a206();
  /* 10108177 pop ecx */
  ECX = (pop32());
L_10108178:;
  /* 10108178 push esi */
  push32((uint32_t)(ESI));
  /* 10108179 call 0x1010a206 */
  push32(0x1010817eu); f_1010a206();
  /* 1010817e pop ecx */
  ECX = (pop32());
L_1010817f:;
  /* 1010817f push 0 */
  push32((uint32_t)(0x0u));
  /* 10108181 push dword ptr [0x101107d8] */
  push32((uint32_t)(r32((uint32_t)(0x101107d8))));
  /* 10108187 call dword ptr [0x1010e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e028))), 0x1010818du);
  /* 1010818d pop esi */
  ESI = (pop32());
L_1010818e:;
  /* 1010818e ret  */
  ESPCHK(0x101080efu, _esp0);
  ESP += 4; return;
}

/* FUN_1000818f @ 0x1010818f (444 bytes, 150 insns) */
void f_1010818f(void) {
  FTRACE(0x1010818fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010818f push ebp */
  push32((uint32_t)(EBP));
  /* 10108190 mov ebp, esp */
  EBP = (ESP);
  /* 10108192 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10108195 push ebx */
  push32((uint32_t)(EBX));
  /* 10108196 push esi */
  push32((uint32_t)(ESI));
  /* 10108197 push edi */
  push32((uint32_t)(EDI));
  /* 10108198 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1010819d call 0x1010a2ef */
  push32(0x101081a2u); f_1010a2ef();
  /* 101081a2 mov esi, eax */
  ESI = (EAX);
  /* 101081a4 pop ecx */
  ECX = (pop32());
  /* 101081a5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101081a7 jne 0x101081b1 */
  if (!C.zf) goto L_101081b1;
  /* 101081a9 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101081ab call 0x101070f1 */
  push32(0x101081b0u); f_101070f1();
  /* 101081b0 pop ecx */
  ECX = (pop32());
L_101081b1:;
  /* 101081b1 mov dword ptr [0x10117d80], esi */
  w32((uint32_t)(0x10117d80), (ESI));
  /* 101081b7 mov dword ptr [0x10117e80], 0x20 */
  w32((uint32_t)(0x10117e80), (0x20u));
  /* 101081c1 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_101081c7:;
  /* 101081c7 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101081c9 jae 0x101081e9 */
  if (!C.cf) goto L_101081e9;
  /* 101081cb and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101081cf or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101081d2 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 101081d6 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 101081da mov eax, dword ptr [0x10117d80] */
  EAX = (r32((uint32_t)(0x10117d80)));
  /* 101081df add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101081e2 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101081e7 jmp 0x101081c7 */
  goto L_101081c7;
L_101081e9:;
  /* 101081e9 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101081ec push eax */
  push32((uint32_t)(EAX));
  /* 101081ed call dword ptr [0x1010e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e04c))), 0x101081f3u);
  /* 101081f3 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101081f8 je 0x101082cf */
  if (C.zf) goto L_101082cf;
  /* 101081fe mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10108201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108203 je 0x101082cf */
  if (C.zf) goto L_101082cf;
  /* 10108209 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 1010820b lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 1010820e lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10108211 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10108214 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10108219 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010821b jl 0x1010821f */
  if ((C.sf!=C.of)) goto L_1010821f;
  /* 1010821d mov edi, eax */
  EDI = (EAX);
L_1010821f:;
  /* 1010821f cmp dword ptr [0x10117e80], edi */
  { uint32_t _a=(r32((uint32_t)(0x10117e80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108225 jge 0x1010827d */
  if ((C.sf==C.of)) goto L_1010827d;
  /* 10108227 mov esi, 0x10117d84 */
  ESI = (0x10117d84u);
L_1010822c:;
  /* 1010822c push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10108231 call 0x1010a2ef */
  push32(0x10108236u); f_1010a2ef();
  /* 10108236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108238 pop ecx */
  ECX = (pop32());
  /* 10108239 je 0x10108277 */
  if (C.zf) goto L_10108277;
  /* 1010823b add dword ptr [0x10117e80], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10117e80))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10117e80), (_r)); fl_add(_a,_b,_r,32); }
  /* 10108242 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10108244 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_1010824a:;
  /* 1010824a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010824c jae 0x1010826a */
  if (!C.cf) goto L_1010826a;
  /* 1010824e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10108252 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10108255 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10108259 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1010825d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1010825f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10108262 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10108268 jmp 0x1010824a */
  goto L_1010824a;
L_1010826a:;
  /* 1010826a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010826d cmp dword ptr [0x10117e80], edi */
  { uint32_t _a=(r32((uint32_t)(0x10117e80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108273 jl 0x1010822c */
  if ((C.sf!=C.of)) goto L_1010822c;
  /* 10108275 jmp 0x1010827d */
  goto L_1010827d;
L_10108277:;
  /* 10108277 mov edi, dword ptr [0x10117e80] */
  EDI = (r32((uint32_t)(0x10117e80)));
L_1010827d:;
  /* 1010827d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1010827f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10108281 jle 0x101082cf */
  if ((C.zf||C.sf!=C.of)) goto L_101082cf;
L_10108283:;
  /* 10108283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10108286 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10108288 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010828b je 0x101082c5 */
  if (C.zf) goto L_101082c5;
  /* 1010828d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1010828f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10108291 je 0x101082c5 */
  if (C.zf) goto L_101082c5;
  /* 10108293 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10108295 jne 0x101082a2 */
  if (!C.zf) goto L_101082a2;
  /* 10108297 push ecx */
  push32((uint32_t)(ECX));
  /* 10108298 call dword ptr [0x1010e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e048))), 0x1010829eu);
  /* 1010829e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101082a0 je 0x101082c5 */
  if (C.zf) goto L_101082c5;
L_101082a2:;
  /* 101082a2 mov ecx, esi */
  ECX = (ESI);
  /* 101082a4 mov eax, esi */
  EAX = (ESI);
  /* 101082a6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101082a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101082ac mov ecx, dword ptr [ecx*4 + 0x10117d80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10117d80)));
  /* 101082b3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101082b6 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101082b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101082bc mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 101082be mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101082c0 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 101082c2 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_101082c5:;
  /* 101082c5 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101082c9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101082ca inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101082cb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101082cd jl 0x10108283 */
  if ((C.sf!=C.of)) goto L_10108283;
L_101082cf:;
  /* 101082cf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101082d1:;
  /* 101082d1 mov ecx, dword ptr [0x10117d80] */
  ECX = (r32((uint32_t)(0x10117d80)));
  /* 101082d7 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 101082da cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101082de lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 101082e1 jne 0x10108330 */
  if (!C.zf) goto L_10108330;
  /* 101082e3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101082e5 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 101082e9 jne 0x101082f0 */
  if (!C.zf) goto L_101082f0;
  /* 101082eb push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 101082ed pop eax */
  EAX = (pop32());
  /* 101082ee jmp 0x101082fa */
  goto L_101082fa;
L_101082f0:;
  /* 101082f0 mov eax, ebx */
  EAX = (EBX);
  /* 101082f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101082f3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101082f5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101082f7 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101082fa:;
  /* 101082fa push eax */
  push32((uint32_t)(EAX));
  /* 101082fb call dword ptr [0x1010e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e044))), 0x10108301u);
  /* 10108301 mov edi, eax */
  EDI = (EAX);
  /* 10108303 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108306 je 0x1010831f */
  if (C.zf) goto L_1010831f;
  /* 10108308 push edi */
  push32((uint32_t)(EDI));
  /* 10108309 call dword ptr [0x1010e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e048))), 0x1010830fu);
  /* 1010830f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108311 je 0x1010831f */
  if (C.zf) goto L_1010831f;
  /* 10108313 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10108318 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1010831a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010831d jne 0x10108325 */
  if (!C.zf) goto L_10108325;
L_1010831f:;
  /* 1010831f or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10108323 jmp 0x10108334 */
  goto L_10108334;
L_10108325:;
  /* 10108325 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108328 jne 0x10108334 */
  if (!C.zf) goto L_10108334;
  /* 1010832a or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1010832e jmp 0x10108334 */
  goto L_10108334;
L_10108330:;
  /* 10108330 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10108334:;
  /* 10108334 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10108335 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108338 jl 0x101082d1 */
  if ((C.sf!=C.of)) goto L_101082d1;
  /* 1010833a push dword ptr [0x10117e80] */
  push32((uint32_t)(r32((uint32_t)(0x10117e80))));
  /* 10108340 call dword ptr [0x1010e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e040))), 0x10108346u);
  /* 10108346 pop edi */
  EDI = (pop32());
  /* 10108347 pop esi */
  ESI = (pop32());
  /* 10108348 pop ebx */
  EBX = (pop32());
  /* 10108349 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010834a ret  */
  ESPCHK(0x1010818fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000834b @ 0x1010834b (84 bytes, 33 insns) */
void f_1010834b(void) {
  FTRACE(0x1010834bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010834b push ebx */
  push32((uint32_t)(EBX));
  /* 1010834c push esi */
  push32((uint32_t)(ESI));
  /* 1010834d push edi */
  push32((uint32_t)(EDI));
  /* 1010834e mov esi, 0x10117d80 */
  ESI = (0x10117d80u);
L_10108353:;
  /* 10108353 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10108355 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108357 je 0x10108390 */
  if (C.zf) goto L_10108390;
  /* 10108359 mov edi, eax */
  EDI = (EAX);
  /* 1010835b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10108360 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108362 jae 0x10108385 */
  if (!C.cf) goto L_10108385;
  /* 10108364 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10108367:;
  /* 10108367 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010836b je 0x10108374 */
  if (C.zf) goto L_10108374;
  /* 1010836d push ebx */
  push32((uint32_t)(EBX));
  /* 1010836e call dword ptr [0x1010e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e050))), 0x10108374u);
L_10108374:;
  /* 10108374 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10108376 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10108379 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010837e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10108381 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108383 jb 0x10108367 */
  if (C.cf) goto L_10108367;
L_10108385:;
  /* 10108385 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10108387 call 0x1010a206 */
  push32(0x1010838cu); f_1010a206();
  /* 1010838c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1010838f pop ecx */
  ECX = (pop32());
L_10108390:;
  /* 10108390 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10108393 cmp esi, 0x10117e80 */
  { uint32_t _a=(ESI),_b=(0x10117e80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108399 jl 0x10108353 */
  if ((C.sf!=C.of)) goto L_10108353;
  /* 1010839b pop edi */
  EDI = (pop32());
  /* 1010839c pop esi */
  ESI = (pop32());
  /* 1010839d pop ebx */
  EBX = (pop32());
  /* 1010839e ret  */
  ESPCHK(0x1010834bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000839f @ 0x1010839f (185 bytes, 71 insns) */
void f_1010839f(void) {
  FTRACE(0x1010839fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010839f push ebx */
  push32((uint32_t)(EBX));
  /* 101083a0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101083a2 cmp dword ptr [0x10117e88], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10117e88))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101083a8 push esi */
  push32((uint32_t)(ESI));
  /* 101083a9 push edi */
  push32((uint32_t)(EDI));
  /* 101083aa jne 0x101083b1 */
  if (!C.zf) goto L_101083b1;
  /* 101083ac call 0x1010a801 */
  push32(0x101083b1u); f_1010a801();
L_101083b1:;
  /* 101083b1 mov esi, dword ptr [0x10116798] */
  ESI = (r32((uint32_t)(0x10116798)));
  /* 101083b7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_101083b9:;
  /* 101083b9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101083bb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101083bd je 0x101083d1 */
  if (C.zf) goto L_101083d1;
  /* 101083bf cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101083c1 je 0x101083c4 */
  if (C.zf) goto L_101083c4;
  /* 101083c3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_101083c4:;
  /* 101083c4 push esi */
  push32((uint32_t)(ESI));
  /* 101083c5 call 0x10109080 */
  push32(0x101083cau); f_10109080();
  /* 101083ca pop ecx */
  ECX = (pop32());
  /* 101083cb lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 101083cf jmp 0x101083b9 */
  goto L_101083b9;
L_101083d1:;
  /* 101083d1 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 101083d8 push eax */
  push32((uint32_t)(EAX));
  /* 101083d9 call 0x1010a2ef */
  push32(0x101083deu); f_1010a2ef();
  /* 101083de mov esi, eax */
  ESI = (EAX);
  /* 101083e0 pop ecx */
  ECX = (pop32());
  /* 101083e1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101083e3 mov dword ptr [0x101167c8], esi */
  w32((uint32_t)(0x101167c8), (ESI));
  /* 101083e9 jne 0x101083f3 */
  if (!C.zf) goto L_101083f3;
  /* 101083eb push 9 */
  push32((uint32_t)(0x9u));
  /* 101083ed call 0x101070f1 */
  push32(0x101083f2u); f_101070f1();
  /* 101083f2 pop ecx */
  ECX = (pop32());
L_101083f3:;
  /* 101083f3 mov edi, dword ptr [0x10116798] */
  EDI = (r32((uint32_t)(0x10116798)));
  /* 101083f9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101083fb je 0x10108436 */
  if (C.zf) goto L_10108436;
  /* 101083fd push ebp */
  push32((uint32_t)(EBP));
L_101083fe:;
  /* 101083fe push edi */
  push32((uint32_t)(EDI));
  /* 101083ff call 0x10109080 */
  push32(0x10108404u); f_10109080();
  /* 10108404 mov ebp, eax */
  EBP = (EAX);
  /* 10108406 pop ecx */
  ECX = (pop32());
  /* 10108407 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10108408 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010840b je 0x1010842f */
  if (C.zf) goto L_1010842f;
  /* 1010840d push ebp */
  push32((uint32_t)(EBP));
  /* 1010840e call 0x1010a2ef */
  push32(0x10108413u); f_1010a2ef();
  /* 10108413 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108415 pop ecx */
  ECX = (pop32());
  /* 10108416 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10108418 jne 0x10108422 */
  if (!C.zf) goto L_10108422;
  /* 1010841a push 9 */
  push32((uint32_t)(0x9u));
  /* 1010841c call 0x101070f1 */
  push32(0x10108421u); f_101070f1();
  /* 10108421 pop ecx */
  ECX = (pop32());
L_10108422:;
  /* 10108422 push edi */
  push32((uint32_t)(EDI));
  /* 10108423 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10108425 call 0x10109b30 */
  push32(0x1010842au); f_10109b30();
  /* 1010842a pop ecx */
  ECX = (pop32());
  /* 1010842b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010842e pop ecx */
  ECX = (pop32());
L_1010842f:;
  /* 1010842f add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10108431 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108433 jne 0x101083fe */
  if (!C.zf) goto L_101083fe;
  /* 10108435 pop ebp */
  EBP = (pop32());
L_10108436:;
  /* 10108436 push dword ptr [0x10116798] */
  push32((uint32_t)(r32((uint32_t)(0x10116798))));
  /* 1010843c call 0x1010a206 */
  push32(0x10108441u); f_1010a206();
  /* 10108441 pop ecx */
  ECX = (pop32());
  /* 10108442 mov dword ptr [0x10116798], ebx */
  w32((uint32_t)(0x10116798), (EBX));
  /* 10108448 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 1010844a pop edi */
  EDI = (pop32());
  /* 1010844b pop esi */
  ESI = (pop32());
  /* 1010844c mov dword ptr [0x10117e84], 1 */
  w32((uint32_t)(0x10117e84), (0x1u));
  /* 10108456 pop ebx */
  EBX = (pop32());
  /* 10108457 ret  */
  ESPCHK(0x1010839fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008458 @ 0x10108458 (153 bytes, 62 insns) */
void f_10108458(void) {
  FTRACE(0x10108458u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108458 push ebp */
  push32((uint32_t)(EBP));
  /* 10108459 mov ebp, esp */
  EBP = (ESP);
  /* 1010845b push ecx */
  push32((uint32_t)(ECX));
  /* 1010845c push ecx */
  push32((uint32_t)(ECX));
  /* 1010845d push ebx */
  push32((uint32_t)(EBX));
  /* 1010845e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10108460 cmp dword ptr [0x10117e88], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10117e88))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108466 push esi */
  push32((uint32_t)(ESI));
  /* 10108467 push edi */
  push32((uint32_t)(EDI));
  /* 10108468 jne 0x1010846f */
  if (!C.zf) goto L_1010846f;
  /* 1010846a call 0x1010a801 */
  push32(0x1010846fu); f_1010a801();
L_1010846f:;
  /* 1010846f mov esi, 0x101167ec */
  ESI = (0x101167ecu);
  /* 10108474 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10108479 push esi */
  push32((uint32_t)(ESI));
  /* 1010847a push ebx */
  push32((uint32_t)(EBX));
  /* 1010847b call dword ptr [0x1010e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e054))), 0x10108481u);
  /* 10108481 mov eax, dword ptr [0x10117e94] */
  EAX = (r32((uint32_t)(0x10117e94)));
  /* 10108486 mov dword ptr [0x101167d8], esi */
  w32((uint32_t)(0x101167d8), (ESI));
  /* 1010848c mov edi, esi */
  EDI = (ESI);
  /* 1010848e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108490 je 0x10108494 */
  if (C.zf) goto L_10108494;
  /* 10108492 mov edi, eax */
  EDI = (EAX);
L_10108494:;
  /* 10108494 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10108497 push eax */
  push32((uint32_t)(EAX));
  /* 10108498 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1010849b push eax */
  push32((uint32_t)(EAX));
  /* 1010849c push ebx */
  push32((uint32_t)(EBX));
  /* 1010849d push ebx */
  push32((uint32_t)(EBX));
  /* 1010849e push edi */
  push32((uint32_t)(EDI));
  /* 1010849f call 0x101084f1 */
  push32(0x101084a4u); f_101084f1();
  /* 101084a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101084a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101084aa lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 101084ad push eax */
  push32((uint32_t)(EAX));
  /* 101084ae call 0x1010a2ef */
  push32(0x101084b3u); f_1010a2ef();
  /* 101084b3 mov esi, eax */
  ESI = (EAX);
  /* 101084b5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101084b8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101084ba jne 0x101084c4 */
  if (!C.zf) goto L_101084c4;
  /* 101084bc push 8 */
  push32((uint32_t)(0x8u));
  /* 101084be call 0x101070f1 */
  push32(0x101084c3u); f_101070f1();
  /* 101084c3 pop ecx */
  ECX = (pop32());
L_101084c4:;
  /* 101084c4 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 101084c7 push eax */
  push32((uint32_t)(EAX));
  /* 101084c8 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101084cb push eax */
  push32((uint32_t)(EAX));
  /* 101084cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101084cf lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 101084d2 push eax */
  push32((uint32_t)(EAX));
  /* 101084d3 push esi */
  push32((uint32_t)(ESI));
  /* 101084d4 push edi */
  push32((uint32_t)(EDI));
  /* 101084d5 call 0x101084f1 */
  push32(0x101084dau); f_101084f1();
  /* 101084da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101084dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101084e0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101084e1 mov dword ptr [0x101167c0], esi */
  w32((uint32_t)(0x101167c0), (ESI));
  /* 101084e7 pop edi */
  EDI = (pop32());
  /* 101084e8 pop esi */
  ESI = (pop32());
  /* 101084e9 mov dword ptr [0x101167bc], eax */
  w32((uint32_t)(0x101167bc), (EAX));
  /* 101084ee pop ebx */
  EBX = (pop32());
  /* 101084ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101084f0 ret  */
  ESPCHK(0x10108458u, _esp0);
  ESP += 4; return;
}

/* FUN_100084f1 @ 0x101084f1 (436 bytes, 187 insns) */
void f_101084f1(void) {
  FTRACE(0x101084f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101084f1 push ebp */
  push32((uint32_t)(EBP));
  /* 101084f2 mov ebp, esp */
  EBP = (ESP);
  /* 101084f4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 101084f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101084fa push ebx */
  push32((uint32_t)(EBX));
  /* 101084fb push esi */
  push32((uint32_t)(ESI));
  /* 101084fc and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101084ff mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10108502 push edi */
  push32((uint32_t)(EDI));
  /* 10108503 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10108506 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 1010850c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010850f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10108511 je 0x1010851b */
  if (C.zf) goto L_1010851b;
  /* 10108513 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10108515 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10108518 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_1010851b:;
  /* 1010851b cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010851e jne 0x10108564 */
  if (!C.zf) goto L_10108564;
L_10108520:;
  /* 10108520 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10108523 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10108524 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108527 je 0x10108552 */
  if (C.zf) goto L_10108552;
  /* 10108529 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1010852b je 0x10108552 */
  if (C.zf) goto L_10108552;
  /* 1010852d movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10108530 test byte ptr [edx + 0x10116c41], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10116c41)))&(0x4u); fl_logic(_r,8); }
  /* 10108537 je 0x10108545 */
  if (C.zf) goto L_10108545;
  /* 10108539 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1010853b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1010853d je 0x10108545 */
  if (C.zf) goto L_10108545;
  /* 1010853f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10108541 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10108543 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10108544 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10108545:;
  /* 10108545 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10108547 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10108549 je 0x10108520 */
  if (C.zf) goto L_10108520;
  /* 1010854b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1010854d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1010854f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10108550 jmp 0x10108520 */
  goto L_10108520;
L_10108552:;
  /* 10108552 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10108554 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10108556 je 0x1010855c */
  if (C.zf) goto L_1010855c;
  /* 10108558 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1010855b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1010855c:;
  /* 1010855c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010855f jne 0x101085a7 */
  if (!C.zf) goto L_101085a7;
  /* 10108561 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10108562 jmp 0x101085a7 */
  goto L_101085a7;
L_10108564:;
  /* 10108564 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10108566 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10108568 je 0x1010856f */
  if (C.zf) goto L_1010856f;
  /* 1010856a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1010856c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1010856e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1010856f:;
  /* 1010856f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10108571 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10108572 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10108575 test byte ptr [ebx + 0x10116c41], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10116c41)))&(0x4u); fl_logic(_r,8); }
  /* 1010857c je 0x1010858a */
  if (C.zf) goto L_1010858a;
  /* 1010857e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10108580 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10108582 je 0x10108589 */
  if (C.zf) goto L_10108589;
  /* 10108584 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10108586 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10108588 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10108589:;
  /* 10108589 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1010858a:;
  /* 1010858a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010858d je 0x10108598 */
  if (C.zf) goto L_10108598;
  /* 1010858f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10108591 je 0x1010859c */
  if (C.zf) goto L_1010859c;
  /* 10108593 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108596 jne 0x10108564 */
  if (!C.zf) goto L_10108564;
L_10108598:;
  /* 10108598 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1010859a jne 0x1010859f */
  if (!C.zf) goto L_1010859f;
L_1010859c:;
  /* 1010859c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010859d jmp 0x101085a7 */
  goto L_101085a7;
L_1010859f:;
  /* 1010859f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101085a1 je 0x101085a7 */
  if (C.zf) goto L_101085a7;
  /* 101085a3 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_101085a7:;
  /* 101085a7 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_101085ab:;
  /* 101085ab cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101085ae je 0x10108694 */
  if (C.zf) goto L_10108694;
L_101085b4:;
  /* 101085b4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101085b6 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101085b9 je 0x101085c0 */
  if (C.zf) goto L_101085c0;
  /* 101085bb cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101085be jne 0x101085c3 */
  if (!C.zf) goto L_101085c3;
L_101085c0:;
  /* 101085c0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101085c1 jmp 0x101085b4 */
  goto L_101085b4;
L_101085c3:;
  /* 101085c3 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101085c6 je 0x10108694 */
  if (C.zf) goto L_10108694;
  /* 101085cc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101085ce je 0x101085d8 */
  if (C.zf) goto L_101085d8;
  /* 101085d0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 101085d2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101085d5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101085d8:;
  /* 101085d8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 101085db inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_101085dd:;
  /* 101085dd mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 101085e4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101085e6:;
  /* 101085e6 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101085e9 jne 0x101085ef */
  if (!C.zf) goto L_101085ef;
  /* 101085eb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101085ec inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101085ed jmp 0x101085e6 */
  goto L_101085e6;
L_101085ef:;
  /* 101085ef cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101085f2 jne 0x10108620 */
  if (!C.zf) goto L_10108620;
  /* 101085f4 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101085f7 jne 0x1010861e */
  if (!C.zf) goto L_1010861e;
  /* 101085f9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101085fb cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101085fe je 0x1010860d */
  if (C.zf) goto L_1010860d;
  /* 10108600 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108604 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10108607 jne 0x1010860d */
  if (!C.zf) goto L_1010860d;
  /* 10108609 mov eax, edx */
  EAX = (EDX);
  /* 1010860b jmp 0x10108610 */
  goto L_10108610;
L_1010860d:;
  /* 1010860d mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10108610:;
  /* 10108610 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10108613 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10108615 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108618 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1010861b mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1010861e:;
  /* 1010861e shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10108620:;
  /* 10108620 mov edx, ebx */
  EDX = (EBX);
  /* 10108622 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10108623 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10108625 je 0x10108635 */
  if (C.zf) goto L_10108635;
  /* 10108627 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10108628:;
  /* 10108628 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1010862a je 0x10108630 */
  if (C.zf) goto L_10108630;
  /* 1010862c mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 1010862f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10108630:;
  /* 10108630 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10108632 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10108633 jne 0x10108628 */
  if (!C.zf) goto L_10108628;
L_10108635:;
  /* 10108635 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10108637 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10108639 je 0x10108685 */
  if (C.zf) goto L_10108685;
  /* 1010863b cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010863f jne 0x1010864b */
  if (!C.zf) goto L_1010864b;
  /* 10108641 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108644 je 0x10108685 */
  if (C.zf) goto L_10108685;
  /* 10108646 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108649 je 0x10108685 */
  if (C.zf) goto L_10108685;
L_1010864b:;
  /* 1010864b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010864f je 0x1010867f */
  if (C.zf) goto L_1010867f;
  /* 10108651 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10108653 je 0x1010866e */
  if (C.zf) goto L_1010866e;
  /* 10108655 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10108658 test byte ptr [ebx + 0x10116c41], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10116c41)))&(0x4u); fl_logic(_r,8); }
  /* 1010865f je 0x10108667 */
  if (C.zf) goto L_10108667;
  /* 10108661 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10108663 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10108664 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10108665 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10108667:;
  /* 10108667 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10108669 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1010866b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010866c jmp 0x1010867d */
  goto L_1010867d;
L_1010866e:;
  /* 1010866e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10108671 test byte ptr [edx + 0x10116c41], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10116c41)))&(0x4u); fl_logic(_r,8); }
  /* 10108678 je 0x1010867d */
  if (C.zf) goto L_1010867d;
  /* 1010867a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010867b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1010867d:;
  /* 1010867d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1010867f:;
  /* 1010867f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10108680 jmp 0x101085dd */
  goto L_101085dd;
L_10108685:;
  /* 10108685 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10108687 je 0x1010868d */
  if (C.zf) goto L_1010868d;
  /* 10108689 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1010868c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1010868d:;
  /* 1010868d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1010868f jmp 0x101085ab */
  goto L_101085ab;
L_10108694:;
  /* 10108694 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10108696 je 0x1010869b */
  if (C.zf) goto L_1010869b;
  /* 10108698 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1010869b:;
  /* 1010869b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1010869e pop edi */
  EDI = (pop32());
  /* 1010869f pop esi */
  ESI = (pop32());
  /* 101086a0 pop ebx */
  EBX = (pop32());
  /* 101086a1 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 101086a3 pop ebp */
  EBP = (pop32());
  /* 101086a4 ret  */
  ESPCHK(0x101084f1u, _esp0);
  ESP += 4; return;
}

/* FUN_100086a5 @ 0x101086a5 (306 bytes, 132 insns) */
void f_101086a5(void) {
  FTRACE(0x101086a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101086a5 push ecx */
  push32((uint32_t)(ECX));
  /* 101086a6 push ecx */
  push32((uint32_t)(ECX));
  /* 101086a7 mov eax, dword ptr [0x101168f0] */
  EAX = (r32((uint32_t)(0x101168f0)));
  /* 101086ac push ebx */
  push32((uint32_t)(EBX));
  /* 101086ad push ebp */
  push32((uint32_t)(EBP));
  /* 101086ae mov ebp, dword ptr [0x1010e068] */
  EBP = (r32((uint32_t)(0x1010e068)));
  /* 101086b4 push esi */
  push32((uint32_t)(ESI));
  /* 101086b5 push edi */
  push32((uint32_t)(EDI));
  /* 101086b6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101086b8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101086ba xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101086bc cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101086be jne 0x101086f3 */
  if (!C.zf) goto L_101086f3;
  /* 101086c0 call ebp */
  call_ind((uint32_t)(EBP), 0x101086c2u);
  /* 101086c2 mov esi, eax */
  ESI = (EAX);
  /* 101086c4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101086c6 je 0x101086d4 */
  if (C.zf) goto L_101086d4;
  /* 101086c8 mov dword ptr [0x101168f0], 1 */
  w32((uint32_t)(0x101168f0), (0x1u));
  /* 101086d2 jmp 0x101086fc */
  goto L_101086fc;
L_101086d4:;
  /* 101086d4 call dword ptr [0x1010e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e064))), 0x101086dau);
  /* 101086da mov edi, eax */
  EDI = (EAX);
  /* 101086dc cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101086de je 0x101087ce */
  if (C.zf) goto L_101087ce;
  /* 101086e4 mov dword ptr [0x101168f0], 2 */
  w32((uint32_t)(0x101168f0), (0x2u));
  /* 101086ee jmp 0x10108782 */
  goto L_10108782;
L_101086f3:;
  /* 101086f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101086f6 jne 0x1010877d */
  if (!C.zf) goto L_1010877d;
L_101086fc:;
  /* 101086fc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101086fe jne 0x1010870c */
  if (!C.zf) goto L_1010870c;
  /* 10108700 call ebp */
  call_ind((uint32_t)(EBP), 0x10108702u);
  /* 10108702 mov esi, eax */
  ESI = (EAX);
  /* 10108704 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108706 je 0x101087ce */
  if (C.zf) goto L_101087ce;
L_1010870c:;
  /* 1010870c cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010870f mov eax, esi */
  EAX = (ESI);
  /* 10108711 je 0x10108721 */
  if (C.zf) goto L_10108721;
L_10108713:;
  /* 10108713 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10108714 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10108715 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10108718 jne 0x10108713 */
  if (!C.zf) goto L_10108713;
  /* 1010871a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010871b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010871c cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010871f jne 0x10108713 */
  if (!C.zf) goto L_10108713;
L_10108721:;
  /* 10108721 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10108723 mov edi, dword ptr [0x1010e060] */
  EDI = (r32((uint32_t)(0x1010e060)));
  /* 10108729 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1010872b push ebx */
  push32((uint32_t)(EBX));
  /* 1010872c push ebx */
  push32((uint32_t)(EBX));
  /* 1010872d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010872e push ebx */
  push32((uint32_t)(EBX));
  /* 1010872f push ebx */
  push32((uint32_t)(EBX));
  /* 10108730 push eax */
  push32((uint32_t)(EAX));
  /* 10108731 push esi */
  push32((uint32_t)(ESI));
  /* 10108732 push ebx */
  push32((uint32_t)(EBX));
  /* 10108733 push ebx */
  push32((uint32_t)(EBX));
  /* 10108734 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10108738 call edi */
  call_ind((uint32_t)(EDI), 0x1010873au);
  /* 1010873a mov ebp, eax */
  EBP = (EAX);
  /* 1010873c cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010873e je 0x10108772 */
  if (C.zf) goto L_10108772;
  /* 10108740 push ebp */
  push32((uint32_t)(EBP));
  /* 10108741 call 0x1010a2ef */
  push32(0x10108746u); f_1010a2ef();
  /* 10108746 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108748 pop ecx */
  ECX = (pop32());
  /* 10108749 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1010874d je 0x10108772 */
  if (C.zf) goto L_10108772;
  /* 1010874f push ebx */
  push32((uint32_t)(EBX));
  /* 10108750 push ebx */
  push32((uint32_t)(EBX));
  /* 10108751 push ebp */
  push32((uint32_t)(EBP));
  /* 10108752 push eax */
  push32((uint32_t)(EAX));
  /* 10108753 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10108757 push esi */
  push32((uint32_t)(ESI));
  /* 10108758 push ebx */
  push32((uint32_t)(EBX));
  /* 10108759 push ebx */
  push32((uint32_t)(EBX));
  /* 1010875a call edi */
  call_ind((uint32_t)(EDI), 0x1010875cu);
  /* 1010875c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010875e jne 0x1010876e */
  if (!C.zf) goto L_1010876e;
  /* 10108760 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10108764 call 0x1010a206 */
  push32(0x10108769u); f_1010a206();
  /* 10108769 pop ecx */
  ECX = (pop32());
  /* 1010876a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1010876e:;
  /* 1010876e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10108772:;
  /* 10108772 push esi */
  push32((uint32_t)(ESI));
  /* 10108773 call dword ptr [0x1010e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e05c))), 0x10108779u);
  /* 10108779 mov eax, ebx */
  EAX = (EBX);
  /* 1010877b jmp 0x101087d0 */
  goto L_101087d0;
L_1010877d:;
  /* 1010877d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108780 jne 0x101087ce */
  if (!C.zf) goto L_101087ce;
L_10108782:;
  /* 10108782 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108784 jne 0x10108792 */
  if (!C.zf) goto L_10108792;
  /* 10108786 call dword ptr [0x1010e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e064))), 0x1010878cu);
  /* 1010878c mov edi, eax */
  EDI = (EAX);
  /* 1010878e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108790 je 0x101087ce */
  if (C.zf) goto L_101087ce;
L_10108792:;
  /* 10108792 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108794 mov eax, edi */
  EAX = (EDI);
  /* 10108796 je 0x101087a2 */
  if (C.zf) goto L_101087a2;
L_10108798:;
  /* 10108798 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10108799 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010879b jne 0x10108798 */
  if (!C.zf) goto L_10108798;
  /* 1010879d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010879e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101087a0 jne 0x10108798 */
  if (!C.zf) goto L_10108798;
L_101087a2:;
  /* 101087a2 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101087a4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101087a5 mov ebp, eax */
  EBP = (EAX);
  /* 101087a7 push ebp */
  push32((uint32_t)(EBP));
  /* 101087a8 call 0x1010a2ef */
  push32(0x101087adu); f_1010a2ef();
  /* 101087ad mov esi, eax */
  ESI = (EAX);
  /* 101087af pop ecx */
  ECX = (pop32());
  /* 101087b0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101087b2 jne 0x101087b8 */
  if (!C.zf) goto L_101087b8;
  /* 101087b4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101087b6 jmp 0x101087c3 */
  goto L_101087c3;
L_101087b8:;
  /* 101087b8 push ebp */
  push32((uint32_t)(EBP));
  /* 101087b9 push edi */
  push32((uint32_t)(EDI));
  /* 101087ba push esi */
  push32((uint32_t)(ESI));
  /* 101087bb call 0x1010a820 */
  push32(0x101087c0u); f_1010a820();
  /* 101087c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101087c3:;
  /* 101087c3 push edi */
  push32((uint32_t)(EDI));
  /* 101087c4 call dword ptr [0x1010e058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e058))), 0x101087cau);
  /* 101087ca mov eax, esi */
  EAX = (ESI);
  /* 101087cc jmp 0x101087d0 */
  goto L_101087d0;
L_101087ce:;
  /* 101087ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101087d0:;
  /* 101087d0 pop edi */
  EDI = (pop32());
  /* 101087d1 pop esi */
  ESI = (pop32());
  /* 101087d2 pop ebp */
  EBP = (pop32());
  /* 101087d3 pop ebx */
  EBX = (pop32());
  /* 101087d4 pop ecx */
  ECX = (pop32());
  /* 101087d5 pop ecx */
  ECX = (pop32());
  /* 101087d6 ret  */
  ESPCHK(0x101086a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100087d7 @ 0x101087d7 (45 bytes, 17 insns) */
void f_101087d7(void) {
  FTRACE(0x101087d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101087d7 push esi */
  push32((uint32_t)(ESI));
  /* 101087d8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101087dc push 0 */
  push32((uint32_t)(0x0u));
  /* 101087de and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101087e1 call dword ptr [0x1010e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e004))), 0x101087e7u);
  /* 101087e7 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101087ec jne 0x10108802 */
  if (!C.zf) goto L_10108802;
  /* 101087ee mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 101087f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101087f3 je 0x10108802 */
  if (C.zf) goto L_10108802;
  /* 101087f5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101087f7 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 101087fa mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 101087fc mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 101087ff mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_10108802:;
  /* 10108802 pop esi */
  ESI = (pop32());
  /* 10108803 ret  */
  ESPCHK(0x101087d7u, _esp0);
  ESP += 4; return;
}

/* FUN_10008804 @ 0x10108804 (328 bytes, 115 insns) */
void f_10108804(void) {
  FTRACE(0x10108804u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108804 push ebp */
  push32((uint32_t)(EBP));
  /* 10108805 mov ebp, esp */
  EBP = (ESP);
  /* 10108807 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 1010880c call 0x1010af10 */
  push32(0x10108811u); f_1010af10();
  /* 10108811 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10108817 push ebx */
  push32((uint32_t)(EBX));
  /* 10108818 push eax */
  push32((uint32_t)(EAX));
  /* 10108819 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 10108823 call dword ptr [0x1010e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e070))), 0x10108829u);
  /* 10108829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010882b je 0x10108847 */
  if (C.zf) goto L_10108847;
  /* 1010882d cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108834 jne 0x10108847 */
  if (!C.zf) goto L_10108847;
  /* 10108836 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010883d jb 0x10108847 */
  if (C.cf) goto L_10108847;
  /* 1010883f push 1 */
  push32((uint32_t)(0x1u));
  /* 10108841 pop eax */
  EAX = (pop32());
  /* 10108842 jmp 0x10108949 */
  goto L_10108949;
L_10108847:;
  /* 10108847 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1010884d push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 10108852 push eax */
  push32((uint32_t)(EAX));
  /* 10108853 push 0x1010e1c8 */
  push32((uint32_t)(0x1010e1c8u));
  /* 10108858 call dword ptr [0x1010e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e06c))), 0x1010885eu);
  /* 1010885e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108860 je 0x10108936 */
  if (C.zf) goto L_10108936;
  /* 10108866 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10108868 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 1010886e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108874 je 0x10108889 */
  if (C.zf) goto L_10108889;
L_10108876:;
  /* 10108876 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10108878 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010887a jl 0x10108884 */
  if ((C.sf!=C.of)) goto L_10108884;
  /* 1010887c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010887e jg 0x10108884 */
  if ((!C.zf&&C.sf==C.of)) goto L_10108884;
  /* 10108880 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10108882 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_10108884:;
  /* 10108884 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10108885 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108887 jne 0x10108876 */
  if (!C.zf) goto L_10108876;
L_10108889:;
  /* 10108889 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1010888f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10108891 push eax */
  push32((uint32_t)(EAX));
  /* 10108892 push 0x1010e1b0 */
  push32((uint32_t)(0x1010e1b0u));
  /* 10108897 call 0x1010aed0 */
  push32(0x1010889cu); f_1010aed0();
  /* 1010889c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010889f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101088a1 jne 0x101088ab */
  if (!C.zf) goto L_101088ab;
  /* 101088a3 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101088a9 jmp 0x101088f4 */
  goto L_101088f4;
L_101088ab:;
  /* 101088ab lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 101088b1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 101088b6 push eax */
  push32((uint32_t)(EAX));
  /* 101088b7 push ebx */
  push32((uint32_t)(EBX));
  /* 101088b8 call dword ptr [0x1010e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e054))), 0x101088beu);
  /* 101088be cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101088c4 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 101088ca je 0x101088df */
  if (C.zf) goto L_101088df;
L_101088cc:;
  /* 101088cc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 101088ce cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101088d0 jl 0x101088da */
  if ((C.sf!=C.of)) goto L_101088da;
  /* 101088d2 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101088d4 jg 0x101088da */
  if ((!C.zf&&C.sf==C.of)) goto L_101088da;
  /* 101088d6 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101088d8 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_101088da:;
  /* 101088da inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101088db cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101088dd jne 0x101088cc */
  if (!C.zf) goto L_101088cc;
L_101088df:;
  /* 101088df lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 101088e5 push eax */
  push32((uint32_t)(EAX));
  /* 101088e6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101088ec push eax */
  push32((uint32_t)(EAX));
  /* 101088ed call 0x1010ae50 */
  push32(0x101088f2u); f_1010ae50();
  /* 101088f2 pop ecx */
  ECX = (pop32());
  /* 101088f3 pop ecx */
  ECX = (pop32());
L_101088f4:;
  /* 101088f4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101088f6 je 0x10108936 */
  if (C.zf) goto L_10108936;
  /* 101088f8 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 101088fa push eax */
  push32((uint32_t)(EAX));
  /* 101088fb call 0x1010ad90 */
  push32(0x10108900u); f_1010ad90();
  /* 10108900 pop ecx */
  ECX = (pop32());
  /* 10108901 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108903 pop ecx */
  ECX = (pop32());
  /* 10108904 je 0x10108936 */
  if (C.zf) goto L_10108936;
  /* 10108906 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10108907 mov ecx, eax */
  ECX = (EAX);
  /* 10108909 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010890b je 0x1010891b */
  if (C.zf) goto L_1010891b;
L_1010890d:;
  /* 1010890d cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108910 jne 0x10108916 */
  if (!C.zf) goto L_10108916;
  /* 10108912 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 10108914 jmp 0x10108917 */
  goto L_10108917;
L_10108916:;
  /* 10108916 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_10108917:;
  /* 10108917 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108919 jne 0x1010890d */
  if (!C.zf) goto L_1010890d;
L_1010891b:;
  /* 1010891b push 0xa */
  push32((uint32_t)(0xau));
  /* 1010891d push ebx */
  push32((uint32_t)(EBX));
  /* 1010891e push eax */
  push32((uint32_t)(EAX));
  /* 1010891f call 0x1010ab55 */
  push32(0x10108924u); f_1010ab55();
  /* 10108924 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10108927 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010892a je 0x10108949 */
  if (C.zf) goto L_10108949;
  /* 1010892c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010892f je 0x10108949 */
  if (C.zf) goto L_10108949;
  /* 10108931 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108934 je 0x10108949 */
  if (C.zf) goto L_10108949;
L_10108936:;
  /* 10108936 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10108939 push eax */
  push32((uint32_t)(EAX));
  /* 1010893a call 0x101087d7 */
  push32(0x1010893fu); f_101087d7();
  /* 1010893f cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108943 pop ecx */
  ECX = (pop32());
  /* 10108944 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10108946 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10108949:;
  /* 10108949 pop ebx */
  EBX = (pop32());
  /* 1010894a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010894b ret  */
  ESPCHK(0x10108804u, _esp0);
  ESP += 4; return;
}

/* FUN_1000894c @ 0x1010894c (93 bytes, 30 insns) */
void f_1010894c(void) {
  FTRACE(0x1010894cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010894c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010894e push 0 */
  push32((uint32_t)(0x0u));
  /* 10108950 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108954 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10108959 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1010895c push eax */
  push32((uint32_t)(EAX));
  /* 1010895d call dword ptr [0x1010e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e078))), 0x10108963u);
  /* 10108963 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108965 mov dword ptr [0x10117d64], eax */
  w32((uint32_t)(0x10117d64), (EAX));
  /* 1010896a je 0x101089a2 */
  if (C.zf) goto L_101089a2;
  /* 1010896c call 0x10108804 */
  push32(0x10108971u); f_10108804();
  /* 10108971 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108974 mov dword ptr [0x10117d68], eax */
  w32((uint32_t)(0x10117d68), (EAX));
  /* 10108979 jne 0x10108988 */
  if (!C.zf) goto L_10108988;
  /* 1010897b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 10108980 call 0x1010af3f */
  push32(0x10108985u); f_1010af3f();
  /* 10108985 pop ecx */
  ECX = (pop32());
  /* 10108986 jmp 0x10108992 */
  goto L_10108992;
L_10108988:;
  /* 10108988 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010898b jne 0x101089a5 */
  if (!C.zf) goto L_101089a5;
  /* 1010898d call 0x1010b790 */
  push32(0x10108992u); f_1010b790();
L_10108992:;
  /* 10108992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108994 jne 0x101089a5 */
  if (!C.zf) goto L_101089a5;
  /* 10108996 push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
  /* 1010899c call dword ptr [0x1010e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e074))), 0x101089a2u);
L_101089a2:;
  /* 101089a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101089a4 ret  */
  ESPCHK(0x1010894cu, _esp0);
  ESP += 4; return;
L_101089a5:;
  /* 101089a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101089a7 pop eax */
  EAX = (pop32());
  /* 101089a8 ret  */
  ESPCHK(0x1010894cu, _esp0);
  ESP += 4; return;
}

/* FUN_100089a9 @ 0x101089a9 (168 bytes, 56 insns) */
void f_101089a9(void) {
  FTRACE(0x101089a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101089a9 mov eax, dword ptr [0x10117d68] */
  EAX = (r32((uint32_t)(0x10117d68)));
  /* 101089ae push esi */
  push32((uint32_t)(ESI));
  /* 101089af cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101089b2 push edi */
  push32((uint32_t)(EDI));
  /* 101089b3 jne 0x10108a1b */
  if (!C.zf) goto L_10108a1b;
  /* 101089b5 push ebx */
  push32((uint32_t)(EBX));
  /* 101089b6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101089b8 cmp dword ptr [0x10116b18], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10116b18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101089be push ebp */
  push32((uint32_t)(EBP));
  /* 101089bf mov ebp, dword ptr [0x1010e080] */
  EBP = (r32((uint32_t)(0x1010e080)));
  /* 101089c5 jle 0x10108a07 */
  if ((C.zf||C.sf!=C.of)) goto L_10108a07;
  /* 101089c7 mov eax, dword ptr [0x10116b1c] */
  EAX = (r32((uint32_t)(0x10116b1c)));
  /* 101089cc mov edi, dword ptr [0x1010e07c] */
  EDI = (r32((uint32_t)(0x1010e07c)));
  /* 101089d2 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_101089d5:;
  /* 101089d5 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 101089da push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 101089df push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101089e1 call edi */
  call_ind((uint32_t)(EDI), 0x101089e3u);
  /* 101089e3 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101089e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101089ea push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101089ec call edi */
  call_ind((uint32_t)(EDI), 0x101089eeu);
  /* 101089ee push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 101089f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101089f3 push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
  /* 101089f9 call ebp */
  call_ind((uint32_t)(EBP), 0x101089fbu);
  /* 101089fb add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101089fe inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101089ff cmp ebx, dword ptr [0x10116b18] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10116b18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108a05 jl 0x101089d5 */
  if ((C.sf!=C.of)) goto L_101089d5;
L_10108a07:;
  /* 10108a07 push dword ptr [0x10116b1c] */
  push32((uint32_t)(r32((uint32_t)(0x10116b1c))));
  /* 10108a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10108a0f push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
  /* 10108a15 call ebp */
  call_ind((uint32_t)(EBP), 0x10108a17u);
  /* 10108a17 pop ebp */
  EBP = (pop32());
  /* 10108a18 pop ebx */
  EBX = (pop32());
  /* 10108a19 jmp 0x10108a42 */
  goto L_10108a42;
L_10108a1b:;
  /* 10108a1b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108a1e jne 0x10108a42 */
  if (!C.zf) goto L_10108a42;
  /* 10108a20 mov edi, 0x10110fb0 */
  EDI = (0x10110fb0u);
  /* 10108a25 mov esi, edi */
  ESI = (EDI);
L_10108a27:;
  /* 10108a27 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10108a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108a2c je 0x10108a3c */
  if (C.zf) goto L_10108a3c;
  /* 10108a2e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10108a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10108a35 push eax */
  push32((uint32_t)(EAX));
  /* 10108a36 call dword ptr [0x1010e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e07c))), 0x10108a3cu);
L_10108a3c:;
  /* 10108a3c mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 10108a3e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108a40 jne 0x10108a27 */
  if (!C.zf) goto L_10108a27;
L_10108a42:;
  /* 10108a42 push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
  /* 10108a48 call dword ptr [0x1010e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e074))), 0x10108a4eu);
  /* 10108a4e pop edi */
  EDI = (pop32());
  /* 10108a4f pop esi */
  ESI = (pop32());
  /* 10108a50 ret  */
  ESPCHK(0x101089a9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a51 @ 0x10108a51 (57 bytes, 18 insns) */
void f_10108a51(void) {
  FTRACE(0x10108a51u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108a51 mov eax, dword ptr [0x101167a0] */
  EAX = (r32((uint32_t)(0x101167a0)));
  /* 10108a56 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108a59 je 0x10108a68 */
  if (C.zf) goto L_10108a68;
  /* 10108a5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108a5d jne 0x10108a89 */
  if (!C.zf) goto L_10108a89;
  /* 10108a5f cmp dword ptr [0x101167a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101167a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108a66 jne 0x10108a89 */
  if (!C.zf) goto L_10108a89;
L_10108a68:;
  /* 10108a68 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10108a6d call 0x10108a8a */
  push32(0x10108a72u); f_10108a8a();
  /* 10108a72 mov eax, dword ptr [0x101168f4] */
  EAX = (r32((uint32_t)(0x101168f4)));
  /* 10108a77 pop ecx */
  ECX = (pop32());
  /* 10108a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108a7a je 0x10108a7e */
  if (C.zf) goto L_10108a7e;
  /* 10108a7c call eax */
  call_ind((uint32_t)(EAX), 0x10108a7eu);
L_10108a7e:;
  /* 10108a7e push 0xff */
  push32((uint32_t)(0xffu));
  /* 10108a83 call 0x10108a8a */
  push32(0x10108a88u); f_10108a8a();
  /* 10108a88 pop ecx */
  ECX = (pop32());
L_10108a89:;
  /* 10108a89 ret  */
  ESPCHK(0x10108a51u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a8a @ 0x10108a8a (339 bytes, 100 insns) */
void f_10108a8a(void) {
  FTRACE(0x10108a8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108a8a push ebp */
  push32((uint32_t)(EBP));
  /* 10108a8b mov ebp, esp */
  EBP = (ESP);
  /* 10108a8d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10108a93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10108a96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10108a98 mov eax, 0x10110808 */
  EAX = (0x10110808u);
L_10108a9d:;
  /* 10108a9d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108a9f je 0x10108aac */
  if (C.zf) goto L_10108aac;
  /* 10108aa1 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10108aa4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10108aa5 cmp eax, 0x10110898 */
  { uint32_t _a=(EAX),_b=(0x10110898u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108aaa jl 0x10108a9d */
  if ((C.sf!=C.of)) goto L_10108a9d;
L_10108aac:;
  /* 10108aac push esi */
  push32((uint32_t)(ESI));
  /* 10108aad mov esi, ecx */
  ESI = (ECX);
  /* 10108aaf shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10108ab2 cmp edx, dword ptr [esi + 0x10110808] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10110808))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108ab8 jne 0x10108bda */
  if (!C.zf) goto L_10108bda;
  /* 10108abe mov eax, dword ptr [0x101167a0] */
  EAX = (r32((uint32_t)(0x101167a0)));
  /* 10108ac3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108ac6 je 0x10108bb4 */
  if (C.zf) goto L_10108bb4;
  /* 10108acc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108ace jne 0x10108add */
  if (!C.zf) goto L_10108add;
  /* 10108ad0 cmp dword ptr [0x101167a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101167a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108ad7 je 0x10108bb4 */
  if (C.zf) goto L_10108bb4;
L_10108add:;
  /* 10108add cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108ae3 je 0x10108bda */
  if (C.zf) goto L_10108bda;
  /* 10108ae9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10108aef push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10108af4 push eax */
  push32((uint32_t)(EAX));
  /* 10108af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10108af7 call dword ptr [0x1010e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e054))), 0x10108afdu);
  /* 10108afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108aff jne 0x10108b14 */
  if (!C.zf) goto L_10108b14;
  /* 10108b01 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10108b07 push 0x1010e4b8 */
  push32((uint32_t)(0x1010e4b8u));
  /* 10108b0c push eax */
  push32((uint32_t)(EAX));
  /* 10108b0d call 0x10109b30 */
  push32(0x10108b12u); f_10109b30();
  /* 10108b12 pop ecx */
  ECX = (pop32());
  /* 10108b13 pop ecx */
  ECX = (pop32());
L_10108b14:;
  /* 10108b14 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10108b1a push edi */
  push32((uint32_t)(EDI));
  /* 10108b1b push eax */
  push32((uint32_t)(EAX));
  /* 10108b1c lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10108b22 call 0x10109080 */
  push32(0x10108b27u); f_10109080();
  /* 10108b27 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10108b28 pop ecx */
  ECX = (pop32());
  /* 10108b29 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108b2c jbe 0x10108b57 */
  if ((C.cf||C.zf)) goto L_10108b57;
  /* 10108b2e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10108b34 push eax */
  push32((uint32_t)(EAX));
  /* 10108b35 call 0x10109080 */
  push32(0x10108b3au); f_10109080();
  /* 10108b3a mov edi, eax */
  EDI = (EAX);
  /* 10108b3c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10108b42 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10108b45 push 3 */
  push32((uint32_t)(0x3u));
  /* 10108b47 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10108b49 push 0x1010e4b4 */
  push32((uint32_t)(0x1010e4b4u));
  /* 10108b4e push edi */
  push32((uint32_t)(EDI));
  /* 10108b4f call 0x1010be40 */
  push32(0x10108b54u); f_1010be40();
  /* 10108b54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10108b57:;
  /* 10108b57 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10108b5d push 0x1010e498 */
  push32((uint32_t)(0x1010e498u));
  /* 10108b62 push eax */
  push32((uint32_t)(EAX));
  /* 10108b63 call 0x10109b30 */
  push32(0x10108b68u); f_10109b30();
  /* 10108b68 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10108b6e push edi */
  push32((uint32_t)(EDI));
  /* 10108b6f push eax */
  push32((uint32_t)(EAX));
  /* 10108b70 call 0x10109b40 */
  push32(0x10108b75u); f_10109b40();
  /* 10108b75 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10108b7b push 0x1010e494 */
  push32((uint32_t)(0x1010e494u));
  /* 10108b80 push eax */
  push32((uint32_t)(EAX));
  /* 10108b81 call 0x10109b40 */
  push32(0x10108b86u); f_10109b40();
  /* 10108b86 push dword ptr [esi + 0x1011080c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1011080c))));
  /* 10108b8c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10108b92 push eax */
  push32((uint32_t)(EAX));
  /* 10108b93 call 0x10109b40 */
  push32(0x10108b98u); f_10109b40();
  /* 10108b98 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10108b9d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10108ba3 push 0x1010e46c */
  push32((uint32_t)(0x1010e46cu));
  /* 10108ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10108ba9 call 0x1010bdb4 */
  push32(0x10108baeu); f_1010bdb4();
  /* 10108bae add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10108bb1 pop edi */
  EDI = (pop32());
  /* 10108bb2 jmp 0x10108bda */
  goto L_10108bda;
L_10108bb4:;
  /* 10108bb4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10108bb7 lea esi, [esi + 0x1011080c] */
  ESI = ((uint32_t)(ESI + 0x1011080c));
  /* 10108bbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10108bbf push eax */
  push32((uint32_t)(EAX));
  /* 10108bc0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10108bc2 call 0x10109080 */
  push32(0x10108bc7u); f_10109080();
  /* 10108bc7 pop ecx */
  ECX = (pop32());
  /* 10108bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10108bc9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10108bcb push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10108bcd call dword ptr [0x1010e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e044))), 0x10108bd3u);
  /* 10108bd3 push eax */
  push32((uint32_t)(EAX));
  /* 10108bd4 call dword ptr [0x1010e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e084))), 0x10108bdau);
L_10108bda:;
  /* 10108bda pop esi */
  ESI = (pop32());
  /* 10108bdb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10108bdc ret  */
  ESPCHK(0x10108a8au, _esp0);
  ESP += 4; return;
}

/* FUN_10008bdd @ 0x10108bdd (101 bytes, 34 insns) */
void f_10108bdd(void) {
  FTRACE(0x10108bddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108bdd push esi */
  push32((uint32_t)(ESI));
  /* 10108bde mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10108be2 cmp esi, dword ptr [0x10117e80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10117e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108be8 jae 0x10108c2a */
  if (!C.cf) goto L_10108c2a;
  /* 10108bea mov ecx, esi */
  ECX = (ESI);
  /* 10108bec mov eax, esi */
  EAX = (ESI);
  /* 10108bee sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10108bf1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10108bf4 mov ecx, dword ptr [ecx*4 + 0x10117d80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10117d80)));
  /* 10108bfb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10108bfe test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10108c03 je 0x10108c2a */
  if (C.zf) goto L_10108c2a;
  /* 10108c05 push edi */
  push32((uint32_t)(EDI));
  /* 10108c06 push esi */
  push32((uint32_t)(ESI));
  /* 10108c07 call 0x1010c084 */
  push32(0x10108c0cu); f_1010c084();
  /* 10108c0c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10108c10 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10108c14 push esi */
  push32((uint32_t)(ESI));
  /* 10108c15 call 0x10108c42 */
  push32(0x10108c1au); f_10108c42();
  /* 10108c1a push esi */
  push32((uint32_t)(ESI));
  /* 10108c1b mov edi, eax */
  EDI = (EAX);
  /* 10108c1d call 0x1010c0e3 */
  push32(0x10108c22u); f_1010c0e3();
  /* 10108c22 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10108c25 mov eax, edi */
  EAX = (EDI);
  /* 10108c27 pop edi */
  EDI = (pop32());
  /* 10108c28 pop esi */
  ESI = (pop32());
  /* 10108c29 ret  */
  ESPCHK(0x10108bddu, _esp0);
  ESP += 4; return;
L_10108c2a:;
  /* 10108c2a call 0x1010bfb1 */
  push32(0x10108c2fu); f_1010bfb1();
  /* 10108c2f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10108c35 call 0x1010bfba */
  push32(0x10108c3au); f_1010bfba();
  /* 10108c3a and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10108c3d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10108c40 pop esi */
  ESI = (pop32());
  /* 10108c41 ret  */
  ESPCHK(0x10108bddu, _esp0);
  ESP += 4; return;
}

/* FUN_10008c42 @ 0x10108c42 (115 bytes, 41 insns) */
void f_10108c42(void) {
  FTRACE(0x10108c42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108c42 push esi */
  push32((uint32_t)(ESI));
  /* 10108c43 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10108c47 push edi */
  push32((uint32_t)(EDI));
  /* 10108c48 push esi */
  push32((uint32_t)(ESI));
  /* 10108c49 call 0x1010c042 */
  push32(0x10108c4eu); f_1010c042();
  /* 10108c4e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108c51 pop ecx */
  ECX = (pop32());
  /* 10108c52 jne 0x10108c61 */
  if (!C.zf) goto L_10108c61;
  /* 10108c54 call 0x1010bfb1 */
  push32(0x10108c59u); f_1010bfb1();
  /* 10108c59 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10108c5f jmp 0x10108c8e */
  goto L_10108c8e;
L_10108c61:;
  /* 10108c61 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10108c65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10108c67 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10108c6b push eax */
  push32((uint32_t)(EAX));
  /* 10108c6c call dword ptr [0x1010e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e000))), 0x10108c72u);
  /* 10108c72 mov edi, eax */
  EDI = (EAX);
  /* 10108c74 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108c77 jne 0x10108c81 */
  if (!C.zf) goto L_10108c81;
  /* 10108c79 call dword ptr [0x1010e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e03c))), 0x10108c7fu);
  /* 10108c7f jmp 0x10108c83 */
  goto L_10108c83;
L_10108c81:;
  /* 10108c81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10108c83:;
  /* 10108c83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108c85 je 0x10108c93 */
  if (C.zf) goto L_10108c93;
  /* 10108c87 push eax */
  push32((uint32_t)(EAX));
  /* 10108c88 call 0x1010bf3e */
  push32(0x10108c8du); f_1010bf3e();
  /* 10108c8d pop ecx */
  ECX = (pop32());
L_10108c8e:;
  /* 10108c8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10108c91 jmp 0x10108cb2 */
  goto L_10108cb2;
L_10108c93:;
  /* 10108c93 mov ecx, esi */
  ECX = (ESI);
  /* 10108c95 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10108c98 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10108c9b mov eax, esi */
  EAX = (ESI);
  /* 10108c9d mov ecx, dword ptr [ecx*4 + 0x10117d80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10117d80)));
  /* 10108ca4 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10108ca7 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10108cac lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 10108cb0 mov eax, edi */
  EAX = (EDI);
L_10108cb2:;
  /* 10108cb2 pop edi */
  EDI = (pop32());
  /* 10108cb3 pop esi */
  ESI = (pop32());
  /* 10108cb4 ret  */
  ESPCHK(0x10108c42u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cb5 @ 0x10108cb5 (101 bytes, 34 insns) */
void f_10108cb5(void) {
  FTRACE(0x10108cb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108cb5 push esi */
  push32((uint32_t)(ESI));
  /* 10108cb6 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10108cba cmp esi, dword ptr [0x10117e80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10117e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108cc0 jae 0x10108d02 */
  if (!C.cf) goto L_10108d02;
  /* 10108cc2 mov ecx, esi */
  ECX = (ESI);
  /* 10108cc4 mov eax, esi */
  EAX = (ESI);
  /* 10108cc6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10108cc9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10108ccc mov ecx, dword ptr [ecx*4 + 0x10117d80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10117d80)));
  /* 10108cd3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10108cd6 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10108cdb je 0x10108d02 */
  if (C.zf) goto L_10108d02;
  /* 10108cdd push edi */
  push32((uint32_t)(EDI));
  /* 10108cde push esi */
  push32((uint32_t)(ESI));
  /* 10108cdf call 0x1010c084 */
  push32(0x10108ce4u); f_1010c084();
  /* 10108ce4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10108ce8 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10108cec push esi */
  push32((uint32_t)(ESI));
  /* 10108ced call 0x10108d1a */
  push32(0x10108cf2u); f_10108d1a();
  /* 10108cf2 push esi */
  push32((uint32_t)(ESI));
  /* 10108cf3 mov edi, eax */
  EDI = (EAX);
  /* 10108cf5 call 0x1010c0e3 */
  push32(0x10108cfau); f_1010c0e3();
  /* 10108cfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10108cfd mov eax, edi */
  EAX = (EDI);
  /* 10108cff pop edi */
  EDI = (pop32());
  /* 10108d00 pop esi */
  ESI = (pop32());
  /* 10108d01 ret  */
  ESPCHK(0x10108cb5u, _esp0);
  ESP += 4; return;
L_10108d02:;
  /* 10108d02 call 0x1010bfb1 */
  push32(0x10108d07u); f_1010bfb1();
  /* 10108d07 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10108d0d call 0x1010bfba */
  push32(0x10108d12u); f_1010bfba();
  /* 10108d12 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10108d15 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10108d18 pop esi */
  ESI = (pop32());
  /* 10108d19 ret  */
  ESPCHK(0x10108cb5u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d1a @ 0x10108d1a (395 bytes, 135 insns) */
void f_10108d1a(void) {
  FTRACE(0x10108d1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108d1a push ebp */
  push32((uint32_t)(EBP));
  /* 10108d1b mov ebp, esp */
  EBP = (ESP);
  /* 10108d1d sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10108d23 push ebx */
  push32((uint32_t)(EBX));
  /* 10108d24 push esi */
  push32((uint32_t)(ESI));
  /* 10108d25 push edi */
  push32((uint32_t)(EDI));
  /* 10108d26 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10108d28 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108d2b mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10108d2e mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10108d31 jne 0x10108d3a */
  if (!C.zf) goto L_10108d3a;
L_10108d33:;
  /* 10108d33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10108d35 jmp 0x10108ea0 */
  goto L_10108ea0;
L_10108d3a:;
  /* 10108d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10108d3d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10108d40 lea ebx, [eax*4 + 0x10117d80] */
  EBX = ((uint32_t)(EAX*4 + 0x10117d80));
  /* 10108d47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10108d4a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10108d4d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10108d50 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10108d52 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10108d55 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10108d5a je 0x10108d6a */
  if (C.zf) goto L_10108d6a;
  /* 10108d5c push 2 */
  push32((uint32_t)(0x2u));
  /* 10108d5e push edi */
  push32((uint32_t)(EDI));
  /* 10108d5f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10108d62 call 0x10108c42 */
  push32(0x10108d67u); f_10108c42();
  /* 10108d67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10108d6a:;
  /* 10108d6a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10108d6c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10108d6e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10108d72 je 0x10108e39 */
  if (C.zf) goto L_10108e39;
  /* 10108d78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10108d7b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108d7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10108d81 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10108d84 jbe 0x10108e74 */
  if ((C.cf||C.zf)) goto L_10108e74;
L_10108d8a:;
  /* 10108d8a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_10108d90:;
  /* 10108d90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10108d93 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10108d96 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108d99 jae 0x10108dc4 */
  if (!C.cf) goto L_10108dc4;
  /* 10108d9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10108d9e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10108da1 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10108da3 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108da6 jne 0x10108daf */
  if (!C.zf) goto L_10108daf;
  /* 10108da8 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10108dab mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10108dae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10108daf:;
  /* 10108daf mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10108db1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10108db2 mov ecx, eax */
  ECX = (EAX);
  /* 10108db4 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10108dba sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10108dbc cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108dc2 jl 0x10108d90 */
  if ((C.sf!=C.of)) goto L_10108d90;
L_10108dc4:;
  /* 10108dc4 mov edi, eax */
  EDI = (EAX);
  /* 10108dc6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10108dcc sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10108dce lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10108dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10108dd3 push eax */
  push32((uint32_t)(EAX));
  /* 10108dd4 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10108dda push edi */
  push32((uint32_t)(EDI));
  /* 10108ddb push eax */
  push32((uint32_t)(EAX));
  /* 10108ddc mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10108dde push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10108de1 call dword ptr [0x1010e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e084))), 0x10108de7u);
  /* 10108de7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108de9 je 0x10108e2e */
  if (C.zf) goto L_10108e2e;
  /* 10108deb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10108dee add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10108df1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108df3 jl 0x10108e00 */
  if ((C.sf!=C.of)) goto L_10108e00;
  /* 10108df5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10108df8 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10108dfb cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108dfe jb 0x10108d8a */
  if (C.cf) goto L_10108d8a;
L_10108e00:;
  /* 10108e00 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10108e02:;
  /* 10108e02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10108e05 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108e07 jne 0x10108e9d */
  if (!C.zf) goto L_10108e9d;
  /* 10108e0d cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108e10 je 0x10108e74 */
  if (C.zf) goto L_10108e74;
  /* 10108e12 push 5 */
  push32((uint32_t)(0x5u));
  /* 10108e14 pop esi */
  ESI = (pop32());
  /* 10108e15 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108e18 jne 0x10108e66 */
  if (!C.zf) goto L_10108e66;
  /* 10108e1a call 0x1010bfb1 */
  push32(0x10108e1fu); f_1010bfb1();
  /* 10108e1f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10108e25 call 0x1010bfba */
  push32(0x10108e2au); f_1010bfba();
  /* 10108e2a mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10108e2c jmp 0x10108e6f */
  goto L_10108e6f;
L_10108e2e:;
  /* 10108e2e call dword ptr [0x1010e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e03c))), 0x10108e34u);
  /* 10108e34 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10108e37 jmp 0x10108e00 */
  goto L_10108e00;
L_10108e39:;
  /* 10108e39 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10108e3c push edi */
  push32((uint32_t)(EDI));
  /* 10108e3d push ecx */
  push32((uint32_t)(ECX));
  /* 10108e3e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10108e41 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10108e44 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10108e46 call dword ptr [0x1010e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e084))), 0x10108e4cu);
  /* 10108e4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108e4e je 0x10108e5b */
  if (C.zf) goto L_10108e5b;
  /* 10108e50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10108e53 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10108e56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10108e59 jmp 0x10108e02 */
  goto L_10108e02;
L_10108e5b:;
  /* 10108e5b call dword ptr [0x1010e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e03c))), 0x10108e61u);
  /* 10108e61 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10108e64 jmp 0x10108e02 */
  goto L_10108e02;
L_10108e66:;
  /* 10108e66 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10108e69 call 0x1010bf3e */
  push32(0x10108e6eu); f_1010bf3e();
  /* 10108e6e pop ecx */
  ECX = (pop32());
L_10108e6f:;
  /* 10108e6f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10108e72 jmp 0x10108ea0 */
  goto L_10108ea0;
L_10108e74:;
  /* 10108e74 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10108e76 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10108e7b je 0x10108e89 */
  if (C.zf) goto L_10108e89;
  /* 10108e7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10108e80 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10108e83 je 0x10108d33 */
  if (C.zf) goto L_10108d33;
L_10108e89:;
  /* 10108e89 call 0x1010bfb1 */
  push32(0x10108e8eu); f_1010bfb1();
  /* 10108e8e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10108e94 call 0x1010bfba */
  push32(0x10108e99u); f_1010bfba();
  /* 10108e99 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10108e9b jmp 0x10108e6f */
  goto L_10108e6f;
L_10108e9d:;
  /* 10108e9d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10108ea0:;
  /* 10108ea0 pop edi */
  EDI = (pop32());
  /* 10108ea1 pop esi */
  ESI = (pop32());
  /* 10108ea2 pop ebx */
  EBX = (pop32());
  /* 10108ea3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10108ea4 ret  */
  ESPCHK(0x10108d1au, _esp0);
  ESP += 4; return;
}

/* FUN_10008ea5 @ 0x10108ea5 (68 bytes, 19 insns) */
void f_10108ea5(void) {
  FTRACE(0x10108ea5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108ea5 inc dword ptr [0x101168f8] */
  { uint32_t _r=(r32((uint32_t)(0x101168f8)))+1; w32((uint32_t)(0x101168f8), (_r)); fl_inc(_r,32); }
  /* 10108eab push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10108eb0 call 0x1010a2ef */
  push32(0x10108eb5u); f_1010a2ef();
  /* 10108eb5 pop ecx */
  ECX = (pop32());
  /* 10108eb6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10108eba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10108ebc mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10108ebf je 0x10108ece */
  if (C.zf) goto L_10108ece;
  /* 10108ec1 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10108ec5 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 10108ecc jmp 0x10108edf */
  goto L_10108edf;
L_10108ece:;
  /* 10108ece or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10108ed2 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10108ed5 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10108ed8 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_10108edf:;
  /* 10108edf mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10108ee2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10108ee6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10108ee8 ret  */
  ESPCHK(0x10108ea5u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ee9 @ 0x10108ee9 (41 bytes, 13 insns) */
void f_10108ee9(void) {
  FTRACE(0x10108ee9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108ee9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10108eed cmp eax, dword ptr [0x10117e80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10117e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108ef3 jb 0x10108ef8 */
  if (C.cf) goto L_10108ef8;
  /* 10108ef5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10108ef7 ret  */
  ESPCHK(0x10108ee9u, _esp0);
  ESP += 4; return;
L_10108ef8:;
  /* 10108ef8 mov ecx, eax */
  ECX = (EAX);
  /* 10108efa and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10108efd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10108f00 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10108f03 mov ecx, dword ptr [ecx*4 + 0x10117d80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10117d80)));
  /* 10108f0a mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10108f0e and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10108f11 ret  */
  ESPCHK(0x10108ee9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fce @ 0x10108fce (47 bytes, 17 insns) */
void f_10108fce(void) {
  FTRACE(0x10108fceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108fce mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10108fd2 mov ecx, 0x10110898 */
  ECX = (0x10110898u);
  /* 10108fd7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108fd9 jb 0x10108ff2 */
  if (C.cf) goto L_10108ff2;
  /* 10108fdb cmp eax, 0x10110af8 */
  { uint32_t _a=(EAX),_b=(0x10110af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10108fe0 ja 0x10108ff2 */
  if ((!C.cf&&!C.zf)) goto L_10108ff2;
  /* 10108fe2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10108fe4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10108fe7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10108fea push eax */
  push32((uint32_t)(EAX));
  /* 10108feb call 0x1010a053 */
  push32(0x10108ff0u); f_1010a053();
  /* 10108ff0 pop ecx */
  ECX = (pop32());
  /* 10108ff1 ret  */
  ESPCHK(0x10108fceu, _esp0);
  ESP += 4; return;
L_10108ff2:;
  /* 10108ff2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10108ff5 push eax */
  push32((uint32_t)(EAX));
  /* 10108ff6 call dword ptr [0x1010e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e00c))), 0x10108ffcu);
  /* 10108ffc ret  */
  ESPCHK(0x10108fceu, _esp0);
  ESP += 4; return;
}

/* FUN_10008ffd @ 0x10108ffd (35 bytes, 13 insns) */
void f_10108ffd(void) {
  FTRACE(0x10108ffdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10108ffd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10109001 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109004 jge 0x10109011 */
  if ((C.sf==C.of)) goto L_10109011;
  /* 10109006 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10109009 push eax */
  push32((uint32_t)(EAX));
  /* 1010900a call 0x1010a053 */
  push32(0x1010900fu); f_1010a053();
  /* 1010900f pop ecx */
  ECX = (pop32());
  /* 10109010 ret  */
  ESPCHK(0x10108ffdu, _esp0);
  ESP += 4; return;
L_10109011:;
  /* 10109011 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10109015 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10109018 push eax */
  push32((uint32_t)(EAX));
  /* 10109019 call dword ptr [0x1010e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e00c))), 0x1010901fu);
  /* 1010901f ret  */
  ESPCHK(0x10108ffdu, _esp0);
  ESP += 4; return;
}

/* FUN_10009020 @ 0x10109020 (47 bytes, 17 insns) */
void f_10109020(void) {
  FTRACE(0x10109020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109020 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10109024 mov ecx, 0x10110898 */
  ECX = (0x10110898u);
  /* 10109029 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010902b jb 0x10109044 */
  if (C.cf) goto L_10109044;
  /* 1010902d cmp eax, 0x10110af8 */
  { uint32_t _a=(EAX),_b=(0x10110af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109032 ja 0x10109044 */
  if ((!C.cf&&!C.zf)) goto L_10109044;
  /* 10109034 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109036 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10109039 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010903c push eax */
  push32((uint32_t)(EAX));
  /* 1010903d call 0x1010a0b4 */
  push32(0x10109042u); f_1010a0b4();
  /* 10109042 pop ecx */
  ECX = (pop32());
  /* 10109043 ret  */
  ESPCHK(0x10109020u, _esp0);
  ESP += 4; return;
L_10109044:;
  /* 10109044 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10109047 push eax */
  push32((uint32_t)(EAX));
  /* 10109048 call dword ptr [0x1010e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e008))), 0x1010904eu);
  /* 1010904e ret  */
  ESPCHK(0x10109020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000904f @ 0x1010904f (35 bytes, 13 insns) */
void f_1010904f(void) {
  FTRACE(0x1010904fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010904f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10109053 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109056 jge 0x10109063 */
  if ((C.sf==C.of)) goto L_10109063;
  /* 10109058 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010905b push eax */
  push32((uint32_t)(EAX));
  /* 1010905c call 0x1010a0b4 */
  push32(0x10109061u); f_1010a0b4();
  /* 10109061 pop ecx */
  ECX = (pop32());
  /* 10109062 ret  */
  ESPCHK(0x1010904fu, _esp0);
  ESP += 4; return;
L_10109063:;
  /* 10109063 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10109067 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010906a push eax */
  push32((uint32_t)(EAX));
  /* 1010906b call dword ptr [0x1010e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e008))), 0x10109071u);
  /* 10109071 ret  */
  ESPCHK(0x1010904fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10109080 (123 bytes, 44 insns) */
void f_10109080(void) {
  FTRACE(0x10109080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109080 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10109084 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1010908a je 0x101090a0 */
  if (C.zf) goto L_101090a0;
L_1010908c:;
  /* 1010908c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1010908e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1010908f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10109091 je 0x101090d3 */
  if (C.zf) goto L_101090d3;
  /* 10109093 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10109099 jne 0x1010908c */
  if (!C.zf) goto L_1010908c;
  /* 1010909b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101090a0:;
  /* 101090a0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 101090a2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 101090a7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101090a9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101090ac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101090ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101090b1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 101090b6 je 0x101090a0 */
  if (C.zf) goto L_101090a0;
  /* 101090b8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 101090bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101090bd je 0x101090f1 */
  if (C.zf) goto L_101090f1;
  /* 101090bf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 101090c1 je 0x101090e7 */
  if (C.zf) goto L_101090e7;
  /* 101090c3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 101090c8 je 0x101090dd */
  if (C.zf) goto L_101090dd;
  /* 101090ca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 101090cf je 0x101090d3 */
  if (C.zf) goto L_101090d3;
  /* 101090d1 jmp 0x101090a0 */
  goto L_101090a0;
L_101090d3:;
  /* 101090d3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 101090d6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101090da sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101090dc ret  */
  ESPCHK(0x10109080u, _esp0);
  ESP += 4; return;
L_101090dd:;
  /* 101090dd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 101090e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101090e4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101090e6 ret  */
  ESPCHK(0x10109080u, _esp0);
  ESP += 4; return;
L_101090e7:;
  /* 101090e7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 101090ea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101090ee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101090f0 ret  */
  ESPCHK(0x10109080u, _esp0);
  ESP += 4; return;
L_101090f1:;
  /* 101090f1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 101090f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101090f8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101090fa ret  */
  ESPCHK(0x10109080u, _esp0);
  ESP += 4; return;
}

/* FUN_100090fb @ 0x101090fb (89 bytes, 39 insns) */
void f_101090fb(void) {
  FTRACE(0x101090fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101090fb push ebp */
  push32((uint32_t)(EBP));
  /* 101090fc mov ebp, esp */
  EBP = (ESP);
  /* 101090fe push ebx */
  push32((uint32_t)(EBX));
  /* 101090ff push esi */
  push32((uint32_t)(ESI));
  /* 10109100 mov esi, 0x10116b04 */
  ESI = (0x10116b04u);
  /* 10109105 push edi */
  push32((uint32_t)(EDI));
  /* 10109106 push esi */
  push32((uint32_t)(ESI));
  /* 10109107 call dword ptr [0x1010e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e090))), 0x1010910du);
  /* 1010910d mov edi, dword ptr [0x1010e08c] */
  EDI = (r32((uint32_t)(0x1010e08c)));
  /* 10109113 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10109115 cmp dword ptr [0x10116b00], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10116b00))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010911b je 0x1010912b */
  if (C.zf) goto L_1010912b;
  /* 1010911d push esi */
  push32((uint32_t)(ESI));
  /* 1010911e call edi */
  call_ind((uint32_t)(EDI), 0x10109120u);
  /* 10109120 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10109122 call 0x1010a053 */
  push32(0x10109127u); f_1010a053();
  /* 10109127 pop ecx */
  ECX = (pop32());
  /* 10109128 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010912a pop ebx */
  EBX = (pop32());
L_1010912b:;
  /* 1010912b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1010912e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10109131 call 0x10109154 */
  push32(0x10109136u); f_10109154();
  /* 10109136 pop ecx */
  ECX = (pop32());
  /* 10109137 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1010913a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1010913c pop ecx */
  ECX = (pop32());
  /* 1010913d je 0x10109149 */
  if (C.zf) goto L_10109149;
  /* 1010913f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10109141 call 0x1010a0b4 */
  push32(0x10109146u); f_1010a0b4();
  /* 10109146 pop ecx */
  ECX = (pop32());
  /* 10109147 jmp 0x1010914c */
  goto L_1010914c;
L_10109149:;
  /* 10109149 push esi */
  push32((uint32_t)(ESI));
  /* 1010914a call edi */
  call_ind((uint32_t)(EDI), 0x1010914cu);
L_1010914c:;
  /* 1010914c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010914f pop edi */
  EDI = (pop32());
  /* 10109150 pop esi */
  ESI = (pop32());
  /* 10109151 pop ebx */
  EBX = (pop32());
  /* 10109152 pop ebp */
  EBP = (pop32());
  /* 10109153 ret  */
  ESPCHK(0x101090fbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009154 @ 0x10109154 (105 bytes, 38 insns) */
void f_10109154(void) {
  FTRACE(0x10109154u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109154 push ebp */
  push32((uint32_t)(EBP));
  /* 10109155 mov ebp, esp */
  EBP = (ESP);
  /* 10109157 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010915a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010915c jne 0x10109160 */
  if (!C.zf) goto L_10109160;
  /* 1010915e pop ebp */
  EBP = (pop32());
  /* 1010915f ret  */
  ESPCHK(0x10109154u, _esp0);
  ESP += 4; return;
L_10109160:;
  /* 10109160 cmp dword ptr [0x10116988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10116988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109167 jne 0x1010917b */
  if (!C.zf) goto L_1010917b;
  /* 10109169 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 1010916d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10109172 ja 0x101091ad */
  if ((!C.cf&&!C.zf)) goto L_101091ad;
  /* 10109174 push 1 */
  push32((uint32_t)(0x1u));
  /* 10109176 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10109178 pop eax */
  EAX = (pop32());
  /* 10109179 pop ebp */
  EBP = (pop32());
  /* 1010917a ret  */
  ESPCHK(0x10109154u, _esp0);
  ESP += 4; return;
L_1010917b:;
  /* 1010917b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 1010917e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 10109182 push ecx */
  push32((uint32_t)(ECX));
  /* 10109183 push 0 */
  push32((uint32_t)(0x0u));
  /* 10109185 push dword ptr [0x10110d30] */
  push32((uint32_t)(r32((uint32_t)(0x10110d30))));
  /* 1010918b push eax */
  push32((uint32_t)(EAX));
  /* 1010918c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1010918f push 1 */
  push32((uint32_t)(0x1u));
  /* 10109191 push eax */
  push32((uint32_t)(EAX));
  /* 10109192 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10109197 push dword ptr [0x10116998] */
  push32((uint32_t)(r32((uint32_t)(0x10116998))));
  /* 1010919d call dword ptr [0x1010e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e060))), 0x101091a3u);
  /* 101091a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101091a5 je 0x101091ad */
  if (C.zf) goto L_101091ad;
  /* 101091a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101091ab je 0x101091bb */
  if (C.zf) goto L_101091bb;
L_101091ad:;
  /* 101091ad call 0x1010bfb1 */
  push32(0x101091b2u); f_1010bfb1();
  /* 101091b2 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 101091b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101091bb:;
  /* 101091bb pop ebp */
  EBP = (pop32());
  /* 101091bc ret  */
  ESPCHK(0x10109154u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x101091c0 (104 bytes, 43 insns) */
void f_101091c0(void) {
  FTRACE(0x101091c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101091c0 push ebx */
  push32((uint32_t)(EBX));
  /* 101091c1 push esi */
  push32((uint32_t)(ESI));
  /* 101091c2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 101091c6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101091c8 jne 0x101091e2 */
  if (!C.zf) goto L_101091e2;
  /* 101091ca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 101091ce mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101091d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101091d4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101091d6 mov ebx, eax */
  EBX = (EAX);
  /* 101091d8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 101091dc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101091de mov edx, ebx */
  EDX = (EBX);
  /* 101091e0 jmp 0x10109223 */
  goto L_10109223;
L_101091e2:;
  /* 101091e2 mov ecx, eax */
  ECX = (EAX);
  /* 101091e4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101091e8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 101091ec mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_101091f0:;
  /* 101091f0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101091f2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 101091f4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101091f6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 101091f8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101091fa jne 0x101091f0 */
  if (!C.zf) goto L_101091f0;
  /* 101091fc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101091fe mov esi, eax */
  ESI = (EAX);
  /* 10109200 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10109204 mov ecx, eax */
  ECX = (EAX);
  /* 10109206 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1010920a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1010920c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010920e jb 0x1010921e */
  if (C.cf) goto L_1010921e;
  /* 10109210 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109214 ja 0x1010921e */
  if ((!C.cf&&!C.zf)) goto L_1010921e;
  /* 10109216 jb 0x1010921f */
  if (C.cf) goto L_1010921f;
  /* 10109218 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010921c jbe 0x1010921f */
  if ((C.cf||C.zf)) goto L_1010921f;
L_1010921e:;
  /* 1010921e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1010921f:;
  /* 1010921f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10109221 mov eax, esi */
  EAX = (ESI);
L_10109223:;
  /* 10109223 pop esi */
  ESI = (pop32());
  /* 10109224 pop ebx */
  EBX = (pop32());
  /* 10109225 ret 0x10 */
  ESPCHK(0x101091c0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10109230 (117 bytes, 44 insns) */
void f_10109230(void) {
  FTRACE(0x10109230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109230 push ebx */
  push32((uint32_t)(EBX));
  /* 10109231 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10109235 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10109237 jne 0x10109251 */
  if (!C.zf) goto L_10109251;
  /* 10109239 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1010923d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10109241 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10109243 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10109245 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10109249 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1010924b mov eax, edx */
  EAX = (EDX);
  /* 1010924d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1010924f jmp 0x101092a1 */
  goto L_101092a1;
L_10109251:;
  /* 10109251 mov ecx, eax */
  ECX = (EAX);
  /* 10109253 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10109257 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1010925b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1010925f:;
  /* 1010925f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10109261 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10109263 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10109265 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10109267 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10109269 jne 0x1010925f */
  if (!C.zf) goto L_1010925f;
  /* 1010926b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1010926d mov ecx, eax */
  ECX = (EAX);
  /* 1010926f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10109273 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10109274 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10109278 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010927a jb 0x1010928a */
  if (C.cf) goto L_1010928a;
  /* 1010927c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109280 ja 0x1010928a */
  if ((!C.cf&&!C.zf)) goto L_1010928a;
  /* 10109282 jb 0x10109292 */
  if (C.cf) goto L_10109292;
  /* 10109284 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109288 jbe 0x10109292 */
  if ((C.cf||C.zf)) goto L_10109292;
L_1010928a:;
  /* 1010928a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010928e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10109292:;
  /* 10109292 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109296 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010929a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1010929c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1010929e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_101092a1:;
  /* 101092a1 pop ebx */
  EBX = (pop32());
  /* 101092a2 ret 0x10 */
  ESPCHK(0x10109230u, _esp0);
  ESP += 20; return;
}

