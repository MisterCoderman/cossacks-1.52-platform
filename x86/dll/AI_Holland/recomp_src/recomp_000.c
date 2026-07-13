#include "recomp.h"

/* ProcessAI @ 0x100c1000 (16 bytes, 3 insns) */
void f_100c1000(void) {
  FTRACE(0x100c1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c1000 call dword ptr [0x100d6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6520))), 0x100c1006u);
  /* 100c1006 mov dword ptr [0x100d62d4], eax */
  w32((uint32_t)(0x100d62d4), (EAX));
  /* 100c100b jmp 0x100c6d40 */
  f_100c6d40(); return;
}

/* InitAI @ 0x100c1010 (5595 bytes, 1470 insns) */
void f_100c1010(void) {
  FTRACE(0x100c1010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c1010 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1015 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c1018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c101a je 0x100c1078 */
  if (C.zf) goto L_100c1078;
  /* 100c101c push 0x100cff1c */
  push32((uint32_t)(0x100cff1cu));
  /* 100c1021 push 0x100d60a8 */
  push32((uint32_t)(0x100d60a8u));
  /* 100c1026 call eax */
  call_ind((uint32_t)(EAX), 0x100c1028u);
  /* 100c1028 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c102d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1032 je 0x100c1078 */
  if (C.zf) goto L_100c1078;
  /* 100c1034 push 0x100cff14 */
  push32((uint32_t)(0x100cff14u));
  /* 100c1039 push 0x100d6048 */
  push32((uint32_t)(0x100d6048u));
  /* 100c103e call eax */
  call_ind((uint32_t)(EAX), 0x100c1040u);
  /* 100c1040 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c104a je 0x100c1078 */
  if (C.zf) goto L_100c1078;
  /* 100c104c push 0x100cff0c */
  push32((uint32_t)(0x100cff0cu));
  /* 100c1051 push 0x100d60a0 */
  push32((uint32_t)(0x100d60a0u));
  /* 100c1056 call eax */
  call_ind((uint32_t)(EAX), 0x100c1058u);
  /* 100c1058 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1062 je 0x100c1078 */
  if (C.zf) goto L_100c1078;
  /* 100c1064 push 0x100cff04 */
  push32((uint32_t)(0x100cff04u));
  /* 100c1069 push 0x100d60b0 */
  push32((uint32_t)(0x100d60b0u));
  /* 100c106e call eax */
  call_ind((uint32_t)(EAX), 0x100c1070u);
  /* 100c1070 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c1078:;
  /* 100c1078 mov ecx, dword ptr [0x100d6418] */
  ECX = (r32((uint32_t)(0x100d6418)));
  /* 100c107e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100c1080 je 0x100c1096 */
  if (C.zf) goto L_100c1096;
  /* 100c1082 push 0x100cfef8 */
  push32((uint32_t)(0x100cfef8u));
  /* 100c1087 push 0x100d36b0 */
  push32((uint32_t)(0x100d36b0u));
  /* 100c108c call ecx */
  call_ind((uint32_t)(ECX), 0x100c108eu);
  /* 100c108e mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c1096:;
  /* 100c1096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1098 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c109e push 0x100cfee4 */
  push32((uint32_t)(0x100cfee4u));
  /* 100c10a3 push 0x100d3920 */
  push32((uint32_t)(0x100d3920u));
  /* 100c10a8 call eax */
  call_ind((uint32_t)(EAX), 0x100c10aau);
  /* 100c10aa mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c10af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c10b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c10b4 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c10ba push 0x100cfed0 */
  push32((uint32_t)(0x100cfed0u));
  /* 100c10bf push 0x100d3918 */
  push32((uint32_t)(0x100d3918u));
  /* 100c10c4 call eax */
  call_ind((uint32_t)(EAX), 0x100c10c6u);
  /* 100c10c6 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c10cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c10ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c10d0 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c10d6 push 0x100cfebc */
  push32((uint32_t)(0x100cfebcu));
  /* 100c10db push 0x100d3910 */
  push32((uint32_t)(0x100d3910u));
  /* 100c10e0 call eax */
  call_ind((uint32_t)(EAX), 0x100c10e2u);
  /* 100c10e2 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c10e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c10ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c10ec je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c10f2 push 0x100cfea8 */
  push32((uint32_t)(0x100cfea8u));
  /* 100c10f7 push 0x100d3958 */
  push32((uint32_t)(0x100d3958u));
  /* 100c10fc call eax */
  call_ind((uint32_t)(EAX), 0x100c10feu);
  /* 100c10fe mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1108 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c110e push 0x100cfe94 */
  push32((uint32_t)(0x100cfe94u));
  /* 100c1113 push 0x100d3948 */
  push32((uint32_t)(0x100d3948u));
  /* 100c1118 call eax */
  call_ind((uint32_t)(EAX), 0x100c111au);
  /* 100c111a mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c111f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1124 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c112a push 0x100cfe80 */
  push32((uint32_t)(0x100cfe80u));
  /* 100c112f push 0x100d3940 */
  push32((uint32_t)(0x100d3940u));
  /* 100c1134 call eax */
  call_ind((uint32_t)(EAX), 0x100c1136u);
  /* 100c1136 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c113b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1140 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c1146 push 0x100cfe6c */
  push32((uint32_t)(0x100cfe6cu));
  /* 100c114b push 0x100d36f8 */
  push32((uint32_t)(0x100d36f8u));
  /* 100c1150 call eax */
  call_ind((uint32_t)(EAX), 0x100c1152u);
  /* 100c1152 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c115a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c115c je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c1162 push 0x100cfe58 */
  push32((uint32_t)(0x100cfe58u));
  /* 100c1167 push 0x100d36e8 */
  push32((uint32_t)(0x100d36e8u));
  /* 100c116c call eax */
  call_ind((uint32_t)(EAX), 0x100c116eu);
  /* 100c116e mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1178 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c117e push 0x100cfe44 */
  push32((uint32_t)(0x100cfe44u));
  /* 100c1183 push 0x100d38e0 */
  push32((uint32_t)(0x100d38e0u));
  /* 100c1188 call eax */
  call_ind((uint32_t)(EAX), 0x100c118au);
  /* 100c118a mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1194 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c119a push 0x100cfe30 */
  push32((uint32_t)(0x100cfe30u));
  /* 100c119f push 0x100d38d8 */
  push32((uint32_t)(0x100d38d8u));
  /* 100c11a4 call eax */
  call_ind((uint32_t)(EAX), 0x100c11a6u);
  /* 100c11a6 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c11ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c11ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c11b0 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c11b6 push 0x100cfe1c */
  push32((uint32_t)(0x100cfe1cu));
  /* 100c11bb push 0x100d38d0 */
  push32((uint32_t)(0x100d38d0u));
  /* 100c11c0 call eax */
  call_ind((uint32_t)(EAX), 0x100c11c2u);
  /* 100c11c2 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c11c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c11ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c11cc je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c11d2 push 0x100cfe08 */
  push32((uint32_t)(0x100cfe08u));
  /* 100c11d7 push 0x100d38c8 */
  push32((uint32_t)(0x100d38c8u));
  /* 100c11dc call eax */
  call_ind((uint32_t)(EAX), 0x100c11deu);
  /* 100c11de mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c11e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c11e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c11e8 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c11ee push 0x100cfee4 */
  push32((uint32_t)(0x100cfee4u));
  /* 100c11f3 push 0x100d3920 */
  push32((uint32_t)(0x100d3920u));
  /* 100c11f8 call eax */
  call_ind((uint32_t)(EAX), 0x100c11fau);
  /* 100c11fa mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c11ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1204 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c120a push 0x100cfed0 */
  push32((uint32_t)(0x100cfed0u));
  /* 100c120f push 0x100d3918 */
  push32((uint32_t)(0x100d3918u));
  /* 100c1214 call eax */
  call_ind((uint32_t)(EAX), 0x100c1216u);
  /* 100c1216 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c121b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c121e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1220 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c1226 push 0x100cfebc */
  push32((uint32_t)(0x100cfebcu));
  /* 100c122b push 0x100d3910 */
  push32((uint32_t)(0x100d3910u));
  /* 100c1230 call eax */
  call_ind((uint32_t)(EAX), 0x100c1232u);
  /* 100c1232 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c123c je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c1242 push 0x100cfea8 */
  push32((uint32_t)(0x100cfea8u));
  /* 100c1247 push 0x100d3958 */
  push32((uint32_t)(0x100d3958u));
  /* 100c124c call eax */
  call_ind((uint32_t)(EAX), 0x100c124eu);
  /* 100c124e mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1258 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c125e push 0x100cfe94 */
  push32((uint32_t)(0x100cfe94u));
  /* 100c1263 push 0x100d3948 */
  push32((uint32_t)(0x100d3948u));
  /* 100c1268 call eax */
  call_ind((uint32_t)(EAX), 0x100c126au);
  /* 100c126a mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1274 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c127a push 0x100cfe80 */
  push32((uint32_t)(0x100cfe80u));
  /* 100c127f push 0x100d3940 */
  push32((uint32_t)(0x100d3940u));
  /* 100c1284 call eax */
  call_ind((uint32_t)(EAX), 0x100c1286u);
  /* 100c1286 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c128e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1290 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c1296 push 0x100cfe6c */
  push32((uint32_t)(0x100cfe6cu));
  /* 100c129b push 0x100d36f8 */
  push32((uint32_t)(0x100d36f8u));
  /* 100c12a0 call eax */
  call_ind((uint32_t)(EAX), 0x100c12a2u);
  /* 100c12a2 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c12a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c12aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c12ac je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c12ae push 0x100cfe58 */
  push32((uint32_t)(0x100cfe58u));
  /* 100c12b3 push 0x100d36e8 */
  push32((uint32_t)(0x100d36e8u));
  /* 100c12b8 call eax */
  call_ind((uint32_t)(EAX), 0x100c12bau);
  /* 100c12ba mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c12bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c12c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c12c4 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c12c6 push 0x100cfe44 */
  push32((uint32_t)(0x100cfe44u));
  /* 100c12cb push 0x100d38e0 */
  push32((uint32_t)(0x100d38e0u));
  /* 100c12d0 call eax */
  call_ind((uint32_t)(EAX), 0x100c12d2u);
  /* 100c12d2 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c12d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c12da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c12dc je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c12de push 0x100cfe30 */
  push32((uint32_t)(0x100cfe30u));
  /* 100c12e3 push 0x100d38d8 */
  push32((uint32_t)(0x100d38d8u));
  /* 100c12e8 call eax */
  call_ind((uint32_t)(EAX), 0x100c12eau);
  /* 100c12ea mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c12ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c12f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c12f4 je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c12f6 push 0x100cfe1c */
  push32((uint32_t)(0x100cfe1cu));
  /* 100c12fb push 0x100d38d0 */
  push32((uint32_t)(0x100d38d0u));
  /* 100c1300 call eax */
  call_ind((uint32_t)(EAX), 0x100c1302u);
  /* 100c1302 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c130c je 0x100c1322 */
  if (C.zf) goto L_100c1322;
  /* 100c130e push 0x100cfe08 */
  push32((uint32_t)(0x100cfe08u));
  /* 100c1313 push 0x100d38c8 */
  push32((uint32_t)(0x100d38c8u));
  /* 100c1318 call eax */
  call_ind((uint32_t)(EAX), 0x100c131au);
  /* 100c131a mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c1322:;
  /* 100c1322 mov ecx, dword ptr [0x100d6418] */
  ECX = (r32((uint32_t)(0x100d6418)));
  /* 100c1328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100c132a je 0x100c1340 */
  if (C.zf) goto L_100c1340;
  /* 100c132c push 0x100cfdf8 */
  push32((uint32_t)(0x100cfdf8u));
  /* 100c1331 push 0x100d36a0 */
  push32((uint32_t)(0x100d36a0u));
  /* 100c1336 call ecx */
  call_ind((uint32_t)(ECX), 0x100c1338u);
  /* 100c1338 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c133d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c1340:;
  /* 100c1340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1342 je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c1348 push 0x100cfde4 */
  push32((uint32_t)(0x100cfde4u));
  /* 100c134d push 0x100d3678 */
  push32((uint32_t)(0x100d3678u));
  /* 100c1352 call eax */
  call_ind((uint32_t)(EAX), 0x100c1354u);
  /* 100c1354 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c135c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c135e je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c1364 push 0x100cfdcc */
  push32((uint32_t)(0x100cfdccu));
  /* 100c1369 push 0x100d3670 */
  push32((uint32_t)(0x100d3670u));
  /* 100c136e call eax */
  call_ind((uint32_t)(EAX), 0x100c1370u);
  /* 100c1370 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c137a je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c1380 push 0x100cfdb4 */
  push32((uint32_t)(0x100cfdb4u));
  /* 100c1385 push 0x100d3668 */
  push32((uint32_t)(0x100d3668u));
  /* 100c138a call eax */
  call_ind((uint32_t)(EAX), 0x100c138cu);
  /* 100c138c mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1396 je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c139c push 0x100cfd9c */
  push32((uint32_t)(0x100cfd9cu));
  /* 100c13a1 push 0x100d6338 */
  push32((uint32_t)(0x100d6338u));
  /* 100c13a6 call eax */
  call_ind((uint32_t)(EAX), 0x100c13a8u);
  /* 100c13a8 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c13ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c13b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c13b2 je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c13b8 push 0x100cfd84 */
  push32((uint32_t)(0x100cfd84u));
  /* 100c13bd push 0x100d6330 */
  push32((uint32_t)(0x100d6330u));
  /* 100c13c2 call eax */
  call_ind((uint32_t)(EAX), 0x100c13c4u);
  /* 100c13c4 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c13c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c13cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c13ce je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c13d4 push 0x100cfd6c */
  push32((uint32_t)(0x100cfd6cu));
  /* 100c13d9 push 0x100d6328 */
  push32((uint32_t)(0x100d6328u));
  /* 100c13de call eax */
  call_ind((uint32_t)(EAX), 0x100c13e0u);
  /* 100c13e0 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c13e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c13e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c13ea je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c13f0 push 0x100cfd58 */
  push32((uint32_t)(0x100cfd58u));
  /* 100c13f5 push 0x100d63b0 */
  push32((uint32_t)(0x100d63b0u));
  /* 100c13fa call eax */
  call_ind((uint32_t)(EAX), 0x100c13fcu);
  /* 100c13fc mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1406 je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c140c push 0x100cfd40 */
  push32((uint32_t)(0x100cfd40u));
  /* 100c1411 push 0x100d63a8 */
  push32((uint32_t)(0x100d63a8u));
  /* 100c1416 call eax */
  call_ind((uint32_t)(EAX), 0x100c1418u);
  /* 100c1418 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c141d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1422 je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c1428 push 0x100cfd28 */
  push32((uint32_t)(0x100cfd28u));
  /* 100c142d push 0x100d63f8 */
  push32((uint32_t)(0x100d63f8u));
  /* 100c1432 call eax */
  call_ind((uint32_t)(EAX), 0x100c1434u);
  /* 100c1434 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c143c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c143e je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c1444 push 0x100cfd10 */
  push32((uint32_t)(0x100cfd10u));
  /* 100c1449 push 0x100d63f0 */
  push32((uint32_t)(0x100d63f0u));
  /* 100c144e call eax */
  call_ind((uint32_t)(EAX), 0x100c1450u);
  /* 100c1450 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c145a je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c1460 push 0x100cfcf8 */
  push32((uint32_t)(0x100cfcf8u));
  /* 100c1465 push 0x100d63e8 */
  push32((uint32_t)(0x100d63e8u));
  /* 100c146a call eax */
  call_ind((uint32_t)(EAX), 0x100c146cu);
  /* 100c146c mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1476 je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c147c push 0x100cfce0 */
  push32((uint32_t)(0x100cfce0u));
  /* 100c1481 push 0x100d63e0 */
  push32((uint32_t)(0x100d63e0u));
  /* 100c1486 call eax */
  call_ind((uint32_t)(EAX), 0x100c1488u);
  /* 100c1488 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c148d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1492 je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c1498 push 0x100cfde4 */
  push32((uint32_t)(0x100cfde4u));
  /* 100c149d push 0x100d3678 */
  push32((uint32_t)(0x100d3678u));
  /* 100c14a2 call eax */
  call_ind((uint32_t)(EAX), 0x100c14a4u);
  /* 100c14a4 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c14a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c14ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c14ae je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c14b4 push 0x100cfdcc */
  push32((uint32_t)(0x100cfdccu));
  /* 100c14b9 push 0x100d3670 */
  push32((uint32_t)(0x100d3670u));
  /* 100c14be call eax */
  call_ind((uint32_t)(EAX), 0x100c14c0u);
  /* 100c14c0 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c14c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c14c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c14ca je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c14d0 push 0x100cfdb4 */
  push32((uint32_t)(0x100cfdb4u));
  /* 100c14d5 push 0x100d3668 */
  push32((uint32_t)(0x100d3668u));
  /* 100c14da call eax */
  call_ind((uint32_t)(EAX), 0x100c14dcu);
  /* 100c14dc mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c14e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c14e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c14e6 je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c14ec push 0x100cfd9c */
  push32((uint32_t)(0x100cfd9cu));
  /* 100c14f1 push 0x100d6338 */
  push32((uint32_t)(0x100d6338u));
  /* 100c14f6 call eax */
  call_ind((uint32_t)(EAX), 0x100c14f8u);
  /* 100c14f8 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c14fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1502 je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c1508 push 0x100cfd84 */
  push32((uint32_t)(0x100cfd84u));
  /* 100c150d push 0x100d6330 */
  push32((uint32_t)(0x100d6330u));
  /* 100c1512 call eax */
  call_ind((uint32_t)(EAX), 0x100c1514u);
  /* 100c1514 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c151e je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c1524 push 0x100cfd6c */
  push32((uint32_t)(0x100cfd6cu));
  /* 100c1529 push 0x100d6328 */
  push32((uint32_t)(0x100d6328u));
  /* 100c152e call eax */
  call_ind((uint32_t)(EAX), 0x100c1530u);
  /* 100c1530 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c153a je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c1540 push 0x100cfd58 */
  push32((uint32_t)(0x100cfd58u));
  /* 100c1545 push 0x100d63b0 */
  push32((uint32_t)(0x100d63b0u));
  /* 100c154a call eax */
  call_ind((uint32_t)(EAX), 0x100c154cu);
  /* 100c154c mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1556 je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c1558 push 0x100cfd40 */
  push32((uint32_t)(0x100cfd40u));
  /* 100c155d push 0x100d63a8 */
  push32((uint32_t)(0x100d63a8u));
  /* 100c1562 call eax */
  call_ind((uint32_t)(EAX), 0x100c1564u);
  /* 100c1564 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c156c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c156e je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c1570 push 0x100cfd28 */
  push32((uint32_t)(0x100cfd28u));
  /* 100c1575 push 0x100d63f8 */
  push32((uint32_t)(0x100d63f8u));
  /* 100c157a call eax */
  call_ind((uint32_t)(EAX), 0x100c157cu);
  /* 100c157c mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1586 je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c1588 push 0x100cfd10 */
  push32((uint32_t)(0x100cfd10u));
  /* 100c158d push 0x100d63f0 */
  push32((uint32_t)(0x100d63f0u));
  /* 100c1592 call eax */
  call_ind((uint32_t)(EAX), 0x100c1594u);
  /* 100c1594 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c159e je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c15a0 push 0x100cfcf8 */
  push32((uint32_t)(0x100cfcf8u));
  /* 100c15a5 push 0x100d63e8 */
  push32((uint32_t)(0x100d63e8u));
  /* 100c15aa call eax */
  call_ind((uint32_t)(EAX), 0x100c15acu);
  /* 100c15ac mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c15b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c15b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c15b6 je 0x100c15c7 */
  if (C.zf) goto L_100c15c7;
  /* 100c15b8 push 0x100cfce0 */
  push32((uint32_t)(0x100cfce0u));
  /* 100c15bd push 0x100d63e0 */
  push32((uint32_t)(0x100d63e0u));
  /* 100c15c2 call eax */
  call_ind((uint32_t)(EAX), 0x100c15c4u);
  /* 100c15c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c15c7:;
  /* 100c15c7 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c15cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c15ce je 0x100c15df */
  if (C.zf) goto L_100c15df;
  /* 100c15d0 push 0x100cfccc */
  push32((uint32_t)(0x100cfcccu));
  /* 100c15d5 push 0x100d6000 */
  push32((uint32_t)(0x100d6000u));
  /* 100c15da call eax */
  call_ind((uint32_t)(EAX), 0x100c15dcu);
  /* 100c15dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c15df:;
  /* 100c15df call dword ptr [0x100d6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6520))), 0x100c15e5u);
  /* 100c15e5 mov dword ptr [0x100d62d4], eax */
  w32((uint32_t)(0x100d62d4), (EAX));
  /* 100c15ea call 0x100c26c0 */
  push32(0x100c15efu); f_100c26c0();
  /* 100c15ef mov ecx, eax */
  ECX = (EAX);
  /* 100c15f1 mov eax, dword ptr [0x100d62d4] */
  EAX = (r32((uint32_t)(0x100d62d4)));
  /* 100c15f6 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 100c15fc mov dword ptr [eax*4 + 0x100d5fb8], ecx */
  w32((uint32_t)(EAX*4 + 0x100d5fb8), (ECX));
  /* 100c1603 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 100c1606 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 100c1609 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 100c160c lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 100c160f shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100c1612 mov dword ptr [eax + 0x100d3b10], 0 */
  w32((uint32_t)(EAX + 0x100d3b10), (0x0u));
  /* 100c161c mov dword ptr [eax + 0x100d3ca4], 0 */
  w32((uint32_t)(EAX + 0x100d3ca4), (0x0u));
  /* 100c1626 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c162b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c162d je 0x100c163e */
  if (C.zf) goto L_100c163e;
  /* 100c162f push 0x100cfcb0 */
  push32((uint32_t)(0x100cfcb0u));
  /* 100c1634 push 0x100d60f0 */
  push32((uint32_t)(0x100d60f0u));
  /* 100c1639 call eax */
  call_ind((uint32_t)(EAX), 0x100c163bu);
  /* 100c163b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c163e:;
  /* 100c163e mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1645 je 0x100c1656 */
  if (C.zf) goto L_100c1656;
  /* 100c1647 push 0x100cfc9c */
  push32((uint32_t)(0x100cfc9cu));
  /* 100c164c push 0x100d38a8 */
  push32((uint32_t)(0x100d38a8u));
  /* 100c1651 call eax */
  call_ind((uint32_t)(EAX), 0x100c1653u);
  /* 100c1653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c1656:;
  /* 100c1656 push ebp */
  push32((uint32_t)(EBP));
  /* 100c1657 push esi */
  push32((uint32_t)(ESI));
  /* 100c1658 push edi */
  push32((uint32_t)(EDI));
  /* 100c1659 call 0x100c26c0 */
  push32(0x100c165eu); f_100c26c0();
  /* 100c165e mov edx, eax */
  EDX = (EAX);
  /* 100c1660 and eax, 6 */
  { uint32_t _r=(EAX)&(0x6u); EAX = (_r); fl_logic(_r,32); }
  /* 100c1663 cmp al, 2 */
  { uint32_t _a=(AL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c1665 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 100c1669 mov edi, 0x100cfef8 */
  EDI = (0x100cfef8u);
  /* 100c166e je 0x100c1675 */
  if (C.zf) goto L_100c1675;
  /* 100c1670 mov edi, 0x100cfc8c */
  EDI = (0x100cfc8cu);
L_100c1675:;
  /* 100c1675 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100c1678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c167a repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 100c167c not ecx */
  ECX = (~(ECX));
  /* 100c167e sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c1680 and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 100c1683 mov eax, ecx */
  EAX = (ECX);
  /* 100c1685 mov esi, edi */
  ESI = (EDI);
  /* 100c1687 mov edi, ebp */
  EDI = (EBP);
  /* 100c1689 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100c168c rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100c168e mov ecx, eax */
  ECX = (EAX);
  /* 100c1690 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100c1693 cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c1696 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 100c1698 lea edx, [esp + 0x3c] */
  EDX = ((uint32_t)(ESP + 0x3c));
  /* 100c169c mov edi, 0x100cfc7c */
  EDI = (0x100cfc7cu);
  /* 100c16a1 je 0x100c16a8 */
  if (C.zf) goto L_100c16a8;
  /* 100c16a3 mov edi, 0x100cfc6c */
  EDI = (0x100cfc6cu);
L_100c16a8:;
  /* 100c16a8 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100c16ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c16ad repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 100c16af not ecx */
  ECX = (~(ECX));
  /* 100c16b1 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c16b3 mov eax, ecx */
  EAX = (ECX);
  /* 100c16b5 mov esi, edi */
  ESI = (EDI);
  /* 100c16b7 mov edi, edx */
  EDI = (EDX);
  /* 100c16b9 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100c16bc rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100c16be mov ecx, eax */
  ECX = (EAX);
  /* 100c16c0 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c16c5 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100c16c8 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 100c16ca pop edi */
  EDI = (pop32());
  /* 100c16cb pop esi */
  ESI = (pop32());
  /* 100c16cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c16ce pop ebp */
  EBP = (pop32());
  /* 100c16cf je 0x100c1715 */
  if (C.zf) goto L_100c1715;
  /* 100c16d1 push 0x100cfc54 */
  push32((uint32_t)(0x100cfc54u));
  /* 100c16d6 push 0x100d6298 */
  push32((uint32_t)(0x100d6298u));
  /* 100c16db call eax */
  call_ind((uint32_t)(EAX), 0x100c16ddu);
  /* 100c16dd mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c16e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c16e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c16e7 je 0x100c1715 */
  if (C.zf) goto L_100c1715;
  /* 100c16e9 push 0x100cfc3c */
  push32((uint32_t)(0x100cfc3cu));
  /* 100c16ee push 0x100d6348 */
  push32((uint32_t)(0x100d6348u));
  /* 100c16f3 call eax */
  call_ind((uint32_t)(EAX), 0x100c16f5u);
  /* 100c16f5 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c16fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c16fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c16ff je 0x100c1715 */
  if (C.zf) goto L_100c1715;
  /* 100c1701 push 0x100cfc28 */
  push32((uint32_t)(0x100cfc28u));
  /* 100c1706 push 0x100d3720 */
  push32((uint32_t)(0x100d3720u));
  /* 100c170b call eax */
  call_ind((uint32_t)(EAX), 0x100c170du);
  /* 100c170d mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c1715:;
  /* 100c1715 mov ecx, dword ptr [0x100d641c] */
  ECX = (r32((uint32_t)(0x100d641c)));
  /* 100c171b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100c171d je 0x100c174b */
  if (C.zf) goto L_100c174b;
  /* 100c171f push 0x100cfc10 */
  push32((uint32_t)(0x100cfc10u));
  /* 100c1724 push 0x100d6280 */
  push32((uint32_t)(0x100d6280u));
  /* 100c1729 call ecx */
  call_ind((uint32_t)(ECX), 0x100c172bu);
  /* 100c172b mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1730 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1733 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1735 je 0x100c1746 */
  if (C.zf) goto L_100c1746;
  /* 100c1737 push 0x100cfbf8 */
  push32((uint32_t)(0x100cfbf8u));
  /* 100c173c push 0x100d5fe8 */
  push32((uint32_t)(0x100d5fe8u));
  /* 100c1741 call eax */
  call_ind((uint32_t)(EAX), 0x100c1743u);
  /* 100c1743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c1746:;
  /* 100c1746 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
L_100c174b:;
  /* 100c174b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c174d je 0x100c175e */
  if (C.zf) goto L_100c175e;
  /* 100c174f push 0x100cfbe4 */
  push32((uint32_t)(0x100cfbe4u));
  /* 100c1754 push 0x100d3660 */
  push32((uint32_t)(0x100d3660u));
  /* 100c1759 call eax */
  call_ind((uint32_t)(EAX), 0x100c175bu);
  /* 100c175b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c175e:;
  /* 100c175e push 0x100cfbd0 */
  push32((uint32_t)(0x100cfbd0u));
  /* 100c1763 call 0x100c2690 */
  push32(0x100c1768u); f_100c2690();
  /* 100c1768 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c176d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1770 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1772 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1778 push 0x100cfbd0 */
  push32((uint32_t)(0x100cfbd0u));
  /* 100c177d push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c1782 call eax */
  call_ind((uint32_t)(EAX), 0x100c1784u);
  /* 100c1784 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c178c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c178e je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1794 push 0x100cfbbc */
  push32((uint32_t)(0x100cfbbcu));
  /* 100c1799 push 0x100d61b0 */
  push32((uint32_t)(0x100d61b0u));
  /* 100c179e call eax */
  call_ind((uint32_t)(EAX), 0x100c17a0u);
  /* 100c17a0 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c17a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c17a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c17aa je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c17b0 push 0x100cfba8 */
  push32((uint32_t)(0x100cfba8u));
  /* 100c17b5 push 0x100d6180 */
  push32((uint32_t)(0x100d6180u));
  /* 100c17ba call eax */
  call_ind((uint32_t)(EAX), 0x100c17bcu);
  /* 100c17bc mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c17c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c17c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c17c6 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c17cc push 0x100cfb90 */
  push32((uint32_t)(0x100cfb90u));
  /* 100c17d1 push 0x100d6100 */
  push32((uint32_t)(0x100d6100u));
  /* 100c17d6 call eax */
  call_ind((uint32_t)(EAX), 0x100c17d8u);
  /* 100c17d8 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c17dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c17e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c17e2 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c17e8 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 100c17ec push ecx */
  push32((uint32_t)(ECX));
  /* 100c17ed push 0x100d63d0 */
  push32((uint32_t)(0x100d63d0u));
  /* 100c17f2 call eax */
  call_ind((uint32_t)(EAX), 0x100c17f4u);
  /* 100c17f4 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c17f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c17fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c17fe je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1804 push 0x100cfb84 */
  push32((uint32_t)(0x100cfb84u));
  /* 100c1809 push 0x100d6350 */
  push32((uint32_t)(0x100d6350u));
  /* 100c180e call eax */
  call_ind((uint32_t)(EAX), 0x100c1810u);
  /* 100c1810 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c181a je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1820 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 100c1824 push edx */
  push32((uint32_t)(EDX));
  /* 100c1825 push 0x100d5fa0 */
  push32((uint32_t)(0x100d5fa0u));
  /* 100c182a call eax */
  call_ind((uint32_t)(EAX), 0x100c182cu);
  /* 100c182c mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1831 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1834 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1836 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c183c push 0x100cfb78 */
  push32((uint32_t)(0x100cfb78u));
  /* 100c1841 push 0x100d6390 */
  push32((uint32_t)(0x100d6390u));
  /* 100c1846 call eax */
  call_ind((uint32_t)(EAX), 0x100c1848u);
  /* 100c1848 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c184d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1852 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1858 push 0x100cfb6c */
  push32((uint32_t)(0x100cfb6cu));
  /* 100c185d push 0x100d3688 */
  push32((uint32_t)(0x100d3688u));
  /* 100c1862 call eax */
  call_ind((uint32_t)(EAX), 0x100c1864u);
  /* 100c1864 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c186c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c186e je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1874 push 0x100cfb5c */
  push32((uint32_t)(0x100cfb5cu));
  /* 100c1879 push 0x100d38e8 */
  push32((uint32_t)(0x100d38e8u));
  /* 100c187e call eax */
  call_ind((uint32_t)(EAX), 0x100c1880u);
  /* 100c1880 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1885 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c188a je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1890 push 0x100cfb50 */
  push32((uint32_t)(0x100cfb50u));
  /* 100c1895 push 0x100d6210 */
  push32((uint32_t)(0x100d6210u));
  /* 100c189a call eax */
  call_ind((uint32_t)(EAX), 0x100c189cu);
  /* 100c189c mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c18a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c18a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c18a6 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c18ac push 0x100cfb3c */
  push32((uint32_t)(0x100cfb3cu));
  /* 100c18b1 push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c18b6 call eax */
  call_ind((uint32_t)(EAX), 0x100c18b8u);
  /* 100c18b8 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c18bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c18c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c18c2 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c18c8 push 0x100cfb30 */
  push32((uint32_t)(0x100cfb30u));
  /* 100c18cd push 0x100d5ff8 */
  push32((uint32_t)(0x100d5ff8u));
  /* 100c18d2 call eax */
  call_ind((uint32_t)(EAX), 0x100c18d4u);
  /* 100c18d4 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c18d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c18dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c18de je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c18e4 push 0x100cfb1c */
  push32((uint32_t)(0x100cfb1cu));
  /* 100c18e9 push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c18ee call eax */
  call_ind((uint32_t)(EAX), 0x100c18f0u);
  /* 100c18f0 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c18f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c18f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c18fa je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1900 push 0x100cfb08 */
  push32((uint32_t)(0x100cfb08u));
  /* 100c1905 push 0x100d6278 */
  push32((uint32_t)(0x100d6278u));
  /* 100c190a call eax */
  call_ind((uint32_t)(EAX), 0x100c190cu);
  /* 100c190c mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1911 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1914 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1916 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c191c push 0x100cfafc */
  push32((uint32_t)(0x100cfafcu));
  /* 100c1921 push 0x100d5ff0 */
  push32((uint32_t)(0x100d5ff0u));
  /* 100c1926 call eax */
  call_ind((uint32_t)(EAX), 0x100c1928u);
  /* 100c1928 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c192d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1932 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1938 push 0x100cfaec */
  push32((uint32_t)(0x100cfaecu));
  /* 100c193d push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c1942 call eax */
  call_ind((uint32_t)(EAX), 0x100c1944u);
  /* 100c1944 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c194c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c194e je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1954 push 0x100cfad8 */
  push32((uint32_t)(0x100cfad8u));
  /* 100c1959 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c195e call eax */
  call_ind((uint32_t)(EAX), 0x100c1960u);
  /* 100c1960 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1965 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c196a je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1970 push 0x100cfac4 */
  push32((uint32_t)(0x100cfac4u));
  /* 100c1975 push 0x100d6008 */
  push32((uint32_t)(0x100d6008u));
  /* 100c197a call eax */
  call_ind((uint32_t)(EAX), 0x100c197cu);
  /* 100c197c mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1986 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c198c push 0x100cfaac */
  push32((uint32_t)(0x100cfaacu));
  /* 100c1991 push 0x100d3638 */
  push32((uint32_t)(0x100d3638u));
  /* 100c1996 call eax */
  call_ind((uint32_t)(EAX), 0x100c1998u);
  /* 100c1998 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c199d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c19a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c19a2 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c19a8 push 0x100cfaa0 */
  push32((uint32_t)(0x100cfaa0u));
  /* 100c19ad push 0x100d3898 */
  push32((uint32_t)(0x100d3898u));
  /* 100c19b2 call eax */
  call_ind((uint32_t)(EAX), 0x100c19b4u);
  /* 100c19b4 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c19b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c19bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c19be je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c19c4 push 0x100cfa94 */
  push32((uint32_t)(0x100cfa94u));
  /* 100c19c9 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c19ce call eax */
  call_ind((uint32_t)(EAX), 0x100c19d0u);
  /* 100c19d0 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c19d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c19d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c19da je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c19e0 push 0x100cfa84 */
  push32((uint32_t)(0x100cfa84u));
  /* 100c19e5 push 0x100d6208 */
  push32((uint32_t)(0x100d6208u));
  /* 100c19ea call eax */
  call_ind((uint32_t)(EAX), 0x100c19ecu);
  /* 100c19ec mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c19f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c19f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c19f6 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c19fc push 0x100cfa74 */
  push32((uint32_t)(0x100cfa74u));
  /* 100c1a01 push 0x100d6118 */
  push32((uint32_t)(0x100d6118u));
  /* 100c1a06 call eax */
  call_ind((uint32_t)(EAX), 0x100c1a08u);
  /* 100c1a08 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1a0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1a10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1a12 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1a18 push 0x100cfa68 */
  push32((uint32_t)(0x100cfa68u));
  /* 100c1a1d push 0x100d62f8 */
  push32((uint32_t)(0x100d62f8u));
  /* 100c1a22 call eax */
  call_ind((uint32_t)(EAX), 0x100c1a24u);
  /* 100c1a24 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1a2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1a2e je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1a30 push 0x100cfa5c */
  push32((uint32_t)(0x100cfa5cu));
  /* 100c1a35 push 0x100d3908 */
  push32((uint32_t)(0x100d3908u));
  /* 100c1a3a call eax */
  call_ind((uint32_t)(EAX), 0x100c1a3cu);
  /* 100c1a3c mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1a46 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1a48 push 0x100cfa50 */
  push32((uint32_t)(0x100cfa50u));
  /* 100c1a4d push 0x100d5fb0 */
  push32((uint32_t)(0x100d5fb0u));
  /* 100c1a52 call eax */
  call_ind((uint32_t)(EAX), 0x100c1a54u);
  /* 100c1a54 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1a5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1a5e je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1a60 push 0x100cfa44 */
  push32((uint32_t)(0x100cfa44u));
  /* 100c1a65 push 0x100d63b8 */
  push32((uint32_t)(0x100d63b8u));
  /* 100c1a6a call eax */
  call_ind((uint32_t)(EAX), 0x100c1a6cu);
  /* 100c1a6c mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1a71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1a76 je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1a78 push 0x100cfa38 */
  push32((uint32_t)(0x100cfa38u));
  /* 100c1a7d push 0x100d5fa8 */
  push32((uint32_t)(0x100d5fa8u));
  /* 100c1a82 call eax */
  call_ind((uint32_t)(EAX), 0x100c1a84u);
  /* 100c1a84 mov eax, dword ptr [0x100d6418] */
  EAX = (r32((uint32_t)(0x100d6418)));
  /* 100c1a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1a8e je 0x100c1a9f */
  if (C.zf) goto L_100c1a9f;
  /* 100c1a90 push 0x100cfa28 */
  push32((uint32_t)(0x100cfa28u));
  /* 100c1a95 push 0x100d38c0 */
  push32((uint32_t)(0x100d38c0u));
  /* 100c1a9a call eax */
  call_ind((uint32_t)(EAX), 0x100c1a9cu);
  /* 100c1a9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c1a9f:;
  /* 100c1a9f mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1aa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1aa6 je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1aac push 0x100cfa14 */
  push32((uint32_t)(0x100cfa14u));
  /* 100c1ab1 push 0x100d6398 */
  push32((uint32_t)(0x100d6398u));
  /* 100c1ab6 call eax */
  call_ind((uint32_t)(EAX), 0x100c1ab8u);
  /* 100c1ab8 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1abd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1ac0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1ac2 je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1ac8 push 0x100cfa00 */
  push32((uint32_t)(0x100cfa00u));
  /* 100c1acd push 0x100d6120 */
  push32((uint32_t)(0x100d6120u));
  /* 100c1ad2 call eax */
  call_ind((uint32_t)(EAX), 0x100c1ad4u);
  /* 100c1ad4 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1ad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1ade je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1ae4 push 0x100cf9f8 */
  push32((uint32_t)(0x100cf9f8u));
  /* 100c1ae9 push 0x100d3680 */
  push32((uint32_t)(0x100d3680u));
  /* 100c1aee call eax */
  call_ind((uint32_t)(EAX), 0x100c1af0u);
  /* 100c1af0 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1af5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1afa je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1b00 push 0x100cf9e0 */
  push32((uint32_t)(0x100cf9e0u));
  /* 100c1b05 push 0x100d6370 */
  push32((uint32_t)(0x100d6370u));
  /* 100c1b0a call eax */
  call_ind((uint32_t)(EAX), 0x100c1b0cu);
  /* 100c1b0c mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1b16 je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1b1c push 0x100cf9c8 */
  push32((uint32_t)(0x100cf9c8u));
  /* 100c1b21 push 0x100d6378 */
  push32((uint32_t)(0x100d6378u));
  /* 100c1b26 call eax */
  call_ind((uint32_t)(EAX), 0x100c1b28u);
  /* 100c1b28 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1b2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1b32 je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1b38 push 0x100cf9b0 */
  push32((uint32_t)(0x100cf9b0u));
  /* 100c1b3d push 0x100d6360 */
  push32((uint32_t)(0x100d6360u));
  /* 100c1b42 call eax */
  call_ind((uint32_t)(EAX), 0x100c1b44u);
  /* 100c1b44 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1b4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1b4e je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1b54 push 0x100cf998 */
  push32((uint32_t)(0x100cf998u));
  /* 100c1b59 push 0x100d6368 */
  push32((uint32_t)(0x100d6368u));
  /* 100c1b5e call eax */
  call_ind((uint32_t)(EAX), 0x100c1b60u);
  /* 100c1b60 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1b65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1b6a je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1b70 push 0x100cf980 */
  push32((uint32_t)(0x100cf980u));
  /* 100c1b75 push 0x100d6380 */
  push32((uint32_t)(0x100d6380u));
  /* 100c1b7a call eax */
  call_ind((uint32_t)(EAX), 0x100c1b7cu);
  /* 100c1b7c mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1b81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1b86 je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1b8c push 0x100cf968 */
  push32((uint32_t)(0x100cf968u));
  /* 100c1b91 push 0x100d62b8 */
  push32((uint32_t)(0x100d62b8u));
  /* 100c1b96 call eax */
  call_ind((uint32_t)(EAX), 0x100c1b98u);
  /* 100c1b98 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1b9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1ba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1ba2 je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1ba8 push 0x100cf950 */
  push32((uint32_t)(0x100cf950u));
  /* 100c1bad push 0x100d62a0 */
  push32((uint32_t)(0x100d62a0u));
  /* 100c1bb2 call eax */
  call_ind((uint32_t)(EAX), 0x100c1bb4u);
  /* 100c1bb4 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1bb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1bbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1bbe je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1bc4 push 0x100cf938 */
  push32((uint32_t)(0x100cf938u));
  /* 100c1bc9 push 0x100d62a8 */
  push32((uint32_t)(0x100d62a8u));
  /* 100c1bce call eax */
  call_ind((uint32_t)(EAX), 0x100c1bd0u);
  /* 100c1bd0 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1bd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1bda je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1be0 push 0x100cf920 */
  push32((uint32_t)(0x100cf920u));
  /* 100c1be5 push 0x100d62c0 */
  push32((uint32_t)(0x100d62c0u));
  /* 100c1bea call eax */
  call_ind((uint32_t)(EAX), 0x100c1becu);
  /* 100c1bec mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1bf6 je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1bfc push 0x100cf908 */
  push32((uint32_t)(0x100cf908u));
  /* 100c1c01 push 0x100d62c8 */
  push32((uint32_t)(0x100d62c8u));
  /* 100c1c06 call eax */
  call_ind((uint32_t)(EAX), 0x100c1c08u);
  /* 100c1c08 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1c0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1c10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1c12 je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1c18 push 0x100cf8e8 */
  push32((uint32_t)(0x100cf8e8u));
  /* 100c1c1d push 0x100d3930 */
  push32((uint32_t)(0x100d3930u));
  /* 100c1c22 call eax */
  call_ind((uint32_t)(EAX), 0x100c1c24u);
  /* 100c1c24 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1c29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1c2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1c2e je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1c30 push 0x100cf8c8 */
  push32((uint32_t)(0x100cf8c8u));
  /* 100c1c35 push 0x100d3938 */
  push32((uint32_t)(0x100d3938u));
  /* 100c1c3a call eax */
  call_ind((uint32_t)(EAX), 0x100c1c3cu);
  /* 100c1c3c mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1c44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1c46 je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1c48 push 0x100cf8a8 */
  push32((uint32_t)(0x100cf8a8u));
  /* 100c1c4d push 0x100d3928 */
  push32((uint32_t)(0x100d3928u));
  /* 100c1c52 call eax */
  call_ind((uint32_t)(EAX), 0x100c1c54u);
  /* 100c1c54 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1c59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1c5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1c5e je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1c60 push 0x100cf888 */
  push32((uint32_t)(0x100cf888u));
  /* 100c1c65 push 0x100d5f98 */
  push32((uint32_t)(0x100d5f98u));
  /* 100c1c6a call eax */
  call_ind((uint32_t)(EAX), 0x100c1c6cu);
  /* 100c1c6c mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1c71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1c74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1c76 je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1c78 push 0x100cf868 */
  push32((uint32_t)(0x100cf868u));
  /* 100c1c7d push 0x100d5f88 */
  push32((uint32_t)(0x100d5f88u));
  /* 100c1c82 call eax */
  call_ind((uint32_t)(EAX), 0x100c1c84u);
  /* 100c1c84 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1c8e je 0x100c1c9f */
  if (C.zf) goto L_100c1c9f;
  /* 100c1c90 push 0x100cf848 */
  push32((uint32_t)(0x100cf848u));
  /* 100c1c95 push 0x100d5f90 */
  push32((uint32_t)(0x100d5f90u));
  /* 100c1c9a call eax */
  call_ind((uint32_t)(EAX), 0x100c1c9cu);
  /* 100c1c9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c1c9f:;
  /* 100c1c9f lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 100c1ca3 push 0x100cf840 */
  push32((uint32_t)(0x100cf840u));
  /* 100c1ca8 push eax */
  push32((uint32_t)(EAX));
  /* 100c1ca9 call 0x100c2f30 */
  push32(0x100c1caeu); f_100c2f30();
  /* 100c1cae push eax */
  push32((uint32_t)(EAX));
  /* 100c1caf push 0x100d6038 */
  push32((uint32_t)(0x100d6038u));
  /* 100c1cb4 call 0x100c26a0 */
  push32(0x100c1cb9u); f_100c26a0();
  /* 100c1cb9 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 100c1cbd push 0x100cf838 */
  push32((uint32_t)(0x100cf838u));
  /* 100c1cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 100c1cc3 call 0x100c2f30 */
  push32(0x100c1cc8u); f_100c2f30();
  /* 100c1cc8 push eax */
  push32((uint32_t)(EAX));
  /* 100c1cc9 push 0x100d6030 */
  push32((uint32_t)(0x100d6030u));
  /* 100c1cce call 0x100c26a0 */
  push32(0x100c1cd3u); f_100c26a0();
  /* 100c1cd3 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 100c1cd7 push 0x100cf830 */
  push32((uint32_t)(0x100cf830u));
  /* 100c1cdc push edx */
  push32((uint32_t)(EDX));
  /* 100c1cdd call 0x100c2f30 */
  push32(0x100c1ce2u); f_100c2f30();
  /* 100c1ce2 push eax */
  push32((uint32_t)(EAX));
  /* 100c1ce3 push 0x100d6028 */
  push32((uint32_t)(0x100d6028u));
  /* 100c1ce8 call 0x100c26a0 */
  push32(0x100c1cedu); f_100c26a0();
  /* 100c1ced lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 100c1cf1 push 0x100cf828 */
  push32((uint32_t)(0x100cf828u));
  /* 100c1cf6 push eax */
  push32((uint32_t)(EAX));
  /* 100c1cf7 call 0x100c2f30 */
  push32(0x100c1cfcu); f_100c2f30();
  /* 100c1cfc push eax */
  push32((uint32_t)(EAX));
  /* 100c1cfd push 0x100d6020 */
  push32((uint32_t)(0x100d6020u));
  /* 100c1d02 call 0x100c26a0 */
  push32(0x100c1d07u); f_100c26a0();
  /* 100c1d07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1d0a lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 100c1d0e push 0x100cf820 */
  push32((uint32_t)(0x100cf820u));
  /* 100c1d13 push ecx */
  push32((uint32_t)(ECX));
  /* 100c1d14 call 0x100c2f30 */
  push32(0x100c1d19u); f_100c2f30();
  /* 100c1d19 push eax */
  push32((uint32_t)(EAX));
  /* 100c1d1a push 0x100d6018 */
  push32((uint32_t)(0x100d6018u));
  /* 100c1d1f call 0x100c26a0 */
  push32(0x100c1d24u); f_100c26a0();
  /* 100c1d24 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 100c1d28 push 0x100cf818 */
  push32((uint32_t)(0x100cf818u));
  /* 100c1d2d push edx */
  push32((uint32_t)(EDX));
  /* 100c1d2e call 0x100c2f30 */
  push32(0x100c1d33u); f_100c2f30();
  /* 100c1d33 push eax */
  push32((uint32_t)(EAX));
  /* 100c1d34 push 0x100d6010 */
  push32((uint32_t)(0x100d6010u));
  /* 100c1d39 call 0x100c26a0 */
  push32(0x100c1d3eu); f_100c26a0();
  /* 100c1d3e lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 100c1d42 push 0x100cf810 */
  push32((uint32_t)(0x100cf810u));
  /* 100c1d47 push eax */
  push32((uint32_t)(EAX));
  /* 100c1d48 call 0x100c2f30 */
  push32(0x100c1d4du); f_100c2f30();
  /* 100c1d4d push eax */
  push32((uint32_t)(EAX));
  /* 100c1d4e push 0x100d6150 */
  push32((uint32_t)(0x100d6150u));
  /* 100c1d53 call 0x100c26a0 */
  push32(0x100c1d58u); f_100c26a0();
  /* 100c1d58 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 100c1d5c push 0x100cf808 */
  push32((uint32_t)(0x100cf808u));
  /* 100c1d61 push ecx */
  push32((uint32_t)(ECX));
  /* 100c1d62 call 0x100c2f30 */
  push32(0x100c1d67u); f_100c2f30();
  /* 100c1d67 push eax */
  push32((uint32_t)(EAX));
  /* 100c1d68 push 0x100d6148 */
  push32((uint32_t)(0x100d6148u));
  /* 100c1d6d call 0x100c26a0 */
  push32(0x100c1d72u); f_100c26a0();
  /* 100c1d72 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1d75 lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 100c1d79 push 0x100cf800 */
  push32((uint32_t)(0x100cf800u));
  /* 100c1d7e push edx */
  push32((uint32_t)(EDX));
  /* 100c1d7f call 0x100c2f30 */
  push32(0x100c1d84u); f_100c2f30();
  /* 100c1d84 push eax */
  push32((uint32_t)(EAX));
  /* 100c1d85 push 0x100d6140 */
  push32((uint32_t)(0x100d6140u));
  /* 100c1d8a call 0x100c26a0 */
  push32(0x100c1d8fu); f_100c26a0();
  /* 100c1d8f lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 100c1d93 push 0x100cf7f8 */
  push32((uint32_t)(0x100cf7f8u));
  /* 100c1d98 push eax */
  push32((uint32_t)(EAX));
  /* 100c1d99 call 0x100c2f30 */
  push32(0x100c1d9eu); f_100c2f30();
  /* 100c1d9e push eax */
  push32((uint32_t)(EAX));
  /* 100c1d9f push 0x100d6138 */
  push32((uint32_t)(0x100d6138u));
  /* 100c1da4 call 0x100c26a0 */
  push32(0x100c1da9u); f_100c26a0();
  /* 100c1da9 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 100c1dad push 0x100cf7f0 */
  push32((uint32_t)(0x100cf7f0u));
  /* 100c1db2 push ecx */
  push32((uint32_t)(ECX));
  /* 100c1db3 call 0x100c2f30 */
  push32(0x100c1db8u); f_100c2f30();
  /* 100c1db8 push eax */
  push32((uint32_t)(EAX));
  /* 100c1db9 push 0x100d6128 */
  push32((uint32_t)(0x100d6128u));
  /* 100c1dbe call 0x100c26a0 */
  push32(0x100c1dc3u); f_100c26a0();
  /* 100c1dc3 push 0x100cf7e8 */
  push32((uint32_t)(0x100cf7e8u));
  /* 100c1dc8 lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 100c1dcc push edx */
  push32((uint32_t)(EDX));
  /* 100c1dcd call 0x100c2f30 */
  push32(0x100c1dd2u); f_100c2f30();
  /* 100c1dd2 push eax */
  push32((uint32_t)(EAX));
  /* 100c1dd3 push 0x100d6178 */
  push32((uint32_t)(0x100d6178u));
  /* 100c1dd8 call 0x100c26a0 */
  push32(0x100c1dddu); f_100c26a0();
  /* 100c1ddd mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1de2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1de5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1de7 je 0x100c1f1c */
  if (C.zf) goto L_100c1f1c;
  /* 100c1ded push 0x100cf7d4 */
  push32((uint32_t)(0x100cf7d4u));
  /* 100c1df2 push 0x100d36d8 */
  push32((uint32_t)(0x100d36d8u));
  /* 100c1df7 call eax */
  call_ind((uint32_t)(EAX), 0x100c1df9u);
  /* 100c1df9 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1dfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1e01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1e03 je 0x100c1f1c */
  if (C.zf) goto L_100c1f1c;
  /* 100c1e09 push 0x100cf7c0 */
  push32((uint32_t)(0x100cf7c0u));
  /* 100c1e0e push 0x100d36d0 */
  push32((uint32_t)(0x100d36d0u));
  /* 100c1e13 call eax */
  call_ind((uint32_t)(EAX), 0x100c1e15u);
  /* 100c1e15 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1e1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1e1f je 0x100c1f1c */
  if (C.zf) goto L_100c1f1c;
  /* 100c1e25 push 0x100cf7ac */
  push32((uint32_t)(0x100cf7acu));
  /* 100c1e2a push 0x100d36c8 */
  push32((uint32_t)(0x100d36c8u));
  /* 100c1e2f call eax */
  call_ind((uint32_t)(EAX), 0x100c1e31u);
  /* 100c1e31 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1e36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1e3b je 0x100c1f1c */
  if (C.zf) goto L_100c1f1c;
  /* 100c1e41 push 0x100cf798 */
  push32((uint32_t)(0x100cf798u));
  /* 100c1e46 push 0x100d36c0 */
  push32((uint32_t)(0x100d36c0u));
  /* 100c1e4b call eax */
  call_ind((uint32_t)(EAX), 0x100c1e4du);
  /* 100c1e4d mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1e52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1e55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1e57 je 0x100c1f1c */
  if (C.zf) goto L_100c1f1c;
  /* 100c1e5d push 0x100cf784 */
  push32((uint32_t)(0x100cf784u));
  /* 100c1e62 push 0x100d3698 */
  push32((uint32_t)(0x100d3698u));
  /* 100c1e67 call eax */
  call_ind((uint32_t)(EAX), 0x100c1e69u);
  /* 100c1e69 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1e71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1e73 je 0x100c1f1c */
  if (C.zf) goto L_100c1f1c;
  /* 100c1e79 push 0x100cf770 */
  push32((uint32_t)(0x100cf770u));
  /* 100c1e7e push 0x100d3690 */
  push32((uint32_t)(0x100d3690u));
  /* 100c1e83 call eax */
  call_ind((uint32_t)(EAX), 0x100c1e85u);
  /* 100c1e85 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1e8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1e8f je 0x100c1f1c */
  if (C.zf) goto L_100c1f1c;
  /* 100c1e95 push 0x100cf75c */
  push32((uint32_t)(0x100cf75cu));
  /* 100c1e9a push 0x100d3768 */
  push32((uint32_t)(0x100d3768u));
  /* 100c1e9f call eax */
  call_ind((uint32_t)(EAX), 0x100c1ea1u);
  /* 100c1ea1 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1ea6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1eab je 0x100c1f1c */
  if (C.zf) goto L_100c1f1c;
  /* 100c1ead push 0x100cf748 */
  push32((uint32_t)(0x100cf748u));
  /* 100c1eb2 push 0x100d3760 */
  push32((uint32_t)(0x100d3760u));
  /* 100c1eb7 call eax */
  call_ind((uint32_t)(EAX), 0x100c1eb9u);
  /* 100c1eb9 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1ebe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1ec3 je 0x100c1f1c */
  if (C.zf) goto L_100c1f1c;
  /* 100c1ec5 push 0x100cf734 */
  push32((uint32_t)(0x100cf734u));
  /* 100c1eca push 0x100d3758 */
  push32((uint32_t)(0x100d3758u));
  /* 100c1ecf call eax */
  call_ind((uint32_t)(EAX), 0x100c1ed1u);
  /* 100c1ed1 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1edb je 0x100c1f1c */
  if (C.zf) goto L_100c1f1c;
  /* 100c1edd push 0x100cf720 */
  push32((uint32_t)(0x100cf720u));
  /* 100c1ee2 push 0x100d3740 */
  push32((uint32_t)(0x100d3740u));
  /* 100c1ee7 call eax */
  call_ind((uint32_t)(EAX), 0x100c1ee9u);
  /* 100c1ee9 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1ef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1ef3 je 0x100c1f1c */
  if (C.zf) goto L_100c1f1c;
  /* 100c1ef5 push 0x100cf70c */
  push32((uint32_t)(0x100cf70cu));
  /* 100c1efa push 0x100d3738 */
  push32((uint32_t)(0x100d3738u));
  /* 100c1eff call eax */
  call_ind((uint32_t)(EAX), 0x100c1f01u);
  /* 100c1f01 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c1f06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c1f0b je 0x100c1f1c */
  if (C.zf) goto L_100c1f1c;
  /* 100c1f0d push 0x100cf6f8 */
  push32((uint32_t)(0x100cf6f8u));
  /* 100c1f12 push 0x100d3730 */
  push32((uint32_t)(0x100d3730u));
  /* 100c1f17 call eax */
  call_ind((uint32_t)(EAX), 0x100c1f19u);
  /* 100c1f19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c1f1c:;
  /* 100c1f1c lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 100c1f20 push 0x100cf840 */
  push32((uint32_t)(0x100cf840u));
  /* 100c1f25 push eax */
  push32((uint32_t)(EAX));
  /* 100c1f26 call 0x100c2f30 */
  push32(0x100c1f2bu); f_100c2f30();
  /* 100c1f2b push eax */
  push32((uint32_t)(EAX));
  /* 100c1f2c push 0x100d3700 */
  push32((uint32_t)(0x100d3700u));
  /* 100c1f31 call 0x100c26a0 */
  push32(0x100c1f36u); f_100c26a0();
  /* 100c1f36 lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 100c1f3a push 0x100cf838 */
  push32((uint32_t)(0x100cf838u));
  /* 100c1f3f push ecx */
  push32((uint32_t)(ECX));
  /* 100c1f40 call 0x100c2f30 */
  push32(0x100c1f45u); f_100c2f30();
  /* 100c1f45 push eax */
  push32((uint32_t)(EAX));
  /* 100c1f46 push 0x100d3708 */
  push32((uint32_t)(0x100d3708u));
  /* 100c1f4b call 0x100c26a0 */
  push32(0x100c1f50u); f_100c26a0();
  /* 100c1f50 lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 100c1f54 push 0x100cf830 */
  push32((uint32_t)(0x100cf830u));
  /* 100c1f59 push edx */
  push32((uint32_t)(EDX));
  /* 100c1f5a call 0x100c2f30 */
  push32(0x100c1f5fu); f_100c2f30();
  /* 100c1f5f push eax */
  push32((uint32_t)(EAX));
  /* 100c1f60 push 0x100d3710 */
  push32((uint32_t)(0x100d3710u));
  /* 100c1f65 call 0x100c26a0 */
  push32(0x100c1f6au); f_100c26a0();
  /* 100c1f6a lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 100c1f6e push 0x100cf828 */
  push32((uint32_t)(0x100cf828u));
  /* 100c1f73 push eax */
  push32((uint32_t)(EAX));
  /* 100c1f74 call 0x100c2f30 */
  push32(0x100c1f79u); f_100c2f30();
  /* 100c1f79 push eax */
  push32((uint32_t)(EAX));
  /* 100c1f7a push 0x100d3718 */
  push32((uint32_t)(0x100d3718u));
  /* 100c1f7f call 0x100c26a0 */
  push32(0x100c1f84u); f_100c26a0();
  /* 100c1f84 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1f87 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 100c1f8b push 0x100cf820 */
  push32((uint32_t)(0x100cf820u));
  /* 100c1f90 push ecx */
  push32((uint32_t)(ECX));
  /* 100c1f91 call 0x100c2f30 */
  push32(0x100c1f96u); f_100c2f30();
  /* 100c1f96 push eax */
  push32((uint32_t)(EAX));
  /* 100c1f97 push 0x100d36e0 */
  push32((uint32_t)(0x100d36e0u));
  /* 100c1f9c call 0x100c26a0 */
  push32(0x100c1fa1u); f_100c26a0();
  /* 100c1fa1 lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 100c1fa5 push 0x100cf818 */
  push32((uint32_t)(0x100cf818u));
  /* 100c1faa push edx */
  push32((uint32_t)(EDX));
  /* 100c1fab call 0x100c2f30 */
  push32(0x100c1fb0u); f_100c2f30();
  /* 100c1fb0 push eax */
  push32((uint32_t)(EAX));
  /* 100c1fb1 push 0x100d36f0 */
  push32((uint32_t)(0x100d36f0u));
  /* 100c1fb6 call 0x100c26a0 */
  push32(0x100c1fbbu); f_100c26a0();
  /* 100c1fbb lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 100c1fbf push 0x100cf810 */
  push32((uint32_t)(0x100cf810u));
  /* 100c1fc4 push eax */
  push32((uint32_t)(EAX));
  /* 100c1fc5 call 0x100c2f30 */
  push32(0x100c1fcau); f_100c2f30();
  /* 100c1fca push eax */
  push32((uint32_t)(EAX));
  /* 100c1fcb push 0x100d37a8 */
  push32((uint32_t)(0x100d37a8u));
  /* 100c1fd0 call 0x100c26a0 */
  push32(0x100c1fd5u); f_100c26a0();
  /* 100c1fd5 lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 100c1fd9 push 0x100cf808 */
  push32((uint32_t)(0x100cf808u));
  /* 100c1fde push ecx */
  push32((uint32_t)(ECX));
  /* 100c1fdf call 0x100c2f30 */
  push32(0x100c1fe4u); f_100c2f30();
  /* 100c1fe4 push eax */
  push32((uint32_t)(EAX));
  /* 100c1fe5 push 0x100d37b0 */
  push32((uint32_t)(0x100d37b0u));
  /* 100c1fea call 0x100c26a0 */
  push32(0x100c1fefu); f_100c26a0();
  /* 100c1fef add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c1ff2 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 100c1ff6 push 0x100cf800 */
  push32((uint32_t)(0x100cf800u));
  /* 100c1ffb push edx */
  push32((uint32_t)(EDX));
  /* 100c1ffc call 0x100c2f30 */
  push32(0x100c2001u); f_100c2f30();
  /* 100c2001 push eax */
  push32((uint32_t)(EAX));
  /* 100c2002 push 0x100d37b8 */
  push32((uint32_t)(0x100d37b8u));
  /* 100c2007 call 0x100c26a0 */
  push32(0x100c200cu); f_100c26a0();
  /* 100c200c lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 100c2010 push 0x100cf7f8 */
  push32((uint32_t)(0x100cf7f8u));
  /* 100c2015 push eax */
  push32((uint32_t)(EAX));
  /* 100c2016 call 0x100c2f30 */
  push32(0x100c201bu); f_100c2f30();
  /* 100c201b push eax */
  push32((uint32_t)(EAX));
  /* 100c201c push 0x100d3790 */
  push32((uint32_t)(0x100d3790u));
  /* 100c2021 call 0x100c26a0 */
  push32(0x100c2026u); f_100c26a0();
  /* 100c2026 lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 100c202a push 0x100cf7f0 */
  push32((uint32_t)(0x100cf7f0u));
  /* 100c202f push ecx */
  push32((uint32_t)(ECX));
  /* 100c2030 call 0x100c2f30 */
  push32(0x100c2035u); f_100c2f30();
  /* 100c2035 push eax */
  push32((uint32_t)(EAX));
  /* 100c2036 push 0x100d3798 */
  push32((uint32_t)(0x100d3798u));
  /* 100c203b call 0x100c26a0 */
  push32(0x100c2040u); f_100c26a0();
  /* 100c2040 push 0x100cf7e8 */
  push32((uint32_t)(0x100cf7e8u));
  /* 100c2045 lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 100c2049 push edx */
  push32((uint32_t)(EDX));
  /* 100c204a call 0x100c2f30 */
  push32(0x100c204fu); f_100c2f30();
  /* 100c204f push eax */
  push32((uint32_t)(EAX));
  /* 100c2050 push 0x100d37a0 */
  push32((uint32_t)(0x100d37a0u));
  /* 100c2055 call 0x100c26a0 */
  push32(0x100c205au); f_100c26a0();
  /* 100c205a mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c205f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2064 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c206a push 0x100cf6e8 */
  push32((uint32_t)(0x100cf6e8u));
  /* 100c206f push 0x100d61f8 */
  push32((uint32_t)(0x100d61f8u));
  /* 100c2074 call eax */
  call_ind((uint32_t)(EAX), 0x100c2076u);
  /* 100c2076 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c207b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c207e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2080 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c2086 push 0x100cf6d4 */
  push32((uint32_t)(0x100cf6d4u));
  /* 100c208b push 0x100d61f0 */
  push32((uint32_t)(0x100d61f0u));
  /* 100c2090 call eax */
  call_ind((uint32_t)(EAX), 0x100c2092u);
  /* 100c2092 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2097 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c209a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c209c je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c20a2 push 0x100cf6c0 */
  push32((uint32_t)(0x100cf6c0u));
  /* 100c20a7 push 0x100d61c0 */
  push32((uint32_t)(0x100d61c0u));
  /* 100c20ac call eax */
  call_ind((uint32_t)(EAX), 0x100c20aeu);
  /* 100c20ae mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c20b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c20b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c20b8 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c20be push 0x100cf6ac */
  push32((uint32_t)(0x100cf6acu));
  /* 100c20c3 push 0x100d61b8 */
  push32((uint32_t)(0x100d61b8u));
  /* 100c20c8 call eax */
  call_ind((uint32_t)(EAX), 0x100c20cau);
  /* 100c20ca mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c20cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c20d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c20d4 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c20da push 0x100cf698 */
  push32((uint32_t)(0x100cf698u));
  /* 100c20df push 0x100d61c8 */
  push32((uint32_t)(0x100d61c8u));
  /* 100c20e4 call eax */
  call_ind((uint32_t)(EAX), 0x100c20e6u);
  /* 100c20e6 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c20eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c20ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c20f0 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c20f6 push 0x100cf684 */
  push32((uint32_t)(0x100cf684u));
  /* 100c20fb push 0x100d60b8 */
  push32((uint32_t)(0x100d60b8u));
  /* 100c2100 call eax */
  call_ind((uint32_t)(EAX), 0x100c2102u);
  /* 100c2102 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2107 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c210a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c210c je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c2112 push 0x100cf670 */
  push32((uint32_t)(0x100cf670u));
  /* 100c2117 push 0x100d60c0 */
  push32((uint32_t)(0x100d60c0u));
  /* 100c211c call eax */
  call_ind((uint32_t)(EAX), 0x100c211eu);
  /* 100c211e mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2128 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c212e push 0x100cf65c */
  push32((uint32_t)(0x100cf65cu));
  /* 100c2133 push 0x100d60c8 */
  push32((uint32_t)(0x100d60c8u));
  /* 100c2138 call eax */
  call_ind((uint32_t)(EAX), 0x100c213au);
  /* 100c213a mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c213f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2144 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c214a push 0x100cf648 */
  push32((uint32_t)(0x100cf648u));
  /* 100c214f push 0x100d60d0 */
  push32((uint32_t)(0x100d60d0u));
  /* 100c2154 call eax */
  call_ind((uint32_t)(EAX), 0x100c2156u);
  /* 100c2156 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c215b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c215e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2160 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c2166 push 0x100cf640 */
  push32((uint32_t)(0x100cf640u));
  /* 100c216b push 0x100d61d8 */
  push32((uint32_t)(0x100d61d8u));
  /* 100c2170 call eax */
  call_ind((uint32_t)(EAX), 0x100c2172u);
  /* 100c2172 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2177 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c217a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c217c je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c2182 push 0x100cf638 */
  push32((uint32_t)(0x100cf638u));
  /* 100c2187 push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c218c call eax */
  call_ind((uint32_t)(EAX), 0x100c218eu);
  /* 100c218e mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2193 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2198 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c219e push 0x100cf630 */
  push32((uint32_t)(0x100cf630u));
  /* 100c21a3 push 0x100d3978 */
  push32((uint32_t)(0x100d3978u));
  /* 100c21a8 call eax */
  call_ind((uint32_t)(EAX), 0x100c21aau);
  /* 100c21aa mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c21af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c21b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c21b4 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c21ba push 0x100cf628 */
  push32((uint32_t)(0x100cf628u));
  /* 100c21bf push 0x100d6098 */
  push32((uint32_t)(0x100d6098u));
  /* 100c21c4 call eax */
  call_ind((uint32_t)(EAX), 0x100c21c6u);
  /* 100c21c6 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c21cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c21ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c21d0 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c21d6 push 0x100cf620 */
  push32((uint32_t)(0x100cf620u));
  /* 100c21db push 0x100d6050 */
  push32((uint32_t)(0x100d6050u));
  /* 100c21e0 call eax */
  call_ind((uint32_t)(EAX), 0x100c21e2u);
  /* 100c21e2 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c21e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c21ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c21ec je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c21f2 push 0x100cf618 */
  push32((uint32_t)(0x100cf618u));
  /* 100c21f7 push 0x100d6058 */
  push32((uint32_t)(0x100d6058u));
  /* 100c21fc call eax */
  call_ind((uint32_t)(EAX), 0x100c21feu);
  /* 100c21fe mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2208 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c220e push 0x100cf610 */
  push32((uint32_t)(0x100cf610u));
  /* 100c2213 push 0x100d6060 */
  push32((uint32_t)(0x100d6060u));
  /* 100c2218 call eax */
  call_ind((uint32_t)(EAX), 0x100c221au);
  /* 100c221a mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c221f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2224 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c222a push 0x100cf608 */
  push32((uint32_t)(0x100cf608u));
  /* 100c222f push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c2234 call eax */
  call_ind((uint32_t)(EAX), 0x100c2236u);
  /* 100c2236 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c223b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c223e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2240 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c2246 push 0x100cf600 */
  push32((uint32_t)(0x100cf600u));
  /* 100c224b push 0x100d6130 */
  push32((uint32_t)(0x100d6130u));
  /* 100c2250 call eax */
  call_ind((uint32_t)(EAX), 0x100c2252u);
  /* 100c2252 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2257 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c225a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c225c je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c2262 push 0x100cf5f8 */
  push32((uint32_t)(0x100cf5f8u));
  /* 100c2267 push 0x100d6170 */
  push32((uint32_t)(0x100d6170u));
  /* 100c226c call eax */
  call_ind((uint32_t)(EAX), 0x100c226eu);
  /* 100c226e mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2273 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2278 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c227e push 0x100cf5f0 */
  push32((uint32_t)(0x100cf5f0u));
  /* 100c2283 push 0x100d6228 */
  push32((uint32_t)(0x100d6228u));
  /* 100c2288 call eax */
  call_ind((uint32_t)(EAX), 0x100c228au);
  /* 100c228a mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c228f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2292 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2294 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c229a push 0x100cf5e8 */
  push32((uint32_t)(0x100cf5e8u));
  /* 100c229f push 0x100d6230 */
  push32((uint32_t)(0x100d6230u));
  /* 100c22a4 call eax */
  call_ind((uint32_t)(EAX), 0x100c22a6u);
  /* 100c22a6 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c22ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c22ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c22b0 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c22b6 push 0x100cf5e0 */
  push32((uint32_t)(0x100cf5e0u));
  /* 100c22bb push 0x100d6188 */
  push32((uint32_t)(0x100d6188u));
  /* 100c22c0 call eax */
  call_ind((uint32_t)(EAX), 0x100c22c2u);
  /* 100c22c2 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c22c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c22ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c22cc je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c22d2 push 0x100cf5d8 */
  push32((uint32_t)(0x100cf5d8u));
  /* 100c22d7 push 0x100d6198 */
  push32((uint32_t)(0x100d6198u));
  /* 100c22dc call eax */
  call_ind((uint32_t)(EAX), 0x100c22deu);
  /* 100c22de mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c22e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c22e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c22e8 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c22ee push 0x100cf5d0 */
  push32((uint32_t)(0x100cf5d0u));
  /* 100c22f3 push 0x100d61a0 */
  push32((uint32_t)(0x100d61a0u));
  /* 100c22f8 call eax */
  call_ind((uint32_t)(EAX), 0x100c22fau);
  /* 100c22fa mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c22ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2304 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c230a push 0x100cf5c8 */
  push32((uint32_t)(0x100cf5c8u));
  /* 100c230f push 0x100d6190 */
  push32((uint32_t)(0x100d6190u));
  /* 100c2314 call eax */
  call_ind((uint32_t)(EAX), 0x100c2316u);
  /* 100c2316 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c231b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c231e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2320 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c2326 push 0x100cf5c0 */
  push32((uint32_t)(0x100cf5c0u));
  /* 100c232b push 0x100d3970 */
  push32((uint32_t)(0x100d3970u));
  /* 100c2330 call eax */
  call_ind((uint32_t)(EAX), 0x100c2332u);
  /* 100c2332 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2337 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c233a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c233c je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c2342 push 0x100cf5b8 */
  push32((uint32_t)(0x100cf5b8u));
  /* 100c2347 push 0x100d3900 */
  push32((uint32_t)(0x100d3900u));
  /* 100c234c call eax */
  call_ind((uint32_t)(EAX), 0x100c234eu);
  /* 100c234e mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2358 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c235e push 0x100cf5b0 */
  push32((uint32_t)(0x100cf5b0u));
  /* 100c2363 push 0x100d37c0 */
  push32((uint32_t)(0x100d37c0u));
  /* 100c2368 call eax */
  call_ind((uint32_t)(EAX), 0x100c236au);
  /* 100c236a mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c236f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2374 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c237a push 0x100cf5a8 */
  push32((uint32_t)(0x100cf5a8u));
  /* 100c237f push 0x100d6110 */
  push32((uint32_t)(0x100d6110u));
  /* 100c2384 call eax */
  call_ind((uint32_t)(EAX), 0x100c2386u);
  /* 100c2386 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c238b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c238e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2390 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c2396 push 0x100cf5a0 */
  push32((uint32_t)(0x100cf5a0u));
  /* 100c239b push 0x100d3960 */
  push32((uint32_t)(0x100d3960u));
  /* 100c23a0 call eax */
  call_ind((uint32_t)(EAX), 0x100c23a2u);
  /* 100c23a2 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c23a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c23aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c23ac je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c23b2 push 0x100cf598 */
  push32((uint32_t)(0x100cf598u));
  /* 100c23b7 push 0x100d6218 */
  push32((uint32_t)(0x100d6218u));
  /* 100c23bc call eax */
  call_ind((uint32_t)(EAX), 0x100c23beu);
  /* 100c23be mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c23c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c23c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c23c8 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c23ce push 0x100cf590 */
  push32((uint32_t)(0x100cf590u));
  /* 100c23d3 push 0x100d6220 */
  push32((uint32_t)(0x100d6220u));
  /* 100c23d8 call eax */
  call_ind((uint32_t)(EAX), 0x100c23dau);
  /* 100c23da mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c23df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c23e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c23e4 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c23ea push 0x100cf588 */
  push32((uint32_t)(0x100cf588u));
  /* 100c23ef push 0x100d3890 */
  push32((uint32_t)(0x100d3890u));
  /* 100c23f4 call eax */
  call_ind((uint32_t)(EAX), 0x100c23f6u);
  /* 100c23f6 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c23fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c23fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2400 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c2406 push 0x100cf580 */
  push32((uint32_t)(0x100cf580u));
  /* 100c240b push 0x100d38a0 */
  push32((uint32_t)(0x100d38a0u));
  /* 100c2410 call eax */
  call_ind((uint32_t)(EAX), 0x100c2412u);
  /* 100c2412 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2417 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c241a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c241c je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c2422 push 0x100cf578 */
  push32((uint32_t)(0x100cf578u));
  /* 100c2427 push 0x100d3788 */
  push32((uint32_t)(0x100d3788u));
  /* 100c242c call eax */
  call_ind((uint32_t)(EAX), 0x100c242eu);
  /* 100c242e mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2438 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c243e push 0x100cf570 */
  push32((uint32_t)(0x100cf570u));
  /* 100c2443 push 0x100d3648 */
  push32((uint32_t)(0x100d3648u));
  /* 100c2448 call eax */
  call_ind((uint32_t)(EAX), 0x100c244au);
  /* 100c244a mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c244f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2454 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c245a push 0x100cf568 */
  push32((uint32_t)(0x100cf568u));
  /* 100c245f push 0x100d3728 */
  push32((uint32_t)(0x100d3728u));
  /* 100c2464 call eax */
  call_ind((uint32_t)(EAX), 0x100c2466u);
  /* 100c2466 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c246b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c246e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2470 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c2476 push 0x100cf560 */
  push32((uint32_t)(0x100cf560u));
  /* 100c247b push 0x100d3650 */
  push32((uint32_t)(0x100d3650u));
  /* 100c2480 call eax */
  call_ind((uint32_t)(EAX), 0x100c2482u);
  /* 100c2482 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c248a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c248c je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c2492 push 0x100cf54c */
  push32((uint32_t)(0x100cf54cu));
  /* 100c2497 push 0x100d6308 */
  push32((uint32_t)(0x100d6308u));
  /* 100c249c call eax */
  call_ind((uint32_t)(EAX), 0x100c249eu);
  /* 100c249e mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c24a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c24a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c24a8 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c24aa push 0x100cf538 */
  push32((uint32_t)(0x100cf538u));
  /* 100c24af push 0x100d62f0 */
  push32((uint32_t)(0x100d62f0u));
  /* 100c24b4 call eax */
  call_ind((uint32_t)(EAX), 0x100c24b6u);
  /* 100c24b6 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c24bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c24be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c24c0 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c24c2 push 0x100cf524 */
  push32((uint32_t)(0x100cf524u));
  /* 100c24c7 push 0x100d6300 */
  push32((uint32_t)(0x100d6300u));
  /* 100c24cc call eax */
  call_ind((uint32_t)(EAX), 0x100c24ceu);
  /* 100c24ce mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c24d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c24d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c24d8 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c24da push 0x100cf510 */
  push32((uint32_t)(0x100cf510u));
  /* 100c24df push 0x100d62e0 */
  push32((uint32_t)(0x100d62e0u));
  /* 100c24e4 call eax */
  call_ind((uint32_t)(EAX), 0x100c24e6u);
  /* 100c24e6 mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c24eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c24ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c24f0 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c24f2 push 0x100cf4fc */
  push32((uint32_t)(0x100cf4fcu));
  /* 100c24f7 push 0x100d62e8 */
  push32((uint32_t)(0x100d62e8u));
  /* 100c24fc call eax */
  call_ind((uint32_t)(EAX), 0x100c24feu);
  /* 100c24fe mov eax, dword ptr [0x100d641c] */
  EAX = (r32((uint32_t)(0x100d641c)));
  /* 100c2503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2508 je 0x100c2519 */
  if (C.zf) goto L_100c2519;
  /* 100c250a push 0x100cf4e8 */
  push32((uint32_t)(0x100cf4e8u));
  /* 100c250f push 0x100d62d8 */
  push32((uint32_t)(0x100d62d8u));
  /* 100c2514 call eax */
  call_ind((uint32_t)(EAX), 0x100c2516u);
  /* 100c2516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c2519:;
  /* 100c2519 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c251b push 4 */
  push32((uint32_t)(0x4u));
  /* 100c251d push 9 */
  push32((uint32_t)(0x9u));
  /* 100c251f call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c2525u);
  /* 100c2525 push 6 */
  push32((uint32_t)(0x6u));
  /* 100c2527 call dword ptr [0x100d6540] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6540))), 0x100c252du);
  /* 100c252d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c252f push 0x100cf4d4 */
  push32((uint32_t)(0x100cf4d4u));
  /* 100c2534 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c2536 call dword ptr [0x100d6544] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6544))), 0x100c253cu);
  /* 100c253c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c253e push 0x100cf4c0 */
  push32((uint32_t)(0x100cf4c0u));
  /* 100c2543 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c2545 call dword ptr [0x100d6544] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6544))), 0x100c254bu);
  /* 100c254b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c254d push 0x100cf4ac */
  push32((uint32_t)(0x100cf4acu));
  /* 100c2552 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c2554 call dword ptr [0x100d6544] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6544))), 0x100c255au);
  /* 100c255a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c255c push 0x100cf498 */
  push32((uint32_t)(0x100cf498u));
  /* 100c2561 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c2563 call dword ptr [0x100d6544] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6544))), 0x100c2569u);
  /* 100c2569 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c256c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c256e push 0x100cf484 */
  push32((uint32_t)(0x100cf484u));
  /* 100c2573 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c2575 call dword ptr [0x100d6544] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6544))), 0x100c257bu);
  /* 100c257b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c257d push 0x100cf470 */
  push32((uint32_t)(0x100cf470u));
  /* 100c2582 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c2584 call dword ptr [0x100d6544] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6544))), 0x100c258au);
  /* 100c258a push 0x100cfbbc */
  push32((uint32_t)(0x100cfbbcu));
  /* 100c258f call dword ptr [0x100d6580] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6580))), 0x100c2595u);
  /* 100c2595 push 0x100cf464 */
  push32((uint32_t)(0x100cf464u));
  /* 100c259a call dword ptr [0x100d657c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d657c))), 0x100c25a0u);
  /* 100c25a0 push 0x100cf454 */
  push32((uint32_t)(0x100cf454u));
  /* 100c25a5 call dword ptr [0x100d6584] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6584))), 0x100c25abu);
  /* 100c25ab push 0x100cf448 */
  push32((uint32_t)(0x100cf448u));
  /* 100c25b0 call dword ptr [0x100d658c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d658c))), 0x100c25b6u);
  /* 100c25b6 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100c25bb call dword ptr [0x100d6548] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6548))), 0x100c25c1u);
  /* 100c25c1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c25c3 call dword ptr [0x100d654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d654c))), 0x100c25c9u);
  /* 100c25c9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c25cb call dword ptr [0x100d6550] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6550))), 0x100c25d1u);
  /* 100c25d1 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 100c25d6 call dword ptr [0x100d6554] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6554))), 0x100c25dcu);
  /* 100c25dc push 5 */
  push32((uint32_t)(0x5u));
  /* 100c25de call dword ptr [0x100d6558] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6558))), 0x100c25e4u);
  /* 100c25e4 add esp, 0x9c */
  { uint32_t _a=(ESP),_b=(0x9cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c25ea ret  */
  ESPCHK(0x100c1010u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f0 @ 0x100c25f0 (20 bytes, 7 insns) */
void f_100c25f0(void) {
  FTRACE(0x100c25f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c25f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c25f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c25f8 push eax */
  push32((uint32_t)(EAX));
  /* 100c25f9 push ecx */
  push32((uint32_t)(ECX));
  /* 100c25fa call dword ptr [0x100d6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6530))), 0x100c2600u);
  /* 100c2600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2603 ret  */
  ESPCHK(0x100c25f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x100c2610 (25 bytes, 9 insns) */
void f_100c2610(void) {
  FTRACE(0x100c2610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2610 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100c2614 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c2618 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c261c push eax */
  push32((uint32_t)(EAX));
  /* 100c261d push ecx */
  push32((uint32_t)(ECX));
  /* 100c261e push edx */
  push32((uint32_t)(EDX));
  /* 100c261f call dword ptr [0x100d653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d653c))), 0x100c2625u);
  /* 100c2625 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2628 ret  */
  ESPCHK(0x100c2610u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x100c2630 (6 bytes, 1 insns) */
void f_100c2630(void) {
  FTRACE(0x100c2630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2630 jmp dword ptr [0x100d6568] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100d6568)))); return;
}

/* FUN_10002640 @ 0x100c2640 (20 bytes, 7 insns) */
void f_100c2640(void) {
  FTRACE(0x100c2640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2640 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c2644 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c2648 push eax */
  push32((uint32_t)(EAX));
  /* 100c2649 push ecx */
  push32((uint32_t)(ECX));
  /* 100c264a call dword ptr [0x100d6588] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6588))), 0x100c2650u);
  /* 100c2650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2653 ret  */
  ESPCHK(0x100c2640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002660 @ 0x100c2660 (6 bytes, 1 insns) */
void f_100c2660(void) {
  FTRACE(0x100c2660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2660 jmp dword ptr [0x100d6594] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100d6594)))); return;
}

/* FUN_10002670 @ 0x100c2670 (6 bytes, 1 insns) */
void f_100c2670(void) {
  FTRACE(0x100c2670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2670 jmp dword ptr [0x100d6598] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100d6598)))); return;
}

/* FUN_10002680 @ 0x100c2680 (6 bytes, 1 insns) */
void f_100c2680(void) {
  FTRACE(0x100c2680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2680 jmp dword ptr [0x100d65a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100d65a0)))); return;
}

/* FUN_10002690 @ 0x100c2690 (13 bytes, 5 insns) */
void f_100c2690(void) {
  FTRACE(0x100c2690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2690 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c2694 push eax */
  push32((uint32_t)(EAX));
  /* 100c2695 call dword ptr [0x100d65a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d65a4))), 0x100c269bu);
  /* 100c269b pop ecx */
  ECX = (pop32());
  /* 100c269c ret  */
  ESPCHK(0x100c2690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x100c26a0 (20 bytes, 7 insns) */
void f_100c26a0(void) {
  FTRACE(0x100c26a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c26a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c26a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c26a8 push eax */
  push32((uint32_t)(EAX));
  /* 100c26a9 push ecx */
  push32((uint32_t)(ECX));
  /* 100c26aa call dword ptr [0x100d65a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d65a8))), 0x100c26b0u);
  /* 100c26b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c26b3 ret  */
  ESPCHK(0x100c26a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c0 @ 0x100c26c0 (6 bytes, 1 insns) */
void f_100c26c0(void) {
  FTRACE(0x100c26c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c26c0 jmp dword ptr [0x100d65ac] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100d65ac)))); return;
}

/* FUN_100026d0 @ 0x100c26d0 (20 bytes, 7 insns) */
void f_100c26d0(void) {
  FTRACE(0x100c26d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c26d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c26d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c26d8 push eax */
  push32((uint32_t)(EAX));
  /* 100c26d9 push ecx */
  push32((uint32_t)(ECX));
  /* 100c26da call dword ptr [0x100d6288] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6288))), 0x100c26e0u);
  /* 100c26e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c26e3 ret  */
  ESPCHK(0x100c26d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x100c26f0 (15 bytes, 5 insns) */
void f_100c26f0(void) {
  FTRACE(0x100c26f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c26f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c26f4 push eax */
  push32((uint32_t)(EAX));
  /* 100c26f5 call dword ptr [0x100d62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d62d0))), 0x100c26fbu);
  /* 100c26fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c26fe ret  */
  ESPCHK(0x100c26f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x100c2700 (20 bytes, 7 insns) */
void f_100c2700(void) {
  FTRACE(0x100c2700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2700 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c2704 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c2708 push eax */
  push32((uint32_t)(EAX));
  /* 100c2709 push ecx */
  push32((uint32_t)(ECX));
  /* 100c270a call dword ptr [0x100d3750] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d3750))), 0x100c2710u);
  /* 100c2710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2713 ret  */
  ESPCHK(0x100c2700u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x100c2720 (13 bytes, 5 insns) */
void f_100c2720(void) {
  FTRACE(0x100c2720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2720 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c2724 push eax */
  push32((uint32_t)(EAX));
  /* 100c2725 call dword ptr [0x100d38f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d38f0))), 0x100c272bu);
  /* 100c272b pop ecx */
  ECX = (pop32());
  /* 100c272c ret  */
  ESPCHK(0x100c2720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x100c2730 (15 bytes, 5 insns) */
void f_100c2730(void) {
  FTRACE(0x100c2730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2730 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c2734 push eax */
  push32((uint32_t)(EAX));
  /* 100c2735 call dword ptr [0x100d65b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d65b0))), 0x100c273bu);
  /* 100c273b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c273e ret  */
  ESPCHK(0x100c2730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x100c2740 (25 bytes, 9 insns) */
void f_100c2740(void) {
  FTRACE(0x100c2740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2740 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100c2744 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c2748 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c274c push eax */
  push32((uint32_t)(EAX));
  /* 100c274d push ecx */
  push32((uint32_t)(ECX));
  /* 100c274e push edx */
  push32((uint32_t)(EDX));
  /* 100c274f call dword ptr [0x100d5fe0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d5fe0))), 0x100c2755u);
  /* 100c2755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2758 ret  */
  ESPCHK(0x100c2740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x100c2760 (13 bytes, 5 insns) */
void f_100c2760(void) {
  FTRACE(0x100c2760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2760 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c2764 push eax */
  push32((uint32_t)(EAX));
  /* 100c2765 call dword ptr [0x100d3950] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d3950))), 0x100c276bu);
  /* 100c276b pop ecx */
  ECX = (pop32());
  /* 100c276c ret  */
  ESPCHK(0x100c2760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x100c2770 (6 bytes, 1 insns) */
void f_100c2770(void) {
  FTRACE(0x100c2770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2770 jmp dword ptr [0x100d6268] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100d6268)))); return;
}

/* FUN_10002780 @ 0x100c2780 (6 bytes, 1 insns) */
void f_100c2780(void) {
  FTRACE(0x100c2780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2780 jmp dword ptr [0x100d3968] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100d3968)))); return;
}

/* FUN_10002790 @ 0x100c2790 (82 bytes, 28 insns) */
void f_100c2790(void) {
  FTRACE(0x100c2790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2790 mov eax, dword ptr [0x100d6400] */
  EAX = (r32((uint32_t)(0x100d6400)));
  /* 100c2795 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c279b push esi */
  push32((uint32_t)(ESI));
  /* 100c279c push edi */
  push32((uint32_t)(EDI));
  /* 100c279d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 100c27a4 push edi */
  push32((uint32_t)(EDI));
  /* 100c27a5 push eax */
  push32((uint32_t)(EAX));
  /* 100c27a6 call dword ptr [0x100ce088] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce088))), 0x100c27acu);
  /* 100c27ac mov esi, eax */
  ESI = (EAX);
  /* 100c27ae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c27b0 jne 0x100c27d7 */
  if (!C.zf) goto L_100c27d7;
  /* 100c27b2 push edi */
  push32((uint32_t)(EDI));
  /* 100c27b3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 100c27b7 push 0x100cff34 */
  push32((uint32_t)(0x100cff34u));
  /* 100c27bc push ecx */
  push32((uint32_t)(ECX));
  /* 100c27bd call 0x100c6e70 */
  push32(0x100c27c2u); f_100c6e70();
  /* 100c27c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c27c5 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 100c27c9 push esi */
  push32((uint32_t)(ESI));
  /* 100c27ca push 0x100cff24 */
  push32((uint32_t)(0x100cff24u));
  /* 100c27cf push edx */
  push32((uint32_t)(EDX));
  /* 100c27d0 push esi */
  push32((uint32_t)(ESI));
  /* 100c27d1 call dword ptr [0x100ce0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0dc))), 0x100c27d7u);
L_100c27d7:;
  /* 100c27d7 mov eax, esi */
  EAX = (ESI);
  /* 100c27d9 pop edi */
  EDI = (pop32());
  /* 100c27da pop esi */
  ESI = (pop32());
  /* 100c27db add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c27e1 ret  */
  ESPCHK(0x100c2790u, _esp0);
  ESP += 4; return;
}

/* FUN_100027f0 @ 0x100c27f0 (1844 bytes, 376 insns) */
void f_100c27f0(void) {
  FTRACE(0x100c27f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c27f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c27f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c27f5 jne 0x100c2f1c */
  if (!C.zf) goto L_100c2f1c;
  /* 100c27fb push 0x100d0688 */
  push32((uint32_t)(0x100d0688u));
  /* 100c2800 call dword ptr [0x100ce004] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce004))), 0x100c2806u);
  /* 100c2806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c2808 mov dword ptr [0x100d6400], eax */
  w32((uint32_t)(0x100d6400), (EAX));
  /* 100c280d jne 0x100c2829 */
  if (!C.zf) goto L_100c2829;
  /* 100c280f push eax */
  push32((uint32_t)(EAX));
  /* 100c2810 push 0x100d0680 */
  push32((uint32_t)(0x100d0680u));
  /* 100c2815 push 0x100d0668 */
  push32((uint32_t)(0x100d0668u));
  /* 100c281a push eax */
  push32((uint32_t)(EAX));
  /* 100c281b call dword ptr [0x100ce0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0dc))), 0x100c2821u);
  /* 100c2821 mov eax, 1 */
  EAX = (0x1u);
  /* 100c2826 ret 0xc */
  ESPCHK(0x100c27f0u, _esp0);
  ESP += 16; return;
L_100c2829:;
  /* 100c2829 push 0x100d0658 */
  push32((uint32_t)(0x100d0658u));
  /* 100c282e call 0x100c2790 */
  push32(0x100c2833u); f_100c2790();
  /* 100c2833 push 0x100d0648 */
  push32((uint32_t)(0x100d0648u));
  /* 100c2838 mov dword ptr [0x100d6404], eax */
  w32((uint32_t)(0x100d6404), (EAX));
  /* 100c283d call 0x100c2790 */
  push32(0x100c2842u); f_100c2790();
  /* 100c2842 push 0x100d0638 */
  push32((uint32_t)(0x100d0638u));
  /* 100c2847 mov dword ptr [0x100d6408], eax */
  w32((uint32_t)(0x100d6408), (EAX));
  /* 100c284c call 0x100c2790 */
  push32(0x100c2851u); f_100c2790();
  /* 100c2851 push 0x100d062c */
  push32((uint32_t)(0x100d062cu));
  /* 100c2856 mov dword ptr [0x100d640c], eax */
  w32((uint32_t)(0x100d640c), (EAX));
  /* 100c285b call 0x100c2790 */
  push32(0x100c2860u); f_100c2790();
  /* 100c2860 push 0x100d061c */
  push32((uint32_t)(0x100d061cu));
  /* 100c2865 mov dword ptr [0x100d6410], eax */
  w32((uint32_t)(0x100d6410), (EAX));
  /* 100c286a call 0x100c2790 */
  push32(0x100c286fu); f_100c2790();
  /* 100c286f push 0x100d0608 */
  push32((uint32_t)(0x100d0608u));
  /* 100c2874 mov dword ptr [0x100d6414], eax */
  w32((uint32_t)(0x100d6414), (EAX));
  /* 100c2879 call 0x100c2790 */
  push32(0x100c287eu); f_100c2790();
  /* 100c287e push 0x100d05f8 */
  push32((uint32_t)(0x100d05f8u));
  /* 100c2883 mov dword ptr [0x100d6418], eax */
  w32((uint32_t)(0x100d6418), (EAX));
  /* 100c2888 call 0x100c2790 */
  push32(0x100c288du); f_100c2790();
  /* 100c288d push 0x100d05e8 */
  push32((uint32_t)(0x100d05e8u));
  /* 100c2892 mov dword ptr [0x100d641c], eax */
  w32((uint32_t)(0x100d641c), (EAX));
  /* 100c2897 call 0x100c2790 */
  push32(0x100c289cu); f_100c2790();
  /* 100c289c push 0x100d05d4 */
  push32((uint32_t)(0x100d05d4u));
  /* 100c28a1 mov dword ptr [0x100d6420], eax */
  w32((uint32_t)(0x100d6420), (EAX));
  /* 100c28a6 call 0x100c2790 */
  push32(0x100c28abu); f_100c2790();
  /* 100c28ab push 0x100d05c0 */
  push32((uint32_t)(0x100d05c0u));
  /* 100c28b0 mov dword ptr [0x100d6424], eax */
  w32((uint32_t)(0x100d6424), (EAX));
  /* 100c28b5 call 0x100c2790 */
  push32(0x100c28bau); f_100c2790();
  /* 100c28ba push 0x100d05b0 */
  push32((uint32_t)(0x100d05b0u));
  /* 100c28bf mov dword ptr [0x100d6428], eax */
  w32((uint32_t)(0x100d6428), (EAX));
  /* 100c28c4 call 0x100c2790 */
  push32(0x100c28c9u); f_100c2790();
  /* 100c28c9 push 0x100d05a0 */
  push32((uint32_t)(0x100d05a0u));
  /* 100c28ce mov dword ptr [0x100d642c], eax */
  w32((uint32_t)(0x100d642c), (EAX));
  /* 100c28d3 call 0x100c2790 */
  push32(0x100c28d8u); f_100c2790();
  /* 100c28d8 push 0x100d0590 */
  push32((uint32_t)(0x100d0590u));
  /* 100c28dd mov dword ptr [0x100d6430], eax */
  w32((uint32_t)(0x100d6430), (EAX));
  /* 100c28e2 call 0x100c2790 */
  push32(0x100c28e7u); f_100c2790();
  /* 100c28e7 push 0x100d0580 */
  push32((uint32_t)(0x100d0580u));
  /* 100c28ec mov dword ptr [0x100d6434], eax */
  w32((uint32_t)(0x100d6434), (EAX));
  /* 100c28f1 call 0x100c2790 */
  push32(0x100c28f6u); f_100c2790();
  /* 100c28f6 push 0x100d0570 */
  push32((uint32_t)(0x100d0570u));
  /* 100c28fb mov dword ptr [0x100d6438], eax */
  w32((uint32_t)(0x100d6438), (EAX));
  /* 100c2900 call 0x100c2790 */
  push32(0x100c2905u); f_100c2790();
  /* 100c2905 push 0x100d0560 */
  push32((uint32_t)(0x100d0560u));
  /* 100c290a mov dword ptr [0x100d643c], eax */
  w32((uint32_t)(0x100d643c), (EAX));
  /* 100c290f call 0x100c2790 */
  push32(0x100c2914u); f_100c2790();
  /* 100c2914 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2917 mov dword ptr [0x100d6440], eax */
  w32((uint32_t)(0x100d6440), (EAX));
  /* 100c291c push 0x100d0550 */
  push32((uint32_t)(0x100d0550u));
  /* 100c2921 call 0x100c2790 */
  push32(0x100c2926u); f_100c2790();
  /* 100c2926 push 0x100d0540 */
  push32((uint32_t)(0x100d0540u));
  /* 100c292b mov dword ptr [0x100d6444], eax */
  w32((uint32_t)(0x100d6444), (EAX));
  /* 100c2930 call 0x100c2790 */
  push32(0x100c2935u); f_100c2790();
  /* 100c2935 push 0x100d052c */
  push32((uint32_t)(0x100d052cu));
  /* 100c293a mov dword ptr [0x100d6448], eax */
  w32((uint32_t)(0x100d6448), (EAX));
  /* 100c293f call 0x100c2790 */
  push32(0x100c2944u); f_100c2790();
  /* 100c2944 push 0x100d0524 */
  push32((uint32_t)(0x100d0524u));
  /* 100c2949 mov dword ptr [0x100d644c], eax */
  w32((uint32_t)(0x100d644c), (EAX));
  /* 100c294e call 0x100c2790 */
  push32(0x100c2953u); f_100c2790();
  /* 100c2953 push 0x100d0514 */
  push32((uint32_t)(0x100d0514u));
  /* 100c2958 mov dword ptr [0x100d6450], eax */
  w32((uint32_t)(0x100d6450), (EAX));
  /* 100c295d call 0x100c2790 */
  push32(0x100c2962u); f_100c2790();
  /* 100c2962 push 0x100d0504 */
  push32((uint32_t)(0x100d0504u));
  /* 100c2967 mov dword ptr [0x100d6454], eax */
  w32((uint32_t)(0x100d6454), (EAX));
  /* 100c296c call 0x100c2790 */
  push32(0x100c2971u); f_100c2790();
  /* 100c2971 push 0x100d04f8 */
  push32((uint32_t)(0x100d04f8u));
  /* 100c2976 mov dword ptr [0x100d6458], eax */
  w32((uint32_t)(0x100d6458), (EAX));
  /* 100c297b call 0x100c2790 */
  push32(0x100c2980u); f_100c2790();
  /* 100c2980 push 0x100d04e8 */
  push32((uint32_t)(0x100d04e8u));
  /* 100c2985 mov dword ptr [0x100d645c], eax */
  w32((uint32_t)(0x100d645c), (EAX));
  /* 100c298a call 0x100c2790 */
  push32(0x100c298fu); f_100c2790();
  /* 100c298f push 0x100d04e0 */
  push32((uint32_t)(0x100d04e0u));
  /* 100c2994 mov dword ptr [0x100d6460], eax */
  w32((uint32_t)(0x100d6460), (EAX));
  /* 100c2999 call 0x100c2790 */
  push32(0x100c299eu); f_100c2790();
  /* 100c299e push 0x100d04d0 */
  push32((uint32_t)(0x100d04d0u));
  /* 100c29a3 mov dword ptr [0x100d6478], eax */
  w32((uint32_t)(0x100d6478), (EAX));
  /* 100c29a8 call 0x100c2790 */
  push32(0x100c29adu); f_100c2790();
  /* 100c29ad push 0x100d04c0 */
  push32((uint32_t)(0x100d04c0u));
  /* 100c29b2 mov dword ptr [0x100d647c], eax */
  w32((uint32_t)(0x100d647c), (EAX));
  /* 100c29b7 call 0x100c2790 */
  push32(0x100c29bcu); f_100c2790();
  /* 100c29bc push 0x100d04b4 */
  push32((uint32_t)(0x100d04b4u));
  /* 100c29c1 mov dword ptr [0x100d6480], eax */
  w32((uint32_t)(0x100d6480), (EAX));
  /* 100c29c6 call 0x100c2790 */
  push32(0x100c29cbu); f_100c2790();
  /* 100c29cb push 0x100d04a4 */
  push32((uint32_t)(0x100d04a4u));
  /* 100c29d0 mov dword ptr [0x100d6484], eax */
  w32((uint32_t)(0x100d6484), (EAX));
  /* 100c29d5 call 0x100c2790 */
  push32(0x100c29dau); f_100c2790();
  /* 100c29da push 0x100d0498 */
  push32((uint32_t)(0x100d0498u));
  /* 100c29df mov dword ptr [0x100d6488], eax */
  w32((uint32_t)(0x100d6488), (EAX));
  /* 100c29e4 call 0x100c2790 */
  push32(0x100c29e9u); f_100c2790();
  /* 100c29e9 push 0x100d0488 */
  push32((uint32_t)(0x100d0488u));
  /* 100c29ee mov dword ptr [0x100d64a4], eax */
  w32((uint32_t)(0x100d64a4), (EAX));
  /* 100c29f3 call 0x100c2790 */
  push32(0x100c29f8u); f_100c2790();
  /* 100c29f8 push 0x100d0480 */
  push32((uint32_t)(0x100d0480u));
  /* 100c29fd mov dword ptr [0x100d648c], eax */
  w32((uint32_t)(0x100d648c), (EAX));
  /* 100c2a02 call 0x100c2790 */
  push32(0x100c2a07u); f_100c2790();
  /* 100c2a07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2a0a mov dword ptr [0x100d6490], eax */
  w32((uint32_t)(0x100d6490), (EAX));
  /* 100c2a0f push 0x100d0470 */
  push32((uint32_t)(0x100d0470u));
  /* 100c2a14 call 0x100c2790 */
  push32(0x100c2a19u); f_100c2790();
  /* 100c2a19 push 0x100d0460 */
  push32((uint32_t)(0x100d0460u));
  /* 100c2a1e mov dword ptr [0x100d6494], eax */
  w32((uint32_t)(0x100d6494), (EAX));
  /* 100c2a23 call 0x100c2790 */
  push32(0x100c2a28u); f_100c2790();
  /* 100c2a28 push 0x100d0450 */
  push32((uint32_t)(0x100d0450u));
  /* 100c2a2d mov dword ptr [0x100d6498], eax */
  w32((uint32_t)(0x100d6498), (EAX));
  /* 100c2a32 call 0x100c2790 */
  push32(0x100c2a37u); f_100c2790();
  /* 100c2a37 push 0x100d0444 */
  push32((uint32_t)(0x100d0444u));
  /* 100c2a3c mov dword ptr [0x100d649c], eax */
  w32((uint32_t)(0x100d649c), (EAX));
  /* 100c2a41 call 0x100c2790 */
  push32(0x100c2a46u); f_100c2790();
  /* 100c2a46 push 0x100d043c */
  push32((uint32_t)(0x100d043cu));
  /* 100c2a4b mov dword ptr [0x100d64a0], eax */
  w32((uint32_t)(0x100d64a0), (EAX));
  /* 100c2a50 call 0x100c2790 */
  push32(0x100c2a55u); f_100c2790();
  /* 100c2a55 push 0x100d042c */
  push32((uint32_t)(0x100d042cu));
  /* 100c2a5a mov dword ptr [0x100d64a8], eax */
  w32((uint32_t)(0x100d64a8), (EAX));
  /* 100c2a5f call 0x100c2790 */
  push32(0x100c2a64u); f_100c2790();
  /* 100c2a64 push 0x100d041c */
  push32((uint32_t)(0x100d041cu));
  /* 100c2a69 mov dword ptr [0x100d64ac], eax */
  w32((uint32_t)(0x100d64ac), (EAX));
  /* 100c2a6e call 0x100c2790 */
  push32(0x100c2a73u); f_100c2790();
  /* 100c2a73 push 0x100d040c */
  push32((uint32_t)(0x100d040cu));
  /* 100c2a78 mov dword ptr [0x100d64b0], eax */
  w32((uint32_t)(0x100d64b0), (EAX));
  /* 100c2a7d call 0x100c2790 */
  push32(0x100c2a82u); f_100c2790();
  /* 100c2a82 push 0x100d03fc */
  push32((uint32_t)(0x100d03fcu));
  /* 100c2a87 mov dword ptr [0x100d64b4], eax */
  w32((uint32_t)(0x100d64b4), (EAX));
  /* 100c2a8c call 0x100c2790 */
  push32(0x100c2a91u); f_100c2790();
  /* 100c2a91 push 0x100d03f0 */
  push32((uint32_t)(0x100d03f0u));
  /* 100c2a96 mov dword ptr [0x100d64b8], eax */
  w32((uint32_t)(0x100d64b8), (EAX));
  /* 100c2a9b call 0x100c2790 */
  push32(0x100c2aa0u); f_100c2790();
  /* 100c2aa0 push 0x100d03e4 */
  push32((uint32_t)(0x100d03e4u));
  /* 100c2aa5 mov dword ptr [0x100d64bc], eax */
  w32((uint32_t)(0x100d64bc), (EAX));
  /* 100c2aaa call 0x100c2790 */
  push32(0x100c2aafu); f_100c2790();
  /* 100c2aaf push 0x100d03d4 */
  push32((uint32_t)(0x100d03d4u));
  /* 100c2ab4 mov dword ptr [0x100d64c0], eax */
  w32((uint32_t)(0x100d64c0), (EAX));
  /* 100c2ab9 call 0x100c2790 */
  push32(0x100c2abeu); f_100c2790();
  /* 100c2abe push 0x100d03c8 */
  push32((uint32_t)(0x100d03c8u));
  /* 100c2ac3 mov dword ptr [0x100d64c4], eax */
  w32((uint32_t)(0x100d64c4), (EAX));
  /* 100c2ac8 call 0x100c2790 */
  push32(0x100c2acdu); f_100c2790();
  /* 100c2acd push 0x100d03bc */
  push32((uint32_t)(0x100d03bcu));
  /* 100c2ad2 mov dword ptr [0x100d64c8], eax */
  w32((uint32_t)(0x100d64c8), (EAX));
  /* 100c2ad7 call 0x100c2790 */
  push32(0x100c2adcu); f_100c2790();
  /* 100c2adc push 0x100d03b0 */
  push32((uint32_t)(0x100d03b0u));
  /* 100c2ae1 mov dword ptr [0x100d64cc], eax */
  w32((uint32_t)(0x100d64cc), (EAX));
  /* 100c2ae6 call 0x100c2790 */
  push32(0x100c2aebu); f_100c2790();
  /* 100c2aeb push 0x100d03a4 */
  push32((uint32_t)(0x100d03a4u));
  /* 100c2af0 mov dword ptr [0x100d6200], eax */
  w32((uint32_t)(0x100d6200), (EAX));
  /* 100c2af5 call 0x100c2790 */
  push32(0x100c2afau); f_100c2790();
  /* 100c2afa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2afd mov dword ptr [0x100d64d0], eax */
  w32((uint32_t)(0x100d64d0), (EAX));
  /* 100c2b02 push 0x100d0398 */
  push32((uint32_t)(0x100d0398u));
  /* 100c2b07 call 0x100c2790 */
  push32(0x100c2b0cu); f_100c2790();
  /* 100c2b0c push 0x100d038c */
  push32((uint32_t)(0x100d038cu));
  /* 100c2b11 mov dword ptr [0x100d64d4], eax */
  w32((uint32_t)(0x100d64d4), (EAX));
  /* 100c2b16 call 0x100c2790 */
  push32(0x100c2b1bu); f_100c2790();
  /* 100c2b1b push 0x100d037c */
  push32((uint32_t)(0x100d037cu));
  /* 100c2b20 mov dword ptr [0x100d64d8], eax */
  w32((uint32_t)(0x100d64d8), (EAX));
  /* 100c2b25 call 0x100c2790 */
  push32(0x100c2b2au); f_100c2790();
  /* 100c2b2a push 0x100d0370 */
  push32((uint32_t)(0x100d0370u));
  /* 100c2b2f mov dword ptr [0x100d64dc], eax */
  w32((uint32_t)(0x100d64dc), (EAX));
  /* 100c2b34 call 0x100c2790 */
  push32(0x100c2b39u); f_100c2790();
  /* 100c2b39 push 0x100d0364 */
  push32((uint32_t)(0x100d0364u));
  /* 100c2b3e mov dword ptr [0x100d64e0], eax */
  w32((uint32_t)(0x100d64e0), (EAX));
  /* 100c2b43 call 0x100c2790 */
  push32(0x100c2b48u); f_100c2790();
  /* 100c2b48 mov dword ptr [0x100d64e4], eax */
  w32((uint32_t)(0x100d64e4), (EAX));
  /* 100c2b4d push 0x100d0354 */
  push32((uint32_t)(0x100d0354u));
  /* 100c2b52 call 0x100c2790 */
  push32(0x100c2b57u); f_100c2790();
  /* 100c2b57 push 0x100d0344 */
  push32((uint32_t)(0x100d0344u));
  /* 100c2b5c mov dword ptr [0x100d64e8], eax */
  w32((uint32_t)(0x100d64e8), (EAX));
  /* 100c2b61 call 0x100c2790 */
  push32(0x100c2b66u); f_100c2790();
  /* 100c2b66 push 0x100d0338 */
  push32((uint32_t)(0x100d0338u));
  /* 100c2b6b mov dword ptr [0x100d64ec], eax */
  w32((uint32_t)(0x100d64ec), (EAX));
  /* 100c2b70 call 0x100c2790 */
  push32(0x100c2b75u); f_100c2790();
  /* 100c2b75 push 0x100d0330 */
  push32((uint32_t)(0x100d0330u));
  /* 100c2b7a mov dword ptr [0x100d64f0], eax */
  w32((uint32_t)(0x100d64f0), (EAX));
  /* 100c2b7f call 0x100c2790 */
  push32(0x100c2b84u); f_100c2790();
  /* 100c2b84 push 0x100d0320 */
  push32((uint32_t)(0x100d0320u));
  /* 100c2b89 mov dword ptr [0x100d64f4], eax */
  w32((uint32_t)(0x100d64f4), (EAX));
  /* 100c2b8e call 0x100c2790 */
  push32(0x100c2b93u); f_100c2790();
  /* 100c2b93 push 0x100d0318 */
  push32((uint32_t)(0x100d0318u));
  /* 100c2b98 mov dword ptr [0x100d64f8], eax */
  w32((uint32_t)(0x100d64f8), (EAX));
  /* 100c2b9d call 0x100c2790 */
  push32(0x100c2ba2u); f_100c2790();
  /* 100c2ba2 push 0x100d030c */
  push32((uint32_t)(0x100d030cu));
  /* 100c2ba7 mov dword ptr [0x100d64fc], eax */
  w32((uint32_t)(0x100d64fc), (EAX));
  /* 100c2bac call 0x100c2790 */
  push32(0x100c2bb1u); f_100c2790();
  /* 100c2bb1 push 0x100d0304 */
  push32((uint32_t)(0x100d0304u));
  /* 100c2bb6 mov dword ptr [0x100d6500], eax */
  w32((uint32_t)(0x100d6500), (EAX));
  /* 100c2bbb call 0x100c2790 */
  push32(0x100c2bc0u); f_100c2790();
  /* 100c2bc0 push 0x100d02f0 */
  push32((uint32_t)(0x100d02f0u));
  /* 100c2bc5 mov dword ptr [0x100d6504], eax */
  w32((uint32_t)(0x100d6504), (EAX));
  /* 100c2bca call 0x100c2790 */
  push32(0x100c2bcfu); f_100c2790();
  /* 100c2bcf push 0x100d02e4 */
  push32((uint32_t)(0x100d02e4u));
  /* 100c2bd4 mov dword ptr [0x100d3658], eax */
  w32((uint32_t)(0x100d3658), (EAX));
  /* 100c2bd9 call 0x100c2790 */
  push32(0x100c2bdeu); f_100c2790();
  /* 100c2bde push 0x100d02d8 */
  push32((uint32_t)(0x100d02d8u));
  /* 100c2be3 mov dword ptr [0x100d6510], eax */
  w32((uint32_t)(0x100d6510), (EAX));
  /* 100c2be8 call 0x100c2790 */
  push32(0x100c2bedu); f_100c2790();
  /* 100c2bed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2bf0 mov dword ptr [0x100d650c], eax */
  w32((uint32_t)(0x100d650c), (EAX));
  /* 100c2bf5 push 0x100d02c4 */
  push32((uint32_t)(0x100d02c4u));
  /* 100c2bfa call 0x100c2790 */
  push32(0x100c2bffu); f_100c2790();
  /* 100c2bff push 0x100d02b4 */
  push32((uint32_t)(0x100d02b4u));
  /* 100c2c04 mov dword ptr [0x100d6514], eax */
  w32((uint32_t)(0x100d6514), (EAX));
  /* 100c2c09 call 0x100c2790 */
  push32(0x100c2c0eu); f_100c2790();
  /* 100c2c0e push 0x100d02a4 */
  push32((uint32_t)(0x100d02a4u));
  /* 100c2c13 mov dword ptr [0x100d6518], eax */
  w32((uint32_t)(0x100d6518), (EAX));
  /* 100c2c18 call 0x100c2790 */
  push32(0x100c2c1du); f_100c2790();
  /* 100c2c1d push 0x100d0294 */
  push32((uint32_t)(0x100d0294u));
  /* 100c2c22 mov dword ptr [0x100d651c], eax */
  w32((uint32_t)(0x100d651c), (EAX));
  /* 100c2c27 call 0x100c2790 */
  push32(0x100c2c2cu); f_100c2790();
  /* 100c2c2c push 0x100d0288 */
  push32((uint32_t)(0x100d0288u));
  /* 100c2c31 mov dword ptr [0x100d6468], eax */
  w32((uint32_t)(0x100d6468), (EAX));
  /* 100c2c36 call 0x100c2790 */
  push32(0x100c2c3bu); f_100c2790();
  /* 100c2c3b push 0x100d0278 */
  push32((uint32_t)(0x100d0278u));
  /* 100c2c40 mov dword ptr [0x100d6464], eax */
  w32((uint32_t)(0x100d6464), (EAX));
  /* 100c2c45 call 0x100c2790 */
  push32(0x100c2c4au); f_100c2790();
  /* 100c2c4a push 0x100d0264 */
  push32((uint32_t)(0x100d0264u));
  /* 100c2c4f mov dword ptr [0x100d646c], eax */
  w32((uint32_t)(0x100d646c), (EAX));
  /* 100c2c54 call 0x100c2790 */
  push32(0x100c2c59u); f_100c2790();
  /* 100c2c59 push 0x100d024c */
  push32((uint32_t)(0x100d024cu));
  /* 100c2c5e mov dword ptr [0x100d6470], eax */
  w32((uint32_t)(0x100d6470), (EAX));
  /* 100c2c63 call 0x100c2790 */
  push32(0x100c2c68u); f_100c2790();
  /* 100c2c68 push 0x100d023c */
  push32((uint32_t)(0x100d023cu));
  /* 100c2c6d mov dword ptr [0x100d6474], eax */
  w32((uint32_t)(0x100d6474), (EAX));
  /* 100c2c72 call 0x100c2790 */
  push32(0x100c2c77u); f_100c2790();
  /* 100c2c77 push 0x100d0224 */
  push32((uint32_t)(0x100d0224u));
  /* 100c2c7c mov dword ptr [0x100d6538], eax */
  w32((uint32_t)(0x100d6538), (EAX));
  /* 100c2c81 call 0x100c2790 */
  push32(0x100c2c86u); f_100c2790();
  /* 100c2c86 push 0x100d0214 */
  push32((uint32_t)(0x100d0214u));
  /* 100c2c8b mov dword ptr [0x100d6568], eax */
  w32((uint32_t)(0x100d6568), (EAX));
  /* 100c2c90 call 0x100c2790 */
  push32(0x100c2c95u); f_100c2790();
  /* 100c2c95 push 0x100d020c */
  push32((uint32_t)(0x100d020cu));
  /* 100c2c9a mov dword ptr [0x100d6530], eax */
  w32((uint32_t)(0x100d6530), (EAX));
  /* 100c2c9f call 0x100c2790 */
  push32(0x100c2ca4u); f_100c2790();
  /* 100c2ca4 push 0x100d01fc */
  push32((uint32_t)(0x100d01fcu));
  /* 100c2ca9 mov dword ptr [0x100d653c], eax */
  w32((uint32_t)(0x100d653c), (EAX));
  /* 100c2cae call 0x100c2790 */
  push32(0x100c2cb3u); f_100c2790();
  /* 100c2cb3 push 0x100d01f0 */
  push32((uint32_t)(0x100d01f0u));
  /* 100c2cb8 mov dword ptr [0x100d6588], eax */
  w32((uint32_t)(0x100d6588), (EAX));
  /* 100c2cbd call 0x100c2790 */
  push32(0x100c2cc2u); f_100c2790();
  /* 100c2cc2 push 0x100d01e8 */
  push32((uint32_t)(0x100d01e8u));
  /* 100c2cc7 mov dword ptr [0x100d6520], eax */
  w32((uint32_t)(0x100d6520), (EAX));
  /* 100c2ccc call 0x100c2790 */
  push32(0x100c2cd1u); f_100c2790();
  /* 100c2cd1 push 0x100d01dc */
  push32((uint32_t)(0x100d01dcu));
  /* 100c2cd6 mov dword ptr [0x100d6524], eax */
  w32((uint32_t)(0x100d6524), (EAX));
  /* 100c2cdb call 0x100c2790 */
  push32(0x100c2ce0u); f_100c2790();
  /* 100c2ce0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2ce3 mov dword ptr [0x100d6528], eax */
  w32((uint32_t)(0x100d6528), (EAX));
  /* 100c2ce8 push 0x100d01cc */
  push32((uint32_t)(0x100d01ccu));
  /* 100c2ced call 0x100c2790 */
  push32(0x100c2cf2u); f_100c2790();
  /* 100c2cf2 push 0x100d01b8 */
  push32((uint32_t)(0x100d01b8u));
  /* 100c2cf7 mov dword ptr [0x100d652c], eax */
  w32((uint32_t)(0x100d652c), (EAX));
  /* 100c2cfc call 0x100c2790 */
  push32(0x100c2d01u); f_100c2790();
  /* 100c2d01 push 0x100d019c */
  push32((uint32_t)(0x100d019cu));
  /* 100c2d06 mov dword ptr [0x100d6534], eax */
  w32((uint32_t)(0x100d6534), (EAX));
  /* 100c2d0b call 0x100c2790 */
  push32(0x100c2d10u); f_100c2790();
  /* 100c2d10 push 0x100d0188 */
  push32((uint32_t)(0x100d0188u));
  /* 100c2d15 mov dword ptr [0x100d6540], eax */
  w32((uint32_t)(0x100d6540), (EAX));
  /* 100c2d1a call 0x100c2790 */
  push32(0x100c2d1fu); f_100c2790();
  /* 100c2d1f push 0x100d017c */
  push32((uint32_t)(0x100d017cu));
  /* 100c2d24 mov dword ptr [0x100d6544], eax */
  w32((uint32_t)(0x100d6544), (EAX));
  /* 100c2d29 call 0x100c2790 */
  push32(0x100c2d2eu); f_100c2790();
  /* 100c2d2e push 0x100d016c */
  push32((uint32_t)(0x100d016cu));
  /* 100c2d33 mov dword ptr [0x100d657c], eax */
  w32((uint32_t)(0x100d657c), (EAX));
  /* 100c2d38 call 0x100c2790 */
  push32(0x100c2d3du); f_100c2790();
  /* 100c2d3d push 0x100d0160 */
  push32((uint32_t)(0x100d0160u));
  /* 100c2d42 mov dword ptr [0x100d6580], eax */
  w32((uint32_t)(0x100d6580), (EAX));
  /* 100c2d47 call 0x100c2790 */
  push32(0x100c2d4cu); f_100c2790();
  /* 100c2d4c push 0x100d0154 */
  push32((uint32_t)(0x100d0154u));
  /* 100c2d51 mov dword ptr [0x100d6584], eax */
  w32((uint32_t)(0x100d6584), (EAX));
  /* 100c2d56 call 0x100c2790 */
  push32(0x100c2d5bu); f_100c2790();
  /* 100c2d5b push 0x100d013c */
  push32((uint32_t)(0x100d013cu));
  /* 100c2d60 mov dword ptr [0x100d658c], eax */
  w32((uint32_t)(0x100d658c), (EAX));
  /* 100c2d65 call 0x100c2790 */
  push32(0x100c2d6au); f_100c2790();
  /* 100c2d6a push 0x100d0120 */
  push32((uint32_t)(0x100d0120u));
  /* 100c2d6f mov dword ptr [0x100d6548], eax */
  w32((uint32_t)(0x100d6548), (EAX));
  /* 100c2d74 call 0x100c2790 */
  push32(0x100c2d79u); f_100c2790();
  /* 100c2d79 push 0x100d0104 */
  push32((uint32_t)(0x100d0104u));
  /* 100c2d7e mov dword ptr [0x100d654c], eax */
  w32((uint32_t)(0x100d654c), (EAX));
  /* 100c2d83 call 0x100c2790 */
  push32(0x100c2d88u); f_100c2790();
  /* 100c2d88 push 0x100d00ec */
  push32((uint32_t)(0x100d00ecu));
  /* 100c2d8d mov dword ptr [0x100d6550], eax */
  w32((uint32_t)(0x100d6550), (EAX));
  /* 100c2d92 call 0x100c2790 */
  push32(0x100c2d97u); f_100c2790();
  /* 100c2d97 push 0x100d00d4 */
  push32((uint32_t)(0x100d00d4u));
  /* 100c2d9c mov dword ptr [0x100d6554], eax */
  w32((uint32_t)(0x100d6554), (EAX));
  /* 100c2da1 call 0x100c2790 */
  push32(0x100c2da6u); f_100c2790();
  /* 100c2da6 push 0x100d00c8 */
  push32((uint32_t)(0x100d00c8u));
  /* 100c2dab mov dword ptr [0x100d6558], eax */
  w32((uint32_t)(0x100d6558), (EAX));
  /* 100c2db0 call 0x100c2790 */
  push32(0x100c2db5u); f_100c2790();
  /* 100c2db5 push 0x100d00bc */
  push32((uint32_t)(0x100d00bcu));
  /* 100c2dba mov dword ptr [0x100d655c], eax */
  w32((uint32_t)(0x100d655c), (EAX));
  /* 100c2dbf call 0x100c2790 */
  push32(0x100c2dc4u); f_100c2790();
  /* 100c2dc4 push 0x100d00ac */
  push32((uint32_t)(0x100d00acu));
  /* 100c2dc9 mov dword ptr [0x100d6560], eax */
  w32((uint32_t)(0x100d6560), (EAX));
  /* 100c2dce call 0x100c2790 */
  push32(0x100c2dd3u); f_100c2790();
  /* 100c2dd3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2dd6 mov dword ptr [0x100d6564], eax */
  w32((uint32_t)(0x100d6564), (EAX));
  /* 100c2ddb push 0x100d00a0 */
  push32((uint32_t)(0x100d00a0u));
  /* 100c2de0 call 0x100c2790 */
  push32(0x100c2de5u); f_100c2790();
  /* 100c2de5 push 0x100d0094 */
  push32((uint32_t)(0x100d0094u));
  /* 100c2dea mov dword ptr [0x100d656c], eax */
  w32((uint32_t)(0x100d656c), (EAX));
  /* 100c2def call 0x100c2790 */
  push32(0x100c2df4u); f_100c2790();
  /* 100c2df4 push 0x100d0088 */
  push32((uint32_t)(0x100d0088u));
  /* 100c2df9 mov dword ptr [0x100d6570], eax */
  w32((uint32_t)(0x100d6570), (EAX));
  /* 100c2dfe call 0x100c2790 */
  push32(0x100c2e03u); f_100c2790();
  /* 100c2e03 push 0x100d0078 */
  push32((uint32_t)(0x100d0078u));
  /* 100c2e08 mov dword ptr [0x100d6590], eax */
  w32((uint32_t)(0x100d6590), (EAX));
  /* 100c2e0d call 0x100c2790 */
  push32(0x100c2e12u); f_100c2790();
  /* 100c2e12 push 0x100d006c */
  push32((uint32_t)(0x100d006cu));
  /* 100c2e17 mov dword ptr [0x100d6594], eax */
  w32((uint32_t)(0x100d6594), (EAX));
  /* 100c2e1c call 0x100c2790 */
  push32(0x100c2e21u); f_100c2790();
  /* 100c2e21 push 0x100d0060 */
  push32((uint32_t)(0x100d0060u));
  /* 100c2e26 mov dword ptr [0x100d6598], eax */
  w32((uint32_t)(0x100d6598), (EAX));
  /* 100c2e2b call 0x100c2790 */
  push32(0x100c2e30u); f_100c2790();
  /* 100c2e30 push 0x100d0054 */
  push32((uint32_t)(0x100d0054u));
  /* 100c2e35 mov dword ptr [0x100d659c], eax */
  w32((uint32_t)(0x100d659c), (EAX));
  /* 100c2e3a call 0x100c2790 */
  push32(0x100c2e3fu); f_100c2790();
  /* 100c2e3f push 0x100d0044 */
  push32((uint32_t)(0x100d0044u));
  /* 100c2e44 mov dword ptr [0x100d65a0], eax */
  w32((uint32_t)(0x100d65a0), (EAX));
  /* 100c2e49 call 0x100c2790 */
  push32(0x100c2e4eu); f_100c2790();
  /* 100c2e4e push 0x100d0034 */
  push32((uint32_t)(0x100d0034u));
  /* 100c2e53 mov dword ptr [0x100d65a4], eax */
  w32((uint32_t)(0x100d65a4), (EAX));
  /* 100c2e58 call 0x100c2790 */
  push32(0x100c2e5du); f_100c2790();
  /* 100c2e5d push 0x100d0020 */
  push32((uint32_t)(0x100d0020u));
  /* 100c2e62 mov dword ptr [0x100d65ac], eax */
  w32((uint32_t)(0x100d65ac), (EAX));
  /* 100c2e67 call 0x100c2790 */
  push32(0x100c2e6cu); f_100c2790();
  /* 100c2e6c mov dword ptr [0x100d65a8], eax */
  w32((uint32_t)(0x100d65a8), (EAX));
  /* 100c2e71 push 0x100d0008 */
  push32((uint32_t)(0x100d0008u));
  /* 100c2e76 call 0x100c2790 */
  push32(0x100c2e7bu); f_100c2790();
  /* 100c2e7b push 0x100cfff0 */
  push32((uint32_t)(0x100cfff0u));
  /* 100c2e80 mov dword ptr [0x100d38f0], eax */
  w32((uint32_t)(0x100d38f0), (EAX));
  /* 100c2e85 call 0x100c2790 */
  push32(0x100c2e8au); f_100c2790();
  /* 100c2e8a push 0x100cffe0 */
  push32((uint32_t)(0x100cffe0u));
  /* 100c2e8f mov dword ptr [0x100d3750], eax */
  w32((uint32_t)(0x100d3750), (EAX));
  /* 100c2e94 call 0x100c2790 */
  push32(0x100c2e99u); f_100c2790();
  /* 100c2e99 push 0x100cffd0 */
  push32((uint32_t)(0x100cffd0u));
  /* 100c2e9e mov dword ptr [0x100d65b0], eax */
  w32((uint32_t)(0x100d65b0), (EAX));
  /* 100c2ea3 call 0x100c2790 */
  push32(0x100c2ea8u); f_100c2790();
  /* 100c2ea8 push 0x100cffc0 */
  push32((uint32_t)(0x100cffc0u));
  /* 100c2ead mov dword ptr [0x100d6574], eax */
  w32((uint32_t)(0x100d6574), (EAX));
  /* 100c2eb2 call 0x100c2790 */
  push32(0x100c2eb7u); f_100c2790();
  /* 100c2eb7 push 0x100cffb0 */
  push32((uint32_t)(0x100cffb0u));
  /* 100c2ebc mov dword ptr [0x100d6578], eax */
  w32((uint32_t)(0x100d6578), (EAX));
  /* 100c2ec1 call 0x100c2790 */
  push32(0x100c2ec6u); f_100c2790();
  /* 100c2ec6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2ec9 mov dword ptr [0x100d62d0], eax */
  w32((uint32_t)(0x100d62d0), (EAX));
  /* 100c2ece push 0x100cffa0 */
  push32((uint32_t)(0x100cffa0u));
  /* 100c2ed3 call 0x100c2790 */
  push32(0x100c2ed8u); f_100c2790();
  /* 100c2ed8 push 0x100cff90 */
  push32((uint32_t)(0x100cff90u));
  /* 100c2edd mov dword ptr [0x100d6288], eax */
  w32((uint32_t)(0x100d6288), (EAX));
  /* 100c2ee2 call 0x100c2790 */
  push32(0x100c2ee7u); f_100c2790();
  /* 100c2ee7 push 0x100cff80 */
  push32((uint32_t)(0x100cff80u));
  /* 100c2eec mov dword ptr [0x100d5fe0], eax */
  w32((uint32_t)(0x100d5fe0), (EAX));
  /* 100c2ef1 call 0x100c2790 */
  push32(0x100c2ef6u); f_100c2790();
  /* 100c2ef6 push 0x100cff70 */
  push32((uint32_t)(0x100cff70u));
  /* 100c2efb mov dword ptr [0x100d3950], eax */
  w32((uint32_t)(0x100d3950), (EAX));
  /* 100c2f00 call 0x100c2790 */
  push32(0x100c2f05u); f_100c2790();
  /* 100c2f05 push 0x100cff5c */
  push32((uint32_t)(0x100cff5cu));
  /* 100c2f0a mov dword ptr [0x100d6268], eax */
  w32((uint32_t)(0x100d6268), (EAX));
  /* 100c2f0f call 0x100c2790 */
  push32(0x100c2f14u); f_100c2790();
  /* 100c2f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2f17 mov dword ptr [0x100d3968], eax */
  w32((uint32_t)(0x100d3968), (EAX));
L_100c2f1c:;
  /* 100c2f1c mov eax, 1 */
  EAX = (0x1u);
  /* 100c2f21 ret 0xc */
  ESPCHK(0x100c27f0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f30 @ 0x100c2f30 (34 bytes, 10 insns) */
void f_100c2f30(void) {
  FTRACE(0x100c2f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2f30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c2f34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c2f38 push eax */
  push32((uint32_t)(EAX));
  /* 100c2f39 push ecx */
  push32((uint32_t)(ECX));
  /* 100c2f3a push 0x100d0694 */
  push32((uint32_t)(0x100d0694u));
  /* 100c2f3f push 0x100d37c8 */
  push32((uint32_t)(0x100d37c8u));
  /* 100c2f44 call 0x100c6e70 */
  push32(0x100c2f49u); f_100c6e70();
  /* 100c2f49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2f4c mov eax, 0x100d37c8 */
  EAX = (0x100d37c8u);
  /* 100c2f51 ret  */
  ESPCHK(0x100c2f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f60 @ 0x100c2f60 (45 bytes, 16 insns) */
void f_100c2f60(void) {
  FTRACE(0x100c2f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2f60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c2f64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c2f68 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c2f6d push eax */
  push32((uint32_t)(EAX));
  /* 100c2f6e push ecx */
  push32((uint32_t)(ECX));
  /* 100c2f6f call 0x100c2740 */
  push32(0x100c2f74u); f_100c2740();
  /* 100c2f74 mov ecx, eax */
  ECX = (EAX);
  /* 100c2f76 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 100c2f7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2f7d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100c2f80 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100c2f83 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100c2f86 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100c2f89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c2f8a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c2f8c ret  */
  ESPCHK(0x100c2f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f90 @ 0x100c2f90 (171 bytes, 77 insns) */
void f_100c2f90(void) {
  FTRACE(0x100c2f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c2f90 push ebx */
  push32((uint32_t)(EBX));
  /* 100c2f91 push ebp */
  push32((uint32_t)(EBP));
  /* 100c2f92 push esi */
  push32((uint32_t)(ESI));
  /* 100c2f93 push edi */
  push32((uint32_t)(EDI));
  /* 100c2f94 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 100c2f98 push edi */
  push32((uint32_t)(EDI));
  /* 100c2f99 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c2f9fu);
  /* 100c2f9f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 100c2fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2fa6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c2fa8 jl 0x100c2fb1 */
  if ((C.sf!=C.of)) goto L_100c2fb1;
  /* 100c2faa pop edi */
  EDI = (pop32());
  /* 100c2fab pop esi */
  ESI = (pop32());
  /* 100c2fac pop ebp */
  EBP = (pop32());
  /* 100c2fad mov al, 1 */
  AL = (0x1u);
  /* 100c2faf pop ebx */
  EBX = (pop32());
  /* 100c2fb0 ret  */
  ESPCHK(0x100c2f90u, _esp0);
  ESP += 4; return;
L_100c2fb1:;
  /* 100c2fb1 push edi */
  push32((uint32_t)(EDI));
  /* 100c2fb2 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c2fb8u);
  /* 100c2fb8 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 100c2fbc sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c2fbe push esi */
  push32((uint32_t)(ESI));
  /* 100c2fbf push edi */
  push32((uint32_t)(EDI));
  /* 100c2fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 100c2fc1 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 100c2fc5 call 0x100c2f60 */
  push32(0x100c2fcau); f_100c2f60();
  /* 100c2fca push ebp */
  push32((uint32_t)(EBP));
  /* 100c2fcb mov ebx, eax */
  EBX = (EAX);
  /* 100c2fcd call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c2fd3u);
  /* 100c2fd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2fd6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c2fd8 jle 0x100c3034 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3034;
  /* 100c2fda cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c2fe0 jle 0x100c3034 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3034;
  /* 100c2fe2 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 100c2fe7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100c2fe9 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100c2feb sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 100c2fee mov eax, edx */
  EAX = (EDX);
  /* 100c2ff0 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100c2ff3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c2ff5 mov ebx, edx */
  EBX = (EDX);
L_100c2ff7:;
  /* 100c2ff7 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c2ffa mov eax, 0xf */
  EAX = (0xfu);
  /* 100c2fff jg 0x100c3003 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c3003;
  /* 100c3001 mov eax, ebx */
  EAX = (EBX);
L_100c3003:;
  /* 100c3003 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3005 jge 0x100c3016 */
  if ((C.sf==C.of)) goto L_100c3016;
  /* 100c3007 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c3009 push ebp */
  push32((uint32_t)(EBP));
  /* 100c300a push edi */
  push32((uint32_t)(EDI));
  /* 100c300b call 0x100c2610 */
  push32(0x100c3010u); f_100c2610();
  /* 100c3010 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3013 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100c3014 jmp 0x100c2ff7 */
  goto L_100c2ff7;
L_100c3016:;
  /* 100c3016 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 100c301a push ecx */
  push32((uint32_t)(ECX));
  /* 100c301b push edi */
  push32((uint32_t)(EDI));
  /* 100c301c push ebp */
  push32((uint32_t)(EBP));
  /* 100c301d call 0x100c2f60 */
  push32(0x100c3022u); f_100c2f60();
  /* 100c3022 push eax */
  push32((uint32_t)(EAX));
  /* 100c3023 push edi */
  push32((uint32_t)(EDI));
  /* 100c3024 push ebp */
  push32((uint32_t)(EBP));
  /* 100c3025 call 0x100c2610 */
  push32(0x100c302au); f_100c2610();
  /* 100c302a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c302d mov al, 1 */
  AL = (0x1u);
  /* 100c302f pop edi */
  EDI = (pop32());
  /* 100c3030 pop esi */
  ESI = (pop32());
  /* 100c3031 pop ebp */
  EBP = (pop32());
  /* 100c3032 pop ebx */
  EBX = (pop32());
  /* 100c3033 ret  */
  ESPCHK(0x100c2f90u, _esp0);
  ESP += 4; return;
L_100c3034:;
  /* 100c3034 pop edi */
  EDI = (pop32());
  /* 100c3035 pop esi */
  ESI = (pop32());
  /* 100c3036 pop ebp */
  EBP = (pop32());
  /* 100c3037 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 100c3039 pop ebx */
  EBX = (pop32());
  /* 100c303a ret  */
  ESPCHK(0x100c2f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003040 @ 0x100c3040 (369 bytes, 82 insns) */
void f_100c3040(void) {
  FTRACE(0x100c3040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c3040 push ebx */
  push32((uint32_t)(EBX));
  /* 100c3041 push esi */
  push32((uint32_t)(ESI));
  /* 100c3042 call dword ptr [0x100d6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6520))), 0x100c3048u);
  /* 100c3048 push 0x100d61b0 */
  push32((uint32_t)(0x100d61b0u));
  /* 100c304d mov dword ptr [0x100d62d4], eax */
  w32((uint32_t)(0x100d62d4), (EAX));
  /* 100c3052 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c3058u);
  /* 100c3058 mov ebx, 1 */
  EBX = (0x1u);
  /* 100c305d mov esi, eax */
  ESI = (EAX);
  /* 100c305f push ebx */
  push32((uint32_t)(EBX));
  /* 100c3060 call 0x100c2730 */
  push32(0x100c3065u); f_100c2730();
  /* 100c3065 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c3067 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c3069 call 0x100c2730 */
  push32(0x100c306eu); f_100c2730();
  /* 100c306e push 5 */
  push32((uint32_t)(0x5u));
  /* 100c3070 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c3072 call 0x100c2730 */
  push32(0x100c3077u); f_100c2730();
  /* 100c3077 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c3079 mov eax, dword ptr [0x100d62d4] */
  EAX = (r32((uint32_t)(0x100d62d4)));
  /* 100c307e push 3 */
  push32((uint32_t)(0x3u));
  /* 100c3080 mov dword ptr [0x100d61d0], esi */
  w32((uint32_t)(0x100d61d0), (ESI));
  /* 100c3086 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 100c3089 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 100c308c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 100c308f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 100c3092 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100c3095 mov ecx, dword ptr [eax + 0x100d3b10] */
  ECX = (r32((uint32_t)(EAX + 0x100d3b10)));
  /* 100c309b lea edx, [eax + 0x100d3980] */
  EDX = ((uint32_t)(EAX + 0x100d3980));
  /* 100c30a1 mov dword ptr [0x100d61e0], edx */
  w32((uint32_t)(0x100d61e0), (EDX));
  /* 100c30a7 lea edx, [eax + 0x100d3b14] */
  EDX = ((uint32_t)(EAX + 0x100d3b14));
  /* 100c30ad mov dword ptr [0x100d6624], ecx */
  w32((uint32_t)(0x100d6624), (ECX));
  /* 100c30b3 mov ecx, dword ptr [eax + 0x100d3ca4] */
  ECX = (r32((uint32_t)(EAX + 0x100d3ca4)));
  /* 100c30b9 mov dword ptr [0x100d61e4], edx */
  w32((uint32_t)(0x100d61e4), (EDX));
  /* 100c30bf lea edx, [eax + 0x100d3ca8] */
  EDX = ((uint32_t)(EAX + 0x100d3ca8));
  /* 100c30c5 mov dword ptr [0x100d6628], ecx */
  w32((uint32_t)(0x100d6628), (ECX));
  /* 100c30cb mov dword ptr [0x100d626c], edx */
  w32((uint32_t)(0x100d626c), (EDX));
  /* 100c30d1 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c30d7u);
  /* 100c30d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c30d9 mov dword ptr [0x100d62b0], eax */
  w32((uint32_t)(0x100d62b0), (EAX));
  /* 100c30de call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c30e4u);
  /* 100c30e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c30e6 mov dword ptr [0x100d3640], eax */
  w32((uint32_t)(0x100d3640), (EAX));
  /* 100c30eb call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c30f1u);
  /* 100c30f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c30f3 mov dword ptr [0x100d63a0], eax */
  w32((uint32_t)(0x100d63a0), (EAX));
  /* 100c30f8 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c30feu);
  /* 100c30fe push 5 */
  push32((uint32_t)(0x5u));
  /* 100c3100 mov dword ptr [0x100d3748], eax */
  w32((uint32_t)(0x100d3748), (EAX));
  /* 100c3105 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c310bu);
  /* 100c310b push ebx */
  push32((uint32_t)(EBX));
  /* 100c310c mov dword ptr [0x100d6108], eax */
  w32((uint32_t)(0x100d6108), (EAX));
  /* 100c3111 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3117u);
  /* 100c3117 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c311a mov dword ptr [0x100d6358], eax */
  w32((uint32_t)(0x100d6358), (EAX));
  /* 100c311f call 0x100c2670 */
  push32(0x100c3124u); f_100c2670();
  /* 100c3124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c3126 jne 0x100c3132 */
  if (!C.zf) goto L_100c3132;
  /* 100c3128 mov dword ptr [0x100cf248], 4 */
  w32((uint32_t)(0x100cf248), (0x4u));
L_100c3132:;
  /* 100c3132 push 0x100cf114 */
  push32((uint32_t)(0x100cf114u));
  /* 100c3137 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100c3139 call dword ptr [0x100d652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d652c))), 0x100c313fu);
  /* 100c313f push 0x100d65b8 */
  push32((uint32_t)(0x100d65b8u));
  /* 100c3144 call 0x100c2720 */
  push32(0x100c3149u); f_100c2720();
  /* 100c3149 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100c314b push 0x100cf244 */
  push32((uint32_t)(0x100cf244u));
  /* 100c3150 call 0x100c2700 */
  push32(0x100c3155u); f_100c2700();
  /* 100c3155 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3158 mov byte ptr [0x100d61a8], bl */
  w8((uint32_t)(0x100d61a8), (BL));
  /* 100c315e mov byte ptr [0x100d61aa], bl */
  w8((uint32_t)(0x100d61aa), (BL));
  /* 100c3164 mov byte ptr [0x100d61ac], bl */
  w8((uint32_t)(0x100d61ac), (BL));
  /* 100c316a mov byte ptr [0x100d61ad], bl */
  w8((uint32_t)(0x100d61ad), (BL));
  /* 100c3170 mov byte ptr [0x100d6343], bl */
  w8((uint32_t)(0x100d6343), (BL));
  /* 100c3176 mov byte ptr [0x100d6341], bl */
  w8((uint32_t)(0x100d6341), (BL));
  /* 100c317c mov byte ptr [0x100d6344], bl */
  w8((uint32_t)(0x100d6344), (BL));
  /* 100c3182 mov byte ptr [0x100d6345], bl */
  w8((uint32_t)(0x100d6345), (BL));
  /* 100c3188 pop esi */
  ESI = (pop32());
  /* 100c3189 mov byte ptr [0x100d61ab], 0 */
  w8((uint32_t)(0x100d61ab), (0x0u));
  /* 100c3190 mov byte ptr [0x100d61a9], 0 */
  w8((uint32_t)(0x100d61a9), (0x0u));
  /* 100c3197 mov byte ptr [0x100d6340], 0 */
  w8((uint32_t)(0x100d6340), (0x0u));
  /* 100c319e mov byte ptr [0x100d6342], 0 */
  w8((uint32_t)(0x100d6342), (0x0u));
  /* 100c31a5 mov dword ptr [0x100d666c], 0 */
  w32((uint32_t)(0x100d666c), (0x0u));
  /* 100c31af pop ebx */
  EBX = (pop32());
  /* 100c31b0 ret  */
  ESPCHK(0x100c3040u, _esp0);
  ESP += 4; return;
}

/* FUN_100031c0 @ 0x100c31c0 (85 bytes, 29 insns) */
void f_100c31c0(void) {
  FTRACE(0x100c31c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c31c0 mov eax, dword ptr [0x100d5f78] */
  EAX = (r32((uint32_t)(0x100d5f78)));
  /* 100c31c5 push esi */
  push32((uint32_t)(ESI));
  /* 100c31c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c31c9 jg 0x100c3213 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c3213;
  /* 100c31cb push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c31d0 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c31d6u);
  /* 100c31d6 mov ecx, eax */
  ECX = (EAX);
  /* 100c31d8 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 100c31dd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100c31df sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 100c31e2 mov eax, edx */
  EAX = (EDX);
  /* 100c31e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c31e7 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100c31ea add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c31ec mov esi, edx */
  ESI = (EDX);
  /* 100c31ee je 0x100c3213 */
  if (C.zf) goto L_100c3213;
  /* 100c31f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c31f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c31f4 push esi */
  push32((uint32_t)(ESI));
  /* 100c31f5 push 0x100d3720 */
  push32((uint32_t)(0x100d3720u));
  /* 100c31fa call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3200u);
  /* 100c3200 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c3202 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c3204 push esi */
  push32((uint32_t)(ESI));
  /* 100c3205 push 0x100d3660 */
  push32((uint32_t)(0x100d3660u));
  /* 100c320a call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3210u);
  /* 100c3210 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3213:;
  /* 100c3213 pop esi */
  ESI = (pop32());
  /* 100c3214 ret  */
  ESPCHK(0x100c31c0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x100c3220 (1 bytes, 1 insns) */
void f_100c3220(void) {
  FTRACE(0x100c3220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c3220 ret  */
  ESPCHK(0x100c3220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x100c3230 (157 bytes, 43 insns) */
void f_100c3230(void) {
  FTRACE(0x100c3230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c3230 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c3232 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c3234 push 0x100d6370 */
  push32((uint32_t)(0x100d6370u));
  /* 100c3239 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c323fu);
  /* 100c323f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c3241 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c3243 push 0x100d6378 */
  push32((uint32_t)(0x100d6378u));
  /* 100c3248 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c324eu);
  /* 100c324e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c3250 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c3252 push 0x100d6360 */
  push32((uint32_t)(0x100d6360u));
  /* 100c3257 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c325du);
  /* 100c325d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c325f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c3261 push 0x100d6368 */
  push32((uint32_t)(0x100d6368u));
  /* 100c3266 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c326cu);
  /* 100c326c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c326e push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3270 push 0x100d6380 */
  push32((uint32_t)(0x100d6380u));
  /* 100c3275 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c327bu);
  /* 100c327b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c327d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c327f push 0x100d62b8 */
  push32((uint32_t)(0x100d62b8u));
  /* 100c3284 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c328au);
  /* 100c328a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c328d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c328f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c3291 push 0x100d62a0 */
  push32((uint32_t)(0x100d62a0u));
  /* 100c3296 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c329cu);
  /* 100c329c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c329e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c32a0 push 0x100d62a8 */
  push32((uint32_t)(0x100d62a8u));
  /* 100c32a5 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c32abu);
  /* 100c32ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c32ad push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c32af push 0x100d62c0 */
  push32((uint32_t)(0x100d62c0u));
  /* 100c32b4 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c32bau);
  /* 100c32ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c32bc push 0xa */
  push32((uint32_t)(0xau));
  /* 100c32be push 0x100d62c8 */
  push32((uint32_t)(0x100d62c8u));
  /* 100c32c3 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c32c9u);
  /* 100c32c9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c32cc ret  */
  ESPCHK(0x100c3230u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x100c32d0 (79 bytes, 22 insns) */
void f_100c32d0(void) {
  FTRACE(0x100c32d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c32d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c32d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c32d4 push 0x100d3930 */
  push32((uint32_t)(0x100d3930u));
  /* 100c32d9 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c32dfu);
  /* 100c32df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c32e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c32e3 push 0x100d3938 */
  push32((uint32_t)(0x100d3938u));
  /* 100c32e8 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c32eeu);
  /* 100c32ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c32f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c32f2 push 0x100d3928 */
  push32((uint32_t)(0x100d3928u));
  /* 100c32f7 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c32fdu);
  /* 100c32fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c32ff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3301 push 0x100d5f98 */
  push32((uint32_t)(0x100d5f98u));
  /* 100c3306 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c330cu);
  /* 100c330c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c330e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3310 push 0x100d5f88 */
  push32((uint32_t)(0x100d5f88u));
  /* 100c3315 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c331bu);
  /* 100c331b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c331e ret  */
  ESPCHK(0x100c32d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x100c3320 (64 bytes, 18 insns) */
void f_100c3320(void) {
  FTRACE(0x100c3320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c3320 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c3322 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c3324 push 0x100d60b8 */
  push32((uint32_t)(0x100d60b8u));
  /* 100c3329 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c332fu);
  /* 100c332f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c3331 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c3333 push 0x100d60c0 */
  push32((uint32_t)(0x100d60c0u));
  /* 100c3338 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c333eu);
  /* 100c333e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c3340 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c3342 push 0x100d60c8 */
  push32((uint32_t)(0x100d60c8u));
  /* 100c3347 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c334du);
  /* 100c334d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c334f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c3351 push 0x100d60d0 */
  push32((uint32_t)(0x100d60d0u));
  /* 100c3356 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c335cu);
  /* 100c335c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c335f ret  */
  ESPCHK(0x100c3320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x100c3360 (3787 bytes, 1079 insns) */
void f_100c3360(void) {
  FTRACE(0x100c3360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c3360 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c3363 push ebx */
  push32((uint32_t)(EBX));
  /* 100c3364 push ebp */
  push32((uint32_t)(EBP));
  /* 100c3365 push esi */
  push32((uint32_t)(ESI));
  /* 100c3366 push edi */
  push32((uint32_t)(EDI));
  /* 100c3367 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 100c336c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 100c3371 call dword ptr [0x100d6538] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6538))), 0x100c3377u);
  /* 100c3377 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c3379 call 0x100c2760 */
  push32(0x100c337eu); f_100c2760();
  /* 100c337e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100c3380 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c3382 call 0x100c2640 */
  push32(0x100c3387u); f_100c2640();
  /* 100c3387 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100c3389 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c338b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 100c338f call 0x100c2640 */
  push32(0x100c3394u); f_100c2640();
  /* 100c3394 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 100c3396 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c3398 mov edi, eax */
  EDI = (EAX);
  /* 100c339a call 0x100c2640 */
  push32(0x100c339fu); f_100c2640();
  /* 100c339f push 0xe */
  push32((uint32_t)(0xeu));
  /* 100c33a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c33a3 mov esi, eax */
  ESI = (EAX);
  /* 100c33a5 call 0x100c2640 */
  push32(0x100c33aau); f_100c2640();
  /* 100c33aa push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c33af mov ebx, eax */
  EBX = (EAX);
  /* 100c33b1 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c33b7u);
  /* 100c33b7 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100c33ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100c33bf add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c33c1 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 100c33c5 push 0x100d62f8 */
  push32((uint32_t)(0x100d62f8u));
  /* 100c33ca lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 100c33cd mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100c33d1 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c33d7u);
  /* 100c33d7 push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c33dc mov ebx, eax */
  EBX = (EAX);
  /* 100c33de call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c33e4u);
  /* 100c33e4 push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c33e9 mov ebp, eax */
  EBP = (EAX);
  /* 100c33eb call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c33f1u);
  /* 100c33f1 push 0x100d6008 */
  push32((uint32_t)(0x100d6008u));
  /* 100c33f6 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100c33fa call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c3400u);
  /* 100c3400 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3403 mov edi, eax */
  EDI = (EAX);
  /* 100c3405 push 0x100d6008 */
  push32((uint32_t)(0x100d6008u));
  /* 100c340a call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c3410u);
  /* 100c3410 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c3415 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 100c3419 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c341fu);
  /* 100c341f push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c3424 mov esi, eax */
  ESI = (EAX);
  /* 100c3426 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c342cu);
  /* 100c342c push 0x100d62f8 */
  push32((uint32_t)(0x100d62f8u));
  /* 100c3431 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 100c3435 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c343bu);
  /* 100c343b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 100c343f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 100c3443 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c3445 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 100c3449 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c344b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c344d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c344f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c3451 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c3453 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c3455 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3457 push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c345c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c345e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 100c3462 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3468u);
  /* 100c3468 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c346a mov bl, 1 */
  BL = (0x1u);
  /* 100c346c call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3472u);
  /* 100c3472 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3475 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c347a jle 0x100c34aa */
  if ((C.zf||C.sf!=C.of)) goto L_100c34aa;
  /* 100c347c push 1 */
  push32((uint32_t)(0x1u));
  /* 100c347e call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3484u);
  /* 100c3484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3487 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c348c jle 0x100c34aa */
  if ((C.zf||C.sf!=C.of)) goto L_100c34aa;
  /* 100c348e push 4 */
  push32((uint32_t)(0x4u));
  /* 100c3490 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3496u);
  /* 100c3496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3499 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c349e jle 0x100c34aa */
  if ((C.zf||C.sf!=C.of)) goto L_100c34aa;
  /* 100c34a0 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 100c34a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c34a6 jne 0x100c34aa */
  if (!C.zf) goto L_100c34aa;
  /* 100c34a8 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_100c34aa:;
  /* 100c34aa push 0x100d61b0 */
  push32((uint32_t)(0x100d61b0u));
  /* 100c34af call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c34b5u);
  /* 100c34b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c34b7 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100c34bb call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c34c1u);
  /* 100c34c1 push 0x100d61d8 */
  push32((uint32_t)(0x100d61d8u));
  /* 100c34c6 mov esi, eax */
  ESI = (EAX);
  /* 100c34c8 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c34ceu);
  /* 100c34ce push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c34d3 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 100c34d7 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c34ddu);
  /* 100c34dd push 0x100d6100 */
  push32((uint32_t)(0x100d6100u));
  /* 100c34e2 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c34e8u);
  /* 100c34e8 push 0x100d63d0 */
  push32((uint32_t)(0x100d63d0u));
  /* 100c34ed mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 100c34f1 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c34f7u);
  /* 100c34f7 push 0x100d6350 */
  push32((uint32_t)(0x100d6350u));
  /* 100c34fc mov edi, eax */
  EDI = (EAX);
  /* 100c34fe call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c3504u);
  /* 100c3504 push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c3509 mov ebp, eax */
  EBP = (EAX);
  /* 100c350b call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c3511u);
  /* 100c3511 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3513 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c3515 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3517 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c3519 push 0x100d6130 */
  push32((uint32_t)(0x100d6130u));
  /* 100c351e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 100c3522 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 100c3527 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c352du);
  /* 100c352d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c352f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 100c3531 push 0x100d6170 */
  push32((uint32_t)(0x100d6170u));
  /* 100c3536 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c353cu);
  /* 100c353c push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c3541 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c3547u);
  /* 100c3547 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c354c mov edi, eax */
  EDI = (EAX);
  /* 100c354e call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c3554u);
  /* 100c3554 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3557 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c3559 je 0x100c3560 */
  if (C.zf) goto L_100c3560;
  /* 100c355b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_100c3560:;
  /* 100c3560 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 100c3564 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 100c3566 je 0x100c3f2d */
  if (C.zf) goto L_100c3f2d;
  /* 100c356c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c356e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c3570 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3572 push 0x100d5ff8 */
  push32((uint32_t)(0x100d5ff8u));
  /* 100c3577 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c357du);
  /* 100c357d push 0x100d5ff8 */
  push32((uint32_t)(0x100d5ff8u));
  /* 100c3582 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c3588u);
  /* 100c3588 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c358b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c358d je 0x100c4223 */
  if (C.zf) goto L_100c4223;
  /* 100c3593 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c3595 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c3597 push 0x100d6398 */
  push32((uint32_t)(0x100d6398u));
  /* 100c359c call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c35a2u);
  /* 100c35a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c35a5 call dword ptr [0x100d6590] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6590))), 0x100c35abu);
  /* 100c35ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c35ad jne 0x100c35f0 */
  if (!C.zf) goto L_100c35f0;
  /* 100c35af cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c35b5 jle 0x100c35dc */
  if ((C.zf||C.sf!=C.of)) goto L_100c35dc;
  /* 100c35b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c35b9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c35bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c35bd push 0x100d61b0 */
  push32((uint32_t)(0x100d61b0u));
  /* 100c35c2 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c35c8u);
  /* 100c35c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c35ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c35cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c35ce push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c35d3 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c35d9u);
  /* 100c35d9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c35dc:;
  /* 100c35dc push 1 */
  push32((uint32_t)(0x1u));
  /* 100c35de push 1 */
  push32((uint32_t)(0x1u));
  /* 100c35e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c35e2 call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c35e8u);
  /* 100c35e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c35eb jmp 0x100c36fe */
  goto L_100c36fe;
L_100c35f0:;
  /* 100c35f0 push 0x100d37c0 */
  push32((uint32_t)(0x100d37c0u));
  /* 100c35f5 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c35fbu);
  /* 100c35fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c35fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3600 je 0x100c362a */
  if (C.zf) goto L_100c362a;
  /* 100c3602 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3608 jle 0x100c3612 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3612;
  /* 100c360a push 6 */
  push32((uint32_t)(0x6u));
  /* 100c360c push 8 */
  push32((uint32_t)(0x8u));
  /* 100c360e push 9 */
  push32((uint32_t)(0x9u));
  /* 100c3610 jmp 0x100c3650 */
  goto L_100c3650;
L_100c3612:;
  /* 100c3612 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3618 jle 0x100c3622 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3622;
  /* 100c361a push 3 */
  push32((uint32_t)(0x3u));
  /* 100c361c push 5 */
  push32((uint32_t)(0x5u));
  /* 100c361e push 9 */
  push32((uint32_t)(0x9u));
  /* 100c3620 jmp 0x100c3650 */
  goto L_100c3650;
L_100c3622:;
  /* 100c3622 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3624 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c3626 push 9 */
  push32((uint32_t)(0x9u));
  /* 100c3628 jmp 0x100c3650 */
  goto L_100c3650;
L_100c362a:;
  /* 100c362a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3630 jle 0x100c363a */
  if ((C.zf||C.sf!=C.of)) goto L_100c363a;
  /* 100c3632 push 8 */
  push32((uint32_t)(0x8u));
  /* 100c3634 push 8 */
  push32((uint32_t)(0x8u));
  /* 100c3636 push 9 */
  push32((uint32_t)(0x9u));
  /* 100c3638 jmp 0x100c3650 */
  goto L_100c3650;
L_100c363a:;
  /* 100c363a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3640 jle 0x100c364a */
  if ((C.zf||C.sf!=C.of)) goto L_100c364a;
  /* 100c3642 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c3644 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c3646 push 9 */
  push32((uint32_t)(0x9u));
  /* 100c3648 jmp 0x100c3650 */
  goto L_100c3650;
L_100c364a:;
  /* 100c364a push 4 */
  push32((uint32_t)(0x4u));
  /* 100c364c push 4 */
  push32((uint32_t)(0x4u));
  /* 100c364e push 0xa */
  push32((uint32_t)(0xau));
L_100c3650:;
  /* 100c3650 call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c3656u);
  /* 100c3656 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 100c365a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c365d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c365f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 100c3664 je 0x100c366b */
  if (C.zf) goto L_100c366b;
  /* 100c3666 mov edi, 0x12c */
  EDI = (0x12cu);
L_100c366b:;
  /* 100c366b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c366e jge 0x100c368c */
  if ((C.sf==C.of)) goto L_100c368c;
  /* 100c3670 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3676 jle 0x100c368c */
  if ((C.zf||C.sf!=C.of)) goto L_100c368c;
  /* 100c3678 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c367a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c367c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c367e push 0x100d61b0 */
  push32((uint32_t)(0x100d61b0u));
  /* 100c3683 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3689u);
  /* 100c3689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c368c:;
  /* 100c368c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3692 jle 0x100c36cd */
  if ((C.zf||C.sf!=C.of)) goto L_100c36cd;
  /* 100c3694 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100c3696 je 0x100c36b2 */
  if (C.zf) goto L_100c36b2;
  /* 100c3698 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c369a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 100c369f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c36a4 push 0x100d61b0 */
  push32((uint32_t)(0x100d61b0u));
  /* 100c36a9 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c36afu);
  /* 100c36af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c36b2:;
  /* 100c36b2 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c36b8 jle 0x100c36cd */
  if ((C.zf||C.sf!=C.of)) goto L_100c36cd;
  /* 100c36ba push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c36bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c36be push edi */
  push32((uint32_t)(EDI));
  /* 100c36bf push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c36c4 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c36cau);
  /* 100c36ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c36cd:;
  /* 100c36cd push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c36d2 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c36d8u);
  /* 100c36d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c36db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c36dd je 0x100c36fe */
  if (C.zf) goto L_100c36fe;
  /* 100c36df cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c36e5 jle 0x100c36fe */
  if ((C.zf||C.sf!=C.of)) goto L_100c36fe;
  /* 100c36e7 push 0x100d62f8 */
  push32((uint32_t)(0x100d62f8u));
  /* 100c36ec call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c36f2u);
  /* 100c36f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c36f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c36f7 jle 0x100c36fe */
  if ((C.zf||C.sf!=C.of)) goto L_100c36fe;
  /* 100c36f9 call 0x100c3230 */
  push32(0x100c36feu); f_100c3230();
L_100c36fe:;
  /* 100c36fe mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 100c3702 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c3704 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3707 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100c3709 jge 0x100c370f */
  if ((C.sf==C.of)) goto L_100c370f;
  /* 100c370b push 5 */
  push32((uint32_t)(0x5u));
  /* 100c370d jmp 0x100c3713 */
  goto L_100c3713;
L_100c370f:;
  /* 100c370f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3712 push eax */
  push32((uint32_t)(EAX));
L_100c3713:;
  /* 100c3713 push 0x100d5fb0 */
  push32((uint32_t)(0x100d5fb0u));
  /* 100c3718 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c371eu);
  /* 100c371e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 100c3722 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3725 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c372a jge 0x100c3740 */
  if ((C.sf==C.of)) goto L_100c3740;
  /* 100c372c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100c372e push 0xc */
  push32((uint32_t)(0xcu));
  /* 100c3730 push 0x100d3908 */
  push32((uint32_t)(0x100d3908u));
  /* 100c3735 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c373bu);
  /* 100c373b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c373e jmp 0x100c377a */
  goto L_100c377a;
L_100c3740:;
  /* 100c3740 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 100c3743 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c3745 push ecx */
  push32((uint32_t)(ECX));
  /* 100c3746 push 0x100d3908 */
  push32((uint32_t)(0x100d3908u));
  /* 100c374b call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3751u);
  /* 100c3751 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c3753 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 100c3756 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100c3758 push edx */
  push32((uint32_t)(EDX));
  /* 100c3759 push 0x100d3908 */
  push32((uint32_t)(0x100d3908u));
  /* 100c375e call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3764u);
  /* 100c3764 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c3766 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3769 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c376b push edi */
  push32((uint32_t)(EDI));
  /* 100c376c push 0x100d3908 */
  push32((uint32_t)(0x100d3908u));
  /* 100c3771 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3777u);
  /* 100c3777 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c377a:;
  /* 100c377a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100c377c push 0 */
  push32((uint32_t)(0x0u));
  /* 100c377e call 0x100c2640 */
  push32(0x100c3783u); f_100c2640();
  /* 100c3783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c3788 je 0x100c37e7 */
  if (C.zf) goto L_100c37e7;
  /* 100c378a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c378c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c378e push 0x100d6308 */
  push32((uint32_t)(0x100d6308u));
  /* 100c3793 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3799u);
  /* 100c3799 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c379b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c379d push 0x100d62f0 */
  push32((uint32_t)(0x100d62f0u));
  /* 100c37a2 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c37a8u);
  /* 100c37a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c37aa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c37ac push 0x100d6300 */
  push32((uint32_t)(0x100d6300u));
  /* 100c37b1 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c37b7u);
  /* 100c37b7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c37b9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c37bb push 0x100d62e0 */
  push32((uint32_t)(0x100d62e0u));
  /* 100c37c0 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c37c6u);
  /* 100c37c6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c37c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c37ca push 0x100d62e8 */
  push32((uint32_t)(0x100d62e8u));
  /* 100c37cf call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c37d5u);
  /* 100c37d5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c37d7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c37d9 push 0x100d62d8 */
  push32((uint32_t)(0x100d62d8u));
  /* 100c37de call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c37e4u);
  /* 100c37e4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c37e7:;
  /* 100c37e7 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c37e9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c37eb push 3 */
  push32((uint32_t)(0x3u));
  /* 100c37ed push 0x100d38c0 */
  push32((uint32_t)(0x100d38c0u));
  /* 100c37f2 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c37f8u);
  /* 100c37f8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c37fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c37fc push 1 */
  push32((uint32_t)(0x1u));
  /* 100c37fe push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c3803 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3809u);
  /* 100c3809 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c380b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c380d push 2 */
  push32((uint32_t)(0x2u));
  /* 100c380f push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c3814 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c381au);
  /* 100c381a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 100c381e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3821 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c3823 jne 0x100c3839 */
  if (!C.zf) goto L_100c3839;
  /* 100c3825 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c3827 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c3829 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c382b push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c3830 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3836u);
  /* 100c3836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3839:;
  /* 100c3839 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c383b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c383d push 1 */
  push32((uint32_t)(0x1u));
  /* 100c383f push 0x100d6208 */
  push32((uint32_t)(0x100d6208u));
  /* 100c3844 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c384au);
  /* 100c384a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c384c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c384e push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3850 push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c3855 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c385bu);
  /* 100c385b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c385d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c385f push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3861 push 0x100d5ff0 */
  push32((uint32_t)(0x100d5ff0u));
  /* 100c3866 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c386cu);
  /* 100c386c push 5 */
  push32((uint32_t)(0x5u));
  /* 100c386e push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3870 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c3872 push 0x100d6208 */
  push32((uint32_t)(0x100d6208u));
  /* 100c3877 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c387du);
  /* 100c387d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3880 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3882 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c3884 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3886 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c388b call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3891u);
  /* 100c3891 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c3893 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c3895 push 0x100d3680 */
  push32((uint32_t)(0x100d3680u));
  /* 100c389a call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c38a0u);
  /* 100c38a0 push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c38a5 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c38abu);
  /* 100c38ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c38ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c38b0 jle 0x100c38d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100c38d7;
  /* 100c38b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100c38b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c38b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c38b8 push 0x100d3898 */
  push32((uint32_t)(0x100d3898u));
  /* 100c38bd call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c38c3u);
  /* 100c38c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c38c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c38c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c38c9 push 0x100d6118 */
  push32((uint32_t)(0x100d6118u));
  /* 100c38ce call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c38d4u);
  /* 100c38d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c38d7:;
  /* 100c38d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c38d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c38db push 1 */
  push32((uint32_t)(0x1u));
  /* 100c38dd push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c38e2 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c38e8u);
  /* 100c38e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c38eb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c38ed jne 0x100c3903 */
  if (!C.zf) goto L_100c3903;
  /* 100c38ef push 0xa */
  push32((uint32_t)(0xau));
  /* 100c38f1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c38f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c38f5 push 0x100d6008 */
  push32((uint32_t)(0x100d6008u));
  /* 100c38fa call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3900u);
  /* 100c3900 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3903:;
  /* 100c3903 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3905 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3907 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3909 push 0x100d3638 */
  push32((uint32_t)(0x100d3638u));
  /* 100c390e call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3914u);
  /* 100c3914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3917 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c391a jle 0x100c3930 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3930;
  /* 100c391c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c391e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c3920 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c3922 push 0x100d5ff8 */
  push32((uint32_t)(0x100d5ff8u));
  /* 100c3927 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c392du);
  /* 100c392d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3930:;
  /* 100c3930 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c3932 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3934 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3936 push 0x100d6278 */
  push32((uint32_t)(0x100d6278u));
  /* 100c393b call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3941u);
  /* 100c3941 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c3943 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c3945 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c3947 push 0x100d6278 */
  push32((uint32_t)(0x100d6278u));
  /* 100c394c call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3952u);
  /* 100c3952 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c3954 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3956 push 0x100d6098 */
  push32((uint32_t)(0x100d6098u));
  /* 100c395b call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3961u);
  /* 100c3961 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c3963 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3965 push 0x100d6050 */
  push32((uint32_t)(0x100d6050u));
  /* 100c396a call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3970u);
  /* 100c3970 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c3972 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3974 push 0x100d6058 */
  push32((uint32_t)(0x100d6058u));
  /* 100c3979 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c397fu);
  /* 100c397f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3982 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c3984 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3986 push 0x100d6060 */
  push32((uint32_t)(0x100d6060u));
  /* 100c398b call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3991u);
  /* 100c3991 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c3993 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c3995 push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c399a call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c39a0u);
  /* 100c39a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c39a2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c39a4 push 0x100d61d8 */
  push32((uint32_t)(0x100d61d8u));
  /* 100c39a9 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c39afu);
  /* 100c39af push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c39b1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c39b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c39b5 push 0x100d62f8 */
  push32((uint32_t)(0x100d62f8u));
  /* 100c39ba call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c39c0u);
  /* 100c39c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c39c2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c39c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c39c6 push 0x100d62f8 */
  push32((uint32_t)(0x100d62f8u));
  /* 100c39cb call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c39d1u);
  /* 100c39d1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c39d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c39d6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c39d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c39da push 0x100d62f8 */
  push32((uint32_t)(0x100d62f8u));
  /* 100c39df call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c39e5u);
  /* 100c39e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c39e7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c39e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c39eb push 0x100d62f8 */
  push32((uint32_t)(0x100d62f8u));
  /* 100c39f0 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c39f6u);
  /* 100c39f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c39f8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c39fa push 0x100d3978 */
  push32((uint32_t)(0x100d3978u));
  /* 100c39ff call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3a05u);
  /* 100c3a05 call 0x100c2630 */
  push32(0x100c3a0au); f_100c2630();
  /* 100c3a0a push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c3a0f mov edi, eax */
  EDI = (EAX);
  /* 100c3a11 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c3a17u);
  /* 100c3a17 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3a1a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3a1c je 0x100c3a3f */
  if (C.zf) goto L_100c3a3f;
  /* 100c3a1e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3a20 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3a22 push 0x100d3978 */
  push32((uint32_t)(0x100d3978u));
  /* 100c3a27 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3a2du);
  /* 100c3a2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c3a2f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c3a31 push 0x100d3890 */
  push32((uint32_t)(0x100d3890u));
  /* 100c3a36 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3a3cu);
  /* 100c3a3c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3a3f:;
  /* 100c3a3f push 0x100d3978 */
  push32((uint32_t)(0x100d3978u));
  /* 100c3a44 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c3a4au);
  /* 100c3a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3a4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3a4f je 0x100c3a77 */
  if (C.zf) goto L_100c3a77;
  /* 100c3a51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3a53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3a55 push 0x100d3960 */
  push32((uint32_t)(0x100d3960u));
  /* 100c3a5a call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3a60u);
  /* 100c3a60 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3a62 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100c3a64 push 0x100d38a0 */
  push32((uint32_t)(0x100d38a0u));
  /* 100c3a69 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3a6fu);
  /* 100c3a6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3a72 call 0x100c3320 */
  push32(0x100c3a77u); f_100c3320();
L_100c3a77:;
  /* 100c3a77 push 0x100d60d0 */
  push32((uint32_t)(0x100d60d0u));
  /* 100c3a7c call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c3a82u);
  /* 100c3a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3a85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3a87 je 0x100c3aae */
  if (C.zf) goto L_100c3aae;
  /* 100c3a89 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3a8b push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3a8d push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3a8f push 0x100d3688 */
  push32((uint32_t)(0x100d3688u));
  /* 100c3a94 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3a9au);
  /* 100c3a9a push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3a9c push 3 */
  push32((uint32_t)(0x3u));
  /* 100c3a9e push 0xf */
  push32((uint32_t)(0xfu));
  /* 100c3aa0 push 0x100d3688 */
  push32((uint32_t)(0x100d3688u));
  /* 100c3aa5 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3aabu);
  /* 100c3aab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3aae:;
  /* 100c3aae push 0 */
  push32((uint32_t)(0x0u));
  /* 100c3ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3ab2 call 0x100c25f0 */
  push32(0x100c3ab7u); f_100c25f0();
  /* 100c3ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c3ab9 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3abfu);
  /* 100c3abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3ac2 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3ac7 jle 0x100c3b0b */
  if ((C.zf||C.sf!=C.of)) goto L_100c3b0b;
  /* 100c3ac9 push 0x100d37c0 */
  push32((uint32_t)(0x100d37c0u));
  /* 100c3ace call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c3ad4u);
  /* 100c3ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3ad7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3ad9 je 0x100c3b0b */
  if (C.zf) goto L_100c3b0b;
  /* 100c3adb push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3add call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3ae3u);
  /* 100c3ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3ae6 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3aeb jge 0x100c3b0b */
  if ((C.sf==C.of)) goto L_100c3b0b;
  /* 100c3aed push 0x100d3978 */
  push32((uint32_t)(0x100d3978u));
  /* 100c3af2 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c3af8u);
  /* 100c3af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3afb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3afd jne 0x100c3b0b */
  if (!C.zf) goto L_100c3b0b;
  /* 100c3aff push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3b03 call 0x100c25f0 */
  push32(0x100c3b08u); f_100c25f0();
  /* 100c3b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3b0b:;
  /* 100c3b0b push 0x100d3978 */
  push32((uint32_t)(0x100d3978u));
  /* 100c3b10 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c3b16u);
  /* 100c3b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3b19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3b1b je 0x100c3c9c */
  if (C.zf) goto L_100c3c9c;
  /* 100c3b21 push 0x100d6110 */
  push32((uint32_t)(0x100d6110u));
  /* 100c3b26 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c3b2cu);
  /* 100c3b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3b2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3b31 je 0x100c3c9c */
  if (C.zf) goto L_100c3c9c;
  /* 100c3b37 push 0x100d61d8 */
  push32((uint32_t)(0x100d61d8u));
  /* 100c3b3c call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c3b42u);
  /* 100c3b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3b45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3b47 je 0x100c3c9c */
  if (C.zf) goto L_100c3c9c;
  /* 100c3b4d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3b50 je 0x100c3b57 */
  if (C.zf) goto L_100c3b57;
  /* 100c3b52 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3b55 jne 0x100c3b87 */
  if (!C.zf) goto L_100c3b87;
L_100c3b57:;
  /* 100c3b57 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c3b59 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3b5fu);
  /* 100c3b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3b62 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3b67 jle 0x100c3b87 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3b87;
  /* 100c3b69 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3b6b call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3b71u);
  /* 100c3b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3b74 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3b79 jge 0x100c3b87 */
  if ((C.sf==C.of)) goto L_100c3b87;
  /* 100c3b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3b7f call 0x100c25f0 */
  push32(0x100c3b84u); f_100c25f0();
  /* 100c3b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3b87:;
  /* 100c3b87 push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c3b8c call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c3b92u);
  /* 100c3b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3b95 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3b97 jne 0x100c3bc9 */
  if (!C.zf) goto L_100c3bc9;
  /* 100c3b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c3b9b call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3ba1u);
  /* 100c3ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3ba4 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3ba9 jle 0x100c3bc9 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3bc9;
  /* 100c3bab push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3bad call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3bb3u);
  /* 100c3bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3bb6 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3bbb jge 0x100c3bc9 */
  if ((C.sf==C.of)) goto L_100c3bc9;
  /* 100c3bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3bc1 call 0x100c25f0 */
  push32(0x100c3bc6u); f_100c25f0();
  /* 100c3bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3bc9:;
  /* 100c3bc9 push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c3bce call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c3bd4u);
  /* 100c3bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3bd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3bd9 je 0x100c3c9c */
  if (C.zf) goto L_100c3c9c;
  /* 100c3bdf cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3be2 jne 0x100c3c22 */
  if (!C.zf) goto L_100c3c22;
  /* 100c3be4 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c3be6 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3becu);
  /* 100c3bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3bef cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3bf4 jle 0x100c3cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3cf7;
  /* 100c3bfa push 4 */
  push32((uint32_t)(0x4u));
  /* 100c3bfc call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3c02u);
  /* 100c3c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3c05 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3c0a jle 0x100c3cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3cf7;
  /* 100c3c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3c12 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3c18u);
  /* 100c3c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3c1b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3c20 jmp 0x100c3c8c */
  goto L_100c3c8c;
L_100c3c22:;
  /* 100c3c22 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3c25 jne 0x100c3c65 */
  if (!C.zf) goto L_100c3c65;
  /* 100c3c27 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c3c29 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3c2fu);
  /* 100c3c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3c32 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3c37 jle 0x100c3cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3cf7;
  /* 100c3c3d push 4 */
  push32((uint32_t)(0x4u));
  /* 100c3c3f call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3c45u);
  /* 100c3c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3c48 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3c4d jle 0x100c3cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3cf7;
  /* 100c3c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3c55 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3c5bu);
  /* 100c3c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3c5e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3c63 jmp 0x100c3c8c */
  goto L_100c3c8c;
L_100c3c65:;
  /* 100c3c65 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3c68 jne 0x100c3c9c */
  if (!C.zf) goto L_100c3c9c;
  /* 100c3c6a push 3 */
  push32((uint32_t)(0x3u));
  /* 100c3c6c call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3c72u);
  /* 100c3c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3c75 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3c7a jle 0x100c3cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3cf7;
  /* 100c3c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3c7e call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3c84u);
  /* 100c3c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3c87 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100c3c8c:;
  /* 100c3c8c jge 0x100c3cf7 */
  if ((C.sf==C.of)) goto L_100c3cf7;
  /* 100c3c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3c92 call 0x100c25f0 */
  push32(0x100c3c97u); f_100c25f0();
  /* 100c3c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3c9a jmp 0x100c3cf7 */
  goto L_100c3cf7;
L_100c3c9c:;
  /* 100c3c9c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3c9f jne 0x100c3cf7 */
  if (!C.zf) goto L_100c3cf7;
  /* 100c3ca1 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3ca3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100c3ca5 push 0x100d3788 */
  push32((uint32_t)(0x100d3788u));
  /* 100c3caa call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3cb0u);
  /* 100c3cb0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c3cb2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c3cb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3cb6 push 0x100d63b8 */
  push32((uint32_t)(0x100d63b8u));
  /* 100c3cbb call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3cc1u);
  /* 100c3cc1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c3cc3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c3cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c3cc7 push 0x100d63b8 */
  push32((uint32_t)(0x100d63b8u));
  /* 100c3ccc call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3cd2u);
  /* 100c3cd2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c3cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c3cd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c3cd8 push 0x100d63b8 */
  push32((uint32_t)(0x100d63b8u));
  /* 100c3cdd call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3ce3u);
  /* 100c3ce3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c3ce5 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3ce7 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c3ce9 push 0x100d63b8 */
  push32((uint32_t)(0x100d63b8u));
  /* 100c3cee call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3cf4u);
  /* 100c3cf4 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3cf7:;
  /* 100c3cf7 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3cfa jle 0x100c3d53 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3d53;
  /* 100c3cfc mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 100c3d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3d02 je 0x100c3d53 */
  if (C.zf) goto L_100c3d53;
  /* 100c3d04 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3d06 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c3d08 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3d0a push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c3d0f call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3d15u);
  /* 100c3d15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3d18 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3d1b jle 0x100c3d53 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3d53;
  /* 100c3d1d push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3d1f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c3d21 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c3d23 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c3d28 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3d2eu);
  /* 100c3d2e push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3d30 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c3d32 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c3d34 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c3d39 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3d3fu);
  /* 100c3d3f push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3d41 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c3d43 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c3d45 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c3d4a call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3d50u);
  /* 100c3d50 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3d53:;
  /* 100c3d53 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 100c3d57 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100c3d59 je 0x100c3d97 */
  if (C.zf) goto L_100c3d97;
  /* 100c3d5b push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c3d60 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c3d66u);
  /* 100c3d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3d69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3d6b je 0x100c3d97 */
  if (C.zf) goto L_100c3d97;
  /* 100c3d6d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c3d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3d71 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 100c3d73 push 0x100d6180 */
  push32((uint32_t)(0x100d6180u));
  /* 100c3d78 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3d7eu);
  /* 100c3d7e push 0x100d61b8 */
  push32((uint32_t)(0x100d61b8u));
  /* 100c3d83 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c3d89u);
  /* 100c3d89 push 0x100d60d0 */
  push32((uint32_t)(0x100d60d0u));
  /* 100c3d8e call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c3d94u);
  /* 100c3d94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3d97:;
  /* 100c3d97 push 0x100d3638 */
  push32((uint32_t)(0x100d3638u));
  /* 100c3d9c call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c3da2u);
  /* 100c3da2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3da4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3da6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c3da8 push 0x100d6210 */
  push32((uint32_t)(0x100d6210u));
  /* 100c3dad call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3db3u);
  /* 100c3db3 push 0x100d6110 */
  push32((uint32_t)(0x100d6110u));
  /* 100c3db8 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c3dbeu);
  /* 100c3dbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3dc1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3dc3 je 0x100c3dd9 */
  if (C.zf) goto L_100c3dd9;
  /* 100c3dc5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3dc7 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3dc9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c3dcb push 0x100d6210 */
  push32((uint32_t)(0x100d6210u));
  /* 100c3dd0 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3dd6u);
  /* 100c3dd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3dd9:;
  /* 100c3dd9 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100c3ddb je 0x100c3ec5 */
  if (C.zf) goto L_100c3ec5;
  /* 100c3de1 push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c3de6 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c3decu);
  /* 100c3dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3df1 je 0x100c3ec5 */
  if (C.zf) goto L_100c3ec5;
  /* 100c3df7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c3df9 jne 0x100c3e31 */
  if (!C.zf) goto L_100c3e31;
  /* 100c3dfb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c3dfd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3dff push 2 */
  push32((uint32_t)(0x2u));
  /* 100c3e01 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c3e06 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3e0cu);
  /* 100c3e0c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c3e0e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3e10 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c3e12 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c3e17 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3e1du);
  /* 100c3e1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c3e1f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3e21 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c3e23 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c3e28 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3e2eu);
  /* 100c3e2e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3e31:;
  /* 100c3e31 push 0x100d6100 */
  push32((uint32_t)(0x100d6100u));
  /* 100c3e36 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c3e3cu);
  /* 100c3e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3e3f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3e42 jle 0x100c3e65 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3e65;
  /* 100c3e44 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c3e46 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3e48 push 0x100d6228 */
  push32((uint32_t)(0x100d6228u));
  /* 100c3e4d call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3e53u);
  /* 100c3e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100c3e55 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c3e57 push 0x100d6230 */
  push32((uint32_t)(0x100d6230u));
  /* 100c3e5c call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3e62u);
  /* 100c3e62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3e65:;
  /* 100c3e65 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3e67 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c3e69 push 0x100d6110 */
  push32((uint32_t)(0x100d6110u));
  /* 100c3e6e call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3e74u);
  /* 100c3e74 push 0x100d3928 */
  push32((uint32_t)(0x100d3928u));
  /* 100c3e79 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c3e7fu);
  /* 100c3e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3e82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3e84 je 0x100c3ec5 */
  if (C.zf) goto L_100c3ec5;
  /* 100c3e86 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3e88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3e8a push 0x100d6188 */
  push32((uint32_t)(0x100d6188u));
  /* 100c3e8f call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3e95u);
  /* 100c3e95 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3e97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3e99 push 0x100d6198 */
  push32((uint32_t)(0x100d6198u));
  /* 100c3e9e call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3ea4u);
  /* 100c3ea4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3ea6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100c3ea8 push 0x100d61a0 */
  push32((uint32_t)(0x100d61a0u));
  /* 100c3ead call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3eb3u);
  /* 100c3eb3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3eb5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100c3eb7 push 0x100d6190 */
  push32((uint32_t)(0x100d6190u));
  /* 100c3ebc call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3ec2u);
  /* 100c3ec2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3ec5:;
  /* 100c3ec5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c3ec7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c3ec9 push 0x100d37c0 */
  push32((uint32_t)(0x100d37c0u));
  /* 100c3ece call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3ed4u);
  /* 100c3ed4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3ed6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c3ed8 push 0x100d3900 */
  push32((uint32_t)(0x100d3900u));
  /* 100c3edd call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3ee3u);
  /* 100c3ee3 push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c3ee8 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c3eeeu);
  /* 100c3eee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3ef1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3ef4 jle 0x100c3f31 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3f31;
  /* 100c3ef6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 100c3efa cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3eff jle 0x100c3f31 */
  if ((C.zf||C.sf!=C.of)) goto L_100c3f31;
  /* 100c3f01 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 100c3f04 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100c3f08 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 100c3f0b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3f0d jge 0x100c3f26 */
  if ((C.sf==C.of)) goto L_100c3f26;
  /* 100c3f0f push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3f11 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c3f13 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 100c3f18 push 0x100d6100 */
  push32((uint32_t)(0x100d6100u));
  /* 100c3f1d call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3f23u);
  /* 100c3f23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3f26:;
  /* 100c3f26 call 0x100c32d0 */
  push32(0x100c3f2bu); f_100c32d0();
  /* 100c3f2b jmp 0x100c3f31 */
  goto L_100c3f31;
L_100c3f2d:;
  /* 100c3f2d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_100c3f31:;
  /* 100c3f31 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100c3f33 je 0x100c3f76 */
  if (C.zf) goto L_100c3f76;
  /* 100c3f35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3f37 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c3f39 push 0x100d3650 */
  push32((uint32_t)(0x100d3650u));
  /* 100c3f3e call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3f44u);
  /* 100c3f44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3f46 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c3f48 push 0x100d3728 */
  push32((uint32_t)(0x100d3728u));
  /* 100c3f4d call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3f53u);
  /* 100c3f53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3f55 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c3f57 push 0x100d3648 */
  push32((uint32_t)(0x100d3648u));
  /* 100c3f5c call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3f62u);
  /* 100c3f62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3f64 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c3f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c3f68 push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c3f6d call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c3f73u);
  /* 100c3f73 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3f76:;
  /* 100c3f76 push 0x100d37c0 */
  push32((uint32_t)(0x100d37c0u));
  /* 100c3f7b call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c3f81u);
  /* 100c3f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3f84 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3f86 je 0x100c3fa9 */
  if (C.zf) goto L_100c3fa9;
  /* 100c3f88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3f8a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c3f8c push 0x100d6218 */
  push32((uint32_t)(0x100d6218u));
  /* 100c3f91 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3f97u);
  /* 100c3f97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c3f99 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c3f9b push 0x100d6220 */
  push32((uint32_t)(0x100d6220u));
  /* 100c3fa0 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c3fa6u);
  /* 100c3fa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c3fa9:;
  /* 100c3fa9 push 0x100d3898 */
  push32((uint32_t)(0x100d3898u));
  /* 100c3fae call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c3fb4u);
  /* 100c3fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3fb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c3fb9 je 0x100c4223 */
  if (C.zf) goto L_100c4223;
  /* 100c3fbf push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c3fc4 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c3fcau);
  /* 100c3fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c3fcf je 0x100c402a */
  if (C.zf) goto L_100c402a;
  /* 100c3fd1 push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c3fd6 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c3fdcu);
  /* 100c3fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3fdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c3fe1 jne 0x100c402a */
  if (!C.zf) goto L_100c402a;
  /* 100c3fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c3fe5 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3febu);
  /* 100c3feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c3fee cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c3ff3 jle 0x100c402a */
  if ((C.zf||C.sf!=C.of)) goto L_100c402a;
  /* 100c3ff5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c3ff7 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c3ffdu);
  /* 100c3ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4000 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4005 jge 0x100c402a */
  if ((C.sf==C.of)) goto L_100c402a;
  /* 100c4007 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4009 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c400fu);
  /* 100c400f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4012 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4017 jle 0x100c402a */
  if ((C.zf||C.sf!=C.of)) goto L_100c402a;
  /* 100c4019 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100c401e push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4020 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4022 call 0x100c2610 */
  push32(0x100c4027u); f_100c2610();
  /* 100c4027 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c402a:;
  /* 100c402a push 3 */
  push32((uint32_t)(0x3u));
  /* 100c402c call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4032u);
  /* 100c4032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4035 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c403a jge 0x100c405f */
  if ((C.sf==C.of)) goto L_100c405f;
  /* 100c403c push 2 */
  push32((uint32_t)(0x2u));
  /* 100c403e call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4044u);
  /* 100c4044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4047 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c404c jle 0x100c405f */
  if ((C.zf||C.sf!=C.of)) goto L_100c405f;
  /* 100c404e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100c4053 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4055 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4057 call 0x100c2610 */
  push32(0x100c405cu); f_100c2610();
  /* 100c405c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c405f:;
  /* 100c405f push 0x100d6218 */
  push32((uint32_t)(0x100d6218u));
  /* 100c4064 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c406au);
  /* 100c406a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c406d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c406f je 0x100c4197 */
  if (C.zf) goto L_100c4197;
  /* 100c4075 push 0x100d6220 */
  push32((uint32_t)(0x100d6220u));
  /* 100c407a call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c4080u);
  /* 100c4080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4083 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4085 je 0x100c4197 */
  if (C.zf) goto L_100c4197;
  /* 100c408b push 2 */
  push32((uint32_t)(0x2u));
  /* 100c408d call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4093u);
  /* 100c4093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4096 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c409b jle 0x100c40ae */
  if ((C.zf||C.sf!=C.of)) goto L_100c40ae;
  /* 100c409d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100c40a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c40a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c40a6 call 0x100c2610 */
  push32(0x100c40abu); f_100c2610();
  /* 100c40ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c40ae:;
  /* 100c40ae push 0 */
  push32((uint32_t)(0x0u));
  /* 100c40b0 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c40b6u);
  /* 100c40b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c40b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c40bb je 0x100c41ba */
  if (C.zf) goto L_100c41ba;
  /* 100c40c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c40c3 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c40c9u);
  /* 100c40c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c40cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c40ce je 0x100c413b */
  if (C.zf) goto L_100c413b;
  /* 100c40d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c40d2 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c40d8u);
  /* 100c40d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c40db cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c40e0 jge 0x100c413b */
  if ((C.sf==C.of)) goto L_100c413b;
  /* 100c40e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c40e4 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c40eau);
  /* 100c40ea push 5 */
  push32((uint32_t)(0x5u));
  /* 100c40ec mov esi, eax */
  ESI = (EAX);
  /* 100c40ee call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c40f4u);
  /* 100c40f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c40f7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c40f9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100c40fe jge 0x100c411f */
  if ((C.sf==C.of)) goto L_100c411f;
  /* 100c4100 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4102 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4104 call 0x100c2610 */
  push32(0x100c4109u); f_100c2610();
  /* 100c4109 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100c410e push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4110 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4112 call 0x100c2610 */
  push32(0x100c4117u); f_100c2610();
  /* 100c4117 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c411a jmp 0x100c41ba */
  goto L_100c41ba;
L_100c411f:;
  /* 100c411f push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4121 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4123 call 0x100c2610 */
  push32(0x100c4128u); f_100c2610();
  /* 100c4128 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100c412d push 5 */
  push32((uint32_t)(0x5u));
  /* 100c412f push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4131 call 0x100c2610 */
  push32(0x100c4136u); f_100c2610();
  /* 100c4136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4139 jmp 0x100c41ba */
  goto L_100c41ba;
L_100c413b:;
  /* 100c413b push 5 */
  push32((uint32_t)(0x5u));
  /* 100c413d call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4143u);
  /* 100c4143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4146 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c414b jge 0x100c416d */
  if ((C.sf==C.of)) goto L_100c416d;
  /* 100c414d push 0 */
  push32((uint32_t)(0x0u));
  /* 100c414f call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4155u);
  /* 100c4155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c415a je 0x100c416d */
  if (C.zf) goto L_100c416d;
  /* 100c415c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 100c4161 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4163 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4165 call 0x100c2610 */
  push32(0x100c416au); f_100c2610();
  /* 100c416a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c416d:;
  /* 100c416d push 5 */
  push32((uint32_t)(0x5u));
  /* 100c416f call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4175u);
  /* 100c4175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4178 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c417d jge 0x100c41ba */
  if ((C.sf==C.of)) goto L_100c41ba;
  /* 100c417f push 0 */
  push32((uint32_t)(0x0u));
  /* 100c4181 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4187u);
  /* 100c4187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c418a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c418c je 0x100c41ba */
  if (C.zf) goto L_100c41ba;
  /* 100c418e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 100c4193 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4195 jmp 0x100c41b0 */
  goto L_100c41b0;
L_100c4197:;
  /* 100c4197 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4199 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c419fu);
  /* 100c419f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c41a2 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c41a7 jle 0x100c41ba */
  if ((C.zf||C.sf!=C.of)) goto L_100c41ba;
  /* 100c41a9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 100c41ae push 1 */
  push32((uint32_t)(0x1u));
L_100c41b0:;
  /* 100c41b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c41b2 call 0x100c2610 */
  push32(0x100c41b7u); f_100c2610();
  /* 100c41b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c41ba:;
  /* 100c41ba push 0 */
  push32((uint32_t)(0x0u));
  /* 100c41bc call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c41c2u);
  /* 100c41c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c41c5 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c41ca jle 0x100c41dd */
  if ((C.zf||C.sf!=C.of)) goto L_100c41dd;
  /* 100c41cc push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100c41d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c41d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c41d5 call 0x100c2610 */
  push32(0x100c41dau); f_100c2610();
  /* 100c41da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c41dd:;
  /* 100c41dd push 4 */
  push32((uint32_t)(0x4u));
  /* 100c41df call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c41e5u);
  /* 100c41e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c41e8 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c41ed jle 0x100c4200 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4200;
  /* 100c41ef push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 100c41f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c41f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c41f8 call 0x100c2610 */
  push32(0x100c41fdu); f_100c2610();
  /* 100c41fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4200:;
  /* 100c4200 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4202 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4208u);
  /* 100c4208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c420b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4210 jle 0x100c4223 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4223;
  /* 100c4212 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 100c4217 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4219 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c421b call 0x100c2610 */
  push32(0x100c4220u); f_100c2610();
  /* 100c4220 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4223:;
  /* 100c4223 pop edi */
  EDI = (pop32());
  /* 100c4224 pop esi */
  ESI = (pop32());
  /* 100c4225 pop ebp */
  EBP = (pop32());
  /* 100c4226 pop ebx */
  EBX = (pop32());
  /* 100c4227 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c422a ret  */
  ESPCHK(0x100c3360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004230 @ 0x100c4230 (209 bytes, 56 insns) */
void f_100c4230(void) {
  FTRACE(0x100c4230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c4230 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4232 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4238u);
  /* 100c4238 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c423b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4240 jle 0x100c4300 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4300;
  /* 100c4246 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4248 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100c424a push 0x100d6370 */
  push32((uint32_t)(0x100d6370u));
  /* 100c424f call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4255u);
  /* 100c4255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4257 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4259 push 0x100d6378 */
  push32((uint32_t)(0x100d6378u));
  /* 100c425e call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4264u);
  /* 100c4264 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4266 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4268 push 0x100d6360 */
  push32((uint32_t)(0x100d6360u));
  /* 100c426d call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4273u);
  /* 100c4273 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4275 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4277 push 0x100d6368 */
  push32((uint32_t)(0x100d6368u));
  /* 100c427c call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4282u);
  /* 100c4282 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4284 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4286 push 0x100d6380 */
  push32((uint32_t)(0x100d6380u));
  /* 100c428b call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4291u);
  /* 100c4291 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4293 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4295 push 0x100d62b8 */
  push32((uint32_t)(0x100d62b8u));
  /* 100c429a call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c42a0u);
  /* 100c42a0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c42a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c42a5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c42a7 push 0x100d62a0 */
  push32((uint32_t)(0x100d62a0u));
  /* 100c42ac call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c42b2u);
  /* 100c42b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c42b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c42b6 push 0x100d62a8 */
  push32((uint32_t)(0x100d62a8u));
  /* 100c42bb call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c42c1u);
  /* 100c42c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c42c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c42c5 push 0x100d62c0 */
  push32((uint32_t)(0x100d62c0u));
  /* 100c42ca call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c42d0u);
  /* 100c42d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c42d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c42d4 push 0x100d62c8 */
  push32((uint32_t)(0x100d62c8u));
  /* 100c42d9 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c42dfu);
  /* 100c42df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c42e1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c42e3 push 0x100d6280 */
  push32((uint32_t)(0x100d6280u));
  /* 100c42e8 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c42eeu);
  /* 100c42ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c42f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c42f2 push 0x100d5fe8 */
  push32((uint32_t)(0x100d5fe8u));
  /* 100c42f7 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c42fdu);
  /* 100c42fd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4300:;
  /* 100c4300 ret  */
  ESPCHK(0x100c4230u, _esp0);
  ESP += 4; return;
}

/* FUN_10004310 @ 0x100c4310 (79 bytes, 22 insns) */
void f_100c4310(void) {
  FTRACE(0x100c4310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c4310 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4312 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4314 push 0x100d3930 */
  push32((uint32_t)(0x100d3930u));
  /* 100c4319 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c431fu);
  /* 100c431f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4321 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4323 push 0x100d3938 */
  push32((uint32_t)(0x100d3938u));
  /* 100c4328 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c432eu);
  /* 100c432e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4330 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4332 push 0x100d3928 */
  push32((uint32_t)(0x100d3928u));
  /* 100c4337 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c433du);
  /* 100c433d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c433f push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4341 push 0x100d5f98 */
  push32((uint32_t)(0x100d5f98u));
  /* 100c4346 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c434cu);
  /* 100c434c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c434e push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4350 push 0x100d5f88 */
  push32((uint32_t)(0x100d5f88u));
  /* 100c4355 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c435bu);
  /* 100c435b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c435e ret  */
  ESPCHK(0x100c4310u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x100c4360 (127 bytes, 35 insns) */
void f_100c4360(void) {
  FTRACE(0x100c4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c4360 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4362 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c4364 push 0x100d61f8 */
  push32((uint32_t)(0x100d61f8u));
  /* 100c4369 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c436fu);
  /* 100c436f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4371 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c4373 push 0x100d61f0 */
  push32((uint32_t)(0x100d61f0u));
  /* 100c4378 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c437eu);
  /* 100c437e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4380 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c4382 push 0x100d61c0 */
  push32((uint32_t)(0x100d61c0u));
  /* 100c4387 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c438du);
  /* 100c438d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c438f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c4391 push 0x100d61b8 */
  push32((uint32_t)(0x100d61b8u));
  /* 100c4396 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c439cu);
  /* 100c439c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c439e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c43a0 push 0x100d60b8 */
  push32((uint32_t)(0x100d60b8u));
  /* 100c43a5 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c43abu);
  /* 100c43ab push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c43ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c43af push 0x100d60c0 */
  push32((uint32_t)(0x100d60c0u));
  /* 100c43b4 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c43bau);
  /* 100c43ba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c43bd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c43bf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c43c1 push 0x100d60c8 */
  push32((uint32_t)(0x100d60c8u));
  /* 100c43c6 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c43ccu);
  /* 100c43cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c43ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c43d0 push 0x100d60d0 */
  push32((uint32_t)(0x100d60d0u));
  /* 100c43d5 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c43dbu);
  /* 100c43db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c43de ret  */
  ESPCHK(0x100c4360u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x100c43e0 (3643 bytes, 1035 insns) */
void f_100c43e0(void) {
  FTRACE(0x100c43e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c43e0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c43e3 push ebx */
  push32((uint32_t)(EBX));
  /* 100c43e4 push ebp */
  push32((uint32_t)(EBP));
  /* 100c43e5 push esi */
  push32((uint32_t)(ESI));
  /* 100c43e6 push edi */
  push32((uint32_t)(EDI));
  /* 100c43e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c43e9 call 0x100c2760 */
  push32(0x100c43eeu); f_100c2760();
  /* 100c43ee push 0x100cf030 */
  push32((uint32_t)(0x100cf030u));
  /* 100c43f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100c43f5 call dword ptr [0x100d652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d652c))), 0x100c43fbu);
  /* 100c43fb push 0x100d61b0 */
  push32((uint32_t)(0x100d61b0u));
  /* 100c4400 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c4406u);
  /* 100c4406 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4408 mov ebx, eax */
  EBX = (EAX);
  /* 100c440a call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4410u);
  /* 100c4410 mov ebp, eax */
  EBP = (EAX);
  /* 100c4412 push 0x100d61d8 */
  push32((uint32_t)(0x100d61d8u));
  /* 100c4417 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 100c441b call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c4421u);
  /* 100c4421 push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c4426 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 100c442a call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c4430u);
  /* 100c4430 push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c4435 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c443bu);
  /* 100c443b push 0x100d6100 */
  push32((uint32_t)(0x100d6100u));
  /* 100c4440 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c4446u);
  /* 100c4446 push 0x100d63d0 */
  push32((uint32_t)(0x100d63d0u));
  /* 100c444b call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c4451u);
  /* 100c4451 push 0x100d6350 */
  push32((uint32_t)(0x100d6350u));
  /* 100c4456 mov esi, eax */
  ESI = (EAX);
  /* 100c4458 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c445eu);
  /* 100c445e push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c4463 mov edi, eax */
  EDI = (EAX);
  /* 100c4465 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c446bu);
  /* 100c446b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c446d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4470 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4472 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 100c4477 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 100c447b call 0x100c2660 */
  push32(0x100c4480u); f_100c2660();
  /* 100c4480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c4482 jle 0x100c4498 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4498;
  /* 100c4484 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100c4486 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c4488 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100c448a push 0x100d6348 */
  push32((uint32_t)(0x100d6348u));
  /* 100c448f call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4495u);
  /* 100c4495 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4498:;
  /* 100c4498 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c449d call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c44a3u);
  /* 100c44a3 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c44a8 mov esi, eax */
  ESI = (EAX);
  /* 100c44aa call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c44b0u);
  /* 100c44b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c44b3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c44b5 je 0x100c44bc */
  if (C.zf) goto L_100c44bc;
  /* 100c44b7 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_100c44bc:;
  /* 100c44bc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100c44be je 0x100c5213 */
  if (C.zf) goto L_100c5213;
  /* 100c44c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c44c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c44c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c44ca push 0x100d5ff8 */
  push32((uint32_t)(0x100d5ff8u));
  /* 100c44cf call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c44d5u);
  /* 100c44d5 push 0x100d5ff8 */
  push32((uint32_t)(0x100d5ff8u));
  /* 100c44da call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c44e0u);
  /* 100c44e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c44e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c44e5 je 0x100c5213 */
  if (C.zf) goto L_100c5213;
  /* 100c44eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c44ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c44ef push 0x100d6398 */
  push32((uint32_t)(0x100d6398u));
  /* 100c44f4 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c44fau);
  /* 100c44fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c44fd call dword ptr [0x100d6590] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6590))), 0x100c4503u);
  /* 100c4503 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4505 jne 0x100c455c */
  if (!C.zf) goto L_100c455c;
  /* 100c4507 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c450d jle 0x100c4534 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4534;
  /* 100c450f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4511 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4513 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4515 push 0x100d61b0 */
  push32((uint32_t)(0x100d61b0u));
  /* 100c451a call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4520u);
  /* 100c4520 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4522 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4524 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4526 push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c452b call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4531u);
  /* 100c4531 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4534:;
  /* 100c4534 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c453a jle 0x100c4548 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4548;
  /* 100c453c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4541 jle 0x100c4548 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4548;
  /* 100c4543 call 0x100c4230 */
  push32(0x100c4548u); f_100c4230();
L_100c4548:;
  /* 100c4548 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c454a push 1 */
  push32((uint32_t)(0x1u));
  /* 100c454c push 0 */
  push32((uint32_t)(0x0u));
  /* 100c454e call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c4554u);
  /* 100c4554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4557 jmp 0x100c461f */
  goto L_100c461f;
L_100c455c:;
  /* 100c455c mov eax, dword ptr [0x100d65b4] */
  EAX = (r32((uint32_t)(0x100d65b4)));
  /* 100c4561 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c4564 je 0x100c4578 */
  if (C.zf) goto L_100c4578;
  /* 100c4566 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c4567 je 0x100c4572 */
  if (C.zf) goto L_100c4572;
  /* 100c4569 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c456a jne 0x100c45a4 */
  if (!C.zf) goto L_100c45a4;
  /* 100c456c push 9 */
  push32((uint32_t)(0x9u));
  /* 100c456e push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4570 jmp 0x100c4599 */
  goto L_100c4599;
L_100c4572:;
  /* 100c4572 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4574 push 9 */
  push32((uint32_t)(0x9u));
  /* 100c4576 jmp 0x100c4599 */
  goto L_100c4599;
L_100c4578:;
  /* 100c4578 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c457e jle 0x100c458f */
  if ((C.zf||C.sf!=C.of)) goto L_100c458f;
  /* 100c4580 push 6 */
  push32((uint32_t)(0x6u));
  /* 100c4582 push 6 */
  push32((uint32_t)(0x6u));
  /* 100c4584 push 9 */
  push32((uint32_t)(0x9u));
  /* 100c4586 call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c458cu);
  /* 100c458c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c458f:;
  /* 100c458f push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4591 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4597 push 5 */
  push32((uint32_t)(0x5u));
L_100c4599:;
  /* 100c4599 push 9 */
  push32((uint32_t)(0x9u));
  /* 100c459b call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c45a1u);
  /* 100c45a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c45a4:;
  /* 100c45a4 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 100c45a8 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 100c45ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c45af je 0x100c45b6 */
  if (C.zf) goto L_100c45b6;
  /* 100c45b1 mov esi, 0x17c */
  ESI = (0x17cu);
L_100c45b6:;
  /* 100c45b6 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c45b9 jge 0x100c45d7 */
  if ((C.sf==C.of)) goto L_100c45d7;
  /* 100c45bb cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c45c1 jle 0x100c4613 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4613;
  /* 100c45c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c45c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c45c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c45c9 push 0x100d61b0 */
  push32((uint32_t)(0x100d61b0u));
  /* 100c45ce call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c45d4u);
  /* 100c45d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c45d7:;
  /* 100c45d7 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c45dd jle 0x100c4613 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4613;
  /* 100c45df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c45e1 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 100c45e6 push esi */
  push32((uint32_t)(ESI));
  /* 100c45e7 push 0x100d61b0 */
  push32((uint32_t)(0x100d61b0u));
  /* 100c45ec call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c45f2u);
  /* 100c45f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c45f5 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c45fb jle 0x100c4613 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4613;
  /* 100c45fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c45ff push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 100c4604 push esi */
  push32((uint32_t)(ESI));
  /* 100c4605 push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c460a call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4610u);
  /* 100c4610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4613:;
  /* 100c4613 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4618 jle 0x100c461f */
  if ((C.zf||C.sf!=C.of)) goto L_100c461f;
  /* 100c461a call 0x100c4230 */
  push32(0x100c461fu); f_100c4230();
L_100c461f:;
  /* 100c461f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4621 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4623 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4625 push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c462a call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4630u);
  /* 100c4630 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4632 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4634 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4636 push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c463b call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4641u);
  /* 100c4641 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4643 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4645 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4647 push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c464c call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4652u);
  /* 100c4652 push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c4657 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c465du);
  /* 100c465d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4663 jle 0x100c46d6 */
  if ((C.zf||C.sf!=C.of)) goto L_100c46d6;
  /* 100c4665 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4667 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c4669 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c466b push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c4670 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4676u);
  /* 100c4676 push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c467b call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c4681u);
  /* 100c4681 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4687 jle 0x100c469d */
  if ((C.zf||C.sf!=C.of)) goto L_100c469d;
  /* 100c4689 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c468b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c468d push 1 */
  push32((uint32_t)(0x1u));
  /* 100c468f push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c4694 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c469au);
  /* 100c469a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c469d:;
  /* 100c469d push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c46a2 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c46a8u);
  /* 100c46a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c46ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c46ae jle 0x100c46c4 */
  if ((C.zf||C.sf!=C.of)) goto L_100c46c4;
  /* 100c46b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c46b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c46b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c46b6 push 0x100d3898 */
  push32((uint32_t)(0x100d3898u));
  /* 100c46bb call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c46c1u);
  /* 100c46c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c46c4:;
  /* 100c46c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c46c6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c46c8 push 0x100d6130 */
  push32((uint32_t)(0x100d6130u));
  /* 100c46cd call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c46d3u);
  /* 100c46d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c46d6:;
  /* 100c46d6 push 0x100d61b0 */
  push32((uint32_t)(0x100d61b0u));
  /* 100c46db call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c46e1u);
  /* 100c46e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c46e4 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c46e7 jle 0x100c46fd */
  if ((C.zf||C.sf!=C.of)) goto L_100c46fd;
  /* 100c46e9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c46eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c46ed push 1 */
  push32((uint32_t)(0x1u));
  /* 100c46ef push 0x100d3898 */
  push32((uint32_t)(0x100d3898u));
  /* 100c46f4 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c46fau);
  /* 100c46fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c46fd:;
  /* 100c46fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c46ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4701 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4703 push 0x100d6208 */
  push32((uint32_t)(0x100d6208u));
  /* 100c4708 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c470eu);
  /* 100c470e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4710 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4712 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4714 push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c4719 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c471fu);
  /* 100c471f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4721 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4723 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4725 push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c472a call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4730u);
  /* 100c4730 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4732 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4734 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4736 push 0x100d5ff0 */
  push32((uint32_t)(0x100d5ff0u));
  /* 100c473b call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4741u);
  /* 100c4741 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4744 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4746 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4748 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c474a push 0x100d6208 */
  push32((uint32_t)(0x100d6208u));
  /* 100c474f call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4755u);
  /* 100c4755 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4757 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c4759 push 0x100d3680 */
  push32((uint32_t)(0x100d3680u));
  /* 100c475e call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4764u);
  /* 100c4764 push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c4769 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c476fu);
  /* 100c476f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c4774 jle 0x100c478a */
  if ((C.zf||C.sf!=C.of)) goto L_100c478a;
  /* 100c4776 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4778 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c477a push 1 */
  push32((uint32_t)(0x1u));
  /* 100c477c push 0x100d6118 */
  push32((uint32_t)(0x100d6118u));
  /* 100c4781 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4787u);
  /* 100c4787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c478a:;
  /* 100c478a call dword ptr [0x100d6590] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6590))), 0x100c4790u);
  /* 100c4790 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4792 je 0x100c47a8 */
  if (C.zf) goto L_100c47a8;
  /* 100c4794 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4796 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4798 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c479a push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c479f call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c47a5u);
  /* 100c47a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c47a8:;
  /* 100c47a8 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c47aa push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c47ac push 1 */
  push32((uint32_t)(0x1u));
  /* 100c47ae push 0x100d6008 */
  push32((uint32_t)(0x100d6008u));
  /* 100c47b3 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c47b9u);
  /* 100c47b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c47bb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c47bd push 1 */
  push32((uint32_t)(0x1u));
  /* 100c47bf push 0x100d3638 */
  push32((uint32_t)(0x100d3638u));
  /* 100c47c4 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c47cau);
  /* 100c47ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c47cd cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c47d0 jle 0x100c47e6 */
  if ((C.zf||C.sf!=C.of)) goto L_100c47e6;
  /* 100c47d2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c47d4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c47d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c47d8 push 0x100d5ff8 */
  push32((uint32_t)(0x100d5ff8u));
  /* 100c47dd call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c47e3u);
  /* 100c47e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c47e6:;
  /* 100c47e6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c47e8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c47ea push 1 */
  push32((uint32_t)(0x1u));
  /* 100c47ec push 0x100d6278 */
  push32((uint32_t)(0x100d6278u));
  /* 100c47f1 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c47f7u);
  /* 100c47f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c47f9 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c47fb push 2 */
  push32((uint32_t)(0x2u));
  /* 100c47fd push 0x100d6278 */
  push32((uint32_t)(0x100d6278u));
  /* 100c4802 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4808u);
  /* 100c4808 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c480a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c480c push 0x100d6098 */
  push32((uint32_t)(0x100d6098u));
  /* 100c4811 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4817u);
  /* 100c4817 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4819 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c481b push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c4820 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4826u);
  /* 100c4826 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4828 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c482a push 0x100d61d8 */
  push32((uint32_t)(0x100d61d8u));
  /* 100c482f call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4835u);
  /* 100c4835 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4838 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c483a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c483c push 0x100d6060 */
  push32((uint32_t)(0x100d6060u));
  /* 100c4841 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4847u);
  /* 100c4847 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4849 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c484b push 0x100d6050 */
  push32((uint32_t)(0x100d6050u));
  /* 100c4850 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4856u);
  /* 100c4856 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4858 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c485a push 0x100d6058 */
  push32((uint32_t)(0x100d6058u));
  /* 100c485f call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4865u);
  /* 100c4865 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c486a call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c4870u);
  /* 100c4870 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c4875 je 0x100c4934 */
  if (C.zf) goto L_100c4934;
  /* 100c487b push 0x100d61d8 */
  push32((uint32_t)(0x100d61d8u));
  /* 100c4880 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c4886u);
  /* 100c4886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4889 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c488b jne 0x100c4934 */
  if (!C.zf) goto L_100c4934;
  /* 100c4891 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4893 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4899u);
  /* 100c4899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c489c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c48a1 jle 0x100c48c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100c48c7;
  /* 100c48a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c48a5 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c48abu);
  /* 100c48ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c48ae cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c48b3 jle 0x100c48c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100c48c7;
  /* 100c48b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c48b7 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c48bdu);
  /* 100c48bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c48c0 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c48c5 jg 0x100c4934 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c4934;
L_100c48c7:;
  /* 100c48c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c48c9 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c48cfu);
  /* 100c48cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c48d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c48d4 je 0x100c495b */
  if (C.zf) goto L_100c495b;
  /* 100c48da push 5 */
  push32((uint32_t)(0x5u));
  /* 100c48dc call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c48e2u);
  /* 100c48e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c48e5 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c48ea jle 0x100c495b */
  if ((C.zf||C.sf!=C.of)) goto L_100c495b;
  /* 100c48ec push 5 */
  push32((uint32_t)(0x5u));
  /* 100c48ee call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c48f4u);
  /* 100c48f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c48f7 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c48fc jle 0x100c490f */
  if ((C.zf||C.sf!=C.of)) goto L_100c490f;
  /* 100c48fe push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100c4903 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4905 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4907 call 0x100c2610 */
  push32(0x100c490cu); f_100c2610();
  /* 100c490c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c490f:;
  /* 100c490f push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4911 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4917u);
  /* 100c4917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c491a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c491f jle 0x100c495b */
  if ((C.zf||C.sf!=C.of)) goto L_100c495b;
  /* 100c4921 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100c4926 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4928 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c492a call 0x100c2610 */
  push32(0x100c492fu); f_100c2610();
  /* 100c492f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4932 jmp 0x100c495b */
  goto L_100c495b;
L_100c4934:;
  /* 100c4934 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c4936 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4938 call 0x100c25f0 */
  push32(0x100c493du); f_100c25f0();
  /* 100c493d push 0 */
  push32((uint32_t)(0x0u));
  /* 100c493f push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4941 call 0x100c25f0 */
  push32(0x100c4946u); f_100c25f0();
  /* 100c4946 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c4948 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c494a call 0x100c25f0 */
  push32(0x100c494fu); f_100c25f0();
  /* 100c494f push 0 */
  push32((uint32_t)(0x0u));
  /* 100c4951 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4953 call 0x100c25f0 */
  push32(0x100c4958u); f_100c25f0();
  /* 100c4958 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c495b:;
  /* 100c495b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c495d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c495f push 0x100d37c0 */
  push32((uint32_t)(0x100d37c0u));
  /* 100c4964 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c496au);
  /* 100c496a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c496c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c496e push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4970 push 0x100d62f8 */
  push32((uint32_t)(0x100d62f8u));
  /* 100c4975 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c497bu);
  /* 100c497b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c497d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c497f push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4981 push 0x100d62f8 */
  push32((uint32_t)(0x100d62f8u));
  /* 100c4986 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c498cu);
  /* 100c498c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c498e push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4990 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4992 push 0x100d62f8 */
  push32((uint32_t)(0x100d62f8u));
  /* 100c4997 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c499du);
  /* 100c499d push 0x100d3978 */
  push32((uint32_t)(0x100d3978u));
  /* 100c49a2 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c49a8u);
  /* 100c49a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c49ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c49ad jne 0x100c49f8 */
  if (!C.zf) goto L_100c49f8;
  /* 100c49af push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 100c49b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c49b3 call 0x100c2640 */
  push32(0x100c49b8u); f_100c2640();
  /* 100c49b8 mov esi, eax */
  ESI = (EAX);
  /* 100c49ba push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100c49bc push 0 */
  push32((uint32_t)(0x0u));
  /* 100c49be sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100c49c1 call 0x100c2640 */
  push32(0x100c49c6u); f_100c2640();
  /* 100c49c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100c49c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c49ca add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c49cc call 0x100c2640 */
  push32(0x100c49d1u); f_100c2640();
  /* 100c49d1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c49d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c49d6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c49d9 jle 0x100c49e8 */
  if ((C.zf||C.sf!=C.of)) goto L_100c49e8;
  /* 100c49db push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c49dd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c49df push 6 */
  push32((uint32_t)(0x6u));
  /* 100c49e1 push 0x100d5fb0 */
  push32((uint32_t)(0x100d5fb0u));
  /* 100c49e6 jmp 0x100c4a03 */
  goto L_100c4a03;
L_100c49e8:;
  /* 100c49e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c49ea je 0x100c4a0c */
  if (C.zf) goto L_100c4a0c;
  /* 100c49ec push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c49ee push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c49f0 push esi */
  push32((uint32_t)(ESI));
  /* 100c49f1 push 0x100d5fb0 */
  push32((uint32_t)(0x100d5fb0u));
  /* 100c49f6 jmp 0x100c4a03 */
  goto L_100c4a03;
L_100c49f8:;
  /* 100c49f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c49fa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c49fc push 0xa */
  push32((uint32_t)(0xau));
  /* 100c49fe push 0x100d3908 */
  push32((uint32_t)(0x100d3908u));
L_100c4a03:;
  /* 100c4a03 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4a09u);
  /* 100c4a09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4a0c:;
  /* 100c4a0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4a0e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c4a10 push 0x100d3978 */
  push32((uint32_t)(0x100d3978u));
  /* 100c4a15 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4a1bu);
  /* 100c4a1b push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c4a20 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c4a26u);
  /* 100c4a26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4a29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4a2b je 0x100c4a4e */
  if (C.zf) goto L_100c4a4e;
  /* 100c4a2d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4a2f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4a31 push 0x100d3978 */
  push32((uint32_t)(0x100d3978u));
  /* 100c4a36 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4a3cu);
  /* 100c4a3c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4a3e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c4a40 push 0x100d3890 */
  push32((uint32_t)(0x100d3890u));
  /* 100c4a45 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4a4bu);
  /* 100c4a4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4a4e:;
  /* 100c4a4e push 0x100d3978 */
  push32((uint32_t)(0x100d3978u));
  /* 100c4a53 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c4a59u);
  /* 100c4a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4a5c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4a5e je 0x100c4a86 */
  if (C.zf) goto L_100c4a86;
  /* 100c4a60 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4a62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4a64 push 0x100d3960 */
  push32((uint32_t)(0x100d3960u));
  /* 100c4a69 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4a6fu);
  /* 100c4a6f push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4a71 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100c4a73 push 0x100d38a0 */
  push32((uint32_t)(0x100d38a0u));
  /* 100c4a78 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4a7eu);
  /* 100c4a7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4a81 call 0x100c3320 */
  push32(0x100c4a86u); f_100c3320();
L_100c4a86:;
  /* 100c4a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c4a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4a8a call 0x100c25f0 */
  push32(0x100c4a8fu); f_100c25f0();
  /* 100c4a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 100c4a91 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4a97u);
  /* 100c4a97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4a9a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4a9f jle 0x100c4ae3 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4ae3;
  /* 100c4aa1 push 0x100d37c0 */
  push32((uint32_t)(0x100d37c0u));
  /* 100c4aa6 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c4aacu);
  /* 100c4aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4aaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4ab1 je 0x100c4ae3 */
  if (C.zf) goto L_100c4ae3;
  /* 100c4ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4ab5 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4abbu);
  /* 100c4abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4abe cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4ac3 jge 0x100c4ae3 */
  if ((C.sf==C.of)) goto L_100c4ae3;
  /* 100c4ac5 push 0x100d3978 */
  push32((uint32_t)(0x100d3978u));
  /* 100c4aca call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c4ad0u);
  /* 100c4ad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4ad3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4ad5 jne 0x100c4ae3 */
  if (!C.zf) goto L_100c4ae3;
  /* 100c4ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4ad9 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4adb call 0x100c25f0 */
  push32(0x100c4ae0u); f_100c25f0();
  /* 100c4ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4ae3:;
  /* 100c4ae3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4ae5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4ae7 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4ae9 push 0x100d6210 */
  push32((uint32_t)(0x100d6210u));
  /* 100c4aee call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4af4u);
  /* 100c4af4 push 0x100d6110 */
  push32((uint32_t)(0x100d6110u));
  /* 100c4af9 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c4affu);
  /* 100c4aff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4b02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4b04 je 0x100c4b1a */
  if (C.zf) goto L_100c4b1a;
  /* 100c4b06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4b08 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4b0a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c4b0c push 0x100d6210 */
  push32((uint32_t)(0x100d6210u));
  /* 100c4b11 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4b17u);
  /* 100c4b17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4b1a:;
  /* 100c4b1a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4b1c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c4b1e push 0x100d6110 */
  push32((uint32_t)(0x100d6110u));
  /* 100c4b23 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4b29u);
  /* 100c4b29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4b2b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c4b2d push 0x100d6120 */
  push32((uint32_t)(0x100d6120u));
  /* 100c4b32 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4b38u);
  /* 100c4b38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4b3a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4b3c push 0x100d6308 */
  push32((uint32_t)(0x100d6308u));
  /* 100c4b41 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4b47u);
  /* 100c4b47 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4b49 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4b4b push 0x100d62f0 */
  push32((uint32_t)(0x100d62f0u));
  /* 100c4b50 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4b56u);
  /* 100c4b56 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4b58 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4b5a push 0x100d6300 */
  push32((uint32_t)(0x100d6300u));
  /* 100c4b5f call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4b65u);
  /* 100c4b65 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4b67 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4b69 push 0x100d62e0 */
  push32((uint32_t)(0x100d62e0u));
  /* 100c4b6e call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4b74u);
  /* 100c4b74 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4b77 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4b79 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4b7b push 0x100d62e8 */
  push32((uint32_t)(0x100d62e8u));
  /* 100c4b80 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4b86u);
  /* 100c4b86 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4b88 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4b8a push 0x100d62d8 */
  push32((uint32_t)(0x100d62d8u));
  /* 100c4b8f call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4b95u);
  /* 100c4b95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4b98 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4b9b jle 0x100c4bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4bf4;
  /* 100c4b9d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 100c4ba1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4ba3 je 0x100c4bf4 */
  if (C.zf) goto L_100c4bf4;
  /* 100c4ba5 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4ba7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c4ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4bab push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c4bb0 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4bb6u);
  /* 100c4bb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4bb9 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4bbc jle 0x100c4bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4bf4;
  /* 100c4bbe push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4bc0 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c4bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4bc4 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c4bc9 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4bcfu);
  /* 100c4bcf push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4bd1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4bd3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4bd5 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c4bda call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4be0u);
  /* 100c4be0 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4be2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c4be4 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4be6 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c4beb call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4bf1u);
  /* 100c4bf1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4bf4:;
  /* 100c4bf4 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 100c4bf8 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100c4bfa je 0x100c4cde */
  if (C.zf) goto L_100c4cde;
  /* 100c4c00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4c02 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4c04 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4c06 push 0x100d38e8 */
  push32((uint32_t)(0x100d38e8u));
  /* 100c4c0b call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4c11u);
  /* 100c4c11 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c4c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4c15 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 100c4c17 push 0x100d6180 */
  push32((uint32_t)(0x100d6180u));
  /* 100c4c1c call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4c22u);
  /* 100c4c22 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c4c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4c26 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c4c28 push 0x100d6298 */
  push32((uint32_t)(0x100d6298u));
  /* 100c4c2d call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4c33u);
  /* 100c4c33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4c35 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c4c37 push 0x100d3650 */
  push32((uint32_t)(0x100d3650u));
  /* 100c4c3c call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4c42u);
  /* 100c4c42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4c44 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c4c46 push 0x100d3728 */
  push32((uint32_t)(0x100d3728u));
  /* 100c4c4b call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4c51u);
  /* 100c4c51 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4c54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4c56 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c4c58 push 0x100d3648 */
  push32((uint32_t)(0x100d3648u));
  /* 100c4c5d call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4c63u);
  /* 100c4c63 push 0x100d61b8 */
  push32((uint32_t)(0x100d61b8u));
  /* 100c4c68 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c4c6eu);
  /* 100c4c6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4c71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4c73 je 0x100c4c89 */
  if (C.zf) goto L_100c4c89;
  /* 100c4c75 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4c77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c4c79 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4c7b push 0x100d6390 */
  push32((uint32_t)(0x100d6390u));
  /* 100c4c80 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4c86u);
  /* 100c4c86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4c89:;
  /* 100c4c89 push 0x100d60d0 */
  push32((uint32_t)(0x100d60d0u));
  /* 100c4c8e call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c4c94u);
  /* 100c4c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4c97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4c99 je 0x100c4caf */
  if (C.zf) goto L_100c4caf;
  /* 100c4c9b push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4c9d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c4c9f push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4ca1 push 0x100d3688 */
  push32((uint32_t)(0x100d3688u));
  /* 100c4ca6 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4cacu);
  /* 100c4cac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4caf:;
  /* 100c4caf call 0x100c4360 */
  push32(0x100c4cb4u); f_100c4360();
L_100c4cb4:;
  /* 100c4cb4 push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c4cb9 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c4cbfu);
  /* 100c4cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4cc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4cc4 je 0x100c4d14 */
  if (C.zf) goto L_100c4d14;
  /* 100c4cc6 push 0x100d6120 */
  push32((uint32_t)(0x100d6120u));
  /* 100c4ccb call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c4cd1u);
  /* 100c4cd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4cd4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4cd6 jne 0x100c4d05 */
  if (!C.zf) goto L_100c4d05;
  /* 100c4cd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4cda push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4cdc jmp 0x100c4d09 */
  goto L_100c4d09;
L_100c4cde:;
  /* 100c4cde push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c4ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4ce2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c4ce4 push 0x100d6180 */
  push32((uint32_t)(0x100d6180u));
  /* 100c4ce9 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4cefu);
  /* 100c4cef push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c4cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4cf3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c4cf5 push 0x100d6298 */
  push32((uint32_t)(0x100d6298u));
  /* 100c4cfa call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4d00u);
  /* 100c4d00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4d03 jmp 0x100c4cb4 */
  goto L_100c4cb4;
L_100c4d05:;
  /* 100c4d05 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4d07 push 4 */
  push32((uint32_t)(0x4u));
L_100c4d09:;
  /* 100c4d09 push 8 */
  push32((uint32_t)(0x8u));
  /* 100c4d0b call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c4d11u);
  /* 100c4d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4d14:;
  /* 100c4d14 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c4d19 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c4d1fu);
  /* 100c4d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c4d24 je 0x100c4d3a */
  if (C.zf) goto L_100c4d3a;
  /* 100c4d26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4d28 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4d2a push 6 */
  push32((uint32_t)(0x6u));
  /* 100c4d2c push 0x100d6210 */
  push32((uint32_t)(0x100d6210u));
  /* 100c4d31 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4d37u);
  /* 100c4d37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4d3a:;
  /* 100c4d3a push 0x100d6110 */
  push32((uint32_t)(0x100d6110u));
  /* 100c4d3f call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c4d45u);
  /* 100c4d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4d48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4d4a je 0x100c4d60 */
  if (C.zf) goto L_100c4d60;
  /* 100c4d4c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4d4e push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4d50 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c4d52 push 0x100d6210 */
  push32((uint32_t)(0x100d6210u));
  /* 100c4d57 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4d5du);
  /* 100c4d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4d60:;
  /* 100c4d60 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100c4d62 je 0x100c4e63 */
  if (C.zf) goto L_100c4e63;
  /* 100c4d68 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c4d6a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c4d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4d6e push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c4d73 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4d79u);
  /* 100c4d79 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c4d7b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c4d7d push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4d7f push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c4d84 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4d8au);
  /* 100c4d8a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c4d8c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c4d8e push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4d90 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c4d95 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4d9bu);
  /* 100c4d9b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c4d9d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100c4d9f push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4da1 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c4da6 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4dacu);
  /* 100c4dac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4daf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c4db1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100c4db3 push 6 */
  push32((uint32_t)(0x6u));
  /* 100c4db5 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c4dba call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4dc0u);
  /* 100c4dc0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4dc2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c4dc4 push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c4dc9 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4dcfu);
  /* 100c4dcf push 0x100d6100 */
  push32((uint32_t)(0x100d6100u));
  /* 100c4dd4 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c4ddau);
  /* 100c4dda add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4ddd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4de0 jle 0x100c4e03 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4e03;
  /* 100c4de2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4de4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4de6 push 0x100d6228 */
  push32((uint32_t)(0x100d6228u));
  /* 100c4deb call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4df1u);
  /* 100c4df1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100c4df3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c4df5 push 0x100d6230 */
  push32((uint32_t)(0x100d6230u));
  /* 100c4dfa call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4e00u);
  /* 100c4e00 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4e03:;
  /* 100c4e03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4e05 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c4e07 push 0x100d6110 */
  push32((uint32_t)(0x100d6110u));
  /* 100c4e0c call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4e12u);
  /* 100c4e12 push 0x100d3928 */
  push32((uint32_t)(0x100d3928u));
  /* 100c4e17 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c4e1du);
  /* 100c4e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4e20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4e22 je 0x100c4e63 */
  if (C.zf) goto L_100c4e63;
  /* 100c4e24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4e26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4e28 push 0x100d6188 */
  push32((uint32_t)(0x100d6188u));
  /* 100c4e2d call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4e33u);
  /* 100c4e33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4e35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4e37 push 0x100d6198 */
  push32((uint32_t)(0x100d6198u));
  /* 100c4e3c call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4e42u);
  /* 100c4e42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4e44 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100c4e46 push 0x100d61a0 */
  push32((uint32_t)(0x100d61a0u));
  /* 100c4e4b call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4e51u);
  /* 100c4e51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100c4e55 push 0x100d6190 */
  push32((uint32_t)(0x100d6190u));
  /* 100c4e5a call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4e60u);
  /* 100c4e60 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4e63:;
  /* 100c4e63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4e65 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100c4e67 push 0x100d37c0 */
  push32((uint32_t)(0x100d37c0u));
  /* 100c4e6c call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4e72u);
  /* 100c4e72 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c4e74 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c4e76 push 0x100d3900 */
  push32((uint32_t)(0x100d3900u));
  /* 100c4e7b call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4e81u);
  /* 100c4e81 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4e83 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4e85 push 0x100d6170 */
  push32((uint32_t)(0x100d6170u));
  /* 100c4e8a call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c4e90u);
  /* 100c4e90 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 100c4e94 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4e97 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4e9c jle 0x100c4eba */
  if ((C.zf||C.sf!=C.of)) goto L_100c4eba;
  /* 100c4e9e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c4ea0 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c4ea2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 100c4ea7 push 0x100d6100 */
  push32((uint32_t)(0x100d6100u));
  /* 100c4eac call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c4eb2u);
  /* 100c4eb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4eb5 call 0x100c4310 */
  push32(0x100c4ebau); f_100c4310();
L_100c4eba:;
  /* 100c4eba push 0x100d3898 */
  push32((uint32_t)(0x100d3898u));
  /* 100c4ebf call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c4ec5u);
  /* 100c4ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c4eca je 0x100c5213 */
  if (C.zf) goto L_100c5213;
  /* 100c4ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c4ed2 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4ed8u);
  /* 100c4ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4eda mov edi, eax */
  EDI = (EAX);
  /* 100c4edc call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4ee2u);
  /* 100c4ee2 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4ee4 mov esi, eax */
  ESI = (EAX);
  /* 100c4ee6 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4eecu);
  /* 100c4eec push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4eee mov ebp, eax */
  EBP = (EAX);
  /* 100c4ef0 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4ef6u);
  /* 100c4ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c4ef8 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100c4efc call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c4f02u);
  /* 100c4f02 mov ebx, eax */
  EBX = (EAX);
  /* 100c4f04 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 100c4f08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4f0b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4f10 jge 0x100c4fa3 */
  if ((C.sf==C.of)) goto L_100c4fa3;
  /* 100c4f16 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4f1c jle 0x100c4f29 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4f29;
  /* 100c4f1e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100c4f23 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4f25 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4f27 jmp 0x100c4f9b */
  goto L_100c4f9b;
L_100c4f29:;
  /* 100c4f29 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4f2f jle 0x100c4f3c */
  if ((C.zf||C.sf!=C.of)) goto L_100c4f3c;
  /* 100c4f31 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 100c4f36 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c4f3a jmp 0x100c4f9b */
  goto L_100c4f9b;
L_100c4f3c:;
  /* 100c4f3c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4f42 jle 0x100c4f4f */
  if ((C.zf||C.sf!=C.of)) goto L_100c4f4f;
  /* 100c4f44 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100c4f49 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 100c4f4d jmp 0x100c4f9b */
  goto L_100c4f9b;
L_100c4f4f:;
  /* 100c4f4f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4f55 jle 0x100c4f62 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4f62;
  /* 100c4f57 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 100c4f5c push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 100c4f60 jmp 0x100c4f9b */
  goto L_100c4f9b;
L_100c4f62:;
  /* 100c4f62 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4f6a jle 0x100c4f77 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4f77;
  /* 100c4f6c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 100c4f71 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4f73 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4f75 jmp 0x100c4f9b */
  goto L_100c4f9b;
L_100c4f77:;
  /* 100c4f77 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4f7d jle 0x100c4f8a */
  if ((C.zf||C.sf!=C.of)) goto L_100c4f8a;
  /* 100c4f7f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 100c4f84 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4f86 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4f88 jmp 0x100c4f9b */
  goto L_100c4f9b;
L_100c4f8a:;
  /* 100c4f8a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4f90 jle 0x100c4fa3 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4fa3;
  /* 100c4f92 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 100c4f97 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4f99 push 1 */
  push32((uint32_t)(0x1u));
L_100c4f9b:;
  /* 100c4f9b call 0x100c2610 */
  push32(0x100c4fa0u); f_100c2610();
  /* 100c4fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4fa3:;
  /* 100c4fa3 push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c4fa8 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c4faeu);
  /* 100c4fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c4fb3 je 0x100c5003 */
  if (C.zf) goto L_100c5003;
  /* 100c4fb5 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4fbb jle 0x100c5003 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5003;
  /* 100c4fbd push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c4fc2 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c4fc8u);
  /* 100c4fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c4fcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c4fcd jne 0x100c5003 */
  if (!C.zf) goto L_100c5003;
  /* 100c4fcf cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4fd5 jle 0x100c4fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_100c4fe8;
  /* 100c4fd7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 100c4fdc push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4fde push 4 */
  push32((uint32_t)(0x4u));
  /* 100c4fe0 call 0x100c2610 */
  push32(0x100c4fe5u); f_100c2610();
  /* 100c4fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c4fe8:;
  /* 100c4fe8 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c4ff0 jle 0x100c5003 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5003;
  /* 100c4ff2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100c4ff7 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c4ff9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c4ffb call 0x100c2610 */
  push32(0x100c5000u); f_100c2610();
  /* 100c5000 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5003:;
  /* 100c5003 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c5005 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c500bu);
  /* 100c500b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c500e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5013 jle 0x100c5026 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5026;
  /* 100c5015 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100c501a push 1 */
  push32((uint32_t)(0x1u));
  /* 100c501c push 2 */
  push32((uint32_t)(0x2u));
  /* 100c501e call 0x100c2610 */
  push32(0x100c5023u); f_100c2610();
  /* 100c5023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5026:;
  /* 100c5026 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c5028 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c502eu);
  /* 100c502e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5031 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5036 jle 0x100c5049 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5049;
  /* 100c5038 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 100c503d push 1 */
  push32((uint32_t)(0x1u));
  /* 100c503f push 0 */
  push32((uint32_t)(0x0u));
  /* 100c5041 call 0x100c2610 */
  push32(0x100c5046u); f_100c2610();
  /* 100c5046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5049:;
  /* 100c5049 push 0x100d6208 */
  push32((uint32_t)(0x100d6208u));
  /* 100c504e call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5054u);
  /* 100c5054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5059 je 0x100c51e0 */
  if (C.zf) goto L_100c51e0;
  /* 100c505f push 0x100d61d8 */
  push32((uint32_t)(0x100d61d8u));
  /* 100c5064 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c506au);
  /* 100c506a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c506d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c506f jne 0x100c51e0 */
  if (!C.zf) goto L_100c51e0;
  /* 100c5075 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c5077 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c507du);
  /* 100c507d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5080 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5085 jle 0x100c5140 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5140;
  /* 100c508b push 0 */
  push32((uint32_t)(0x0u));
  /* 100c508d call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c5093u);
  /* 100c5093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5098 je 0x100c5140 */
  if (C.zf) goto L_100c5140;
  /* 100c509e push 1 */
  push32((uint32_t)(0x1u));
  /* 100c50a0 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c50a6u);
  /* 100c50a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c50a9 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c50ae jge 0x100c5140 */
  if ((C.sf==C.of)) goto L_100c5140;
  /* 100c50b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c50b6 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c50bcu);
  /* 100c50bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c50bf cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c50c4 jle 0x100c50d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100c50d7;
  /* 100c50c6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100c50cb push 1 */
  push32((uint32_t)(0x1u));
  /* 100c50cd push 5 */
  push32((uint32_t)(0x5u));
  /* 100c50cf call 0x100c2610 */
  push32(0x100c50d4u); f_100c2610();
  /* 100c50d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c50d7:;
  /* 100c50d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c50d9 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c50dfu);
  /* 100c50df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c50e2 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c50e7 jle 0x100c50fa */
  if ((C.zf||C.sf!=C.of)) goto L_100c50fa;
  /* 100c50e9 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 100c50ee push 1 */
  push32((uint32_t)(0x1u));
  /* 100c50f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c50f2 call 0x100c2610 */
  push32(0x100c50f7u); f_100c2610();
  /* 100c50f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c50fa:;
  /* 100c50fa push 2 */
  push32((uint32_t)(0x2u));
  /* 100c50fc call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c5102u);
  /* 100c5102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5105 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c510a jle 0x100c511d */
  if ((C.zf||C.sf!=C.of)) goto L_100c511d;
  /* 100c510c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 100c5111 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5113 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c5115 call 0x100c2610 */
  push32(0x100c511au); f_100c2610();
  /* 100c511a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c511d:;
  /* 100c511d push 3 */
  push32((uint32_t)(0x3u));
  /* 100c511f call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c5125u);
  /* 100c5125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5128 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c512d jle 0x100c5140 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5140;
  /* 100c512f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 100c5134 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5136 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c5138 call 0x100c2610 */
  push32(0x100c513du); f_100c2610();
  /* 100c513d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5140:;
  /* 100c5140 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c5142 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c5148u);
  /* 100c5148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c514b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5150 jle 0x100c51e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100c51e0;
  /* 100c5156 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5158 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c515eu);
  /* 100c515e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5163 je 0x100c51e0 */
  if (C.zf) goto L_100c51e0;
  /* 100c5165 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5167 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c516du);
  /* 100c516d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5170 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5175 jle 0x100c51e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100c51e0;
  /* 100c5177 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c5179 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c517fu);
  /* 100c517f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5182 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5187 jle 0x100c519a */
  if ((C.zf||C.sf!=C.of)) goto L_100c519a;
  /* 100c5189 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100c518e push 4 */
  push32((uint32_t)(0x4u));
  /* 100c5190 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c5192 call 0x100c2610 */
  push32(0x100c5197u); f_100c2610();
  /* 100c5197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c519a:;
  /* 100c519a push 2 */
  push32((uint32_t)(0x2u));
  /* 100c519c call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c51a2u);
  /* 100c51a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c51a5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c51aa jle 0x100c51bd */
  if ((C.zf||C.sf!=C.of)) goto L_100c51bd;
  /* 100c51ac push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 100c51b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c51b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c51b5 call 0x100c2610 */
  push32(0x100c51bau); f_100c2610();
  /* 100c51ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c51bd:;
  /* 100c51bd push 3 */
  push32((uint32_t)(0x3u));
  /* 100c51bf call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c51c5u);
  /* 100c51c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c51c8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c51cd jle 0x100c51e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100c51e0;
  /* 100c51cf push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 100c51d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c51d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c51d8 call 0x100c2610 */
  push32(0x100c51ddu); f_100c2610();
  /* 100c51dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c51e0:;
  /* 100c51e0 call dword ptr [0x100d6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6520))), 0x100c51e6u);
  /* 100c51e6 mov ecx, dword ptr [eax*4 + 0x100d662c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x100d662c)));
  /* 100c51ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100c51ef jne 0x100c5213 */
  if (!C.zf) goto L_100c5213;
  /* 100c51f1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100c51f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c51f8 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c51fa call 0x100c2610 */
  push32(0x100c51ffu); f_100c2610();
  /* 100c51ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5202 call dword ptr [0x100d6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6520))), 0x100c5208u);
  /* 100c5208 mov dword ptr [eax*4 + 0x100d662c], 1 */
  w32((uint32_t)(EAX*4 + 0x100d662c), (0x1u));
L_100c5213:;
  /* 100c5213 pop edi */
  EDI = (pop32());
  /* 100c5214 pop esi */
  ESI = (pop32());
  /* 100c5215 pop ebp */
  EBP = (pop32());
  /* 100c5216 pop ebx */
  EBX = (pop32());
  /* 100c5217 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c521a ret  */
  ESPCHK(0x100c43e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005220 @ 0x100c5220 (72 bytes, 22 insns) */
void f_100c5220(void) {
  FTRACE(0x100c5220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c5220 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5222 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5224 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5226 push 0x100d5ff8 */
  push32((uint32_t)(0x100d5ff8u));
  /* 100c522b call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5231u);
  /* 100c5231 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5233 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5235 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5237 push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c523c call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5242u);
  /* 100c5242 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5244 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5246 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5248 push 0x100d5ff0 */
  push32((uint32_t)(0x100d5ff0u));
  /* 100c524d call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5253u);
  /* 100c5253 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5257 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5259 push 0x100d3898 */
  push32((uint32_t)(0x100d3898u));
  /* 100c525e call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5264u);
  /* 100c5264 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5267 ret  */
  ESPCHK(0x100c5220u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x100c5270 (55 bytes, 16 insns) */
void f_100c5270(void) {
  FTRACE(0x100c5270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c5270 cmp dword ptr [esp + 4], 0x100d36a8 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x100d36a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5278 jne 0x100c52a4 */
  if (!C.zf) goto L_100c52a4;
  /* 100c527a push 0x100d6360 */
  push32((uint32_t)(0x100d6360u));
  /* 100c527f call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c5285u);
  /* 100c5285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5288 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c528a je 0x100c52a4 */
  if (C.zf) goto L_100c52a4;
  /* 100c528c push 0x100d62a8 */
  push32((uint32_t)(0x100d62a8u));
  /* 100c5291 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c5297u);
  /* 100c5297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c529a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c529c je 0x100c52a4 */
  if (C.zf) goto L_100c52a4;
  /* 100c529e mov eax, 1 */
  EAX = (0x1u);
  /* 100c52a3 ret  */
  ESPCHK(0x100c5270u, _esp0);
  ESP += 4; return;
L_100c52a4:;
  /* 100c52a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c52a6 ret  */
  ESPCHK(0x100c5270u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x100c52b0 (2008 bytes, 535 insns) */
void f_100c52b0(void) {
  FTRACE(0x100c52b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c52b0 push 0x100d6298 */
  push32((uint32_t)(0x100d6298u));
  /* 100c52b5 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c52bbu);
  /* 100c52bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c52be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c52c0 jne 0x100c52d4 */
  if (!C.zf) goto L_100c52d4;
  /* 100c52c2 push 0x100d38e8 */
  push32((uint32_t)(0x100d38e8u));
  /* 100c52c7 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c52cdu);
  /* 100c52cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c52d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c52d2 je 0x100c5304 */
  if (C.zf) goto L_100c5304;
L_100c52d4:;
  /* 100c52d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c52d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c52d8 push 0x100d3970 */
  push32((uint32_t)(0x100d3970u));
  /* 100c52dd call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c52e3u);
  /* 100c52e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c52e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c52e7 push 0x100d6218 */
  push32((uint32_t)(0x100d6218u));
  /* 100c52ec call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c52f2u);
  /* 100c52f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c52f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c52f6 push 0x100d6220 */
  push32((uint32_t)(0x100d6220u));
  /* 100c52fb call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5301u);
  /* 100c5301 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5304:;
  /* 100c5304 push 0x100d63d0 */
  push32((uint32_t)(0x100d63d0u));
  /* 100c5309 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c530fu);
  /* 100c530f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5312 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5315 jg 0x100c533f */
  if ((!C.zf&&C.sf==C.of)) goto L_100c533f;
  /* 100c5317 push 0x100d6350 */
  push32((uint32_t)(0x100d6350u));
  /* 100c531c call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5322u);
  /* 100c5322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5325 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5328 jg 0x100c533f */
  if ((!C.zf&&C.sf==C.of)) goto L_100c533f;
  /* 100c532a push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c532f call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5335u);
  /* 100c5335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5338 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c533d jle 0x100c539d */
  if ((C.zf||C.sf!=C.of)) goto L_100c539d;
L_100c533f:;
  /* 100c533f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5341 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c5343 push 0x100d3648 */
  push32((uint32_t)(0x100d3648u));
  /* 100c5348 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c534eu);
  /* 100c534e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5350 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c5352 push 0x100d3650 */
  push32((uint32_t)(0x100d3650u));
  /* 100c5357 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c535du);
  /* 100c535d push 0x100d63d0 */
  push32((uint32_t)(0x100d63d0u));
  /* 100c5362 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5368u);
  /* 100c5368 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c536b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5370 jg 0x100c538b */
  if ((!C.zf&&C.sf==C.of)) goto L_100c538b;
  /* 100c5372 push 0x100d6350 */
  push32((uint32_t)(0x100d6350u));
  /* 100c5377 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c537du);
  /* 100c537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5380 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5383 jg 0x100c538b */
  if ((!C.zf&&C.sf==C.of)) goto L_100c538b;
  /* 100c5385 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5387 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100c5389 jmp 0x100c538f */
  goto L_100c538f;
L_100c538b:;
  /* 100c538b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c538d push 0x5f */
  push32((uint32_t)(0x5fu));
L_100c538f:;
  /* 100c538f push 0x100d3728 */
  push32((uint32_t)(0x100d3728u));
  /* 100c5394 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c539au);
  /* 100c539a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c539d:;
  /* 100c539d push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c53a2 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c53a8u);
  /* 100c53a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c53ab cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c53ae jle 0x100c5463 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5463;
  /* 100c53b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c53b6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c53b8 push 0x100d6370 */
  push32((uint32_t)(0x100d6370u));
  /* 100c53bd call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c53c3u);
  /* 100c53c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c53c5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100c53c7 push 0x100d6378 */
  push32((uint32_t)(0x100d6378u));
  /* 100c53cc call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c53d2u);
  /* 100c53d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c53d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c53d6 push 0x100d6360 */
  push32((uint32_t)(0x100d6360u));
  /* 100c53db call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c53e1u);
  /* 100c53e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c53e3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c53e5 push 0x100d62b8 */
  push32((uint32_t)(0x100d62b8u));
  /* 100c53ea call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c53f0u);
  /* 100c53f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c53f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100c53f4 push 0x100d62a0 */
  push32((uint32_t)(0x100d62a0u));
  /* 100c53f9 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c53ffu);
  /* 100c53ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5401 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5403 push 0x100d62a8 */
  push32((uint32_t)(0x100d62a8u));
  /* 100c5408 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c540eu);
  /* 100c540e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5411 push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c5416 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c541cu);
  /* 100c541c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c541f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5422 jle 0x100c5463 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5463;
  /* 100c5424 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5426 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5428 push 0x100d6368 */
  push32((uint32_t)(0x100d6368u));
  /* 100c542d call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5433u);
  /* 100c5433 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5435 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5437 push 0x100d6380 */
  push32((uint32_t)(0x100d6380u));
  /* 100c543c call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5442u);
  /* 100c5442 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5444 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5446 push 0x100d62c0 */
  push32((uint32_t)(0x100d62c0u));
  /* 100c544b call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5451u);
  /* 100c5451 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5453 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5455 push 0x100d62c8 */
  push32((uint32_t)(0x100d62c8u));
  /* 100c545a call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5460u);
  /* 100c5460 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5463:;
  /* 100c5463 push 0x100d6100 */
  push32((uint32_t)(0x100d6100u));
  /* 100c5468 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c546eu);
  /* 100c546e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5471 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5474 jle 0x100c550b */
  if ((C.zf||C.sf!=C.of)) goto L_100c550b;
  /* 100c547a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c547c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c547e push 0x100d3930 */
  push32((uint32_t)(0x100d3930u));
  /* 100c5483 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5489u);
  /* 100c5489 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c548b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c548d push 0x100d3938 */
  push32((uint32_t)(0x100d3938u));
  /* 100c5492 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5498u);
  /* 100c5498 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c549a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c549c push 0x100d3928 */
  push32((uint32_t)(0x100d3928u));
  /* 100c54a1 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c54a7u);
  /* 100c54a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c54a9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c54ab push 0x100d5f98 */
  push32((uint32_t)(0x100d5f98u));
  /* 100c54b0 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c54b6u);
  /* 100c54b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c54b8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c54ba push 0x100d5f88 */
  push32((uint32_t)(0x100d5f88u));
  /* 100c54bf call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c54c5u);
  /* 100c54c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c54c7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c54c9 push 0x100d5f90 */
  push32((uint32_t)(0x100d5f90u));
  /* 100c54ce call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c54d4u);
  /* 100c54d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c54d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c54d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c54db push 0x100d6228 */
  push32((uint32_t)(0x100d6228u));
  /* 100c54e0 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c54e6u);
  /* 100c54e6 push 0x100d6100 */
  push32((uint32_t)(0x100d6100u));
  /* 100c54eb call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c54f1u);
  /* 100c54f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c54f4 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c54f7 jle 0x100c550b */
  if ((C.zf||C.sf!=C.of)) goto L_100c550b;
  /* 100c54f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c54fb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c54fd push 0x100d6230 */
  push32((uint32_t)(0x100d6230u));
  /* 100c5502 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5508u);
  /* 100c5508 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c550b:;
  /* 100c550b push 0x100d3720 */
  push32((uint32_t)(0x100d3720u));
  /* 100c5510 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5516u);
  /* 100c5516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5519 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c551c jle 0x100c553f */
  if ((C.zf||C.sf!=C.of)) goto L_100c553f;
  /* 100c551e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5520 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5522 push 0x100d6280 */
  push32((uint32_t)(0x100d6280u));
  /* 100c5527 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c552du);
  /* 100c552d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c552f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5531 push 0x100d5fe8 */
  push32((uint32_t)(0x100d5fe8u));
  /* 100c5536 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c553cu);
  /* 100c553c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c553f:;
  /* 100c553f push 0x100d63d0 */
  push32((uint32_t)(0x100d63d0u));
  /* 100c5544 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c554au);
  /* 100c554a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c554d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5550 jle 0x100c5623 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5623;
  /* 100c5556 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5558 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c555a push 0x100d6150 */
  push32((uint32_t)(0x100d6150u));
  /* 100c555f call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5565u);
  /* 100c5565 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5567 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100c5569 push 0x100d6148 */
  push32((uint32_t)(0x100d6148u));
  /* 100c556e call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5574u);
  /* 100c5574 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5576 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5578 push 0x100d6140 */
  push32((uint32_t)(0x100d6140u));
  /* 100c557d call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5583u);
  /* 100c5583 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5585 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c5587 push 0x100d6038 */
  push32((uint32_t)(0x100d6038u));
  /* 100c558c call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5592u);
  /* 100c5592 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5594 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100c5596 push 0x100d6030 */
  push32((uint32_t)(0x100d6030u));
  /* 100c559b call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c55a1u);
  /* 100c55a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c55a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c55a5 push 0x100d6028 */
  push32((uint32_t)(0x100d6028u));
  /* 100c55aa call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c55b0u);
  /* 100c55b0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c55b3 push 0x100d63d0 */
  push32((uint32_t)(0x100d63d0u));
  /* 100c55b8 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c55beu);
  /* 100c55be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c55c1 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c55c4 jle 0x100c5623 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5623;
  /* 100c55c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c55c8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c55ca push 0x100d6138 */
  push32((uint32_t)(0x100d6138u));
  /* 100c55cf call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c55d5u);
  /* 100c55d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c55d7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c55d9 push 0x100d6128 */
  push32((uint32_t)(0x100d6128u));
  /* 100c55de call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c55e4u);
  /* 100c55e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c55e6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c55e8 push 0x100d6178 */
  push32((uint32_t)(0x100d6178u));
  /* 100c55ed call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c55f3u);
  /* 100c55f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c55f5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c55f7 push 0x100d6020 */
  push32((uint32_t)(0x100d6020u));
  /* 100c55fc call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5602u);
  /* 100c5602 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5604 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c5606 push 0x100d6018 */
  push32((uint32_t)(0x100d6018u));
  /* 100c560b call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5611u);
  /* 100c5611 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5613 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c5615 push 0x100d6010 */
  push32((uint32_t)(0x100d6010u));
  /* 100c561a call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5620u);
  /* 100c5620 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5623:;
  /* 100c5623 push 0x100d6350 */
  push32((uint32_t)(0x100d6350u));
  /* 100c5628 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c562eu);
  /* 100c562e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5631 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5634 jle 0x100c5706 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5706;
  /* 100c563a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c563c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c563e push 0x100d3768 */
  push32((uint32_t)(0x100d3768u));
  /* 100c5643 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5649u);
  /* 100c5649 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c564b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c564d push 0x100d3760 */
  push32((uint32_t)(0x100d3760u));
  /* 100c5652 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5658u);
  /* 100c5658 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c565a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c565c push 0x100d3758 */
  push32((uint32_t)(0x100d3758u));
  /* 100c5661 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5667u);
  /* 100c5667 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5669 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c566b push 0x100d36d8 */
  push32((uint32_t)(0x100d36d8u));
  /* 100c5670 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5676u);
  /* 100c5676 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5678 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c567a push 0x100d36d0 */
  push32((uint32_t)(0x100d36d0u));
  /* 100c567f call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5685u);
  /* 100c5685 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5687 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c5689 push 0x100d36c8 */
  push32((uint32_t)(0x100d36c8u));
  /* 100c568e call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5694u);
  /* 100c5694 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5697 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5699 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c569b push 0x100d36c0 */
  push32((uint32_t)(0x100d36c0u));
  /* 100c56a0 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c56a6u);
  /* 100c56a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c56a8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c56aa push 0x100d3698 */
  push32((uint32_t)(0x100d3698u));
  /* 100c56af call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c56b5u);
  /* 100c56b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c56b7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c56b9 push 0x100d3690 */
  push32((uint32_t)(0x100d3690u));
  /* 100c56be call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c56c4u);
  /* 100c56c4 push 0x100d3690 */
  push32((uint32_t)(0x100d3690u));
  /* 100c56c9 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c56cfu);
  /* 100c56cf add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c56d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c56d4 je 0x100c5706 */
  if (C.zf) goto L_100c5706;
  /* 100c56d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c56d8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c56da push 0x100d3740 */
  push32((uint32_t)(0x100d3740u));
  /* 100c56df call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c56e5u);
  /* 100c56e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c56e7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c56e9 push 0x100d3738 */
  push32((uint32_t)(0x100d3738u));
  /* 100c56ee call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c56f4u);
  /* 100c56f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c56f6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c56f8 push 0x100d3730 */
  push32((uint32_t)(0x100d3730u));
  /* 100c56fd call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5703u);
  /* 100c5703 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5706:;
  /* 100c5706 push 0x100d36b0 */
  push32((uint32_t)(0x100d36b0u));
  /* 100c570b call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5711u);
  /* 100c5711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5714 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5717 jle 0x100c579f */
  if ((C.zf||C.sf!=C.of)) goto L_100c579f;
  /* 100c571d push 0x100d36a0 */
  push32((uint32_t)(0x100d36a0u));
  /* 100c5722 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5728u);
  /* 100c5728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c572b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c572e jge 0x100c579f */
  if ((C.sf==C.of)) goto L_100c579f;
  /* 100c5730 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5732 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c5734 push 0x100d3920 */
  push32((uint32_t)(0x100d3920u));
  /* 100c5739 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c573fu);
  /* 100c573f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5741 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100c5743 push 0x100d3918 */
  push32((uint32_t)(0x100d3918u));
  /* 100c5748 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c574eu);
  /* 100c574e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5750 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5752 push 0x100d3910 */
  push32((uint32_t)(0x100d3910u));
  /* 100c5757 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c575du);
  /* 100c575d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c575f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c5761 push 0x100d38d8 */
  push32((uint32_t)(0x100d38d8u));
  /* 100c5766 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c576cu);
  /* 100c576c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c576e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c5770 push 0x100d38d0 */
  push32((uint32_t)(0x100d38d0u));
  /* 100c5775 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c577bu);
  /* 100c577b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c577d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c577f push 0x100d38c8 */
  push32((uint32_t)(0x100d38c8u));
  /* 100c5784 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c578au);
  /* 100c578a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c578d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c578f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5791 push 0x100d6228 */
  push32((uint32_t)(0x100d6228u));
  /* 100c5796 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c579cu);
  /* 100c579c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c579f:;
  /* 100c579f push 0x100d36a0 */
  push32((uint32_t)(0x100d36a0u));
  /* 100c57a4 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c57aau);
  /* 100c57aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c57ad cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c57b0 jle 0x100c5891 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5891;
  /* 100c57b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c57b8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c57ba push 0x100d3678 */
  push32((uint32_t)(0x100d3678u));
  /* 100c57bf call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c57c5u);
  /* 100c57c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c57c7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100c57c9 push 0x100d3670 */
  push32((uint32_t)(0x100d3670u));
  /* 100c57ce call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c57d4u);
  /* 100c57d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c57d6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c57d8 push 0x100d3668 */
  push32((uint32_t)(0x100d3668u));
  /* 100c57dd call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c57e3u);
  /* 100c57e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c57e5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c57e7 push 0x100d6338 */
  push32((uint32_t)(0x100d6338u));
  /* 100c57ec call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c57f2u);
  /* 100c57f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c57f4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c57f6 push 0x100d6330 */
  push32((uint32_t)(0x100d6330u));
  /* 100c57fb call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5801u);
  /* 100c5801 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5803 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100c5805 push 0x100d6328 */
  push32((uint32_t)(0x100d6328u));
  /* 100c580a call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5810u);
  /* 100c5810 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5813 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5815 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c5817 push 0x100d63b0 */
  push32((uint32_t)(0x100d63b0u));
  /* 100c581c call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5822u);
  /* 100c5822 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5824 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100c5826 push 0x100d63a8 */
  push32((uint32_t)(0x100d63a8u));
  /* 100c582b call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5831u);
  /* 100c5831 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5833 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c5835 push 0x100d63f8 */
  push32((uint32_t)(0x100d63f8u));
  /* 100c583a call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5840u);
  /* 100c5840 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5842 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100c5844 push 0x100d63f0 */
  push32((uint32_t)(0x100d63f0u));
  /* 100c5849 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c584fu);
  /* 100c584f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5851 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100c5853 push 0x100d63e8 */
  push32((uint32_t)(0x100d63e8u));
  /* 100c5858 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c585eu);
  /* 100c585e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5860 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100c5862 push 0x100d63e0 */
  push32((uint32_t)(0x100d63e0u));
  /* 100c5867 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c586du);
  /* 100c586d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5870 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5872 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5874 push 0x100d6228 */
  push32((uint32_t)(0x100d6228u));
  /* 100c5879 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c587fu);
  /* 100c587f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5881 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5883 push 0x100d6230 */
  push32((uint32_t)(0x100d6230u));
  /* 100c5888 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c588eu);
  /* 100c588e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5891:;
  /* 100c5891 push 0x100d5fa0 */
  push32((uint32_t)(0x100d5fa0u));
  /* 100c5896 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c589cu);
  /* 100c589c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c589f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c58a2 jle 0x100c5a00 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5a00;
  /* 100c58a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c58aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c58ac push 0x100d3700 */
  push32((uint32_t)(0x100d3700u));
  /* 100c58b1 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c58b7u);
  /* 100c58b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c58b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c58bb push 0x100d3708 */
  push32((uint32_t)(0x100d3708u));
  /* 100c58c0 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c58c6u);
  /* 100c58c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c58c8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c58ca push 0x100d3710 */
  push32((uint32_t)(0x100d3710u));
  /* 100c58cf call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c58d5u);
  /* 100c58d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c58d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c58d9 push 0x100d3718 */
  push32((uint32_t)(0x100d3718u));
  /* 100c58de call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c58e4u);
  /* 100c58e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c58e6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c58e8 push 0x100d36e0 */
  push32((uint32_t)(0x100d36e0u));
  /* 100c58ed call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c58f3u);
  /* 100c58f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c58f5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c58f7 push 0x100d36f0 */
  push32((uint32_t)(0x100d36f0u));
  /* 100c58fc call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5902u);
  /* 100c5902 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5905 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5907 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5909 push 0x100d37a8 */
  push32((uint32_t)(0x100d37a8u));
  /* 100c590e call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5914u);
  /* 100c5914 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5916 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5918 push 0x100d37b0 */
  push32((uint32_t)(0x100d37b0u));
  /* 100c591d call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5923u);
  /* 100c5923 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5925 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5927 push 0x100d37b8 */
  push32((uint32_t)(0x100d37b8u));
  /* 100c592c call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5932u);
  /* 100c5932 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5934 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5936 push 0x100d3790 */
  push32((uint32_t)(0x100d3790u));
  /* 100c593b call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5941u);
  /* 100c5941 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5945 push 0x100d3798 */
  push32((uint32_t)(0x100d3798u));
  /* 100c594a call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5950u);
  /* 100c5950 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5952 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5954 push 0x100d37a0 */
  push32((uint32_t)(0x100d37a0u));
  /* 100c5959 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c595fu);
  /* 100c595f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5962 push 0x100d5fa0 */
  push32((uint32_t)(0x100d5fa0u));
  /* 100c5967 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c596du);
  /* 100c596d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5970 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5973 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5975 jle 0x100c598a */
  if ((C.zf||C.sf!=C.of)) goto L_100c598a;
  /* 100c5977 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5979 push 0x100d6048 */
  push32((uint32_t)(0x100d6048u));
  /* 100c597e call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5984u);
  /* 100c5984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5986 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5988 jmp 0x100c599b */
  goto L_100c599b;
L_100c598a:;
  /* 100c598a push 0xf */
  push32((uint32_t)(0xfu));
  /* 100c598c push 0x100d6048 */
  push32((uint32_t)(0x100d6048u));
  /* 100c5991 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5997u);
  /* 100c5997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5999 push 0xf */
  push32((uint32_t)(0xfu));
L_100c599b:;
  /* 100c599b push 0x100d60a8 */
  push32((uint32_t)(0x100d60a8u));
  /* 100c59a0 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c59a6u);
  /* 100c59a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c59a9 push 0x100d6048 */
  push32((uint32_t)(0x100d6048u));
  /* 100c59ae call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c59b4u);
  /* 100c59b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c59b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c59b9 je 0x100c59df */
  if (C.zf) goto L_100c59df;
  /* 100c59bb push 0x100d60a8 */
  push32((uint32_t)(0x100d60a8u));
  /* 100c59c0 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c59c6u);
  /* 100c59c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c59c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c59cb je 0x100c59df */
  if (C.zf) goto L_100c59df;
  /* 100c59cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c59cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c59d1 push 0x100d60a0 */
  push32((uint32_t)(0x100d60a0u));
  /* 100c59d6 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c59dcu);
  /* 100c59dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c59df:;
  /* 100c59df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c59e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c59e3 push 0x100d6228 */
  push32((uint32_t)(0x100d6228u));
  /* 100c59e8 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c59eeu);
  /* 100c59ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c59f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c59f2 push 0x100d6230 */
  push32((uint32_t)(0x100d6230u));
  /* 100c59f7 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c59fdu);
  /* 100c59fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5a00:;
  /* 100c5a00 push 0x100d6328 */
  push32((uint32_t)(0x100d6328u));
  /* 100c5a05 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c5a0bu);
  /* 100c5a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5a0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c5a10 je 0x100c5a87 */
  if (C.zf) goto L_100c5a87;
  /* 100c5a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5a14 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5a16 push 0x100d6190 */
  push32((uint32_t)(0x100d6190u));
  /* 100c5a1b call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5a21u);
  /* 100c5a21 push 0x100d6190 */
  push32((uint32_t)(0x100d6190u));
  /* 100c5a26 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c5a2cu);
  /* 100c5a2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5a2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c5a31 je 0x100c5a87 */
  if (C.zf) goto L_100c5a87;
  /* 100c5a33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5a35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5a37 push 0x100d61a0 */
  push32((uint32_t)(0x100d61a0u));
  /* 100c5a3c call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5a42u);
  /* 100c5a42 push 0x100d61a0 */
  push32((uint32_t)(0x100d61a0u));
  /* 100c5a47 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c5a4du);
  /* 100c5a4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5a50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c5a52 je 0x100c5a87 */
  if (C.zf) goto L_100c5a87;
  /* 100c5a54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5a56 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5a58 push 0x100d6198 */
  push32((uint32_t)(0x100d6198u));
  /* 100c5a5d call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5a63u);
  /* 100c5a63 push 0x100d6198 */
  push32((uint32_t)(0x100d6198u));
  /* 100c5a68 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c5a6eu);
  /* 100c5a6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5a71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c5a73 je 0x100c5a87 */
  if (C.zf) goto L_100c5a87;
  /* 100c5a75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5a77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5a79 push 0x100d6188 */
  push32((uint32_t)(0x100d6188u));
  /* 100c5a7e call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5a84u);
  /* 100c5a84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5a87:;
  /* 100c5a87 ret  */
  ESPCHK(0x100c52b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x100c5a90 (305 bytes, 86 insns) */
void f_100c5a90(void) {
  FTRACE(0x100c5a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c5a90 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5a92 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c5a94 push 0x100d6398 */
  push32((uint32_t)(0x100d6398u));
  /* 100c5a99 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5a9fu);
  /* 100c5a9f push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c5aa4 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5aaau);
  /* 100c5aaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5aaf je 0x100c5ac3 */
  if (C.zf) goto L_100c5ac3;
  /* 100c5ab1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5ab3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5ab5 push 0x100d3680 */
  push32((uint32_t)(0x100d3680u));
  /* 100c5aba call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5ac0u);
  /* 100c5ac0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5ac3:;
  /* 100c5ac3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5ac5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5ac7 push 0x100d6098 */
  push32((uint32_t)(0x100d6098u));
  /* 100c5acc call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5ad2u);
  /* 100c5ad2 push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c5ad7 call 0x100c5270 */
  push32(0x100c5adcu); f_100c5270();
  /* 100c5adc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5ae1 jne 0x100c5af1 */
  if (!C.zf) goto L_100c5af1;
  /* 100c5ae3 mov eax, dword ptr [0x100d5f78] */
  EAX = (r32((uint32_t)(0x100d5f78)));
  /* 100c5ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5aea je 0x100c5b03 */
  if (C.zf) goto L_100c5b03;
  /* 100c5aec cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5aef je 0x100c5b03 */
  if (C.zf) goto L_100c5b03;
L_100c5af1:;
  /* 100c5af1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5af3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100c5af5 push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c5afa call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5b00u);
  /* 100c5b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5b03:;
  /* 100c5b03 push 0x100d6008 */
  push32((uint32_t)(0x100d6008u));
  /* 100c5b08 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5b0eu);
  /* 100c5b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5b13 je 0x100c5b27 */
  if (C.zf) goto L_100c5b27;
  /* 100c5b15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5b17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5b19 push 0x100d6060 */
  push32((uint32_t)(0x100d6060u));
  /* 100c5b1e call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5b24u);
  /* 100c5b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5b27:;
  /* 100c5b27 push 0x100d6170 */
  push32((uint32_t)(0x100d6170u));
  /* 100c5b2c call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c5b32u);
  /* 100c5b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5b35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c5b37 je 0x100c5b4b */
  if (C.zf) goto L_100c5b4b;
  /* 100c5b39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5b3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5b3d push 0x100d6050 */
  push32((uint32_t)(0x100d6050u));
  /* 100c5b42 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5b48u);
  /* 100c5b48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5b4b:;
  /* 100c5b4b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5b4d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 100c5b4f push 0x100d6170 */
  push32((uint32_t)(0x100d6170u));
  /* 100c5b54 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5b5au);
  /* 100c5b5a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5b5c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 100c5b5e push 0x100d6120 */
  push32((uint32_t)(0x100d6120u));
  /* 100c5b63 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5b69u);
  /* 100c5b69 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c5b6e call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5b74u);
  /* 100c5b74 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5b79 je 0x100c5b8d */
  if (C.zf) goto L_100c5b8d;
  /* 100c5b7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5b7d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 100c5b7f push 0x100d61d8 */
  push32((uint32_t)(0x100d61d8u));
  /* 100c5b84 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5b8au);
  /* 100c5b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5b8d:;
  /* 100c5b8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5b8f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 100c5b91 push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c5b96 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5b9cu);
  /* 100c5b9c push 0x100d6278 */
  push32((uint32_t)(0x100d6278u));
  /* 100c5ba1 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5ba7u);
  /* 100c5ba7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5bac je 0x100c5bc0 */
  if (C.zf) goto L_100c5bc0;
  /* 100c5bae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5bb0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5bb2 push 0x100d3900 */
  push32((uint32_t)(0x100d3900u));
  /* 100c5bb7 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c5bbdu);
  /* 100c5bbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5bc0:;
  /* 100c5bc0 ret  */
  ESPCHK(0x100c5a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x100c5bd0 (536 bytes, 150 insns) */
void f_100c5bd0(void) {
  FTRACE(0x100c5bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c5bd0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5bd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5bd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c5bd6 push 0x100d6278 */
  push32((uint32_t)(0x100d6278u));
  /* 100c5bdb call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5be1u);
  /* 100c5be1 push 0x100d6008 */
  push32((uint32_t)(0x100d6008u));
  /* 100c5be6 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c5becu);
  /* 100c5bec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5bf1 je 0x100c5c18 */
  if (C.zf) goto L_100c5c18;
  /* 100c5bf3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5bf5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c5bf9 push 0x100d5ff8 */
  push32((uint32_t)(0x100d5ff8u));
  /* 100c5bfe call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5c04u);
  /* 100c5c04 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5c06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5c08 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c5c0a push 0x100d5ff0 */
  push32((uint32_t)(0x100d5ff0u));
  /* 100c5c0f call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5c15u);
  /* 100c5c15 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5c18:;
  /* 100c5c18 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5c1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5c1e push 0x100d5ff8 */
  push32((uint32_t)(0x100d5ff8u));
  /* 100c5c23 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5c29u);
  /* 100c5c29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5c2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5c2d push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5c2f push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c5c34 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5c3au);
  /* 100c5c3a mov eax, dword ptr [0x100d62d4] */
  EAX = (r32((uint32_t)(0x100d62d4)));
  /* 100c5c3f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5c42 mov ecx, dword ptr [eax*4 + 0x100d5fb8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x100d5fb8)));
  /* 100c5c49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100c5c4b jne 0x100c5c68 */
  if (!C.zf) goto L_100c5c68;
  /* 100c5c4d call 0x100c5220 */
  push32(0x100c5c52u); f_100c5220();
  /* 100c5c52 push 0x100d3898 */
  push32((uint32_t)(0x100d3898u));
  /* 100c5c57 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c5c5du);
  /* 100c5c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5c62 je 0x100c5de7 */
  if (C.zf) goto L_100c5de7;
L_100c5c68:;
  /* 100c5c68 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5c6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5c6c push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5c6e push 0x100d6208 */
  push32((uint32_t)(0x100d6208u));
  /* 100c5c73 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5c79u);
  /* 100c5c79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5c7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 100c5c7f push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c5c84 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5c8au);
  /* 100c5c8a push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c5c8f call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c5c95u);
  /* 100c5c95 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5c98 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5c9b jge 0x100c5caa */
  if ((C.sf==C.of)) goto L_100c5caa;
  /* 100c5c9d call 0x100c2670 */
  push32(0x100c5ca2u); f_100c2670();
  /* 100c5ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5ca4 jne 0x100c5de7 */
  if (!C.zf) goto L_100c5de7;
L_100c5caa:;
  /* 100c5caa push esi */
  push32((uint32_t)(ESI));
  /* 100c5cab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5cad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5caf push 2 */
  push32((uint32_t)(0x2u));
  /* 100c5cb1 push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c5cb6 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5cbcu);
  /* 100c5cbc push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c5cc1 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c5cc7u);
  /* 100c5cc7 push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c5ccc mov esi, eax */
  ESI = (EAX);
  /* 100c5cce call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5cd4u);
  /* 100c5cd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5cd7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c5cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5cdb pop esi */
  ESI = (pop32());
  /* 100c5cdc jg 0x100c5de7 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c5de7;
  /* 100c5ce2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5ce4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5ce8 push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c5ced call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5cf3u);
  /* 100c5cf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5cf6 call 0x100c2780 */
  push32(0x100c5cfbu); f_100c2780();
  /* 100c5cfb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5cfe jge 0x100c5d27 */
  if ((C.sf==C.of)) goto L_100c5d27;
  /* 100c5d00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5d02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5d06 push 0x100d6008 */
  push32((uint32_t)(0x100d6008u));
  /* 100c5d0b call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5d11u);
  /* 100c5d11 push 0x100d6008 */
  push32((uint32_t)(0x100d6008u));
  /* 100c5d16 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c5d1cu);
  /* 100c5d1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5d21 je 0x100c5de7 */
  if (C.zf) goto L_100c5de7;
L_100c5d27:;
  /* 100c5d27 call 0x100c5220 */
  push32(0x100c5d2cu); f_100c5220();
  /* 100c5d2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5d2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5d30 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c5d32 push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c5d37 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5d3du);
  /* 100c5d3d push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c5d42 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c5d48u);
  /* 100c5d48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5d4b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5d4e jl 0x100c5de7 */
  if ((C.sf!=C.of)) goto L_100c5de7;
  /* 100c5d54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5d56 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5d58 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c5d5a push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c5d5f call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5d65u);
  /* 100c5d65 push 0x100d6278 */
  push32((uint32_t)(0x100d6278u));
  /* 100c5d6a call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5d70u);
  /* 100c5d70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5d75 je 0x100c5d8b */
  if (C.zf) goto L_100c5d8b;
  /* 100c5d77 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5d79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5d7b push 4 */
  push32((uint32_t)(0x4u));
  /* 100c5d7d push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c5d82 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5d88u);
  /* 100c5d88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5d8b:;
  /* 100c5d8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5d8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5d91 push 0x100d3638 */
  push32((uint32_t)(0x100d3638u));
  /* 100c5d96 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5d9cu);
  /* 100c5d9c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5d9e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100c5da0 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c5da2 push 0x100d3638 */
  push32((uint32_t)(0x100d3638u));
  /* 100c5da7 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5dadu);
  /* 100c5dad push 0x100d3900 */
  push32((uint32_t)(0x100d3900u));
  /* 100c5db2 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c5db8u);
  /* 100c5db8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5dbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c5dbd je 0x100c5dd3 */
  if (C.zf) goto L_100c5dd3;
  /* 100c5dbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5dc1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5dc3 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c5dc5 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c5dca call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5dd0u);
  /* 100c5dd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5dd3:;
  /* 100c5dd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5dd5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5dd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5dd9 push 0x100d6118 */
  push32((uint32_t)(0x100d6118u));
  /* 100c5dde call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5de4u);
  /* 100c5de4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5de7:;
  /* 100c5de7 ret  */
  ESPCHK(0x100c5bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x100c5df0 (472 bytes, 137 insns) */
void f_100c5df0(void) {
  FTRACE(0x100c5df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c5df0 push ecx */
  push32((uint32_t)(ECX));
  /* 100c5df1 push 0x100d6298 */
  push32((uint32_t)(0x100d6298u));
  /* 100c5df6 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5dfcu);
  /* 100c5dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5dff cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5e02 jge 0x100c5e17 */
  if ((C.sf==C.of)) goto L_100c5e17;
  /* 100c5e04 mov eax, dword ptr [0x100d62d4] */
  EAX = (r32((uint32_t)(0x100d62d4)));
  /* 100c5e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c5e0b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5e0e push eax */
  push32((uint32_t)(EAX));
  /* 100c5e0f call 0x100c26d0 */
  push32(0x100c5e14u); f_100c26d0();
  /* 100c5e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5e17:;
  /* 100c5e17 push 0x100d6298 */
  push32((uint32_t)(0x100d6298u));
  /* 100c5e1c call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5e22u);
  /* 100c5e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5e25 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5e2a jg 0x100c5e3e */
  if ((!C.zf&&C.sf==C.of)) goto L_100c5e3e;
  /* 100c5e2c push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c5e31 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c5e37u);
  /* 100c5e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5e3c je 0x100c5e52 */
  if (C.zf) goto L_100c5e52;
L_100c5e3e:;
  /* 100c5e3e mov ecx, dword ptr [0x100d62d4] */
  ECX = (r32((uint32_t)(0x100d62d4)));
  /* 100c5e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5e46 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5e49 push ecx */
  push32((uint32_t)(ECX));
  /* 100c5e4a call 0x100c26d0 */
  push32(0x100c5e4fu); f_100c26d0();
  /* 100c5e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5e52:;
  /* 100c5e52 push esi */
  push32((uint32_t)(ESI));
  /* 100c5e53 push edi */
  push32((uint32_t)(EDI));
  /* 100c5e54 mov edi, 2 */
  EDI = (0x2u);
L_100c5e59:;
  /* 100c5e59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5e5b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c5e5d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c5e62 push 0x100d61b0 */
  push32((uint32_t)(0x100d61b0u));
  /* 100c5e67 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5e6du);
  /* 100c5e6d push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c5e72 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c5e78u);
  /* 100c5e78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5e7b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5e80 jge 0x100c5e9b */
  if ((C.sf==C.of)) goto L_100c5e9b;
  /* 100c5e82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5e84 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c5e86 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c5e8b push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c5e90 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5e96u);
  /* 100c5e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5e99 jmp 0x100c5ec6 */
  goto L_100c5ec6;
L_100c5e9b:;
  /* 100c5e9b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100c5e9d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c5e9f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c5ea4 push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c5ea9 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5eafu);
  /* 100c5eaf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5eb1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c5eb3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c5eb8 push 0x100d6100 */
  push32((uint32_t)(0x100d6100u));
  /* 100c5ebd call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5ec3u);
  /* 100c5ec3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5ec6:;
  /* 100c5ec6 mov edx, dword ptr [0x100d62d4] */
  EDX = (r32((uint32_t)(0x100d62d4)));
  /* 100c5ecc add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5ecf push edx */
  push32((uint32_t)(EDX));
  /* 100c5ed0 call 0x100c26f0 */
  push32(0x100c5ed5u); f_100c26f0();
  /* 100c5ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5eda jne 0x100c5efd */
  if (!C.zf) goto L_100c5efd;
  /* 100c5edc call 0x100c2780 */
  push32(0x100c5ee1u); f_100c2780();
  /* 100c5ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5ee4 jge 0x100c5efd */
  if ((C.sf==C.of)) goto L_100c5efd;
  /* 100c5ee6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5ee8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c5eea push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 100c5eef push 0x100d6298 */
  push32((uint32_t)(0x100d6298u));
  /* 100c5ef4 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5efau);
  /* 100c5efa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c5efd:;
  /* 100c5efd mov al, byte ptr [0x100d62d4] */
  AL = (r8((uint32_t)(0x100d62d4)));
  /* 100c5f02 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 100c5f06 mov eax, dword ptr [0x100d64d8] */
  EAX = (r32((uint32_t)(0x100d64d8)));
  /* 100c5f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5f0d je 0x100c5f25 */
  if (C.zf) goto L_100c5f25;
  /* 100c5f0f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c5f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c5f15 push 0x100d38a8 */
  push32((uint32_t)(0x100d38a8u));
  /* 100c5f1a push ecx */
  push32((uint32_t)(ECX));
  /* 100c5f1b call eax */
  call_ind((uint32_t)(EAX), 0x100c5f1du);
  /* 100c5f1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5f20 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5f23 jge 0x100c5f65 */
  if ((C.sf==C.of)) goto L_100c5f65;
L_100c5f25:;
  /* 100c5f25 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c5f27 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c5f2du);
  /* 100c5f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5f30 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5f35 jle 0x100c5f65 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5f65;
  /* 100c5f37 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c5f39 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c5f3fu);
  /* 100c5f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5f42 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5f47 jle 0x100c5f65 */
  if ((C.zf||C.sf!=C.of)) goto L_100c5f65;
  /* 100c5f49 mov esi, 0x1e */
  ESI = (0x1eu);
L_100c5f4e:;
  /* 100c5f4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5f50 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c5f52 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c5f54 push 0x100d38a8 */
  push32((uint32_t)(0x100d38a8u));
  /* 100c5f59 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5f5fu);
  /* 100c5f5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5f62 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100c5f63 jne 0x100c5f4e */
  if (!C.zf) goto L_100c5f4e;
L_100c5f65:;
  /* 100c5f65 push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c5f6a call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c5f70u);
  /* 100c5f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5f73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c5f75 je 0x100c5f7b */
  if (C.zf) goto L_100c5f7b;
  /* 100c5f77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c5f79 jmp 0x100c5f7d */
  goto L_100c5f7d;
L_100c5f7b:;
  /* 100c5f7b push 0x64 */
  push32((uint32_t)(0x64u));
L_100c5f7d:;
  /* 100c5f7d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c5f7f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c5f84 push 0x100d63d0 */
  push32((uint32_t)(0x100d63d0u));
  /* 100c5f89 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5f8fu);
  /* 100c5f8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5f92 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5f94 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c5f96 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c5f9b push 0x100d36a0 */
  push32((uint32_t)(0x100d36a0u));
  /* 100c5fa0 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5fa6u);
  /* 100c5fa6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c5fa8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c5faa push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c5faf push 0x100d5fa0 */
  push32((uint32_t)(0x100d5fa0u));
  /* 100c5fb4 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c5fbau);
  /* 100c5fba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5fbd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100c5fbe jne 0x100c5e59 */
  if (!C.zf) goto L_100c5e59;
  /* 100c5fc4 pop edi */
  EDI = (pop32());
  /* 100c5fc5 pop esi */
  ESI = (pop32());
  /* 100c5fc6 pop ecx */
  ECX = (pop32());
  /* 100c5fc7 ret  */
  ESPCHK(0x100c5df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x100c5fd0 (789 bytes, 244 insns) */
void f_100c5fd0(void) {
  FTRACE(0x100c5fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c5fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 100c5fd1 push 0x100d3898 */
  push32((uint32_t)(0x100d3898u));
  /* 100c5fd6 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c5fdcu);
  /* 100c5fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c5fe1 je 0x100c62e3 */
  if (C.zf) goto L_100c62e3;
  /* 100c5fe7 call 0x100c2670 */
  push32(0x100c5fecu); f_100c2670();
  /* 100c5fec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c5fef jne 0x100c6036 */
  if (!C.zf) goto L_100c6036;
  /* 100c5ff1 mov eax, dword ptr [0x100d62d4] */
  EAX = (r32((uint32_t)(0x100d62d4)));
  /* 100c5ff6 push eax */
  push32((uint32_t)(EAX));
  /* 100c5ff7 call 0x100c26f0 */
  push32(0x100c5ffcu); f_100c26f0();
  /* 100c5ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c5fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6001 jne 0x100c62e3 */
  if (!C.zf) goto L_100c62e3;
  /* 100c6007 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 100c600c push 3 */
  push32((uint32_t)(0x3u));
  /* 100c600e push 2 */
  push32((uint32_t)(0x2u));
  /* 100c6010 call 0x100c2610 */
  push32(0x100c6015u); f_100c2610();
  /* 100c6015 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 100c601a push 3 */
  push32((uint32_t)(0x3u));
  /* 100c601c push 0 */
  push32((uint32_t)(0x0u));
  /* 100c601e call 0x100c2610 */
  push32(0x100c6023u); f_100c2610();
  /* 100c6023 mov ecx, dword ptr [0x100d62d4] */
  ECX = (r32((uint32_t)(0x100d62d4)));
  /* 100c6029 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c602b push ecx */
  push32((uint32_t)(ECX));
  /* 100c602c call 0x100c26d0 */
  push32(0x100c6031u); f_100c26d0();
  /* 100c6031 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6034 pop ecx */
  ECX = (pop32());
  /* 100c6035 ret  */
  ESPCHK(0x100c5fd0u, _esp0);
  ESP += 4; return;
L_100c6036:;
  /* 100c6036 push 0x100d3898 */
  push32((uint32_t)(0x100d3898u));
  /* 100c603b call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c6041u);
  /* 100c6041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6046 je 0x100c62e3 */
  if (C.zf) goto L_100c62e3;
  /* 100c604c mov edx, dword ptr [0x100d62d4] */
  EDX = (r32((uint32_t)(0x100d62d4)));
  /* 100c6052 push edx */
  push32((uint32_t)(EDX));
  /* 100c6053 call 0x100c26f0 */
  push32(0x100c6058u); f_100c26f0();
  /* 100c6058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c605b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c605d jne 0x100c60d2 */
  if (!C.zf) goto L_100c60d2;
  /* 100c605f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100c6064 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c6066 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c6068 call 0x100c2610 */
  push32(0x100c606du); f_100c2610();
  /* 100c606d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6070 call 0x100c2670 */
  push32(0x100c6075u); f_100c2670();
  /* 100c6075 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6078 jne 0x100c6099 */
  if (!C.zf) goto L_100c6099;
  /* 100c607a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c607f push 0 */
  push32((uint32_t)(0x0u));
  /* 100c6081 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c6083 call 0x100c2610 */
  push32(0x100c6088u); f_100c2610();
  /* 100c6088 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c608d push 2 */
  push32((uint32_t)(0x2u));
  /* 100c608f push 4 */
  push32((uint32_t)(0x4u));
  /* 100c6091 call 0x100c2610 */
  push32(0x100c6096u); f_100c2610();
  /* 100c6096 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6099:;
  /* 100c6099 call 0x100c2670 */
  push32(0x100c609eu); f_100c2670();
  /* 100c609e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c60a1 jne 0x100c60c2 */
  if (!C.zf) goto L_100c60c2;
  /* 100c60a3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100c60a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c60aa push 4 */
  push32((uint32_t)(0x4u));
  /* 100c60ac call 0x100c2610 */
  push32(0x100c60b1u); f_100c2610();
  /* 100c60b1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100c60b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c60b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c60ba call 0x100c2610 */
  push32(0x100c60bfu); f_100c2610();
  /* 100c60bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c60c2:;
  /* 100c60c2 mov eax, dword ptr [0x100d62d4] */
  EAX = (r32((uint32_t)(0x100d62d4)));
  /* 100c60c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c60c9 push eax */
  push32((uint32_t)(EAX));
  /* 100c60ca call 0x100c26d0 */
  push32(0x100c60cfu); f_100c26d0();
  /* 100c60cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c60d2:;
  /* 100c60d2 push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c60d7 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c60ddu);
  /* 100c60dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c60e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c60e2 je 0x100c6154 */
  if (C.zf) goto L_100c6154;
  /* 100c60e4 push 0x100d6170 */
  push32((uint32_t)(0x100d6170u));
  /* 100c60e9 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c60efu);
  /* 100c60ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c60f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c60f4 jne 0x100c6154 */
  if (!C.zf) goto L_100c6154;
  /* 100c60f6 push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c60fb call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c6101u);
  /* 100c6101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6106 je 0x100c6154 */
  if (C.zf) goto L_100c6154;
  /* 100c6108 mov eax, dword ptr [0x100d64dc] */
  EAX = (r32((uint32_t)(0x100d64dc)));
  /* 100c610d mov cl, byte ptr [0x100d62d4] */
  CL = (r8((uint32_t)(0x100d62d4)));
  /* 100c6113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6115 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100c6119 je 0x100c612e */
  if (C.zf) goto L_100c612e;
  /* 100c611b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100c611f push 5 */
  push32((uint32_t)(0x5u));
  /* 100c6121 push 0x100d6170 */
  push32((uint32_t)(0x100d6170u));
  /* 100c6126 push edx */
  push32((uint32_t)(EDX));
  /* 100c6127 call eax */
  call_ind((uint32_t)(EAX), 0x100c6129u);
  /* 100c6129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c612c jmp 0x100c6130 */
  goto L_100c6130;
L_100c612e:;
  /* 100c612e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100c6130:;
  /* 100c6130 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100c6133 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c6135 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100c6138 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100c613d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100c613f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100c6142 mov eax, edx */
  EAX = (EDX);
  /* 100c6144 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100c6147 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6149 push edx */
  push32((uint32_t)(EDX));
  /* 100c614a push 5 */
  push32((uint32_t)(0x5u));
  /* 100c614c call 0x100c2f90 */
  push32(0x100c6151u); f_100c2f90();
  /* 100c6151 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6154:;
  /* 100c6154 push 0x100d6170 */
  push32((uint32_t)(0x100d6170u));
  /* 100c6159 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c615fu);
  /* 100c615f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6162 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c6164 je 0x100c6279 */
  if (C.zf) goto L_100c6279;
  /* 100c616a push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c616f call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c6175u);
  /* 100c6175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6178 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c617a jne 0x100c6279 */
  if (!C.zf) goto L_100c6279;
  /* 100c6180 mov eax, dword ptr [0x100d64dc] */
  EAX = (r32((uint32_t)(0x100d64dc)));
  /* 100c6185 mov cl, byte ptr [0x100d62d4] */
  CL = (r8((uint32_t)(0x100d62d4)));
  /* 100c618b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c618d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100c6191 je 0x100c61a6 */
  if (C.zf) goto L_100c61a6;
  /* 100c6193 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100c6197 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c6199 push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c619e push edx */
  push32((uint32_t)(EDX));
  /* 100c619f call eax */
  call_ind((uint32_t)(EAX), 0x100c61a1u);
  /* 100c61a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c61a4 jmp 0x100c61a8 */
  goto L_100c61a8;
L_100c61a6:;
  /* 100c61a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100c61a8:;
  /* 100c61a8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100c61ab push 2 */
  push32((uint32_t)(0x2u));
  /* 100c61ad lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100c61b0 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100c61b5 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100c61b7 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100c61ba mov eax, edx */
  EAX = (EDX);
  /* 100c61bc shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100c61bf add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c61c1 push edx */
  push32((uint32_t)(EDX));
  /* 100c61c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c61c4 call 0x100c2f90 */
  push32(0x100c61c9u); f_100c2f90();
  /* 100c61c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c61cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c61ce je 0x100c6279 */
  if (C.zf) goto L_100c6279;
  /* 100c61d4 mov eax, dword ptr [0x100d64dc] */
  EAX = (r32((uint32_t)(0x100d64dc)));
  /* 100c61d9 mov cl, byte ptr [0x100d62d4] */
  CL = (r8((uint32_t)(0x100d62d4)));
  /* 100c61df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c61e1 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100c61e5 je 0x100c61fa */
  if (C.zf) goto L_100c61fa;
  /* 100c61e7 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100c61eb push 1 */
  push32((uint32_t)(0x1u));
  /* 100c61ed push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c61f2 push edx */
  push32((uint32_t)(EDX));
  /* 100c61f3 call eax */
  call_ind((uint32_t)(EAX), 0x100c61f5u);
  /* 100c61f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c61f8 jmp 0x100c61fc */
  goto L_100c61fc;
L_100c61fa:;
  /* 100c61fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100c61fc:;
  /* 100c61fc lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 100c6203 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c6205 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c6207 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 100c620a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100c620d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 100c6212 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100c6214 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 100c6217 mov eax, edx */
  EAX = (EDX);
  /* 100c6219 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100c621c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c621e push edx */
  push32((uint32_t)(EDX));
  /* 100c621f push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6221 call 0x100c2f90 */
  push32(0x100c6226u); f_100c2f90();
  /* 100c6226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6229 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c622b je 0x100c6279 */
  if (C.zf) goto L_100c6279;
  /* 100c622d mov eax, dword ptr [0x100d64dc] */
  EAX = (r32((uint32_t)(0x100d64dc)));
  /* 100c6232 mov cl, byte ptr [0x100d62d4] */
  CL = (r8((uint32_t)(0x100d62d4)));
  /* 100c6238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c623a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100c623e je 0x100c6253 */
  if (C.zf) goto L_100c6253;
  /* 100c6240 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100c6244 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c6246 push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c624b push edx */
  push32((uint32_t)(EDX));
  /* 100c624c call eax */
  call_ind((uint32_t)(EAX), 0x100c624eu);
  /* 100c624e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6251 jmp 0x100c6255 */
  goto L_100c6255;
L_100c6253:;
  /* 100c6253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100c6255:;
  /* 100c6255 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100c6258 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c625a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100c625d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100c6262 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100c6264 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100c6267 mov eax, edx */
  EAX = (EDX);
  /* 100c6269 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100c626c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c626e push edx */
  push32((uint32_t)(EDX));
  /* 100c626f push 4 */
  push32((uint32_t)(0x4u));
  /* 100c6271 call 0x100c2f90 */
  push32(0x100c6276u); f_100c2f90();
  /* 100c6276 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6279:;
  /* 100c6279 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c627b call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c6281u);
  /* 100c6281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6284 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6289 jle 0x100c62ae */
  if ((C.zf||C.sf!=C.of)) goto L_100c62ae;
  /* 100c628b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100c6290 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c6292 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c6294 call 0x100c2610 */
  push32(0x100c6299u); f_100c2610();
  /* 100c6299 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c629b call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c62a1u);
  /* 100c62a1 push eax */
  push32((uint32_t)(EAX));
  /* 100c62a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c62a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c62a6 call 0x100c2610 */
  push32(0x100c62abu); f_100c2610();
  /* 100c62ab add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c62ae:;
  /* 100c62ae push 0 */
  push32((uint32_t)(0x0u));
  /* 100c62b0 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c62b6u);
  /* 100c62b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c62b9 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c62be jle 0x100c62e3 */
  if ((C.zf||C.sf!=C.of)) goto L_100c62e3;
  /* 100c62c0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100c62c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c62c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c62c9 call 0x100c2610 */
  push32(0x100c62ceu); f_100c2610();
  /* 100c62ce push 0 */
  push32((uint32_t)(0x0u));
  /* 100c62d0 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c62d6u);
  /* 100c62d6 push eax */
  push32((uint32_t)(EAX));
  /* 100c62d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c62d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c62db call 0x100c2610 */
  push32(0x100c62e0u); f_100c2610();
  /* 100c62e0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c62e3:;
  /* 100c62e3 pop ecx */
  ECX = (pop32());
  /* 100c62e4 ret  */
  ESPCHK(0x100c5fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x100c62f0 (818 bytes, 268 insns) */
void f_100c62f0(void) {
  FTRACE(0x100c62f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c62f0 push ecx */
  push32((uint32_t)(ECX));
  /* 100c62f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c62f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c62f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c62f7 call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c62fdu);
  /* 100c62fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6300 call dword ptr [0x100d6590] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6590))), 0x100c6306u);
  /* 100c6306 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c6308 je 0x100c6620 */
  if (C.zf) goto L_100c6620;
  /* 100c630e push 4 */
  push32((uint32_t)(0x4u));
  /* 100c6310 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c6312 push 9 */
  push32((uint32_t)(0x9u));
  /* 100c6314 call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c631au);
  /* 100c631a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c631d call 0x100c2670 */
  push32(0x100c6322u); f_100c2670();
  /* 100c6322 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6325 je 0x100c6620 */
  if (C.zf) goto L_100c6620;
  /* 100c632b call dword ptr [0x100d6590] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6590))), 0x100c6331u);
  /* 100c6331 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c6333 je 0x100c6611 */
  if (C.zf) goto L_100c6611;
  /* 100c6339 push esi */
  push32((uint32_t)(ESI));
  /* 100c633a push edi */
  push32((uint32_t)(EDI));
  /* 100c633b push 4 */
  push32((uint32_t)(0x4u));
  /* 100c633d push 4 */
  push32((uint32_t)(0x4u));
  /* 100c633f push 9 */
  push32((uint32_t)(0x9u));
  /* 100c6341 call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c6347u);
  /* 100c6347 push 0x100d6120 */
  push32((uint32_t)(0x100d6120u));
  /* 100c634c call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c6352u);
  /* 100c6352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6355 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c6357 jne 0x100c63bf */
  if (!C.zf) goto L_100c63bf;
  /* 100c6359 mov al, byte ptr [0x100d62d4] */
  AL = (r8((uint32_t)(0x100d62d4)));
  /* 100c635e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 100c6362 mov eax, dword ptr [0x100d64dc] */
  EAX = (r32((uint32_t)(0x100d64dc)));
  /* 100c6367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6369 je 0x100c6380 */
  if (C.zf) goto L_100c6380;
  /* 100c636b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c636f push 3 */
  push32((uint32_t)(0x3u));
  /* 100c6371 push 0x100d6120 */
  push32((uint32_t)(0x100d6120u));
  /* 100c6376 push ecx */
  push32((uint32_t)(ECX));
  /* 100c6377 call eax */
  call_ind((uint32_t)(EAX), 0x100c6379u);
  /* 100c6379 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c637c mov esi, eax */
  ESI = (EAX);
  /* 100c637e jmp 0x100c6382 */
  goto L_100c6382;
L_100c6380:;
  /* 100c6380 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100c6382:;
  /* 100c6382 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c6384 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c638au);
  /* 100c638a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 100c638d mov edi, eax */
  EDI = (EAX);
  /* 100c638f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100c6394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6397 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 100c639a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100c639c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100c639f mov eax, edx */
  EAX = (EDX);
  /* 100c63a1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100c63a4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c63a6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c63a8 jge 0x100c63b0 */
  if ((C.sf==C.of)) goto L_100c63b0;
  /* 100c63aa push 4 */
  push32((uint32_t)(0x4u));
  /* 100c63ac push 4 */
  push32((uint32_t)(0x4u));
  /* 100c63ae jmp 0x100c63b4 */
  goto L_100c63b4;
L_100c63b0:;
  /* 100c63b0 push 6 */
  push32((uint32_t)(0x6u));
  /* 100c63b2 push 6 */
  push32((uint32_t)(0x6u));
L_100c63b4:;
  /* 100c63b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 100c63b6 call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c63bcu);
  /* 100c63bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c63bf:;
  /* 100c63bf push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c63c4 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c63cau);
  /* 100c63ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c63cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c63cf jne 0x100c6438 */
  if (!C.zf) goto L_100c6438;
  /* 100c63d1 mov eax, dword ptr [0x100d64dc] */
  EAX = (r32((uint32_t)(0x100d64dc)));
  /* 100c63d6 mov cl, byte ptr [0x100d62d4] */
  CL = (r8((uint32_t)(0x100d62d4)));
  /* 100c63dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c63de mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 100c63e2 je 0x100c63f9 */
  if (C.zf) goto L_100c63f9;
  /* 100c63e4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c63e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c63ea push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c63ef push edx */
  push32((uint32_t)(EDX));
  /* 100c63f0 call eax */
  call_ind((uint32_t)(EAX), 0x100c63f2u);
  /* 100c63f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c63f5 mov esi, eax */
  ESI = (EAX);
  /* 100c63f7 jmp 0x100c63fb */
  goto L_100c63fb;
L_100c63f9:;
  /* 100c63f9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100c63fb:;
  /* 100c63fb push 3 */
  push32((uint32_t)(0x3u));
  /* 100c63fd call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c6403u);
  /* 100c6403 mov edi, eax */
  EDI = (EAX);
  /* 100c6405 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 100c6408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c640b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 100c640e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100c6413 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100c6415 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100c6418 mov ecx, edx */
  ECX = (EDX);
  /* 100c641a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 100c641d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c641f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6421 jge 0x100c6429 */
  if ((C.sf==C.of)) goto L_100c6429;
  /* 100c6423 push 9 */
  push32((uint32_t)(0x9u));
  /* 100c6425 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c6427 jmp 0x100c642d */
  goto L_100c642d;
L_100c6429:;
  /* 100c6429 push 6 */
  push32((uint32_t)(0x6u));
  /* 100c642b push 6 */
  push32((uint32_t)(0x6u));
L_100c642d:;
  /* 100c642d push 9 */
  push32((uint32_t)(0x9u));
  /* 100c642f call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c6435u);
  /* 100c6435 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6438:;
  /* 100c6438 push 0x100d6170 */
  push32((uint32_t)(0x100d6170u));
  /* 100c643d call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c6443u);
  /* 100c6443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6446 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c6448 jne 0x100c64af */
  if (!C.zf) goto L_100c64af;
  /* 100c644a mov eax, dword ptr [0x100d64dc] */
  EAX = (r32((uint32_t)(0x100d64dc)));
  /* 100c644f mov dl, byte ptr [0x100d62d4] */
  DL = (r8((uint32_t)(0x100d62d4)));
  /* 100c6455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6457 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 100c645b je 0x100c6472 */
  if (C.zf) goto L_100c6472;
  /* 100c645d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c6461 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c6463 push 0x100d6170 */
  push32((uint32_t)(0x100d6170u));
  /* 100c6468 push ecx */
  push32((uint32_t)(ECX));
  /* 100c6469 call eax */
  call_ind((uint32_t)(EAX), 0x100c646bu);
  /* 100c646b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c646e mov esi, eax */
  ESI = (EAX);
  /* 100c6470 jmp 0x100c6474 */
  goto L_100c6474;
L_100c6472:;
  /* 100c6472 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100c6474:;
  /* 100c6474 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c6476 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c647cu);
  /* 100c647c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 100c647f mov edi, eax */
  EDI = (EAX);
  /* 100c6481 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100c6486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6489 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 100c648c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100c648e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100c6491 mov eax, edx */
  EAX = (EDX);
  /* 100c6493 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6495 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100c6498 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c649a push 9 */
  push32((uint32_t)(0x9u));
  /* 100c649c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c649e jge 0x100c64a4 */
  if ((C.sf==C.of)) goto L_100c64a4;
  /* 100c64a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 100c64a2 jmp 0x100c64a6 */
  goto L_100c64a6;
L_100c64a4:;
  /* 100c64a4 push 6 */
  push32((uint32_t)(0x6u));
L_100c64a6:;
  /* 100c64a6 call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c64acu);
  /* 100c64ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c64af:;
  /* 100c64af push 0x100d6360 */
  push32((uint32_t)(0x100d6360u));
  /* 100c64b4 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c64bau);
  /* 100c64ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c64bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c64bf je 0x100c64d3 */
  if (C.zf) goto L_100c64d3;
  /* 100c64c1 push 0x100d62a8 */
  push32((uint32_t)(0x100d62a8u));
  /* 100c64c6 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c64ccu);
  /* 100c64cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c64cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c64d1 jne 0x100c64f4 */
  if (!C.zf) goto L_100c64f4;
L_100c64d3:;
  /* 100c64d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c64d5 call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c64dbu);
  /* 100c64db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c64de cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c64e3 jge 0x100c64f4 */
  if ((C.sf==C.of)) goto L_100c64f4;
  /* 100c64e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c64e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c64e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 100c64eb call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c64f1u);
  /* 100c64f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c64f4:;
  /* 100c64f4 push 0x100d6008 */
  push32((uint32_t)(0x100d6008u));
  /* 100c64f9 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c64ffu);
  /* 100c64ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6504 jne 0x100c6577 */
  if (!C.zf) goto L_100c6577;
  /* 100c6506 call 0x100c2780 */
  push32(0x100c650bu); f_100c2780();
  /* 100c650b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c650e jge 0x100c6577 */
  if ((C.sf==C.of)) goto L_100c6577;
  /* 100c6510 mov eax, dword ptr [0x100d64d8] */
  EAX = (r32((uint32_t)(0x100d64d8)));
  /* 100c6515 mov cl, byte ptr [0x100d62d4] */
  CL = (r8((uint32_t)(0x100d62d4)));
  /* 100c651b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c651d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 100c6521 je 0x100c6538 */
  if (C.zf) goto L_100c6538;
  /* 100c6523 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c6527 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c6529 push 0x100d6008 */
  push32((uint32_t)(0x100d6008u));
  /* 100c652e push edx */
  push32((uint32_t)(EDX));
  /* 100c652f call eax */
  call_ind((uint32_t)(EAX), 0x100c6531u);
  /* 100c6531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6534 mov esi, eax */
  ESI = (EAX);
  /* 100c6536 jmp 0x100c653a */
  goto L_100c653a;
L_100c6538:;
  /* 100c6538 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100c653a:;
  /* 100c653a push 2 */
  push32((uint32_t)(0x2u));
  /* 100c653c call dword ptr [0x100d655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d655c))), 0x100c6542u);
  /* 100c6542 mov edi, eax */
  EDI = (EAX);
  /* 100c6544 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 100c6547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c654a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 100c654d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100c6552 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100c6554 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100c6557 mov ecx, edx */
  ECX = (EDX);
  /* 100c6559 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 100c655c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c655e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6560 jge 0x100c6568 */
  if ((C.sf==C.of)) goto L_100c6568;
  /* 100c6562 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c6564 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c6566 jmp 0x100c656c */
  goto L_100c656c;
L_100c6568:;
  /* 100c6568 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c656a push 7 */
  push32((uint32_t)(0x7u));
L_100c656c:;
  /* 100c656c push 9 */
  push32((uint32_t)(0x9u));
  /* 100c656e call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c6574u);
  /* 100c6574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6577:;
  /* 100c6577 push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c657c call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c6582u);
  /* 100c6582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6585 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c6587 pop edi */
  EDI = (pop32());
  /* 100c6588 pop esi */
  ESI = (pop32());
  /* 100c6589 jne 0x100c659a */
  if (!C.zf) goto L_100c659a;
  /* 100c658b push 1 */
  push32((uint32_t)(0x1u));
  /* 100c658d push 1 */
  push32((uint32_t)(0x1u));
  /* 100c658f push 9 */
  push32((uint32_t)(0x9u));
  /* 100c6591 call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c6597u);
  /* 100c6597 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c659a:;
  /* 100c659a push 0x100d6098 */
  push32((uint32_t)(0x100d6098u));
  /* 100c659f call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c65a5u);
  /* 100c65a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c65a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c65aa je 0x100c65be */
  if (C.zf) goto L_100c65be;
  /* 100c65ac push 0x100d3680 */
  push32((uint32_t)(0x100d3680u));
  /* 100c65b1 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c65b7u);
  /* 100c65b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c65ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c65bc jne 0x100c65cd */
  if (!C.zf) goto L_100c65cd;
L_100c65be:;
  /* 100c65be push 1 */
  push32((uint32_t)(0x1u));
  /* 100c65c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c65c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 100c65c4 call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c65cau);
  /* 100c65ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c65cd:;
  /* 100c65cd push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c65d2 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c65d8u);
  /* 100c65d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c65db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c65dd jne 0x100c65ee */
  if (!C.zf) goto L_100c65ee;
  /* 100c65df push 4 */
  push32((uint32_t)(0x4u));
  /* 100c65e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c65e3 push 6 */
  push32((uint32_t)(0x6u));
  /* 100c65e5 call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c65ebu);
  /* 100c65eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c65ee:;
  /* 100c65ee push 0x100d6398 */
  push32((uint32_t)(0x100d6398u));
  /* 100c65f3 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c65f9u);
  /* 100c65f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c65fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c65fe jne 0x100c6620 */
  if (!C.zf) goto L_100c6620;
  /* 100c6600 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6602 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6604 push 9 */
  push32((uint32_t)(0x9u));
  /* 100c6606 call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c660cu);
  /* 100c660c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c660f pop ecx */
  ECX = (pop32());
  /* 100c6610 ret  */
  ESPCHK(0x100c62f0u, _esp0);
  ESP += 4; return;
L_100c6611:;
  /* 100c6611 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c6613 push 6 */
  push32((uint32_t)(0x6u));
  /* 100c6615 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c6617 call dword ptr [0x100d6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6534))), 0x100c661du);
  /* 100c661d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6620:;
  /* 100c6620 pop ecx */
  ECX = (pop32());
  /* 100c6621 ret  */
  ESPCHK(0x100c62f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x100c6630 (174 bytes, 50 insns) */
void f_100c6630(void) {
  FTRACE(0x100c6630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c6630 push 0x100d65b8 */
  push32((uint32_t)(0x100d65b8u));
  /* 100c6635 call 0x100c2720 */
  push32(0x100c663au); f_100c2720();
  /* 100c663a push 0x100d6360 */
  push32((uint32_t)(0x100d6360u));
  /* 100c663f call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c6645u);
  /* 100c6645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6648 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c664a je 0x100c666c */
  if (C.zf) goto L_100c666c;
  /* 100c664c push 0x100d62a8 */
  push32((uint32_t)(0x100d62a8u));
  /* 100c6651 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c6657u);
  /* 100c6657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c665a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c665c je 0x100c666c */
  if (C.zf) goto L_100c666c;
  /* 100c665e push 0x100cf16c */
  push32((uint32_t)(0x100cf16cu));
  /* 100c6663 call 0x100c2720 */
  push32(0x100c6668u); f_100c2720();
  /* 100c6668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c666b ret  */
  ESPCHK(0x100c6630u, _esp0);
  ESP += 4; return;
L_100c666c:;
  /* 100c666c mov eax, dword ptr [0x100d5f78] */
  EAX = (r32((uint32_t)(0x100d5f78)));
  /* 100c6671 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6674 je 0x100c66d2 */
  if (C.zf) goto L_100c66d2;
  /* 100c6676 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6679 je 0x100c66d2 */
  if (C.zf) goto L_100c66d2;
  /* 100c667b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c667e je 0x100c66d2 */
  if (C.zf) goto L_100c66d2;
  /* 100c6680 push 0x100d6290 */
  push32((uint32_t)(0x100d6290u));
  /* 100c6685 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c668bu);
  /* 100c668b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c668e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c6690 je 0x100c66b2 */
  if (C.zf) goto L_100c66b2;
  /* 100c6692 push 0x100d6170 */
  push32((uint32_t)(0x100d6170u));
  /* 100c6697 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c669du);
  /* 100c669d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c66a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c66a2 jne 0x100c66b2 */
  if (!C.zf) goto L_100c66b2;
  /* 100c66a4 push 0x100d65b8 */
  push32((uint32_t)(0x100d65b8u));
  /* 100c66a9 call 0x100c2720 */
  push32(0x100c66aeu); f_100c2720();
  /* 100c66ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c66b1 ret  */
  ESPCHK(0x100c6630u, _esp0);
  ESP += 4; return;
L_100c66b2:;
  /* 100c66b2 push 0x100d6170 */
  push32((uint32_t)(0x100d6170u));
  /* 100c66b7 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c66bdu);
  /* 100c66bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c66c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c66c2 je 0x100c66dd */
  if (C.zf) goto L_100c66dd;
  /* 100c66c4 push 0x100cf1d8 */
  push32((uint32_t)(0x100cf1d8u));
  /* 100c66c9 call 0x100c2720 */
  push32(0x100c66ceu); f_100c2720();
  /* 100c66ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c66d1 ret  */
  ESPCHK(0x100c6630u, _esp0);
  ESP += 4; return;
L_100c66d2:;
  /* 100c66d2 push 0x100cf1d8 */
  push32((uint32_t)(0x100cf1d8u));
  /* 100c66d7 call 0x100c2720 */
  push32(0x100c66dcu); f_100c2720();
  /* 100c66dc pop ecx */
  ECX = (pop32());
L_100c66dd:;
  /* 100c66dd ret  */
  ESPCHK(0x100c6630u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x100c66e0 (70 bytes, 22 insns) */
void f_100c66e0(void) {
  FTRACE(0x100c66e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c66e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c66e2 call 0x100c2760 */
  push32(0x100c66e7u); f_100c2760();
  /* 100c66e7 push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c66ec call 0x100c5270 */
  push32(0x100c66f1u); f_100c5270();
  /* 100c66f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c66f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c66f6 je 0x100c6702 */
  if (C.zf) goto L_100c6702;
  /* 100c66f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c66fa call 0x100c2760 */
  push32(0x100c66ffu); f_100c2760();
  /* 100c66ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6702:;
  /* 100c6702 call 0x100c2770 */
  push32(0x100c6707u); f_100c2770();
  /* 100c6707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6709 jg 0x100c671d */
  if ((!C.zf&&C.sf==C.of)) goto L_100c671d;
  /* 100c670b push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c6710 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c6716u);
  /* 100c6716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c671b jle 0x100c6725 */
  if ((C.zf||C.sf!=C.of)) goto L_100c6725;
L_100c671d:;
  /* 100c671d push 0 */
  push32((uint32_t)(0x0u));
  /* 100c671f call 0x100c2760 */
  push32(0x100c6724u); f_100c2760();
  /* 100c6724 pop ecx */
  ECX = (pop32());
L_100c6725:;
  /* 100c6725 ret  */
  ESPCHK(0x100c66e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x100c6730 (235 bytes, 66 insns) */
void f_100c6730(void) {
  FTRACE(0x100c6730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c6730 push 0x100d61b8 */
  push32((uint32_t)(0x100d61b8u));
  /* 100c6735 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c673bu);
  /* 100c673b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c673e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c6740 je 0x100c6756 */
  if (C.zf) goto L_100c6756;
  /* 100c6742 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c6744 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c6746 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c6748 push 0x100d6390 */
  push32((uint32_t)(0x100d6390u));
  /* 100c674d call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6753u);
  /* 100c6753 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6756:;
  /* 100c6756 push 0x100d60d0 */
  push32((uint32_t)(0x100d60d0u));
  /* 100c675b call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c6761u);
  /* 100c6761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6764 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c6766 je 0x100c677c */
  if (C.zf) goto L_100c677c;
  /* 100c6768 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c676a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c676c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c676e push 0x100d3688 */
  push32((uint32_t)(0x100d3688u));
  /* 100c6773 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6779u);
  /* 100c6779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c677c:;
  /* 100c677c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c677e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100c6780 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c6782 push 0x100d38e8 */
  push32((uint32_t)(0x100d38e8u));
  /* 100c6787 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c678du);
  /* 100c678d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c678f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c6791 push 0x100d61f8 */
  push32((uint32_t)(0x100d61f8u));
  /* 100c6796 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c679cu);
  /* 100c679c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c679e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c67a0 push 0x100d61f0 */
  push32((uint32_t)(0x100d61f0u));
  /* 100c67a5 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c67abu);
  /* 100c67ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c67ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c67af push 0x100d61c0 */
  push32((uint32_t)(0x100d61c0u));
  /* 100c67b4 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c67bau);
  /* 100c67ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c67bc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c67be push 0x100d61b8 */
  push32((uint32_t)(0x100d61b8u));
  /* 100c67c3 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c67c9u);
  /* 100c67c9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c67cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c67ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c67d0 push 0x100d61c8 */
  push32((uint32_t)(0x100d61c8u));
  /* 100c67d5 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c67dbu);
  /* 100c67db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c67dd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c67df push 0x100d60b8 */
  push32((uint32_t)(0x100d60b8u));
  /* 100c67e4 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c67eau);
  /* 100c67ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c67ec push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c67ee push 0x100d60c0 */
  push32((uint32_t)(0x100d60c0u));
  /* 100c67f3 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c67f9u);
  /* 100c67f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c67fb push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c67fd push 0x100d60c8 */
  push32((uint32_t)(0x100d60c8u));
  /* 100c6802 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c6808u);
  /* 100c6808 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c680a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c680c push 0x100d60d0 */
  push32((uint32_t)(0x100d60d0u));
  /* 100c6811 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c6817u);
  /* 100c6817 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c681a ret  */
  ESPCHK(0x100c6730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x100c6820 (303 bytes, 90 insns) */
void f_100c6820(void) {
  FTRACE(0x100c6820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c6820 push ecx */
  push32((uint32_t)(ECX));
  /* 100c6821 push ebx */
  push32((uint32_t)(EBX));
  /* 100c6822 push ebp */
  push32((uint32_t)(EBP));
  /* 100c6823 push esi */
  push32((uint32_t)(ESI));
  /* 100c6824 push edi */
  push32((uint32_t)(EDI));
  /* 100c6825 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c682a call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c6830u);
  /* 100c6830 push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c6835 mov ebx, eax */
  EBX = (EAX);
  /* 100c6837 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c683du);
  /* 100c683d push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c6842 mov edi, eax */
  EDI = (EAX);
  /* 100c6844 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c684au);
  /* 100c684a push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c684f mov ebp, eax */
  EBP = (EAX);
  /* 100c6851 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c6857u);
  /* 100c6857 push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c685c mov esi, eax */
  ESI = (EAX);
  /* 100c685e call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c6864u);
  /* 100c6864 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c6869 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100c686d call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c6873u);
  /* 100c6873 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 100c6877 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c687a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c687c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c687e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c6880 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c6882 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6884 pop edi */
  EDI = (pop32());
  /* 100c6885 pop esi */
  ESI = (pop32());
  /* 100c6886 pop ebp */
  EBP = (pop32());
  /* 100c6887 pop ebx */
  EBX = (pop32());
  /* 100c6888 jne 0x100c68f0 */
  if (!C.zf) goto L_100c68f0;
  /* 100c688a cmp dword ptr [0x100d61d0], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x100d61d0))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6891 jle 0x100c68f0 */
  if ((C.zf||C.sf!=C.of)) goto L_100c68f0;
  /* 100c6893 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6895 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c6897 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c6899 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c689e call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c68a4u);
  /* 100c68a4 push 0x100d61d8 */
  push32((uint32_t)(0x100d61d8u));
  /* 100c68a9 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c68afu);
  /* 100c68af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c68b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c68b4 je 0x100c68ca */
  if (C.zf) goto L_100c68ca;
  /* 100c68b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c68b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c68ba push 6 */
  push32((uint32_t)(0x6u));
  /* 100c68bc push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c68c1 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c68c7u);
  /* 100c68c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c68ca:;
  /* 100c68ca push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c68cf call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c68d5u);
  /* 100c68d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c68d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c68da je 0x100c68f0 */
  if (C.zf) goto L_100c68f0;
  /* 100c68dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c68de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c68e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 100c68e2 push 0x100d38f8 */
  push32((uint32_t)(0x100d38f8u));
  /* 100c68e7 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c68edu);
  /* 100c68ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c68f0:;
  /* 100c68f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c68f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100c68f4 push 0x100d6308 */
  push32((uint32_t)(0x100d6308u));
  /* 100c68f9 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c68ffu);
  /* 100c68ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6901 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100c6903 push 0x100d62f0 */
  push32((uint32_t)(0x100d62f0u));
  /* 100c6908 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c690eu);
  /* 100c690e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6910 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100c6912 push 0x100d6300 */
  push32((uint32_t)(0x100d6300u));
  /* 100c6917 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c691du);
  /* 100c691d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c691f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c6921 push 0x100d62e0 */
  push32((uint32_t)(0x100d62e0u));
  /* 100c6926 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c692cu);
  /* 100c692c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c692e push 0xf */
  push32((uint32_t)(0xfu));
  /* 100c6930 push 0x100d62e8 */
  push32((uint32_t)(0x100d62e8u));
  /* 100c6935 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c693bu);
  /* 100c693b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c693d push 0xa */
  push32((uint32_t)(0xau));
  /* 100c693f push 0x100d62d8 */
  push32((uint32_t)(0x100d62d8u));
  /* 100c6944 call dword ptr [0x100d6528] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6528))), 0x100c694au);
  /* 100c694a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c694d pop ecx */
  ECX = (pop32());
  /* 100c694e ret  */
  ESPCHK(0x100c6820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x100c6950 (517 bytes, 145 insns) */
void f_100c6950(void) {
  FTRACE(0x100c6950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c6950 push esi */
  push32((uint32_t)(ESI));
  /* 100c6951 push 0x100d6278 */
  push32((uint32_t)(0x100d6278u));
  /* 100c6956 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c695cu);
  /* 100c695c push 0x100d6278 */
  push32((uint32_t)(0x100d6278u));
  /* 100c6961 mov esi, eax */
  ESI = (EAX);
  /* 100c6963 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c6969u);
  /* 100c6969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c696c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c696e jne 0x100c6984 */
  if (!C.zf) goto L_100c6984;
  /* 100c6970 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6972 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6974 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c6976 push 0x100d6278 */
  push32((uint32_t)(0x100d6278u));
  /* 100c697b call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6981u);
  /* 100c6981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6984:;
  /* 100c6984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6986 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6988 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c698a push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c698f call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6995u);
  /* 100c6995 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6999 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c699b push 0x100d6208 */
  push32((uint32_t)(0x100d6208u));
  /* 100c69a0 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c69a6u);
  /* 100c69a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c69a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c69aa push 2 */
  push32((uint32_t)(0x2u));
  /* 100c69ac push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c69b1 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c69b7u);
  /* 100c69b7 push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c69bc call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c69c2u);
  /* 100c69c2 push 0x100d6270 */
  push32((uint32_t)(0x100d6270u));
  /* 100c69c7 mov esi, eax */
  ESI = (EAX);
  /* 100c69c9 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c69cfu);
  /* 100c69cf add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c69d2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c69d4 jne 0x100c6b53 */
  if (!C.zf) goto L_100c6b53;
  /* 100c69da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c69dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c69de push 1 */
  push32((uint32_t)(0x1u));
  /* 100c69e0 push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c69e5 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c69ebu);
  /* 100c69eb push 0x100d5f40 */
  push32((uint32_t)(0x100d5f40u));
  /* 100c69f0 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c69f6u);
  /* 100c69f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c69f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c69fb je 0x100c6b53 */
  if (C.zf) goto L_100c6b53;
  /* 100c6a01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6a07 push 0x100d5ff0 */
  push32((uint32_t)(0x100d5ff0u));
  /* 100c6a0c call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6a12u);
  /* 100c6a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a14 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6a18 push 0x100d5ff8 */
  push32((uint32_t)(0x100d5ff8u));
  /* 100c6a1d call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6a23u);
  /* 100c6a23 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a25 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6a29 push 0x100d3898 */
  push32((uint32_t)(0x100d3898u));
  /* 100c6a2e call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6a34u);
  /* 100c6a34 push 0x100d3898 */
  push32((uint32_t)(0x100d3898u));
  /* 100c6a39 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c6a3fu);
  /* 100c6a3f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6a44 je 0x100c6b53 */
  if (C.zf) goto L_100c6b53;
  /* 100c6a4a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a4e push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6a50 push 0x100d6008 */
  push32((uint32_t)(0x100d6008u));
  /* 100c6a55 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6a5bu);
  /* 100c6a5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6a61 push 0x100d6118 */
  push32((uint32_t)(0x100d6118u));
  /* 100c6a66 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6a6cu);
  /* 100c6a6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6a72 push 0x100d3638 */
  push32((uint32_t)(0x100d3638u));
  /* 100c6a77 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6a7du);
  /* 100c6a7d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6a83 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c6a88 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6a8eu);
  /* 100c6a8e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6a91 push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c6a96 call dword ptr [0x100d6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6570))), 0x100c6a9cu);
  /* 100c6a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6a9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c6aa1 je 0x100c6b53 */
  if (C.zf) goto L_100c6b53;
  /* 100c6aa7 push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c6aac call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c6ab2u);
  /* 100c6ab2 push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c6ab7 mov esi, eax */
  ESI = (EAX);
  /* 100c6ab9 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c6abfu);
  /* 100c6abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6ac2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c6ac4 jne 0x100c6aed */
  if (!C.zf) goto L_100c6aed;
  /* 100c6ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6ac8 call 0x100c2730 */
  push32(0x100c6acdu); f_100c2730();
  /* 100c6acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6ad0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6ad3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6ad5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6ad7 jge 0x100c6add */
  if ((C.sf==C.of)) goto L_100c6add;
  /* 100c6ad9 push 6 */
  push32((uint32_t)(0x6u));
  /* 100c6adb jmp 0x100c6adf */
  goto L_100c6adf;
L_100c6add:;
  /* 100c6add push 4 */
  push32((uint32_t)(0x4u));
L_100c6adf:;
  /* 100c6adf push 0x100d5fd8 */
  push32((uint32_t)(0x100d5fd8u));
  /* 100c6ae4 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6aeau);
  /* 100c6aea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6aed:;
  /* 100c6aed push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c6af2 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c6af8u);
  /* 100c6af8 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c6afd mov esi, eax */
  ESI = (EAX);
  /* 100c6aff call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c6b05u);
  /* 100c6b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6b08 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c6b0a jne 0x100c6b20 */
  if (!C.zf) goto L_100c6b20;
  /* 100c6b0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6b0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6b10 push 7 */
  push32((uint32_t)(0x7u));
  /* 100c6b12 push 0x100d60f8 */
  push32((uint32_t)(0x100d60f8u));
  /* 100c6b17 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6b1du);
  /* 100c6b1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6b20:;
  /* 100c6b20 push 0x100d3638 */
  push32((uint32_t)(0x100d3638u));
  /* 100c6b25 call dword ptr [0x100d6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6564))), 0x100c6b2bu);
  /* 100c6b2b push 0x100d3638 */
  push32((uint32_t)(0x100d3638u));
  /* 100c6b30 mov esi, eax */
  ESI = (EAX);
  /* 100c6b32 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c6b38u);
  /* 100c6b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6b3b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c6b3d jne 0x100c6b53 */
  if (!C.zf) goto L_100c6b53;
  /* 100c6b3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6b41 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6b43 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c6b45 push 0x100d3638 */
  push32((uint32_t)(0x100d3638u));
  /* 100c6b4a call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6b50u);
  /* 100c6b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6b53:;
  /* 100c6b53 pop esi */
  ESI = (pop32());
  /* 100c6b54 ret  */
  ESPCHK(0x100c6950u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x100c6b60 (121 bytes, 36 insns) */
void f_100c6b60(void) {
  FTRACE(0x100c6b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c6b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6b62 call 0x100c2760 */
  push32(0x100c6b67u); f_100c2760();
  /* 100c6b67 push 0x100d38a8 */
  push32((uint32_t)(0x100d38a8u));
  /* 100c6b6c call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c6b72u);
  /* 100c6b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6b75 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6b78 jge 0x100c6b8d */
  if ((C.sf==C.of)) goto L_100c6b8d;
  /* 100c6b7a mov eax, dword ptr [0x100d62d4] */
  EAX = (r32((uint32_t)(0x100d62d4)));
  /* 100c6b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 100c6b81 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6b84 push eax */
  push32((uint32_t)(EAX));
  /* 100c6b85 call 0x100c26d0 */
  push32(0x100c6b8au); f_100c26d0();
  /* 100c6b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6b8d:;
  /* 100c6b8d push 0x100d38a8 */
  push32((uint32_t)(0x100d38a8u));
  /* 100c6b92 call dword ptr [0x100d6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6560))), 0x100c6b98u);
  /* 100c6b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6b9b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6b9e jle 0x100c6bb4 */
  if ((C.zf||C.sf!=C.of)) goto L_100c6bb4;
  /* 100c6ba0 mov ecx, dword ptr [0x100d62d4] */
  ECX = (r32((uint32_t)(0x100d62d4)));
  /* 100c6ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6ba8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6bab push ecx */
  push32((uint32_t)(ECX));
  /* 100c6bac call 0x100c26d0 */
  push32(0x100c6bb1u); f_100c26d0();
  /* 100c6bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6bb4:;
  /* 100c6bb4 mov edx, dword ptr [0x100d62d4] */
  EDX = (r32((uint32_t)(0x100d62d4)));
  /* 100c6bba add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6bbd push edx */
  push32((uint32_t)(EDX));
  /* 100c6bbe call 0x100c26f0 */
  push32(0x100c6bc3u); f_100c26f0();
  /* 100c6bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6bc5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100c6bc8 push eax */
  push32((uint32_t)(EAX));
  /* 100c6bc9 call 0x100c2760 */
  push32(0x100c6bceu); f_100c2760();
  /* 100c6bce push 0 */
  push32((uint32_t)(0x0u));
  /* 100c6bd0 call 0x100c2760 */
  push32(0x100c6bd5u); f_100c2760();
  /* 100c6bd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6bd8 ret  */
  ESPCHK(0x100c6b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x100c6be0 (86 bytes, 20 insns) */
void f_100c6be0(void) {
  FTRACE(0x100c6be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c6be0 mov eax, dword ptr [0x100d62d4] */
  EAX = (r32((uint32_t)(0x100d62d4)));
  /* 100c6be5 mov ecx, dword ptr [eax*4 + 0x100d5fb8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x100d5fb8)));
  /* 100c6bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100c6bee je 0x100c6bf5 */
  if (C.zf) goto L_100c6bf5;
  /* 100c6bf0 call 0x100c66e0 */
  push32(0x100c6bf5u); f_100c66e0();
L_100c6bf5:;
  /* 100c6bf5 call 0x100c5df0 */
  push32(0x100c6bfau); f_100c5df0();
  /* 100c6bfa call 0x100c6730 */
  push32(0x100c6bffu); f_100c6730();
  /* 100c6bff call 0x100c2780 */
  push32(0x100c6c04u); f_100c2780();
  /* 100c6c04 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6c07 jge 0x100c6c0e */
  if ((C.sf==C.of)) goto L_100c6c0e;
  /* 100c6c09 call 0x100c6820 */
  push32(0x100c6c0eu); f_100c6820();
L_100c6c0e:;
  /* 100c6c0e call 0x100c5bd0 */
  push32(0x100c6c13u); f_100c5bd0();
  /* 100c6c13 call 0x100c5a90 */
  push32(0x100c6c18u); f_100c5a90();
  /* 100c6c18 call 0x100c2780 */
  push32(0x100c6c1du); f_100c2780();
  /* 100c6c1d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6c20 jge 0x100c6c27 */
  if ((C.sf==C.of)) goto L_100c6c27;
  /* 100c6c22 call 0x100c52b0 */
  push32(0x100c6c27u); f_100c52b0();
L_100c6c27:;
  /* 100c6c27 call 0x100c5fd0 */
  push32(0x100c6c2cu); f_100c5fd0();
  /* 100c6c2c call 0x100c62f0 */
  push32(0x100c6c31u); f_100c62f0();
  /* 100c6c31 jmp 0x100c6630 */
  f_100c6630(); return;
}

/* FUN_10006c40 @ 0x100c6c40 (247 bytes, 70 insns) */
void f_100c6c40(void) {
  FTRACE(0x100c6c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c6c40 push esi */
  push32((uint32_t)(ESI));
  /* 100c6c41 push edi */
  push32((uint32_t)(EDI));
  /* 100c6c42 call 0x100c6b60 */
  push32(0x100c6c47u); f_100c6b60();
  /* 100c6c47 call 0x100c6950 */
  push32(0x100c6c4cu); f_100c6950();
  /* 100c6c4c mov edi, 2 */
  EDI = (0x2u);
L_100c6c51:;
  /* 100c6c51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6c53 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c6c55 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c6c5a push 0x100d61b0 */
  push32((uint32_t)(0x100d61b0u));
  /* 100c6c5f call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6c65u);
  /* 100c6c65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6c67 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c6c69 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c6c6e push 0x100d36a8 */
  push32((uint32_t)(0x100d36a8u));
  /* 100c6c73 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6c79u);
  /* 100c6c79 mov eax, dword ptr [0x100d62d4] */
  EAX = (r32((uint32_t)(0x100d62d4)));
  /* 100c6c7e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6c81 push eax */
  push32((uint32_t)(EAX));
  /* 100c6c82 call 0x100c26f0 */
  push32(0x100c6c87u); f_100c26f0();
  /* 100c6c87 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6c8c jne 0x100c6cac */
  if (!C.zf) goto L_100c6cac;
  /* 100c6c8e mov esi, 0x64 */
  ESI = (0x64u);
L_100c6c93:;
  /* 100c6c93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6c95 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c6c97 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 100c6c99 push 0x100d38a8 */
  push32((uint32_t)(0x100d38a8u));
  /* 100c6c9e call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6ca4u);
  /* 100c6ca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6ca7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100c6ca8 jne 0x100c6c93 */
  if (!C.zf) goto L_100c6c93;
  /* 100c6caa jmp 0x100c6cc0 */
  goto L_100c6cc0;
L_100c6cac:;
  /* 100c6cac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6cae push 0xa */
  push32((uint32_t)(0xau));
  /* 100c6cb0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100c6cb2 push 0x100d6180 */
  push32((uint32_t)(0x100d6180u));
  /* 100c6cb7 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6cbdu);
  /* 100c6cbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6cc0:;
  /* 100c6cc0 push 0x100d6040 */
  push32((uint32_t)(0x100d6040u));
  /* 100c6cc5 call dword ptr [0x100d656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d656c))), 0x100c6ccbu);
  /* 100c6ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6cce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c6cd0 jne 0x100c6ce9 */
  if (!C.zf) goto L_100c6ce9;
  /* 100c6cd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c6cd6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c6cdb push 0x100d36b0 */
  push32((uint32_t)(0x100d36b0u));
  /* 100c6ce0 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6ce6u);
  /* 100c6ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c6ce9:;
  /* 100c6ce9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6ceb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c6ced push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c6cf2 push 0x100d36a0 */
  push32((uint32_t)(0x100d36a0u));
  /* 100c6cf7 call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6cfdu);
  /* 100c6cfd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c6cff push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100c6d01 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100c6d06 push 0x100d5fa0 */
  push32((uint32_t)(0x100d5fa0u));
  /* 100c6d0b call dword ptr [0x100d6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6524))), 0x100c6d11u);
  /* 100c6d11 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6d14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100c6d15 jne 0x100c6c51 */
  if (!C.zf) goto L_100c6c51;
  /* 100c6d1b call 0x100c6730 */
  push32(0x100c6d20u); f_100c6730();
  /* 100c6d20 call 0x100c5fd0 */
  push32(0x100c6d25u); f_100c5fd0();
  /* 100c6d25 call 0x100c62f0 */
  push32(0x100c6d2au); f_100c62f0();
  /* 100c6d2a call 0x100c52b0 */
  push32(0x100c6d2fu); f_100c52b0();
  /* 100c6d2f call 0x100c5a90 */
  push32(0x100c6d34u); f_100c5a90();
  /* 100c6d34 pop edi */
  EDI = (pop32());
  /* 100c6d35 pop esi */
  ESI = (pop32());
  /* 100c6d36 ret  */
  ESPCHK(0x100c6c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d40 @ 0x100c6d40 (279 bytes, 62 insns) [1 switch table(s)] */
void f_100c6d40(void) {
  FTRACE(0x100c6d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c6d40 call 0x100c2680 */
  push32(0x100c6d45u); f_100c2680();
  /* 100c6d45 mov dword ptr [0x100d5f78], eax */
  w32((uint32_t)(0x100d5f78), (EAX));
  /* 100c6d4a call 0x100c2660 */
  push32(0x100c6d4fu); f_100c2660();
  /* 100c6d4f mov dword ptr [0x100d6388], eax */
  w32((uint32_t)(0x100d6388), (EAX));
  /* 100c6d54 call 0x100c2670 */
  push32(0x100c6d59u); f_100c2670();
  /* 100c6d59 mov dword ptr [0x100d38b8], eax */
  w32((uint32_t)(0x100d38b8), (EAX));
  /* 100c6d5e call 0x100c3040 */
  push32(0x100c6d63u); f_100c3040();
  /* 100c6d63 push 0x100cf114 */
  push32((uint32_t)(0x100cf114u));
  /* 100c6d68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100c6d6a call dword ptr [0x100d652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d652c))), 0x100c6d70u);
  /* 100c6d70 call 0x100c6630 */
  push32(0x100c6d75u); f_100c6630();
  /* 100c6d75 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100c6d77 push 0x100cf244 */
  push32((uint32_t)(0x100cf244u));
  /* 100c6d7c call 0x100c2700 */
  push32(0x100c6d81u); f_100c2700();
  /* 100c6d81 mov eax, dword ptr [0x100d5f78] */
  EAX = (r32((uint32_t)(0x100d5f78)));
  /* 100c6d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6d89 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6d8c ja 0x100c6e52 */
  if ((!C.cf&&!C.zf)) goto L_100c6e52;
  /* 100c6d92 jmp dword ptr [eax*4 + 0x100c6e58] */
  switch (EAX) {
    case 0: goto L_100c6d99;
    case 1: goto L_100c6e15;
    case 2: goto L_100c6e1c;
    case 3: goto L_100c6e1c;
    case 4: goto L_100c6e1c;
    case 5: goto L_100c6d99;
    default: x86_unimpl("switch@0x100c6d92 out of table"); return;
  }
L_100c6d99:;
  /* 100c6d99 cmp dword ptr [0x100d38b8], 3 */
  { uint32_t _a=(r32((uint32_t)(0x100d38b8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6da0 jne 0x100c6dd2 */
  if (!C.zf) goto L_100c6dd2;
  /* 100c6da2 push 0x100cf160 */
  push32((uint32_t)(0x100cf160u));
  /* 100c6da7 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c6da9 call dword ptr [0x100d652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d652c))), 0x100c6dafu);
  /* 100c6daf push 0x100cf16c */
  push32((uint32_t)(0x100cf16cu));
  /* 100c6db4 call 0x100c2720 */
  push32(0x100c6db9u); f_100c2720();
  /* 100c6db9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c6dbb push 0x100cf41c */
  push32((uint32_t)(0x100cf41cu));
  /* 100c6dc0 call 0x100c2700 */
  push32(0x100c6dc5u); f_100c2700();
  /* 100c6dc5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6dc8 call 0x100c6c40 */
  push32(0x100c6dcdu); f_100c6c40();
  /* 100c6dcd jmp 0x100c6e52 */
  goto L_100c6e52;
L_100c6dd2:;
  /* 100c6dd2 push 0x100cf114 */
  push32((uint32_t)(0x100cf114u));
  /* 100c6dd7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100c6dd9 call dword ptr [0x100d652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d652c))), 0x100c6ddfu);
  /* 100c6ddf push 0x100d65b8 */
  push32((uint32_t)(0x100d65b8u));
  /* 100c6de4 call 0x100c2720 */
  push32(0x100c6de9u); f_100c2720();
  /* 100c6de9 mov eax, dword ptr [0x100d38b8] */
  EAX = (r32((uint32_t)(0x100d38b8)));
  /* 100c6dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6df3 jne 0x100c6dff */
  if (!C.zf) goto L_100c6dff;
  /* 100c6df5 mov dword ptr [0x100cf248], 4 */
  w32((uint32_t)(0x100cf248), (0x4u));
L_100c6dff:;
  /* 100c6dff push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100c6e01 push 0x100cf244 */
  push32((uint32_t)(0x100cf244u));
  /* 100c6e06 call 0x100c2700 */
  push32(0x100c6e0bu); f_100c2700();
  /* 100c6e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6e0e call 0x100c6be0 */
  push32(0x100c6e13u); f_100c6be0();
  /* 100c6e13 jmp 0x100c6e52 */
  goto L_100c6e52;
L_100c6e15:;
  /* 100c6e15 call 0x100c43e0 */
  push32(0x100c6e1au); f_100c43e0();
  /* 100c6e1a jmp 0x100c6e52 */
  goto L_100c6e52;
L_100c6e1c:;
  /* 100c6e1c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100c6e21 call dword ptr [0x100d6548] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6548))), 0x100c6e27u);
  /* 100c6e27 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100c6e2c call dword ptr [0x100d654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d654c))), 0x100c6e32u);
  /* 100c6e32 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100c6e37 call dword ptr [0x100d6550] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6550))), 0x100c6e3du);
  /* 100c6e3d push 0x100cf07c */
  push32((uint32_t)(0x100cf07cu));
  /* 100c6e42 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100c6e44 call dword ptr [0x100d652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d652c))), 0x100c6e4au);
  /* 100c6e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6e4d call 0x100c3360 */
  push32(0x100c6e52u); f_100c3360();
L_100c6e52:;
  /* 100c6e52 jmp 0x100c31c0 */
  f_100c31c0(); return;
}

/* FUN_10006e70 @ 0x100c6e70 (82 bytes, 32 insns) */
void f_100c6e70(void) {
  FTRACE(0x100c6e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c6e70 push ebp */
  push32((uint32_t)(EBP));
  /* 100c6e71 mov ebp, esp */
  EBP = (ESP);
  /* 100c6e73 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c6e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c6e79 push esi */
  push32((uint32_t)(ESI));
  /* 100c6e7a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 100c6e7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100c6e80 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100c6e83 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 100c6e8a push eax */
  push32((uint32_t)(EAX));
  /* 100c6e8b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 100c6e8e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c6e91 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 100c6e98 push eax */
  push32((uint32_t)(EAX));
  /* 100c6e99 call 0x100c71fc */
  push32(0x100c6e9eu); f_100c71fc();
  /* 100c6e9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6ea1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 100c6ea4 mov esi, eax */
  ESI = (EAX);
  /* 100c6ea6 js 0x100c6eb0 */
  if (C.sf) goto L_100c6eb0;
  /* 100c6ea8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 100c6eab and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 100c6eae jmp 0x100c6ebd */
  goto L_100c6ebd;
L_100c6eb0:;
  /* 100c6eb0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 100c6eb3 push eax */
  push32((uint32_t)(EAX));
  /* 100c6eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c6eb6 call 0x100c70e4 */
  push32(0x100c6ebbu); f_100c70e4();
  /* 100c6ebb pop ecx */
  ECX = (pop32());
  /* 100c6ebc pop ecx */
  ECX = (pop32());
L_100c6ebd:;
  /* 100c6ebd mov eax, esi */
  EAX = (ESI);
  /* 100c6ebf pop esi */
  ESI = (pop32());
  /* 100c6ec0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c6ec1 ret  */
  ESPCHK(0x100c6e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec2 @ 0x100c6ec2 (23 bytes, 6 insns) */
void f_100c6ec2(void) {
  FTRACE(0x100c6ec2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c6ec2 call 0x100c6eda */
  push32(0x100c6ec7u); f_100c6eda();
  /* 100c6ec7 call 0x100c7a56 */
  push32(0x100c6eccu); f_100c7a56();
  /* 100c6ecc mov dword ptr [0x100d6680], eax */
  w32((uint32_t)(0x100d6680), (EAX));
  /* 100c6ed1 call 0x100c7a06 */
  push32(0x100c6ed6u); f_100c7a06();
  /* 100c6ed6 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 100c6ed8 ret  */
  ESPCHK(0x100c6ec2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eda @ 0x100c6eda (56 bytes, 8 insns) */
void f_100c6eda(void) {
  FTRACE(0x100c6edau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c6eda mov eax, 0x100c7e2f */
  EAX = (0x100c7e2fu);
  /* 100c6edf mov dword ptr [0x100d06c0], 0x100c7ad9 */
  w32((uint32_t)(0x100d06c0), (0x100c7ad9u));
  /* 100c6ee9 mov dword ptr [0x100d06bc], eax */
  w32((uint32_t)(0x100d06bc), (EAX));
  /* 100c6eee mov dword ptr [0x100d06c4], 0x100c7b3f */
  w32((uint32_t)(0x100d06c4), (0x100c7b3fu));
  /* 100c6ef8 mov dword ptr [0x100d06c8], 0x100c7a7f */
  w32((uint32_t)(0x100d06c8), (0x100c7a7fu));
  /* 100c6f02 mov dword ptr [0x100d06cc], 0x100c7b27 */
  w32((uint32_t)(0x100d06cc), (0x100c7b27u));
  /* 100c6f0c mov dword ptr [0x100d06d0], eax */
  w32((uint32_t)(0x100d06d0), (EAX));
  /* 100c6f11 ret  */
  ESPCHK(0x100c6edau, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x100c6f14 (39 bytes, 16 insns) */
void f_100c6f14(void) {
  FTRACE(0x100c6f14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c6f14 push ebp */
  push32((uint32_t)(EBP));
  /* 100c6f15 mov ebp, esp */
  EBP = (ESP);
  /* 100c6f17 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6f1a wait  */
  /* wait (no observable integer/reg state) */
  /* 100c6f1b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 100c6f1e wait  */
  /* wait (no observable integer/reg state) */
  /* 100c6f1f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 100c6f23 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 100c6f26 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 100c6f2a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 100c6f2d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 100c6f30 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 100c6f33 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100c6f36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 100c6f39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c6f3a ret  */
  ESPCHK(0x100c6f14u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f3b @ 0x100c6f3b (217 bytes, 57 insns) */
void f_100c6f3b(void) {
  FTRACE(0x100c6f3bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c6f3b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c6f3f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6f42 jne 0x100c6fd0 */
  if (!C.zf) goto L_100c6fd0;
  /* 100c6f48 call dword ptr [0x100ce014] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce014))), 0x100c6f4eu);
  /* 100c6f4e push 1 */
  push32((uint32_t)(0x1u));
  /* 100c6f50 mov dword ptr [0x100d669c], eax */
  w32((uint32_t)(0x100d669c), (EAX));
  /* 100c6f55 call 0x100c890c */
  push32(0x100c6f5au); f_100c890c();
  /* 100c6f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6f5c pop ecx */
  ECX = (pop32());
  /* 100c6f5d je 0x100c6f9b */
  if (C.zf) goto L_100c6f9b;
  /* 100c6f5f mov eax, dword ptr [0x100d669c] */
  EAX = (r32((uint32_t)(0x100d669c)));
  /* 100c6f64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100c6f66 mov cl, byte ptr [0x100d669d] */
  CL = (r8((uint32_t)(0x100d669d)));
  /* 100c6f6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100c6f71 shr dword ptr [0x100d669c], 0x10 */
  w32((uint32_t)(0x100d669c), (sh_shr((uint32_t)(r32((uint32_t)(0x100d669c))), (0x10u)&0x1f, 32)));
  /* 100c6f78 mov dword ptr [0x100d66a4], eax */
  w32((uint32_t)(0x100d66a4), (EAX));
  /* 100c6f7d mov dword ptr [0x100d66a8], ecx */
  w32((uint32_t)(0x100d66a8), (ECX));
  /* 100c6f83 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100c6f86 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c6f88 mov dword ptr [0x100d66a0], eax */
  w32((uint32_t)(0x100d66a0), (EAX));
  /* 100c6f8d call 0x100c7fc3 */
  push32(0x100c6f92u); f_100c7fc3();
  /* 100c6f92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c6f94 jne 0x100c6f9f */
  if (!C.zf) goto L_100c6f9f;
  /* 100c6f96 call 0x100c8969 */
  push32(0x100c6f9bu); f_100c8969();
L_100c6f9b:;
  /* 100c6f9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c6f9d jmp 0x100c7011 */
  goto L_100c7011;
L_100c6f9f:;
  /* 100c6f9f call dword ptr [0x100ce010] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce010))), 0x100c6fa5u);
  /* 100c6fa5 mov dword ptr [0x100d7d94], eax */
  w32((uint32_t)(0x100d7d94), (EAX));
  /* 100c6faa call 0x100c8665 */
  push32(0x100c6fafu); f_100c8665();
  /* 100c6faf mov dword ptr [0x100d6688], eax */
  w32((uint32_t)(0x100d6688), (EAX));
  /* 100c6fb4 call 0x100c814f */
  push32(0x100c6fb9u); f_100c814f();
  /* 100c6fb9 call 0x100c8418 */
  push32(0x100c6fbeu); f_100c8418();
  /* 100c6fbe call 0x100c835f */
  push32(0x100c6fc3u); f_100c835f();
  /* 100c6fc3 call 0x100c7ea5 */
  push32(0x100c6fc8u); f_100c7ea5();
  /* 100c6fc8 inc dword ptr [0x100d6684] */
  { uint32_t _r=(r32((uint32_t)(0x100d6684)))+1; w32((uint32_t)(0x100d6684), (_r)); fl_inc(_r,32); }
  /* 100c6fce jmp 0x100c700e */
  goto L_100c700e;
L_100c6fd0:;
  /* 100c6fd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100c6fd2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6fd4 jne 0x100c7002 */
  if (!C.zf) goto L_100c7002;
  /* 100c6fd6 cmp dword ptr [0x100d6684], ecx */
  { uint32_t _a=(r32((uint32_t)(0x100d6684))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6fdc jle 0x100c6f9b */
  if ((C.zf||C.sf!=C.of)) goto L_100c6f9b;
  /* 100c6fde dec dword ptr [0x100d6684] */
  { uint32_t _r=(r32((uint32_t)(0x100d6684)))-1; w32((uint32_t)(0x100d6684), (_r)); fl_dec(_r,32); }
  /* 100c6fe4 cmp dword ptr [0x100d66d4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x100d66d4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c6fea jne 0x100c6ff1 */
  if (!C.zf) goto L_100c6ff1;
  /* 100c6fec call 0x100c7ee3 */
  push32(0x100c6ff1u); f_100c7ee3();
L_100c6ff1:;
  /* 100c6ff1 call 0x100c830b */
  push32(0x100c6ff6u); f_100c830b();
  /* 100c6ff6 call 0x100c8017 */
  push32(0x100c6ffbu); f_100c8017();
  /* 100c6ffb call 0x100c8969 */
  push32(0x100c7000u); f_100c8969();
  /* 100c7000 jmp 0x100c700e */
  goto L_100c700e;
L_100c7002:;
  /* 100c7002 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7005 jne 0x100c700e */
  if (!C.zf) goto L_100c700e;
  /* 100c7007 push ecx */
  push32((uint32_t)(ECX));
  /* 100c7008 call 0x100c80af */
  push32(0x100c700du); f_100c80af();
  /* 100c700d pop ecx */
  ECX = (pop32());
L_100c700e:;
  /* 100c700e push 1 */
  push32((uint32_t)(0x1u));
  /* 100c7010 pop eax */
  EAX = (pop32());
L_100c7011:;
  /* 100c7011 ret 0xc */
  ESPCHK(0x100c6f3bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x100c7014 (157 bytes, 73 insns) */
void f_100c7014(void) {
  FTRACE(0x100c7014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7014 push ebp */
  push32((uint32_t)(EBP));
  /* 100c7015 mov ebp, esp */
  EBP = (ESP);
  /* 100c7017 push ebx */
  push32((uint32_t)(EBX));
  /* 100c7018 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c701b push esi */
  push32((uint32_t)(ESI));
  /* 100c701c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100c701f push edi */
  push32((uint32_t)(EDI));
  /* 100c7020 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100c7023 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c7025 jne 0x100c7030 */
  if (!C.zf) goto L_100c7030;
  /* 100c7027 cmp dword ptr [0x100d6684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100d6684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c702e jmp 0x100c7056 */
  goto L_100c7056;
L_100c7030:;
  /* 100c7030 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7033 je 0x100c703a */
  if (C.zf) goto L_100c703a;
  /* 100c7035 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7038 jne 0x100c705c */
  if (!C.zf) goto L_100c705c;
L_100c703a:;
  /* 100c703a mov eax, dword ptr [0x100d7d98] */
  EAX = (r32((uint32_t)(0x100d7d98)));
  /* 100c703f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c7041 je 0x100c704c */
  if (C.zf) goto L_100c704c;
  /* 100c7043 push edi */
  push32((uint32_t)(EDI));
  /* 100c7044 push esi */
  push32((uint32_t)(ESI));
  /* 100c7045 push ebx */
  push32((uint32_t)(EBX));
  /* 100c7046 call eax */
  call_ind((uint32_t)(EAX), 0x100c7048u);
  /* 100c7048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c704a je 0x100c7058 */
  if (C.zf) goto L_100c7058;
L_100c704c:;
  /* 100c704c push edi */
  push32((uint32_t)(EDI));
  /* 100c704d push esi */
  push32((uint32_t)(ESI));
  /* 100c704e push ebx */
  push32((uint32_t)(EBX));
  /* 100c704f call 0x100c6f3b */
  push32(0x100c7054u); f_100c6f3b();
  /* 100c7054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_100c7056:;
  /* 100c7056 jne 0x100c705c */
  if (!C.zf) goto L_100c705c;
L_100c7058:;
  /* 100c7058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c705a jmp 0x100c70aa */
  goto L_100c70aa;
L_100c705c:;
  /* 100c705c push edi */
  push32((uint32_t)(EDI));
  /* 100c705d push esi */
  push32((uint32_t)(ESI));
  /* 100c705e push ebx */
  push32((uint32_t)(EBX));
  /* 100c705f call 0x100c27f0 */
  push32(0x100c7064u); f_100c27f0();
  /* 100c7064 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7067 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100c706a jne 0x100c7078 */
  if (!C.zf) goto L_100c7078;
  /* 100c706c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c706e jne 0x100c70a7 */
  if (!C.zf) goto L_100c70a7;
  /* 100c7070 push edi */
  push32((uint32_t)(EDI));
  /* 100c7071 push eax */
  push32((uint32_t)(EAX));
  /* 100c7072 push ebx */
  push32((uint32_t)(EBX));
  /* 100c7073 call 0x100c6f3b */
  push32(0x100c7078u); f_100c6f3b();
L_100c7078:;
  /* 100c7078 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c707a je 0x100c7081 */
  if (C.zf) goto L_100c7081;
  /* 100c707c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c707f jne 0x100c70a7 */
  if (!C.zf) goto L_100c70a7;
L_100c7081:;
  /* 100c7081 push edi */
  push32((uint32_t)(EDI));
  /* 100c7082 push esi */
  push32((uint32_t)(ESI));
  /* 100c7083 push ebx */
  push32((uint32_t)(EBX));
  /* 100c7084 call 0x100c6f3b */
  push32(0x100c7089u); f_100c6f3b();
  /* 100c7089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c708b jne 0x100c7090 */
  if (!C.zf) goto L_100c7090;
  /* 100c708d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_100c7090:;
  /* 100c7090 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7094 je 0x100c70a7 */
  if (C.zf) goto L_100c70a7;
  /* 100c7096 mov eax, dword ptr [0x100d7d98] */
  EAX = (r32((uint32_t)(0x100d7d98)));
  /* 100c709b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c709d je 0x100c70a7 */
  if (C.zf) goto L_100c70a7;
  /* 100c709f push edi */
  push32((uint32_t)(EDI));
  /* 100c70a0 push esi */
  push32((uint32_t)(ESI));
  /* 100c70a1 push ebx */
  push32((uint32_t)(EBX));
  /* 100c70a2 call eax */
  call_ind((uint32_t)(EAX), 0x100c70a4u);
  /* 100c70a4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_100c70a7:;
  /* 100c70a7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_100c70aa:;
  /* 100c70aa pop edi */
  EDI = (pop32());
  /* 100c70ab pop esi */
  ESI = (pop32());
  /* 100c70ac pop ebx */
  EBX = (pop32());
  /* 100c70ad pop ebp */
  EBP = (pop32());
  /* 100c70ae ret 0xc */
  ESPCHK(0x100c7014u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x100c70b1 (48 bytes, 15 insns) */
void f_100c70b1(void) {
  FTRACE(0x100c70b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c70b1 mov eax, dword ptr [0x100d6690] */
  EAX = (r32((uint32_t)(0x100d6690)));
  /* 100c70b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c70b9 je 0x100c70c8 */
  if (C.zf) goto L_100c70c8;
  /* 100c70bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c70bd jne 0x100c70cd */
  if (!C.zf) goto L_100c70cd;
  /* 100c70bf cmp dword ptr [0x100d6694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100d6694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c70c6 jne 0x100c70cd */
  if (!C.zf) goto L_100c70cd;
L_100c70c8:;
  /* 100c70c8 call 0x100c8a11 */
  push32(0x100c70cdu); f_100c8a11();
L_100c70cd:;
  /* 100c70cd push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100c70d1 call 0x100c8a4a */
  push32(0x100c70d6u); f_100c8a4a();
  /* 100c70d6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 100c70db call dword ptr [0x100d06b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d06b0))), 0x100c70e1u);
  /* 100c70e1 pop ecx */
  ECX = (pop32());
  /* 100c70e2 pop ecx */
  ECX = (pop32());
  /* 100c70e3 ret  */
  ESPCHK(0x100c70b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e4 @ 0x100c70e4 (280 bytes, 106 insns) */
void f_100c70e4(void) {
  FTRACE(0x100c70e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c70e4 push ebp */
  push32((uint32_t)(EBP));
  /* 100c70e5 mov ebp, esp */
  EBP = (ESP);
  /* 100c70e7 push ebx */
  push32((uint32_t)(EBX));
  /* 100c70e8 push esi */
  push32((uint32_t)(ESI));
  /* 100c70e9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100c70ec mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100c70ef mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 100c70f2 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 100c70f4 je 0x100c71f0 */
  if (C.zf) goto L_100c71f0;
  /* 100c70fa test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 100c70fc jne 0x100c71f0 */
  if (!C.zf) goto L_100c71f0;
  /* 100c7102 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 100c7104 je 0x100c711c */
  if (C.zf) goto L_100c711c;
  /* 100c7106 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100c710a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 100c710c je 0x100c71f0 */
  if (C.zf) goto L_100c71f0;
  /* 100c7112 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 100c7115 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 100c7117 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100c7119 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_100c711c:;
  /* 100c711c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100c711f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100c7123 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 100c7127 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 100c7129 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 100c712b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 100c712f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 100c7132 jne 0x100c7156 */
  if (!C.zf) goto L_100c7156;
  /* 100c7134 cmp esi, 0x100d07b0 */
  { uint32_t _a=(ESI),_b=(0x100d07b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c713a je 0x100c7144 */
  if (C.zf) goto L_100c7144;
  /* 100c713c cmp esi, 0x100d07d0 */
  { uint32_t _a=(ESI),_b=(0x100d07d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7142 jne 0x100c714f */
  if (!C.zf) goto L_100c714f;
L_100c7144:;
  /* 100c7144 push ebx */
  push32((uint32_t)(EBX));
  /* 100c7145 call 0x100c8ea9 */
  push32(0x100c714au); f_100c8ea9();
  /* 100c714a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c714c pop ecx */
  ECX = (pop32());
  /* 100c714d jne 0x100c7156 */
  if (!C.zf) goto L_100c7156;
L_100c714f:;
  /* 100c714f push esi */
  push32((uint32_t)(ESI));
  /* 100c7150 call 0x100c8e65 */
  push32(0x100c7155u); f_100c8e65();
  /* 100c7155 pop ecx */
  ECX = (pop32());
L_100c7156:;
  /* 100c7156 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 100c715c push edi */
  push32((uint32_t)(EDI));
  /* 100c715d je 0x100c71c6 */
  if (C.zf) goto L_100c71c6;
  /* 100c715f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100c7162 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 100c7164 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7166 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100c7169 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100c716b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 100c716e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100c716f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100c7171 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 100c7174 jle 0x100c7186 */
  if ((C.zf||C.sf!=C.of)) goto L_100c7186;
  /* 100c7176 push edi */
  push32((uint32_t)(EDI));
  /* 100c7177 push eax */
  push32((uint32_t)(EAX));
  /* 100c7178 push ebx */
  push32((uint32_t)(EBX));
  /* 100c7179 call 0x100c8c75 */
  push32(0x100c717eu); f_100c8c75();
  /* 100c717e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7181 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100c7184 jmp 0x100c71bc */
  goto L_100c71bc;
L_100c7186:;
  /* 100c7186 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7189 je 0x100c71a4 */
  if (C.zf) goto L_100c71a4;
  /* 100c718b mov ecx, ebx */
  ECX = (EBX);
  /* 100c718d mov eax, ebx */
  EAX = (EBX);
  /* 100c718f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100c7192 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100c7195 mov ecx, dword ptr [ecx*4 + 0x100d7c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100d7c80)));
  /* 100c719c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100c719f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100c71a2 jmp 0x100c71a9 */
  goto L_100c71a9;
L_100c71a4:;
  /* 100c71a4 mov eax, 0x100d06d8 */
  EAX = (0x100d06d8u);
L_100c71a9:;
  /* 100c71a9 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100c71ad je 0x100c71bc */
  if (C.zf) goto L_100c71bc;
  /* 100c71af push 2 */
  push32((uint32_t)(0x2u));
  /* 100c71b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c71b3 push ebx */
  push32((uint32_t)(EBX));
  /* 100c71b4 call 0x100c8b9d */
  push32(0x100c71b9u); f_100c8b9d();
  /* 100c71b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c71bc:;
  /* 100c71bc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100c71bf mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 100c71c2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100c71c4 jmp 0x100c71da */
  goto L_100c71da;
L_100c71c6:;
  /* 100c71c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c71c8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100c71cb pop edi */
  EDI = (pop32());
  /* 100c71cc push edi */
  push32((uint32_t)(EDI));
  /* 100c71cd push eax */
  push32((uint32_t)(EAX));
  /* 100c71ce push ebx */
  push32((uint32_t)(EBX));
  /* 100c71cf call 0x100c8c75 */
  push32(0x100c71d4u); f_100c8c75();
  /* 100c71d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c71d7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_100c71da:;
  /* 100c71da cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c71dd pop edi */
  EDI = (pop32());
  /* 100c71de je 0x100c71e6 */
  if (C.zf) goto L_100c71e6;
  /* 100c71e0 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100c71e4 jmp 0x100c71f5 */
  goto L_100c71f5;
L_100c71e6:;
  /* 100c71e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c71e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100c71ee jmp 0x100c71f8 */
  goto L_100c71f8;
L_100c71f0:;
  /* 100c71f0 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 100c71f2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_100c71f5:;
  /* 100c71f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100c71f8:;
  /* 100c71f8 pop esi */
  ESI = (pop32());
  /* 100c71f9 pop ebx */
  EBX = (pop32());
  /* 100c71fa pop ebp */
  EBP = (pop32());
  /* 100c71fb ret  */
  ESPCHK(0x100c70e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100071fc @ 0x100c71fc (1825 bytes, 595 insns) [1 switch table(s)] */
void f_100c71fc(void) {
  FTRACE(0x100c71fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c71fc push ebp */
  push32((uint32_t)(EBP));
  /* 100c71fd mov ebp, esp */
  EBP = (ESP);
  /* 100c71ff sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7205 push ebx */
  push32((uint32_t)(EBX));
  /* 100c7206 push esi */
  push32((uint32_t)(ESI));
  /* 100c7207 push edi */
  push32((uint32_t)(EDI));
  /* 100c7208 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100c720b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100c720d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100c720f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100c7210 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100c7212 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 100c7215 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 100c7218 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 100c721b je 0x100c7915 */
  if (C.zf) goto L_100c7915;
  /* 100c7221 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100c7224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100c7226 jmp 0x100c7230 */
  goto L_100c7230;
L_100c7228:;
  /* 100c7228 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100c722b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 100c722e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_100c7230:;
  /* 100c7230 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7233 jl 0x100c7915 */
  if ((C.sf!=C.of)) goto L_100c7915;
  /* 100c7239 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c723c jl 0x100c7251 */
  if ((C.sf!=C.of)) goto L_100c7251;
  /* 100c723e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c7241 jg 0x100c7251 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c7251;
  /* 100c7243 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100c7246 mov al, byte ptr [eax + 0x100ce0c8] */
  AL = (r8((uint32_t)(EAX + 0x100ce0c8)));
  /* 100c724c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 100c724f jmp 0x100c7253 */
  goto L_100c7253;
L_100c7251:;
  /* 100c7251 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100c7253:;
  /* 100c7253 movsx eax, byte ptr [esi + eax*8 + 0x100ce0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x100ce0e8))));
  /* 100c725b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100c725e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7261 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 100c7264 ja 0x100c7904 */
  if ((!C.cf&&!C.zf)) goto L_100c7904;
  /* 100c726a jmp dword ptr [eax*4 + 0x100c791d] */
  switch (EAX) {
    case 0: goto L_100c739b;
    case 1: goto L_100c7271;
    case 2: goto L_100c728c;
    case 3: goto L_100c72d8;
    case 4: goto L_100c730f;
    case 5: goto L_100c7317;
    case 6: goto L_100c734c;
    case 7: goto L_100c73df;
    default: x86_unimpl("switch@0x100c726a out of table"); return;
  }
L_100c7271:;
  /* 100c7271 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 100c7275 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 100c7278 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 100c727b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 100c727e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 100c7281 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 100c7284 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100c7287 jmp 0x100c7904 */
  goto L_100c7904;
L_100c728c:;
  /* 100c728c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100c728f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7292 je 0x100c72cf */
  if (C.zf) goto L_100c72cf;
  /* 100c7294 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7297 je 0x100c72c6 */
  if (C.zf) goto L_100c72c6;
  /* 100c7299 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c729c je 0x100c72bd */
  if (C.zf) goto L_100c72bd;
  /* 100c729e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c729f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c72a0 je 0x100c72b4 */
  if (C.zf) goto L_100c72b4;
  /* 100c72a2 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c72a5 jne 0x100c7904 */
  if (!C.zf) goto L_100c7904;
  /* 100c72ab or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100c72af jmp 0x100c7904 */
  goto L_100c7904;
L_100c72b4:;
  /* 100c72b4 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100c72b8 jmp 0x100c7904 */
  goto L_100c7904;
L_100c72bd:;
  /* 100c72bd or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100c72c1 jmp 0x100c7904 */
  goto L_100c7904;
L_100c72c6:;
  /* 100c72c6 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 100c72ca jmp 0x100c7904 */
  goto L_100c7904;
L_100c72cf:;
  /* 100c72cf or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100c72d3 jmp 0x100c7904 */
  goto L_100c7904;
L_100c72d8:;
  /* 100c72d8 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c72db jne 0x100c7300 */
  if (!C.zf) goto L_100c7300;
  /* 100c72dd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100c72e0 push eax */
  push32((uint32_t)(EAX));
  /* 100c72e1 call 0x100c79db */
  push32(0x100c72e6u); f_100c79db();
  /* 100c72e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c72e8 pop ecx */
  ECX = (pop32());
  /* 100c72e9 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100c72ec jge 0x100c7904 */
  if ((C.sf==C.of)) goto L_100c7904;
  /* 100c72f2 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100c72f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_100c72f8:;
  /* 100c72f8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100c72fb jmp 0x100c7904 */
  goto L_100c7904;
L_100c7300:;
  /* 100c7300 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 100c7303 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100c7306 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100c7309 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 100c730d jmp 0x100c72f8 */
  goto L_100c72f8;
L_100c730f:;
  /* 100c730f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 100c7312 jmp 0x100c7904 */
  goto L_100c7904;
L_100c7317:;
  /* 100c7317 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c731a jne 0x100c733a */
  if (!C.zf) goto L_100c733a;
  /* 100c731c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100c731f push eax */
  push32((uint32_t)(EAX));
  /* 100c7320 call 0x100c79db */
  push32(0x100c7325u); f_100c79db();
  /* 100c7325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c7327 pop ecx */
  ECX = (pop32());
  /* 100c7328 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100c732b jge 0x100c7904 */
  if ((C.sf==C.of)) goto L_100c7904;
  /* 100c7331 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 100c7335 jmp 0x100c7904 */
  goto L_100c7904;
L_100c733a:;
  /* 100c733a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 100c733d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100c7340 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 100c7344 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100c7347 jmp 0x100c7904 */
  goto L_100c7904;
L_100c734c:;
  /* 100c734c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c734f je 0x100c737f */
  if (C.zf) goto L_100c737f;
  /* 100c7351 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c7354 je 0x100c7376 */
  if (C.zf) goto L_100c7376;
  /* 100c7356 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c7359 je 0x100c736d */
  if (C.zf) goto L_100c736d;
  /* 100c735b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c735e jne 0x100c7904 */
  if (!C.zf) goto L_100c7904;
  /* 100c7364 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100c7368 jmp 0x100c7904 */
  goto L_100c7904;
L_100c736d:;
  /* 100c736d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100c7371 jmp 0x100c7904 */
  goto L_100c7904;
L_100c7376:;
  /* 100c7376 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100c737a jmp 0x100c7904 */
  goto L_100c7904;
L_100c737f:;
  /* 100c737f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c7382 jne 0x100c7398 */
  if (!C.zf) goto L_100c7398;
  /* 100c7384 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c7388 jne 0x100c7398 */
  if (!C.zf) goto L_100c7398;
  /* 100c738a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100c738b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100c738c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100c7390 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 100c7393 jmp 0x100c7904 */
  goto L_100c7904;
L_100c7398:;
  /* 100c7398 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_100c739b:;
  /* 100c739b mov ecx, dword ptr [0x100d0a10] */
  ECX = (r32((uint32_t)(0x100d0a10)));
  /* 100c73a1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100c73a4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100c73a7 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100c73ac je 0x100c73c7 */
  if (C.zf) goto L_100c73c7;
  /* 100c73ae lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100c73b1 push eax */
  push32((uint32_t)(EAX));
  /* 100c73b2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c73b5 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100c73b8 push eax */
  push32((uint32_t)(EAX));
  /* 100c73b9 call 0x100c793d */
  push32(0x100c73beu); f_100c793d();
  /* 100c73be mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100c73c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c73c3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100c73c4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100c73c7:;
  /* 100c73c7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100c73ca push eax */
  push32((uint32_t)(EAX));
  /* 100c73cb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c73ce movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100c73d1 push eax */
  push32((uint32_t)(EAX));
  /* 100c73d2 call 0x100c793d */
  push32(0x100c73d7u); f_100c793d();
  /* 100c73d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c73da jmp 0x100c7904 */
  goto L_100c7904;
L_100c73df:;
  /* 100c73df movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100c73e2 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c73e5 jg 0x100c7607 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c7607;
  /* 100c73eb cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c73ee jge 0x100c748a */
  if ((C.sf==C.of)) goto L_100c748a;
  /* 100c73f4 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c73f7 jg 0x100c74e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c74e8;
  /* 100c73fd je 0x100c767b */
  if (C.zf) goto L_100c767b;
  /* 100c7403 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7406 je 0x100c74ab */
  if (C.zf) goto L_100c74ab;
  /* 100c740c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c740d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c740e je 0x100c7480 */
  if (C.zf) goto L_100c7480;
  /* 100c7410 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c7411 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c7412 je 0x100c7480 */
  if (C.zf) goto L_100c7480;
  /* 100c7414 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7417 jne 0x100c7806 */
  if (!C.zf) goto L_100c7806;
  /* 100c741d test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 100c7423 jne 0x100c7429 */
  if (!C.zf) goto L_100c7429;
  /* 100c7425 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_100c7429:;
  /* 100c7429 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 100c742c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c742f jne 0x100c7436 */
  if (!C.zf) goto L_100c7436;
  /* 100c7431 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_100c7436:;
  /* 100c7436 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100c7439 push eax */
  push32((uint32_t)(EAX));
  /* 100c743a call 0x100c79db */
  push32(0x100c743fu); f_100c79db();
  /* 100c743f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 100c7445 pop ecx */
  ECX = (pop32());
  /* 100c7446 mov ecx, eax */
  ECX = (EAX);
  /* 100c7448 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100c744b je 0x100c764f */
  if (C.zf) goto L_100c764f;
  /* 100c7451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100c7453 jne 0x100c745e */
  if (!C.zf) goto L_100c745e;
  /* 100c7455 mov ecx, dword ptr [0x100d06b8] */
  ECX = (r32((uint32_t)(0x100d06b8)));
  /* 100c745b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_100c745e:;
  /* 100c745e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 100c7465 mov eax, ecx */
  EAX = (ECX);
L_100c7467:;
  /* 100c7467 mov edx, esi */
  EDX = (ESI);
  /* 100c7469 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100c746a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100c746c je 0x100c7646 */
  if (C.zf) goto L_100c7646;
  /* 100c7472 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100c7476 je 0x100c7646 */
  if (C.zf) goto L_100c7646;
  /* 100c747c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c747d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c747e jmp 0x100c7467 */
  goto L_100c7467;
L_100c7480:;
  /* 100c7480 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 100c7487 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_100c748a:;
  /* 100c748a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100c748e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 100c7494 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7496 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 100c7499 jge 0x100c756e */
  if ((C.sf==C.of)) goto L_100c756e;
  /* 100c749f mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 100c74a6 jmp 0x100c757c */
  goto L_100c757c;
L_100c74ab:;
  /* 100c74ab test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 100c74b1 jne 0x100c74b7 */
  if (!C.zf) goto L_100c74b7;
  /* 100c74b3 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_100c74b7:;
  /* 100c74b7 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 100c74bd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100c74c0 push eax */
  push32((uint32_t)(EAX));
  /* 100c74c1 je 0x100c74fe */
  if (C.zf) goto L_100c74fe;
  /* 100c74c3 call 0x100c79f8 */
  push32(0x100c74c8u); f_100c79f8();
  /* 100c74c8 push eax */
  push32((uint32_t)(EAX));
  /* 100c74c9 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100c74cf push eax */
  push32((uint32_t)(EAX));
  /* 100c74d0 call 0x100c90bb */
  push32(0x100c74d5u); f_100c90bb();
  /* 100c74d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c74d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100c74db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c74dd jge 0x100c7511 */
  if ((C.sf==C.of)) goto L_100c7511;
  /* 100c74df mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 100c74e6 jmp 0x100c7511 */
  goto L_100c7511;
L_100c74e8:;
  /* 100c74e8 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c74eb je 0x100c751f */
  if (C.zf) goto L_100c751f;
  /* 100c74ed sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c74f0 je 0x100c74b7 */
  if (C.zf) goto L_100c74b7;
  /* 100c74f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c74f3 je 0x100c76e1 */
  if (C.zf) goto L_100c76e1;
  /* 100c74f9 jmp 0x100c7806 */
  goto L_100c7806;
L_100c74fe:;
  /* 100c74fe call 0x100c79db */
  push32(0x100c7503u); f_100c79db();
  /* 100c7503 pop ecx */
  ECX = (pop32());
  /* 100c7504 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 100c750a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_100c7511:;
  /* 100c7511 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100c7517 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100c751a jmp 0x100c7806 */
  goto L_100c7806;
L_100c751f:;
  /* 100c751f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100c7522 push eax */
  push32((uint32_t)(EAX));
  /* 100c7523 call 0x100c79db */
  push32(0x100c7528u); f_100c79db();
  /* 100c7528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c752a pop ecx */
  ECX = (pop32());
  /* 100c752b je 0x100c7560 */
  if (C.zf) goto L_100c7560;
  /* 100c752d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 100c7530 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100c7532 je 0x100c7560 */
  if (C.zf) goto L_100c7560;
  /* 100c7534 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 100c7538 je 0x100c7551 */
  if (C.zf) goto L_100c7551;
  /* 100c753a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 100c753d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100c753f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100c7542 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100c7545 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 100c754c jmp 0x100c7806 */
  goto L_100c7806;
L_100c7551:;
  /* 100c7551 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 100c7555 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100c7558 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 100c755b jmp 0x100c7803 */
  goto L_100c7803;
L_100c7560:;
  /* 100c7560 mov eax, dword ptr [0x100d06b4] */
  EAX = (r32((uint32_t)(0x100d06b4)));
  /* 100c7565 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100c7568 push eax */
  push32((uint32_t)(EAX));
  /* 100c7569 jmp 0x100c75fc */
  goto L_100c75fc;
L_100c756e:;
  /* 100c756e jne 0x100c757c */
  if (!C.zf) goto L_100c757c;
  /* 100c7570 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c7573 jne 0x100c757c */
  if (!C.zf) goto L_100c757c;
  /* 100c7575 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_100c757c:;
  /* 100c757c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100c757f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 100c7582 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7585 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 100c7588 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 100c758b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 100c758e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 100c7591 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 100c7594 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 100c7597 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100c759a push eax */
  push32((uint32_t)(EAX));
  /* 100c759b lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100c75a1 push eax */
  push32((uint32_t)(EAX));
  /* 100c75a2 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 100c75a5 push eax */
  push32((uint32_t)(EAX));
  /* 100c75a6 call dword ptr [0x100d06bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d06bc))), 0x100c75acu);
  /* 100c75ac mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 100c75af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c75b2 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 100c75b8 je 0x100c75ce */
  if (C.zf) goto L_100c75ce;
  /* 100c75ba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c75be jne 0x100c75ce */
  if (!C.zf) goto L_100c75ce;
  /* 100c75c0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100c75c6 push eax */
  push32((uint32_t)(EAX));
  /* 100c75c7 call dword ptr [0x100d06c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d06c8))), 0x100c75cdu);
  /* 100c75cd pop ecx */
  ECX = (pop32());
L_100c75ce:;
  /* 100c75ce cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c75d1 jne 0x100c75e5 */
  if (!C.zf) goto L_100c75e5;
  /* 100c75d3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c75d5 jne 0x100c75e5 */
  if (!C.zf) goto L_100c75e5;
  /* 100c75d7 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100c75dd push eax */
  push32((uint32_t)(EAX));
  /* 100c75de call dword ptr [0x100d06c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d06c0))), 0x100c75e4u);
  /* 100c75e4 pop ecx */
  ECX = (pop32());
L_100c75e5:;
  /* 100c75e5 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c75ec jne 0x100c75fb */
  if (!C.zf) goto L_100c75fb;
  /* 100c75ee or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100c75f2 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 100c75f8 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_100c75fb:;
  /* 100c75fb push edi */
  push32((uint32_t)(EDI));
L_100c75fc:;
  /* 100c75fc call 0x100c9040 */
  push32(0x100c7601u); f_100c9040();
  /* 100c7601 pop ecx */
  ECX = (pop32());
  /* 100c7602 jmp 0x100c7803 */
  goto L_100c7803;
L_100c7607:;
  /* 100c7607 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c760a je 0x100c76e1 */
  if (C.zf) goto L_100c76e1;
  /* 100c7610 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7613 je 0x100c76b7 */
  if (C.zf) goto L_100c76b7;
  /* 100c7619 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c761a je 0x100c76a4 */
  if (C.zf) goto L_100c76a4;
  /* 100c7620 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c7621 je 0x100c7674 */
  if (C.zf) goto L_100c7674;
  /* 100c7623 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7626 je 0x100c7429 */
  if (C.zf) goto L_100c7429;
  /* 100c762c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c762d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c762e je 0x100c76e5 */
  if (C.zf) goto L_100c76e5;
  /* 100c7634 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7637 jne 0x100c7806 */
  if (!C.zf) goto L_100c7806;
  /* 100c763d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 100c7644 jmp 0x100c7682 */
  goto L_100c7682;
L_100c7646:;
  /* 100c7646 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7648 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100c764a jmp 0x100c7803 */
  goto L_100c7803;
L_100c764f:;
  /* 100c764f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100c7651 jne 0x100c765c */
  if (!C.zf) goto L_100c765c;
  /* 100c7653 mov ecx, dword ptr [0x100d06b4] */
  ECX = (r32((uint32_t)(0x100d06b4)));
  /* 100c7659 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_100c765c:;
  /* 100c765c mov eax, ecx */
  EAX = (ECX);
L_100c765e:;
  /* 100c765e mov edx, esi */
  EDX = (ESI);
  /* 100c7660 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100c7661 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100c7663 je 0x100c766d */
  if (C.zf) goto L_100c766d;
  /* 100c7665 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c7668 je 0x100c766d */
  if (C.zf) goto L_100c766d;
  /* 100c766a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c766b jmp 0x100c765e */
  goto L_100c765e;
L_100c766d:;
  /* 100c766d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c766f jmp 0x100c7803 */
  goto L_100c7803;
L_100c7674:;
  /* 100c7674 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_100c767b:;
  /* 100c767b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_100c7682:;
  /* 100c7682 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100c7686 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 100c768d je 0x100c76ec */
  if (C.zf) goto L_100c76ec;
  /* 100c768f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 100c7692 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 100c7696 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100c7698 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 100c769f mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 100c76a2 jmp 0x100c76ec */
  goto L_100c76ec;
L_100c76a4:;
  /* 100c76a4 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100c76a8 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 100c76af je 0x100c76ec */
  if (C.zf) goto L_100c76ec;
  /* 100c76b1 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100c76b5 jmp 0x100c76ec */
  goto L_100c76ec;
L_100c76b7:;
  /* 100c76b7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100c76ba push eax */
  push32((uint32_t)(EAX));
  /* 100c76bb call 0x100c79db */
  push32(0x100c76c0u); f_100c79db();
  /* 100c76c0 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100c76c4 pop ecx */
  ECX = (pop32());
  /* 100c76c5 je 0x100c76d0 */
  if (C.zf) goto L_100c76d0;
  /* 100c76c7 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 100c76cb mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 100c76ce jmp 0x100c76d5 */
  goto L_100c76d5;
L_100c76d0:;
  /* 100c76d0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 100c76d3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_100c76d5:;
  /* 100c76d5 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 100c76dc jmp 0x100c7904 */
  goto L_100c7904;
L_100c76e1:;
  /* 100c76e1 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_100c76e5:;
  /* 100c76e5 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_100c76ec:;
  /* 100c76ec test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 100c76f0 je 0x100c76fe */
  if (C.zf) goto L_100c76fe;
  /* 100c76f2 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100c76f5 push eax */
  push32((uint32_t)(EAX));
  /* 100c76f6 call 0x100c79e8 */
  push32(0x100c76fbu); f_100c79e8();
  /* 100c76fb pop ecx */
  ECX = (pop32());
  /* 100c76fc jmp 0x100c773f */
  goto L_100c773f;
L_100c76fe:;
  /* 100c76fe test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100c7702 je 0x100c7725 */
  if (C.zf) goto L_100c7725;
  /* 100c7704 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100c7708 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100c770b push eax */
  push32((uint32_t)(EAX));
  /* 100c770c je 0x100c771a */
  if (C.zf) goto L_100c771a;
  /* 100c770e call 0x100c79db */
  push32(0x100c7713u); f_100c79db();
  /* 100c7713 pop ecx */
  ECX = (pop32());
  /* 100c7714 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_100c7717:;
  /* 100c7717 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c7718 jmp 0x100c773f */
  goto L_100c773f;
L_100c771a:;
  /* 100c771a call 0x100c79db */
  push32(0x100c771fu); f_100c79db();
  /* 100c771f pop ecx */
  ECX = (pop32());
  /* 100c7720 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 100c7723 jmp 0x100c7717 */
  goto L_100c7717;
L_100c7725:;
  /* 100c7725 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100c7729 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100c772c push eax */
  push32((uint32_t)(EAX));
  /* 100c772d je 0x100c7737 */
  if (C.zf) goto L_100c7737;
  /* 100c772f call 0x100c79db */
  push32(0x100c7734u); f_100c79db();
  /* 100c7734 pop ecx */
  ECX = (pop32());
  /* 100c7735 jmp 0x100c7717 */
  goto L_100c7717;
L_100c7737:;
  /* 100c7737 call 0x100c79db */
  push32(0x100c773cu); f_100c79db();
  /* 100c773c pop ecx */
  ECX = (pop32());
  /* 100c773d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_100c773f:;
  /* 100c773f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100c7743 je 0x100c7760 */
  if (C.zf) goto L_100c7760;
  /* 100c7745 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100c7747 jg 0x100c7760 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c7760;
  /* 100c7749 jl 0x100c774f */
  if ((C.sf!=C.of)) goto L_100c774f;
  /* 100c774b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c774d jae 0x100c7760 */
  if (!C.cf) goto L_100c7760;
L_100c774f:;
  /* 100c774f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100c7751 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7754 mov esi, eax */
  ESI = (EAX);
  /* 100c7756 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 100c7758 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100c775c mov edi, edx */
  EDI = (EDX);
  /* 100c775e jmp 0x100c7764 */
  goto L_100c7764;
L_100c7760:;
  /* 100c7760 mov esi, eax */
  ESI = (EAX);
  /* 100c7762 mov edi, edx */
  EDI = (EDX);
L_100c7764:;
  /* 100c7764 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 100c7768 jne 0x100c776d */
  if (!C.zf) goto L_100c776d;
  /* 100c776a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_100c776d:;
  /* 100c776d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7771 jge 0x100c777c */
  if ((C.sf==C.of)) goto L_100c777c;
  /* 100c7773 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 100c777a jmp 0x100c7780 */
  goto L_100c7780;
L_100c777c:;
  /* 100c777c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_100c7780:;
  /* 100c7780 mov eax, esi */
  EAX = (ESI);
  /* 100c7782 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100c7784 jne 0x100c778a */
  if (!C.zf) goto L_100c778a;
  /* 100c7786 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_100c778a:;
  /* 100c778a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 100c778d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100c7790:;
  /* 100c7790 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 100c7793 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 100c7796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c7798 jg 0x100c77a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c77a0;
  /* 100c779a mov eax, esi */
  EAX = (ESI);
  /* 100c779c or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100c779e je 0x100c77db */
  if (C.zf) goto L_100c77db;
L_100c77a0:;
  /* 100c77a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100c77a3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c77a4 push edx */
  push32((uint32_t)(EDX));
  /* 100c77a5 push eax */
  push32((uint32_t)(EAX));
  /* 100c77a6 push edi */
  push32((uint32_t)(EDI));
  /* 100c77a7 push esi */
  push32((uint32_t)(ESI));
  /* 100c77a8 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 100c77ab mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 100c77ae call 0x100c91f0 */
  push32(0x100c77b3u); f_100c91f0();
  /* 100c77b3 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 100c77b6 mov ebx, eax */
  EBX = (EAX);
  /* 100c77b8 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c77bb push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 100c77be push edi */
  push32((uint32_t)(EDI));
  /* 100c77bf push esi */
  push32((uint32_t)(ESI));
  /* 100c77c0 call 0x100c9180 */
  push32(0x100c77c5u); f_100c9180();
  /* 100c77c5 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c77c8 mov esi, eax */
  ESI = (EAX);
  /* 100c77ca mov edi, edx */
  EDI = (EDX);
  /* 100c77cc jle 0x100c77d1 */
  if ((C.zf||C.sf!=C.of)) goto L_100c77d1;
  /* 100c77ce add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_100c77d1:;
  /* 100c77d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100c77d4 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100c77d7 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 100c77d9 jmp 0x100c7790 */
  goto L_100c7790;
L_100c77db:;
  /* 100c77db lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 100c77de sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c77e1 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 100c77e4 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 100c77e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100c77eb je 0x100c7806 */
  if (C.zf) goto L_100c7806;
  /* 100c77ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 100c77f0 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c77f3 jne 0x100c77f9 */
  if (!C.zf) goto L_100c77f9;
  /* 100c77f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c77f7 jne 0x100c7806 */
  if (!C.zf) goto L_100c7806;
L_100c77f9:;
  /* 100c77f9 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100c77fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c77fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 100c7800 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_100c7803:;
  /* 100c7803 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_100c7806:;
  /* 100c7806 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c780a jne 0x100c7904 */
  if (!C.zf) goto L_100c7904;
  /* 100c7810 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 100c7813 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 100c7816 je 0x100c783e */
  if (C.zf) goto L_100c783e;
  /* 100c7818 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 100c781b je 0x100c7823 */
  if (C.zf) goto L_100c7823;
  /* 100c781d mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 100c7821 jmp 0x100c7837 */
  goto L_100c7837;
L_100c7823:;
  /* 100c7823 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100c7826 je 0x100c782e */
  if (C.zf) goto L_100c782e;
  /* 100c7828 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 100c782c jmp 0x100c7837 */
  goto L_100c7837;
L_100c782e:;
  /* 100c782e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100c7831 je 0x100c783e */
  if (C.zf) goto L_100c783e;
  /* 100c7833 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_100c7837:;
  /* 100c7837 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_100c783e:;
  /* 100c783e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 100c7841 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7844 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7847 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 100c784a jne 0x100c785e */
  if (!C.zf) goto L_100c785e;
  /* 100c784c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100c784f push eax */
  push32((uint32_t)(EAX));
  /* 100c7850 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c7853 push esi */
  push32((uint32_t)(ESI));
  /* 100c7854 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100c7856 call 0x100c7972 */
  push32(0x100c785bu); f_100c7972();
  /* 100c785b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c785e:;
  /* 100c785e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100c7861 push eax */
  push32((uint32_t)(EAX));
  /* 100c7862 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 100c7865 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c7868 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 100c786b push eax */
  push32((uint32_t)(EAX));
  /* 100c786c call 0x100c79a3 */
  push32(0x100c7871u); f_100c79a3();
  /* 100c7871 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7874 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100c7877 je 0x100c7890 */
  if (C.zf) goto L_100c7890;
  /* 100c7879 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100c787c jne 0x100c7890 */
  if (!C.zf) goto L_100c7890;
  /* 100c787e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100c7881 push eax */
  push32((uint32_t)(EAX));
  /* 100c7882 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c7885 push esi */
  push32((uint32_t)(ESI));
  /* 100c7886 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 100c7888 call 0x100c7972 */
  push32(0x100c788du); f_100c7972();
  /* 100c788d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c7890:;
  /* 100c7890 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7894 je 0x100c78d7 */
  if (C.zf) goto L_100c78d7;
  /* 100c7896 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c789a jle 0x100c78d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100c78d7;
  /* 100c789c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100c789f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 100c78a2 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_100c78a5:;
  /* 100c78a5 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 100c78a8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100c78a9 push eax */
  push32((uint32_t)(EAX));
  /* 100c78aa lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100c78ad push eax */
  push32((uint32_t)(EAX));
  /* 100c78ae inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100c78af call 0x100c90bb */
  push32(0x100c78b4u); f_100c90bb();
  /* 100c78b4 pop ecx */
  ECX = (pop32());
  /* 100c78b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c78b7 pop ecx */
  ECX = (pop32());
  /* 100c78b8 jle 0x100c78ec */
  if ((C.zf||C.sf!=C.of)) goto L_100c78ec;
  /* 100c78ba lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 100c78bd push ecx */
  push32((uint32_t)(ECX));
  /* 100c78be push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c78c1 push eax */
  push32((uint32_t)(EAX));
  /* 100c78c2 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100c78c5 push eax */
  push32((uint32_t)(EAX));
  /* 100c78c6 call 0x100c79a3 */
  push32(0x100c78cbu); f_100c79a3();
  /* 100c78cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c78ce mov eax, edi */
  EAX = (EDI);
  /* 100c78d0 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100c78d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c78d3 jne 0x100c78a5 */
  if (!C.zf) goto L_100c78a5;
  /* 100c78d5 jmp 0x100c78ec */
  goto L_100c78ec;
L_100c78d7:;
  /* 100c78d7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100c78da push eax */
  push32((uint32_t)(EAX));
  /* 100c78db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c78de push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 100c78e1 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 100c78e4 call 0x100c79a3 */
  push32(0x100c78e9u); f_100c79a3();
  /* 100c78e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c78ec:;
  /* 100c78ec test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 100c78f0 je 0x100c7904 */
  if (C.zf) goto L_100c7904;
  /* 100c78f2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100c78f5 push eax */
  push32((uint32_t)(EAX));
  /* 100c78f6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c78f9 push esi */
  push32((uint32_t)(ESI));
  /* 100c78fa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100c78fc call 0x100c7972 */
  push32(0x100c7901u); f_100c7972();
  /* 100c7901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c7904:;
  /* 100c7904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100c7907 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100c7909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100c790a test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100c790c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 100c790f jne 0x100c7228 */
  if (!C.zf) goto L_100c7228;
L_100c7915:;
  /* 100c7915 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 100c7918 pop edi */
  EDI = (pop32());
  /* 100c7919 pop esi */
  ESI = (pop32());
  /* 100c791a pop ebx */
  EBX = (pop32());
  /* 100c791b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c791c ret  */
  ESPCHK(0x100c71fcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000793d @ 0x100c793d (53 bytes, 25 insns) */
void f_100c793d(void) {
  FTRACE(0x100c793du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c793d push ebp */
  push32((uint32_t)(EBP));
  /* 100c793e mov ebp, esp */
  EBP = (ESP);
  /* 100c7940 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c7943 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 100c7946 js 0x100c7956 */
  if (C.sf) goto L_100c7956;
  /* 100c7948 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 100c794a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 100c794d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 100c794f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100c7951 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 100c7954 jmp 0x100c7961 */
  goto L_100c7961;
L_100c7956:;
  /* 100c7956 push ecx */
  push32((uint32_t)(ECX));
  /* 100c7957 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c795a call 0x100c70e4 */
  push32(0x100c795fu); f_100c70e4();
  /* 100c795f pop ecx */
  ECX = (pop32());
  /* 100c7960 pop ecx */
  ECX = (pop32());
L_100c7961:;
  /* 100c7961 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7964 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100c7967 jne 0x100c796e */
  if (!C.zf) goto L_100c796e;
  /* 100c7969 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100c796c pop ebp */
  EBP = (pop32());
  /* 100c796d ret  */
  ESPCHK(0x100c793du, _esp0);
  ESP += 4; return;
L_100c796e:;
  /* 100c796e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 100c7970 pop ebp */
  EBP = (pop32());
  /* 100c7971 ret  */
  ESPCHK(0x100c793du, _esp0);
  ESP += 4; return;
}

/* FUN_10007972 @ 0x100c7972 (49 bytes, 22 insns) */
void f_100c7972(void) {
  FTRACE(0x100c7972u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7972 push esi */
  push32((uint32_t)(ESI));
  /* 100c7973 push edi */
  push32((uint32_t)(EDI));
  /* 100c7974 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100c7978 mov eax, edi */
  EAX = (EDI);
  /* 100c797a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100c797b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c797d jle 0x100c79a0 */
  if ((C.zf||C.sf!=C.of)) goto L_100c79a0;
  /* 100c797f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_100c7983:;
  /* 100c7983 push esi */
  push32((uint32_t)(ESI));
  /* 100c7984 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100c7988 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 100c798c call 0x100c793d */
  push32(0x100c7991u); f_100c793d();
  /* 100c7991 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7994 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7997 je 0x100c79a0 */
  if (C.zf) goto L_100c79a0;
  /* 100c7999 mov eax, edi */
  EAX = (EDI);
  /* 100c799b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100c799c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c799e jg 0x100c7983 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c7983;
L_100c79a0:;
  /* 100c79a0 pop edi */
  EDI = (pop32());
  /* 100c79a1 pop esi */
  ESI = (pop32());
  /* 100c79a2 ret  */
  ESPCHK(0x100c7972u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a3 @ 0x100c79a3 (56 bytes, 27 insns) */
void f_100c79a3(void) {
  FTRACE(0x100c79a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c79a3 push ebx */
  push32((uint32_t)(EBX));
  /* 100c79a4 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 100c79a8 mov eax, ebx */
  EAX = (EBX);
  /* 100c79aa dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100c79ab push esi */
  push32((uint32_t)(ESI));
  /* 100c79ac push edi */
  push32((uint32_t)(EDI));
  /* 100c79ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c79af jle 0x100c79d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100c79d7;
  /* 100c79b1 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 100c79b5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_100c79b9:;
  /* 100c79b9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100c79bc push edi */
  push32((uint32_t)(EDI));
  /* 100c79bd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100c79be push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 100c79c2 push eax */
  push32((uint32_t)(EAX));
  /* 100c79c3 call 0x100c793d */
  push32(0x100c79c8u); f_100c793d();
  /* 100c79c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c79cb cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c79ce je 0x100c79d7 */
  if (C.zf) goto L_100c79d7;
  /* 100c79d0 mov eax, ebx */
  EAX = (EBX);
  /* 100c79d2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100c79d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c79d5 jg 0x100c79b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c79b9;
L_100c79d7:;
  /* 100c79d7 pop edi */
  EDI = (pop32());
  /* 100c79d8 pop esi */
  ESI = (pop32());
  /* 100c79d9 pop ebx */
  EBX = (pop32());
  /* 100c79da ret  */
  ESPCHK(0x100c79a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100079db @ 0x100c79db (13 bytes, 5 insns) */
void f_100c79db(void) {
  FTRACE(0x100c79dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c79db mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c79df add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100c79e2 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100c79e4 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 100c79e7 ret  */
  ESPCHK(0x100c79dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100079e8 @ 0x100c79e8 (16 bytes, 6 insns) */
void f_100c79e8(void) {
  FTRACE(0x100c79e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c79e8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c79ec add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100c79ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100c79f1 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 100c79f4 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 100c79f7 ret  */
  ESPCHK(0x100c79e8u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f8 @ 0x100c79f8 (14 bytes, 5 insns) */
void f_100c79f8(void) {
  FTRACE(0x100c79f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c79f8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c79fc add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100c79ff mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100c7a01 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 100c7a05 ret  */
  ESPCHK(0x100c79f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a06 @ 0x100c7a06 (18 bytes, 6 insns) */
void f_100c7a06(void) {
  FTRACE(0x100c7a06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7a06 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 100c7a0b push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 100c7a10 call 0x100c929a */
  push32(0x100c7a15u); f_100c929a();
  /* 100c7a15 pop ecx */
  ECX = (pop32());
  /* 100c7a16 pop ecx */
  ECX = (pop32());
  /* 100c7a17 ret  */
  ESPCHK(0x100c7a06u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a18 @ 0x100c7a18 (62 bytes, 24 insns) */
void f_100c7a18(void) {
  FTRACE(0x100c7a18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7a18 push ebp */
  push32((uint32_t)(EBP));
  /* 100c7a19 mov ebp, esp */
  EBP = (ESP);
  /* 100c7a1b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7a1e fld qword ptr [0x100ce170] */
  fpu_push(rf64((uint32_t)(0x100ce170)));
  /* 100c7a24 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 100c7a27 fld qword ptr [0x100ce168] */
  fpu_push(rf64((uint32_t)(0x100ce168)));
  /* 100c7a2d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 100c7a30 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 100c7a33 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 100c7a36 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 100c7a39 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 100c7a3c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 100c7a3f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 100c7a42 fcomp qword ptr [0x100ce160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x100ce160)));
  (void)fpu_pop();
  /* 100c7a48 fnstsw ax */
  AX = fpu_status();
  /* 100c7a4a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 100c7a4b jbe 0x100c7a52 */
  if ((C.cf||C.zf)) goto L_100c7a52;
  /* 100c7a4d push 1 */
  push32((uint32_t)(0x1u));
  /* 100c7a4f pop eax */
  EAX = (pop32());
  /* 100c7a50 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c7a51 ret  */
  ESPCHK(0x100c7a18u, _esp0);
  ESP += 4; return;
L_100c7a52:;
  /* 100c7a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c7a54 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c7a55 ret  */
  ESPCHK(0x100c7a18u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a56 @ 0x100c7a56 (41 bytes, 13 insns) */
void f_100c7a56(void) {
  FTRACE(0x100c7a56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7a56 push 0x100ce194 */
  push32((uint32_t)(0x100ce194u));
  /* 100c7a5b call dword ptr [0x100ce004] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce004))), 0x100c7a61u);
  /* 100c7a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c7a63 je 0x100c7a7a */
  if (C.zf) goto L_100c7a7a;
  /* 100c7a65 push 0x100ce178 */
  push32((uint32_t)(0x100ce178u));
  /* 100c7a6a push eax */
  push32((uint32_t)(EAX));
  /* 100c7a6b call dword ptr [0x100ce088] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce088))), 0x100c7a71u);
  /* 100c7a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c7a73 je 0x100c7a7a */
  if (C.zf) goto L_100c7a7a;
  /* 100c7a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c7a77 call eax */
  call_ind((uint32_t)(EAX), 0x100c7a79u);
  /* 100c7a79 ret  */
  ESPCHK(0x100c7a56u, _esp0);
  ESP += 4; return;
L_100c7a7a:;
  /* 100c7a7a jmp 0x100c7a18 */
  f_100c7a18(); return;
}

/* FUN_10007a7f @ 0x100c7a7f (90 bytes, 37 insns) */
void f_100c7a7f(void) {
  FTRACE(0x100c7a7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7a7f push esi */
  push32((uint32_t)(ESI));
  /* 100c7a80 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100c7a84 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100c7a87 push eax */
  push32((uint32_t)(EAX));
  /* 100c7a88 call 0x100c9440 */
  push32(0x100c7a8du); f_100c9440();
  /* 100c7a8d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7a90 pop ecx */
  ECX = (pop32());
  /* 100c7a91 je 0x100c7abf */
  if (C.zf) goto L_100c7abf;
L_100c7a93:;
  /* 100c7a93 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100c7a94 cmp dword ptr [0x100d0c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100d0c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7a9b jle 0x100c7aac */
  if ((C.zf||C.sf!=C.of)) goto L_100c7aac;
  /* 100c7a9d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100c7aa0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100c7aa2 push eax */
  push32((uint32_t)(EAX));
  /* 100c7aa3 call 0x100c93cb */
  push32(0x100c7aa8u); f_100c93cb();
  /* 100c7aa8 pop ecx */
  ECX = (pop32());
  /* 100c7aa9 pop ecx */
  ECX = (pop32());
  /* 100c7aaa jmp 0x100c7abb */
  goto L_100c7abb;
L_100c7aac:;
  /* 100c7aac movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100c7aaf mov ecx, dword ptr [0x100d0a10] */
  ECX = (r32((uint32_t)(0x100d0a10)));
  /* 100c7ab5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100c7ab8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_100c7abb:;
  /* 100c7abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c7abd jne 0x100c7a93 */
  if (!C.zf) goto L_100c7a93;
L_100c7abf:;
  /* 100c7abf mov cl, byte ptr [0x100d0c24] */
  CL = (r8((uint32_t)(0x100d0c24)));
  /* 100c7ac5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100c7ac7 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 100c7ac9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100c7aca:;
  /* 100c7aca mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 100c7acc mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 100c7ace mov al, cl */
  AL = (CL);
  /* 100c7ad0 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 100c7ad2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100c7ad3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 100c7ad5 jne 0x100c7aca */
  if (!C.zf) goto L_100c7aca;
  /* 100c7ad7 pop esi */
  ESI = (pop32());
  /* 100c7ad8 ret  */
  ESPCHK(0x100c7a7fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x100c7b3f (62 bytes, 29 insns) */
void f_100c7b3f(void) {
  FTRACE(0x100c7b3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7b3f push ebp */
  push32((uint32_t)(EBP));
  /* 100c7b40 mov ebp, esp */
  EBP = (ESP);
  /* 100c7b42 push ecx */
  push32((uint32_t)(ECX));
  /* 100c7b43 push ecx */
  push32((uint32_t)(ECX));
  /* 100c7b44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7b48 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100c7b4b je 0x100c7b68 */
  if (C.zf) goto L_100c7b68;
  /* 100c7b4d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 100c7b50 push eax */
  push32((uint32_t)(EAX));
  /* 100c7b51 call 0x100c990c */
  push32(0x100c7b56u); f_100c990c();
  /* 100c7b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c7b59 pop ecx */
  ECX = (pop32());
  /* 100c7b5a pop ecx */
  ECX = (pop32());
  /* 100c7b5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 100c7b5e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100c7b60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100c7b63 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100c7b66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c7b67 ret  */
  ESPCHK(0x100c7b3fu, _esp0);
  ESP += 4; return;
L_100c7b68:;
  /* 100c7b68 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100c7b6b push eax */
  push32((uint32_t)(EAX));
  /* 100c7b6c call 0x100c9939 */
  push32(0x100c7b71u); f_100c9939();
  /* 100c7b71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c7b74 pop ecx */
  ECX = (pop32());
  /* 100c7b75 pop ecx */
  ECX = (pop32());
  /* 100c7b76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100c7b79 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100c7b7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c7b7c ret  */
  ESPCHK(0x100c7b3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b7d @ 0x100c7b7d (97 bytes, 42 insns) */
void f_100c7b7d(void) {
  FTRACE(0x100c7b7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7b7d push ebp */
  push32((uint32_t)(EBP));
  /* 100c7b7e mov ebp, esp */
  EBP = (ESP);
  /* 100c7b80 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7b83 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100c7b86 push esi */
  push32((uint32_t)(ESI));
  /* 100c7b87 push eax */
  push32((uint32_t)(EAX));
  /* 100c7b88 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100c7b8b push eax */
  push32((uint32_t)(EAX));
  /* 100c7b8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c7b8f push ecx */
  push32((uint32_t)(ECX));
  /* 100c7b90 push ecx */
  push32((uint32_t)(ECX));
  /* 100c7b91 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 100c7b93 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 100c7b96 call 0x100c99dd */
  push32(0x100c7b9bu); f_100c99dd();
  /* 100c7b9b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100c7b9e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100c7ba1 push eax */
  push32((uint32_t)(EAX));
  /* 100c7ba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c7ba5 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 100c7ba8 push eax */
  push32((uint32_t)(EAX));
  /* 100c7ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c7bab cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7baf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100c7bb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100c7bb4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c7bb6 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 100c7bb9 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7bbb add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7bbd push ecx */
  push32((uint32_t)(ECX));
  /* 100c7bbe call 0x100c9966 */
  push32(0x100c7bc3u); f_100c9966();
  /* 100c7bc3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100c7bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c7bc8 push eax */
  push32((uint32_t)(EAX));
  /* 100c7bc9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100c7bcc push esi */
  push32((uint32_t)(ESI));
  /* 100c7bcd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c7bd0 call 0x100c7bde */
  push32(0x100c7bd5u); f_100c7bde();
  /* 100c7bd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c7bd8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7bdb pop esi */
  ESI = (pop32());
  /* 100c7bdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c7bdd ret  */
  ESPCHK(0x100c7b7du, _esp0);
  ESP += 4; return;
}

/* FUN_10007bde @ 0x100c7bde (194 bytes, 91 insns) */
void f_100c7bde(void) {
  FTRACE(0x100c7bdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7bde push ebp */
  push32((uint32_t)(EBP));
  /* 100c7bdf mov ebp, esp */
  EBP = (ESP);
  /* 100c7be1 push ebx */
  push32((uint32_t)(EBX));
  /* 100c7be2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100c7be4 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c7be7 push esi */
  push32((uint32_t)(ESI));
  /* 100c7be8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 100c7beb push edi */
  push32((uint32_t)(EDI));
  /* 100c7bec mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100c7bef je 0x100c7c0c */
  if (C.zf) goto L_100c7c0c;
  /* 100c7bf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c7bf3 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7bf6 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 100c7bf9 push eax */
  push32((uint32_t)(EAX));
  /* 100c7bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c7bfc cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7bff sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100c7c02 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7c04 push eax */
  push32((uint32_t)(EAX));
  /* 100c7c05 call 0x100c7e80 */
  push32(0x100c7c0au); f_100c7e80();
  /* 100c7c0a pop ecx */
  ECX = (pop32());
  /* 100c7c0b pop ecx */
  ECX = (pop32());
L_100c7c0c:;
  /* 100c7c0c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7c0f mov eax, edi */
  EAX = (EDI);
  /* 100c7c11 jne 0x100c7c19 */
  if (!C.zf) goto L_100c7c19;
  /* 100c7c13 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 100c7c16 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_100c7c19:;
  /* 100c7c19 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7c1c jle 0x100c7c30 */
  if ((C.zf||C.sf!=C.of)) goto L_100c7c30;
  /* 100c7c1e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 100c7c21 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100c7c24 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 100c7c26 mov eax, ecx */
  EAX = (ECX);
  /* 100c7c28 mov cl, byte ptr [0x100d0c24] */
  CL = (r8((uint32_t)(0x100d0c24)));
  /* 100c7c2e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_100c7c30:;
  /* 100c7c30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100c7c32 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c7c35 push 0x100ce1a8 */
  push32((uint32_t)(0x100ce1a8u));
  /* 100c7c3a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 100c7c3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7c3f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7c42 push ecx */
  push32((uint32_t)(ECX));
  /* 100c7c43 call 0x100c9af0 */
  push32(0x100c7c48u); f_100c9af0();
  /* 100c7c48 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7c4b pop ecx */
  ECX = (pop32());
  /* 100c7c4c pop ecx */
  ECX = (pop32());
  /* 100c7c4d mov ecx, eax */
  ECX = (EAX);
  /* 100c7c4f je 0x100c7c54 */
  if (C.zf) goto L_100c7c54;
  /* 100c7c51 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_100c7c54:;
  /* 100c7c54 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100c7c57 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100c7c58 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c7c5b je 0x100c7c99 */
  if (C.zf) goto L_100c7c99;
  /* 100c7c5d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 100c7c60 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100c7c61 jns 0x100c7c68 */
  if (!C.sf) goto L_100c7c68;
  /* 100c7c63 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 100c7c65 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_100c7c68:;
  /* 100c7c68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100c7c69 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7c6c jl 0x100c7c7f */
  if ((C.sf!=C.of)) goto L_100c7c7f;
  /* 100c7c6e mov eax, ebx */
  EAX = (EBX);
  /* 100c7c70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100c7c72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c7c73 pop esi */
  ESI = (pop32());
  /* 100c7c74 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c7c76 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 100c7c78 mov eax, ebx */
  EAX = (EBX);
  /* 100c7c7a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c7c7b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c7c7d mov ebx, edx */
  EBX = (EDX);
L_100c7c7f:;
  /* 100c7c7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100c7c80 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7c83 jl 0x100c7c96 */
  if ((C.sf!=C.of)) goto L_100c7c96;
  /* 100c7c85 mov eax, ebx */
  EAX = (EBX);
  /* 100c7c87 push 0xa */
  push32((uint32_t)(0xau));
  /* 100c7c89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c7c8a pop esi */
  ESI = (pop32());
  /* 100c7c8b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c7c8d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 100c7c8f mov eax, ebx */
  EAX = (EBX);
  /* 100c7c91 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c7c92 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c7c94 mov ebx, edx */
  EBX = (EDX);
L_100c7c96:;
  /* 100c7c96 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_100c7c99:;
  /* 100c7c99 mov eax, edi */
  EAX = (EDI);
  /* 100c7c9b pop edi */
  EDI = (pop32());
  /* 100c7c9c pop esi */
  ESI = (pop32());
  /* 100c7c9d pop ebx */
  EBX = (pop32());
  /* 100c7c9e pop ebp */
  EBP = (pop32());
  /* 100c7c9f ret  */
  ESPCHK(0x100c7bdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ca0 @ 0x100c7ca0 (85 bytes, 37 insns) */
void f_100c7ca0(void) {
  FTRACE(0x100c7ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 100c7ca1 mov ebp, esp */
  EBP = (ESP);
  /* 100c7ca3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7ca6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100c7ca9 push esi */
  push32((uint32_t)(ESI));
  /* 100c7caa push eax */
  push32((uint32_t)(EAX));
  /* 100c7cab lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100c7cae push eax */
  push32((uint32_t)(EAX));
  /* 100c7caf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c7cb2 push ecx */
  push32((uint32_t)(ECX));
  /* 100c7cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 100c7cb4 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 100c7cb6 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 100c7cb9 call 0x100c99dd */
  push32(0x100c7cbeu); f_100c99dd();
  /* 100c7cbe mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100c7cc1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100c7cc4 push eax */
  push32((uint32_t)(EAX));
  /* 100c7cc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100c7cc8 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7cca push eax */
  push32((uint32_t)(EAX));
  /* 100c7ccb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c7ccd cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7cd1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100c7cd4 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7cd7 push eax */
  push32((uint32_t)(EAX));
  /* 100c7cd8 call 0x100c9966 */
  push32(0x100c7cddu); f_100c9966();
  /* 100c7cdd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100c7ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c7ce2 push eax */
  push32((uint32_t)(EAX));
  /* 100c7ce3 push esi */
  push32((uint32_t)(ESI));
  /* 100c7ce4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c7ce7 call 0x100c7cf5 */
  push32(0x100c7cecu); f_100c7cf5();
  /* 100c7cec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c7cef add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7cf2 pop esi */
  ESI = (pop32());
  /* 100c7cf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c7cf4 ret  */
  ESPCHK(0x100c7ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf5 @ 0x100c7cf5 (167 bytes, 73 insns) */
void f_100c7cf5(void) {
  FTRACE(0x100c7cf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7cf5 push ebp */
  push32((uint32_t)(EBP));
  /* 100c7cf6 mov ebp, esp */
  EBP = (ESP);
  /* 100c7cf8 push ebx */
  push32((uint32_t)(EBX));
  /* 100c7cf9 push esi */
  push32((uint32_t)(ESI));
  /* 100c7cfa mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100c7cfd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c7d00 push edi */
  push32((uint32_t)(EDI));
  /* 100c7d01 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100c7d04 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c7d05 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c7d09 je 0x100c7d25 */
  if (C.zf) goto L_100c7d25;
  /* 100c7d0b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7d0e jne 0x100c7d25 */
  if (!C.zf) goto L_100c7d25;
  /* 100c7d10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100c7d12 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7d15 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 100c7d18 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7d1a add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7d1c mov eax, ecx */
  EAX = (ECX);
  /* 100c7d1e mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 100c7d21 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_100c7d25:;
  /* 100c7d25 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7d28 mov edi, ebx */
  EDI = (EBX);
  /* 100c7d2a jne 0x100c7d32 */
  if (!C.zf) goto L_100c7d32;
  /* 100c7d2c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 100c7d2f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_100c7d32:;
  /* 100c7d32 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100c7d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c7d37 jg 0x100c7d49 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c7d49;
  /* 100c7d39 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c7d3b push edi */
  push32((uint32_t)(EDI));
  /* 100c7d3c call 0x100c7e80 */
  push32(0x100c7d41u); f_100c7e80();
  /* 100c7d41 pop ecx */
  ECX = (pop32());
  /* 100c7d42 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 100c7d45 pop ecx */
  ECX = (pop32());
  /* 100c7d46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100c7d47 jmp 0x100c7d4b */
  goto L_100c7d4b;
L_100c7d49:;
  /* 100c7d49 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100c7d4b:;
  /* 100c7d4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7d4f jle 0x100c7d95 */
  if ((C.zf||C.sf!=C.of)) goto L_100c7d95;
  /* 100c7d51 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c7d53 push edi */
  push32((uint32_t)(EDI));
  /* 100c7d54 call 0x100c7e80 */
  push32(0x100c7d59u); f_100c7e80();
  /* 100c7d59 mov al, byte ptr [0x100d0c24] */
  AL = (r8((uint32_t)(0x100d0c24)));
  /* 100c7d5e pop ecx */
  ECX = (pop32());
  /* 100c7d5f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100c7d61 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 100c7d64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100c7d65 pop ecx */
  ECX = (pop32());
  /* 100c7d66 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c7d68 jge 0x100c7d95 */
  if ((C.sf==C.of)) goto L_100c7d95;
  /* 100c7d6a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c7d6e je 0x100c7d74 */
  if (C.zf) goto L_100c7d74;
  /* 100c7d70 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 100c7d72 jmp 0x100c7d7b */
  goto L_100c7d7b;
L_100c7d74:;
  /* 100c7d74 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 100c7d76 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7d79 jl 0x100c7d7e */
  if ((C.sf!=C.of)) goto L_100c7d7e;
L_100c7d7b:;
  /* 100c7d7b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_100c7d7e:;
  /* 100c7d7e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c7d81 push edi */
  push32((uint32_t)(EDI));
  /* 100c7d82 call 0x100c7e80 */
  push32(0x100c7d87u); f_100c7e80();
  /* 100c7d87 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c7d8a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 100c7d8c push edi */
  push32((uint32_t)(EDI));
  /* 100c7d8d call 0x100c9be0 */
  push32(0x100c7d92u); f_100c9be0();
  /* 100c7d92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c7d95:;
  /* 100c7d95 pop edi */
  EDI = (pop32());
  /* 100c7d96 mov eax, ebx */
  EAX = (EBX);
  /* 100c7d98 pop esi */
  ESI = (pop32());
  /* 100c7d99 pop ebx */
  EBX = (pop32());
  /* 100c7d9a pop ebp */
  EBP = (pop32());
  /* 100c7d9b ret  */
  ESPCHK(0x100c7cf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d9c @ 0x100c7d9c (147 bytes, 66 insns) */
void f_100c7d9c(void) {
  FTRACE(0x100c7d9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7d9c push ebp */
  push32((uint32_t)(EBP));
  /* 100c7d9d mov ebp, esp */
  EBP = (ESP);
  /* 100c7d9f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7da2 push ebx */
  push32((uint32_t)(EBX));
  /* 100c7da3 push esi */
  push32((uint32_t)(ESI));
  /* 100c7da4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100c7da7 push edi */
  push32((uint32_t)(EDI));
  /* 100c7da8 push eax */
  push32((uint32_t)(EAX));
  /* 100c7da9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100c7dac push eax */
  push32((uint32_t)(EAX));
  /* 100c7dad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c7db0 push ecx */
  push32((uint32_t)(ECX));
  /* 100c7db1 push ecx */
  push32((uint32_t)(ECX));
  /* 100c7db2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 100c7db4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 100c7db7 call 0x100c99dd */
  push32(0x100c7dbcu); f_100c99dd();
  /* 100c7dbc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100c7dbf mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 100c7dc2 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 100c7dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c7dc7 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7dcb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100c7dce add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7dd1 mov edi, eax */
  EDI = (EAX);
  /* 100c7dd3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100c7dd6 push eax */
  push32((uint32_t)(EAX));
  /* 100c7dd7 push ebx */
  push32((uint32_t)(EBX));
  /* 100c7dd8 push edi */
  push32((uint32_t)(EDI));
  /* 100c7dd9 call 0x100c9966 */
  push32(0x100c7ddeu); f_100c9966();
  /* 100c7dde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100c7de1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7de4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c7de5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7de7 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 100c7dea cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7ded jl 0x100c7e15 */
  if ((C.sf!=C.of)) goto L_100c7e15;
  /* 100c7def cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7df1 jge 0x100c7e15 */
  if ((C.sf==C.of)) goto L_100c7e15;
  /* 100c7df3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 100c7df5 je 0x100c7e01 */
  if (C.zf) goto L_100c7e01;
L_100c7df7:;
  /* 100c7df7 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 100c7df9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100c7dfa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c7dfc jne 0x100c7df7 */
  if (!C.zf) goto L_100c7df7;
  /* 100c7dfe and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_100c7e01:;
  /* 100c7e01 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100c7e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c7e06 push eax */
  push32((uint32_t)(EAX));
  /* 100c7e07 push ebx */
  push32((uint32_t)(EBX));
  /* 100c7e08 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c7e0b call 0x100c7cf5 */
  push32(0x100c7e10u); f_100c7cf5();
  /* 100c7e10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7e13 jmp 0x100c7e2a */
  goto L_100c7e2a;
L_100c7e15:;
  /* 100c7e15 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100c7e18 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c7e1a push eax */
  push32((uint32_t)(EAX));
  /* 100c7e1b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100c7e1e push ebx */
  push32((uint32_t)(EBX));
  /* 100c7e1f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c7e22 call 0x100c7bde */
  push32(0x100c7e27u); f_100c7bde();
  /* 100c7e27 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c7e2a:;
  /* 100c7e2a pop edi */
  EDI = (pop32());
  /* 100c7e2b pop esi */
  ESI = (pop32());
  /* 100c7e2c pop ebx */
  EBX = (pop32());
  /* 100c7e2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c7e2e ret  */
  ESPCHK(0x100c7d9cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x100c7e2f (81 bytes, 29 insns) */
void f_100c7e2f(void) {
  FTRACE(0x100c7e2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7e2f push ebp */
  push32((uint32_t)(EBP));
  /* 100c7e30 mov ebp, esp */
  EBP = (ESP);
  /* 100c7e32 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7e36 je 0x100c7e6a */
  if (C.zf) goto L_100c7e6a;
  /* 100c7e38 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7e3c je 0x100c7e6a */
  if (C.zf) goto L_100c7e6a;
  /* 100c7e3e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7e42 jne 0x100c7e57 */
  if (!C.zf) goto L_100c7e57;
  /* 100c7e44 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100c7e47 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c7e4a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c7e4d call 0x100c7ca0 */
  push32(0x100c7e52u); f_100c7ca0();
  /* 100c7e52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7e55 pop ebp */
  EBP = (pop32());
  /* 100c7e56 ret  */
  ESPCHK(0x100c7e2fu, _esp0);
  ESP += 4; return;
L_100c7e57:;
  /* 100c7e57 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100c7e5a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100c7e5d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c7e60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c7e63 call 0x100c7d9c */
  push32(0x100c7e68u); f_100c7d9c();
  /* 100c7e68 jmp 0x100c7e7b */
  goto L_100c7e7b;
L_100c7e6a:;
  /* 100c7e6a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100c7e6d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100c7e70 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c7e73 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c7e76 call 0x100c7b7d */
  push32(0x100c7e7bu); f_100c7b7d();
L_100c7e7b:;
  /* 100c7e7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7e7e pop ebp */
  EBP = (pop32());
  /* 100c7e7f ret  */
  ESPCHK(0x100c7e2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x100c7e80 (37 bytes, 18 insns) */
void f_100c7e80(void) {
  FTRACE(0x100c7e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7e80 push edi */
  push32((uint32_t)(EDI));
  /* 100c7e81 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 100c7e85 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100c7e87 je 0x100c7ea3 */
  if (C.zf) goto L_100c7ea3;
  /* 100c7e89 push esi */
  push32((uint32_t)(ESI));
  /* 100c7e8a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 100c7e8e push esi */
  push32((uint32_t)(ESI));
  /* 100c7e8f call 0x100c9040 */
  push32(0x100c7e94u); f_100c9040();
  /* 100c7e94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c7e95 push eax */
  push32((uint32_t)(EAX));
  /* 100c7e96 push esi */
  push32((uint32_t)(ESI));
  /* 100c7e97 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7e99 push esi */
  push32((uint32_t)(ESI));
  /* 100c7e9a call 0x100c9c40 */
  push32(0x100c7e9fu); f_100c9c40();
  /* 100c7e9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7ea2 pop esi */
  ESI = (pop32());
L_100c7ea3:;
  /* 100c7ea3 pop edi */
  EDI = (pop32());
  /* 100c7ea4 ret  */
  ESPCHK(0x100c7e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea5 @ 0x100c7ea5 (45 bytes, 12 insns) */
void f_100c7ea5(void) {
  FTRACE(0x100c7ea5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7ea5 mov eax, dword ptr [0x100d06a4] */
  EAX = (r32((uint32_t)(0x100d06a4)));
  /* 100c7eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c7eac je 0x100c7eb0 */
  if (C.zf) goto L_100c7eb0;
  /* 100c7eae call eax */
  call_ind((uint32_t)(EAX), 0x100c7eb0u);
L_100c7eb0:;
  /* 100c7eb0 push 0x100cf014 */
  push32((uint32_t)(0x100cf014u));
  /* 100c7eb5 push 0x100cf008 */
  push32((uint32_t)(0x100cf008u));
  /* 100c7eba call 0x100c7fa9 */
  push32(0x100c7ebfu); f_100c7fa9();
  /* 100c7ebf push 0x100cf004 */
  push32((uint32_t)(0x100cf004u));
  /* 100c7ec4 push 0x100cf000 */
  push32((uint32_t)(0x100cf000u));
  /* 100c7ec9 call 0x100c7fa9 */
  push32(0x100c7eceu); f_100c7fa9();
  /* 100c7ece add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7ed1 ret  */
  ESPCHK(0x100c7ea5u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x100c7ed2 (17 bytes, 6 insns) */
void f_100c7ed2(void) {
  FTRACE(0x100c7ed2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c7ed4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c7ed6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100c7eda call 0x100c7ef2 */
  push32(0x100c7edfu); f_100c7ef2();
  /* 100c7edf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7ee2 ret  */
  ESPCHK(0x100c7ed2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee3 @ 0x100c7ee3 (15 bytes, 6 insns) */
void f_100c7ee3(void) {
  FTRACE(0x100c7ee3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c7ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c7ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c7ee9 call 0x100c7ef2 */
  push32(0x100c7eeeu); f_100c7ef2();
  /* 100c7eee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7ef1 ret  */
  ESPCHK(0x100c7ee3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef2 @ 0x100c7ef2 (163 bytes, 53 insns) */
void f_100c7ef2(void) {
  FTRACE(0x100c7ef2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7ef2 push edi */
  push32((uint32_t)(EDI));
  /* 100c7ef3 call 0x100c7f97 */
  push32(0x100c7ef8u); f_100c7f97();
  /* 100c7ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c7efa pop edi */
  EDI = (pop32());
  /* 100c7efb cmp dword ptr [0x100d66d8], edi */
  { uint32_t _a=(r32((uint32_t)(0x100d66d8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7f01 jne 0x100c7f14 */
  if (!C.zf) goto L_100c7f14;
  /* 100c7f03 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100c7f07 call dword ptr [0x100ce020] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce020))), 0x100c7f0du);
  /* 100c7f0d push eax */
  push32((uint32_t)(EAX));
  /* 100c7f0e call dword ptr [0x100ce01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce01c))), 0x100c7f14u);
L_100c7f14:;
  /* 100c7f14 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7f19 push ebx */
  push32((uint32_t)(EBX));
  /* 100c7f1a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100c7f1e mov dword ptr [0x100d66d4], edi */
  w32((uint32_t)(0x100d66d4), (EDI));
  /* 100c7f24 mov byte ptr [0x100d66d0], bl */
  w8((uint32_t)(0x100d66d0), (BL));
  /* 100c7f2a jne 0x100c7f68 */
  if (!C.zf) goto L_100c7f68;
  /* 100c7f2c mov eax, dword ptr [0x100d7d90] */
  EAX = (r32((uint32_t)(0x100d7d90)));
  /* 100c7f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c7f33 je 0x100c7f57 */
  if (C.zf) goto L_100c7f57;
  /* 100c7f35 mov ecx, dword ptr [0x100d7d8c] */
  ECX = (r32((uint32_t)(0x100d7d8c)));
  /* 100c7f3b push esi */
  push32((uint32_t)(ESI));
  /* 100c7f3c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 100c7f3f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7f41 jb 0x100c7f56 */
  if (C.cf) goto L_100c7f56;
L_100c7f43:;
  /* 100c7f43 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100c7f45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c7f47 je 0x100c7f4b */
  if (C.zf) goto L_100c7f4b;
  /* 100c7f49 call eax */
  call_ind((uint32_t)(EAX), 0x100c7f4bu);
L_100c7f4b:;
  /* 100c7f4b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c7f4e cmp esi, dword ptr [0x100d7d90] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100d7d90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7f54 jae 0x100c7f43 */
  if (!C.cf) goto L_100c7f43;
L_100c7f56:;
  /* 100c7f56 pop esi */
  ESI = (pop32());
L_100c7f57:;
  /* 100c7f57 push 0x100cf020 */
  push32((uint32_t)(0x100cf020u));
  /* 100c7f5c push 0x100cf018 */
  push32((uint32_t)(0x100cf018u));
  /* 100c7f61 call 0x100c7fa9 */
  push32(0x100c7f66u); f_100c7fa9();
  /* 100c7f66 pop ecx */
  ECX = (pop32());
  /* 100c7f67 pop ecx */
  ECX = (pop32());
L_100c7f68:;
  /* 100c7f68 push 0x100cf028 */
  push32((uint32_t)(0x100cf028u));
  /* 100c7f6d push 0x100cf024 */
  push32((uint32_t)(0x100cf024u));
  /* 100c7f72 call 0x100c7fa9 */
  push32(0x100c7f77u); f_100c7fa9();
  /* 100c7f77 pop ecx */
  ECX = (pop32());
  /* 100c7f78 pop ecx */
  ECX = (pop32());
  /* 100c7f79 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100c7f7b pop ebx */
  EBX = (pop32());
  /* 100c7f7c je 0x100c7f85 */
  if (C.zf) goto L_100c7f85;
  /* 100c7f7e call 0x100c7fa0 */
  push32(0x100c7f83u); f_100c7fa0();
  /* 100c7f83 pop edi */
  EDI = (pop32());
  /* 100c7f84 ret  */
  ESPCHK(0x100c7ef2u, _esp0);
  ESP += 4; return;
L_100c7f85:;
  /* 100c7f85 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100c7f89 mov dword ptr [0x100d66d8], edi */
  w32((uint32_t)(0x100d66d8), (EDI));
  /* 100c7f8f call dword ptr [0x100ce018] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce018))), 0x100c7f95u);
  /* 100c7f95 pop edi */
  EDI = (pop32());
  /* 100c7f96 ret  */
  ESPCHK(0x100c7ef2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f97 @ 0x100c7f97 (9 bytes, 4 insns) */
void f_100c7f97(void) {
  FTRACE(0x100c7f97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7f97 push 0xd */
  push32((uint32_t)(0xdu));
  /* 100c7f99 call 0x100ca013 */
  push32(0x100c7f9eu); f_100ca013();
  /* 100c7f9e pop ecx */
  ECX = (pop32());
  /* 100c7f9f ret  */
  ESPCHK(0x100c7f97u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x100c7fa0 (9 bytes, 4 insns) */
void f_100c7fa0(void) {
  FTRACE(0x100c7fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7fa0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 100c7fa2 call 0x100ca074 */
  push32(0x100c7fa7u); f_100ca074();
  /* 100c7fa7 pop ecx */
  ECX = (pop32());
  /* 100c7fa8 ret  */
  ESPCHK(0x100c7fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa9 @ 0x100c7fa9 (26 bytes, 12 insns) */
void f_100c7fa9(void) {
  FTRACE(0x100c7fa9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7fa9 push esi */
  push32((uint32_t)(ESI));
  /* 100c7faa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_100c7fae:;
  /* 100c7fae cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7fb2 jae 0x100c7fc1 */
  if (!C.cf) goto L_100c7fc1;
  /* 100c7fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100c7fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c7fb8 je 0x100c7fbc */
  if (C.zf) goto L_100c7fbc;
  /* 100c7fba call eax */
  call_ind((uint32_t)(EAX), 0x100c7fbcu);
L_100c7fbc:;
  /* 100c7fbc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c7fbf jmp 0x100c7fae */
  goto L_100c7fae;
L_100c7fc1:;
  /* 100c7fc1 pop esi */
  ESI = (pop32());
  /* 100c7fc2 ret  */
  ESPCHK(0x100c7fa9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fc3 @ 0x100c7fc3 (84 bytes, 32 insns) */
void f_100c7fc3(void) {
  FTRACE(0x100c7fc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c7fc3 push esi */
  push32((uint32_t)(ESI));
  /* 100c7fc4 call 0x100c9f7e */
  push32(0x100c7fc9u); f_100c9f7e();
  /* 100c7fc9 call dword ptr [0x100ce02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce02c))), 0x100c7fcfu);
  /* 100c7fcf cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c7fd2 mov dword ptr [0x100d06d4], eax */
  w32((uint32_t)(0x100d06d4), (EAX));
  /* 100c7fd7 je 0x100c8013 */
  if (C.zf) goto L_100c8013;
  /* 100c7fd9 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 100c7fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 100c7fdd call 0x100ca089 */
  push32(0x100c7fe2u); f_100ca089();
  /* 100c7fe2 mov esi, eax */
  ESI = (EAX);
  /* 100c7fe4 pop ecx */
  ECX = (pop32());
  /* 100c7fe5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c7fe7 pop ecx */
  ECX = (pop32());
  /* 100c7fe8 je 0x100c8013 */
  if (C.zf) goto L_100c8013;
  /* 100c7fea push esi */
  push32((uint32_t)(ESI));
  /* 100c7feb push dword ptr [0x100d06d4] */
  push32((uint32_t)(r32((uint32_t)(0x100d06d4))));
  /* 100c7ff1 call dword ptr [0x100ce028] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce028))), 0x100c7ff7u);
  /* 100c7ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c7ff9 je 0x100c8013 */
  if (C.zf) goto L_100c8013;
  /* 100c7ffb push esi */
  push32((uint32_t)(ESI));
  /* 100c7ffc call 0x100c8035 */
  push32(0x100c8001u); f_100c8035();
  /* 100c8001 pop ecx */
  ECX = (pop32());
  /* 100c8002 call dword ptr [0x100ce024] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce024))), 0x100c8008u);
  /* 100c8008 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100c800c push 1 */
  push32((uint32_t)(0x1u));
  /* 100c800e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100c8010 pop eax */
  EAX = (pop32());
  /* 100c8011 pop esi */
  ESI = (pop32());
  /* 100c8012 ret  */
  ESPCHK(0x100c7fc3u, _esp0);
  ESP += 4; return;
L_100c8013:;
  /* 100c8013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c8015 pop esi */
  ESI = (pop32());
  /* 100c8016 ret  */
  ESPCHK(0x100c7fc3u, _esp0);
  ESP += 4; return;
}

/* FUN_10008017 @ 0x100c8017 (30 bytes, 8 insns) */
void f_100c8017(void) {
  FTRACE(0x100c8017u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8017 call 0x100c9fa7 */
  push32(0x100c801cu); f_100c9fa7();
  /* 100c801c mov eax, dword ptr [0x100d06d4] */
  EAX = (r32((uint32_t)(0x100d06d4)));
  /* 100c8021 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8024 je 0x100c8034 */
  if (C.zf) goto L_100c8034;
  /* 100c8026 push eax */
  push32((uint32_t)(EAX));
  /* 100c8027 call dword ptr [0x100ce030] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce030))), 0x100c802du);
  /* 100c802d or dword ptr [0x100d06d4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x100d06d4)))|(0xffffffffu); w32((uint32_t)(0x100d06d4), (_r)); fl_logic(_r,32); }
L_100c8034:;
  /* 100c8034 ret  */
  ESPCHK(0x100c8017u, _esp0);
  ESP += 4; return;
}

/* FUN_10008035 @ 0x100c8035 (19 bytes, 4 insns) */
void f_100c8035(void) {
  FTRACE(0x100c8035u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8035 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c8039 mov dword ptr [eax + 0x50], 0x100d0d20 */
  w32((uint32_t)(EAX + 0x50), (0x100d0d20u));
  /* 100c8040 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 100c8047 ret  */
  ESPCHK(0x100c8035u, _esp0);
  ESP += 4; return;
}

/* FUN_10008048 @ 0x100c8048 (103 bytes, 38 insns) */
void f_100c8048(void) {
  FTRACE(0x100c8048u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8048 push esi */
  push32((uint32_t)(ESI));
  /* 100c8049 push edi */
  push32((uint32_t)(EDI));
  /* 100c804a call dword ptr [0x100ce03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce03c))), 0x100c8050u);
  /* 100c8050 push dword ptr [0x100d06d4] */
  push32((uint32_t)(r32((uint32_t)(0x100d06d4))));
  /* 100c8056 mov edi, eax */
  EDI = (EAX);
  /* 100c8058 call dword ptr [0x100ce038] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce038))), 0x100c805eu);
  /* 100c805e mov esi, eax */
  ESI = (EAX);
  /* 100c8060 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c8062 jne 0x100c80a3 */
  if (!C.zf) goto L_100c80a3;
  /* 100c8064 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 100c8066 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c8068 call 0x100ca089 */
  push32(0x100c806du); f_100ca089();
  /* 100c806d mov esi, eax */
  ESI = (EAX);
  /* 100c806f pop ecx */
  ECX = (pop32());
  /* 100c8070 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c8072 pop ecx */
  ECX = (pop32());
  /* 100c8073 je 0x100c809b */
  if (C.zf) goto L_100c809b;
  /* 100c8075 push esi */
  push32((uint32_t)(ESI));
  /* 100c8076 push dword ptr [0x100d06d4] */
  push32((uint32_t)(r32((uint32_t)(0x100d06d4))));
  /* 100c807c call dword ptr [0x100ce028] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce028))), 0x100c8082u);
  /* 100c8082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8084 je 0x100c809b */
  if (C.zf) goto L_100c809b;
  /* 100c8086 push esi */
  push32((uint32_t)(ESI));
  /* 100c8087 call 0x100c8035 */
  push32(0x100c808cu); f_100c8035();
  /* 100c808c pop ecx */
  ECX = (pop32());
  /* 100c808d call dword ptr [0x100ce024] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce024))), 0x100c8093u);
  /* 100c8093 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100c8097 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100c8099 jmp 0x100c80a3 */
  goto L_100c80a3;
L_100c809b:;
  /* 100c809b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100c809d call 0x100c70b1 */
  push32(0x100c80a2u); f_100c70b1();
  /* 100c80a2 pop ecx */
  ECX = (pop32());
L_100c80a3:;
  /* 100c80a3 push edi */
  push32((uint32_t)(EDI));
  /* 100c80a4 call dword ptr [0x100ce034] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce034))), 0x100c80aau);
  /* 100c80aa mov eax, esi */
  EAX = (ESI);
  /* 100c80ac pop edi */
  EDI = (pop32());
  /* 100c80ad pop esi */
  ESI = (pop32());
  /* 100c80ae ret  */
  ESPCHK(0x100c8048u, _esp0);
  ESP += 4; return;
}

/* FUN_100080af @ 0x100c80af (160 bytes, 62 insns) */
void f_100c80af(void) {
  FTRACE(0x100c80afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c80af mov eax, dword ptr [0x100d06d4] */
  EAX = (r32((uint32_t)(0x100d06d4)));
  /* 100c80b4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c80b7 je 0x100c814e */
  if (C.zf) goto L_100c814e;
  /* 100c80bd push esi */
  push32((uint32_t)(ESI));
  /* 100c80be mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100c80c2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c80c4 jne 0x100c80d3 */
  if (!C.zf) goto L_100c80d3;
  /* 100c80c6 push eax */
  push32((uint32_t)(EAX));
  /* 100c80c7 call dword ptr [0x100ce038] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce038))), 0x100c80cdu);
  /* 100c80cd mov esi, eax */
  ESI = (EAX);
  /* 100c80cf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c80d1 je 0x100c813f */
  if (C.zf) goto L_100c813f;
L_100c80d3:;
  /* 100c80d3 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 100c80d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c80d8 je 0x100c80e1 */
  if (C.zf) goto L_100c80e1;
  /* 100c80da push eax */
  push32((uint32_t)(EAX));
  /* 100c80db call 0x100ca1c6 */
  push32(0x100c80e0u); f_100ca1c6();
  /* 100c80e0 pop ecx */
  ECX = (pop32());
L_100c80e1:;
  /* 100c80e1 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 100c80e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c80e6 je 0x100c80ef */
  if (C.zf) goto L_100c80ef;
  /* 100c80e8 push eax */
  push32((uint32_t)(EAX));
  /* 100c80e9 call 0x100ca1c6 */
  push32(0x100c80eeu); f_100ca1c6();
  /* 100c80ee pop ecx */
  ECX = (pop32());
L_100c80ef:;
  /* 100c80ef mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 100c80f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c80f4 je 0x100c80fd */
  if (C.zf) goto L_100c80fd;
  /* 100c80f6 push eax */
  push32((uint32_t)(EAX));
  /* 100c80f7 call 0x100ca1c6 */
  push32(0x100c80fcu); f_100ca1c6();
  /* 100c80fc pop ecx */
  ECX = (pop32());
L_100c80fd:;
  /* 100c80fd mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 100c8100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8102 je 0x100c810b */
  if (C.zf) goto L_100c810b;
  /* 100c8104 push eax */
  push32((uint32_t)(EAX));
  /* 100c8105 call 0x100ca1c6 */
  push32(0x100c810au); f_100ca1c6();
  /* 100c810a pop ecx */
  ECX = (pop32());
L_100c810b:;
  /* 100c810b mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 100c810e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8110 je 0x100c8119 */
  if (C.zf) goto L_100c8119;
  /* 100c8112 push eax */
  push32((uint32_t)(EAX));
  /* 100c8113 call 0x100ca1c6 */
  push32(0x100c8118u); f_100ca1c6();
  /* 100c8118 pop ecx */
  ECX = (pop32());
L_100c8119:;
  /* 100c8119 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 100c811c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c811e je 0x100c8127 */
  if (C.zf) goto L_100c8127;
  /* 100c8120 push eax */
  push32((uint32_t)(EAX));
  /* 100c8121 call 0x100ca1c6 */
  push32(0x100c8126u); f_100ca1c6();
  /* 100c8126 pop ecx */
  ECX = (pop32());
L_100c8127:;
  /* 100c8127 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 100c812a cmp eax, 0x100d0d20 */
  { uint32_t _a=(EAX),_b=(0x100d0d20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c812f je 0x100c8138 */
  if (C.zf) goto L_100c8138;
  /* 100c8131 push eax */
  push32((uint32_t)(EAX));
  /* 100c8132 call 0x100ca1c6 */
  push32(0x100c8137u); f_100ca1c6();
  /* 100c8137 pop ecx */
  ECX = (pop32());
L_100c8138:;
  /* 100c8138 push esi */
  push32((uint32_t)(ESI));
  /* 100c8139 call 0x100ca1c6 */
  push32(0x100c813eu); f_100ca1c6();
  /* 100c813e pop ecx */
  ECX = (pop32());
L_100c813f:;
  /* 100c813f push 0 */
  push32((uint32_t)(0x0u));
  /* 100c8141 push dword ptr [0x100d06d4] */
  push32((uint32_t)(r32((uint32_t)(0x100d06d4))));
  /* 100c8147 call dword ptr [0x100ce028] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce028))), 0x100c814du);
  /* 100c814d pop esi */
  ESI = (pop32());
L_100c814e:;
  /* 100c814e ret  */
  ESPCHK(0x100c80afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000814f @ 0x100c814f (444 bytes, 150 insns) */
void f_100c814f(void) {
  FTRACE(0x100c814fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c814f push ebp */
  push32((uint32_t)(EBP));
  /* 100c8150 mov ebp, esp */
  EBP = (ESP);
  /* 100c8152 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c8155 push ebx */
  push32((uint32_t)(EBX));
  /* 100c8156 push esi */
  push32((uint32_t)(ESI));
  /* 100c8157 push edi */
  push32((uint32_t)(EDI));
  /* 100c8158 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 100c815d call 0x100ca2af */
  push32(0x100c8162u); f_100ca2af();
  /* 100c8162 mov esi, eax */
  ESI = (EAX);
  /* 100c8164 pop ecx */
  ECX = (pop32());
  /* 100c8165 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c8167 jne 0x100c8171 */
  if (!C.zf) goto L_100c8171;
  /* 100c8169 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100c816b call 0x100c70b1 */
  push32(0x100c8170u); f_100c70b1();
  /* 100c8170 pop ecx */
  ECX = (pop32());
L_100c8171:;
  /* 100c8171 mov dword ptr [0x100d7c80], esi */
  w32((uint32_t)(0x100d7c80), (ESI));
  /* 100c8177 mov dword ptr [0x100d7d80], 0x20 */
  w32((uint32_t)(0x100d7d80), (0x20u));
  /* 100c8181 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_100c8187:;
  /* 100c8187 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8189 jae 0x100c81a9 */
  if (!C.cf) goto L_100c81a9;
  /* 100c818b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100c818f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100c8192 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 100c8196 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 100c819a mov eax, dword ptr [0x100d7c80] */
  EAX = (r32((uint32_t)(0x100d7c80)));
  /* 100c819f add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c81a2 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c81a7 jmp 0x100c8187 */
  goto L_100c8187;
L_100c81a9:;
  /* 100c81a9 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 100c81ac push eax */
  push32((uint32_t)(EAX));
  /* 100c81ad call dword ptr [0x100ce04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce04c))), 0x100c81b3u);
  /* 100c81b3 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100c81b8 je 0x100c828f */
  if (C.zf) goto L_100c828f;
  /* 100c81be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 100c81c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c81c3 je 0x100c828f */
  if (C.zf) goto L_100c828f;
  /* 100c81c9 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 100c81cb lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 100c81ce lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 100c81d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100c81d4 mov eax, 0x800 */
  EAX = (0x800u);
  /* 100c81d9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c81db jl 0x100c81df */
  if ((C.sf!=C.of)) goto L_100c81df;
  /* 100c81dd mov edi, eax */
  EDI = (EAX);
L_100c81df:;
  /* 100c81df cmp dword ptr [0x100d7d80], edi */
  { uint32_t _a=(r32((uint32_t)(0x100d7d80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c81e5 jge 0x100c823d */
  if ((C.sf==C.of)) goto L_100c823d;
  /* 100c81e7 mov esi, 0x100d7c84 */
  ESI = (0x100d7c84u);
L_100c81ec:;
  /* 100c81ec push 0x480 */
  push32((uint32_t)(0x480u));
  /* 100c81f1 call 0x100ca2af */
  push32(0x100c81f6u); f_100ca2af();
  /* 100c81f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c81f8 pop ecx */
  ECX = (pop32());
  /* 100c81f9 je 0x100c8237 */
  if (C.zf) goto L_100c8237;
  /* 100c81fb add dword ptr [0x100d7d80], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x100d7d80))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x100d7d80), (_r)); fl_add(_a,_b,_r,32); }
  /* 100c8202 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100c8204 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_100c820a:;
  /* 100c820a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c820c jae 0x100c822a */
  if (!C.cf) goto L_100c822a;
  /* 100c820e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 100c8212 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100c8215 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 100c8219 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 100c821d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 100c821f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8222 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8228 jmp 0x100c820a */
  goto L_100c820a;
L_100c822a:;
  /* 100c822a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c822d cmp dword ptr [0x100d7d80], edi */
  { uint32_t _a=(r32((uint32_t)(0x100d7d80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8233 jl 0x100c81ec */
  if ((C.sf!=C.of)) goto L_100c81ec;
  /* 100c8235 jmp 0x100c823d */
  goto L_100c823d;
L_100c8237:;
  /* 100c8237 mov edi, dword ptr [0x100d7d80] */
  EDI = (r32((uint32_t)(0x100d7d80)));
L_100c823d:;
  /* 100c823d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100c823f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100c8241 jle 0x100c828f */
  if ((C.zf||C.sf!=C.of)) goto L_100c828f;
L_100c8243:;
  /* 100c8243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100c8246 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100c8248 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c824b je 0x100c8285 */
  if (C.zf) goto L_100c8285;
  /* 100c824d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 100c824f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 100c8251 je 0x100c8285 */
  if (C.zf) goto L_100c8285;
  /* 100c8253 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 100c8255 jne 0x100c8262 */
  if (!C.zf) goto L_100c8262;
  /* 100c8257 push ecx */
  push32((uint32_t)(ECX));
  /* 100c8258 call dword ptr [0x100ce048] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce048))), 0x100c825eu);
  /* 100c825e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8260 je 0x100c8285 */
  if (C.zf) goto L_100c8285;
L_100c8262:;
  /* 100c8262 mov ecx, esi */
  ECX = (ESI);
  /* 100c8264 mov eax, esi */
  EAX = (ESI);
  /* 100c8266 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100c8269 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100c826c mov ecx, dword ptr [ecx*4 + 0x100d7c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100d7c80)));
  /* 100c8273 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100c8276 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100c8279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100c827c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 100c827e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100c8280 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 100c8282 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_100c8285:;
  /* 100c8285 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100c8289 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100c828a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100c828b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c828d jl 0x100c8243 */
  if ((C.sf!=C.of)) goto L_100c8243;
L_100c828f:;
  /* 100c828f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100c8291:;
  /* 100c8291 mov ecx, dword ptr [0x100d7c80] */
  ECX = (r32((uint32_t)(0x100d7c80)));
  /* 100c8297 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 100c829a cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c829e lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 100c82a1 jne 0x100c82f0 */
  if (!C.zf) goto L_100c82f0;
  /* 100c82a3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100c82a5 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 100c82a9 jne 0x100c82b0 */
  if (!C.zf) goto L_100c82b0;
  /* 100c82ab push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 100c82ad pop eax */
  EAX = (pop32());
  /* 100c82ae jmp 0x100c82ba */
  goto L_100c82ba;
L_100c82b0:;
  /* 100c82b0 mov eax, ebx */
  EAX = (EBX);
  /* 100c82b2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c82b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100c82b5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c82b7 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100c82ba:;
  /* 100c82ba push eax */
  push32((uint32_t)(EAX));
  /* 100c82bb call dword ptr [0x100ce044] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce044))), 0x100c82c1u);
  /* 100c82c1 mov edi, eax */
  EDI = (EAX);
  /* 100c82c3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c82c6 je 0x100c82df */
  if (C.zf) goto L_100c82df;
  /* 100c82c8 push edi */
  push32((uint32_t)(EDI));
  /* 100c82c9 call dword ptr [0x100ce048] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce048))), 0x100c82cfu);
  /* 100c82cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c82d1 je 0x100c82df */
  if (C.zf) goto L_100c82df;
  /* 100c82d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100c82d8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100c82da cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c82dd jne 0x100c82e5 */
  if (!C.zf) goto L_100c82e5;
L_100c82df:;
  /* 100c82df or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100c82e3 jmp 0x100c82f4 */
  goto L_100c82f4;
L_100c82e5:;
  /* 100c82e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c82e8 jne 0x100c82f4 */
  if (!C.zf) goto L_100c82f4;
  /* 100c82ea or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100c82ee jmp 0x100c82f4 */
  goto L_100c82f4;
L_100c82f0:;
  /* 100c82f0 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_100c82f4:;
  /* 100c82f4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100c82f5 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c82f8 jl 0x100c8291 */
  if ((C.sf!=C.of)) goto L_100c8291;
  /* 100c82fa push dword ptr [0x100d7d80] */
  push32((uint32_t)(r32((uint32_t)(0x100d7d80))));
  /* 100c8300 call dword ptr [0x100ce040] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce040))), 0x100c8306u);
  /* 100c8306 pop edi */
  EDI = (pop32());
  /* 100c8307 pop esi */
  ESI = (pop32());
  /* 100c8308 pop ebx */
  EBX = (pop32());
  /* 100c8309 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c830a ret  */
  ESPCHK(0x100c814fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000830b @ 0x100c830b (84 bytes, 33 insns) */
void f_100c830b(void) {
  FTRACE(0x100c830bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c830b push ebx */
  push32((uint32_t)(EBX));
  /* 100c830c push esi */
  push32((uint32_t)(ESI));
  /* 100c830d push edi */
  push32((uint32_t)(EDI));
  /* 100c830e mov esi, 0x100d7c80 */
  ESI = (0x100d7c80u);
L_100c8313:;
  /* 100c8313 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100c8315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8317 je 0x100c8350 */
  if (C.zf) goto L_100c8350;
  /* 100c8319 mov edi, eax */
  EDI = (EAX);
  /* 100c831b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8320 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8322 jae 0x100c8345 */
  if (!C.cf) goto L_100c8345;
  /* 100c8324 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_100c8327:;
  /* 100c8327 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c832b je 0x100c8334 */
  if (C.zf) goto L_100c8334;
  /* 100c832d push ebx */
  push32((uint32_t)(EBX));
  /* 100c832e call dword ptr [0x100ce050] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce050))), 0x100c8334u);
L_100c8334:;
  /* 100c8334 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100c8336 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8339 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c833e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8341 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8343 jb 0x100c8327 */
  if (C.cf) goto L_100c8327;
L_100c8345:;
  /* 100c8345 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100c8347 call 0x100ca1c6 */
  push32(0x100c834cu); f_100ca1c6();
  /* 100c834c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100c834f pop ecx */
  ECX = (pop32());
L_100c8350:;
  /* 100c8350 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8353 cmp esi, 0x100d7d80 */
  { uint32_t _a=(ESI),_b=(0x100d7d80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8359 jl 0x100c8313 */
  if ((C.sf!=C.of)) goto L_100c8313;
  /* 100c835b pop edi */
  EDI = (pop32());
  /* 100c835c pop esi */
  ESI = (pop32());
  /* 100c835d pop ebx */
  EBX = (pop32());
  /* 100c835e ret  */
  ESPCHK(0x100c830bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000835f @ 0x100c835f (185 bytes, 71 insns) */
void f_100c835f(void) {
  FTRACE(0x100c835fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c835f push ebx */
  push32((uint32_t)(EBX));
  /* 100c8360 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100c8362 cmp dword ptr [0x100d7d88], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100d7d88))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8368 push esi */
  push32((uint32_t)(ESI));
  /* 100c8369 push edi */
  push32((uint32_t)(EDI));
  /* 100c836a jne 0x100c8371 */
  if (!C.zf) goto L_100c8371;
  /* 100c836c call 0x100ca7c1 */
  push32(0x100c8371u); f_100ca7c1();
L_100c8371:;
  /* 100c8371 mov esi, dword ptr [0x100d6688] */
  ESI = (r32((uint32_t)(0x100d6688)));
  /* 100c8377 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_100c8379:;
  /* 100c8379 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100c837b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c837d je 0x100c8391 */
  if (C.zf) goto L_100c8391;
  /* 100c837f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8381 je 0x100c8384 */
  if (C.zf) goto L_100c8384;
  /* 100c8383 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_100c8384:;
  /* 100c8384 push esi */
  push32((uint32_t)(ESI));
  /* 100c8385 call 0x100c9040 */
  push32(0x100c838au); f_100c9040();
  /* 100c838a pop ecx */
  ECX = (pop32());
  /* 100c838b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 100c838f jmp 0x100c8379 */
  goto L_100c8379;
L_100c8391:;
  /* 100c8391 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 100c8398 push eax */
  push32((uint32_t)(EAX));
  /* 100c8399 call 0x100ca2af */
  push32(0x100c839eu); f_100ca2af();
  /* 100c839e mov esi, eax */
  ESI = (EAX);
  /* 100c83a0 pop ecx */
  ECX = (pop32());
  /* 100c83a1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c83a3 mov dword ptr [0x100d66b8], esi */
  w32((uint32_t)(0x100d66b8), (ESI));
  /* 100c83a9 jne 0x100c83b3 */
  if (!C.zf) goto L_100c83b3;
  /* 100c83ab push 9 */
  push32((uint32_t)(0x9u));
  /* 100c83ad call 0x100c70b1 */
  push32(0x100c83b2u); f_100c70b1();
  /* 100c83b2 pop ecx */
  ECX = (pop32());
L_100c83b3:;
  /* 100c83b3 mov edi, dword ptr [0x100d6688] */
  EDI = (r32((uint32_t)(0x100d6688)));
  /* 100c83b9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c83bb je 0x100c83f6 */
  if (C.zf) goto L_100c83f6;
  /* 100c83bd push ebp */
  push32((uint32_t)(EBP));
L_100c83be:;
  /* 100c83be push edi */
  push32((uint32_t)(EDI));
  /* 100c83bf call 0x100c9040 */
  push32(0x100c83c4u); f_100c9040();
  /* 100c83c4 mov ebp, eax */
  EBP = (EAX);
  /* 100c83c6 pop ecx */
  ECX = (pop32());
  /* 100c83c7 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 100c83c8 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c83cb je 0x100c83ef */
  if (C.zf) goto L_100c83ef;
  /* 100c83cd push ebp */
  push32((uint32_t)(EBP));
  /* 100c83ce call 0x100ca2af */
  push32(0x100c83d3u); f_100ca2af();
  /* 100c83d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c83d5 pop ecx */
  ECX = (pop32());
  /* 100c83d6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100c83d8 jne 0x100c83e2 */
  if (!C.zf) goto L_100c83e2;
  /* 100c83da push 9 */
  push32((uint32_t)(0x9u));
  /* 100c83dc call 0x100c70b1 */
  push32(0x100c83e1u); f_100c70b1();
  /* 100c83e1 pop ecx */
  ECX = (pop32());
L_100c83e2:;
  /* 100c83e2 push edi */
  push32((uint32_t)(EDI));
  /* 100c83e3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100c83e5 call 0x100c9af0 */
  push32(0x100c83eau); f_100c9af0();
  /* 100c83ea pop ecx */
  ECX = (pop32());
  /* 100c83eb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c83ee pop ecx */
  ECX = (pop32());
L_100c83ef:;
  /* 100c83ef add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c83f1 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c83f3 jne 0x100c83be */
  if (!C.zf) goto L_100c83be;
  /* 100c83f5 pop ebp */
  EBP = (pop32());
L_100c83f6:;
  /* 100c83f6 push dword ptr [0x100d6688] */
  push32((uint32_t)(r32((uint32_t)(0x100d6688))));
  /* 100c83fc call 0x100ca1c6 */
  push32(0x100c8401u); f_100ca1c6();
  /* 100c8401 pop ecx */
  ECX = (pop32());
  /* 100c8402 mov dword ptr [0x100d6688], ebx */
  w32((uint32_t)(0x100d6688), (EBX));
  /* 100c8408 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 100c840a pop edi */
  EDI = (pop32());
  /* 100c840b pop esi */
  ESI = (pop32());
  /* 100c840c mov dword ptr [0x100d7d84], 1 */
  w32((uint32_t)(0x100d7d84), (0x1u));
  /* 100c8416 pop ebx */
  EBX = (pop32());
  /* 100c8417 ret  */
  ESPCHK(0x100c835fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008418 @ 0x100c8418 (153 bytes, 62 insns) */
void f_100c8418(void) {
  FTRACE(0x100c8418u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8418 push ebp */
  push32((uint32_t)(EBP));
  /* 100c8419 mov ebp, esp */
  EBP = (ESP);
  /* 100c841b push ecx */
  push32((uint32_t)(ECX));
  /* 100c841c push ecx */
  push32((uint32_t)(ECX));
  /* 100c841d push ebx */
  push32((uint32_t)(EBX));
  /* 100c841e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100c8420 cmp dword ptr [0x100d7d88], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100d7d88))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8426 push esi */
  push32((uint32_t)(ESI));
  /* 100c8427 push edi */
  push32((uint32_t)(EDI));
  /* 100c8428 jne 0x100c842f */
  if (!C.zf) goto L_100c842f;
  /* 100c842a call 0x100ca7c1 */
  push32(0x100c842fu); f_100ca7c1();
L_100c842f:;
  /* 100c842f mov esi, 0x100d66dc */
  ESI = (0x100d66dcu);
  /* 100c8434 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 100c8439 push esi */
  push32((uint32_t)(ESI));
  /* 100c843a push ebx */
  push32((uint32_t)(EBX));
  /* 100c843b call dword ptr [0x100ce054] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce054))), 0x100c8441u);
  /* 100c8441 mov eax, dword ptr [0x100d7d94] */
  EAX = (r32((uint32_t)(0x100d7d94)));
  /* 100c8446 mov dword ptr [0x100d66c8], esi */
  w32((uint32_t)(0x100d66c8), (ESI));
  /* 100c844c mov edi, esi */
  EDI = (ESI);
  /* 100c844e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8450 je 0x100c8454 */
  if (C.zf) goto L_100c8454;
  /* 100c8452 mov edi, eax */
  EDI = (EAX);
L_100c8454:;
  /* 100c8454 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 100c8457 push eax */
  push32((uint32_t)(EAX));
  /* 100c8458 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100c845b push eax */
  push32((uint32_t)(EAX));
  /* 100c845c push ebx */
  push32((uint32_t)(EBX));
  /* 100c845d push ebx */
  push32((uint32_t)(EBX));
  /* 100c845e push edi */
  push32((uint32_t)(EDI));
  /* 100c845f call 0x100c84b1 */
  push32(0x100c8464u); f_100c84b1();
  /* 100c8464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100c8467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100c846a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 100c846d push eax */
  push32((uint32_t)(EAX));
  /* 100c846e call 0x100ca2af */
  push32(0x100c8473u); f_100ca2af();
  /* 100c8473 mov esi, eax */
  ESI = (EAX);
  /* 100c8475 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8478 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c847a jne 0x100c8484 */
  if (!C.zf) goto L_100c8484;
  /* 100c847c push 8 */
  push32((uint32_t)(0x8u));
  /* 100c847e call 0x100c70b1 */
  push32(0x100c8483u); f_100c70b1();
  /* 100c8483 pop ecx */
  ECX = (pop32());
L_100c8484:;
  /* 100c8484 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 100c8487 push eax */
  push32((uint32_t)(EAX));
  /* 100c8488 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100c848b push eax */
  push32((uint32_t)(EAX));
  /* 100c848c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100c848f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 100c8492 push eax */
  push32((uint32_t)(EAX));
  /* 100c8493 push esi */
  push32((uint32_t)(ESI));
  /* 100c8494 push edi */
  push32((uint32_t)(EDI));
  /* 100c8495 call 0x100c84b1 */
  push32(0x100c849au); f_100c84b1();
  /* 100c849a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100c849d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c84a0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c84a1 mov dword ptr [0x100d66b0], esi */
  w32((uint32_t)(0x100d66b0), (ESI));
  /* 100c84a7 pop edi */
  EDI = (pop32());
  /* 100c84a8 pop esi */
  ESI = (pop32());
  /* 100c84a9 mov dword ptr [0x100d66ac], eax */
  w32((uint32_t)(0x100d66ac), (EAX));
  /* 100c84ae pop ebx */
  EBX = (pop32());
  /* 100c84af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c84b0 ret  */
  ESPCHK(0x100c8418u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b1 @ 0x100c84b1 (436 bytes, 187 insns) */
void f_100c84b1(void) {
  FTRACE(0x100c84b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c84b1 push ebp */
  push32((uint32_t)(EBP));
  /* 100c84b2 mov ebp, esp */
  EBP = (ESP);
  /* 100c84b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 100c84b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100c84ba push ebx */
  push32((uint32_t)(EBX));
  /* 100c84bb push esi */
  push32((uint32_t)(ESI));
  /* 100c84bc and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100c84bf mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100c84c2 push edi */
  push32((uint32_t)(EDI));
  /* 100c84c3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100c84c6 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 100c84cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c84cf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100c84d1 je 0x100c84db */
  if (C.zf) goto L_100c84db;
  /* 100c84d3 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 100c84d5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c84d8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100c84db:;
  /* 100c84db cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c84de jne 0x100c8524 */
  if (!C.zf) goto L_100c8524;
L_100c84e0:;
  /* 100c84e0 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 100c84e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c84e4 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c84e7 je 0x100c8512 */
  if (C.zf) goto L_100c8512;
  /* 100c84e9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100c84eb je 0x100c8512 */
  if (C.zf) goto L_100c8512;
  /* 100c84ed movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 100c84f0 test byte ptr [edx + 0x100d6b41], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x100d6b41)))&(0x4u); fl_logic(_r,8); }
  /* 100c84f7 je 0x100c8505 */
  if (C.zf) goto L_100c8505;
  /* 100c84f9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100c84fb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c84fd je 0x100c8505 */
  if (C.zf) goto L_100c8505;
  /* 100c84ff mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100c8501 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100c8503 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100c8504 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_100c8505:;
  /* 100c8505 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100c8507 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c8509 je 0x100c84e0 */
  if (C.zf) goto L_100c84e0;
  /* 100c850b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100c850d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100c850f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100c8510 jmp 0x100c84e0 */
  goto L_100c84e0;
L_100c8512:;
  /* 100c8512 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100c8514 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c8516 je 0x100c851c */
  if (C.zf) goto L_100c851c;
  /* 100c8518 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 100c851b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100c851c:;
  /* 100c851c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c851f jne 0x100c8567 */
  if (!C.zf) goto L_100c8567;
  /* 100c8521 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c8522 jmp 0x100c8567 */
  goto L_100c8567;
L_100c8524:;
  /* 100c8524 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100c8526 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c8528 je 0x100c852f */
  if (C.zf) goto L_100c852f;
  /* 100c852a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100c852c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100c852e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100c852f:;
  /* 100c852f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100c8531 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c8532 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 100c8535 test byte ptr [ebx + 0x100d6b41], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x100d6b41)))&(0x4u); fl_logic(_r,8); }
  /* 100c853c je 0x100c854a */
  if (C.zf) goto L_100c854a;
  /* 100c853e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100c8540 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c8542 je 0x100c8549 */
  if (C.zf) goto L_100c8549;
  /* 100c8544 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 100c8546 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 100c8548 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100c8549:;
  /* 100c8549 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_100c854a:;
  /* 100c854a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c854d je 0x100c8558 */
  if (C.zf) goto L_100c8558;
  /* 100c854f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100c8551 je 0x100c855c */
  if (C.zf) goto L_100c855c;
  /* 100c8553 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8556 jne 0x100c8524 */
  if (!C.zf) goto L_100c8524;
L_100c8558:;
  /* 100c8558 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100c855a jne 0x100c855f */
  if (!C.zf) goto L_100c855f;
L_100c855c:;
  /* 100c855c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c855d jmp 0x100c8567 */
  goto L_100c8567;
L_100c855f:;
  /* 100c855f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c8561 je 0x100c8567 */
  if (C.zf) goto L_100c8567;
  /* 100c8563 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_100c8567:;
  /* 100c8567 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_100c856b:;
  /* 100c856b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c856e je 0x100c8654 */
  if (C.zf) goto L_100c8654;
L_100c8574:;
  /* 100c8574 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100c8576 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8579 je 0x100c8580 */
  if (C.zf) goto L_100c8580;
  /* 100c857b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c857e jne 0x100c8583 */
  if (!C.zf) goto L_100c8583;
L_100c8580:;
  /* 100c8580 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c8581 jmp 0x100c8574 */
  goto L_100c8574;
L_100c8583:;
  /* 100c8583 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8586 je 0x100c8654 */
  if (C.zf) goto L_100c8654;
  /* 100c858c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100c858e je 0x100c8598 */
  if (C.zf) goto L_100c8598;
  /* 100c8590 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 100c8592 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8595 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100c8598:;
  /* 100c8598 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 100c859b inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_100c859d:;
  /* 100c859d mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 100c85a4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100c85a6:;
  /* 100c85a6 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c85a9 jne 0x100c85af */
  if (!C.zf) goto L_100c85af;
  /* 100c85ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c85ac inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100c85ad jmp 0x100c85a6 */
  goto L_100c85a6;
L_100c85af:;
  /* 100c85af cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c85b2 jne 0x100c85e0 */
  if (!C.zf) goto L_100c85e0;
  /* 100c85b4 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100c85b7 jne 0x100c85de */
  if (!C.zf) goto L_100c85de;
  /* 100c85b9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100c85bb cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c85be je 0x100c85cd */
  if (C.zf) goto L_100c85cd;
  /* 100c85c0 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c85c4 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 100c85c7 jne 0x100c85cd */
  if (!C.zf) goto L_100c85cd;
  /* 100c85c9 mov eax, edx */
  EAX = (EDX);
  /* 100c85cb jmp 0x100c85d0 */
  goto L_100c85d0;
L_100c85cd:;
  /* 100c85cd mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_100c85d0:;
  /* 100c85d0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100c85d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100c85d5 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c85d8 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 100c85db mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_100c85de:;
  /* 100c85de shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_100c85e0:;
  /* 100c85e0 mov edx, ebx */
  EDX = (EBX);
  /* 100c85e2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100c85e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100c85e5 je 0x100c85f5 */
  if (C.zf) goto L_100c85f5;
  /* 100c85e7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_100c85e8:;
  /* 100c85e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c85ea je 0x100c85f0 */
  if (C.zf) goto L_100c85f0;
  /* 100c85ec mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 100c85ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100c85f0:;
  /* 100c85f0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100c85f2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100c85f3 jne 0x100c85e8 */
  if (!C.zf) goto L_100c85e8;
L_100c85f5:;
  /* 100c85f5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100c85f7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100c85f9 je 0x100c8645 */
  if (C.zf) goto L_100c8645;
  /* 100c85fb cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c85ff jne 0x100c860b */
  if (!C.zf) goto L_100c860b;
  /* 100c8601 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8604 je 0x100c8645 */
  if (C.zf) goto L_100c8645;
  /* 100c8606 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8609 je 0x100c8645 */
  if (C.zf) goto L_100c8645;
L_100c860b:;
  /* 100c860b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c860f je 0x100c863f */
  if (C.zf) goto L_100c863f;
  /* 100c8611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c8613 je 0x100c862e */
  if (C.zf) goto L_100c862e;
  /* 100c8615 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 100c8618 test byte ptr [ebx + 0x100d6b41], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x100d6b41)))&(0x4u); fl_logic(_r,8); }
  /* 100c861f je 0x100c8627 */
  if (C.zf) goto L_100c8627;
  /* 100c8621 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100c8623 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100c8624 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c8625 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_100c8627:;
  /* 100c8627 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100c8629 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100c862b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100c862c jmp 0x100c863d */
  goto L_100c863d;
L_100c862e:;
  /* 100c862e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 100c8631 test byte ptr [edx + 0x100d6b41], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x100d6b41)))&(0x4u); fl_logic(_r,8); }
  /* 100c8638 je 0x100c863d */
  if (C.zf) goto L_100c863d;
  /* 100c863a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c863b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_100c863d:;
  /* 100c863d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_100c863f:;
  /* 100c863f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c8640 jmp 0x100c859d */
  goto L_100c859d;
L_100c8645:;
  /* 100c8645 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c8647 je 0x100c864d */
  if (C.zf) goto L_100c864d;
  /* 100c8649 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 100c864c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100c864d:;
  /* 100c864d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100c864f jmp 0x100c856b */
  goto L_100c856b;
L_100c8654:;
  /* 100c8654 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100c8656 je 0x100c865b */
  if (C.zf) goto L_100c865b;
  /* 100c8658 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_100c865b:;
  /* 100c865b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100c865e pop edi */
  EDI = (pop32());
  /* 100c865f pop esi */
  ESI = (pop32());
  /* 100c8660 pop ebx */
  EBX = (pop32());
  /* 100c8661 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 100c8663 pop ebp */
  EBP = (pop32());
  /* 100c8664 ret  */
  ESPCHK(0x100c84b1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008665 @ 0x100c8665 (306 bytes, 132 insns) */
void f_100c8665(void) {
  FTRACE(0x100c8665u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8665 push ecx */
  push32((uint32_t)(ECX));
  /* 100c8666 push ecx */
  push32((uint32_t)(ECX));
  /* 100c8667 mov eax, dword ptr [0x100d67e0] */
  EAX = (r32((uint32_t)(0x100d67e0)));
  /* 100c866c push ebx */
  push32((uint32_t)(EBX));
  /* 100c866d push ebp */
  push32((uint32_t)(EBP));
  /* 100c866e mov ebp, dword ptr [0x100ce068] */
  EBP = (r32((uint32_t)(0x100ce068)));
  /* 100c8674 push esi */
  push32((uint32_t)(ESI));
  /* 100c8675 push edi */
  push32((uint32_t)(EDI));
  /* 100c8676 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100c8678 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100c867a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100c867c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c867e jne 0x100c86b3 */
  if (!C.zf) goto L_100c86b3;
  /* 100c8680 call ebp */
  call_ind((uint32_t)(EBP), 0x100c8682u);
  /* 100c8682 mov esi, eax */
  ESI = (EAX);
  /* 100c8684 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8686 je 0x100c8694 */
  if (C.zf) goto L_100c8694;
  /* 100c8688 mov dword ptr [0x100d67e0], 1 */
  w32((uint32_t)(0x100d67e0), (0x1u));
  /* 100c8692 jmp 0x100c86bc */
  goto L_100c86bc;
L_100c8694:;
  /* 100c8694 call dword ptr [0x100ce064] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce064))), 0x100c869au);
  /* 100c869a mov edi, eax */
  EDI = (EAX);
  /* 100c869c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c869e je 0x100c878e */
  if (C.zf) goto L_100c878e;
  /* 100c86a4 mov dword ptr [0x100d67e0], 2 */
  w32((uint32_t)(0x100d67e0), (0x2u));
  /* 100c86ae jmp 0x100c8742 */
  goto L_100c8742;
L_100c86b3:;
  /* 100c86b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c86b6 jne 0x100c873d */
  if (!C.zf) goto L_100c873d;
L_100c86bc:;
  /* 100c86bc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c86be jne 0x100c86cc */
  if (!C.zf) goto L_100c86cc;
  /* 100c86c0 call ebp */
  call_ind((uint32_t)(EBP), 0x100c86c2u);
  /* 100c86c2 mov esi, eax */
  ESI = (EAX);
  /* 100c86c4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c86c6 je 0x100c878e */
  if (C.zf) goto L_100c878e;
L_100c86cc:;
  /* 100c86cc cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100c86cf mov eax, esi */
  EAX = (ESI);
  /* 100c86d1 je 0x100c86e1 */
  if (C.zf) goto L_100c86e1;
L_100c86d3:;
  /* 100c86d3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c86d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c86d5 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100c86d8 jne 0x100c86d3 */
  if (!C.zf) goto L_100c86d3;
  /* 100c86da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c86db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c86dc cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100c86df jne 0x100c86d3 */
  if (!C.zf) goto L_100c86d3;
L_100c86e1:;
  /* 100c86e1 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c86e3 mov edi, dword ptr [0x100ce060] */
  EDI = (r32((uint32_t)(0x100ce060)));
  /* 100c86e9 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100c86eb push ebx */
  push32((uint32_t)(EBX));
  /* 100c86ec push ebx */
  push32((uint32_t)(EBX));
  /* 100c86ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c86ee push ebx */
  push32((uint32_t)(EBX));
  /* 100c86ef push ebx */
  push32((uint32_t)(EBX));
  /* 100c86f0 push eax */
  push32((uint32_t)(EAX));
  /* 100c86f1 push esi */
  push32((uint32_t)(ESI));
  /* 100c86f2 push ebx */
  push32((uint32_t)(EBX));
  /* 100c86f3 push ebx */
  push32((uint32_t)(EBX));
  /* 100c86f4 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 100c86f8 call edi */
  call_ind((uint32_t)(EDI), 0x100c86fau);
  /* 100c86fa mov ebp, eax */
  EBP = (EAX);
  /* 100c86fc cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c86fe je 0x100c8732 */
  if (C.zf) goto L_100c8732;
  /* 100c8700 push ebp */
  push32((uint32_t)(EBP));
  /* 100c8701 call 0x100ca2af */
  push32(0x100c8706u); f_100ca2af();
  /* 100c8706 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8708 pop ecx */
  ECX = (pop32());
  /* 100c8709 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 100c870d je 0x100c8732 */
  if (C.zf) goto L_100c8732;
  /* 100c870f push ebx */
  push32((uint32_t)(EBX));
  /* 100c8710 push ebx */
  push32((uint32_t)(EBX));
  /* 100c8711 push ebp */
  push32((uint32_t)(EBP));
  /* 100c8712 push eax */
  push32((uint32_t)(EAX));
  /* 100c8713 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 100c8717 push esi */
  push32((uint32_t)(ESI));
  /* 100c8718 push ebx */
  push32((uint32_t)(EBX));
  /* 100c8719 push ebx */
  push32((uint32_t)(EBX));
  /* 100c871a call edi */
  call_ind((uint32_t)(EDI), 0x100c871cu);
  /* 100c871c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c871e jne 0x100c872e */
  if (!C.zf) goto L_100c872e;
  /* 100c8720 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100c8724 call 0x100ca1c6 */
  push32(0x100c8729u); f_100ca1c6();
  /* 100c8729 pop ecx */
  ECX = (pop32());
  /* 100c872a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_100c872e:;
  /* 100c872e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_100c8732:;
  /* 100c8732 push esi */
  push32((uint32_t)(ESI));
  /* 100c8733 call dword ptr [0x100ce05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce05c))), 0x100c8739u);
  /* 100c8739 mov eax, ebx */
  EAX = (EBX);
  /* 100c873b jmp 0x100c8790 */
  goto L_100c8790;
L_100c873d:;
  /* 100c873d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8740 jne 0x100c878e */
  if (!C.zf) goto L_100c878e;
L_100c8742:;
  /* 100c8742 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8744 jne 0x100c8752 */
  if (!C.zf) goto L_100c8752;
  /* 100c8746 call dword ptr [0x100ce064] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce064))), 0x100c874cu);
  /* 100c874c mov edi, eax */
  EDI = (EAX);
  /* 100c874e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8750 je 0x100c878e */
  if (C.zf) goto L_100c878e;
L_100c8752:;
  /* 100c8752 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8754 mov eax, edi */
  EAX = (EDI);
  /* 100c8756 je 0x100c8762 */
  if (C.zf) goto L_100c8762;
L_100c8758:;
  /* 100c8758 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c8759 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c875b jne 0x100c8758 */
  if (!C.zf) goto L_100c8758;
  /* 100c875d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c875e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8760 jne 0x100c8758 */
  if (!C.zf) goto L_100c8758;
L_100c8762:;
  /* 100c8762 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c8764 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c8765 mov ebp, eax */
  EBP = (EAX);
  /* 100c8767 push ebp */
  push32((uint32_t)(EBP));
  /* 100c8768 call 0x100ca2af */
  push32(0x100c876du); f_100ca2af();
  /* 100c876d mov esi, eax */
  ESI = (EAX);
  /* 100c876f pop ecx */
  ECX = (pop32());
  /* 100c8770 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8772 jne 0x100c8778 */
  if (!C.zf) goto L_100c8778;
  /* 100c8774 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100c8776 jmp 0x100c8783 */
  goto L_100c8783;
L_100c8778:;
  /* 100c8778 push ebp */
  push32((uint32_t)(EBP));
  /* 100c8779 push edi */
  push32((uint32_t)(EDI));
  /* 100c877a push esi */
  push32((uint32_t)(ESI));
  /* 100c877b call 0x100ca7e0 */
  push32(0x100c8780u); f_100ca7e0();
  /* 100c8780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c8783:;
  /* 100c8783 push edi */
  push32((uint32_t)(EDI));
  /* 100c8784 call dword ptr [0x100ce058] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce058))), 0x100c878au);
  /* 100c878a mov eax, esi */
  EAX = (ESI);
  /* 100c878c jmp 0x100c8790 */
  goto L_100c8790;
L_100c878e:;
  /* 100c878e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100c8790:;
  /* 100c8790 pop edi */
  EDI = (pop32());
  /* 100c8791 pop esi */
  ESI = (pop32());
  /* 100c8792 pop ebp */
  EBP = (pop32());
  /* 100c8793 pop ebx */
  EBX = (pop32());
  /* 100c8794 pop ecx */
  ECX = (pop32());
  /* 100c8795 pop ecx */
  ECX = (pop32());
  /* 100c8796 ret  */
  ESPCHK(0x100c8665u, _esp0);
  ESP += 4; return;
}

/* FUN_10008797 @ 0x100c8797 (45 bytes, 17 insns) */
void f_100c8797(void) {
  FTRACE(0x100c8797u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8797 push esi */
  push32((uint32_t)(ESI));
  /* 100c8798 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100c879c push 0 */
  push32((uint32_t)(0x0u));
  /* 100c879e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100c87a1 call dword ptr [0x100ce004] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce004))), 0x100c87a7u);
  /* 100c87a7 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100c87ac jne 0x100c87c2 */
  if (!C.zf) goto L_100c87c2;
  /* 100c87ae mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 100c87b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100c87b3 je 0x100c87c2 */
  if (C.zf) goto L_100c87c2;
  /* 100c87b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c87b7 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 100c87ba mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 100c87bc mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 100c87bf mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_100c87c2:;
  /* 100c87c2 pop esi */
  ESI = (pop32());
  /* 100c87c3 ret  */
  ESPCHK(0x100c8797u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c4 @ 0x100c87c4 (328 bytes, 115 insns) */
void f_100c87c4(void) {
  FTRACE(0x100c87c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c87c4 push ebp */
  push32((uint32_t)(EBP));
  /* 100c87c5 mov ebp, esp */
  EBP = (ESP);
  /* 100c87c7 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 100c87cc call 0x100caed0 */
  push32(0x100c87d1u); f_100caed0();
  /* 100c87d1 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 100c87d7 push ebx */
  push32((uint32_t)(EBX));
  /* 100c87d8 push eax */
  push32((uint32_t)(EAX));
  /* 100c87d9 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 100c87e3 call dword ptr [0x100ce070] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce070))), 0x100c87e9u);
  /* 100c87e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c87eb je 0x100c8807 */
  if (C.zf) goto L_100c8807;
  /* 100c87ed cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c87f4 jne 0x100c8807 */
  if (!C.zf) goto L_100c8807;
  /* 100c87f6 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c87fd jb 0x100c8807 */
  if (C.cf) goto L_100c8807;
  /* 100c87ff push 1 */
  push32((uint32_t)(0x1u));
  /* 100c8801 pop eax */
  EAX = (pop32());
  /* 100c8802 jmp 0x100c8909 */
  goto L_100c8909;
L_100c8807:;
  /* 100c8807 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100c880d push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 100c8812 push eax */
  push32((uint32_t)(EAX));
  /* 100c8813 push 0x100ce1c8 */
  push32((uint32_t)(0x100ce1c8u));
  /* 100c8818 call dword ptr [0x100ce06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce06c))), 0x100c881eu);
  /* 100c881e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8820 je 0x100c88f6 */
  if (C.zf) goto L_100c88f6;
  /* 100c8826 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100c8828 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 100c882e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8834 je 0x100c8849 */
  if (C.zf) goto L_100c8849;
L_100c8836:;
  /* 100c8836 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100c8838 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c883a jl 0x100c8844 */
  if ((C.sf!=C.of)) goto L_100c8844;
  /* 100c883c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c883e jg 0x100c8844 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c8844;
  /* 100c8840 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100c8842 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_100c8844:;
  /* 100c8844 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100c8845 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8847 jne 0x100c8836 */
  if (!C.zf) goto L_100c8836;
L_100c8849:;
  /* 100c8849 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100c884f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 100c8851 push eax */
  push32((uint32_t)(EAX));
  /* 100c8852 push 0x100ce1b0 */
  push32((uint32_t)(0x100ce1b0u));
  /* 100c8857 call 0x100cae90 */
  push32(0x100c885cu); f_100cae90();
  /* 100c885c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c885f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8861 jne 0x100c886b */
  if (!C.zf) goto L_100c886b;
  /* 100c8863 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100c8869 jmp 0x100c88b4 */
  goto L_100c88b4;
L_100c886b:;
  /* 100c886b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 100c8871 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 100c8876 push eax */
  push32((uint32_t)(EAX));
  /* 100c8877 push ebx */
  push32((uint32_t)(EBX));
  /* 100c8878 call dword ptr [0x100ce054] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce054))), 0x100c887eu);
  /* 100c887e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8884 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 100c888a je 0x100c889f */
  if (C.zf) goto L_100c889f;
L_100c888c:;
  /* 100c888c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100c888e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8890 jl 0x100c889a */
  if ((C.sf!=C.of)) goto L_100c889a;
  /* 100c8892 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8894 jg 0x100c889a */
  if ((!C.zf&&C.sf==C.of)) goto L_100c889a;
  /* 100c8896 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100c8898 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_100c889a:;
  /* 100c889a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100c889b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c889d jne 0x100c888c */
  if (!C.zf) goto L_100c888c;
L_100c889f:;
  /* 100c889f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 100c88a5 push eax */
  push32((uint32_t)(EAX));
  /* 100c88a6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100c88ac push eax */
  push32((uint32_t)(EAX));
  /* 100c88ad call 0x100cae10 */
  push32(0x100c88b2u); f_100cae10();
  /* 100c88b2 pop ecx */
  ECX = (pop32());
  /* 100c88b3 pop ecx */
  ECX = (pop32());
L_100c88b4:;
  /* 100c88b4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c88b6 je 0x100c88f6 */
  if (C.zf) goto L_100c88f6;
  /* 100c88b8 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 100c88ba push eax */
  push32((uint32_t)(EAX));
  /* 100c88bb call 0x100cad50 */
  push32(0x100c88c0u); f_100cad50();
  /* 100c88c0 pop ecx */
  ECX = (pop32());
  /* 100c88c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c88c3 pop ecx */
  ECX = (pop32());
  /* 100c88c4 je 0x100c88f6 */
  if (C.zf) goto L_100c88f6;
  /* 100c88c6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c88c7 mov ecx, eax */
  ECX = (EAX);
  /* 100c88c9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c88cb je 0x100c88db */
  if (C.zf) goto L_100c88db;
L_100c88cd:;
  /* 100c88cd cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c88d0 jne 0x100c88d6 */
  if (!C.zf) goto L_100c88d6;
  /* 100c88d2 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 100c88d4 jmp 0x100c88d7 */
  goto L_100c88d7;
L_100c88d6:;
  /* 100c88d6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_100c88d7:;
  /* 100c88d7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c88d9 jne 0x100c88cd */
  if (!C.zf) goto L_100c88cd;
L_100c88db:;
  /* 100c88db push 0xa */
  push32((uint32_t)(0xau));
  /* 100c88dd push ebx */
  push32((uint32_t)(EBX));
  /* 100c88de push eax */
  push32((uint32_t)(EAX));
  /* 100c88df call 0x100cab15 */
  push32(0x100c88e4u); f_100cab15();
  /* 100c88e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c88e7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c88ea je 0x100c8909 */
  if (C.zf) goto L_100c8909;
  /* 100c88ec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c88ef je 0x100c8909 */
  if (C.zf) goto L_100c8909;
  /* 100c88f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c88f4 je 0x100c8909 */
  if (C.zf) goto L_100c8909;
L_100c88f6:;
  /* 100c88f6 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100c88f9 push eax */
  push32((uint32_t)(EAX));
  /* 100c88fa call 0x100c8797 */
  push32(0x100c88ffu); f_100c8797();
  /* 100c88ff cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8903 pop ecx */
  ECX = (pop32());
  /* 100c8904 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c8906 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100c8909:;
  /* 100c8909 pop ebx */
  EBX = (pop32());
  /* 100c890a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c890b ret  */
  ESPCHK(0x100c87c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000890c @ 0x100c890c (93 bytes, 30 insns) */
void f_100c890c(void) {
  FTRACE(0x100c890cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c890c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c890e push 0 */
  push32((uint32_t)(0x0u));
  /* 100c8910 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8914 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100c8919 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100c891c push eax */
  push32((uint32_t)(EAX));
  /* 100c891d call dword ptr [0x100ce078] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce078))), 0x100c8923u);
  /* 100c8923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8925 mov dword ptr [0x100d7c64], eax */
  w32((uint32_t)(0x100d7c64), (EAX));
  /* 100c892a je 0x100c8962 */
  if (C.zf) goto L_100c8962;
  /* 100c892c call 0x100c87c4 */
  push32(0x100c8931u); f_100c87c4();
  /* 100c8931 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8934 mov dword ptr [0x100d7c68], eax */
  w32((uint32_t)(0x100d7c68), (EAX));
  /* 100c8939 jne 0x100c8948 */
  if (!C.zf) goto L_100c8948;
  /* 100c893b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 100c8940 call 0x100caeff */
  push32(0x100c8945u); f_100caeff();
  /* 100c8945 pop ecx */
  ECX = (pop32());
  /* 100c8946 jmp 0x100c8952 */
  goto L_100c8952;
L_100c8948:;
  /* 100c8948 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c894b jne 0x100c8965 */
  if (!C.zf) goto L_100c8965;
  /* 100c894d call 0x100cb750 */
  push32(0x100c8952u); f_100cb750();
L_100c8952:;
  /* 100c8952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8954 jne 0x100c8965 */
  if (!C.zf) goto L_100c8965;
  /* 100c8956 push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
  /* 100c895c call dword ptr [0x100ce074] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce074))), 0x100c8962u);
L_100c8962:;
  /* 100c8962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c8964 ret  */
  ESPCHK(0x100c890cu, _esp0);
  ESP += 4; return;
L_100c8965:;
  /* 100c8965 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c8967 pop eax */
  EAX = (pop32());
  /* 100c8968 ret  */
  ESPCHK(0x100c890cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008969 @ 0x100c8969 (168 bytes, 56 insns) */
void f_100c8969(void) {
  FTRACE(0x100c8969u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8969 mov eax, dword ptr [0x100d7c68] */
  EAX = (r32((uint32_t)(0x100d7c68)));
  /* 100c896e push esi */
  push32((uint32_t)(ESI));
  /* 100c896f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8972 push edi */
  push32((uint32_t)(EDI));
  /* 100c8973 jne 0x100c89db */
  if (!C.zf) goto L_100c89db;
  /* 100c8975 push ebx */
  push32((uint32_t)(EBX));
  /* 100c8976 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100c8978 cmp dword ptr [0x100d6a08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100d6a08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c897e push ebp */
  push32((uint32_t)(EBP));
  /* 100c897f mov ebp, dword ptr [0x100ce080] */
  EBP = (r32((uint32_t)(0x100ce080)));
  /* 100c8985 jle 0x100c89c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100c89c7;
  /* 100c8987 mov eax, dword ptr [0x100d6a0c] */
  EAX = (r32((uint32_t)(0x100d6a0c)));
  /* 100c898c mov edi, dword ptr [0x100ce07c] */
  EDI = (r32((uint32_t)(0x100ce07c)));
  /* 100c8992 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_100c8995:;
  /* 100c8995 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 100c899a push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 100c899f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100c89a1 call edi */
  call_ind((uint32_t)(EDI), 0x100c89a3u);
  /* 100c89a3 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100c89a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c89aa push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100c89ac call edi */
  call_ind((uint32_t)(EDI), 0x100c89aeu);
  /* 100c89ae push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 100c89b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c89b3 push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
  /* 100c89b9 call ebp */
  call_ind((uint32_t)(EBP), 0x100c89bbu);
  /* 100c89bb add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c89be inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100c89bf cmp ebx, dword ptr [0x100d6a08] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100d6a08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c89c5 jl 0x100c8995 */
  if ((C.sf!=C.of)) goto L_100c8995;
L_100c89c7:;
  /* 100c89c7 push dword ptr [0x100d6a0c] */
  push32((uint32_t)(r32((uint32_t)(0x100d6a0c))));
  /* 100c89cd push 0 */
  push32((uint32_t)(0x0u));
  /* 100c89cf push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
  /* 100c89d5 call ebp */
  call_ind((uint32_t)(EBP), 0x100c89d7u);
  /* 100c89d7 pop ebp */
  EBP = (pop32());
  /* 100c89d8 pop ebx */
  EBX = (pop32());
  /* 100c89d9 jmp 0x100c8a02 */
  goto L_100c8a02;
L_100c89db:;
  /* 100c89db cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c89de jne 0x100c8a02 */
  if (!C.zf) goto L_100c8a02;
  /* 100c89e0 mov edi, 0x100d0ea0 */
  EDI = (0x100d0ea0u);
  /* 100c89e5 mov esi, edi */
  ESI = (EDI);
L_100c89e7:;
  /* 100c89e7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 100c89ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c89ec je 0x100c89fc */
  if (C.zf) goto L_100c89fc;
  /* 100c89ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100c89f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c89f5 push eax */
  push32((uint32_t)(EAX));
  /* 100c89f6 call dword ptr [0x100ce07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce07c))), 0x100c89fcu);
L_100c89fc:;
  /* 100c89fc mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 100c89fe cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8a00 jne 0x100c89e7 */
  if (!C.zf) goto L_100c89e7;
L_100c8a02:;
  /* 100c8a02 push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
  /* 100c8a08 call dword ptr [0x100ce074] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce074))), 0x100c8a0eu);
  /* 100c8a0e pop edi */
  EDI = (pop32());
  /* 100c8a0f pop esi */
  ESI = (pop32());
  /* 100c8a10 ret  */
  ESPCHK(0x100c8969u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a11 @ 0x100c8a11 (57 bytes, 18 insns) */
void f_100c8a11(void) {
  FTRACE(0x100c8a11u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8a11 mov eax, dword ptr [0x100d6690] */
  EAX = (r32((uint32_t)(0x100d6690)));
  /* 100c8a16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8a19 je 0x100c8a28 */
  if (C.zf) goto L_100c8a28;
  /* 100c8a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8a1d jne 0x100c8a49 */
  if (!C.zf) goto L_100c8a49;
  /* 100c8a1f cmp dword ptr [0x100d6694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100d6694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8a26 jne 0x100c8a49 */
  if (!C.zf) goto L_100c8a49;
L_100c8a28:;
  /* 100c8a28 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 100c8a2d call 0x100c8a4a */
  push32(0x100c8a32u); f_100c8a4a();
  /* 100c8a32 mov eax, dword ptr [0x100d67e4] */
  EAX = (r32((uint32_t)(0x100d67e4)));
  /* 100c8a37 pop ecx */
  ECX = (pop32());
  /* 100c8a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8a3a je 0x100c8a3e */
  if (C.zf) goto L_100c8a3e;
  /* 100c8a3c call eax */
  call_ind((uint32_t)(EAX), 0x100c8a3eu);
L_100c8a3e:;
  /* 100c8a3e push 0xff */
  push32((uint32_t)(0xffu));
  /* 100c8a43 call 0x100c8a4a */
  push32(0x100c8a48u); f_100c8a4a();
  /* 100c8a48 pop ecx */
  ECX = (pop32());
L_100c8a49:;
  /* 100c8a49 ret  */
  ESPCHK(0x100c8a11u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a4a @ 0x100c8a4a (339 bytes, 100 insns) */
void f_100c8a4a(void) {
  FTRACE(0x100c8a4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8a4a push ebp */
  push32((uint32_t)(EBP));
  /* 100c8a4b mov ebp, esp */
  EBP = (ESP);
  /* 100c8a4d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c8a53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c8a56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100c8a58 mov eax, 0x100d0700 */
  EAX = (0x100d0700u);
L_100c8a5d:;
  /* 100c8a5d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8a5f je 0x100c8a6c */
  if (C.zf) goto L_100c8a6c;
  /* 100c8a61 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8a64 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100c8a65 cmp eax, 0x100d0790 */
  { uint32_t _a=(EAX),_b=(0x100d0790u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8a6a jl 0x100c8a5d */
  if ((C.sf!=C.of)) goto L_100c8a5d;
L_100c8a6c:;
  /* 100c8a6c push esi */
  push32((uint32_t)(ESI));
  /* 100c8a6d mov esi, ecx */
  ESI = (ECX);
  /* 100c8a6f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 100c8a72 cmp edx, dword ptr [esi + 0x100d0700] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x100d0700))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8a78 jne 0x100c8b9a */
  if (!C.zf) goto L_100c8b9a;
  /* 100c8a7e mov eax, dword ptr [0x100d6690] */
  EAX = (r32((uint32_t)(0x100d6690)));
  /* 100c8a83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8a86 je 0x100c8b74 */
  if (C.zf) goto L_100c8b74;
  /* 100c8a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8a8e jne 0x100c8a9d */
  if (!C.zf) goto L_100c8a9d;
  /* 100c8a90 cmp dword ptr [0x100d6694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100d6694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8a97 je 0x100c8b74 */
  if (C.zf) goto L_100c8b74;
L_100c8a9d:;
  /* 100c8a9d cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8aa3 je 0x100c8b9a */
  if (C.zf) goto L_100c8b9a;
  /* 100c8aa9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100c8aaf push 0x104 */
  push32((uint32_t)(0x104u));
  /* 100c8ab4 push eax */
  push32((uint32_t)(EAX));
  /* 100c8ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c8ab7 call dword ptr [0x100ce054] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce054))), 0x100c8abdu);
  /* 100c8abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8abf jne 0x100c8ad4 */
  if (!C.zf) goto L_100c8ad4;
  /* 100c8ac1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100c8ac7 push 0x100ce4b8 */
  push32((uint32_t)(0x100ce4b8u));
  /* 100c8acc push eax */
  push32((uint32_t)(EAX));
  /* 100c8acd call 0x100c9af0 */
  push32(0x100c8ad2u); f_100c9af0();
  /* 100c8ad2 pop ecx */
  ECX = (pop32());
  /* 100c8ad3 pop ecx */
  ECX = (pop32());
L_100c8ad4:;
  /* 100c8ad4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100c8ada push edi */
  push32((uint32_t)(EDI));
  /* 100c8adb push eax */
  push32((uint32_t)(EAX));
  /* 100c8adc lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 100c8ae2 call 0x100c9040 */
  push32(0x100c8ae7u); f_100c9040();
  /* 100c8ae7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c8ae8 pop ecx */
  ECX = (pop32());
  /* 100c8ae9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8aec jbe 0x100c8b17 */
  if ((C.cf||C.zf)) goto L_100c8b17;
  /* 100c8aee lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100c8af4 push eax */
  push32((uint32_t)(EAX));
  /* 100c8af5 call 0x100c9040 */
  push32(0x100c8afau); f_100c9040();
  /* 100c8afa mov edi, eax */
  EDI = (EAX);
  /* 100c8afc lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100c8b02 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c8b05 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c8b07 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8b09 push 0x100ce4b4 */
  push32((uint32_t)(0x100ce4b4u));
  /* 100c8b0e push edi */
  push32((uint32_t)(EDI));
  /* 100c8b0f call 0x100cbe00 */
  push32(0x100c8b14u); f_100cbe00();
  /* 100c8b14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c8b17:;
  /* 100c8b17 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100c8b1d push 0x100ce498 */
  push32((uint32_t)(0x100ce498u));
  /* 100c8b22 push eax */
  push32((uint32_t)(EAX));
  /* 100c8b23 call 0x100c9af0 */
  push32(0x100c8b28u); f_100c9af0();
  /* 100c8b28 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100c8b2e push edi */
  push32((uint32_t)(EDI));
  /* 100c8b2f push eax */
  push32((uint32_t)(EAX));
  /* 100c8b30 call 0x100c9b00 */
  push32(0x100c8b35u); f_100c9b00();
  /* 100c8b35 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100c8b3b push 0x100ce494 */
  push32((uint32_t)(0x100ce494u));
  /* 100c8b40 push eax */
  push32((uint32_t)(EAX));
  /* 100c8b41 call 0x100c9b00 */
  push32(0x100c8b46u); f_100c9b00();
  /* 100c8b46 push dword ptr [esi + 0x100d0704] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x100d0704))));
  /* 100c8b4c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100c8b52 push eax */
  push32((uint32_t)(EAX));
  /* 100c8b53 call 0x100c9b00 */
  push32(0x100c8b58u); f_100c9b00();
  /* 100c8b58 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 100c8b5d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100c8b63 push 0x100ce46c */
  push32((uint32_t)(0x100ce46cu));
  /* 100c8b68 push eax */
  push32((uint32_t)(EAX));
  /* 100c8b69 call 0x100cbd74 */
  push32(0x100c8b6eu); f_100cbd74();
  /* 100c8b6e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8b71 pop edi */
  EDI = (pop32());
  /* 100c8b72 jmp 0x100c8b9a */
  goto L_100c8b9a;
L_100c8b74:;
  /* 100c8b74 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100c8b77 lea esi, [esi + 0x100d0704] */
  ESI = ((uint32_t)(ESI + 0x100d0704));
  /* 100c8b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 100c8b7f push eax */
  push32((uint32_t)(EAX));
  /* 100c8b80 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100c8b82 call 0x100c9040 */
  push32(0x100c8b87u); f_100c9040();
  /* 100c8b87 pop ecx */
  ECX = (pop32());
  /* 100c8b88 push eax */
  push32((uint32_t)(EAX));
  /* 100c8b89 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100c8b8b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 100c8b8d call dword ptr [0x100ce044] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce044))), 0x100c8b93u);
  /* 100c8b93 push eax */
  push32((uint32_t)(EAX));
  /* 100c8b94 call dword ptr [0x100ce084] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce084))), 0x100c8b9au);
L_100c8b9a:;
  /* 100c8b9a pop esi */
  ESI = (pop32());
  /* 100c8b9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c8b9c ret  */
  ESPCHK(0x100c8a4au, _esp0);
  ESP += 4; return;
}

/* FUN_10008b9d @ 0x100c8b9d (101 bytes, 34 insns) */
void f_100c8b9d(void) {
  FTRACE(0x100c8b9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8b9d push esi */
  push32((uint32_t)(ESI));
  /* 100c8b9e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100c8ba2 cmp esi, dword ptr [0x100d7d80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100d7d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8ba8 jae 0x100c8bea */
  if (!C.cf) goto L_100c8bea;
  /* 100c8baa mov ecx, esi */
  ECX = (ESI);
  /* 100c8bac mov eax, esi */
  EAX = (ESI);
  /* 100c8bae sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100c8bb1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100c8bb4 mov ecx, dword ptr [ecx*4 + 0x100d7c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100d7c80)));
  /* 100c8bbb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100c8bbe test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100c8bc3 je 0x100c8bea */
  if (C.zf) goto L_100c8bea;
  /* 100c8bc5 push edi */
  push32((uint32_t)(EDI));
  /* 100c8bc6 push esi */
  push32((uint32_t)(ESI));
  /* 100c8bc7 call 0x100cc044 */
  push32(0x100c8bccu); f_100cc044();
  /* 100c8bcc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100c8bd0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100c8bd4 push esi */
  push32((uint32_t)(ESI));
  /* 100c8bd5 call 0x100c8c02 */
  push32(0x100c8bdau); f_100c8c02();
  /* 100c8bda push esi */
  push32((uint32_t)(ESI));
  /* 100c8bdb mov edi, eax */
  EDI = (EAX);
  /* 100c8bdd call 0x100cc0a3 */
  push32(0x100c8be2u); f_100cc0a3();
  /* 100c8be2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8be5 mov eax, edi */
  EAX = (EDI);
  /* 100c8be7 pop edi */
  EDI = (pop32());
  /* 100c8be8 pop esi */
  ESI = (pop32());
  /* 100c8be9 ret  */
  ESPCHK(0x100c8b9du, _esp0);
  ESP += 4; return;
L_100c8bea:;
  /* 100c8bea call 0x100cbf71 */
  push32(0x100c8befu); f_100cbf71();
  /* 100c8bef mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100c8bf5 call 0x100cbf7a */
  push32(0x100c8bfau); f_100cbf7a();
  /* 100c8bfa and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100c8bfd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100c8c00 pop esi */
  ESI = (pop32());
  /* 100c8c01 ret  */
  ESPCHK(0x100c8b9du, _esp0);
  ESP += 4; return;
}

/* FUN_10008c02 @ 0x100c8c02 (115 bytes, 41 insns) */
void f_100c8c02(void) {
  FTRACE(0x100c8c02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8c02 push esi */
  push32((uint32_t)(ESI));
  /* 100c8c03 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100c8c07 push edi */
  push32((uint32_t)(EDI));
  /* 100c8c08 push esi */
  push32((uint32_t)(ESI));
  /* 100c8c09 call 0x100cc002 */
  push32(0x100c8c0eu); f_100cc002();
  /* 100c8c0e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8c11 pop ecx */
  ECX = (pop32());
  /* 100c8c12 jne 0x100c8c21 */
  if (!C.zf) goto L_100c8c21;
  /* 100c8c14 call 0x100cbf71 */
  push32(0x100c8c19u); f_100cbf71();
  /* 100c8c19 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100c8c1f jmp 0x100c8c4e */
  goto L_100c8c4e;
L_100c8c21:;
  /* 100c8c21 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 100c8c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c8c27 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100c8c2b push eax */
  push32((uint32_t)(EAX));
  /* 100c8c2c call dword ptr [0x100ce000] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce000))), 0x100c8c32u);
  /* 100c8c32 mov edi, eax */
  EDI = (EAX);
  /* 100c8c34 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8c37 jne 0x100c8c41 */
  if (!C.zf) goto L_100c8c41;
  /* 100c8c39 call dword ptr [0x100ce03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce03c))), 0x100c8c3fu);
  /* 100c8c3f jmp 0x100c8c43 */
  goto L_100c8c43;
L_100c8c41:;
  /* 100c8c41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100c8c43:;
  /* 100c8c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8c45 je 0x100c8c53 */
  if (C.zf) goto L_100c8c53;
  /* 100c8c47 push eax */
  push32((uint32_t)(EAX));
  /* 100c8c48 call 0x100cbefe */
  push32(0x100c8c4du); f_100cbefe();
  /* 100c8c4d pop ecx */
  ECX = (pop32());
L_100c8c4e:;
  /* 100c8c4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100c8c51 jmp 0x100c8c72 */
  goto L_100c8c72;
L_100c8c53:;
  /* 100c8c53 mov ecx, esi */
  ECX = (ESI);
  /* 100c8c55 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 100c8c58 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100c8c5b mov eax, esi */
  EAX = (ESI);
  /* 100c8c5d mov ecx, dword ptr [ecx*4 + 0x100d7c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100d7c80)));
  /* 100c8c64 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100c8c67 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 100c8c6c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 100c8c70 mov eax, edi */
  EAX = (EDI);
L_100c8c72:;
  /* 100c8c72 pop edi */
  EDI = (pop32());
  /* 100c8c73 pop esi */
  ESI = (pop32());
  /* 100c8c74 ret  */
  ESPCHK(0x100c8c02u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c75 @ 0x100c8c75 (101 bytes, 34 insns) */
void f_100c8c75(void) {
  FTRACE(0x100c8c75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8c75 push esi */
  push32((uint32_t)(ESI));
  /* 100c8c76 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100c8c7a cmp esi, dword ptr [0x100d7d80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100d7d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8c80 jae 0x100c8cc2 */
  if (!C.cf) goto L_100c8cc2;
  /* 100c8c82 mov ecx, esi */
  ECX = (ESI);
  /* 100c8c84 mov eax, esi */
  EAX = (ESI);
  /* 100c8c86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100c8c89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100c8c8c mov ecx, dword ptr [ecx*4 + 0x100d7c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100d7c80)));
  /* 100c8c93 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100c8c96 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100c8c9b je 0x100c8cc2 */
  if (C.zf) goto L_100c8cc2;
  /* 100c8c9d push edi */
  push32((uint32_t)(EDI));
  /* 100c8c9e push esi */
  push32((uint32_t)(ESI));
  /* 100c8c9f call 0x100cc044 */
  push32(0x100c8ca4u); f_100cc044();
  /* 100c8ca4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100c8ca8 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100c8cac push esi */
  push32((uint32_t)(ESI));
  /* 100c8cad call 0x100c8cda */
  push32(0x100c8cb2u); f_100c8cda();
  /* 100c8cb2 push esi */
  push32((uint32_t)(ESI));
  /* 100c8cb3 mov edi, eax */
  EDI = (EAX);
  /* 100c8cb5 call 0x100cc0a3 */
  push32(0x100c8cbau); f_100cc0a3();
  /* 100c8cba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8cbd mov eax, edi */
  EAX = (EDI);
  /* 100c8cbf pop edi */
  EDI = (pop32());
  /* 100c8cc0 pop esi */
  ESI = (pop32());
  /* 100c8cc1 ret  */
  ESPCHK(0x100c8c75u, _esp0);
  ESP += 4; return;
L_100c8cc2:;
  /* 100c8cc2 call 0x100cbf71 */
  push32(0x100c8cc7u); f_100cbf71();
  /* 100c8cc7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100c8ccd call 0x100cbf7a */
  push32(0x100c8cd2u); f_100cbf7a();
  /* 100c8cd2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100c8cd5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100c8cd8 pop esi */
  ESI = (pop32());
  /* 100c8cd9 ret  */
  ESPCHK(0x100c8c75u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cda @ 0x100c8cda (395 bytes, 135 insns) */
void f_100c8cda(void) {
  FTRACE(0x100c8cdau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8cda push ebp */
  push32((uint32_t)(EBP));
  /* 100c8cdb mov ebp, esp */
  EBP = (ESP);
  /* 100c8cdd sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c8ce3 push ebx */
  push32((uint32_t)(EBX));
  /* 100c8ce4 push esi */
  push32((uint32_t)(ESI));
  /* 100c8ce5 push edi */
  push32((uint32_t)(EDI));
  /* 100c8ce6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100c8ce8 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8ceb mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 100c8cee mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 100c8cf1 jne 0x100c8cfa */
  if (!C.zf) goto L_100c8cfa;
L_100c8cf3:;
  /* 100c8cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c8cf5 jmp 0x100c8e60 */
  goto L_100c8e60;
L_100c8cfa:;
  /* 100c8cfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c8cfd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100c8d00 lea ebx, [eax*4 + 0x100d7c80] */
  EBX = ((uint32_t)(EAX*4 + 0x100d7c80));
  /* 100c8d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c8d0a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100c8d0d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 100c8d10 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100c8d12 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100c8d15 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100c8d1a je 0x100c8d2a */
  if (C.zf) goto L_100c8d2a;
  /* 100c8d1c push 2 */
  push32((uint32_t)(0x2u));
  /* 100c8d1e push edi */
  push32((uint32_t)(EDI));
  /* 100c8d1f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c8d22 call 0x100c8c02 */
  push32(0x100c8d27u); f_100c8c02();
  /* 100c8d27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c8d2a:;
  /* 100c8d2a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100c8d2c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8d2e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100c8d32 je 0x100c8df9 */
  if (C.zf) goto L_100c8df9;
  /* 100c8d38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c8d3b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8d3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100c8d41 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 100c8d44 jbe 0x100c8e34 */
  if ((C.cf||C.zf)) goto L_100c8e34;
L_100c8d4a:;
  /* 100c8d4a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_100c8d50:;
  /* 100c8d50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100c8d53 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c8d56 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8d59 jae 0x100c8d84 */
  if (!C.cf) goto L_100c8d84;
  /* 100c8d5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100c8d5e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100c8d61 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 100c8d63 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8d66 jne 0x100c8d6f */
  if (!C.zf) goto L_100c8d6f;
  /* 100c8d68 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 100c8d6b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 100c8d6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_100c8d6f:;
  /* 100c8d6f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100c8d71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c8d72 mov ecx, eax */
  ECX = (EAX);
  /* 100c8d74 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 100c8d7a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c8d7c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8d82 jl 0x100c8d50 */
  if ((C.sf!=C.of)) goto L_100c8d50;
L_100c8d84:;
  /* 100c8d84 mov edi, eax */
  EDI = (EAX);
  /* 100c8d86 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 100c8d8c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c8d8e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c8d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c8d93 push eax */
  push32((uint32_t)(EAX));
  /* 100c8d94 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 100c8d9a push edi */
  push32((uint32_t)(EDI));
  /* 100c8d9b push eax */
  push32((uint32_t)(EAX));
  /* 100c8d9c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100c8d9e push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 100c8da1 call dword ptr [0x100ce084] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce084))), 0x100c8da7u);
  /* 100c8da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8da9 je 0x100c8dee */
  if (C.zf) goto L_100c8dee;
  /* 100c8dab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100c8dae add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100c8db1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8db3 jl 0x100c8dc0 */
  if ((C.sf!=C.of)) goto L_100c8dc0;
  /* 100c8db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100c8db8 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c8dbb cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8dbe jb 0x100c8d4a */
  if (C.cf) goto L_100c8d4a;
L_100c8dc0:;
  /* 100c8dc0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_100c8dc2:;
  /* 100c8dc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100c8dc5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8dc7 jne 0x100c8e5d */
  if (!C.zf) goto L_100c8e5d;
  /* 100c8dcd cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8dd0 je 0x100c8e34 */
  if (C.zf) goto L_100c8e34;
  /* 100c8dd2 push 5 */
  push32((uint32_t)(0x5u));
  /* 100c8dd4 pop esi */
  ESI = (pop32());
  /* 100c8dd5 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8dd8 jne 0x100c8e26 */
  if (!C.zf) goto L_100c8e26;
  /* 100c8dda call 0x100cbf71 */
  push32(0x100c8ddfu); f_100cbf71();
  /* 100c8ddf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100c8de5 call 0x100cbf7a */
  push32(0x100c8deau); f_100cbf7a();
  /* 100c8dea mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 100c8dec jmp 0x100c8e2f */
  goto L_100c8e2f;
L_100c8dee:;
  /* 100c8dee call dword ptr [0x100ce03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce03c))), 0x100c8df4u);
  /* 100c8df4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 100c8df7 jmp 0x100c8dc0 */
  goto L_100c8dc0;
L_100c8df9:;
  /* 100c8df9 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 100c8dfc push edi */
  push32((uint32_t)(EDI));
  /* 100c8dfd push ecx */
  push32((uint32_t)(ECX));
  /* 100c8dfe push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100c8e01 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c8e04 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 100c8e06 call dword ptr [0x100ce084] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce084))), 0x100c8e0cu);
  /* 100c8e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8e0e je 0x100c8e1b */
  if (C.zf) goto L_100c8e1b;
  /* 100c8e10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100c8e13 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 100c8e16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100c8e19 jmp 0x100c8dc2 */
  goto L_100c8dc2;
L_100c8e1b:;
  /* 100c8e1b call dword ptr [0x100ce03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce03c))), 0x100c8e21u);
  /* 100c8e21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 100c8e24 jmp 0x100c8dc2 */
  goto L_100c8dc2;
L_100c8e26:;
  /* 100c8e26 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c8e29 call 0x100cbefe */
  push32(0x100c8e2eu); f_100cbefe();
  /* 100c8e2e pop ecx */
  ECX = (pop32());
L_100c8e2f:;
  /* 100c8e2f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100c8e32 jmp 0x100c8e60 */
  goto L_100c8e60;
L_100c8e34:;
  /* 100c8e34 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100c8e36 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100c8e3b je 0x100c8e49 */
  if (C.zf) goto L_100c8e49;
  /* 100c8e3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c8e40 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c8e43 je 0x100c8cf3 */
  if (C.zf) goto L_100c8cf3;
L_100c8e49:;
  /* 100c8e49 call 0x100cbf71 */
  push32(0x100c8e4eu); f_100cbf71();
  /* 100c8e4e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 100c8e54 call 0x100cbf7a */
  push32(0x100c8e59u); f_100cbf7a();
  /* 100c8e59 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 100c8e5b jmp 0x100c8e2f */
  goto L_100c8e2f;
L_100c8e5d:;
  /* 100c8e5d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_100c8e60:;
  /* 100c8e60 pop edi */
  EDI = (pop32());
  /* 100c8e61 pop esi */
  ESI = (pop32());
  /* 100c8e62 pop ebx */
  EBX = (pop32());
  /* 100c8e63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c8e64 ret  */
  ESPCHK(0x100c8cdau, _esp0);
  ESP += 4; return;
}

/* FUN_10008e65 @ 0x100c8e65 (68 bytes, 19 insns) */
void f_100c8e65(void) {
  FTRACE(0x100c8e65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8e65 inc dword ptr [0x100d67e8] */
  { uint32_t _r=(r32((uint32_t)(0x100d67e8)))+1; w32((uint32_t)(0x100d67e8), (_r)); fl_inc(_r,32); }
  /* 100c8e6b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100c8e70 call 0x100ca2af */
  push32(0x100c8e75u); f_100ca2af();
  /* 100c8e75 pop ecx */
  ECX = (pop32());
  /* 100c8e76 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c8e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c8e7c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 100c8e7f je 0x100c8e8e */
  if (C.zf) goto L_100c8e8e;
  /* 100c8e81 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 100c8e85 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 100c8e8c jmp 0x100c8e9f */
  goto L_100c8e9f;
L_100c8e8e:;
  /* 100c8e8e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 100c8e92 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 100c8e95 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 100c8e98 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_100c8e9f:;
  /* 100c8e9f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 100c8ea2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100c8ea6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 100c8ea8 ret  */
  ESPCHK(0x100c8e65u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ea9 @ 0x100c8ea9 (41 bytes, 13 insns) */
void f_100c8ea9(void) {
  FTRACE(0x100c8ea9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8ea9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c8ead cmp eax, dword ptr [0x100d7d80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x100d7d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8eb3 jb 0x100c8eb8 */
  if (C.cf) goto L_100c8eb8;
  /* 100c8eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c8eb7 ret  */
  ESPCHK(0x100c8ea9u, _esp0);
  ESP += 4; return;
L_100c8eb8:;
  /* 100c8eb8 mov ecx, eax */
  ECX = (EAX);
  /* 100c8eba and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100c8ebd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100c8ec0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100c8ec3 mov ecx, dword ptr [ecx*4 + 0x100d7c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100d7c80)));
  /* 100c8eca mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 100c8ece and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 100c8ed1 ret  */
  ESPCHK(0x100c8ea9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f8e @ 0x100c8f8e (47 bytes, 17 insns) */
void f_100c8f8e(void) {
  FTRACE(0x100c8f8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8f8e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c8f92 mov ecx, 0x100d0790 */
  ECX = (0x100d0790u);
  /* 100c8f97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8f99 jb 0x100c8fb2 */
  if (C.cf) goto L_100c8fb2;
  /* 100c8f9b cmp eax, 0x100d09f0 */
  { uint32_t _a=(EAX),_b=(0x100d09f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8fa0 ja 0x100c8fb2 */
  if ((!C.cf&&!C.zf)) goto L_100c8fb2;
  /* 100c8fa2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c8fa4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100c8fa7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8faa push eax */
  push32((uint32_t)(EAX));
  /* 100c8fab call 0x100ca013 */
  push32(0x100c8fb0u); f_100ca013();
  /* 100c8fb0 pop ecx */
  ECX = (pop32());
  /* 100c8fb1 ret  */
  ESPCHK(0x100c8f8eu, _esp0);
  ESP += 4; return;
L_100c8fb2:;
  /* 100c8fb2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8fb5 push eax */
  push32((uint32_t)(EAX));
  /* 100c8fb6 call dword ptr [0x100ce00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce00c))), 0x100c8fbcu);
  /* 100c8fbc ret  */
  ESPCHK(0x100c8f8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fbd @ 0x100c8fbd (35 bytes, 13 insns) */
void f_100c8fbd(void) {
  FTRACE(0x100c8fbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8fbd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c8fc1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8fc4 jge 0x100c8fd1 */
  if ((C.sf==C.of)) goto L_100c8fd1;
  /* 100c8fc6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8fc9 push eax */
  push32((uint32_t)(EAX));
  /* 100c8fca call 0x100ca013 */
  push32(0x100c8fcfu); f_100ca013();
  /* 100c8fcf pop ecx */
  ECX = (pop32());
  /* 100c8fd0 ret  */
  ESPCHK(0x100c8fbdu, _esp0);
  ESP += 4; return;
L_100c8fd1:;
  /* 100c8fd1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c8fd5 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8fd8 push eax */
  push32((uint32_t)(EAX));
  /* 100c8fd9 call dword ptr [0x100ce00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce00c))), 0x100c8fdfu);
  /* 100c8fdf ret  */
  ESPCHK(0x100c8fbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fe0 @ 0x100c8fe0 (47 bytes, 17 insns) */
void f_100c8fe0(void) {
  FTRACE(0x100c8fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c8fe0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c8fe4 mov ecx, 0x100d0790 */
  ECX = (0x100d0790u);
  /* 100c8fe9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8feb jb 0x100c9004 */
  if (C.cf) goto L_100c9004;
  /* 100c8fed cmp eax, 0x100d09f0 */
  { uint32_t _a=(EAX),_b=(0x100d09f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c8ff2 ja 0x100c9004 */
  if ((!C.cf&&!C.zf)) goto L_100c9004;
  /* 100c8ff4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c8ff6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100c8ff9 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c8ffc push eax */
  push32((uint32_t)(EAX));
  /* 100c8ffd call 0x100ca074 */
  push32(0x100c9002u); f_100ca074();
  /* 100c9002 pop ecx */
  ECX = (pop32());
  /* 100c9003 ret  */
  ESPCHK(0x100c8fe0u, _esp0);
  ESP += 4; return;
L_100c9004:;
  /* 100c9004 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9007 push eax */
  push32((uint32_t)(EAX));
  /* 100c9008 call dword ptr [0x100ce008] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce008))), 0x100c900eu);
  /* 100c900e ret  */
  ESPCHK(0x100c8fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000900f @ 0x100c900f (35 bytes, 13 insns) */
void f_100c900f(void) {
  FTRACE(0x100c900fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c900f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c9013 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9016 jge 0x100c9023 */
  if ((C.sf==C.of)) goto L_100c9023;
  /* 100c9018 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c901b push eax */
  push32((uint32_t)(EAX));
  /* 100c901c call 0x100ca074 */
  push32(0x100c9021u); f_100ca074();
  /* 100c9021 pop ecx */
  ECX = (pop32());
  /* 100c9022 ret  */
  ESPCHK(0x100c900fu, _esp0);
  ESP += 4; return;
L_100c9023:;
  /* 100c9023 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c9027 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c902a push eax */
  push32((uint32_t)(EAX));
  /* 100c902b call dword ptr [0x100ce008] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce008))), 0x100c9031u);
  /* 100c9031 ret  */
  ESPCHK(0x100c900fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x100c9040 (123 bytes, 44 insns) */
void f_100c9040(void) {
  FTRACE(0x100c9040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9040 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c9044 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100c904a je 0x100c9060 */
  if (C.zf) goto L_100c9060;
L_100c904c:;
  /* 100c904c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100c904e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100c904f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c9051 je 0x100c9093 */
  if (C.zf) goto L_100c9093;
  /* 100c9053 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100c9059 jne 0x100c904c */
  if (!C.zf) goto L_100c904c;
  /* 100c905b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100c9060:;
  /* 100c9060 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 100c9062 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100c9067 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9069 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100c906c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100c906e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9071 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100c9076 je 0x100c9060 */
  if (C.zf) goto L_100c9060;
  /* 100c9078 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 100c907b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c907d je 0x100c90b1 */
  if (C.zf) goto L_100c90b1;
  /* 100c907f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100c9081 je 0x100c90a7 */
  if (C.zf) goto L_100c90a7;
  /* 100c9083 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 100c9088 je 0x100c909d */
  if (C.zf) goto L_100c909d;
  /* 100c908a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 100c908f je 0x100c9093 */
  if (C.zf) goto L_100c9093;
  /* 100c9091 jmp 0x100c9060 */
  goto L_100c9060;
L_100c9093:;
  /* 100c9093 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 100c9096 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c909a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c909c ret  */
  ESPCHK(0x100c9040u, _esp0);
  ESP += 4; return;
L_100c909d:;
  /* 100c909d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 100c90a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c90a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c90a6 ret  */
  ESPCHK(0x100c9040u, _esp0);
  ESP += 4; return;
L_100c90a7:;
  /* 100c90a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 100c90aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c90ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c90b0 ret  */
  ESPCHK(0x100c9040u, _esp0);
  ESP += 4; return;
L_100c90b1:;
  /* 100c90b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 100c90b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c90b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c90ba ret  */
  ESPCHK(0x100c9040u, _esp0);
  ESP += 4; return;
}

/* FUN_100090bb @ 0x100c90bb (89 bytes, 39 insns) */
void f_100c90bb(void) {
  FTRACE(0x100c90bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c90bb push ebp */
  push32((uint32_t)(EBP));
  /* 100c90bc mov ebp, esp */
  EBP = (ESP);
  /* 100c90be push ebx */
  push32((uint32_t)(EBX));
  /* 100c90bf push esi */
  push32((uint32_t)(ESI));
  /* 100c90c0 mov esi, 0x100d69f4 */
  ESI = (0x100d69f4u);
  /* 100c90c5 push edi */
  push32((uint32_t)(EDI));
  /* 100c90c6 push esi */
  push32((uint32_t)(ESI));
  /* 100c90c7 call dword ptr [0x100ce090] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce090))), 0x100c90cdu);
  /* 100c90cd mov edi, dword ptr [0x100ce08c] */
  EDI = (r32((uint32_t)(0x100ce08c)));
  /* 100c90d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100c90d5 cmp dword ptr [0x100d69f0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100d69f0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c90db je 0x100c90eb */
  if (C.zf) goto L_100c90eb;
  /* 100c90dd push esi */
  push32((uint32_t)(ESI));
  /* 100c90de call edi */
  call_ind((uint32_t)(EDI), 0x100c90e0u);
  /* 100c90e0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100c90e2 call 0x100ca013 */
  push32(0x100c90e7u); f_100ca013();
  /* 100c90e7 pop ecx */
  ECX = (pop32());
  /* 100c90e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c90ea pop ebx */
  EBX = (pop32());
L_100c90eb:;
  /* 100c90eb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c90ee push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c90f1 call 0x100c9114 */
  push32(0x100c90f6u); f_100c9114();
  /* 100c90f6 pop ecx */
  ECX = (pop32());
  /* 100c90f7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100c90fa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100c90fc pop ecx */
  ECX = (pop32());
  /* 100c90fd je 0x100c9109 */
  if (C.zf) goto L_100c9109;
  /* 100c90ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100c9101 call 0x100ca074 */
  push32(0x100c9106u); f_100ca074();
  /* 100c9106 pop ecx */
  ECX = (pop32());
  /* 100c9107 jmp 0x100c910c */
  goto L_100c910c;
L_100c9109:;
  /* 100c9109 push esi */
  push32((uint32_t)(ESI));
  /* 100c910a call edi */
  call_ind((uint32_t)(EDI), 0x100c910cu);
L_100c910c:;
  /* 100c910c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c910f pop edi */
  EDI = (pop32());
  /* 100c9110 pop esi */
  ESI = (pop32());
  /* 100c9111 pop ebx */
  EBX = (pop32());
  /* 100c9112 pop ebp */
  EBP = (pop32());
  /* 100c9113 ret  */
  ESPCHK(0x100c90bbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009114 @ 0x100c9114 (105 bytes, 38 insns) */
void f_100c9114(void) {
  FTRACE(0x100c9114u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9114 push ebp */
  push32((uint32_t)(EBP));
  /* 100c9115 mov ebp, esp */
  EBP = (ESP);
  /* 100c9117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c911a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c911c jne 0x100c9120 */
  if (!C.zf) goto L_100c9120;
  /* 100c911e pop ebp */
  EBP = (pop32());
  /* 100c911f ret  */
  ESPCHK(0x100c9114u, _esp0);
  ESP += 4; return;
L_100c9120:;
  /* 100c9120 cmp dword ptr [0x100d6878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100d6878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9127 jne 0x100c913b */
  if (!C.zf) goto L_100c913b;
  /* 100c9129 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 100c912d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100c9132 ja 0x100c916d */
  if ((!C.cf&&!C.zf)) goto L_100c916d;
  /* 100c9134 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c9136 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100c9138 pop eax */
  EAX = (pop32());
  /* 100c9139 pop ebp */
  EBP = (pop32());
  /* 100c913a ret  */
  ESPCHK(0x100c9114u, _esp0);
  ESP += 4; return;
L_100c913b:;
  /* 100c913b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 100c913e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 100c9142 push ecx */
  push32((uint32_t)(ECX));
  /* 100c9143 push 0 */
  push32((uint32_t)(0x0u));
  /* 100c9145 push dword ptr [0x100d0c20] */
  push32((uint32_t)(r32((uint32_t)(0x100d0c20))));
  /* 100c914b push eax */
  push32((uint32_t)(EAX));
  /* 100c914c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 100c914f push 1 */
  push32((uint32_t)(0x1u));
  /* 100c9151 push eax */
  push32((uint32_t)(EAX));
  /* 100c9152 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 100c9157 push dword ptr [0x100d6888] */
  push32((uint32_t)(r32((uint32_t)(0x100d6888))));
  /* 100c915d call dword ptr [0x100ce060] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce060))), 0x100c9163u);
  /* 100c9163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c9165 je 0x100c916d */
  if (C.zf) goto L_100c916d;
  /* 100c9167 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c916b je 0x100c917b */
  if (C.zf) goto L_100c917b;
L_100c916d:;
  /* 100c916d call 0x100cbf71 */
  push32(0x100c9172u); f_100cbf71();
  /* 100c9172 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 100c9178 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100c917b:;
  /* 100c917b pop ebp */
  EBP = (pop32());
  /* 100c917c ret  */
  ESPCHK(0x100c9114u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x100c9180 (104 bytes, 43 insns) */
void f_100c9180(void) {
  FTRACE(0x100c9180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9180 push ebx */
  push32((uint32_t)(EBX));
  /* 100c9181 push esi */
  push32((uint32_t)(ESI));
  /* 100c9182 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 100c9186 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c9188 jne 0x100c91a2 */
  if (!C.zf) goto L_100c91a2;
  /* 100c918a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 100c918e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100c9192 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100c9194 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c9196 mov ebx, eax */
  EBX = (EAX);
  /* 100c9198 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100c919c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c919e mov edx, ebx */
  EDX = (EBX);
  /* 100c91a0 jmp 0x100c91e3 */
  goto L_100c91e3;
L_100c91a2:;
  /* 100c91a2 mov ecx, eax */
  ECX = (EAX);
  /* 100c91a4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100c91a8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 100c91ac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_100c91b0:;
  /* 100c91b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100c91b2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 100c91b4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100c91b6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 100c91b8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100c91ba jne 0x100c91b0 */
  if (!C.zf) goto L_100c91b0;
  /* 100c91bc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c91be mov esi, eax */
  ESI = (EAX);
  /* 100c91c0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100c91c4 mov ecx, eax */
  ECX = (EAX);
  /* 100c91c6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100c91ca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100c91cc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c91ce jb 0x100c91de */
  if (C.cf) goto L_100c91de;
  /* 100c91d0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c91d4 ja 0x100c91de */
  if ((!C.cf&&!C.zf)) goto L_100c91de;
  /* 100c91d6 jb 0x100c91df */
  if (C.cf) goto L_100c91df;
  /* 100c91d8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c91dc jbe 0x100c91df */
  if ((C.cf||C.zf)) goto L_100c91df;
L_100c91de:;
  /* 100c91de dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_100c91df:;
  /* 100c91df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100c91e1 mov eax, esi */
  EAX = (ESI);
L_100c91e3:;
  /* 100c91e3 pop esi */
  ESI = (pop32());
  /* 100c91e4 pop ebx */
  EBX = (pop32());
  /* 100c91e5 ret 0x10 */
  ESPCHK(0x100c9180u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x100c91f0 (117 bytes, 44 insns) */
void f_100c91f0(void) {
  FTRACE(0x100c91f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c91f0 push ebx */
  push32((uint32_t)(EBX));
  /* 100c91f1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100c91f5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c91f7 jne 0x100c9211 */
  if (!C.zf) goto L_100c9211;
  /* 100c91f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 100c91fd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100c9201 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100c9203 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c9205 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c9209 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c920b mov eax, edx */
  EAX = (EDX);
  /* 100c920d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100c920f jmp 0x100c9261 */
  goto L_100c9261;
L_100c9211:;
  /* 100c9211 mov ecx, eax */
  ECX = (EAX);
  /* 100c9213 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 100c9217 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 100c921b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_100c921f:;
  /* 100c921f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100c9221 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 100c9223 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100c9225 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 100c9227 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100c9229 jne 0x100c921f */
  if (!C.zf) goto L_100c921f;
  /* 100c922b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c922d mov ecx, eax */
  ECX = (EAX);
  /* 100c922f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100c9233 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 100c9234 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100c9238 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c923a jb 0x100c924a */
  if (C.cf) goto L_100c924a;
  /* 100c923c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9240 ja 0x100c924a */
  if ((!C.cf&&!C.zf)) goto L_100c924a;
  /* 100c9242 jb 0x100c9252 */
  if (C.cf) goto L_100c9252;
  /* 100c9244 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9248 jbe 0x100c9252 */
  if ((C.cf||C.zf)) goto L_100c9252;
L_100c924a:;
  /* 100c924a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c924e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_100c9252:;
  /* 100c9252 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9256 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c925a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 100c925c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100c925e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_100c9261:;
  /* 100c9261 pop ebx */
  EBX = (pop32());
  /* 100c9262 ret 0x10 */
  ESPCHK(0x100c91f0u, _esp0);
  ESP += 20; return;
}

