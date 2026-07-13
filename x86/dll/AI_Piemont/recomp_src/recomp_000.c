#include "recomp.h"

/* ProcessAI @ 0x100e1000 (16 bytes, 3 insns) */
void f_100e1000(void) {
  FTRACE(0x100e1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e1000 call dword ptr [0x100f64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e0))), 0x100e1006u);
  /* 100e1006 mov dword ptr [0x100f6294], eax */
  w32((uint32_t)(0x100f6294), (EAX));
  /* 100e100b jmp 0x100e6d40 */
  f_100e6d40(); return;
}

/* InitAI @ 0x100e1010 (5595 bytes, 1470 insns) */
void f_100e1010(void) {
  FTRACE(0x100e1010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e1010 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1015 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e1018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e101a je 0x100e1078 */
  if (C.zf) goto L_100e1078;
  /* 100e101c push 0x100efed8 */
  push32((uint32_t)(0x100efed8u));
  /* 100e1021 push 0x100f6068 */
  push32((uint32_t)(0x100f6068u));
  /* 100e1026 call eax */
  call_ind((uint32_t)(EAX), 0x100e1028u);
  /* 100e1028 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e102d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1032 je 0x100e1078 */
  if (C.zf) goto L_100e1078;
  /* 100e1034 push 0x100efed0 */
  push32((uint32_t)(0x100efed0u));
  /* 100e1039 push 0x100f6008 */
  push32((uint32_t)(0x100f6008u));
  /* 100e103e call eax */
  call_ind((uint32_t)(EAX), 0x100e1040u);
  /* 100e1040 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e104a je 0x100e1078 */
  if (C.zf) goto L_100e1078;
  /* 100e104c push 0x100efec8 */
  push32((uint32_t)(0x100efec8u));
  /* 100e1051 push 0x100f6060 */
  push32((uint32_t)(0x100f6060u));
  /* 100e1056 call eax */
  call_ind((uint32_t)(EAX), 0x100e1058u);
  /* 100e1058 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1062 je 0x100e1078 */
  if (C.zf) goto L_100e1078;
  /* 100e1064 push 0x100efec0 */
  push32((uint32_t)(0x100efec0u));
  /* 100e1069 push 0x100f6070 */
  push32((uint32_t)(0x100f6070u));
  /* 100e106e call eax */
  call_ind((uint32_t)(EAX), 0x100e1070u);
  /* 100e1070 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e1078:;
  /* 100e1078 mov ecx, dword ptr [0x100f63d8] */
  ECX = (r32((uint32_t)(0x100f63d8)));
  /* 100e107e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100e1080 je 0x100e1096 */
  if (C.zf) goto L_100e1096;
  /* 100e1082 push 0x100efeb4 */
  push32((uint32_t)(0x100efeb4u));
  /* 100e1087 push 0x100f3670 */
  push32((uint32_t)(0x100f3670u));
  /* 100e108c call ecx */
  call_ind((uint32_t)(ECX), 0x100e108eu);
  /* 100e108e mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e1096:;
  /* 100e1096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1098 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e109e push 0x100efea0 */
  push32((uint32_t)(0x100efea0u));
  /* 100e10a3 push 0x100f38e0 */
  push32((uint32_t)(0x100f38e0u));
  /* 100e10a8 call eax */
  call_ind((uint32_t)(EAX), 0x100e10aau);
  /* 100e10aa mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e10af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e10b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e10b4 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e10ba push 0x100efe8c */
  push32((uint32_t)(0x100efe8cu));
  /* 100e10bf push 0x100f38d8 */
  push32((uint32_t)(0x100f38d8u));
  /* 100e10c4 call eax */
  call_ind((uint32_t)(EAX), 0x100e10c6u);
  /* 100e10c6 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e10cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e10ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e10d0 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e10d6 push 0x100efe78 */
  push32((uint32_t)(0x100efe78u));
  /* 100e10db push 0x100f38d0 */
  push32((uint32_t)(0x100f38d0u));
  /* 100e10e0 call eax */
  call_ind((uint32_t)(EAX), 0x100e10e2u);
  /* 100e10e2 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e10e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e10ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e10ec je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e10f2 push 0x100efe64 */
  push32((uint32_t)(0x100efe64u));
  /* 100e10f7 push 0x100f3918 */
  push32((uint32_t)(0x100f3918u));
  /* 100e10fc call eax */
  call_ind((uint32_t)(EAX), 0x100e10feu);
  /* 100e10fe mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1108 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e110e push 0x100efe50 */
  push32((uint32_t)(0x100efe50u));
  /* 100e1113 push 0x100f3908 */
  push32((uint32_t)(0x100f3908u));
  /* 100e1118 call eax */
  call_ind((uint32_t)(EAX), 0x100e111au);
  /* 100e111a mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e111f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1124 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e112a push 0x100efe3c */
  push32((uint32_t)(0x100efe3cu));
  /* 100e112f push 0x100f3900 */
  push32((uint32_t)(0x100f3900u));
  /* 100e1134 call eax */
  call_ind((uint32_t)(EAX), 0x100e1136u);
  /* 100e1136 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e113b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1140 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e1146 push 0x100efe28 */
  push32((uint32_t)(0x100efe28u));
  /* 100e114b push 0x100f36b8 */
  push32((uint32_t)(0x100f36b8u));
  /* 100e1150 call eax */
  call_ind((uint32_t)(EAX), 0x100e1152u);
  /* 100e1152 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e115a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e115c je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e1162 push 0x100efe14 */
  push32((uint32_t)(0x100efe14u));
  /* 100e1167 push 0x100f36a8 */
  push32((uint32_t)(0x100f36a8u));
  /* 100e116c call eax */
  call_ind((uint32_t)(EAX), 0x100e116eu);
  /* 100e116e mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1178 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e117e push 0x100efe00 */
  push32((uint32_t)(0x100efe00u));
  /* 100e1183 push 0x100f38a0 */
  push32((uint32_t)(0x100f38a0u));
  /* 100e1188 call eax */
  call_ind((uint32_t)(EAX), 0x100e118au);
  /* 100e118a mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1194 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e119a push 0x100efdec */
  push32((uint32_t)(0x100efdecu));
  /* 100e119f push 0x100f3898 */
  push32((uint32_t)(0x100f3898u));
  /* 100e11a4 call eax */
  call_ind((uint32_t)(EAX), 0x100e11a6u);
  /* 100e11a6 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e11ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e11ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e11b0 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e11b6 push 0x100efdd8 */
  push32((uint32_t)(0x100efdd8u));
  /* 100e11bb push 0x100f3890 */
  push32((uint32_t)(0x100f3890u));
  /* 100e11c0 call eax */
  call_ind((uint32_t)(EAX), 0x100e11c2u);
  /* 100e11c2 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e11c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e11ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e11cc je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e11d2 push 0x100efdc4 */
  push32((uint32_t)(0x100efdc4u));
  /* 100e11d7 push 0x100f3888 */
  push32((uint32_t)(0x100f3888u));
  /* 100e11dc call eax */
  call_ind((uint32_t)(EAX), 0x100e11deu);
  /* 100e11de mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e11e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e11e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e11e8 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e11ee push 0x100efea0 */
  push32((uint32_t)(0x100efea0u));
  /* 100e11f3 push 0x100f38e0 */
  push32((uint32_t)(0x100f38e0u));
  /* 100e11f8 call eax */
  call_ind((uint32_t)(EAX), 0x100e11fau);
  /* 100e11fa mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e11ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1204 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e120a push 0x100efe8c */
  push32((uint32_t)(0x100efe8cu));
  /* 100e120f push 0x100f38d8 */
  push32((uint32_t)(0x100f38d8u));
  /* 100e1214 call eax */
  call_ind((uint32_t)(EAX), 0x100e1216u);
  /* 100e1216 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e121b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e121e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1220 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e1226 push 0x100efe78 */
  push32((uint32_t)(0x100efe78u));
  /* 100e122b push 0x100f38d0 */
  push32((uint32_t)(0x100f38d0u));
  /* 100e1230 call eax */
  call_ind((uint32_t)(EAX), 0x100e1232u);
  /* 100e1232 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e123c je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e1242 push 0x100efe64 */
  push32((uint32_t)(0x100efe64u));
  /* 100e1247 push 0x100f3918 */
  push32((uint32_t)(0x100f3918u));
  /* 100e124c call eax */
  call_ind((uint32_t)(EAX), 0x100e124eu);
  /* 100e124e mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1258 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e125e push 0x100efe50 */
  push32((uint32_t)(0x100efe50u));
  /* 100e1263 push 0x100f3908 */
  push32((uint32_t)(0x100f3908u));
  /* 100e1268 call eax */
  call_ind((uint32_t)(EAX), 0x100e126au);
  /* 100e126a mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1274 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e127a push 0x100efe3c */
  push32((uint32_t)(0x100efe3cu));
  /* 100e127f push 0x100f3900 */
  push32((uint32_t)(0x100f3900u));
  /* 100e1284 call eax */
  call_ind((uint32_t)(EAX), 0x100e1286u);
  /* 100e1286 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e128e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1290 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e1296 push 0x100efe28 */
  push32((uint32_t)(0x100efe28u));
  /* 100e129b push 0x100f36b8 */
  push32((uint32_t)(0x100f36b8u));
  /* 100e12a0 call eax */
  call_ind((uint32_t)(EAX), 0x100e12a2u);
  /* 100e12a2 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e12a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e12aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e12ac je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e12ae push 0x100efe14 */
  push32((uint32_t)(0x100efe14u));
  /* 100e12b3 push 0x100f36a8 */
  push32((uint32_t)(0x100f36a8u));
  /* 100e12b8 call eax */
  call_ind((uint32_t)(EAX), 0x100e12bau);
  /* 100e12ba mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e12bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e12c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e12c4 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e12c6 push 0x100efe00 */
  push32((uint32_t)(0x100efe00u));
  /* 100e12cb push 0x100f38a0 */
  push32((uint32_t)(0x100f38a0u));
  /* 100e12d0 call eax */
  call_ind((uint32_t)(EAX), 0x100e12d2u);
  /* 100e12d2 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e12d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e12da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e12dc je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e12de push 0x100efdec */
  push32((uint32_t)(0x100efdecu));
  /* 100e12e3 push 0x100f3898 */
  push32((uint32_t)(0x100f3898u));
  /* 100e12e8 call eax */
  call_ind((uint32_t)(EAX), 0x100e12eau);
  /* 100e12ea mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e12ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e12f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e12f4 je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e12f6 push 0x100efdd8 */
  push32((uint32_t)(0x100efdd8u));
  /* 100e12fb push 0x100f3890 */
  push32((uint32_t)(0x100f3890u));
  /* 100e1300 call eax */
  call_ind((uint32_t)(EAX), 0x100e1302u);
  /* 100e1302 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e130c je 0x100e1322 */
  if (C.zf) goto L_100e1322;
  /* 100e130e push 0x100efdc4 */
  push32((uint32_t)(0x100efdc4u));
  /* 100e1313 push 0x100f3888 */
  push32((uint32_t)(0x100f3888u));
  /* 100e1318 call eax */
  call_ind((uint32_t)(EAX), 0x100e131au);
  /* 100e131a mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e1322:;
  /* 100e1322 mov ecx, dword ptr [0x100f63d8] */
  ECX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100e132a je 0x100e1340 */
  if (C.zf) goto L_100e1340;
  /* 100e132c push 0x100efdb4 */
  push32((uint32_t)(0x100efdb4u));
  /* 100e1331 push 0x100f3660 */
  push32((uint32_t)(0x100f3660u));
  /* 100e1336 call ecx */
  call_ind((uint32_t)(ECX), 0x100e1338u);
  /* 100e1338 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e133d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e1340:;
  /* 100e1340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1342 je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e1348 push 0x100efda0 */
  push32((uint32_t)(0x100efda0u));
  /* 100e134d push 0x100f3638 */
  push32((uint32_t)(0x100f3638u));
  /* 100e1352 call eax */
  call_ind((uint32_t)(EAX), 0x100e1354u);
  /* 100e1354 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e135c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e135e je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e1364 push 0x100efd88 */
  push32((uint32_t)(0x100efd88u));
  /* 100e1369 push 0x100f3630 */
  push32((uint32_t)(0x100f3630u));
  /* 100e136e call eax */
  call_ind((uint32_t)(EAX), 0x100e1370u);
  /* 100e1370 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e137a je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e1380 push 0x100efd70 */
  push32((uint32_t)(0x100efd70u));
  /* 100e1385 push 0x100f3628 */
  push32((uint32_t)(0x100f3628u));
  /* 100e138a call eax */
  call_ind((uint32_t)(EAX), 0x100e138cu);
  /* 100e138c mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1396 je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e139c push 0x100efd58 */
  push32((uint32_t)(0x100efd58u));
  /* 100e13a1 push 0x100f62f8 */
  push32((uint32_t)(0x100f62f8u));
  /* 100e13a6 call eax */
  call_ind((uint32_t)(EAX), 0x100e13a8u);
  /* 100e13a8 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e13ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e13b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e13b2 je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e13b8 push 0x100efd40 */
  push32((uint32_t)(0x100efd40u));
  /* 100e13bd push 0x100f62f0 */
  push32((uint32_t)(0x100f62f0u));
  /* 100e13c2 call eax */
  call_ind((uint32_t)(EAX), 0x100e13c4u);
  /* 100e13c4 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e13c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e13cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e13ce je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e13d4 push 0x100efd28 */
  push32((uint32_t)(0x100efd28u));
  /* 100e13d9 push 0x100f62e8 */
  push32((uint32_t)(0x100f62e8u));
  /* 100e13de call eax */
  call_ind((uint32_t)(EAX), 0x100e13e0u);
  /* 100e13e0 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e13e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e13e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e13ea je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e13f0 push 0x100efd14 */
  push32((uint32_t)(0x100efd14u));
  /* 100e13f5 push 0x100f6370 */
  push32((uint32_t)(0x100f6370u));
  /* 100e13fa call eax */
  call_ind((uint32_t)(EAX), 0x100e13fcu);
  /* 100e13fc mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1406 je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e140c push 0x100efcfc */
  push32((uint32_t)(0x100efcfcu));
  /* 100e1411 push 0x100f6368 */
  push32((uint32_t)(0x100f6368u));
  /* 100e1416 call eax */
  call_ind((uint32_t)(EAX), 0x100e1418u);
  /* 100e1418 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e141d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1422 je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e1428 push 0x100efce4 */
  push32((uint32_t)(0x100efce4u));
  /* 100e142d push 0x100f63b8 */
  push32((uint32_t)(0x100f63b8u));
  /* 100e1432 call eax */
  call_ind((uint32_t)(EAX), 0x100e1434u);
  /* 100e1434 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e143c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e143e je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e1444 push 0x100efccc */
  push32((uint32_t)(0x100efcccu));
  /* 100e1449 push 0x100f63b0 */
  push32((uint32_t)(0x100f63b0u));
  /* 100e144e call eax */
  call_ind((uint32_t)(EAX), 0x100e1450u);
  /* 100e1450 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e145a je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e1460 push 0x100efcb4 */
  push32((uint32_t)(0x100efcb4u));
  /* 100e1465 push 0x100f63a8 */
  push32((uint32_t)(0x100f63a8u));
  /* 100e146a call eax */
  call_ind((uint32_t)(EAX), 0x100e146cu);
  /* 100e146c mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1476 je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e147c push 0x100efc9c */
  push32((uint32_t)(0x100efc9cu));
  /* 100e1481 push 0x100f63a0 */
  push32((uint32_t)(0x100f63a0u));
  /* 100e1486 call eax */
  call_ind((uint32_t)(EAX), 0x100e1488u);
  /* 100e1488 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e148d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1492 je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e1498 push 0x100efda0 */
  push32((uint32_t)(0x100efda0u));
  /* 100e149d push 0x100f3638 */
  push32((uint32_t)(0x100f3638u));
  /* 100e14a2 call eax */
  call_ind((uint32_t)(EAX), 0x100e14a4u);
  /* 100e14a4 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e14a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e14ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e14ae je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e14b4 push 0x100efd88 */
  push32((uint32_t)(0x100efd88u));
  /* 100e14b9 push 0x100f3630 */
  push32((uint32_t)(0x100f3630u));
  /* 100e14be call eax */
  call_ind((uint32_t)(EAX), 0x100e14c0u);
  /* 100e14c0 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e14c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e14c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e14ca je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e14d0 push 0x100efd70 */
  push32((uint32_t)(0x100efd70u));
  /* 100e14d5 push 0x100f3628 */
  push32((uint32_t)(0x100f3628u));
  /* 100e14da call eax */
  call_ind((uint32_t)(EAX), 0x100e14dcu);
  /* 100e14dc mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e14e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e14e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e14e6 je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e14ec push 0x100efd58 */
  push32((uint32_t)(0x100efd58u));
  /* 100e14f1 push 0x100f62f8 */
  push32((uint32_t)(0x100f62f8u));
  /* 100e14f6 call eax */
  call_ind((uint32_t)(EAX), 0x100e14f8u);
  /* 100e14f8 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e14fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1502 je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e1508 push 0x100efd40 */
  push32((uint32_t)(0x100efd40u));
  /* 100e150d push 0x100f62f0 */
  push32((uint32_t)(0x100f62f0u));
  /* 100e1512 call eax */
  call_ind((uint32_t)(EAX), 0x100e1514u);
  /* 100e1514 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e151e je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e1524 push 0x100efd28 */
  push32((uint32_t)(0x100efd28u));
  /* 100e1529 push 0x100f62e8 */
  push32((uint32_t)(0x100f62e8u));
  /* 100e152e call eax */
  call_ind((uint32_t)(EAX), 0x100e1530u);
  /* 100e1530 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e153a je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e1540 push 0x100efd14 */
  push32((uint32_t)(0x100efd14u));
  /* 100e1545 push 0x100f6370 */
  push32((uint32_t)(0x100f6370u));
  /* 100e154a call eax */
  call_ind((uint32_t)(EAX), 0x100e154cu);
  /* 100e154c mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1556 je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e1558 push 0x100efcfc */
  push32((uint32_t)(0x100efcfcu));
  /* 100e155d push 0x100f6368 */
  push32((uint32_t)(0x100f6368u));
  /* 100e1562 call eax */
  call_ind((uint32_t)(EAX), 0x100e1564u);
  /* 100e1564 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e156c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e156e je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e1570 push 0x100efce4 */
  push32((uint32_t)(0x100efce4u));
  /* 100e1575 push 0x100f63b8 */
  push32((uint32_t)(0x100f63b8u));
  /* 100e157a call eax */
  call_ind((uint32_t)(EAX), 0x100e157cu);
  /* 100e157c mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1586 je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e1588 push 0x100efccc */
  push32((uint32_t)(0x100efcccu));
  /* 100e158d push 0x100f63b0 */
  push32((uint32_t)(0x100f63b0u));
  /* 100e1592 call eax */
  call_ind((uint32_t)(EAX), 0x100e1594u);
  /* 100e1594 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e159e je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e15a0 push 0x100efcb4 */
  push32((uint32_t)(0x100efcb4u));
  /* 100e15a5 push 0x100f63a8 */
  push32((uint32_t)(0x100f63a8u));
  /* 100e15aa call eax */
  call_ind((uint32_t)(EAX), 0x100e15acu);
  /* 100e15ac mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e15b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e15b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e15b6 je 0x100e15c7 */
  if (C.zf) goto L_100e15c7;
  /* 100e15b8 push 0x100efc9c */
  push32((uint32_t)(0x100efc9cu));
  /* 100e15bd push 0x100f63a0 */
  push32((uint32_t)(0x100f63a0u));
  /* 100e15c2 call eax */
  call_ind((uint32_t)(EAX), 0x100e15c4u);
  /* 100e15c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e15c7:;
  /* 100e15c7 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e15cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e15ce je 0x100e15df */
  if (C.zf) goto L_100e15df;
  /* 100e15d0 push 0x100efc88 */
  push32((uint32_t)(0x100efc88u));
  /* 100e15d5 push 0x100f5fc0 */
  push32((uint32_t)(0x100f5fc0u));
  /* 100e15da call eax */
  call_ind((uint32_t)(EAX), 0x100e15dcu);
  /* 100e15dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e15df:;
  /* 100e15df call dword ptr [0x100f64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e0))), 0x100e15e5u);
  /* 100e15e5 mov dword ptr [0x100f6294], eax */
  w32((uint32_t)(0x100f6294), (EAX));
  /* 100e15ea call 0x100e26c0 */
  push32(0x100e15efu); f_100e26c0();
  /* 100e15ef mov ecx, eax */
  ECX = (EAX);
  /* 100e15f1 mov eax, dword ptr [0x100f6294] */
  EAX = (r32((uint32_t)(0x100f6294)));
  /* 100e15f6 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 100e15fc mov dword ptr [eax*4 + 0x100f5f78], ecx */
  w32((uint32_t)(EAX*4 + 0x100f5f78), (ECX));
  /* 100e1603 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 100e1606 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 100e1609 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 100e160c lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 100e160f shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100e1612 mov dword ptr [eax + 0x100f3ad0], 0 */
  w32((uint32_t)(EAX + 0x100f3ad0), (0x0u));
  /* 100e161c mov dword ptr [eax + 0x100f3c64], 0 */
  w32((uint32_t)(EAX + 0x100f3c64), (0x0u));
  /* 100e1626 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e162b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e162d je 0x100e163e */
  if (C.zf) goto L_100e163e;
  /* 100e162f push 0x100efc6c */
  push32((uint32_t)(0x100efc6cu));
  /* 100e1634 push 0x100f60b0 */
  push32((uint32_t)(0x100f60b0u));
  /* 100e1639 call eax */
  call_ind((uint32_t)(EAX), 0x100e163bu);
  /* 100e163b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e163e:;
  /* 100e163e mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1645 je 0x100e1656 */
  if (C.zf) goto L_100e1656;
  /* 100e1647 push 0x100efc58 */
  push32((uint32_t)(0x100efc58u));
  /* 100e164c push 0x100f3868 */
  push32((uint32_t)(0x100f3868u));
  /* 100e1651 call eax */
  call_ind((uint32_t)(EAX), 0x100e1653u);
  /* 100e1653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e1656:;
  /* 100e1656 push ebp */
  push32((uint32_t)(EBP));
  /* 100e1657 push esi */
  push32((uint32_t)(ESI));
  /* 100e1658 push edi */
  push32((uint32_t)(EDI));
  /* 100e1659 call 0x100e26c0 */
  push32(0x100e165eu); f_100e26c0();
  /* 100e165e mov edx, eax */
  EDX = (EAX);
  /* 100e1660 and eax, 6 */
  { uint32_t _r=(EAX)&(0x6u); EAX = (_r); fl_logic(_r,32); }
  /* 100e1663 cmp al, 2 */
  { uint32_t _a=(AL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e1665 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 100e1669 mov edi, 0x100efeb4 */
  EDI = (0x100efeb4u);
  /* 100e166e je 0x100e1675 */
  if (C.zf) goto L_100e1675;
  /* 100e1670 mov edi, 0x100efc48 */
  EDI = (0x100efc48u);
L_100e1675:;
  /* 100e1675 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100e1678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e167a repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 100e167c not ecx */
  ECX = (~(ECX));
  /* 100e167e sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e1680 and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 100e1683 mov eax, ecx */
  EAX = (ECX);
  /* 100e1685 mov esi, edi */
  ESI = (EDI);
  /* 100e1687 mov edi, ebp */
  EDI = (EBP);
  /* 100e1689 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100e168c rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100e168e mov ecx, eax */
  ECX = (EAX);
  /* 100e1690 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100e1693 cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e1696 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 100e1698 lea edx, [esp + 0x3c] */
  EDX = ((uint32_t)(ESP + 0x3c));
  /* 100e169c mov edi, 0x100efc38 */
  EDI = (0x100efc38u);
  /* 100e16a1 je 0x100e16a8 */
  if (C.zf) goto L_100e16a8;
  /* 100e16a3 mov edi, 0x100efc28 */
  EDI = (0x100efc28u);
L_100e16a8:;
  /* 100e16a8 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100e16ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e16ad repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 100e16af not ecx */
  ECX = (~(ECX));
  /* 100e16b1 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e16b3 mov eax, ecx */
  EAX = (ECX);
  /* 100e16b5 mov esi, edi */
  ESI = (EDI);
  /* 100e16b7 mov edi, edx */
  EDI = (EDX);
  /* 100e16b9 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100e16bc rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100e16be mov ecx, eax */
  ECX = (EAX);
  /* 100e16c0 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e16c5 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100e16c8 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 100e16ca pop edi */
  EDI = (pop32());
  /* 100e16cb pop esi */
  ESI = (pop32());
  /* 100e16cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e16ce pop ebp */
  EBP = (pop32());
  /* 100e16cf je 0x100e1715 */
  if (C.zf) goto L_100e1715;
  /* 100e16d1 push 0x100efc10 */
  push32((uint32_t)(0x100efc10u));
  /* 100e16d6 push 0x100f6258 */
  push32((uint32_t)(0x100f6258u));
  /* 100e16db call eax */
  call_ind((uint32_t)(EAX), 0x100e16ddu);
  /* 100e16dd mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e16e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e16e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e16e7 je 0x100e1715 */
  if (C.zf) goto L_100e1715;
  /* 100e16e9 push 0x100efbf8 */
  push32((uint32_t)(0x100efbf8u));
  /* 100e16ee push 0x100f6308 */
  push32((uint32_t)(0x100f6308u));
  /* 100e16f3 call eax */
  call_ind((uint32_t)(EAX), 0x100e16f5u);
  /* 100e16f5 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e16fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e16fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e16ff je 0x100e1715 */
  if (C.zf) goto L_100e1715;
  /* 100e1701 push 0x100efbe4 */
  push32((uint32_t)(0x100efbe4u));
  /* 100e1706 push 0x100f36e0 */
  push32((uint32_t)(0x100f36e0u));
  /* 100e170b call eax */
  call_ind((uint32_t)(EAX), 0x100e170du);
  /* 100e170d mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e1715:;
  /* 100e1715 mov ecx, dword ptr [0x100f63dc] */
  ECX = (r32((uint32_t)(0x100f63dc)));
  /* 100e171b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100e171d je 0x100e174b */
  if (C.zf) goto L_100e174b;
  /* 100e171f push 0x100efbcc */
  push32((uint32_t)(0x100efbccu));
  /* 100e1724 push 0x100f6240 */
  push32((uint32_t)(0x100f6240u));
  /* 100e1729 call ecx */
  call_ind((uint32_t)(ECX), 0x100e172bu);
  /* 100e172b mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1730 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1733 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1735 je 0x100e1746 */
  if (C.zf) goto L_100e1746;
  /* 100e1737 push 0x100efbb4 */
  push32((uint32_t)(0x100efbb4u));
  /* 100e173c push 0x100f5fa8 */
  push32((uint32_t)(0x100f5fa8u));
  /* 100e1741 call eax */
  call_ind((uint32_t)(EAX), 0x100e1743u);
  /* 100e1743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e1746:;
  /* 100e1746 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
L_100e174b:;
  /* 100e174b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e174d je 0x100e175e */
  if (C.zf) goto L_100e175e;
  /* 100e174f push 0x100efba0 */
  push32((uint32_t)(0x100efba0u));
  /* 100e1754 push 0x100f3620 */
  push32((uint32_t)(0x100f3620u));
  /* 100e1759 call eax */
  call_ind((uint32_t)(EAX), 0x100e175bu);
  /* 100e175b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e175e:;
  /* 100e175e push 0x100efb8c */
  push32((uint32_t)(0x100efb8cu));
  /* 100e1763 call 0x100e2690 */
  push32(0x100e1768u); f_100e2690();
  /* 100e1768 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e176d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1770 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1772 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1778 push 0x100efb8c */
  push32((uint32_t)(0x100efb8cu));
  /* 100e177d push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e1782 call eax */
  call_ind((uint32_t)(EAX), 0x100e1784u);
  /* 100e1784 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e178c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e178e je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1794 push 0x100efb74 */
  push32((uint32_t)(0x100efb74u));
  /* 100e1799 push 0x100f6170 */
  push32((uint32_t)(0x100f6170u));
  /* 100e179e call eax */
  call_ind((uint32_t)(EAX), 0x100e17a0u);
  /* 100e17a0 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e17a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e17a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e17aa je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e17b0 push 0x100efb60 */
  push32((uint32_t)(0x100efb60u));
  /* 100e17b5 push 0x100f6140 */
  push32((uint32_t)(0x100f6140u));
  /* 100e17ba call eax */
  call_ind((uint32_t)(EAX), 0x100e17bcu);
  /* 100e17bc mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e17c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e17c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e17c6 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e17cc push 0x100efb4c */
  push32((uint32_t)(0x100efb4cu));
  /* 100e17d1 push 0x100f60c0 */
  push32((uint32_t)(0x100f60c0u));
  /* 100e17d6 call eax */
  call_ind((uint32_t)(EAX), 0x100e17d8u);
  /* 100e17d8 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e17dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e17e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e17e2 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e17e8 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 100e17ec push ecx */
  push32((uint32_t)(ECX));
  /* 100e17ed push 0x100f6390 */
  push32((uint32_t)(0x100f6390u));
  /* 100e17f2 call eax */
  call_ind((uint32_t)(EAX), 0x100e17f4u);
  /* 100e17f4 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e17f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e17fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e17fe je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1804 push 0x100efb40 */
  push32((uint32_t)(0x100efb40u));
  /* 100e1809 push 0x100f6310 */
  push32((uint32_t)(0x100f6310u));
  /* 100e180e call eax */
  call_ind((uint32_t)(EAX), 0x100e1810u);
  /* 100e1810 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e181a je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1820 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 100e1824 push edx */
  push32((uint32_t)(EDX));
  /* 100e1825 push 0x100f5f60 */
  push32((uint32_t)(0x100f5f60u));
  /* 100e182a call eax */
  call_ind((uint32_t)(EAX), 0x100e182cu);
  /* 100e182c mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1831 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1834 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1836 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e183c push 0x100efb34 */
  push32((uint32_t)(0x100efb34u));
  /* 100e1841 push 0x100f6350 */
  push32((uint32_t)(0x100f6350u));
  /* 100e1846 call eax */
  call_ind((uint32_t)(EAX), 0x100e1848u);
  /* 100e1848 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e184d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1852 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1858 push 0x100efb28 */
  push32((uint32_t)(0x100efb28u));
  /* 100e185d push 0x100f3648 */
  push32((uint32_t)(0x100f3648u));
  /* 100e1862 call eax */
  call_ind((uint32_t)(EAX), 0x100e1864u);
  /* 100e1864 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e186c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e186e je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1874 push 0x100efb18 */
  push32((uint32_t)(0x100efb18u));
  /* 100e1879 push 0x100f38a8 */
  push32((uint32_t)(0x100f38a8u));
  /* 100e187e call eax */
  call_ind((uint32_t)(EAX), 0x100e1880u);
  /* 100e1880 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1885 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e188a je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1890 push 0x100efb0c */
  push32((uint32_t)(0x100efb0cu));
  /* 100e1895 push 0x100f61d0 */
  push32((uint32_t)(0x100f61d0u));
  /* 100e189a call eax */
  call_ind((uint32_t)(EAX), 0x100e189cu);
  /* 100e189c mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e18a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e18a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e18a6 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e18ac push 0x100efaf8 */
  push32((uint32_t)(0x100efaf8u));
  /* 100e18b1 push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e18b6 call eax */
  call_ind((uint32_t)(EAX), 0x100e18b8u);
  /* 100e18b8 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e18bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e18c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e18c2 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e18c8 push 0x100efaec */
  push32((uint32_t)(0x100efaecu));
  /* 100e18cd push 0x100f5fb8 */
  push32((uint32_t)(0x100f5fb8u));
  /* 100e18d2 call eax */
  call_ind((uint32_t)(EAX), 0x100e18d4u);
  /* 100e18d4 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e18d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e18dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e18de je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e18e4 push 0x100efad8 */
  push32((uint32_t)(0x100efad8u));
  /* 100e18e9 push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e18ee call eax */
  call_ind((uint32_t)(EAX), 0x100e18f0u);
  /* 100e18f0 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e18f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e18f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e18fa je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1900 push 0x100efacc */
  push32((uint32_t)(0x100efaccu));
  /* 100e1905 push 0x100f6238 */
  push32((uint32_t)(0x100f6238u));
  /* 100e190a call eax */
  call_ind((uint32_t)(EAX), 0x100e190cu);
  /* 100e190c mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1911 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1914 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1916 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e191c push 0x100efac0 */
  push32((uint32_t)(0x100efac0u));
  /* 100e1921 push 0x100f5fb0 */
  push32((uint32_t)(0x100f5fb0u));
  /* 100e1926 call eax */
  call_ind((uint32_t)(EAX), 0x100e1928u);
  /* 100e1928 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e192d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1932 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1938 push 0x100efab0 */
  push32((uint32_t)(0x100efab0u));
  /* 100e193d push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e1942 call eax */
  call_ind((uint32_t)(EAX), 0x100e1944u);
  /* 100e1944 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e194c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e194e je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1954 push 0x100efa98 */
  push32((uint32_t)(0x100efa98u));
  /* 100e1959 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e195e call eax */
  call_ind((uint32_t)(EAX), 0x100e1960u);
  /* 100e1960 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1965 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e196a je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1970 push 0x100efa88 */
  push32((uint32_t)(0x100efa88u));
  /* 100e1975 push 0x100f5fc8 */
  push32((uint32_t)(0x100f5fc8u));
  /* 100e197a call eax */
  call_ind((uint32_t)(EAX), 0x100e197cu);
  /* 100e197c mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1986 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e198c push 0x100efa74 */
  push32((uint32_t)(0x100efa74u));
  /* 100e1991 push 0x100f35f8 */
  push32((uint32_t)(0x100f35f8u));
  /* 100e1996 call eax */
  call_ind((uint32_t)(EAX), 0x100e1998u);
  /* 100e1998 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e199d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e19a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e19a2 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e19a8 push 0x100efa68 */
  push32((uint32_t)(0x100efa68u));
  /* 100e19ad push 0x100f3858 */
  push32((uint32_t)(0x100f3858u));
  /* 100e19b2 call eax */
  call_ind((uint32_t)(EAX), 0x100e19b4u);
  /* 100e19b4 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e19b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e19bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e19be je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e19c4 push 0x100efa5c */
  push32((uint32_t)(0x100efa5cu));
  /* 100e19c9 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e19ce call eax */
  call_ind((uint32_t)(EAX), 0x100e19d0u);
  /* 100e19d0 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e19d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e19d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e19da je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e19e0 push 0x100efa50 */
  push32((uint32_t)(0x100efa50u));
  /* 100e19e5 push 0x100f61c8 */
  push32((uint32_t)(0x100f61c8u));
  /* 100e19ea call eax */
  call_ind((uint32_t)(EAX), 0x100e19ecu);
  /* 100e19ec mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e19f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e19f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e19f6 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e19fc push 0x100efa44 */
  push32((uint32_t)(0x100efa44u));
  /* 100e1a01 push 0x100f60d8 */
  push32((uint32_t)(0x100f60d8u));
  /* 100e1a06 call eax */
  call_ind((uint32_t)(EAX), 0x100e1a08u);
  /* 100e1a08 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1a0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1a10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1a12 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1a18 push 0x100efa38 */
  push32((uint32_t)(0x100efa38u));
  /* 100e1a1d push 0x100f62b8 */
  push32((uint32_t)(0x100f62b8u));
  /* 100e1a22 call eax */
  call_ind((uint32_t)(EAX), 0x100e1a24u);
  /* 100e1a24 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1a2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1a2e je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1a30 push 0x100efa2c */
  push32((uint32_t)(0x100efa2cu));
  /* 100e1a35 push 0x100f38c8 */
  push32((uint32_t)(0x100f38c8u));
  /* 100e1a3a call eax */
  call_ind((uint32_t)(EAX), 0x100e1a3cu);
  /* 100e1a3c mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1a46 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1a48 push 0x100efa20 */
  push32((uint32_t)(0x100efa20u));
  /* 100e1a4d push 0x100f5f70 */
  push32((uint32_t)(0x100f5f70u));
  /* 100e1a52 call eax */
  call_ind((uint32_t)(EAX), 0x100e1a54u);
  /* 100e1a54 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1a5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1a5e je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1a60 push 0x100efa14 */
  push32((uint32_t)(0x100efa14u));
  /* 100e1a65 push 0x100f6378 */
  push32((uint32_t)(0x100f6378u));
  /* 100e1a6a call eax */
  call_ind((uint32_t)(EAX), 0x100e1a6cu);
  /* 100e1a6c mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1a71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1a76 je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1a78 push 0x100efa08 */
  push32((uint32_t)(0x100efa08u));
  /* 100e1a7d push 0x100f5f68 */
  push32((uint32_t)(0x100f5f68u));
  /* 100e1a82 call eax */
  call_ind((uint32_t)(EAX), 0x100e1a84u);
  /* 100e1a84 mov eax, dword ptr [0x100f63d8] */
  EAX = (r32((uint32_t)(0x100f63d8)));
  /* 100e1a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1a8e je 0x100e1a9f */
  if (C.zf) goto L_100e1a9f;
  /* 100e1a90 push 0x100ef9f8 */
  push32((uint32_t)(0x100ef9f8u));
  /* 100e1a95 push 0x100f3880 */
  push32((uint32_t)(0x100f3880u));
  /* 100e1a9a call eax */
  call_ind((uint32_t)(EAX), 0x100e1a9cu);
  /* 100e1a9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e1a9f:;
  /* 100e1a9f mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1aa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1aa6 je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1aac push 0x100ef9e4 */
  push32((uint32_t)(0x100ef9e4u));
  /* 100e1ab1 push 0x100f6358 */
  push32((uint32_t)(0x100f6358u));
  /* 100e1ab6 call eax */
  call_ind((uint32_t)(EAX), 0x100e1ab8u);
  /* 100e1ab8 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1abd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1ac0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1ac2 je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1ac8 push 0x100ef9d0 */
  push32((uint32_t)(0x100ef9d0u));
  /* 100e1acd push 0x100f60e0 */
  push32((uint32_t)(0x100f60e0u));
  /* 100e1ad2 call eax */
  call_ind((uint32_t)(EAX), 0x100e1ad4u);
  /* 100e1ad4 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1ad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1ade je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1ae4 push 0x100ef9c8 */
  push32((uint32_t)(0x100ef9c8u));
  /* 100e1ae9 push 0x100f3640 */
  push32((uint32_t)(0x100f3640u));
  /* 100e1aee call eax */
  call_ind((uint32_t)(EAX), 0x100e1af0u);
  /* 100e1af0 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1af5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1afa je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1b00 push 0x100ef9b0 */
  push32((uint32_t)(0x100ef9b0u));
  /* 100e1b05 push 0x100f6330 */
  push32((uint32_t)(0x100f6330u));
  /* 100e1b0a call eax */
  call_ind((uint32_t)(EAX), 0x100e1b0cu);
  /* 100e1b0c mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1b16 je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1b1c push 0x100ef998 */
  push32((uint32_t)(0x100ef998u));
  /* 100e1b21 push 0x100f6338 */
  push32((uint32_t)(0x100f6338u));
  /* 100e1b26 call eax */
  call_ind((uint32_t)(EAX), 0x100e1b28u);
  /* 100e1b28 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1b2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1b32 je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1b38 push 0x100ef980 */
  push32((uint32_t)(0x100ef980u));
  /* 100e1b3d push 0x100f6320 */
  push32((uint32_t)(0x100f6320u));
  /* 100e1b42 call eax */
  call_ind((uint32_t)(EAX), 0x100e1b44u);
  /* 100e1b44 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1b4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1b4e je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1b54 push 0x100ef968 */
  push32((uint32_t)(0x100ef968u));
  /* 100e1b59 push 0x100f6328 */
  push32((uint32_t)(0x100f6328u));
  /* 100e1b5e call eax */
  call_ind((uint32_t)(EAX), 0x100e1b60u);
  /* 100e1b60 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1b65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1b6a je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1b70 push 0x100ef950 */
  push32((uint32_t)(0x100ef950u));
  /* 100e1b75 push 0x100f6340 */
  push32((uint32_t)(0x100f6340u));
  /* 100e1b7a call eax */
  call_ind((uint32_t)(EAX), 0x100e1b7cu);
  /* 100e1b7c mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1b81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1b86 je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1b8c push 0x100ef938 */
  push32((uint32_t)(0x100ef938u));
  /* 100e1b91 push 0x100f6278 */
  push32((uint32_t)(0x100f6278u));
  /* 100e1b96 call eax */
  call_ind((uint32_t)(EAX), 0x100e1b98u);
  /* 100e1b98 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1b9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1ba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1ba2 je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1ba8 push 0x100ef920 */
  push32((uint32_t)(0x100ef920u));
  /* 100e1bad push 0x100f6260 */
  push32((uint32_t)(0x100f6260u));
  /* 100e1bb2 call eax */
  call_ind((uint32_t)(EAX), 0x100e1bb4u);
  /* 100e1bb4 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1bb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1bbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1bbe je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1bc4 push 0x100ef908 */
  push32((uint32_t)(0x100ef908u));
  /* 100e1bc9 push 0x100f6268 */
  push32((uint32_t)(0x100f6268u));
  /* 100e1bce call eax */
  call_ind((uint32_t)(EAX), 0x100e1bd0u);
  /* 100e1bd0 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1bd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1bda je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1be0 push 0x100ef8f0 */
  push32((uint32_t)(0x100ef8f0u));
  /* 100e1be5 push 0x100f6280 */
  push32((uint32_t)(0x100f6280u));
  /* 100e1bea call eax */
  call_ind((uint32_t)(EAX), 0x100e1becu);
  /* 100e1bec mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1bf6 je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1bfc push 0x100ef8d8 */
  push32((uint32_t)(0x100ef8d8u));
  /* 100e1c01 push 0x100f6288 */
  push32((uint32_t)(0x100f6288u));
  /* 100e1c06 call eax */
  call_ind((uint32_t)(EAX), 0x100e1c08u);
  /* 100e1c08 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1c0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1c10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1c12 je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1c18 push 0x100ef8c0 */
  push32((uint32_t)(0x100ef8c0u));
  /* 100e1c1d push 0x100f38f0 */
  push32((uint32_t)(0x100f38f0u));
  /* 100e1c22 call eax */
  call_ind((uint32_t)(EAX), 0x100e1c24u);
  /* 100e1c24 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1c29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1c2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1c2e je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1c30 push 0x100ef8a8 */
  push32((uint32_t)(0x100ef8a8u));
  /* 100e1c35 push 0x100f38f8 */
  push32((uint32_t)(0x100f38f8u));
  /* 100e1c3a call eax */
  call_ind((uint32_t)(EAX), 0x100e1c3cu);
  /* 100e1c3c mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1c44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1c46 je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1c48 push 0x100ef890 */
  push32((uint32_t)(0x100ef890u));
  /* 100e1c4d push 0x100f38e8 */
  push32((uint32_t)(0x100f38e8u));
  /* 100e1c52 call eax */
  call_ind((uint32_t)(EAX), 0x100e1c54u);
  /* 100e1c54 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1c59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1c5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1c5e je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1c60 push 0x100ef878 */
  push32((uint32_t)(0x100ef878u));
  /* 100e1c65 push 0x100f5f58 */
  push32((uint32_t)(0x100f5f58u));
  /* 100e1c6a call eax */
  call_ind((uint32_t)(EAX), 0x100e1c6cu);
  /* 100e1c6c mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1c71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1c74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1c76 je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1c78 push 0x100ef860 */
  push32((uint32_t)(0x100ef860u));
  /* 100e1c7d push 0x100f5f48 */
  push32((uint32_t)(0x100f5f48u));
  /* 100e1c82 call eax */
  call_ind((uint32_t)(EAX), 0x100e1c84u);
  /* 100e1c84 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1c8e je 0x100e1c9f */
  if (C.zf) goto L_100e1c9f;
  /* 100e1c90 push 0x100ef848 */
  push32((uint32_t)(0x100ef848u));
  /* 100e1c95 push 0x100f5f50 */
  push32((uint32_t)(0x100f5f50u));
  /* 100e1c9a call eax */
  call_ind((uint32_t)(EAX), 0x100e1c9cu);
  /* 100e1c9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e1c9f:;
  /* 100e1c9f lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 100e1ca3 push 0x100ef840 */
  push32((uint32_t)(0x100ef840u));
  /* 100e1ca8 push eax */
  push32((uint32_t)(EAX));
  /* 100e1ca9 call 0x100e2f30 */
  push32(0x100e1caeu); f_100e2f30();
  /* 100e1cae push eax */
  push32((uint32_t)(EAX));
  /* 100e1caf push 0x100f5ff8 */
  push32((uint32_t)(0x100f5ff8u));
  /* 100e1cb4 call 0x100e26a0 */
  push32(0x100e1cb9u); f_100e26a0();
  /* 100e1cb9 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 100e1cbd push 0x100ef838 */
  push32((uint32_t)(0x100ef838u));
  /* 100e1cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 100e1cc3 call 0x100e2f30 */
  push32(0x100e1cc8u); f_100e2f30();
  /* 100e1cc8 push eax */
  push32((uint32_t)(EAX));
  /* 100e1cc9 push 0x100f5ff0 */
  push32((uint32_t)(0x100f5ff0u));
  /* 100e1cce call 0x100e26a0 */
  push32(0x100e1cd3u); f_100e26a0();
  /* 100e1cd3 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 100e1cd7 push 0x100ef830 */
  push32((uint32_t)(0x100ef830u));
  /* 100e1cdc push edx */
  push32((uint32_t)(EDX));
  /* 100e1cdd call 0x100e2f30 */
  push32(0x100e1ce2u); f_100e2f30();
  /* 100e1ce2 push eax */
  push32((uint32_t)(EAX));
  /* 100e1ce3 push 0x100f5fe8 */
  push32((uint32_t)(0x100f5fe8u));
  /* 100e1ce8 call 0x100e26a0 */
  push32(0x100e1cedu); f_100e26a0();
  /* 100e1ced lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 100e1cf1 push 0x100ef828 */
  push32((uint32_t)(0x100ef828u));
  /* 100e1cf6 push eax */
  push32((uint32_t)(EAX));
  /* 100e1cf7 call 0x100e2f30 */
  push32(0x100e1cfcu); f_100e2f30();
  /* 100e1cfc push eax */
  push32((uint32_t)(EAX));
  /* 100e1cfd push 0x100f5fe0 */
  push32((uint32_t)(0x100f5fe0u));
  /* 100e1d02 call 0x100e26a0 */
  push32(0x100e1d07u); f_100e26a0();
  /* 100e1d07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1d0a lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 100e1d0e push 0x100ef820 */
  push32((uint32_t)(0x100ef820u));
  /* 100e1d13 push ecx */
  push32((uint32_t)(ECX));
  /* 100e1d14 call 0x100e2f30 */
  push32(0x100e1d19u); f_100e2f30();
  /* 100e1d19 push eax */
  push32((uint32_t)(EAX));
  /* 100e1d1a push 0x100f5fd8 */
  push32((uint32_t)(0x100f5fd8u));
  /* 100e1d1f call 0x100e26a0 */
  push32(0x100e1d24u); f_100e26a0();
  /* 100e1d24 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 100e1d28 push 0x100ef818 */
  push32((uint32_t)(0x100ef818u));
  /* 100e1d2d push edx */
  push32((uint32_t)(EDX));
  /* 100e1d2e call 0x100e2f30 */
  push32(0x100e1d33u); f_100e2f30();
  /* 100e1d33 push eax */
  push32((uint32_t)(EAX));
  /* 100e1d34 push 0x100f5fd0 */
  push32((uint32_t)(0x100f5fd0u));
  /* 100e1d39 call 0x100e26a0 */
  push32(0x100e1d3eu); f_100e26a0();
  /* 100e1d3e lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 100e1d42 push 0x100ef810 */
  push32((uint32_t)(0x100ef810u));
  /* 100e1d47 push eax */
  push32((uint32_t)(EAX));
  /* 100e1d48 call 0x100e2f30 */
  push32(0x100e1d4du); f_100e2f30();
  /* 100e1d4d push eax */
  push32((uint32_t)(EAX));
  /* 100e1d4e push 0x100f6110 */
  push32((uint32_t)(0x100f6110u));
  /* 100e1d53 call 0x100e26a0 */
  push32(0x100e1d58u); f_100e26a0();
  /* 100e1d58 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 100e1d5c push 0x100ef808 */
  push32((uint32_t)(0x100ef808u));
  /* 100e1d61 push ecx */
  push32((uint32_t)(ECX));
  /* 100e1d62 call 0x100e2f30 */
  push32(0x100e1d67u); f_100e2f30();
  /* 100e1d67 push eax */
  push32((uint32_t)(EAX));
  /* 100e1d68 push 0x100f6108 */
  push32((uint32_t)(0x100f6108u));
  /* 100e1d6d call 0x100e26a0 */
  push32(0x100e1d72u); f_100e26a0();
  /* 100e1d72 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1d75 lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 100e1d79 push 0x100ef800 */
  push32((uint32_t)(0x100ef800u));
  /* 100e1d7e push edx */
  push32((uint32_t)(EDX));
  /* 100e1d7f call 0x100e2f30 */
  push32(0x100e1d84u); f_100e2f30();
  /* 100e1d84 push eax */
  push32((uint32_t)(EAX));
  /* 100e1d85 push 0x100f6100 */
  push32((uint32_t)(0x100f6100u));
  /* 100e1d8a call 0x100e26a0 */
  push32(0x100e1d8fu); f_100e26a0();
  /* 100e1d8f lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 100e1d93 push 0x100ef7f8 */
  push32((uint32_t)(0x100ef7f8u));
  /* 100e1d98 push eax */
  push32((uint32_t)(EAX));
  /* 100e1d99 call 0x100e2f30 */
  push32(0x100e1d9eu); f_100e2f30();
  /* 100e1d9e push eax */
  push32((uint32_t)(EAX));
  /* 100e1d9f push 0x100f60f8 */
  push32((uint32_t)(0x100f60f8u));
  /* 100e1da4 call 0x100e26a0 */
  push32(0x100e1da9u); f_100e26a0();
  /* 100e1da9 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 100e1dad push 0x100ef7f0 */
  push32((uint32_t)(0x100ef7f0u));
  /* 100e1db2 push ecx */
  push32((uint32_t)(ECX));
  /* 100e1db3 call 0x100e2f30 */
  push32(0x100e1db8u); f_100e2f30();
  /* 100e1db8 push eax */
  push32((uint32_t)(EAX));
  /* 100e1db9 push 0x100f60e8 */
  push32((uint32_t)(0x100f60e8u));
  /* 100e1dbe call 0x100e26a0 */
  push32(0x100e1dc3u); f_100e26a0();
  /* 100e1dc3 push 0x100ef7e8 */
  push32((uint32_t)(0x100ef7e8u));
  /* 100e1dc8 lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 100e1dcc push edx */
  push32((uint32_t)(EDX));
  /* 100e1dcd call 0x100e2f30 */
  push32(0x100e1dd2u); f_100e2f30();
  /* 100e1dd2 push eax */
  push32((uint32_t)(EAX));
  /* 100e1dd3 push 0x100f6138 */
  push32((uint32_t)(0x100f6138u));
  /* 100e1dd8 call 0x100e26a0 */
  push32(0x100e1dddu); f_100e26a0();
  /* 100e1ddd mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1de2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1de5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1de7 je 0x100e1f1c */
  if (C.zf) goto L_100e1f1c;
  /* 100e1ded push 0x100ef7d4 */
  push32((uint32_t)(0x100ef7d4u));
  /* 100e1df2 push 0x100f3698 */
  push32((uint32_t)(0x100f3698u));
  /* 100e1df7 call eax */
  call_ind((uint32_t)(EAX), 0x100e1df9u);
  /* 100e1df9 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1dfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1e01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1e03 je 0x100e1f1c */
  if (C.zf) goto L_100e1f1c;
  /* 100e1e09 push 0x100ef7c0 */
  push32((uint32_t)(0x100ef7c0u));
  /* 100e1e0e push 0x100f3690 */
  push32((uint32_t)(0x100f3690u));
  /* 100e1e13 call eax */
  call_ind((uint32_t)(EAX), 0x100e1e15u);
  /* 100e1e15 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1e1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1e1f je 0x100e1f1c */
  if (C.zf) goto L_100e1f1c;
  /* 100e1e25 push 0x100ef7ac */
  push32((uint32_t)(0x100ef7acu));
  /* 100e1e2a push 0x100f3688 */
  push32((uint32_t)(0x100f3688u));
  /* 100e1e2f call eax */
  call_ind((uint32_t)(EAX), 0x100e1e31u);
  /* 100e1e31 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1e36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1e3b je 0x100e1f1c */
  if (C.zf) goto L_100e1f1c;
  /* 100e1e41 push 0x100ef798 */
  push32((uint32_t)(0x100ef798u));
  /* 100e1e46 push 0x100f3680 */
  push32((uint32_t)(0x100f3680u));
  /* 100e1e4b call eax */
  call_ind((uint32_t)(EAX), 0x100e1e4du);
  /* 100e1e4d mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1e52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1e55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1e57 je 0x100e1f1c */
  if (C.zf) goto L_100e1f1c;
  /* 100e1e5d push 0x100ef784 */
  push32((uint32_t)(0x100ef784u));
  /* 100e1e62 push 0x100f3658 */
  push32((uint32_t)(0x100f3658u));
  /* 100e1e67 call eax */
  call_ind((uint32_t)(EAX), 0x100e1e69u);
  /* 100e1e69 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1e71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1e73 je 0x100e1f1c */
  if (C.zf) goto L_100e1f1c;
  /* 100e1e79 push 0x100ef770 */
  push32((uint32_t)(0x100ef770u));
  /* 100e1e7e push 0x100f3650 */
  push32((uint32_t)(0x100f3650u));
  /* 100e1e83 call eax */
  call_ind((uint32_t)(EAX), 0x100e1e85u);
  /* 100e1e85 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1e8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1e8f je 0x100e1f1c */
  if (C.zf) goto L_100e1f1c;
  /* 100e1e95 push 0x100ef75c */
  push32((uint32_t)(0x100ef75cu));
  /* 100e1e9a push 0x100f3728 */
  push32((uint32_t)(0x100f3728u));
  /* 100e1e9f call eax */
  call_ind((uint32_t)(EAX), 0x100e1ea1u);
  /* 100e1ea1 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1ea6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1eab je 0x100e1f1c */
  if (C.zf) goto L_100e1f1c;
  /* 100e1ead push 0x100ef748 */
  push32((uint32_t)(0x100ef748u));
  /* 100e1eb2 push 0x100f3720 */
  push32((uint32_t)(0x100f3720u));
  /* 100e1eb7 call eax */
  call_ind((uint32_t)(EAX), 0x100e1eb9u);
  /* 100e1eb9 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1ebe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1ec3 je 0x100e1f1c */
  if (C.zf) goto L_100e1f1c;
  /* 100e1ec5 push 0x100ef734 */
  push32((uint32_t)(0x100ef734u));
  /* 100e1eca push 0x100f3718 */
  push32((uint32_t)(0x100f3718u));
  /* 100e1ecf call eax */
  call_ind((uint32_t)(EAX), 0x100e1ed1u);
  /* 100e1ed1 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1edb je 0x100e1f1c */
  if (C.zf) goto L_100e1f1c;
  /* 100e1edd push 0x100ef720 */
  push32((uint32_t)(0x100ef720u));
  /* 100e1ee2 push 0x100f3700 */
  push32((uint32_t)(0x100f3700u));
  /* 100e1ee7 call eax */
  call_ind((uint32_t)(EAX), 0x100e1ee9u);
  /* 100e1ee9 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1ef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1ef3 je 0x100e1f1c */
  if (C.zf) goto L_100e1f1c;
  /* 100e1ef5 push 0x100ef70c */
  push32((uint32_t)(0x100ef70cu));
  /* 100e1efa push 0x100f36f8 */
  push32((uint32_t)(0x100f36f8u));
  /* 100e1eff call eax */
  call_ind((uint32_t)(EAX), 0x100e1f01u);
  /* 100e1f01 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e1f06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e1f0b je 0x100e1f1c */
  if (C.zf) goto L_100e1f1c;
  /* 100e1f0d push 0x100ef6f8 */
  push32((uint32_t)(0x100ef6f8u));
  /* 100e1f12 push 0x100f36f0 */
  push32((uint32_t)(0x100f36f0u));
  /* 100e1f17 call eax */
  call_ind((uint32_t)(EAX), 0x100e1f19u);
  /* 100e1f19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e1f1c:;
  /* 100e1f1c lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 100e1f20 push 0x100ef840 */
  push32((uint32_t)(0x100ef840u));
  /* 100e1f25 push eax */
  push32((uint32_t)(EAX));
  /* 100e1f26 call 0x100e2f30 */
  push32(0x100e1f2bu); f_100e2f30();
  /* 100e1f2b push eax */
  push32((uint32_t)(EAX));
  /* 100e1f2c push 0x100f36c0 */
  push32((uint32_t)(0x100f36c0u));
  /* 100e1f31 call 0x100e26a0 */
  push32(0x100e1f36u); f_100e26a0();
  /* 100e1f36 lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 100e1f3a push 0x100ef838 */
  push32((uint32_t)(0x100ef838u));
  /* 100e1f3f push ecx */
  push32((uint32_t)(ECX));
  /* 100e1f40 call 0x100e2f30 */
  push32(0x100e1f45u); f_100e2f30();
  /* 100e1f45 push eax */
  push32((uint32_t)(EAX));
  /* 100e1f46 push 0x100f36c8 */
  push32((uint32_t)(0x100f36c8u));
  /* 100e1f4b call 0x100e26a0 */
  push32(0x100e1f50u); f_100e26a0();
  /* 100e1f50 lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 100e1f54 push 0x100ef830 */
  push32((uint32_t)(0x100ef830u));
  /* 100e1f59 push edx */
  push32((uint32_t)(EDX));
  /* 100e1f5a call 0x100e2f30 */
  push32(0x100e1f5fu); f_100e2f30();
  /* 100e1f5f push eax */
  push32((uint32_t)(EAX));
  /* 100e1f60 push 0x100f36d0 */
  push32((uint32_t)(0x100f36d0u));
  /* 100e1f65 call 0x100e26a0 */
  push32(0x100e1f6au); f_100e26a0();
  /* 100e1f6a lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 100e1f6e push 0x100ef828 */
  push32((uint32_t)(0x100ef828u));
  /* 100e1f73 push eax */
  push32((uint32_t)(EAX));
  /* 100e1f74 call 0x100e2f30 */
  push32(0x100e1f79u); f_100e2f30();
  /* 100e1f79 push eax */
  push32((uint32_t)(EAX));
  /* 100e1f7a push 0x100f36d8 */
  push32((uint32_t)(0x100f36d8u));
  /* 100e1f7f call 0x100e26a0 */
  push32(0x100e1f84u); f_100e26a0();
  /* 100e1f84 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1f87 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 100e1f8b push 0x100ef820 */
  push32((uint32_t)(0x100ef820u));
  /* 100e1f90 push ecx */
  push32((uint32_t)(ECX));
  /* 100e1f91 call 0x100e2f30 */
  push32(0x100e1f96u); f_100e2f30();
  /* 100e1f96 push eax */
  push32((uint32_t)(EAX));
  /* 100e1f97 push 0x100f36a0 */
  push32((uint32_t)(0x100f36a0u));
  /* 100e1f9c call 0x100e26a0 */
  push32(0x100e1fa1u); f_100e26a0();
  /* 100e1fa1 lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 100e1fa5 push 0x100ef818 */
  push32((uint32_t)(0x100ef818u));
  /* 100e1faa push edx */
  push32((uint32_t)(EDX));
  /* 100e1fab call 0x100e2f30 */
  push32(0x100e1fb0u); f_100e2f30();
  /* 100e1fb0 push eax */
  push32((uint32_t)(EAX));
  /* 100e1fb1 push 0x100f36b0 */
  push32((uint32_t)(0x100f36b0u));
  /* 100e1fb6 call 0x100e26a0 */
  push32(0x100e1fbbu); f_100e26a0();
  /* 100e1fbb lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 100e1fbf push 0x100ef810 */
  push32((uint32_t)(0x100ef810u));
  /* 100e1fc4 push eax */
  push32((uint32_t)(EAX));
  /* 100e1fc5 call 0x100e2f30 */
  push32(0x100e1fcau); f_100e2f30();
  /* 100e1fca push eax */
  push32((uint32_t)(EAX));
  /* 100e1fcb push 0x100f3768 */
  push32((uint32_t)(0x100f3768u));
  /* 100e1fd0 call 0x100e26a0 */
  push32(0x100e1fd5u); f_100e26a0();
  /* 100e1fd5 lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 100e1fd9 push 0x100ef808 */
  push32((uint32_t)(0x100ef808u));
  /* 100e1fde push ecx */
  push32((uint32_t)(ECX));
  /* 100e1fdf call 0x100e2f30 */
  push32(0x100e1fe4u); f_100e2f30();
  /* 100e1fe4 push eax */
  push32((uint32_t)(EAX));
  /* 100e1fe5 push 0x100f3770 */
  push32((uint32_t)(0x100f3770u));
  /* 100e1fea call 0x100e26a0 */
  push32(0x100e1fefu); f_100e26a0();
  /* 100e1fef add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e1ff2 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 100e1ff6 push 0x100ef800 */
  push32((uint32_t)(0x100ef800u));
  /* 100e1ffb push edx */
  push32((uint32_t)(EDX));
  /* 100e1ffc call 0x100e2f30 */
  push32(0x100e2001u); f_100e2f30();
  /* 100e2001 push eax */
  push32((uint32_t)(EAX));
  /* 100e2002 push 0x100f3778 */
  push32((uint32_t)(0x100f3778u));
  /* 100e2007 call 0x100e26a0 */
  push32(0x100e200cu); f_100e26a0();
  /* 100e200c lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 100e2010 push 0x100ef7f8 */
  push32((uint32_t)(0x100ef7f8u));
  /* 100e2015 push eax */
  push32((uint32_t)(EAX));
  /* 100e2016 call 0x100e2f30 */
  push32(0x100e201bu); f_100e2f30();
  /* 100e201b push eax */
  push32((uint32_t)(EAX));
  /* 100e201c push 0x100f3750 */
  push32((uint32_t)(0x100f3750u));
  /* 100e2021 call 0x100e26a0 */
  push32(0x100e2026u); f_100e26a0();
  /* 100e2026 lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 100e202a push 0x100ef7f0 */
  push32((uint32_t)(0x100ef7f0u));
  /* 100e202f push ecx */
  push32((uint32_t)(ECX));
  /* 100e2030 call 0x100e2f30 */
  push32(0x100e2035u); f_100e2f30();
  /* 100e2035 push eax */
  push32((uint32_t)(EAX));
  /* 100e2036 push 0x100f3758 */
  push32((uint32_t)(0x100f3758u));
  /* 100e203b call 0x100e26a0 */
  push32(0x100e2040u); f_100e26a0();
  /* 100e2040 push 0x100ef7e8 */
  push32((uint32_t)(0x100ef7e8u));
  /* 100e2045 lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 100e2049 push edx */
  push32((uint32_t)(EDX));
  /* 100e204a call 0x100e2f30 */
  push32(0x100e204fu); f_100e2f30();
  /* 100e204f push eax */
  push32((uint32_t)(EAX));
  /* 100e2050 push 0x100f3760 */
  push32((uint32_t)(0x100f3760u));
  /* 100e2055 call 0x100e26a0 */
  push32(0x100e205au); f_100e26a0();
  /* 100e205a mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e205f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2064 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e206a push 0x100ef6e8 */
  push32((uint32_t)(0x100ef6e8u));
  /* 100e206f push 0x100f61b8 */
  push32((uint32_t)(0x100f61b8u));
  /* 100e2074 call eax */
  call_ind((uint32_t)(EAX), 0x100e2076u);
  /* 100e2076 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e207b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e207e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2080 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e2086 push 0x100ef6d4 */
  push32((uint32_t)(0x100ef6d4u));
  /* 100e208b push 0x100f61b0 */
  push32((uint32_t)(0x100f61b0u));
  /* 100e2090 call eax */
  call_ind((uint32_t)(EAX), 0x100e2092u);
  /* 100e2092 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2097 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e209a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e209c je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e20a2 push 0x100ef6c0 */
  push32((uint32_t)(0x100ef6c0u));
  /* 100e20a7 push 0x100f6180 */
  push32((uint32_t)(0x100f6180u));
  /* 100e20ac call eax */
  call_ind((uint32_t)(EAX), 0x100e20aeu);
  /* 100e20ae mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e20b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e20b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e20b8 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e20be push 0x100ef6ac */
  push32((uint32_t)(0x100ef6acu));
  /* 100e20c3 push 0x100f6178 */
  push32((uint32_t)(0x100f6178u));
  /* 100e20c8 call eax */
  call_ind((uint32_t)(EAX), 0x100e20cau);
  /* 100e20ca mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e20cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e20d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e20d4 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e20da push 0x100ef698 */
  push32((uint32_t)(0x100ef698u));
  /* 100e20df push 0x100f6188 */
  push32((uint32_t)(0x100f6188u));
  /* 100e20e4 call eax */
  call_ind((uint32_t)(EAX), 0x100e20e6u);
  /* 100e20e6 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e20eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e20ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e20f0 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e20f6 push 0x100ef684 */
  push32((uint32_t)(0x100ef684u));
  /* 100e20fb push 0x100f6078 */
  push32((uint32_t)(0x100f6078u));
  /* 100e2100 call eax */
  call_ind((uint32_t)(EAX), 0x100e2102u);
  /* 100e2102 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2107 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e210a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e210c je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e2112 push 0x100ef670 */
  push32((uint32_t)(0x100ef670u));
  /* 100e2117 push 0x100f6080 */
  push32((uint32_t)(0x100f6080u));
  /* 100e211c call eax */
  call_ind((uint32_t)(EAX), 0x100e211eu);
  /* 100e211e mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2128 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e212e push 0x100ef65c */
  push32((uint32_t)(0x100ef65cu));
  /* 100e2133 push 0x100f6088 */
  push32((uint32_t)(0x100f6088u));
  /* 100e2138 call eax */
  call_ind((uint32_t)(EAX), 0x100e213au);
  /* 100e213a mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e213f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2144 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e214a push 0x100ef648 */
  push32((uint32_t)(0x100ef648u));
  /* 100e214f push 0x100f6090 */
  push32((uint32_t)(0x100f6090u));
  /* 100e2154 call eax */
  call_ind((uint32_t)(EAX), 0x100e2156u);
  /* 100e2156 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e215b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e215e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2160 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e2166 push 0x100ef640 */
  push32((uint32_t)(0x100ef640u));
  /* 100e216b push 0x100f6198 */
  push32((uint32_t)(0x100f6198u));
  /* 100e2170 call eax */
  call_ind((uint32_t)(EAX), 0x100e2172u);
  /* 100e2172 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2177 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e217a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e217c je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e2182 push 0x100ef638 */
  push32((uint32_t)(0x100ef638u));
  /* 100e2187 push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e218c call eax */
  call_ind((uint32_t)(EAX), 0x100e218eu);
  /* 100e218e mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2193 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2198 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e219e push 0x100ef630 */
  push32((uint32_t)(0x100ef630u));
  /* 100e21a3 push 0x100f3938 */
  push32((uint32_t)(0x100f3938u));
  /* 100e21a8 call eax */
  call_ind((uint32_t)(EAX), 0x100e21aau);
  /* 100e21aa mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e21af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e21b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e21b4 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e21ba push 0x100ef628 */
  push32((uint32_t)(0x100ef628u));
  /* 100e21bf push 0x100f6058 */
  push32((uint32_t)(0x100f6058u));
  /* 100e21c4 call eax */
  call_ind((uint32_t)(EAX), 0x100e21c6u);
  /* 100e21c6 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e21cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e21ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e21d0 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e21d6 push 0x100ef620 */
  push32((uint32_t)(0x100ef620u));
  /* 100e21db push 0x100f6010 */
  push32((uint32_t)(0x100f6010u));
  /* 100e21e0 call eax */
  call_ind((uint32_t)(EAX), 0x100e21e2u);
  /* 100e21e2 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e21e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e21ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e21ec je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e21f2 push 0x100ef618 */
  push32((uint32_t)(0x100ef618u));
  /* 100e21f7 push 0x100f6018 */
  push32((uint32_t)(0x100f6018u));
  /* 100e21fc call eax */
  call_ind((uint32_t)(EAX), 0x100e21feu);
  /* 100e21fe mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2208 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e220e push 0x100ef610 */
  push32((uint32_t)(0x100ef610u));
  /* 100e2213 push 0x100f6020 */
  push32((uint32_t)(0x100f6020u));
  /* 100e2218 call eax */
  call_ind((uint32_t)(EAX), 0x100e221au);
  /* 100e221a mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e221f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2224 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e222a push 0x100ef608 */
  push32((uint32_t)(0x100ef608u));
  /* 100e222f push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e2234 call eax */
  call_ind((uint32_t)(EAX), 0x100e2236u);
  /* 100e2236 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e223b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e223e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2240 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e2246 push 0x100ef600 */
  push32((uint32_t)(0x100ef600u));
  /* 100e224b push 0x100f60f0 */
  push32((uint32_t)(0x100f60f0u));
  /* 100e2250 call eax */
  call_ind((uint32_t)(EAX), 0x100e2252u);
  /* 100e2252 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2257 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e225a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e225c je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e2262 push 0x100ef5f8 */
  push32((uint32_t)(0x100ef5f8u));
  /* 100e2267 push 0x100f6130 */
  push32((uint32_t)(0x100f6130u));
  /* 100e226c call eax */
  call_ind((uint32_t)(EAX), 0x100e226eu);
  /* 100e226e mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2273 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2278 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e227e push 0x100ef5f0 */
  push32((uint32_t)(0x100ef5f0u));
  /* 100e2283 push 0x100f61e8 */
  push32((uint32_t)(0x100f61e8u));
  /* 100e2288 call eax */
  call_ind((uint32_t)(EAX), 0x100e228au);
  /* 100e228a mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e228f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2292 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2294 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e229a push 0x100ef5e8 */
  push32((uint32_t)(0x100ef5e8u));
  /* 100e229f push 0x100f61f0 */
  push32((uint32_t)(0x100f61f0u));
  /* 100e22a4 call eax */
  call_ind((uint32_t)(EAX), 0x100e22a6u);
  /* 100e22a6 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e22ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e22ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e22b0 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e22b6 push 0x100ef5e0 */
  push32((uint32_t)(0x100ef5e0u));
  /* 100e22bb push 0x100f6148 */
  push32((uint32_t)(0x100f6148u));
  /* 100e22c0 call eax */
  call_ind((uint32_t)(EAX), 0x100e22c2u);
  /* 100e22c2 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e22c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e22ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e22cc je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e22d2 push 0x100ef5d8 */
  push32((uint32_t)(0x100ef5d8u));
  /* 100e22d7 push 0x100f6158 */
  push32((uint32_t)(0x100f6158u));
  /* 100e22dc call eax */
  call_ind((uint32_t)(EAX), 0x100e22deu);
  /* 100e22de mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e22e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e22e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e22e8 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e22ee push 0x100ef5d0 */
  push32((uint32_t)(0x100ef5d0u));
  /* 100e22f3 push 0x100f6160 */
  push32((uint32_t)(0x100f6160u));
  /* 100e22f8 call eax */
  call_ind((uint32_t)(EAX), 0x100e22fau);
  /* 100e22fa mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e22ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2304 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e230a push 0x100ef5c8 */
  push32((uint32_t)(0x100ef5c8u));
  /* 100e230f push 0x100f6150 */
  push32((uint32_t)(0x100f6150u));
  /* 100e2314 call eax */
  call_ind((uint32_t)(EAX), 0x100e2316u);
  /* 100e2316 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e231b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e231e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2320 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e2326 push 0x100ef5c0 */
  push32((uint32_t)(0x100ef5c0u));
  /* 100e232b push 0x100f3930 */
  push32((uint32_t)(0x100f3930u));
  /* 100e2330 call eax */
  call_ind((uint32_t)(EAX), 0x100e2332u);
  /* 100e2332 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2337 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e233a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e233c je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e2342 push 0x100ef5b8 */
  push32((uint32_t)(0x100ef5b8u));
  /* 100e2347 push 0x100f38c0 */
  push32((uint32_t)(0x100f38c0u));
  /* 100e234c call eax */
  call_ind((uint32_t)(EAX), 0x100e234eu);
  /* 100e234e mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2358 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e235e push 0x100ef5b0 */
  push32((uint32_t)(0x100ef5b0u));
  /* 100e2363 push 0x100f3780 */
  push32((uint32_t)(0x100f3780u));
  /* 100e2368 call eax */
  call_ind((uint32_t)(EAX), 0x100e236au);
  /* 100e236a mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e236f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2374 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e237a push 0x100ef5a8 */
  push32((uint32_t)(0x100ef5a8u));
  /* 100e237f push 0x100f60d0 */
  push32((uint32_t)(0x100f60d0u));
  /* 100e2384 call eax */
  call_ind((uint32_t)(EAX), 0x100e2386u);
  /* 100e2386 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e238b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e238e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2390 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e2396 push 0x100ef5a0 */
  push32((uint32_t)(0x100ef5a0u));
  /* 100e239b push 0x100f3920 */
  push32((uint32_t)(0x100f3920u));
  /* 100e23a0 call eax */
  call_ind((uint32_t)(EAX), 0x100e23a2u);
  /* 100e23a2 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e23a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e23aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e23ac je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e23b2 push 0x100ef598 */
  push32((uint32_t)(0x100ef598u));
  /* 100e23b7 push 0x100f61d8 */
  push32((uint32_t)(0x100f61d8u));
  /* 100e23bc call eax */
  call_ind((uint32_t)(EAX), 0x100e23beu);
  /* 100e23be mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e23c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e23c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e23c8 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e23ce push 0x100ef590 */
  push32((uint32_t)(0x100ef590u));
  /* 100e23d3 push 0x100f61e0 */
  push32((uint32_t)(0x100f61e0u));
  /* 100e23d8 call eax */
  call_ind((uint32_t)(EAX), 0x100e23dau);
  /* 100e23da mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e23df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e23e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e23e4 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e23ea push 0x100ef588 */
  push32((uint32_t)(0x100ef588u));
  /* 100e23ef push 0x100f3850 */
  push32((uint32_t)(0x100f3850u));
  /* 100e23f4 call eax */
  call_ind((uint32_t)(EAX), 0x100e23f6u);
  /* 100e23f6 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e23fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e23fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2400 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e2406 push 0x100ef580 */
  push32((uint32_t)(0x100ef580u));
  /* 100e240b push 0x100f3860 */
  push32((uint32_t)(0x100f3860u));
  /* 100e2410 call eax */
  call_ind((uint32_t)(EAX), 0x100e2412u);
  /* 100e2412 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2417 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e241a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e241c je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e2422 push 0x100ef578 */
  push32((uint32_t)(0x100ef578u));
  /* 100e2427 push 0x100f3748 */
  push32((uint32_t)(0x100f3748u));
  /* 100e242c call eax */
  call_ind((uint32_t)(EAX), 0x100e242eu);
  /* 100e242e mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2438 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e243e push 0x100ef570 */
  push32((uint32_t)(0x100ef570u));
  /* 100e2443 push 0x100f3608 */
  push32((uint32_t)(0x100f3608u));
  /* 100e2448 call eax */
  call_ind((uint32_t)(EAX), 0x100e244au);
  /* 100e244a mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e244f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2454 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e245a push 0x100ef568 */
  push32((uint32_t)(0x100ef568u));
  /* 100e245f push 0x100f36e8 */
  push32((uint32_t)(0x100f36e8u));
  /* 100e2464 call eax */
  call_ind((uint32_t)(EAX), 0x100e2466u);
  /* 100e2466 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e246b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e246e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2470 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e2476 push 0x100ef560 */
  push32((uint32_t)(0x100ef560u));
  /* 100e247b push 0x100f3610 */
  push32((uint32_t)(0x100f3610u));
  /* 100e2480 call eax */
  call_ind((uint32_t)(EAX), 0x100e2482u);
  /* 100e2482 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e248a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e248c je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e2492 push 0x100ef54c */
  push32((uint32_t)(0x100ef54cu));
  /* 100e2497 push 0x100f62c8 */
  push32((uint32_t)(0x100f62c8u));
  /* 100e249c call eax */
  call_ind((uint32_t)(EAX), 0x100e249eu);
  /* 100e249e mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e24a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e24a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e24a8 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e24aa push 0x100ef538 */
  push32((uint32_t)(0x100ef538u));
  /* 100e24af push 0x100f62b0 */
  push32((uint32_t)(0x100f62b0u));
  /* 100e24b4 call eax */
  call_ind((uint32_t)(EAX), 0x100e24b6u);
  /* 100e24b6 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e24bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e24be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e24c0 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e24c2 push 0x100ef524 */
  push32((uint32_t)(0x100ef524u));
  /* 100e24c7 push 0x100f62c0 */
  push32((uint32_t)(0x100f62c0u));
  /* 100e24cc call eax */
  call_ind((uint32_t)(EAX), 0x100e24ceu);
  /* 100e24ce mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e24d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e24d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e24d8 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e24da push 0x100ef510 */
  push32((uint32_t)(0x100ef510u));
  /* 100e24df push 0x100f62a0 */
  push32((uint32_t)(0x100f62a0u));
  /* 100e24e4 call eax */
  call_ind((uint32_t)(EAX), 0x100e24e6u);
  /* 100e24e6 mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e24eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e24ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e24f0 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e24f2 push 0x100ef4fc */
  push32((uint32_t)(0x100ef4fcu));
  /* 100e24f7 push 0x100f62a8 */
  push32((uint32_t)(0x100f62a8u));
  /* 100e24fc call eax */
  call_ind((uint32_t)(EAX), 0x100e24feu);
  /* 100e24fe mov eax, dword ptr [0x100f63dc] */
  EAX = (r32((uint32_t)(0x100f63dc)));
  /* 100e2503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2508 je 0x100e2519 */
  if (C.zf) goto L_100e2519;
  /* 100e250a push 0x100ef4e8 */
  push32((uint32_t)(0x100ef4e8u));
  /* 100e250f push 0x100f6298 */
  push32((uint32_t)(0x100f6298u));
  /* 100e2514 call eax */
  call_ind((uint32_t)(EAX), 0x100e2516u);
  /* 100e2516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e2519:;
  /* 100e2519 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e251b push 4 */
  push32((uint32_t)(0x4u));
  /* 100e251d push 9 */
  push32((uint32_t)(0x9u));
  /* 100e251f call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e2525u);
  /* 100e2525 push 6 */
  push32((uint32_t)(0x6u));
  /* 100e2527 call dword ptr [0x100f6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6500))), 0x100e252du);
  /* 100e252d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e252f push 0x100ef4d4 */
  push32((uint32_t)(0x100ef4d4u));
  /* 100e2534 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e2536 call dword ptr [0x100f6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6504))), 0x100e253cu);
  /* 100e253c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e253e push 0x100ef4c0 */
  push32((uint32_t)(0x100ef4c0u));
  /* 100e2543 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e2545 call dword ptr [0x100f6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6504))), 0x100e254bu);
  /* 100e254b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e254d push 0x100ef4ac */
  push32((uint32_t)(0x100ef4acu));
  /* 100e2552 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e2554 call dword ptr [0x100f6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6504))), 0x100e255au);
  /* 100e255a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e255c push 0x100ef498 */
  push32((uint32_t)(0x100ef498u));
  /* 100e2561 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e2563 call dword ptr [0x100f6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6504))), 0x100e2569u);
  /* 100e2569 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e256c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e256e push 0x100ef484 */
  push32((uint32_t)(0x100ef484u));
  /* 100e2573 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e2575 call dword ptr [0x100f6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6504))), 0x100e257bu);
  /* 100e257b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e257d push 0x100ef470 */
  push32((uint32_t)(0x100ef470u));
  /* 100e2582 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e2584 call dword ptr [0x100f6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6504))), 0x100e258au);
  /* 100e258a push 0x100efb74 */
  push32((uint32_t)(0x100efb74u));
  /* 100e258f call dword ptr [0x100f6540] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6540))), 0x100e2595u);
  /* 100e2595 push 0x100ef464 */
  push32((uint32_t)(0x100ef464u));
  /* 100e259a call dword ptr [0x100f653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f653c))), 0x100e25a0u);
  /* 100e25a0 push 0x100ef454 */
  push32((uint32_t)(0x100ef454u));
  /* 100e25a5 call dword ptr [0x100f6544] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6544))), 0x100e25abu);
  /* 100e25ab push 0x100ef448 */
  push32((uint32_t)(0x100ef448u));
  /* 100e25b0 call dword ptr [0x100f654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f654c))), 0x100e25b6u);
  /* 100e25b6 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100e25bb call dword ptr [0x100f6508] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6508))), 0x100e25c1u);
  /* 100e25c1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e25c3 call dword ptr [0x100f650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f650c))), 0x100e25c9u);
  /* 100e25c9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e25cb call dword ptr [0x100f6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6510))), 0x100e25d1u);
  /* 100e25d1 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 100e25d6 call dword ptr [0x100f6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6514))), 0x100e25dcu);
  /* 100e25dc push 5 */
  push32((uint32_t)(0x5u));
  /* 100e25de call dword ptr [0x100f6518] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6518))), 0x100e25e4u);
  /* 100e25e4 add esp, 0x9c */
  { uint32_t _a=(ESP),_b=(0x9cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e25ea ret  */
  ESPCHK(0x100e1010u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f0 @ 0x100e25f0 (20 bytes, 7 insns) */
void f_100e25f0(void) {
  FTRACE(0x100e25f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e25f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e25f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e25f8 push eax */
  push32((uint32_t)(EAX));
  /* 100e25f9 push ecx */
  push32((uint32_t)(ECX));
  /* 100e25fa call dword ptr [0x100f64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f0))), 0x100e2600u);
  /* 100e2600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2603 ret  */
  ESPCHK(0x100e25f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x100e2610 (25 bytes, 9 insns) */
void f_100e2610(void) {
  FTRACE(0x100e2610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2610 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100e2614 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e2618 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e261c push eax */
  push32((uint32_t)(EAX));
  /* 100e261d push ecx */
  push32((uint32_t)(ECX));
  /* 100e261e push edx */
  push32((uint32_t)(EDX));
  /* 100e261f call dword ptr [0x100f64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64fc))), 0x100e2625u);
  /* 100e2625 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2628 ret  */
  ESPCHK(0x100e2610u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x100e2630 (6 bytes, 1 insns) */
void f_100e2630(void) {
  FTRACE(0x100e2630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2630 jmp dword ptr [0x100f6528] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100f6528)))); return;
}

/* FUN_10002640 @ 0x100e2640 (20 bytes, 7 insns) */
void f_100e2640(void) {
  FTRACE(0x100e2640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2640 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e2644 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e2648 push eax */
  push32((uint32_t)(EAX));
  /* 100e2649 push ecx */
  push32((uint32_t)(ECX));
  /* 100e264a call dword ptr [0x100f6548] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6548))), 0x100e2650u);
  /* 100e2650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2653 ret  */
  ESPCHK(0x100e2640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002660 @ 0x100e2660 (6 bytes, 1 insns) */
void f_100e2660(void) {
  FTRACE(0x100e2660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2660 jmp dword ptr [0x100f6554] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100f6554)))); return;
}

/* FUN_10002670 @ 0x100e2670 (6 bytes, 1 insns) */
void f_100e2670(void) {
  FTRACE(0x100e2670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2670 jmp dword ptr [0x100f6558] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100f6558)))); return;
}

/* FUN_10002680 @ 0x100e2680 (6 bytes, 1 insns) */
void f_100e2680(void) {
  FTRACE(0x100e2680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2680 jmp dword ptr [0x100f6560] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100f6560)))); return;
}

/* FUN_10002690 @ 0x100e2690 (13 bytes, 5 insns) */
void f_100e2690(void) {
  FTRACE(0x100e2690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2690 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e2694 push eax */
  push32((uint32_t)(EAX));
  /* 100e2695 call dword ptr [0x100f6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6564))), 0x100e269bu);
  /* 100e269b pop ecx */
  ECX = (pop32());
  /* 100e269c ret  */
  ESPCHK(0x100e2690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x100e26a0 (20 bytes, 7 insns) */
void f_100e26a0(void) {
  FTRACE(0x100e26a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e26a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e26a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e26a8 push eax */
  push32((uint32_t)(EAX));
  /* 100e26a9 push ecx */
  push32((uint32_t)(ECX));
  /* 100e26aa call dword ptr [0x100f6568] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6568))), 0x100e26b0u);
  /* 100e26b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e26b3 ret  */
  ESPCHK(0x100e26a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c0 @ 0x100e26c0 (6 bytes, 1 insns) */
void f_100e26c0(void) {
  FTRACE(0x100e26c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e26c0 jmp dword ptr [0x100f656c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100f656c)))); return;
}

/* FUN_100026d0 @ 0x100e26d0 (20 bytes, 7 insns) */
void f_100e26d0(void) {
  FTRACE(0x100e26d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e26d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e26d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e26d8 push eax */
  push32((uint32_t)(EAX));
  /* 100e26d9 push ecx */
  push32((uint32_t)(ECX));
  /* 100e26da call dword ptr [0x100f6248] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6248))), 0x100e26e0u);
  /* 100e26e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e26e3 ret  */
  ESPCHK(0x100e26d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x100e26f0 (15 bytes, 5 insns) */
void f_100e26f0(void) {
  FTRACE(0x100e26f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e26f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e26f4 push eax */
  push32((uint32_t)(EAX));
  /* 100e26f5 call dword ptr [0x100f6290] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6290))), 0x100e26fbu);
  /* 100e26fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e26fe ret  */
  ESPCHK(0x100e26f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x100e2700 (20 bytes, 7 insns) */
void f_100e2700(void) {
  FTRACE(0x100e2700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2700 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e2704 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e2708 push eax */
  push32((uint32_t)(EAX));
  /* 100e2709 push ecx */
  push32((uint32_t)(ECX));
  /* 100e270a call dword ptr [0x100f3710] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f3710))), 0x100e2710u);
  /* 100e2710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2713 ret  */
  ESPCHK(0x100e2700u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x100e2720 (13 bytes, 5 insns) */
void f_100e2720(void) {
  FTRACE(0x100e2720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2720 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e2724 push eax */
  push32((uint32_t)(EAX));
  /* 100e2725 call dword ptr [0x100f38b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f38b0))), 0x100e272bu);
  /* 100e272b pop ecx */
  ECX = (pop32());
  /* 100e272c ret  */
  ESPCHK(0x100e2720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x100e2730 (15 bytes, 5 insns) */
void f_100e2730(void) {
  FTRACE(0x100e2730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2730 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e2734 push eax */
  push32((uint32_t)(EAX));
  /* 100e2735 call dword ptr [0x100f6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6570))), 0x100e273bu);
  /* 100e273b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e273e ret  */
  ESPCHK(0x100e2730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x100e2740 (25 bytes, 9 insns) */
void f_100e2740(void) {
  FTRACE(0x100e2740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2740 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100e2744 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e2748 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e274c push eax */
  push32((uint32_t)(EAX));
  /* 100e274d push ecx */
  push32((uint32_t)(ECX));
  /* 100e274e push edx */
  push32((uint32_t)(EDX));
  /* 100e274f call dword ptr [0x100f5fa0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f5fa0))), 0x100e2755u);
  /* 100e2755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2758 ret  */
  ESPCHK(0x100e2740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x100e2760 (13 bytes, 5 insns) */
void f_100e2760(void) {
  FTRACE(0x100e2760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2760 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e2764 push eax */
  push32((uint32_t)(EAX));
  /* 100e2765 call dword ptr [0x100f3910] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f3910))), 0x100e276bu);
  /* 100e276b pop ecx */
  ECX = (pop32());
  /* 100e276c ret  */
  ESPCHK(0x100e2760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x100e2770 (6 bytes, 1 insns) */
void f_100e2770(void) {
  FTRACE(0x100e2770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2770 jmp dword ptr [0x100f6228] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100f6228)))); return;
}

/* FUN_10002780 @ 0x100e2780 (6 bytes, 1 insns) */
void f_100e2780(void) {
  FTRACE(0x100e2780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2780 jmp dword ptr [0x100f3928] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100f3928)))); return;
}

/* FUN_10002790 @ 0x100e2790 (82 bytes, 28 insns) */
void f_100e2790(void) {
  FTRACE(0x100e2790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2790 mov eax, dword ptr [0x100f63c0] */
  EAX = (r32((uint32_t)(0x100f63c0)));
  /* 100e2795 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e279b push esi */
  push32((uint32_t)(ESI));
  /* 100e279c push edi */
  push32((uint32_t)(EDI));
  /* 100e279d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 100e27a4 push edi */
  push32((uint32_t)(EDI));
  /* 100e27a5 push eax */
  push32((uint32_t)(EAX));
  /* 100e27a6 call dword ptr [0x100ee088] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee088))), 0x100e27acu);
  /* 100e27ac mov esi, eax */
  ESI = (EAX);
  /* 100e27ae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e27b0 jne 0x100e27d7 */
  if (!C.zf) goto L_100e27d7;
  /* 100e27b2 push edi */
  push32((uint32_t)(EDI));
  /* 100e27b3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 100e27b7 push 0x100efef0 */
  push32((uint32_t)(0x100efef0u));
  /* 100e27bc push ecx */
  push32((uint32_t)(ECX));
  /* 100e27bd call 0x100e6e70 */
  push32(0x100e27c2u); f_100e6e70();
  /* 100e27c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e27c5 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 100e27c9 push esi */
  push32((uint32_t)(ESI));
  /* 100e27ca push 0x100efee0 */
  push32((uint32_t)(0x100efee0u));
  /* 100e27cf push edx */
  push32((uint32_t)(EDX));
  /* 100e27d0 push esi */
  push32((uint32_t)(ESI));
  /* 100e27d1 call dword ptr [0x100ee0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0dc))), 0x100e27d7u);
L_100e27d7:;
  /* 100e27d7 mov eax, esi */
  EAX = (ESI);
  /* 100e27d9 pop edi */
  EDI = (pop32());
  /* 100e27da pop esi */
  ESI = (pop32());
  /* 100e27db add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e27e1 ret  */
  ESPCHK(0x100e2790u, _esp0);
  ESP += 4; return;
}

/* FUN_100027f0 @ 0x100e27f0 (1844 bytes, 376 insns) */
void f_100e27f0(void) {
  FTRACE(0x100e27f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e27f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e27f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e27f5 jne 0x100e2f1c */
  if (!C.zf) goto L_100e2f1c;
  /* 100e27fb push 0x100f0644 */
  push32((uint32_t)(0x100f0644u));
  /* 100e2800 call dword ptr [0x100ee004] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee004))), 0x100e2806u);
  /* 100e2806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e2808 mov dword ptr [0x100f63c0], eax */
  w32((uint32_t)(0x100f63c0), (EAX));
  /* 100e280d jne 0x100e2829 */
  if (!C.zf) goto L_100e2829;
  /* 100e280f push eax */
  push32((uint32_t)(EAX));
  /* 100e2810 push 0x100f063c */
  push32((uint32_t)(0x100f063cu));
  /* 100e2815 push 0x100f0624 */
  push32((uint32_t)(0x100f0624u));
  /* 100e281a push eax */
  push32((uint32_t)(EAX));
  /* 100e281b call dword ptr [0x100ee0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0dc))), 0x100e2821u);
  /* 100e2821 mov eax, 1 */
  EAX = (0x1u);
  /* 100e2826 ret 0xc */
  ESPCHK(0x100e27f0u, _esp0);
  ESP += 16; return;
L_100e2829:;
  /* 100e2829 push 0x100f0614 */
  push32((uint32_t)(0x100f0614u));
  /* 100e282e call 0x100e2790 */
  push32(0x100e2833u); f_100e2790();
  /* 100e2833 push 0x100f0604 */
  push32((uint32_t)(0x100f0604u));
  /* 100e2838 mov dword ptr [0x100f63c4], eax */
  w32((uint32_t)(0x100f63c4), (EAX));
  /* 100e283d call 0x100e2790 */
  push32(0x100e2842u); f_100e2790();
  /* 100e2842 push 0x100f05f4 */
  push32((uint32_t)(0x100f05f4u));
  /* 100e2847 mov dword ptr [0x100f63c8], eax */
  w32((uint32_t)(0x100f63c8), (EAX));
  /* 100e284c call 0x100e2790 */
  push32(0x100e2851u); f_100e2790();
  /* 100e2851 push 0x100f05e8 */
  push32((uint32_t)(0x100f05e8u));
  /* 100e2856 mov dword ptr [0x100f63cc], eax */
  w32((uint32_t)(0x100f63cc), (EAX));
  /* 100e285b call 0x100e2790 */
  push32(0x100e2860u); f_100e2790();
  /* 100e2860 push 0x100f05d8 */
  push32((uint32_t)(0x100f05d8u));
  /* 100e2865 mov dword ptr [0x100f63d0], eax */
  w32((uint32_t)(0x100f63d0), (EAX));
  /* 100e286a call 0x100e2790 */
  push32(0x100e286fu); f_100e2790();
  /* 100e286f push 0x100f05c4 */
  push32((uint32_t)(0x100f05c4u));
  /* 100e2874 mov dword ptr [0x100f63d4], eax */
  w32((uint32_t)(0x100f63d4), (EAX));
  /* 100e2879 call 0x100e2790 */
  push32(0x100e287eu); f_100e2790();
  /* 100e287e push 0x100f05b4 */
  push32((uint32_t)(0x100f05b4u));
  /* 100e2883 mov dword ptr [0x100f63d8], eax */
  w32((uint32_t)(0x100f63d8), (EAX));
  /* 100e2888 call 0x100e2790 */
  push32(0x100e288du); f_100e2790();
  /* 100e288d push 0x100f05a4 */
  push32((uint32_t)(0x100f05a4u));
  /* 100e2892 mov dword ptr [0x100f63dc], eax */
  w32((uint32_t)(0x100f63dc), (EAX));
  /* 100e2897 call 0x100e2790 */
  push32(0x100e289cu); f_100e2790();
  /* 100e289c push 0x100f0590 */
  push32((uint32_t)(0x100f0590u));
  /* 100e28a1 mov dword ptr [0x100f63e0], eax */
  w32((uint32_t)(0x100f63e0), (EAX));
  /* 100e28a6 call 0x100e2790 */
  push32(0x100e28abu); f_100e2790();
  /* 100e28ab push 0x100f057c */
  push32((uint32_t)(0x100f057cu));
  /* 100e28b0 mov dword ptr [0x100f63e4], eax */
  w32((uint32_t)(0x100f63e4), (EAX));
  /* 100e28b5 call 0x100e2790 */
  push32(0x100e28bau); f_100e2790();
  /* 100e28ba push 0x100f056c */
  push32((uint32_t)(0x100f056cu));
  /* 100e28bf mov dword ptr [0x100f63e8], eax */
  w32((uint32_t)(0x100f63e8), (EAX));
  /* 100e28c4 call 0x100e2790 */
  push32(0x100e28c9u); f_100e2790();
  /* 100e28c9 push 0x100f055c */
  push32((uint32_t)(0x100f055cu));
  /* 100e28ce mov dword ptr [0x100f63ec], eax */
  w32((uint32_t)(0x100f63ec), (EAX));
  /* 100e28d3 call 0x100e2790 */
  push32(0x100e28d8u); f_100e2790();
  /* 100e28d8 push 0x100f054c */
  push32((uint32_t)(0x100f054cu));
  /* 100e28dd mov dword ptr [0x100f63f0], eax */
  w32((uint32_t)(0x100f63f0), (EAX));
  /* 100e28e2 call 0x100e2790 */
  push32(0x100e28e7u); f_100e2790();
  /* 100e28e7 push 0x100f053c */
  push32((uint32_t)(0x100f053cu));
  /* 100e28ec mov dword ptr [0x100f63f4], eax */
  w32((uint32_t)(0x100f63f4), (EAX));
  /* 100e28f1 call 0x100e2790 */
  push32(0x100e28f6u); f_100e2790();
  /* 100e28f6 push 0x100f052c */
  push32((uint32_t)(0x100f052cu));
  /* 100e28fb mov dword ptr [0x100f63f8], eax */
  w32((uint32_t)(0x100f63f8), (EAX));
  /* 100e2900 call 0x100e2790 */
  push32(0x100e2905u); f_100e2790();
  /* 100e2905 push 0x100f051c */
  push32((uint32_t)(0x100f051cu));
  /* 100e290a mov dword ptr [0x100f63fc], eax */
  w32((uint32_t)(0x100f63fc), (EAX));
  /* 100e290f call 0x100e2790 */
  push32(0x100e2914u); f_100e2790();
  /* 100e2914 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2917 mov dword ptr [0x100f6400], eax */
  w32((uint32_t)(0x100f6400), (EAX));
  /* 100e291c push 0x100f050c */
  push32((uint32_t)(0x100f050cu));
  /* 100e2921 call 0x100e2790 */
  push32(0x100e2926u); f_100e2790();
  /* 100e2926 push 0x100f04fc */
  push32((uint32_t)(0x100f04fcu));
  /* 100e292b mov dword ptr [0x100f6404], eax */
  w32((uint32_t)(0x100f6404), (EAX));
  /* 100e2930 call 0x100e2790 */
  push32(0x100e2935u); f_100e2790();
  /* 100e2935 push 0x100f04e8 */
  push32((uint32_t)(0x100f04e8u));
  /* 100e293a mov dword ptr [0x100f6408], eax */
  w32((uint32_t)(0x100f6408), (EAX));
  /* 100e293f call 0x100e2790 */
  push32(0x100e2944u); f_100e2790();
  /* 100e2944 push 0x100f04e0 */
  push32((uint32_t)(0x100f04e0u));
  /* 100e2949 mov dword ptr [0x100f640c], eax */
  w32((uint32_t)(0x100f640c), (EAX));
  /* 100e294e call 0x100e2790 */
  push32(0x100e2953u); f_100e2790();
  /* 100e2953 push 0x100f04d0 */
  push32((uint32_t)(0x100f04d0u));
  /* 100e2958 mov dword ptr [0x100f6410], eax */
  w32((uint32_t)(0x100f6410), (EAX));
  /* 100e295d call 0x100e2790 */
  push32(0x100e2962u); f_100e2790();
  /* 100e2962 push 0x100f04c0 */
  push32((uint32_t)(0x100f04c0u));
  /* 100e2967 mov dword ptr [0x100f6414], eax */
  w32((uint32_t)(0x100f6414), (EAX));
  /* 100e296c call 0x100e2790 */
  push32(0x100e2971u); f_100e2790();
  /* 100e2971 push 0x100f04b4 */
  push32((uint32_t)(0x100f04b4u));
  /* 100e2976 mov dword ptr [0x100f6418], eax */
  w32((uint32_t)(0x100f6418), (EAX));
  /* 100e297b call 0x100e2790 */
  push32(0x100e2980u); f_100e2790();
  /* 100e2980 push 0x100f04a4 */
  push32((uint32_t)(0x100f04a4u));
  /* 100e2985 mov dword ptr [0x100f641c], eax */
  w32((uint32_t)(0x100f641c), (EAX));
  /* 100e298a call 0x100e2790 */
  push32(0x100e298fu); f_100e2790();
  /* 100e298f push 0x100f049c */
  push32((uint32_t)(0x100f049cu));
  /* 100e2994 mov dword ptr [0x100f6420], eax */
  w32((uint32_t)(0x100f6420), (EAX));
  /* 100e2999 call 0x100e2790 */
  push32(0x100e299eu); f_100e2790();
  /* 100e299e push 0x100f048c */
  push32((uint32_t)(0x100f048cu));
  /* 100e29a3 mov dword ptr [0x100f6438], eax */
  w32((uint32_t)(0x100f6438), (EAX));
  /* 100e29a8 call 0x100e2790 */
  push32(0x100e29adu); f_100e2790();
  /* 100e29ad push 0x100f047c */
  push32((uint32_t)(0x100f047cu));
  /* 100e29b2 mov dword ptr [0x100f643c], eax */
  w32((uint32_t)(0x100f643c), (EAX));
  /* 100e29b7 call 0x100e2790 */
  push32(0x100e29bcu); f_100e2790();
  /* 100e29bc push 0x100f0470 */
  push32((uint32_t)(0x100f0470u));
  /* 100e29c1 mov dword ptr [0x100f6440], eax */
  w32((uint32_t)(0x100f6440), (EAX));
  /* 100e29c6 call 0x100e2790 */
  push32(0x100e29cbu); f_100e2790();
  /* 100e29cb push 0x100f0460 */
  push32((uint32_t)(0x100f0460u));
  /* 100e29d0 mov dword ptr [0x100f6444], eax */
  w32((uint32_t)(0x100f6444), (EAX));
  /* 100e29d5 call 0x100e2790 */
  push32(0x100e29dau); f_100e2790();
  /* 100e29da push 0x100f0454 */
  push32((uint32_t)(0x100f0454u));
  /* 100e29df mov dword ptr [0x100f6448], eax */
  w32((uint32_t)(0x100f6448), (EAX));
  /* 100e29e4 call 0x100e2790 */
  push32(0x100e29e9u); f_100e2790();
  /* 100e29e9 push 0x100f0444 */
  push32((uint32_t)(0x100f0444u));
  /* 100e29ee mov dword ptr [0x100f6464], eax */
  w32((uint32_t)(0x100f6464), (EAX));
  /* 100e29f3 call 0x100e2790 */
  push32(0x100e29f8u); f_100e2790();
  /* 100e29f8 push 0x100f043c */
  push32((uint32_t)(0x100f043cu));
  /* 100e29fd mov dword ptr [0x100f644c], eax */
  w32((uint32_t)(0x100f644c), (EAX));
  /* 100e2a02 call 0x100e2790 */
  push32(0x100e2a07u); f_100e2790();
  /* 100e2a07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2a0a mov dword ptr [0x100f6450], eax */
  w32((uint32_t)(0x100f6450), (EAX));
  /* 100e2a0f push 0x100f042c */
  push32((uint32_t)(0x100f042cu));
  /* 100e2a14 call 0x100e2790 */
  push32(0x100e2a19u); f_100e2790();
  /* 100e2a19 push 0x100f041c */
  push32((uint32_t)(0x100f041cu));
  /* 100e2a1e mov dword ptr [0x100f6454], eax */
  w32((uint32_t)(0x100f6454), (EAX));
  /* 100e2a23 call 0x100e2790 */
  push32(0x100e2a28u); f_100e2790();
  /* 100e2a28 push 0x100f040c */
  push32((uint32_t)(0x100f040cu));
  /* 100e2a2d mov dword ptr [0x100f6458], eax */
  w32((uint32_t)(0x100f6458), (EAX));
  /* 100e2a32 call 0x100e2790 */
  push32(0x100e2a37u); f_100e2790();
  /* 100e2a37 push 0x100f0400 */
  push32((uint32_t)(0x100f0400u));
  /* 100e2a3c mov dword ptr [0x100f645c], eax */
  w32((uint32_t)(0x100f645c), (EAX));
  /* 100e2a41 call 0x100e2790 */
  push32(0x100e2a46u); f_100e2790();
  /* 100e2a46 push 0x100f03f8 */
  push32((uint32_t)(0x100f03f8u));
  /* 100e2a4b mov dword ptr [0x100f6460], eax */
  w32((uint32_t)(0x100f6460), (EAX));
  /* 100e2a50 call 0x100e2790 */
  push32(0x100e2a55u); f_100e2790();
  /* 100e2a55 push 0x100f03e8 */
  push32((uint32_t)(0x100f03e8u));
  /* 100e2a5a mov dword ptr [0x100f6468], eax */
  w32((uint32_t)(0x100f6468), (EAX));
  /* 100e2a5f call 0x100e2790 */
  push32(0x100e2a64u); f_100e2790();
  /* 100e2a64 push 0x100f03d8 */
  push32((uint32_t)(0x100f03d8u));
  /* 100e2a69 mov dword ptr [0x100f646c], eax */
  w32((uint32_t)(0x100f646c), (EAX));
  /* 100e2a6e call 0x100e2790 */
  push32(0x100e2a73u); f_100e2790();
  /* 100e2a73 push 0x100f03c8 */
  push32((uint32_t)(0x100f03c8u));
  /* 100e2a78 mov dword ptr [0x100f6470], eax */
  w32((uint32_t)(0x100f6470), (EAX));
  /* 100e2a7d call 0x100e2790 */
  push32(0x100e2a82u); f_100e2790();
  /* 100e2a82 push 0x100f03b8 */
  push32((uint32_t)(0x100f03b8u));
  /* 100e2a87 mov dword ptr [0x100f6474], eax */
  w32((uint32_t)(0x100f6474), (EAX));
  /* 100e2a8c call 0x100e2790 */
  push32(0x100e2a91u); f_100e2790();
  /* 100e2a91 push 0x100f03ac */
  push32((uint32_t)(0x100f03acu));
  /* 100e2a96 mov dword ptr [0x100f6478], eax */
  w32((uint32_t)(0x100f6478), (EAX));
  /* 100e2a9b call 0x100e2790 */
  push32(0x100e2aa0u); f_100e2790();
  /* 100e2aa0 push 0x100f03a0 */
  push32((uint32_t)(0x100f03a0u));
  /* 100e2aa5 mov dword ptr [0x100f647c], eax */
  w32((uint32_t)(0x100f647c), (EAX));
  /* 100e2aaa call 0x100e2790 */
  push32(0x100e2aafu); f_100e2790();
  /* 100e2aaf push 0x100f0390 */
  push32((uint32_t)(0x100f0390u));
  /* 100e2ab4 mov dword ptr [0x100f6480], eax */
  w32((uint32_t)(0x100f6480), (EAX));
  /* 100e2ab9 call 0x100e2790 */
  push32(0x100e2abeu); f_100e2790();
  /* 100e2abe push 0x100f0384 */
  push32((uint32_t)(0x100f0384u));
  /* 100e2ac3 mov dword ptr [0x100f6484], eax */
  w32((uint32_t)(0x100f6484), (EAX));
  /* 100e2ac8 call 0x100e2790 */
  push32(0x100e2acdu); f_100e2790();
  /* 100e2acd push 0x100f0378 */
  push32((uint32_t)(0x100f0378u));
  /* 100e2ad2 mov dword ptr [0x100f6488], eax */
  w32((uint32_t)(0x100f6488), (EAX));
  /* 100e2ad7 call 0x100e2790 */
  push32(0x100e2adcu); f_100e2790();
  /* 100e2adc push 0x100f036c */
  push32((uint32_t)(0x100f036cu));
  /* 100e2ae1 mov dword ptr [0x100f648c], eax */
  w32((uint32_t)(0x100f648c), (EAX));
  /* 100e2ae6 call 0x100e2790 */
  push32(0x100e2aebu); f_100e2790();
  /* 100e2aeb push 0x100f0360 */
  push32((uint32_t)(0x100f0360u));
  /* 100e2af0 mov dword ptr [0x100f61c0], eax */
  w32((uint32_t)(0x100f61c0), (EAX));
  /* 100e2af5 call 0x100e2790 */
  push32(0x100e2afau); f_100e2790();
  /* 100e2afa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2afd mov dword ptr [0x100f6490], eax */
  w32((uint32_t)(0x100f6490), (EAX));
  /* 100e2b02 push 0x100f0354 */
  push32((uint32_t)(0x100f0354u));
  /* 100e2b07 call 0x100e2790 */
  push32(0x100e2b0cu); f_100e2790();
  /* 100e2b0c push 0x100f0348 */
  push32((uint32_t)(0x100f0348u));
  /* 100e2b11 mov dword ptr [0x100f6494], eax */
  w32((uint32_t)(0x100f6494), (EAX));
  /* 100e2b16 call 0x100e2790 */
  push32(0x100e2b1bu); f_100e2790();
  /* 100e2b1b push 0x100f0338 */
  push32((uint32_t)(0x100f0338u));
  /* 100e2b20 mov dword ptr [0x100f6498], eax */
  w32((uint32_t)(0x100f6498), (EAX));
  /* 100e2b25 call 0x100e2790 */
  push32(0x100e2b2au); f_100e2790();
  /* 100e2b2a push 0x100f032c */
  push32((uint32_t)(0x100f032cu));
  /* 100e2b2f mov dword ptr [0x100f649c], eax */
  w32((uint32_t)(0x100f649c), (EAX));
  /* 100e2b34 call 0x100e2790 */
  push32(0x100e2b39u); f_100e2790();
  /* 100e2b39 push 0x100f0320 */
  push32((uint32_t)(0x100f0320u));
  /* 100e2b3e mov dword ptr [0x100f64a0], eax */
  w32((uint32_t)(0x100f64a0), (EAX));
  /* 100e2b43 call 0x100e2790 */
  push32(0x100e2b48u); f_100e2790();
  /* 100e2b48 mov dword ptr [0x100f64a4], eax */
  w32((uint32_t)(0x100f64a4), (EAX));
  /* 100e2b4d push 0x100f0310 */
  push32((uint32_t)(0x100f0310u));
  /* 100e2b52 call 0x100e2790 */
  push32(0x100e2b57u); f_100e2790();
  /* 100e2b57 push 0x100f0300 */
  push32((uint32_t)(0x100f0300u));
  /* 100e2b5c mov dword ptr [0x100f64a8], eax */
  w32((uint32_t)(0x100f64a8), (EAX));
  /* 100e2b61 call 0x100e2790 */
  push32(0x100e2b66u); f_100e2790();
  /* 100e2b66 push 0x100f02f4 */
  push32((uint32_t)(0x100f02f4u));
  /* 100e2b6b mov dword ptr [0x100f64ac], eax */
  w32((uint32_t)(0x100f64ac), (EAX));
  /* 100e2b70 call 0x100e2790 */
  push32(0x100e2b75u); f_100e2790();
  /* 100e2b75 push 0x100f02ec */
  push32((uint32_t)(0x100f02ecu));
  /* 100e2b7a mov dword ptr [0x100f64b0], eax */
  w32((uint32_t)(0x100f64b0), (EAX));
  /* 100e2b7f call 0x100e2790 */
  push32(0x100e2b84u); f_100e2790();
  /* 100e2b84 push 0x100f02dc */
  push32((uint32_t)(0x100f02dcu));
  /* 100e2b89 mov dword ptr [0x100f64b4], eax */
  w32((uint32_t)(0x100f64b4), (EAX));
  /* 100e2b8e call 0x100e2790 */
  push32(0x100e2b93u); f_100e2790();
  /* 100e2b93 push 0x100f02d4 */
  push32((uint32_t)(0x100f02d4u));
  /* 100e2b98 mov dword ptr [0x100f64b8], eax */
  w32((uint32_t)(0x100f64b8), (EAX));
  /* 100e2b9d call 0x100e2790 */
  push32(0x100e2ba2u); f_100e2790();
  /* 100e2ba2 push 0x100f02c8 */
  push32((uint32_t)(0x100f02c8u));
  /* 100e2ba7 mov dword ptr [0x100f64bc], eax */
  w32((uint32_t)(0x100f64bc), (EAX));
  /* 100e2bac call 0x100e2790 */
  push32(0x100e2bb1u); f_100e2790();
  /* 100e2bb1 push 0x100f02c0 */
  push32((uint32_t)(0x100f02c0u));
  /* 100e2bb6 mov dword ptr [0x100f64c0], eax */
  w32((uint32_t)(0x100f64c0), (EAX));
  /* 100e2bbb call 0x100e2790 */
  push32(0x100e2bc0u); f_100e2790();
  /* 100e2bc0 push 0x100f02ac */
  push32((uint32_t)(0x100f02acu));
  /* 100e2bc5 mov dword ptr [0x100f64c4], eax */
  w32((uint32_t)(0x100f64c4), (EAX));
  /* 100e2bca call 0x100e2790 */
  push32(0x100e2bcfu); f_100e2790();
  /* 100e2bcf push 0x100f02a0 */
  push32((uint32_t)(0x100f02a0u));
  /* 100e2bd4 mov dword ptr [0x100f3618], eax */
  w32((uint32_t)(0x100f3618), (EAX));
  /* 100e2bd9 call 0x100e2790 */
  push32(0x100e2bdeu); f_100e2790();
  /* 100e2bde push 0x100f0294 */
  push32((uint32_t)(0x100f0294u));
  /* 100e2be3 mov dword ptr [0x100f64d0], eax */
  w32((uint32_t)(0x100f64d0), (EAX));
  /* 100e2be8 call 0x100e2790 */
  push32(0x100e2bedu); f_100e2790();
  /* 100e2bed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2bf0 mov dword ptr [0x100f64cc], eax */
  w32((uint32_t)(0x100f64cc), (EAX));
  /* 100e2bf5 push 0x100f0280 */
  push32((uint32_t)(0x100f0280u));
  /* 100e2bfa call 0x100e2790 */
  push32(0x100e2bffu); f_100e2790();
  /* 100e2bff push 0x100f0270 */
  push32((uint32_t)(0x100f0270u));
  /* 100e2c04 mov dword ptr [0x100f64d4], eax */
  w32((uint32_t)(0x100f64d4), (EAX));
  /* 100e2c09 call 0x100e2790 */
  push32(0x100e2c0eu); f_100e2790();
  /* 100e2c0e push 0x100f0260 */
  push32((uint32_t)(0x100f0260u));
  /* 100e2c13 mov dword ptr [0x100f64d8], eax */
  w32((uint32_t)(0x100f64d8), (EAX));
  /* 100e2c18 call 0x100e2790 */
  push32(0x100e2c1du); f_100e2790();
  /* 100e2c1d push 0x100f0250 */
  push32((uint32_t)(0x100f0250u));
  /* 100e2c22 mov dword ptr [0x100f64dc], eax */
  w32((uint32_t)(0x100f64dc), (EAX));
  /* 100e2c27 call 0x100e2790 */
  push32(0x100e2c2cu); f_100e2790();
  /* 100e2c2c push 0x100f0244 */
  push32((uint32_t)(0x100f0244u));
  /* 100e2c31 mov dword ptr [0x100f6428], eax */
  w32((uint32_t)(0x100f6428), (EAX));
  /* 100e2c36 call 0x100e2790 */
  push32(0x100e2c3bu); f_100e2790();
  /* 100e2c3b push 0x100f0234 */
  push32((uint32_t)(0x100f0234u));
  /* 100e2c40 mov dword ptr [0x100f6424], eax */
  w32((uint32_t)(0x100f6424), (EAX));
  /* 100e2c45 call 0x100e2790 */
  push32(0x100e2c4au); f_100e2790();
  /* 100e2c4a push 0x100f0220 */
  push32((uint32_t)(0x100f0220u));
  /* 100e2c4f mov dword ptr [0x100f642c], eax */
  w32((uint32_t)(0x100f642c), (EAX));
  /* 100e2c54 call 0x100e2790 */
  push32(0x100e2c59u); f_100e2790();
  /* 100e2c59 push 0x100f0208 */
  push32((uint32_t)(0x100f0208u));
  /* 100e2c5e mov dword ptr [0x100f6430], eax */
  w32((uint32_t)(0x100f6430), (EAX));
  /* 100e2c63 call 0x100e2790 */
  push32(0x100e2c68u); f_100e2790();
  /* 100e2c68 push 0x100f01f8 */
  push32((uint32_t)(0x100f01f8u));
  /* 100e2c6d mov dword ptr [0x100f6434], eax */
  w32((uint32_t)(0x100f6434), (EAX));
  /* 100e2c72 call 0x100e2790 */
  push32(0x100e2c77u); f_100e2790();
  /* 100e2c77 push 0x100f01e0 */
  push32((uint32_t)(0x100f01e0u));
  /* 100e2c7c mov dword ptr [0x100f64f8], eax */
  w32((uint32_t)(0x100f64f8), (EAX));
  /* 100e2c81 call 0x100e2790 */
  push32(0x100e2c86u); f_100e2790();
  /* 100e2c86 push 0x100f01d0 */
  push32((uint32_t)(0x100f01d0u));
  /* 100e2c8b mov dword ptr [0x100f6528], eax */
  w32((uint32_t)(0x100f6528), (EAX));
  /* 100e2c90 call 0x100e2790 */
  push32(0x100e2c95u); f_100e2790();
  /* 100e2c95 push 0x100f01c8 */
  push32((uint32_t)(0x100f01c8u));
  /* 100e2c9a mov dword ptr [0x100f64f0], eax */
  w32((uint32_t)(0x100f64f0), (EAX));
  /* 100e2c9f call 0x100e2790 */
  push32(0x100e2ca4u); f_100e2790();
  /* 100e2ca4 push 0x100f01b8 */
  push32((uint32_t)(0x100f01b8u));
  /* 100e2ca9 mov dword ptr [0x100f64fc], eax */
  w32((uint32_t)(0x100f64fc), (EAX));
  /* 100e2cae call 0x100e2790 */
  push32(0x100e2cb3u); f_100e2790();
  /* 100e2cb3 push 0x100f01ac */
  push32((uint32_t)(0x100f01acu));
  /* 100e2cb8 mov dword ptr [0x100f6548], eax */
  w32((uint32_t)(0x100f6548), (EAX));
  /* 100e2cbd call 0x100e2790 */
  push32(0x100e2cc2u); f_100e2790();
  /* 100e2cc2 push 0x100f01a4 */
  push32((uint32_t)(0x100f01a4u));
  /* 100e2cc7 mov dword ptr [0x100f64e0], eax */
  w32((uint32_t)(0x100f64e0), (EAX));
  /* 100e2ccc call 0x100e2790 */
  push32(0x100e2cd1u); f_100e2790();
  /* 100e2cd1 push 0x100f0198 */
  push32((uint32_t)(0x100f0198u));
  /* 100e2cd6 mov dword ptr [0x100f64e4], eax */
  w32((uint32_t)(0x100f64e4), (EAX));
  /* 100e2cdb call 0x100e2790 */
  push32(0x100e2ce0u); f_100e2790();
  /* 100e2ce0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2ce3 mov dword ptr [0x100f64e8], eax */
  w32((uint32_t)(0x100f64e8), (EAX));
  /* 100e2ce8 push 0x100f0188 */
  push32((uint32_t)(0x100f0188u));
  /* 100e2ced call 0x100e2790 */
  push32(0x100e2cf2u); f_100e2790();
  /* 100e2cf2 push 0x100f0174 */
  push32((uint32_t)(0x100f0174u));
  /* 100e2cf7 mov dword ptr [0x100f64ec], eax */
  w32((uint32_t)(0x100f64ec), (EAX));
  /* 100e2cfc call 0x100e2790 */
  push32(0x100e2d01u); f_100e2790();
  /* 100e2d01 push 0x100f0158 */
  push32((uint32_t)(0x100f0158u));
  /* 100e2d06 mov dword ptr [0x100f64f4], eax */
  w32((uint32_t)(0x100f64f4), (EAX));
  /* 100e2d0b call 0x100e2790 */
  push32(0x100e2d10u); f_100e2790();
  /* 100e2d10 push 0x100f0144 */
  push32((uint32_t)(0x100f0144u));
  /* 100e2d15 mov dword ptr [0x100f6500], eax */
  w32((uint32_t)(0x100f6500), (EAX));
  /* 100e2d1a call 0x100e2790 */
  push32(0x100e2d1fu); f_100e2790();
  /* 100e2d1f push 0x100f0138 */
  push32((uint32_t)(0x100f0138u));
  /* 100e2d24 mov dword ptr [0x100f6504], eax */
  w32((uint32_t)(0x100f6504), (EAX));
  /* 100e2d29 call 0x100e2790 */
  push32(0x100e2d2eu); f_100e2790();
  /* 100e2d2e push 0x100f0128 */
  push32((uint32_t)(0x100f0128u));
  /* 100e2d33 mov dword ptr [0x100f653c], eax */
  w32((uint32_t)(0x100f653c), (EAX));
  /* 100e2d38 call 0x100e2790 */
  push32(0x100e2d3du); f_100e2790();
  /* 100e2d3d push 0x100f011c */
  push32((uint32_t)(0x100f011cu));
  /* 100e2d42 mov dword ptr [0x100f6540], eax */
  w32((uint32_t)(0x100f6540), (EAX));
  /* 100e2d47 call 0x100e2790 */
  push32(0x100e2d4cu); f_100e2790();
  /* 100e2d4c push 0x100f0110 */
  push32((uint32_t)(0x100f0110u));
  /* 100e2d51 mov dword ptr [0x100f6544], eax */
  w32((uint32_t)(0x100f6544), (EAX));
  /* 100e2d56 call 0x100e2790 */
  push32(0x100e2d5bu); f_100e2790();
  /* 100e2d5b push 0x100f00f8 */
  push32((uint32_t)(0x100f00f8u));
  /* 100e2d60 mov dword ptr [0x100f654c], eax */
  w32((uint32_t)(0x100f654c), (EAX));
  /* 100e2d65 call 0x100e2790 */
  push32(0x100e2d6au); f_100e2790();
  /* 100e2d6a push 0x100f00dc */
  push32((uint32_t)(0x100f00dcu));
  /* 100e2d6f mov dword ptr [0x100f6508], eax */
  w32((uint32_t)(0x100f6508), (EAX));
  /* 100e2d74 call 0x100e2790 */
  push32(0x100e2d79u); f_100e2790();
  /* 100e2d79 push 0x100f00c0 */
  push32((uint32_t)(0x100f00c0u));
  /* 100e2d7e mov dword ptr [0x100f650c], eax */
  w32((uint32_t)(0x100f650c), (EAX));
  /* 100e2d83 call 0x100e2790 */
  push32(0x100e2d88u); f_100e2790();
  /* 100e2d88 push 0x100f00a8 */
  push32((uint32_t)(0x100f00a8u));
  /* 100e2d8d mov dword ptr [0x100f6510], eax */
  w32((uint32_t)(0x100f6510), (EAX));
  /* 100e2d92 call 0x100e2790 */
  push32(0x100e2d97u); f_100e2790();
  /* 100e2d97 push 0x100f0090 */
  push32((uint32_t)(0x100f0090u));
  /* 100e2d9c mov dword ptr [0x100f6514], eax */
  w32((uint32_t)(0x100f6514), (EAX));
  /* 100e2da1 call 0x100e2790 */
  push32(0x100e2da6u); f_100e2790();
  /* 100e2da6 push 0x100f0084 */
  push32((uint32_t)(0x100f0084u));
  /* 100e2dab mov dword ptr [0x100f6518], eax */
  w32((uint32_t)(0x100f6518), (EAX));
  /* 100e2db0 call 0x100e2790 */
  push32(0x100e2db5u); f_100e2790();
  /* 100e2db5 push 0x100f0078 */
  push32((uint32_t)(0x100f0078u));
  /* 100e2dba mov dword ptr [0x100f651c], eax */
  w32((uint32_t)(0x100f651c), (EAX));
  /* 100e2dbf call 0x100e2790 */
  push32(0x100e2dc4u); f_100e2790();
  /* 100e2dc4 push 0x100f0068 */
  push32((uint32_t)(0x100f0068u));
  /* 100e2dc9 mov dword ptr [0x100f6520], eax */
  w32((uint32_t)(0x100f6520), (EAX));
  /* 100e2dce call 0x100e2790 */
  push32(0x100e2dd3u); f_100e2790();
  /* 100e2dd3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2dd6 mov dword ptr [0x100f6524], eax */
  w32((uint32_t)(0x100f6524), (EAX));
  /* 100e2ddb push 0x100f005c */
  push32((uint32_t)(0x100f005cu));
  /* 100e2de0 call 0x100e2790 */
  push32(0x100e2de5u); f_100e2790();
  /* 100e2de5 push 0x100f0050 */
  push32((uint32_t)(0x100f0050u));
  /* 100e2dea mov dword ptr [0x100f652c], eax */
  w32((uint32_t)(0x100f652c), (EAX));
  /* 100e2def call 0x100e2790 */
  push32(0x100e2df4u); f_100e2790();
  /* 100e2df4 push 0x100f0044 */
  push32((uint32_t)(0x100f0044u));
  /* 100e2df9 mov dword ptr [0x100f6530], eax */
  w32((uint32_t)(0x100f6530), (EAX));
  /* 100e2dfe call 0x100e2790 */
  push32(0x100e2e03u); f_100e2790();
  /* 100e2e03 push 0x100f0034 */
  push32((uint32_t)(0x100f0034u));
  /* 100e2e08 mov dword ptr [0x100f6550], eax */
  w32((uint32_t)(0x100f6550), (EAX));
  /* 100e2e0d call 0x100e2790 */
  push32(0x100e2e12u); f_100e2790();
  /* 100e2e12 push 0x100f0028 */
  push32((uint32_t)(0x100f0028u));
  /* 100e2e17 mov dword ptr [0x100f6554], eax */
  w32((uint32_t)(0x100f6554), (EAX));
  /* 100e2e1c call 0x100e2790 */
  push32(0x100e2e21u); f_100e2790();
  /* 100e2e21 push 0x100f001c */
  push32((uint32_t)(0x100f001cu));
  /* 100e2e26 mov dword ptr [0x100f6558], eax */
  w32((uint32_t)(0x100f6558), (EAX));
  /* 100e2e2b call 0x100e2790 */
  push32(0x100e2e30u); f_100e2790();
  /* 100e2e30 push 0x100f0010 */
  push32((uint32_t)(0x100f0010u));
  /* 100e2e35 mov dword ptr [0x100f655c], eax */
  w32((uint32_t)(0x100f655c), (EAX));
  /* 100e2e3a call 0x100e2790 */
  push32(0x100e2e3fu); f_100e2790();
  /* 100e2e3f push 0x100f0000 */
  push32((uint32_t)(0x100f0000u));
  /* 100e2e44 mov dword ptr [0x100f6560], eax */
  w32((uint32_t)(0x100f6560), (EAX));
  /* 100e2e49 call 0x100e2790 */
  push32(0x100e2e4eu); f_100e2790();
  /* 100e2e4e push 0x100efff0 */
  push32((uint32_t)(0x100efff0u));
  /* 100e2e53 mov dword ptr [0x100f6564], eax */
  w32((uint32_t)(0x100f6564), (EAX));
  /* 100e2e58 call 0x100e2790 */
  push32(0x100e2e5du); f_100e2790();
  /* 100e2e5d push 0x100effdc */
  push32((uint32_t)(0x100effdcu));
  /* 100e2e62 mov dword ptr [0x100f656c], eax */
  w32((uint32_t)(0x100f656c), (EAX));
  /* 100e2e67 call 0x100e2790 */
  push32(0x100e2e6cu); f_100e2790();
  /* 100e2e6c mov dword ptr [0x100f6568], eax */
  w32((uint32_t)(0x100f6568), (EAX));
  /* 100e2e71 push 0x100effc4 */
  push32((uint32_t)(0x100effc4u));
  /* 100e2e76 call 0x100e2790 */
  push32(0x100e2e7bu); f_100e2790();
  /* 100e2e7b push 0x100effac */
  push32((uint32_t)(0x100effacu));
  /* 100e2e80 mov dword ptr [0x100f38b0], eax */
  w32((uint32_t)(0x100f38b0), (EAX));
  /* 100e2e85 call 0x100e2790 */
  push32(0x100e2e8au); f_100e2790();
  /* 100e2e8a push 0x100eff9c */
  push32((uint32_t)(0x100eff9cu));
  /* 100e2e8f mov dword ptr [0x100f3710], eax */
  w32((uint32_t)(0x100f3710), (EAX));
  /* 100e2e94 call 0x100e2790 */
  push32(0x100e2e99u); f_100e2790();
  /* 100e2e99 push 0x100eff8c */
  push32((uint32_t)(0x100eff8cu));
  /* 100e2e9e mov dword ptr [0x100f6570], eax */
  w32((uint32_t)(0x100f6570), (EAX));
  /* 100e2ea3 call 0x100e2790 */
  push32(0x100e2ea8u); f_100e2790();
  /* 100e2ea8 push 0x100eff7c */
  push32((uint32_t)(0x100eff7cu));
  /* 100e2ead mov dword ptr [0x100f6534], eax */
  w32((uint32_t)(0x100f6534), (EAX));
  /* 100e2eb2 call 0x100e2790 */
  push32(0x100e2eb7u); f_100e2790();
  /* 100e2eb7 push 0x100eff6c */
  push32((uint32_t)(0x100eff6cu));
  /* 100e2ebc mov dword ptr [0x100f6538], eax */
  w32((uint32_t)(0x100f6538), (EAX));
  /* 100e2ec1 call 0x100e2790 */
  push32(0x100e2ec6u); f_100e2790();
  /* 100e2ec6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2ec9 mov dword ptr [0x100f6290], eax */
  w32((uint32_t)(0x100f6290), (EAX));
  /* 100e2ece push 0x100eff5c */
  push32((uint32_t)(0x100eff5cu));
  /* 100e2ed3 call 0x100e2790 */
  push32(0x100e2ed8u); f_100e2790();
  /* 100e2ed8 push 0x100eff4c */
  push32((uint32_t)(0x100eff4cu));
  /* 100e2edd mov dword ptr [0x100f6248], eax */
  w32((uint32_t)(0x100f6248), (EAX));
  /* 100e2ee2 call 0x100e2790 */
  push32(0x100e2ee7u); f_100e2790();
  /* 100e2ee7 push 0x100eff3c */
  push32((uint32_t)(0x100eff3cu));
  /* 100e2eec mov dword ptr [0x100f5fa0], eax */
  w32((uint32_t)(0x100f5fa0), (EAX));
  /* 100e2ef1 call 0x100e2790 */
  push32(0x100e2ef6u); f_100e2790();
  /* 100e2ef6 push 0x100eff2c */
  push32((uint32_t)(0x100eff2cu));
  /* 100e2efb mov dword ptr [0x100f3910], eax */
  w32((uint32_t)(0x100f3910), (EAX));
  /* 100e2f00 call 0x100e2790 */
  push32(0x100e2f05u); f_100e2790();
  /* 100e2f05 push 0x100eff18 */
  push32((uint32_t)(0x100eff18u));
  /* 100e2f0a mov dword ptr [0x100f6228], eax */
  w32((uint32_t)(0x100f6228), (EAX));
  /* 100e2f0f call 0x100e2790 */
  push32(0x100e2f14u); f_100e2790();
  /* 100e2f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2f17 mov dword ptr [0x100f3928], eax */
  w32((uint32_t)(0x100f3928), (EAX));
L_100e2f1c:;
  /* 100e2f1c mov eax, 1 */
  EAX = (0x1u);
  /* 100e2f21 ret 0xc */
  ESPCHK(0x100e27f0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f30 @ 0x100e2f30 (34 bytes, 10 insns) */
void f_100e2f30(void) {
  FTRACE(0x100e2f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2f30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e2f34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e2f38 push eax */
  push32((uint32_t)(EAX));
  /* 100e2f39 push ecx */
  push32((uint32_t)(ECX));
  /* 100e2f3a push 0x100f0650 */
  push32((uint32_t)(0x100f0650u));
  /* 100e2f3f push 0x100f3788 */
  push32((uint32_t)(0x100f3788u));
  /* 100e2f44 call 0x100e6e70 */
  push32(0x100e2f49u); f_100e6e70();
  /* 100e2f49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2f4c mov eax, 0x100f3788 */
  EAX = (0x100f3788u);
  /* 100e2f51 ret  */
  ESPCHK(0x100e2f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f60 @ 0x100e2f60 (45 bytes, 16 insns) */
void f_100e2f60(void) {
  FTRACE(0x100e2f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2f60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e2f64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e2f68 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e2f6d push eax */
  push32((uint32_t)(EAX));
  /* 100e2f6e push ecx */
  push32((uint32_t)(ECX));
  /* 100e2f6f call 0x100e2740 */
  push32(0x100e2f74u); f_100e2740();
  /* 100e2f74 mov ecx, eax */
  ECX = (EAX);
  /* 100e2f76 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 100e2f7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2f7d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100e2f80 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100e2f83 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100e2f86 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100e2f89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e2f8a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e2f8c ret  */
  ESPCHK(0x100e2f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f90 @ 0x100e2f90 (171 bytes, 77 insns) */
void f_100e2f90(void) {
  FTRACE(0x100e2f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e2f90 push ebx */
  push32((uint32_t)(EBX));
  /* 100e2f91 push ebp */
  push32((uint32_t)(EBP));
  /* 100e2f92 push esi */
  push32((uint32_t)(ESI));
  /* 100e2f93 push edi */
  push32((uint32_t)(EDI));
  /* 100e2f94 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 100e2f98 push edi */
  push32((uint32_t)(EDI));
  /* 100e2f99 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e2f9fu);
  /* 100e2f9f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 100e2fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2fa6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e2fa8 jl 0x100e2fb1 */
  if ((C.sf!=C.of)) goto L_100e2fb1;
  /* 100e2faa pop edi */
  EDI = (pop32());
  /* 100e2fab pop esi */
  ESI = (pop32());
  /* 100e2fac pop ebp */
  EBP = (pop32());
  /* 100e2fad mov al, 1 */
  AL = (0x1u);
  /* 100e2faf pop ebx */
  EBX = (pop32());
  /* 100e2fb0 ret  */
  ESPCHK(0x100e2f90u, _esp0);
  ESP += 4; return;
L_100e2fb1:;
  /* 100e2fb1 push edi */
  push32((uint32_t)(EDI));
  /* 100e2fb2 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e2fb8u);
  /* 100e2fb8 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 100e2fbc sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e2fbe push esi */
  push32((uint32_t)(ESI));
  /* 100e2fbf push edi */
  push32((uint32_t)(EDI));
  /* 100e2fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 100e2fc1 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 100e2fc5 call 0x100e2f60 */
  push32(0x100e2fcau); f_100e2f60();
  /* 100e2fca push ebp */
  push32((uint32_t)(EBP));
  /* 100e2fcb mov ebx, eax */
  EBX = (EAX);
  /* 100e2fcd call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e2fd3u);
  /* 100e2fd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2fd6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e2fd8 jle 0x100e3034 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3034;
  /* 100e2fda cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e2fe0 jle 0x100e3034 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3034;
  /* 100e2fe2 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 100e2fe7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100e2fe9 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100e2feb sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 100e2fee mov eax, edx */
  EAX = (EDX);
  /* 100e2ff0 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100e2ff3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e2ff5 mov ebx, edx */
  EBX = (EDX);
L_100e2ff7:;
  /* 100e2ff7 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e2ffa mov eax, 0xf */
  EAX = (0xfu);
  /* 100e2fff jg 0x100e3003 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e3003;
  /* 100e3001 mov eax, ebx */
  EAX = (EBX);
L_100e3003:;
  /* 100e3003 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3005 jge 0x100e3016 */
  if ((C.sf==C.of)) goto L_100e3016;
  /* 100e3007 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e3009 push ebp */
  push32((uint32_t)(EBP));
  /* 100e300a push edi */
  push32((uint32_t)(EDI));
  /* 100e300b call 0x100e2610 */
  push32(0x100e3010u); f_100e2610();
  /* 100e3010 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3013 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100e3014 jmp 0x100e2ff7 */
  goto L_100e2ff7;
L_100e3016:;
  /* 100e3016 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 100e301a push ecx */
  push32((uint32_t)(ECX));
  /* 100e301b push edi */
  push32((uint32_t)(EDI));
  /* 100e301c push ebp */
  push32((uint32_t)(EBP));
  /* 100e301d call 0x100e2f60 */
  push32(0x100e3022u); f_100e2f60();
  /* 100e3022 push eax */
  push32((uint32_t)(EAX));
  /* 100e3023 push edi */
  push32((uint32_t)(EDI));
  /* 100e3024 push ebp */
  push32((uint32_t)(EBP));
  /* 100e3025 call 0x100e2610 */
  push32(0x100e302au); f_100e2610();
  /* 100e302a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e302d mov al, 1 */
  AL = (0x1u);
  /* 100e302f pop edi */
  EDI = (pop32());
  /* 100e3030 pop esi */
  ESI = (pop32());
  /* 100e3031 pop ebp */
  EBP = (pop32());
  /* 100e3032 pop ebx */
  EBX = (pop32());
  /* 100e3033 ret  */
  ESPCHK(0x100e2f90u, _esp0);
  ESP += 4; return;
L_100e3034:;
  /* 100e3034 pop edi */
  EDI = (pop32());
  /* 100e3035 pop esi */
  ESI = (pop32());
  /* 100e3036 pop ebp */
  EBP = (pop32());
  /* 100e3037 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 100e3039 pop ebx */
  EBX = (pop32());
  /* 100e303a ret  */
  ESPCHK(0x100e2f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003040 @ 0x100e3040 (369 bytes, 82 insns) */
void f_100e3040(void) {
  FTRACE(0x100e3040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e3040 push ebx */
  push32((uint32_t)(EBX));
  /* 100e3041 push esi */
  push32((uint32_t)(ESI));
  /* 100e3042 call dword ptr [0x100f64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e0))), 0x100e3048u);
  /* 100e3048 push 0x100f6170 */
  push32((uint32_t)(0x100f6170u));
  /* 100e304d mov dword ptr [0x100f6294], eax */
  w32((uint32_t)(0x100f6294), (EAX));
  /* 100e3052 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e3058u);
  /* 100e3058 mov ebx, 1 */
  EBX = (0x1u);
  /* 100e305d mov esi, eax */
  ESI = (EAX);
  /* 100e305f push ebx */
  push32((uint32_t)(EBX));
  /* 100e3060 call 0x100e2730 */
  push32(0x100e3065u); f_100e2730();
  /* 100e3065 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e3067 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e3069 call 0x100e2730 */
  push32(0x100e306eu); f_100e2730();
  /* 100e306e push 5 */
  push32((uint32_t)(0x5u));
  /* 100e3070 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e3072 call 0x100e2730 */
  push32(0x100e3077u); f_100e2730();
  /* 100e3077 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e3079 mov eax, dword ptr [0x100f6294] */
  EAX = (r32((uint32_t)(0x100f6294)));
  /* 100e307e push 3 */
  push32((uint32_t)(0x3u));
  /* 100e3080 mov dword ptr [0x100f6190], esi */
  w32((uint32_t)(0x100f6190), (ESI));
  /* 100e3086 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 100e3089 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 100e308c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 100e308f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 100e3092 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100e3095 mov ecx, dword ptr [eax + 0x100f3ad0] */
  ECX = (r32((uint32_t)(EAX + 0x100f3ad0)));
  /* 100e309b lea edx, [eax + 0x100f3940] */
  EDX = ((uint32_t)(EAX + 0x100f3940));
  /* 100e30a1 mov dword ptr [0x100f61a0], edx */
  w32((uint32_t)(0x100f61a0), (EDX));
  /* 100e30a7 lea edx, [eax + 0x100f3ad4] */
  EDX = ((uint32_t)(EAX + 0x100f3ad4));
  /* 100e30ad mov dword ptr [0x100f65e4], ecx */
  w32((uint32_t)(0x100f65e4), (ECX));
  /* 100e30b3 mov ecx, dword ptr [eax + 0x100f3c64] */
  ECX = (r32((uint32_t)(EAX + 0x100f3c64)));
  /* 100e30b9 mov dword ptr [0x100f61a4], edx */
  w32((uint32_t)(0x100f61a4), (EDX));
  /* 100e30bf lea edx, [eax + 0x100f3c68] */
  EDX = ((uint32_t)(EAX + 0x100f3c68));
  /* 100e30c5 mov dword ptr [0x100f65e8], ecx */
  w32((uint32_t)(0x100f65e8), (ECX));
  /* 100e30cb mov dword ptr [0x100f622c], edx */
  w32((uint32_t)(0x100f622c), (EDX));
  /* 100e30d1 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e30d7u);
  /* 100e30d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e30d9 mov dword ptr [0x100f6270], eax */
  w32((uint32_t)(0x100f6270), (EAX));
  /* 100e30de call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e30e4u);
  /* 100e30e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e30e6 mov dword ptr [0x100f3600], eax */
  w32((uint32_t)(0x100f3600), (EAX));
  /* 100e30eb call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e30f1u);
  /* 100e30f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e30f3 mov dword ptr [0x100f6360], eax */
  w32((uint32_t)(0x100f6360), (EAX));
  /* 100e30f8 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e30feu);
  /* 100e30fe push 5 */
  push32((uint32_t)(0x5u));
  /* 100e3100 mov dword ptr [0x100f3708], eax */
  w32((uint32_t)(0x100f3708), (EAX));
  /* 100e3105 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e310bu);
  /* 100e310b push ebx */
  push32((uint32_t)(EBX));
  /* 100e310c mov dword ptr [0x100f60c8], eax */
  w32((uint32_t)(0x100f60c8), (EAX));
  /* 100e3111 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3117u);
  /* 100e3117 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e311a mov dword ptr [0x100f6318], eax */
  w32((uint32_t)(0x100f6318), (EAX));
  /* 100e311f call 0x100e2670 */
  push32(0x100e3124u); f_100e2670();
  /* 100e3124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e3126 jne 0x100e3132 */
  if (!C.zf) goto L_100e3132;
  /* 100e3128 mov dword ptr [0x100ef248], 4 */
  w32((uint32_t)(0x100ef248), (0x4u));
L_100e3132:;
  /* 100e3132 push 0x100ef114 */
  push32((uint32_t)(0x100ef114u));
  /* 100e3137 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100e3139 call dword ptr [0x100f64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64ec))), 0x100e313fu);
  /* 100e313f push 0x100f6578 */
  push32((uint32_t)(0x100f6578u));
  /* 100e3144 call 0x100e2720 */
  push32(0x100e3149u); f_100e2720();
  /* 100e3149 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100e314b push 0x100ef244 */
  push32((uint32_t)(0x100ef244u));
  /* 100e3150 call 0x100e2700 */
  push32(0x100e3155u); f_100e2700();
  /* 100e3155 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3158 mov byte ptr [0x100f6168], bl */
  w8((uint32_t)(0x100f6168), (BL));
  /* 100e315e mov byte ptr [0x100f616a], bl */
  w8((uint32_t)(0x100f616a), (BL));
  /* 100e3164 mov byte ptr [0x100f616c], bl */
  w8((uint32_t)(0x100f616c), (BL));
  /* 100e316a mov byte ptr [0x100f616d], bl */
  w8((uint32_t)(0x100f616d), (BL));
  /* 100e3170 mov byte ptr [0x100f6303], bl */
  w8((uint32_t)(0x100f6303), (BL));
  /* 100e3176 mov byte ptr [0x100f6301], bl */
  w8((uint32_t)(0x100f6301), (BL));
  /* 100e317c mov byte ptr [0x100f6304], bl */
  w8((uint32_t)(0x100f6304), (BL));
  /* 100e3182 mov byte ptr [0x100f6305], bl */
  w8((uint32_t)(0x100f6305), (BL));
  /* 100e3188 pop esi */
  ESI = (pop32());
  /* 100e3189 mov byte ptr [0x100f616b], 0 */
  w8((uint32_t)(0x100f616b), (0x0u));
  /* 100e3190 mov byte ptr [0x100f6169], 0 */
  w8((uint32_t)(0x100f6169), (0x0u));
  /* 100e3197 mov byte ptr [0x100f6300], 0 */
  w8((uint32_t)(0x100f6300), (0x0u));
  /* 100e319e mov byte ptr [0x100f6302], 0 */
  w8((uint32_t)(0x100f6302), (0x0u));
  /* 100e31a5 mov dword ptr [0x100f662c], 0 */
  w32((uint32_t)(0x100f662c), (0x0u));
  /* 100e31af pop ebx */
  EBX = (pop32());
  /* 100e31b0 ret  */
  ESPCHK(0x100e3040u, _esp0);
  ESP += 4; return;
}

/* FUN_100031c0 @ 0x100e31c0 (85 bytes, 29 insns) */
void f_100e31c0(void) {
  FTRACE(0x100e31c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e31c0 mov eax, dword ptr [0x100f5f38] */
  EAX = (r32((uint32_t)(0x100f5f38)));
  /* 100e31c5 push esi */
  push32((uint32_t)(ESI));
  /* 100e31c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e31c9 jg 0x100e3213 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e3213;
  /* 100e31cb push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e31d0 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e31d6u);
  /* 100e31d6 mov ecx, eax */
  ECX = (EAX);
  /* 100e31d8 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 100e31dd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100e31df sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 100e31e2 mov eax, edx */
  EAX = (EDX);
  /* 100e31e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e31e7 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100e31ea add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e31ec mov esi, edx */
  ESI = (EDX);
  /* 100e31ee je 0x100e3213 */
  if (C.zf) goto L_100e3213;
  /* 100e31f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e31f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e31f4 push esi */
  push32((uint32_t)(ESI));
  /* 100e31f5 push 0x100f36e0 */
  push32((uint32_t)(0x100f36e0u));
  /* 100e31fa call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3200u);
  /* 100e3200 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e3202 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e3204 push esi */
  push32((uint32_t)(ESI));
  /* 100e3205 push 0x100f3620 */
  push32((uint32_t)(0x100f3620u));
  /* 100e320a call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3210u);
  /* 100e3210 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3213:;
  /* 100e3213 pop esi */
  ESI = (pop32());
  /* 100e3214 ret  */
  ESPCHK(0x100e31c0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x100e3220 (1 bytes, 1 insns) */
void f_100e3220(void) {
  FTRACE(0x100e3220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e3220 ret  */
  ESPCHK(0x100e3220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x100e3230 (157 bytes, 43 insns) */
void f_100e3230(void) {
  FTRACE(0x100e3230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e3230 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e3232 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e3234 push 0x100f6330 */
  push32((uint32_t)(0x100f6330u));
  /* 100e3239 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e323fu);
  /* 100e323f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e3241 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e3243 push 0x100f6338 */
  push32((uint32_t)(0x100f6338u));
  /* 100e3248 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e324eu);
  /* 100e324e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e3250 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e3252 push 0x100f6320 */
  push32((uint32_t)(0x100f6320u));
  /* 100e3257 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e325du);
  /* 100e325d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e325f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e3261 push 0x100f6328 */
  push32((uint32_t)(0x100f6328u));
  /* 100e3266 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e326cu);
  /* 100e326c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e326e push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3270 push 0x100f6340 */
  push32((uint32_t)(0x100f6340u));
  /* 100e3275 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e327bu);
  /* 100e327b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e327d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e327f push 0x100f6278 */
  push32((uint32_t)(0x100f6278u));
  /* 100e3284 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e328au);
  /* 100e328a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e328d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e328f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e3291 push 0x100f6260 */
  push32((uint32_t)(0x100f6260u));
  /* 100e3296 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e329cu);
  /* 100e329c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e329e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e32a0 push 0x100f6268 */
  push32((uint32_t)(0x100f6268u));
  /* 100e32a5 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e32abu);
  /* 100e32ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e32ad push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e32af push 0x100f6280 */
  push32((uint32_t)(0x100f6280u));
  /* 100e32b4 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e32bau);
  /* 100e32ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e32bc push 0xa */
  push32((uint32_t)(0xau));
  /* 100e32be push 0x100f6288 */
  push32((uint32_t)(0x100f6288u));
  /* 100e32c3 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e32c9u);
  /* 100e32c9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e32cc ret  */
  ESPCHK(0x100e3230u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x100e32d0 (79 bytes, 22 insns) */
void f_100e32d0(void) {
  FTRACE(0x100e32d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e32d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e32d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e32d4 push 0x100f38f0 */
  push32((uint32_t)(0x100f38f0u));
  /* 100e32d9 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e32dfu);
  /* 100e32df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e32e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e32e3 push 0x100f38f8 */
  push32((uint32_t)(0x100f38f8u));
  /* 100e32e8 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e32eeu);
  /* 100e32ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e32f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e32f2 push 0x100f38e8 */
  push32((uint32_t)(0x100f38e8u));
  /* 100e32f7 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e32fdu);
  /* 100e32fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e32ff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3301 push 0x100f5f58 */
  push32((uint32_t)(0x100f5f58u));
  /* 100e3306 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e330cu);
  /* 100e330c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e330e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3310 push 0x100f5f48 */
  push32((uint32_t)(0x100f5f48u));
  /* 100e3315 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e331bu);
  /* 100e331b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e331e ret  */
  ESPCHK(0x100e32d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x100e3320 (64 bytes, 18 insns) */
void f_100e3320(void) {
  FTRACE(0x100e3320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e3320 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e3322 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e3324 push 0x100f6078 */
  push32((uint32_t)(0x100f6078u));
  /* 100e3329 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e332fu);
  /* 100e332f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e3331 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e3333 push 0x100f6080 */
  push32((uint32_t)(0x100f6080u));
  /* 100e3338 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e333eu);
  /* 100e333e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e3340 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e3342 push 0x100f6088 */
  push32((uint32_t)(0x100f6088u));
  /* 100e3347 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e334du);
  /* 100e334d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e334f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e3351 push 0x100f6090 */
  push32((uint32_t)(0x100f6090u));
  /* 100e3356 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e335cu);
  /* 100e335c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e335f ret  */
  ESPCHK(0x100e3320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x100e3360 (3787 bytes, 1079 insns) */
void f_100e3360(void) {
  FTRACE(0x100e3360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e3360 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e3363 push ebx */
  push32((uint32_t)(EBX));
  /* 100e3364 push ebp */
  push32((uint32_t)(EBP));
  /* 100e3365 push esi */
  push32((uint32_t)(ESI));
  /* 100e3366 push edi */
  push32((uint32_t)(EDI));
  /* 100e3367 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 100e336c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 100e3371 call dword ptr [0x100f64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f8))), 0x100e3377u);
  /* 100e3377 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e3379 call 0x100e2760 */
  push32(0x100e337eu); f_100e2760();
  /* 100e337e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100e3380 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e3382 call 0x100e2640 */
  push32(0x100e3387u); f_100e2640();
  /* 100e3387 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100e3389 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e338b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 100e338f call 0x100e2640 */
  push32(0x100e3394u); f_100e2640();
  /* 100e3394 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 100e3396 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e3398 mov edi, eax */
  EDI = (EAX);
  /* 100e339a call 0x100e2640 */
  push32(0x100e339fu); f_100e2640();
  /* 100e339f push 0xe */
  push32((uint32_t)(0xeu));
  /* 100e33a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e33a3 mov esi, eax */
  ESI = (EAX);
  /* 100e33a5 call 0x100e2640 */
  push32(0x100e33aau); f_100e2640();
  /* 100e33aa push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e33af mov ebx, eax */
  EBX = (EAX);
  /* 100e33b1 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e33b7u);
  /* 100e33b7 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100e33ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100e33bf add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e33c1 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 100e33c5 push 0x100f62b8 */
  push32((uint32_t)(0x100f62b8u));
  /* 100e33ca lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 100e33cd mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100e33d1 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e33d7u);
  /* 100e33d7 push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e33dc mov ebx, eax */
  EBX = (EAX);
  /* 100e33de call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e33e4u);
  /* 100e33e4 push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e33e9 mov ebp, eax */
  EBP = (EAX);
  /* 100e33eb call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e33f1u);
  /* 100e33f1 push 0x100f5fc8 */
  push32((uint32_t)(0x100f5fc8u));
  /* 100e33f6 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100e33fa call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e3400u);
  /* 100e3400 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3403 mov edi, eax */
  EDI = (EAX);
  /* 100e3405 push 0x100f5fc8 */
  push32((uint32_t)(0x100f5fc8u));
  /* 100e340a call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e3410u);
  /* 100e3410 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e3415 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 100e3419 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e341fu);
  /* 100e341f push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e3424 mov esi, eax */
  ESI = (EAX);
  /* 100e3426 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e342cu);
  /* 100e342c push 0x100f62b8 */
  push32((uint32_t)(0x100f62b8u));
  /* 100e3431 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 100e3435 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e343bu);
  /* 100e343b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 100e343f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 100e3443 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e3445 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 100e3449 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e344b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e344d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e344f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e3451 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e3453 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e3455 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3457 push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e345c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e345e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 100e3462 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3468u);
  /* 100e3468 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e346a mov bl, 1 */
  BL = (0x1u);
  /* 100e346c call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3472u);
  /* 100e3472 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3475 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e347a jle 0x100e34aa */
  if ((C.zf||C.sf!=C.of)) goto L_100e34aa;
  /* 100e347c push 1 */
  push32((uint32_t)(0x1u));
  /* 100e347e call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3484u);
  /* 100e3484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3487 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e348c jle 0x100e34aa */
  if ((C.zf||C.sf!=C.of)) goto L_100e34aa;
  /* 100e348e push 4 */
  push32((uint32_t)(0x4u));
  /* 100e3490 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3496u);
  /* 100e3496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3499 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e349e jle 0x100e34aa */
  if ((C.zf||C.sf!=C.of)) goto L_100e34aa;
  /* 100e34a0 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 100e34a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e34a6 jne 0x100e34aa */
  if (!C.zf) goto L_100e34aa;
  /* 100e34a8 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_100e34aa:;
  /* 100e34aa push 0x100f6170 */
  push32((uint32_t)(0x100f6170u));
  /* 100e34af call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e34b5u);
  /* 100e34b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e34b7 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100e34bb call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e34c1u);
  /* 100e34c1 push 0x100f6198 */
  push32((uint32_t)(0x100f6198u));
  /* 100e34c6 mov esi, eax */
  ESI = (EAX);
  /* 100e34c8 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e34ceu);
  /* 100e34ce push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e34d3 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 100e34d7 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e34ddu);
  /* 100e34dd push 0x100f60c0 */
  push32((uint32_t)(0x100f60c0u));
  /* 100e34e2 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e34e8u);
  /* 100e34e8 push 0x100f6390 */
  push32((uint32_t)(0x100f6390u));
  /* 100e34ed mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 100e34f1 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e34f7u);
  /* 100e34f7 push 0x100f6310 */
  push32((uint32_t)(0x100f6310u));
  /* 100e34fc mov edi, eax */
  EDI = (EAX);
  /* 100e34fe call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e3504u);
  /* 100e3504 push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e3509 mov ebp, eax */
  EBP = (EAX);
  /* 100e350b call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e3511u);
  /* 100e3511 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3513 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e3515 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3517 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e3519 push 0x100f60f0 */
  push32((uint32_t)(0x100f60f0u));
  /* 100e351e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 100e3522 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 100e3527 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e352du);
  /* 100e352d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e352f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 100e3531 push 0x100f6130 */
  push32((uint32_t)(0x100f6130u));
  /* 100e3536 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e353cu);
  /* 100e353c push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e3541 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e3547u);
  /* 100e3547 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e354c mov edi, eax */
  EDI = (EAX);
  /* 100e354e call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e3554u);
  /* 100e3554 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3557 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e3559 je 0x100e3560 */
  if (C.zf) goto L_100e3560;
  /* 100e355b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_100e3560:;
  /* 100e3560 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 100e3564 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 100e3566 je 0x100e3f2d */
  if (C.zf) goto L_100e3f2d;
  /* 100e356c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e356e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e3570 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3572 push 0x100f5fb8 */
  push32((uint32_t)(0x100f5fb8u));
  /* 100e3577 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e357du);
  /* 100e357d push 0x100f5fb8 */
  push32((uint32_t)(0x100f5fb8u));
  /* 100e3582 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e3588u);
  /* 100e3588 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e358b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e358d je 0x100e4223 */
  if (C.zf) goto L_100e4223;
  /* 100e3593 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e3595 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e3597 push 0x100f6358 */
  push32((uint32_t)(0x100f6358u));
  /* 100e359c call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e35a2u);
  /* 100e35a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e35a5 call dword ptr [0x100f6550] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6550))), 0x100e35abu);
  /* 100e35ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e35ad jne 0x100e35f0 */
  if (!C.zf) goto L_100e35f0;
  /* 100e35af cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e35b5 jle 0x100e35dc */
  if ((C.zf||C.sf!=C.of)) goto L_100e35dc;
  /* 100e35b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e35b9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e35bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e35bd push 0x100f6170 */
  push32((uint32_t)(0x100f6170u));
  /* 100e35c2 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e35c8u);
  /* 100e35c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e35ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e35cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e35ce push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e35d3 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e35d9u);
  /* 100e35d9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e35dc:;
  /* 100e35dc push 1 */
  push32((uint32_t)(0x1u));
  /* 100e35de push 1 */
  push32((uint32_t)(0x1u));
  /* 100e35e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e35e2 call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e35e8u);
  /* 100e35e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e35eb jmp 0x100e36fe */
  goto L_100e36fe;
L_100e35f0:;
  /* 100e35f0 push 0x100f3780 */
  push32((uint32_t)(0x100f3780u));
  /* 100e35f5 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e35fbu);
  /* 100e35fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e35fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3600 je 0x100e362a */
  if (C.zf) goto L_100e362a;
  /* 100e3602 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3608 jle 0x100e3612 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3612;
  /* 100e360a push 6 */
  push32((uint32_t)(0x6u));
  /* 100e360c push 8 */
  push32((uint32_t)(0x8u));
  /* 100e360e push 9 */
  push32((uint32_t)(0x9u));
  /* 100e3610 jmp 0x100e3650 */
  goto L_100e3650;
L_100e3612:;
  /* 100e3612 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3618 jle 0x100e3622 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3622;
  /* 100e361a push 3 */
  push32((uint32_t)(0x3u));
  /* 100e361c push 5 */
  push32((uint32_t)(0x5u));
  /* 100e361e push 9 */
  push32((uint32_t)(0x9u));
  /* 100e3620 jmp 0x100e3650 */
  goto L_100e3650;
L_100e3622:;
  /* 100e3622 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3624 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e3626 push 9 */
  push32((uint32_t)(0x9u));
  /* 100e3628 jmp 0x100e3650 */
  goto L_100e3650;
L_100e362a:;
  /* 100e362a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3630 jle 0x100e363a */
  if ((C.zf||C.sf!=C.of)) goto L_100e363a;
  /* 100e3632 push 8 */
  push32((uint32_t)(0x8u));
  /* 100e3634 push 8 */
  push32((uint32_t)(0x8u));
  /* 100e3636 push 9 */
  push32((uint32_t)(0x9u));
  /* 100e3638 jmp 0x100e3650 */
  goto L_100e3650;
L_100e363a:;
  /* 100e363a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3640 jle 0x100e364a */
  if ((C.zf||C.sf!=C.of)) goto L_100e364a;
  /* 100e3642 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e3644 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e3646 push 9 */
  push32((uint32_t)(0x9u));
  /* 100e3648 jmp 0x100e3650 */
  goto L_100e3650;
L_100e364a:;
  /* 100e364a push 4 */
  push32((uint32_t)(0x4u));
  /* 100e364c push 4 */
  push32((uint32_t)(0x4u));
  /* 100e364e push 0xa */
  push32((uint32_t)(0xau));
L_100e3650:;
  /* 100e3650 call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e3656u);
  /* 100e3656 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 100e365a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e365d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e365f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 100e3664 je 0x100e366b */
  if (C.zf) goto L_100e366b;
  /* 100e3666 mov edi, 0x12c */
  EDI = (0x12cu);
L_100e366b:;
  /* 100e366b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e366e jge 0x100e368c */
  if ((C.sf==C.of)) goto L_100e368c;
  /* 100e3670 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3676 jle 0x100e368c */
  if ((C.zf||C.sf!=C.of)) goto L_100e368c;
  /* 100e3678 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e367a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e367c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e367e push 0x100f6170 */
  push32((uint32_t)(0x100f6170u));
  /* 100e3683 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3689u);
  /* 100e3689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e368c:;
  /* 100e368c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3692 jle 0x100e36cd */
  if ((C.zf||C.sf!=C.of)) goto L_100e36cd;
  /* 100e3694 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100e3696 je 0x100e36b2 */
  if (C.zf) goto L_100e36b2;
  /* 100e3698 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e369a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 100e369f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e36a4 push 0x100f6170 */
  push32((uint32_t)(0x100f6170u));
  /* 100e36a9 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e36afu);
  /* 100e36af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e36b2:;
  /* 100e36b2 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e36b8 jle 0x100e36cd */
  if ((C.zf||C.sf!=C.of)) goto L_100e36cd;
  /* 100e36ba push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e36bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e36be push edi */
  push32((uint32_t)(EDI));
  /* 100e36bf push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e36c4 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e36cau);
  /* 100e36ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e36cd:;
  /* 100e36cd push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e36d2 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e36d8u);
  /* 100e36d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e36db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e36dd je 0x100e36fe */
  if (C.zf) goto L_100e36fe;
  /* 100e36df cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e36e5 jle 0x100e36fe */
  if ((C.zf||C.sf!=C.of)) goto L_100e36fe;
  /* 100e36e7 push 0x100f62b8 */
  push32((uint32_t)(0x100f62b8u));
  /* 100e36ec call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e36f2u);
  /* 100e36f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e36f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e36f7 jle 0x100e36fe */
  if ((C.zf||C.sf!=C.of)) goto L_100e36fe;
  /* 100e36f9 call 0x100e3230 */
  push32(0x100e36feu); f_100e3230();
L_100e36fe:;
  /* 100e36fe mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 100e3702 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e3704 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3707 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100e3709 jge 0x100e370f */
  if ((C.sf==C.of)) goto L_100e370f;
  /* 100e370b push 5 */
  push32((uint32_t)(0x5u));
  /* 100e370d jmp 0x100e3713 */
  goto L_100e3713;
L_100e370f:;
  /* 100e370f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3712 push eax */
  push32((uint32_t)(EAX));
L_100e3713:;
  /* 100e3713 push 0x100f5f70 */
  push32((uint32_t)(0x100f5f70u));
  /* 100e3718 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e371eu);
  /* 100e371e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 100e3722 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3725 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e372a jge 0x100e3740 */
  if ((C.sf==C.of)) goto L_100e3740;
  /* 100e372c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100e372e push 0xc */
  push32((uint32_t)(0xcu));
  /* 100e3730 push 0x100f38c8 */
  push32((uint32_t)(0x100f38c8u));
  /* 100e3735 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e373bu);
  /* 100e373b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e373e jmp 0x100e377a */
  goto L_100e377a;
L_100e3740:;
  /* 100e3740 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 100e3743 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e3745 push ecx */
  push32((uint32_t)(ECX));
  /* 100e3746 push 0x100f38c8 */
  push32((uint32_t)(0x100f38c8u));
  /* 100e374b call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3751u);
  /* 100e3751 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e3753 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 100e3756 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100e3758 push edx */
  push32((uint32_t)(EDX));
  /* 100e3759 push 0x100f38c8 */
  push32((uint32_t)(0x100f38c8u));
  /* 100e375e call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3764u);
  /* 100e3764 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e3766 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3769 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e376b push edi */
  push32((uint32_t)(EDI));
  /* 100e376c push 0x100f38c8 */
  push32((uint32_t)(0x100f38c8u));
  /* 100e3771 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3777u);
  /* 100e3777 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e377a:;
  /* 100e377a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100e377c push 0 */
  push32((uint32_t)(0x0u));
  /* 100e377e call 0x100e2640 */
  push32(0x100e3783u); f_100e2640();
  /* 100e3783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e3788 je 0x100e37e7 */
  if (C.zf) goto L_100e37e7;
  /* 100e378a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e378c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e378e push 0x100f62c8 */
  push32((uint32_t)(0x100f62c8u));
  /* 100e3793 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3799u);
  /* 100e3799 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e379b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e379d push 0x100f62b0 */
  push32((uint32_t)(0x100f62b0u));
  /* 100e37a2 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e37a8u);
  /* 100e37a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e37aa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e37ac push 0x100f62c0 */
  push32((uint32_t)(0x100f62c0u));
  /* 100e37b1 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e37b7u);
  /* 100e37b7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e37b9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e37bb push 0x100f62a0 */
  push32((uint32_t)(0x100f62a0u));
  /* 100e37c0 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e37c6u);
  /* 100e37c6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e37c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e37ca push 0x100f62a8 */
  push32((uint32_t)(0x100f62a8u));
  /* 100e37cf call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e37d5u);
  /* 100e37d5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e37d7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e37d9 push 0x100f6298 */
  push32((uint32_t)(0x100f6298u));
  /* 100e37de call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e37e4u);
  /* 100e37e4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e37e7:;
  /* 100e37e7 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e37e9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e37eb push 3 */
  push32((uint32_t)(0x3u));
  /* 100e37ed push 0x100f3880 */
  push32((uint32_t)(0x100f3880u));
  /* 100e37f2 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e37f8u);
  /* 100e37f8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e37fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e37fc push 1 */
  push32((uint32_t)(0x1u));
  /* 100e37fe push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e3803 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3809u);
  /* 100e3809 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e380b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e380d push 2 */
  push32((uint32_t)(0x2u));
  /* 100e380f push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e3814 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e381au);
  /* 100e381a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 100e381e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3821 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e3823 jne 0x100e3839 */
  if (!C.zf) goto L_100e3839;
  /* 100e3825 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e3827 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e3829 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e382b push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e3830 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3836u);
  /* 100e3836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3839:;
  /* 100e3839 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e383b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e383d push 1 */
  push32((uint32_t)(0x1u));
  /* 100e383f push 0x100f61c8 */
  push32((uint32_t)(0x100f61c8u));
  /* 100e3844 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e384au);
  /* 100e384a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e384c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e384e push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3850 push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e3855 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e385bu);
  /* 100e385b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e385d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e385f push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3861 push 0x100f5fb0 */
  push32((uint32_t)(0x100f5fb0u));
  /* 100e3866 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e386cu);
  /* 100e386c push 5 */
  push32((uint32_t)(0x5u));
  /* 100e386e push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3870 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e3872 push 0x100f61c8 */
  push32((uint32_t)(0x100f61c8u));
  /* 100e3877 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e387du);
  /* 100e387d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3880 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3882 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e3884 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3886 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e388b call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3891u);
  /* 100e3891 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e3893 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e3895 push 0x100f3640 */
  push32((uint32_t)(0x100f3640u));
  /* 100e389a call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e38a0u);
  /* 100e38a0 push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e38a5 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e38abu);
  /* 100e38ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e38ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e38b0 jle 0x100e38d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100e38d7;
  /* 100e38b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100e38b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e38b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e38b8 push 0x100f3858 */
  push32((uint32_t)(0x100f3858u));
  /* 100e38bd call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e38c3u);
  /* 100e38c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e38c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e38c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e38c9 push 0x100f60d8 */
  push32((uint32_t)(0x100f60d8u));
  /* 100e38ce call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e38d4u);
  /* 100e38d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e38d7:;
  /* 100e38d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e38d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e38db push 1 */
  push32((uint32_t)(0x1u));
  /* 100e38dd push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e38e2 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e38e8u);
  /* 100e38e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e38eb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e38ed jne 0x100e3903 */
  if (!C.zf) goto L_100e3903;
  /* 100e38ef push 0xa */
  push32((uint32_t)(0xau));
  /* 100e38f1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e38f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e38f5 push 0x100f5fc8 */
  push32((uint32_t)(0x100f5fc8u));
  /* 100e38fa call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3900u);
  /* 100e3900 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3903:;
  /* 100e3903 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3905 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3907 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3909 push 0x100f35f8 */
  push32((uint32_t)(0x100f35f8u));
  /* 100e390e call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3914u);
  /* 100e3914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3917 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e391a jle 0x100e3930 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3930;
  /* 100e391c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e391e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e3920 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e3922 push 0x100f5fb8 */
  push32((uint32_t)(0x100f5fb8u));
  /* 100e3927 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e392du);
  /* 100e392d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3930:;
  /* 100e3930 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e3932 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3934 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3936 push 0x100f6238 */
  push32((uint32_t)(0x100f6238u));
  /* 100e393b call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3941u);
  /* 100e3941 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e3943 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e3945 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e3947 push 0x100f6238 */
  push32((uint32_t)(0x100f6238u));
  /* 100e394c call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3952u);
  /* 100e3952 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e3954 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3956 push 0x100f6058 */
  push32((uint32_t)(0x100f6058u));
  /* 100e395b call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3961u);
  /* 100e3961 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e3963 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3965 push 0x100f6010 */
  push32((uint32_t)(0x100f6010u));
  /* 100e396a call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3970u);
  /* 100e3970 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e3972 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3974 push 0x100f6018 */
  push32((uint32_t)(0x100f6018u));
  /* 100e3979 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e397fu);
  /* 100e397f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3982 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e3984 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3986 push 0x100f6020 */
  push32((uint32_t)(0x100f6020u));
  /* 100e398b call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3991u);
  /* 100e3991 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e3993 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e3995 push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e399a call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e39a0u);
  /* 100e39a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e39a2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e39a4 push 0x100f6198 */
  push32((uint32_t)(0x100f6198u));
  /* 100e39a9 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e39afu);
  /* 100e39af push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e39b1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e39b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e39b5 push 0x100f62b8 */
  push32((uint32_t)(0x100f62b8u));
  /* 100e39ba call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e39c0u);
  /* 100e39c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e39c2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e39c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e39c6 push 0x100f62b8 */
  push32((uint32_t)(0x100f62b8u));
  /* 100e39cb call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e39d1u);
  /* 100e39d1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e39d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e39d6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e39d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e39da push 0x100f62b8 */
  push32((uint32_t)(0x100f62b8u));
  /* 100e39df call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e39e5u);
  /* 100e39e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e39e7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e39e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e39eb push 0x100f62b8 */
  push32((uint32_t)(0x100f62b8u));
  /* 100e39f0 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e39f6u);
  /* 100e39f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e39f8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e39fa push 0x100f3938 */
  push32((uint32_t)(0x100f3938u));
  /* 100e39ff call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3a05u);
  /* 100e3a05 call 0x100e2630 */
  push32(0x100e3a0au); f_100e2630();
  /* 100e3a0a push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e3a0f mov edi, eax */
  EDI = (EAX);
  /* 100e3a11 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e3a17u);
  /* 100e3a17 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3a1a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3a1c je 0x100e3a3f */
  if (C.zf) goto L_100e3a3f;
  /* 100e3a1e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3a20 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3a22 push 0x100f3938 */
  push32((uint32_t)(0x100f3938u));
  /* 100e3a27 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3a2du);
  /* 100e3a2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e3a2f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e3a31 push 0x100f3850 */
  push32((uint32_t)(0x100f3850u));
  /* 100e3a36 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3a3cu);
  /* 100e3a3c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3a3f:;
  /* 100e3a3f push 0x100f3938 */
  push32((uint32_t)(0x100f3938u));
  /* 100e3a44 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e3a4au);
  /* 100e3a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3a4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3a4f je 0x100e3a77 */
  if (C.zf) goto L_100e3a77;
  /* 100e3a51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3a53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3a55 push 0x100f3920 */
  push32((uint32_t)(0x100f3920u));
  /* 100e3a5a call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3a60u);
  /* 100e3a60 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3a62 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100e3a64 push 0x100f3860 */
  push32((uint32_t)(0x100f3860u));
  /* 100e3a69 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3a6fu);
  /* 100e3a6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3a72 call 0x100e3320 */
  push32(0x100e3a77u); f_100e3320();
L_100e3a77:;
  /* 100e3a77 push 0x100f6090 */
  push32((uint32_t)(0x100f6090u));
  /* 100e3a7c call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e3a82u);
  /* 100e3a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3a85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3a87 je 0x100e3aae */
  if (C.zf) goto L_100e3aae;
  /* 100e3a89 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3a8b push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3a8d push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3a8f push 0x100f3648 */
  push32((uint32_t)(0x100f3648u));
  /* 100e3a94 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3a9au);
  /* 100e3a9a push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3a9c push 3 */
  push32((uint32_t)(0x3u));
  /* 100e3a9e push 0xf */
  push32((uint32_t)(0xfu));
  /* 100e3aa0 push 0x100f3648 */
  push32((uint32_t)(0x100f3648u));
  /* 100e3aa5 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3aabu);
  /* 100e3aab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3aae:;
  /* 100e3aae push 0 */
  push32((uint32_t)(0x0u));
  /* 100e3ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3ab2 call 0x100e25f0 */
  push32(0x100e3ab7u); f_100e25f0();
  /* 100e3ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e3ab9 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3abfu);
  /* 100e3abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3ac2 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3ac7 jle 0x100e3b0b */
  if ((C.zf||C.sf!=C.of)) goto L_100e3b0b;
  /* 100e3ac9 push 0x100f3780 */
  push32((uint32_t)(0x100f3780u));
  /* 100e3ace call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e3ad4u);
  /* 100e3ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3ad7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3ad9 je 0x100e3b0b */
  if (C.zf) goto L_100e3b0b;
  /* 100e3adb push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3add call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3ae3u);
  /* 100e3ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3ae6 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3aeb jge 0x100e3b0b */
  if ((C.sf==C.of)) goto L_100e3b0b;
  /* 100e3aed push 0x100f3938 */
  push32((uint32_t)(0x100f3938u));
  /* 100e3af2 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e3af8u);
  /* 100e3af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3afb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3afd jne 0x100e3b0b */
  if (!C.zf) goto L_100e3b0b;
  /* 100e3aff push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3b03 call 0x100e25f0 */
  push32(0x100e3b08u); f_100e25f0();
  /* 100e3b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3b0b:;
  /* 100e3b0b push 0x100f3938 */
  push32((uint32_t)(0x100f3938u));
  /* 100e3b10 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e3b16u);
  /* 100e3b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3b19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3b1b je 0x100e3c9c */
  if (C.zf) goto L_100e3c9c;
  /* 100e3b21 push 0x100f60d0 */
  push32((uint32_t)(0x100f60d0u));
  /* 100e3b26 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e3b2cu);
  /* 100e3b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3b2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3b31 je 0x100e3c9c */
  if (C.zf) goto L_100e3c9c;
  /* 100e3b37 push 0x100f6198 */
  push32((uint32_t)(0x100f6198u));
  /* 100e3b3c call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e3b42u);
  /* 100e3b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3b45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3b47 je 0x100e3c9c */
  if (C.zf) goto L_100e3c9c;
  /* 100e3b4d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3b50 je 0x100e3b57 */
  if (C.zf) goto L_100e3b57;
  /* 100e3b52 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3b55 jne 0x100e3b87 */
  if (!C.zf) goto L_100e3b87;
L_100e3b57:;
  /* 100e3b57 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e3b59 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3b5fu);
  /* 100e3b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3b62 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3b67 jle 0x100e3b87 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3b87;
  /* 100e3b69 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3b6b call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3b71u);
  /* 100e3b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3b74 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3b79 jge 0x100e3b87 */
  if ((C.sf==C.of)) goto L_100e3b87;
  /* 100e3b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3b7f call 0x100e25f0 */
  push32(0x100e3b84u); f_100e25f0();
  /* 100e3b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3b87:;
  /* 100e3b87 push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e3b8c call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e3b92u);
  /* 100e3b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3b95 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3b97 jne 0x100e3bc9 */
  if (!C.zf) goto L_100e3bc9;
  /* 100e3b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e3b9b call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3ba1u);
  /* 100e3ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3ba4 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3ba9 jle 0x100e3bc9 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3bc9;
  /* 100e3bab push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3bad call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3bb3u);
  /* 100e3bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3bb6 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3bbb jge 0x100e3bc9 */
  if ((C.sf==C.of)) goto L_100e3bc9;
  /* 100e3bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3bc1 call 0x100e25f0 */
  push32(0x100e3bc6u); f_100e25f0();
  /* 100e3bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3bc9:;
  /* 100e3bc9 push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e3bce call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e3bd4u);
  /* 100e3bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3bd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3bd9 je 0x100e3c9c */
  if (C.zf) goto L_100e3c9c;
  /* 100e3bdf cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3be2 jne 0x100e3c22 */
  if (!C.zf) goto L_100e3c22;
  /* 100e3be4 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e3be6 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3becu);
  /* 100e3bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3bef cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3bf4 jle 0x100e3cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3cf7;
  /* 100e3bfa push 4 */
  push32((uint32_t)(0x4u));
  /* 100e3bfc call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3c02u);
  /* 100e3c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3c05 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3c0a jle 0x100e3cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3cf7;
  /* 100e3c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3c12 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3c18u);
  /* 100e3c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3c1b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3c20 jmp 0x100e3c8c */
  goto L_100e3c8c;
L_100e3c22:;
  /* 100e3c22 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3c25 jne 0x100e3c65 */
  if (!C.zf) goto L_100e3c65;
  /* 100e3c27 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e3c29 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3c2fu);
  /* 100e3c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3c32 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3c37 jle 0x100e3cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3cf7;
  /* 100e3c3d push 4 */
  push32((uint32_t)(0x4u));
  /* 100e3c3f call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3c45u);
  /* 100e3c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3c48 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3c4d jle 0x100e3cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3cf7;
  /* 100e3c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3c55 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3c5bu);
  /* 100e3c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3c5e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3c63 jmp 0x100e3c8c */
  goto L_100e3c8c;
L_100e3c65:;
  /* 100e3c65 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3c68 jne 0x100e3c9c */
  if (!C.zf) goto L_100e3c9c;
  /* 100e3c6a push 3 */
  push32((uint32_t)(0x3u));
  /* 100e3c6c call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3c72u);
  /* 100e3c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3c75 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3c7a jle 0x100e3cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3cf7;
  /* 100e3c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3c7e call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3c84u);
  /* 100e3c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3c87 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100e3c8c:;
  /* 100e3c8c jge 0x100e3cf7 */
  if ((C.sf==C.of)) goto L_100e3cf7;
  /* 100e3c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3c92 call 0x100e25f0 */
  push32(0x100e3c97u); f_100e25f0();
  /* 100e3c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3c9a jmp 0x100e3cf7 */
  goto L_100e3cf7;
L_100e3c9c:;
  /* 100e3c9c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3c9f jne 0x100e3cf7 */
  if (!C.zf) goto L_100e3cf7;
  /* 100e3ca1 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3ca3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100e3ca5 push 0x100f3748 */
  push32((uint32_t)(0x100f3748u));
  /* 100e3caa call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3cb0u);
  /* 100e3cb0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e3cb2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e3cb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3cb6 push 0x100f6378 */
  push32((uint32_t)(0x100f6378u));
  /* 100e3cbb call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3cc1u);
  /* 100e3cc1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e3cc3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e3cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e3cc7 push 0x100f6378 */
  push32((uint32_t)(0x100f6378u));
  /* 100e3ccc call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3cd2u);
  /* 100e3cd2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e3cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e3cd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e3cd8 push 0x100f6378 */
  push32((uint32_t)(0x100f6378u));
  /* 100e3cdd call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3ce3u);
  /* 100e3ce3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e3ce5 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3ce7 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e3ce9 push 0x100f6378 */
  push32((uint32_t)(0x100f6378u));
  /* 100e3cee call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3cf4u);
  /* 100e3cf4 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3cf7:;
  /* 100e3cf7 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3cfa jle 0x100e3d53 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3d53;
  /* 100e3cfc mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 100e3d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3d02 je 0x100e3d53 */
  if (C.zf) goto L_100e3d53;
  /* 100e3d04 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3d06 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e3d08 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3d0a push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e3d0f call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3d15u);
  /* 100e3d15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3d18 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3d1b jle 0x100e3d53 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3d53;
  /* 100e3d1d push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3d1f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e3d21 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e3d23 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e3d28 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3d2eu);
  /* 100e3d2e push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3d30 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e3d32 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e3d34 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e3d39 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3d3fu);
  /* 100e3d3f push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3d41 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e3d43 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e3d45 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e3d4a call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3d50u);
  /* 100e3d50 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3d53:;
  /* 100e3d53 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 100e3d57 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100e3d59 je 0x100e3d97 */
  if (C.zf) goto L_100e3d97;
  /* 100e3d5b push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e3d60 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e3d66u);
  /* 100e3d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3d69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3d6b je 0x100e3d97 */
  if (C.zf) goto L_100e3d97;
  /* 100e3d6d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e3d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3d71 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 100e3d73 push 0x100f6140 */
  push32((uint32_t)(0x100f6140u));
  /* 100e3d78 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3d7eu);
  /* 100e3d7e push 0x100f6178 */
  push32((uint32_t)(0x100f6178u));
  /* 100e3d83 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e3d89u);
  /* 100e3d89 push 0x100f6090 */
  push32((uint32_t)(0x100f6090u));
  /* 100e3d8e call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e3d94u);
  /* 100e3d94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3d97:;
  /* 100e3d97 push 0x100f35f8 */
  push32((uint32_t)(0x100f35f8u));
  /* 100e3d9c call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e3da2u);
  /* 100e3da2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3da4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3da6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e3da8 push 0x100f61d0 */
  push32((uint32_t)(0x100f61d0u));
  /* 100e3dad call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3db3u);
  /* 100e3db3 push 0x100f60d0 */
  push32((uint32_t)(0x100f60d0u));
  /* 100e3db8 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e3dbeu);
  /* 100e3dbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3dc1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3dc3 je 0x100e3dd9 */
  if (C.zf) goto L_100e3dd9;
  /* 100e3dc5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3dc7 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3dc9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e3dcb push 0x100f61d0 */
  push32((uint32_t)(0x100f61d0u));
  /* 100e3dd0 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3dd6u);
  /* 100e3dd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3dd9:;
  /* 100e3dd9 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100e3ddb je 0x100e3ec5 */
  if (C.zf) goto L_100e3ec5;
  /* 100e3de1 push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e3de6 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e3decu);
  /* 100e3dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3df1 je 0x100e3ec5 */
  if (C.zf) goto L_100e3ec5;
  /* 100e3df7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e3df9 jne 0x100e3e31 */
  if (!C.zf) goto L_100e3e31;
  /* 100e3dfb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e3dfd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3dff push 2 */
  push32((uint32_t)(0x2u));
  /* 100e3e01 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e3e06 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3e0cu);
  /* 100e3e0c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e3e0e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3e10 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e3e12 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e3e17 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3e1du);
  /* 100e3e1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e3e1f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3e21 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e3e23 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e3e28 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3e2eu);
  /* 100e3e2e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3e31:;
  /* 100e3e31 push 0x100f60c0 */
  push32((uint32_t)(0x100f60c0u));
  /* 100e3e36 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e3e3cu);
  /* 100e3e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3e3f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3e42 jle 0x100e3e65 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3e65;
  /* 100e3e44 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e3e46 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3e48 push 0x100f61e8 */
  push32((uint32_t)(0x100f61e8u));
  /* 100e3e4d call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3e53u);
  /* 100e3e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100e3e55 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e3e57 push 0x100f61f0 */
  push32((uint32_t)(0x100f61f0u));
  /* 100e3e5c call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3e62u);
  /* 100e3e62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3e65:;
  /* 100e3e65 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3e67 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e3e69 push 0x100f60d0 */
  push32((uint32_t)(0x100f60d0u));
  /* 100e3e6e call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3e74u);
  /* 100e3e74 push 0x100f38e8 */
  push32((uint32_t)(0x100f38e8u));
  /* 100e3e79 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e3e7fu);
  /* 100e3e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3e82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3e84 je 0x100e3ec5 */
  if (C.zf) goto L_100e3ec5;
  /* 100e3e86 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3e88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3e8a push 0x100f6148 */
  push32((uint32_t)(0x100f6148u));
  /* 100e3e8f call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3e95u);
  /* 100e3e95 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3e97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3e99 push 0x100f6158 */
  push32((uint32_t)(0x100f6158u));
  /* 100e3e9e call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3ea4u);
  /* 100e3ea4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3ea6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100e3ea8 push 0x100f6160 */
  push32((uint32_t)(0x100f6160u));
  /* 100e3ead call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3eb3u);
  /* 100e3eb3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3eb5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100e3eb7 push 0x100f6150 */
  push32((uint32_t)(0x100f6150u));
  /* 100e3ebc call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3ec2u);
  /* 100e3ec2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3ec5:;
  /* 100e3ec5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e3ec7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e3ec9 push 0x100f3780 */
  push32((uint32_t)(0x100f3780u));
  /* 100e3ece call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3ed4u);
  /* 100e3ed4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3ed6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e3ed8 push 0x100f38c0 */
  push32((uint32_t)(0x100f38c0u));
  /* 100e3edd call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3ee3u);
  /* 100e3ee3 push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e3ee8 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e3eeeu);
  /* 100e3eee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3ef1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3ef4 jle 0x100e3f31 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3f31;
  /* 100e3ef6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 100e3efa cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3eff jle 0x100e3f31 */
  if ((C.zf||C.sf!=C.of)) goto L_100e3f31;
  /* 100e3f01 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 100e3f04 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100e3f08 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 100e3f0b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3f0d jge 0x100e3f26 */
  if ((C.sf==C.of)) goto L_100e3f26;
  /* 100e3f0f push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3f11 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e3f13 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 100e3f18 push 0x100f60c0 */
  push32((uint32_t)(0x100f60c0u));
  /* 100e3f1d call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3f23u);
  /* 100e3f23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3f26:;
  /* 100e3f26 call 0x100e32d0 */
  push32(0x100e3f2bu); f_100e32d0();
  /* 100e3f2b jmp 0x100e3f31 */
  goto L_100e3f31;
L_100e3f2d:;
  /* 100e3f2d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_100e3f31:;
  /* 100e3f31 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100e3f33 je 0x100e3f76 */
  if (C.zf) goto L_100e3f76;
  /* 100e3f35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3f37 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e3f39 push 0x100f3610 */
  push32((uint32_t)(0x100f3610u));
  /* 100e3f3e call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3f44u);
  /* 100e3f44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3f46 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e3f48 push 0x100f36e8 */
  push32((uint32_t)(0x100f36e8u));
  /* 100e3f4d call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3f53u);
  /* 100e3f53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3f55 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e3f57 push 0x100f3608 */
  push32((uint32_t)(0x100f3608u));
  /* 100e3f5c call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3f62u);
  /* 100e3f62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3f64 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e3f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e3f68 push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e3f6d call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e3f73u);
  /* 100e3f73 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3f76:;
  /* 100e3f76 push 0x100f3780 */
  push32((uint32_t)(0x100f3780u));
  /* 100e3f7b call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e3f81u);
  /* 100e3f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3f84 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3f86 je 0x100e3fa9 */
  if (C.zf) goto L_100e3fa9;
  /* 100e3f88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3f8a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e3f8c push 0x100f61d8 */
  push32((uint32_t)(0x100f61d8u));
  /* 100e3f91 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3f97u);
  /* 100e3f97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e3f99 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e3f9b push 0x100f61e0 */
  push32((uint32_t)(0x100f61e0u));
  /* 100e3fa0 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e3fa6u);
  /* 100e3fa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e3fa9:;
  /* 100e3fa9 push 0x100f3858 */
  push32((uint32_t)(0x100f3858u));
  /* 100e3fae call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e3fb4u);
  /* 100e3fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3fb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e3fb9 je 0x100e4223 */
  if (C.zf) goto L_100e4223;
  /* 100e3fbf push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e3fc4 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e3fcau);
  /* 100e3fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e3fcf je 0x100e402a */
  if (C.zf) goto L_100e402a;
  /* 100e3fd1 push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e3fd6 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e3fdcu);
  /* 100e3fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3fdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e3fe1 jne 0x100e402a */
  if (!C.zf) goto L_100e402a;
  /* 100e3fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e3fe5 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3febu);
  /* 100e3feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e3fee cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e3ff3 jle 0x100e402a */
  if ((C.zf||C.sf!=C.of)) goto L_100e402a;
  /* 100e3ff5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e3ff7 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e3ffdu);
  /* 100e3ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4000 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4005 jge 0x100e402a */
  if ((C.sf==C.of)) goto L_100e402a;
  /* 100e4007 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4009 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e400fu);
  /* 100e400f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4012 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4017 jle 0x100e402a */
  if ((C.zf||C.sf!=C.of)) goto L_100e402a;
  /* 100e4019 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100e401e push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4020 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4022 call 0x100e2610 */
  push32(0x100e4027u); f_100e2610();
  /* 100e4027 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e402a:;
  /* 100e402a push 3 */
  push32((uint32_t)(0x3u));
  /* 100e402c call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4032u);
  /* 100e4032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4035 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e403a jge 0x100e405f */
  if ((C.sf==C.of)) goto L_100e405f;
  /* 100e403c push 2 */
  push32((uint32_t)(0x2u));
  /* 100e403e call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4044u);
  /* 100e4044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4047 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e404c jle 0x100e405f */
  if ((C.zf||C.sf!=C.of)) goto L_100e405f;
  /* 100e404e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100e4053 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4055 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4057 call 0x100e2610 */
  push32(0x100e405cu); f_100e2610();
  /* 100e405c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e405f:;
  /* 100e405f push 0x100f61d8 */
  push32((uint32_t)(0x100f61d8u));
  /* 100e4064 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e406au);
  /* 100e406a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e406d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e406f je 0x100e4197 */
  if (C.zf) goto L_100e4197;
  /* 100e4075 push 0x100f61e0 */
  push32((uint32_t)(0x100f61e0u));
  /* 100e407a call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e4080u);
  /* 100e4080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4083 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4085 je 0x100e4197 */
  if (C.zf) goto L_100e4197;
  /* 100e408b push 2 */
  push32((uint32_t)(0x2u));
  /* 100e408d call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4093u);
  /* 100e4093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4096 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e409b jle 0x100e40ae */
  if ((C.zf||C.sf!=C.of)) goto L_100e40ae;
  /* 100e409d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100e40a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e40a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e40a6 call 0x100e2610 */
  push32(0x100e40abu); f_100e2610();
  /* 100e40ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e40ae:;
  /* 100e40ae push 0 */
  push32((uint32_t)(0x0u));
  /* 100e40b0 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e40b6u);
  /* 100e40b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e40b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e40bb je 0x100e41ba */
  if (C.zf) goto L_100e41ba;
  /* 100e40c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e40c3 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e40c9u);
  /* 100e40c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e40cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e40ce je 0x100e413b */
  if (C.zf) goto L_100e413b;
  /* 100e40d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e40d2 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e40d8u);
  /* 100e40d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e40db cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e40e0 jge 0x100e413b */
  if ((C.sf==C.of)) goto L_100e413b;
  /* 100e40e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e40e4 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e40eau);
  /* 100e40ea push 5 */
  push32((uint32_t)(0x5u));
  /* 100e40ec mov esi, eax */
  ESI = (EAX);
  /* 100e40ee call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e40f4u);
  /* 100e40f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e40f7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e40f9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100e40fe jge 0x100e411f */
  if ((C.sf==C.of)) goto L_100e411f;
  /* 100e4100 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4102 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4104 call 0x100e2610 */
  push32(0x100e4109u); f_100e2610();
  /* 100e4109 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100e410e push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4110 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4112 call 0x100e2610 */
  push32(0x100e4117u); f_100e2610();
  /* 100e4117 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e411a jmp 0x100e41ba */
  goto L_100e41ba;
L_100e411f:;
  /* 100e411f push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4121 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4123 call 0x100e2610 */
  push32(0x100e4128u); f_100e2610();
  /* 100e4128 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100e412d push 5 */
  push32((uint32_t)(0x5u));
  /* 100e412f push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4131 call 0x100e2610 */
  push32(0x100e4136u); f_100e2610();
  /* 100e4136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4139 jmp 0x100e41ba */
  goto L_100e41ba;
L_100e413b:;
  /* 100e413b push 5 */
  push32((uint32_t)(0x5u));
  /* 100e413d call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4143u);
  /* 100e4143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4146 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e414b jge 0x100e416d */
  if ((C.sf==C.of)) goto L_100e416d;
  /* 100e414d push 0 */
  push32((uint32_t)(0x0u));
  /* 100e414f call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4155u);
  /* 100e4155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e415a je 0x100e416d */
  if (C.zf) goto L_100e416d;
  /* 100e415c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 100e4161 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4163 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4165 call 0x100e2610 */
  push32(0x100e416au); f_100e2610();
  /* 100e416a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e416d:;
  /* 100e416d push 5 */
  push32((uint32_t)(0x5u));
  /* 100e416f call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4175u);
  /* 100e4175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4178 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e417d jge 0x100e41ba */
  if ((C.sf==C.of)) goto L_100e41ba;
  /* 100e417f push 0 */
  push32((uint32_t)(0x0u));
  /* 100e4181 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4187u);
  /* 100e4187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e418a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e418c je 0x100e41ba */
  if (C.zf) goto L_100e41ba;
  /* 100e418e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 100e4193 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4195 jmp 0x100e41b0 */
  goto L_100e41b0;
L_100e4197:;
  /* 100e4197 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4199 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e419fu);
  /* 100e419f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e41a2 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e41a7 jle 0x100e41ba */
  if ((C.zf||C.sf!=C.of)) goto L_100e41ba;
  /* 100e41a9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 100e41ae push 1 */
  push32((uint32_t)(0x1u));
L_100e41b0:;
  /* 100e41b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e41b2 call 0x100e2610 */
  push32(0x100e41b7u); f_100e2610();
  /* 100e41b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e41ba:;
  /* 100e41ba push 0 */
  push32((uint32_t)(0x0u));
  /* 100e41bc call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e41c2u);
  /* 100e41c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e41c5 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e41ca jle 0x100e41dd */
  if ((C.zf||C.sf!=C.of)) goto L_100e41dd;
  /* 100e41cc push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100e41d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e41d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e41d5 call 0x100e2610 */
  push32(0x100e41dau); f_100e2610();
  /* 100e41da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e41dd:;
  /* 100e41dd push 4 */
  push32((uint32_t)(0x4u));
  /* 100e41df call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e41e5u);
  /* 100e41e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e41e8 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e41ed jle 0x100e4200 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4200;
  /* 100e41ef push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 100e41f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e41f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e41f8 call 0x100e2610 */
  push32(0x100e41fdu); f_100e2610();
  /* 100e41fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4200:;
  /* 100e4200 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4202 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4208u);
  /* 100e4208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e420b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4210 jle 0x100e4223 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4223;
  /* 100e4212 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 100e4217 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4219 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e421b call 0x100e2610 */
  push32(0x100e4220u); f_100e2610();
  /* 100e4220 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4223:;
  /* 100e4223 pop edi */
  EDI = (pop32());
  /* 100e4224 pop esi */
  ESI = (pop32());
  /* 100e4225 pop ebp */
  EBP = (pop32());
  /* 100e4226 pop ebx */
  EBX = (pop32());
  /* 100e4227 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e422a ret  */
  ESPCHK(0x100e3360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004230 @ 0x100e4230 (209 bytes, 56 insns) */
void f_100e4230(void) {
  FTRACE(0x100e4230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e4230 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4232 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4238u);
  /* 100e4238 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e423b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4240 jle 0x100e4300 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4300;
  /* 100e4246 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4248 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100e424a push 0x100f6330 */
  push32((uint32_t)(0x100f6330u));
  /* 100e424f call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4255u);
  /* 100e4255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4257 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4259 push 0x100f6338 */
  push32((uint32_t)(0x100f6338u));
  /* 100e425e call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4264u);
  /* 100e4264 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4266 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4268 push 0x100f6320 */
  push32((uint32_t)(0x100f6320u));
  /* 100e426d call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4273u);
  /* 100e4273 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4275 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4277 push 0x100f6328 */
  push32((uint32_t)(0x100f6328u));
  /* 100e427c call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4282u);
  /* 100e4282 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4284 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4286 push 0x100f6340 */
  push32((uint32_t)(0x100f6340u));
  /* 100e428b call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4291u);
  /* 100e4291 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4293 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4295 push 0x100f6278 */
  push32((uint32_t)(0x100f6278u));
  /* 100e429a call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e42a0u);
  /* 100e42a0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e42a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e42a5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e42a7 push 0x100f6260 */
  push32((uint32_t)(0x100f6260u));
  /* 100e42ac call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e42b2u);
  /* 100e42b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e42b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e42b6 push 0x100f6268 */
  push32((uint32_t)(0x100f6268u));
  /* 100e42bb call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e42c1u);
  /* 100e42c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e42c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e42c5 push 0x100f6280 */
  push32((uint32_t)(0x100f6280u));
  /* 100e42ca call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e42d0u);
  /* 100e42d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e42d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e42d4 push 0x100f6288 */
  push32((uint32_t)(0x100f6288u));
  /* 100e42d9 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e42dfu);
  /* 100e42df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e42e1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e42e3 push 0x100f6240 */
  push32((uint32_t)(0x100f6240u));
  /* 100e42e8 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e42eeu);
  /* 100e42ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e42f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e42f2 push 0x100f5fa8 */
  push32((uint32_t)(0x100f5fa8u));
  /* 100e42f7 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e42fdu);
  /* 100e42fd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4300:;
  /* 100e4300 ret  */
  ESPCHK(0x100e4230u, _esp0);
  ESP += 4; return;
}

/* FUN_10004310 @ 0x100e4310 (79 bytes, 22 insns) */
void f_100e4310(void) {
  FTRACE(0x100e4310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e4310 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4312 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4314 push 0x100f38f0 */
  push32((uint32_t)(0x100f38f0u));
  /* 100e4319 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e431fu);
  /* 100e431f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4321 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4323 push 0x100f38f8 */
  push32((uint32_t)(0x100f38f8u));
  /* 100e4328 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e432eu);
  /* 100e432e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4330 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4332 push 0x100f38e8 */
  push32((uint32_t)(0x100f38e8u));
  /* 100e4337 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e433du);
  /* 100e433d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e433f push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4341 push 0x100f5f58 */
  push32((uint32_t)(0x100f5f58u));
  /* 100e4346 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e434cu);
  /* 100e434c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e434e push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4350 push 0x100f5f48 */
  push32((uint32_t)(0x100f5f48u));
  /* 100e4355 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e435bu);
  /* 100e435b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e435e ret  */
  ESPCHK(0x100e4310u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x100e4360 (127 bytes, 35 insns) */
void f_100e4360(void) {
  FTRACE(0x100e4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e4360 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4362 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e4364 push 0x100f61b8 */
  push32((uint32_t)(0x100f61b8u));
  /* 100e4369 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e436fu);
  /* 100e436f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4371 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e4373 push 0x100f61b0 */
  push32((uint32_t)(0x100f61b0u));
  /* 100e4378 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e437eu);
  /* 100e437e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4380 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e4382 push 0x100f6180 */
  push32((uint32_t)(0x100f6180u));
  /* 100e4387 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e438du);
  /* 100e438d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e438f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e4391 push 0x100f6178 */
  push32((uint32_t)(0x100f6178u));
  /* 100e4396 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e439cu);
  /* 100e439c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e439e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e43a0 push 0x100f6078 */
  push32((uint32_t)(0x100f6078u));
  /* 100e43a5 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e43abu);
  /* 100e43ab push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e43ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e43af push 0x100f6080 */
  push32((uint32_t)(0x100f6080u));
  /* 100e43b4 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e43bau);
  /* 100e43ba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e43bd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e43bf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e43c1 push 0x100f6088 */
  push32((uint32_t)(0x100f6088u));
  /* 100e43c6 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e43ccu);
  /* 100e43cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e43ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e43d0 push 0x100f6090 */
  push32((uint32_t)(0x100f6090u));
  /* 100e43d5 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e43dbu);
  /* 100e43db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e43de ret  */
  ESPCHK(0x100e4360u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x100e43e0 (3643 bytes, 1035 insns) */
void f_100e43e0(void) {
  FTRACE(0x100e43e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e43e0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e43e3 push ebx */
  push32((uint32_t)(EBX));
  /* 100e43e4 push ebp */
  push32((uint32_t)(EBP));
  /* 100e43e5 push esi */
  push32((uint32_t)(ESI));
  /* 100e43e6 push edi */
  push32((uint32_t)(EDI));
  /* 100e43e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e43e9 call 0x100e2760 */
  push32(0x100e43eeu); f_100e2760();
  /* 100e43ee push 0x100ef030 */
  push32((uint32_t)(0x100ef030u));
  /* 100e43f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100e43f5 call dword ptr [0x100f64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64ec))), 0x100e43fbu);
  /* 100e43fb push 0x100f6170 */
  push32((uint32_t)(0x100f6170u));
  /* 100e4400 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e4406u);
  /* 100e4406 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4408 mov ebx, eax */
  EBX = (EAX);
  /* 100e440a call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4410u);
  /* 100e4410 mov ebp, eax */
  EBP = (EAX);
  /* 100e4412 push 0x100f6198 */
  push32((uint32_t)(0x100f6198u));
  /* 100e4417 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 100e441b call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e4421u);
  /* 100e4421 push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e4426 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 100e442a call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e4430u);
  /* 100e4430 push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e4435 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e443bu);
  /* 100e443b push 0x100f60c0 */
  push32((uint32_t)(0x100f60c0u));
  /* 100e4440 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e4446u);
  /* 100e4446 push 0x100f6390 */
  push32((uint32_t)(0x100f6390u));
  /* 100e444b call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e4451u);
  /* 100e4451 push 0x100f6310 */
  push32((uint32_t)(0x100f6310u));
  /* 100e4456 mov esi, eax */
  ESI = (EAX);
  /* 100e4458 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e445eu);
  /* 100e445e push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e4463 mov edi, eax */
  EDI = (EAX);
  /* 100e4465 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e446bu);
  /* 100e446b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e446d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4470 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4472 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 100e4477 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 100e447b call 0x100e2660 */
  push32(0x100e4480u); f_100e2660();
  /* 100e4480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e4482 jle 0x100e4498 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4498;
  /* 100e4484 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100e4486 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e4488 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100e448a push 0x100f6308 */
  push32((uint32_t)(0x100f6308u));
  /* 100e448f call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4495u);
  /* 100e4495 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4498:;
  /* 100e4498 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e449d call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e44a3u);
  /* 100e44a3 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e44a8 mov esi, eax */
  ESI = (EAX);
  /* 100e44aa call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e44b0u);
  /* 100e44b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e44b3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e44b5 je 0x100e44bc */
  if (C.zf) goto L_100e44bc;
  /* 100e44b7 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_100e44bc:;
  /* 100e44bc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100e44be je 0x100e5213 */
  if (C.zf) goto L_100e5213;
  /* 100e44c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e44c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e44c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e44ca push 0x100f5fb8 */
  push32((uint32_t)(0x100f5fb8u));
  /* 100e44cf call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e44d5u);
  /* 100e44d5 push 0x100f5fb8 */
  push32((uint32_t)(0x100f5fb8u));
  /* 100e44da call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e44e0u);
  /* 100e44e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e44e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e44e5 je 0x100e5213 */
  if (C.zf) goto L_100e5213;
  /* 100e44eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e44ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e44ef push 0x100f6358 */
  push32((uint32_t)(0x100f6358u));
  /* 100e44f4 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e44fau);
  /* 100e44fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e44fd call dword ptr [0x100f6550] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6550))), 0x100e4503u);
  /* 100e4503 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4505 jne 0x100e455c */
  if (!C.zf) goto L_100e455c;
  /* 100e4507 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e450d jle 0x100e4534 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4534;
  /* 100e450f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4511 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4513 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4515 push 0x100f6170 */
  push32((uint32_t)(0x100f6170u));
  /* 100e451a call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4520u);
  /* 100e4520 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4522 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4524 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4526 push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e452b call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4531u);
  /* 100e4531 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4534:;
  /* 100e4534 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e453a jle 0x100e4548 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4548;
  /* 100e453c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4541 jle 0x100e4548 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4548;
  /* 100e4543 call 0x100e4230 */
  push32(0x100e4548u); f_100e4230();
L_100e4548:;
  /* 100e4548 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e454a push 1 */
  push32((uint32_t)(0x1u));
  /* 100e454c push 0 */
  push32((uint32_t)(0x0u));
  /* 100e454e call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e4554u);
  /* 100e4554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4557 jmp 0x100e461f */
  goto L_100e461f;
L_100e455c:;
  /* 100e455c mov eax, dword ptr [0x100f6574] */
  EAX = (r32((uint32_t)(0x100f6574)));
  /* 100e4561 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e4564 je 0x100e4578 */
  if (C.zf) goto L_100e4578;
  /* 100e4566 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e4567 je 0x100e4572 */
  if (C.zf) goto L_100e4572;
  /* 100e4569 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e456a jne 0x100e45a4 */
  if (!C.zf) goto L_100e45a4;
  /* 100e456c push 9 */
  push32((uint32_t)(0x9u));
  /* 100e456e push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4570 jmp 0x100e4599 */
  goto L_100e4599;
L_100e4572:;
  /* 100e4572 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4574 push 9 */
  push32((uint32_t)(0x9u));
  /* 100e4576 jmp 0x100e4599 */
  goto L_100e4599;
L_100e4578:;
  /* 100e4578 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e457e jle 0x100e458f */
  if ((C.zf||C.sf!=C.of)) goto L_100e458f;
  /* 100e4580 push 6 */
  push32((uint32_t)(0x6u));
  /* 100e4582 push 6 */
  push32((uint32_t)(0x6u));
  /* 100e4584 push 9 */
  push32((uint32_t)(0x9u));
  /* 100e4586 call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e458cu);
  /* 100e458c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e458f:;
  /* 100e458f push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4591 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4597 push 5 */
  push32((uint32_t)(0x5u));
L_100e4599:;
  /* 100e4599 push 9 */
  push32((uint32_t)(0x9u));
  /* 100e459b call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e45a1u);
  /* 100e45a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e45a4:;
  /* 100e45a4 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 100e45a8 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 100e45ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e45af je 0x100e45b6 */
  if (C.zf) goto L_100e45b6;
  /* 100e45b1 mov esi, 0x17c */
  ESI = (0x17cu);
L_100e45b6:;
  /* 100e45b6 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e45b9 jge 0x100e45d7 */
  if ((C.sf==C.of)) goto L_100e45d7;
  /* 100e45bb cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e45c1 jle 0x100e4613 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4613;
  /* 100e45c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e45c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e45c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e45c9 push 0x100f6170 */
  push32((uint32_t)(0x100f6170u));
  /* 100e45ce call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e45d4u);
  /* 100e45d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e45d7:;
  /* 100e45d7 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e45dd jle 0x100e4613 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4613;
  /* 100e45df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e45e1 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 100e45e6 push esi */
  push32((uint32_t)(ESI));
  /* 100e45e7 push 0x100f6170 */
  push32((uint32_t)(0x100f6170u));
  /* 100e45ec call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e45f2u);
  /* 100e45f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e45f5 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e45fb jle 0x100e4613 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4613;
  /* 100e45fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e45ff push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 100e4604 push esi */
  push32((uint32_t)(ESI));
  /* 100e4605 push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e460a call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4610u);
  /* 100e4610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4613:;
  /* 100e4613 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4618 jle 0x100e461f */
  if ((C.zf||C.sf!=C.of)) goto L_100e461f;
  /* 100e461a call 0x100e4230 */
  push32(0x100e461fu); f_100e4230();
L_100e461f:;
  /* 100e461f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4621 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4623 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4625 push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e462a call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4630u);
  /* 100e4630 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4632 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4634 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4636 push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e463b call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4641u);
  /* 100e4641 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4643 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4645 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4647 push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e464c call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4652u);
  /* 100e4652 push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e4657 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e465du);
  /* 100e465d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4663 jle 0x100e46d6 */
  if ((C.zf||C.sf!=C.of)) goto L_100e46d6;
  /* 100e4665 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4667 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e4669 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e466b push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e4670 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4676u);
  /* 100e4676 push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e467b call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e4681u);
  /* 100e4681 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4687 jle 0x100e469d */
  if ((C.zf||C.sf!=C.of)) goto L_100e469d;
  /* 100e4689 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e468b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e468d push 1 */
  push32((uint32_t)(0x1u));
  /* 100e468f push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e4694 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e469au);
  /* 100e469a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e469d:;
  /* 100e469d push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e46a2 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e46a8u);
  /* 100e46a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e46ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e46ae jle 0x100e46c4 */
  if ((C.zf||C.sf!=C.of)) goto L_100e46c4;
  /* 100e46b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e46b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e46b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e46b6 push 0x100f3858 */
  push32((uint32_t)(0x100f3858u));
  /* 100e46bb call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e46c1u);
  /* 100e46c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e46c4:;
  /* 100e46c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e46c6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e46c8 push 0x100f60f0 */
  push32((uint32_t)(0x100f60f0u));
  /* 100e46cd call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e46d3u);
  /* 100e46d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e46d6:;
  /* 100e46d6 push 0x100f6170 */
  push32((uint32_t)(0x100f6170u));
  /* 100e46db call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e46e1u);
  /* 100e46e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e46e4 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e46e7 jle 0x100e46fd */
  if ((C.zf||C.sf!=C.of)) goto L_100e46fd;
  /* 100e46e9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e46eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e46ed push 1 */
  push32((uint32_t)(0x1u));
  /* 100e46ef push 0x100f3858 */
  push32((uint32_t)(0x100f3858u));
  /* 100e46f4 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e46fau);
  /* 100e46fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e46fd:;
  /* 100e46fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e46ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4701 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4703 push 0x100f61c8 */
  push32((uint32_t)(0x100f61c8u));
  /* 100e4708 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e470eu);
  /* 100e470e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4710 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4712 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4714 push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e4719 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e471fu);
  /* 100e471f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4721 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4723 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4725 push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e472a call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4730u);
  /* 100e4730 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4732 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4734 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4736 push 0x100f5fb0 */
  push32((uint32_t)(0x100f5fb0u));
  /* 100e473b call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4741u);
  /* 100e4741 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4744 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4746 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4748 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e474a push 0x100f61c8 */
  push32((uint32_t)(0x100f61c8u));
  /* 100e474f call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4755u);
  /* 100e4755 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4757 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e4759 push 0x100f3640 */
  push32((uint32_t)(0x100f3640u));
  /* 100e475e call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4764u);
  /* 100e4764 push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e4769 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e476fu);
  /* 100e476f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e4774 jle 0x100e478a */
  if ((C.zf||C.sf!=C.of)) goto L_100e478a;
  /* 100e4776 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4778 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e477a push 1 */
  push32((uint32_t)(0x1u));
  /* 100e477c push 0x100f60d8 */
  push32((uint32_t)(0x100f60d8u));
  /* 100e4781 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4787u);
  /* 100e4787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e478a:;
  /* 100e478a call dword ptr [0x100f6550] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6550))), 0x100e4790u);
  /* 100e4790 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4792 je 0x100e47a8 */
  if (C.zf) goto L_100e47a8;
  /* 100e4794 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4796 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4798 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e479a push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e479f call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e47a5u);
  /* 100e47a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e47a8:;
  /* 100e47a8 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e47aa push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e47ac push 1 */
  push32((uint32_t)(0x1u));
  /* 100e47ae push 0x100f5fc8 */
  push32((uint32_t)(0x100f5fc8u));
  /* 100e47b3 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e47b9u);
  /* 100e47b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e47bb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e47bd push 1 */
  push32((uint32_t)(0x1u));
  /* 100e47bf push 0x100f35f8 */
  push32((uint32_t)(0x100f35f8u));
  /* 100e47c4 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e47cau);
  /* 100e47ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e47cd cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e47d0 jle 0x100e47e6 */
  if ((C.zf||C.sf!=C.of)) goto L_100e47e6;
  /* 100e47d2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e47d4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e47d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e47d8 push 0x100f5fb8 */
  push32((uint32_t)(0x100f5fb8u));
  /* 100e47dd call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e47e3u);
  /* 100e47e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e47e6:;
  /* 100e47e6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e47e8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e47ea push 1 */
  push32((uint32_t)(0x1u));
  /* 100e47ec push 0x100f6238 */
  push32((uint32_t)(0x100f6238u));
  /* 100e47f1 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e47f7u);
  /* 100e47f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e47f9 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e47fb push 2 */
  push32((uint32_t)(0x2u));
  /* 100e47fd push 0x100f6238 */
  push32((uint32_t)(0x100f6238u));
  /* 100e4802 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4808u);
  /* 100e4808 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e480a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e480c push 0x100f6058 */
  push32((uint32_t)(0x100f6058u));
  /* 100e4811 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4817u);
  /* 100e4817 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4819 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e481b push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e4820 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4826u);
  /* 100e4826 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4828 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e482a push 0x100f6198 */
  push32((uint32_t)(0x100f6198u));
  /* 100e482f call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4835u);
  /* 100e4835 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4838 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e483a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e483c push 0x100f6020 */
  push32((uint32_t)(0x100f6020u));
  /* 100e4841 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4847u);
  /* 100e4847 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4849 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e484b push 0x100f6010 */
  push32((uint32_t)(0x100f6010u));
  /* 100e4850 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4856u);
  /* 100e4856 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4858 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e485a push 0x100f6018 */
  push32((uint32_t)(0x100f6018u));
  /* 100e485f call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4865u);
  /* 100e4865 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e486a call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e4870u);
  /* 100e4870 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e4875 je 0x100e4934 */
  if (C.zf) goto L_100e4934;
  /* 100e487b push 0x100f6198 */
  push32((uint32_t)(0x100f6198u));
  /* 100e4880 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e4886u);
  /* 100e4886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4889 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e488b jne 0x100e4934 */
  if (!C.zf) goto L_100e4934;
  /* 100e4891 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4893 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4899u);
  /* 100e4899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e489c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e48a1 jle 0x100e48c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100e48c7;
  /* 100e48a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e48a5 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e48abu);
  /* 100e48ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e48ae cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e48b3 jle 0x100e48c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100e48c7;
  /* 100e48b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e48b7 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e48bdu);
  /* 100e48bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e48c0 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e48c5 jg 0x100e4934 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e4934;
L_100e48c7:;
  /* 100e48c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e48c9 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e48cfu);
  /* 100e48cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e48d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e48d4 je 0x100e495b */
  if (C.zf) goto L_100e495b;
  /* 100e48da push 5 */
  push32((uint32_t)(0x5u));
  /* 100e48dc call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e48e2u);
  /* 100e48e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e48e5 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e48ea jle 0x100e495b */
  if ((C.zf||C.sf!=C.of)) goto L_100e495b;
  /* 100e48ec push 5 */
  push32((uint32_t)(0x5u));
  /* 100e48ee call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e48f4u);
  /* 100e48f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e48f7 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e48fc jle 0x100e490f */
  if ((C.zf||C.sf!=C.of)) goto L_100e490f;
  /* 100e48fe push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100e4903 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4905 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4907 call 0x100e2610 */
  push32(0x100e490cu); f_100e2610();
  /* 100e490c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e490f:;
  /* 100e490f push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4911 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4917u);
  /* 100e4917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e491a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e491f jle 0x100e495b */
  if ((C.zf||C.sf!=C.of)) goto L_100e495b;
  /* 100e4921 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100e4926 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4928 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e492a call 0x100e2610 */
  push32(0x100e492fu); f_100e2610();
  /* 100e492f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4932 jmp 0x100e495b */
  goto L_100e495b;
L_100e4934:;
  /* 100e4934 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e4936 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4938 call 0x100e25f0 */
  push32(0x100e493du); f_100e25f0();
  /* 100e493d push 0 */
  push32((uint32_t)(0x0u));
  /* 100e493f push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4941 call 0x100e25f0 */
  push32(0x100e4946u); f_100e25f0();
  /* 100e4946 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e4948 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e494a call 0x100e25f0 */
  push32(0x100e494fu); f_100e25f0();
  /* 100e494f push 0 */
  push32((uint32_t)(0x0u));
  /* 100e4951 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4953 call 0x100e25f0 */
  push32(0x100e4958u); f_100e25f0();
  /* 100e4958 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e495b:;
  /* 100e495b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e495d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e495f push 0x100f3780 */
  push32((uint32_t)(0x100f3780u));
  /* 100e4964 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e496au);
  /* 100e496a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e496c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e496e push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4970 push 0x100f62b8 */
  push32((uint32_t)(0x100f62b8u));
  /* 100e4975 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e497bu);
  /* 100e497b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e497d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e497f push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4981 push 0x100f62b8 */
  push32((uint32_t)(0x100f62b8u));
  /* 100e4986 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e498cu);
  /* 100e498c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e498e push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4990 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4992 push 0x100f62b8 */
  push32((uint32_t)(0x100f62b8u));
  /* 100e4997 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e499du);
  /* 100e499d push 0x100f3938 */
  push32((uint32_t)(0x100f3938u));
  /* 100e49a2 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e49a8u);
  /* 100e49a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e49ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e49ad jne 0x100e49f8 */
  if (!C.zf) goto L_100e49f8;
  /* 100e49af push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 100e49b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e49b3 call 0x100e2640 */
  push32(0x100e49b8u); f_100e2640();
  /* 100e49b8 mov esi, eax */
  ESI = (EAX);
  /* 100e49ba push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100e49bc push 0 */
  push32((uint32_t)(0x0u));
  /* 100e49be sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100e49c1 call 0x100e2640 */
  push32(0x100e49c6u); f_100e2640();
  /* 100e49c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100e49c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e49ca add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e49cc call 0x100e2640 */
  push32(0x100e49d1u); f_100e2640();
  /* 100e49d1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e49d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e49d6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e49d9 jle 0x100e49e8 */
  if ((C.zf||C.sf!=C.of)) goto L_100e49e8;
  /* 100e49db push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e49dd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e49df push 6 */
  push32((uint32_t)(0x6u));
  /* 100e49e1 push 0x100f5f70 */
  push32((uint32_t)(0x100f5f70u));
  /* 100e49e6 jmp 0x100e4a03 */
  goto L_100e4a03;
L_100e49e8:;
  /* 100e49e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e49ea je 0x100e4a0c */
  if (C.zf) goto L_100e4a0c;
  /* 100e49ec push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e49ee push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e49f0 push esi */
  push32((uint32_t)(ESI));
  /* 100e49f1 push 0x100f5f70 */
  push32((uint32_t)(0x100f5f70u));
  /* 100e49f6 jmp 0x100e4a03 */
  goto L_100e4a03;
L_100e49f8:;
  /* 100e49f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e49fa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e49fc push 0xa */
  push32((uint32_t)(0xau));
  /* 100e49fe push 0x100f38c8 */
  push32((uint32_t)(0x100f38c8u));
L_100e4a03:;
  /* 100e4a03 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4a09u);
  /* 100e4a09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4a0c:;
  /* 100e4a0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4a0e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e4a10 push 0x100f3938 */
  push32((uint32_t)(0x100f3938u));
  /* 100e4a15 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4a1bu);
  /* 100e4a1b push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e4a20 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e4a26u);
  /* 100e4a26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4a29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4a2b je 0x100e4a4e */
  if (C.zf) goto L_100e4a4e;
  /* 100e4a2d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4a2f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4a31 push 0x100f3938 */
  push32((uint32_t)(0x100f3938u));
  /* 100e4a36 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4a3cu);
  /* 100e4a3c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4a3e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e4a40 push 0x100f3850 */
  push32((uint32_t)(0x100f3850u));
  /* 100e4a45 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4a4bu);
  /* 100e4a4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4a4e:;
  /* 100e4a4e push 0x100f3938 */
  push32((uint32_t)(0x100f3938u));
  /* 100e4a53 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e4a59u);
  /* 100e4a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4a5c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4a5e je 0x100e4a86 */
  if (C.zf) goto L_100e4a86;
  /* 100e4a60 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4a62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4a64 push 0x100f3920 */
  push32((uint32_t)(0x100f3920u));
  /* 100e4a69 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4a6fu);
  /* 100e4a6f push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4a71 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100e4a73 push 0x100f3860 */
  push32((uint32_t)(0x100f3860u));
  /* 100e4a78 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4a7eu);
  /* 100e4a7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4a81 call 0x100e3320 */
  push32(0x100e4a86u); f_100e3320();
L_100e4a86:;
  /* 100e4a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e4a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4a8a call 0x100e25f0 */
  push32(0x100e4a8fu); f_100e25f0();
  /* 100e4a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 100e4a91 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4a97u);
  /* 100e4a97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4a9a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4a9f jle 0x100e4ae3 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4ae3;
  /* 100e4aa1 push 0x100f3780 */
  push32((uint32_t)(0x100f3780u));
  /* 100e4aa6 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e4aacu);
  /* 100e4aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4aaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4ab1 je 0x100e4ae3 */
  if (C.zf) goto L_100e4ae3;
  /* 100e4ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4ab5 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4abbu);
  /* 100e4abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4abe cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4ac3 jge 0x100e4ae3 */
  if ((C.sf==C.of)) goto L_100e4ae3;
  /* 100e4ac5 push 0x100f3938 */
  push32((uint32_t)(0x100f3938u));
  /* 100e4aca call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e4ad0u);
  /* 100e4ad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4ad3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4ad5 jne 0x100e4ae3 */
  if (!C.zf) goto L_100e4ae3;
  /* 100e4ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4ad9 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4adb call 0x100e25f0 */
  push32(0x100e4ae0u); f_100e25f0();
  /* 100e4ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4ae3:;
  /* 100e4ae3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4ae5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4ae7 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4ae9 push 0x100f61d0 */
  push32((uint32_t)(0x100f61d0u));
  /* 100e4aee call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4af4u);
  /* 100e4af4 push 0x100f60d0 */
  push32((uint32_t)(0x100f60d0u));
  /* 100e4af9 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e4affu);
  /* 100e4aff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4b02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4b04 je 0x100e4b1a */
  if (C.zf) goto L_100e4b1a;
  /* 100e4b06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4b08 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4b0a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e4b0c push 0x100f61d0 */
  push32((uint32_t)(0x100f61d0u));
  /* 100e4b11 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4b17u);
  /* 100e4b17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4b1a:;
  /* 100e4b1a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4b1c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e4b1e push 0x100f60d0 */
  push32((uint32_t)(0x100f60d0u));
  /* 100e4b23 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4b29u);
  /* 100e4b29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4b2b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e4b2d push 0x100f60e0 */
  push32((uint32_t)(0x100f60e0u));
  /* 100e4b32 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4b38u);
  /* 100e4b38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4b3a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4b3c push 0x100f62c8 */
  push32((uint32_t)(0x100f62c8u));
  /* 100e4b41 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4b47u);
  /* 100e4b47 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4b49 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4b4b push 0x100f62b0 */
  push32((uint32_t)(0x100f62b0u));
  /* 100e4b50 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4b56u);
  /* 100e4b56 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4b58 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4b5a push 0x100f62c0 */
  push32((uint32_t)(0x100f62c0u));
  /* 100e4b5f call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4b65u);
  /* 100e4b65 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4b67 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4b69 push 0x100f62a0 */
  push32((uint32_t)(0x100f62a0u));
  /* 100e4b6e call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4b74u);
  /* 100e4b74 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4b77 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4b79 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4b7b push 0x100f62a8 */
  push32((uint32_t)(0x100f62a8u));
  /* 100e4b80 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4b86u);
  /* 100e4b86 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4b88 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4b8a push 0x100f6298 */
  push32((uint32_t)(0x100f6298u));
  /* 100e4b8f call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4b95u);
  /* 100e4b95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4b98 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4b9b jle 0x100e4bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4bf4;
  /* 100e4b9d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 100e4ba1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4ba3 je 0x100e4bf4 */
  if (C.zf) goto L_100e4bf4;
  /* 100e4ba5 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4ba7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e4ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4bab push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e4bb0 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4bb6u);
  /* 100e4bb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4bb9 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4bbc jle 0x100e4bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4bf4;
  /* 100e4bbe push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4bc0 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e4bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4bc4 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e4bc9 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4bcfu);
  /* 100e4bcf push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4bd1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4bd3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4bd5 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e4bda call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4be0u);
  /* 100e4be0 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4be2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e4be4 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4be6 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e4beb call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4bf1u);
  /* 100e4bf1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4bf4:;
  /* 100e4bf4 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 100e4bf8 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100e4bfa je 0x100e4cde */
  if (C.zf) goto L_100e4cde;
  /* 100e4c00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4c02 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4c04 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4c06 push 0x100f38a8 */
  push32((uint32_t)(0x100f38a8u));
  /* 100e4c0b call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4c11u);
  /* 100e4c11 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e4c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4c15 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 100e4c17 push 0x100f6140 */
  push32((uint32_t)(0x100f6140u));
  /* 100e4c1c call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4c22u);
  /* 100e4c22 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e4c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4c26 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e4c28 push 0x100f6258 */
  push32((uint32_t)(0x100f6258u));
  /* 100e4c2d call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4c33u);
  /* 100e4c33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4c35 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e4c37 push 0x100f3610 */
  push32((uint32_t)(0x100f3610u));
  /* 100e4c3c call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4c42u);
  /* 100e4c42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4c44 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e4c46 push 0x100f36e8 */
  push32((uint32_t)(0x100f36e8u));
  /* 100e4c4b call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4c51u);
  /* 100e4c51 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4c54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4c56 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e4c58 push 0x100f3608 */
  push32((uint32_t)(0x100f3608u));
  /* 100e4c5d call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4c63u);
  /* 100e4c63 push 0x100f6178 */
  push32((uint32_t)(0x100f6178u));
  /* 100e4c68 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e4c6eu);
  /* 100e4c6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4c71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4c73 je 0x100e4c89 */
  if (C.zf) goto L_100e4c89;
  /* 100e4c75 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4c77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e4c79 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4c7b push 0x100f6350 */
  push32((uint32_t)(0x100f6350u));
  /* 100e4c80 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4c86u);
  /* 100e4c86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4c89:;
  /* 100e4c89 push 0x100f6090 */
  push32((uint32_t)(0x100f6090u));
  /* 100e4c8e call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e4c94u);
  /* 100e4c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4c97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4c99 je 0x100e4caf */
  if (C.zf) goto L_100e4caf;
  /* 100e4c9b push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4c9d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e4c9f push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4ca1 push 0x100f3648 */
  push32((uint32_t)(0x100f3648u));
  /* 100e4ca6 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4cacu);
  /* 100e4cac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4caf:;
  /* 100e4caf call 0x100e4360 */
  push32(0x100e4cb4u); f_100e4360();
L_100e4cb4:;
  /* 100e4cb4 push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e4cb9 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e4cbfu);
  /* 100e4cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4cc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4cc4 je 0x100e4d14 */
  if (C.zf) goto L_100e4d14;
  /* 100e4cc6 push 0x100f60e0 */
  push32((uint32_t)(0x100f60e0u));
  /* 100e4ccb call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e4cd1u);
  /* 100e4cd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4cd4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4cd6 jne 0x100e4d05 */
  if (!C.zf) goto L_100e4d05;
  /* 100e4cd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4cda push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4cdc jmp 0x100e4d09 */
  goto L_100e4d09;
L_100e4cde:;
  /* 100e4cde push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e4ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4ce2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e4ce4 push 0x100f6140 */
  push32((uint32_t)(0x100f6140u));
  /* 100e4ce9 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4cefu);
  /* 100e4cef push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e4cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4cf3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e4cf5 push 0x100f6258 */
  push32((uint32_t)(0x100f6258u));
  /* 100e4cfa call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4d00u);
  /* 100e4d00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4d03 jmp 0x100e4cb4 */
  goto L_100e4cb4;
L_100e4d05:;
  /* 100e4d05 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4d07 push 4 */
  push32((uint32_t)(0x4u));
L_100e4d09:;
  /* 100e4d09 push 8 */
  push32((uint32_t)(0x8u));
  /* 100e4d0b call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e4d11u);
  /* 100e4d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4d14:;
  /* 100e4d14 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e4d19 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e4d1fu);
  /* 100e4d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e4d24 je 0x100e4d3a */
  if (C.zf) goto L_100e4d3a;
  /* 100e4d26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4d28 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4d2a push 6 */
  push32((uint32_t)(0x6u));
  /* 100e4d2c push 0x100f61d0 */
  push32((uint32_t)(0x100f61d0u));
  /* 100e4d31 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4d37u);
  /* 100e4d37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4d3a:;
  /* 100e4d3a push 0x100f60d0 */
  push32((uint32_t)(0x100f60d0u));
  /* 100e4d3f call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e4d45u);
  /* 100e4d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4d48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4d4a je 0x100e4d60 */
  if (C.zf) goto L_100e4d60;
  /* 100e4d4c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4d4e push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4d50 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e4d52 push 0x100f61d0 */
  push32((uint32_t)(0x100f61d0u));
  /* 100e4d57 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4d5du);
  /* 100e4d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4d60:;
  /* 100e4d60 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100e4d62 je 0x100e4e63 */
  if (C.zf) goto L_100e4e63;
  /* 100e4d68 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e4d6a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e4d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4d6e push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e4d73 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4d79u);
  /* 100e4d79 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e4d7b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e4d7d push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4d7f push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e4d84 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4d8au);
  /* 100e4d8a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e4d8c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e4d8e push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4d90 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e4d95 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4d9bu);
  /* 100e4d9b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e4d9d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100e4d9f push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4da1 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e4da6 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4dacu);
  /* 100e4dac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4daf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e4db1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100e4db3 push 6 */
  push32((uint32_t)(0x6u));
  /* 100e4db5 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e4dba call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4dc0u);
  /* 100e4dc0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4dc2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e4dc4 push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e4dc9 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4dcfu);
  /* 100e4dcf push 0x100f60c0 */
  push32((uint32_t)(0x100f60c0u));
  /* 100e4dd4 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e4ddau);
  /* 100e4dda add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4ddd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4de0 jle 0x100e4e03 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4e03;
  /* 100e4de2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4de4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4de6 push 0x100f61e8 */
  push32((uint32_t)(0x100f61e8u));
  /* 100e4deb call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4df1u);
  /* 100e4df1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100e4df3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e4df5 push 0x100f61f0 */
  push32((uint32_t)(0x100f61f0u));
  /* 100e4dfa call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4e00u);
  /* 100e4e00 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4e03:;
  /* 100e4e03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4e05 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e4e07 push 0x100f60d0 */
  push32((uint32_t)(0x100f60d0u));
  /* 100e4e0c call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4e12u);
  /* 100e4e12 push 0x100f38e8 */
  push32((uint32_t)(0x100f38e8u));
  /* 100e4e17 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e4e1du);
  /* 100e4e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4e20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4e22 je 0x100e4e63 */
  if (C.zf) goto L_100e4e63;
  /* 100e4e24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4e26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4e28 push 0x100f6148 */
  push32((uint32_t)(0x100f6148u));
  /* 100e4e2d call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4e33u);
  /* 100e4e33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4e35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4e37 push 0x100f6158 */
  push32((uint32_t)(0x100f6158u));
  /* 100e4e3c call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4e42u);
  /* 100e4e42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4e44 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100e4e46 push 0x100f6160 */
  push32((uint32_t)(0x100f6160u));
  /* 100e4e4b call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4e51u);
  /* 100e4e51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100e4e55 push 0x100f6150 */
  push32((uint32_t)(0x100f6150u));
  /* 100e4e5a call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4e60u);
  /* 100e4e60 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4e63:;
  /* 100e4e63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4e65 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100e4e67 push 0x100f3780 */
  push32((uint32_t)(0x100f3780u));
  /* 100e4e6c call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4e72u);
  /* 100e4e72 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e4e74 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e4e76 push 0x100f38c0 */
  push32((uint32_t)(0x100f38c0u));
  /* 100e4e7b call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4e81u);
  /* 100e4e81 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4e83 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4e85 push 0x100f6130 */
  push32((uint32_t)(0x100f6130u));
  /* 100e4e8a call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e4e90u);
  /* 100e4e90 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 100e4e94 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4e97 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4e9c jle 0x100e4eba */
  if ((C.zf||C.sf!=C.of)) goto L_100e4eba;
  /* 100e4e9e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e4ea0 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e4ea2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 100e4ea7 push 0x100f60c0 */
  push32((uint32_t)(0x100f60c0u));
  /* 100e4eac call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e4eb2u);
  /* 100e4eb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4eb5 call 0x100e4310 */
  push32(0x100e4ebau); f_100e4310();
L_100e4eba:;
  /* 100e4eba push 0x100f3858 */
  push32((uint32_t)(0x100f3858u));
  /* 100e4ebf call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e4ec5u);
  /* 100e4ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e4eca je 0x100e5213 */
  if (C.zf) goto L_100e5213;
  /* 100e4ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e4ed2 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4ed8u);
  /* 100e4ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4eda mov edi, eax */
  EDI = (EAX);
  /* 100e4edc call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4ee2u);
  /* 100e4ee2 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4ee4 mov esi, eax */
  ESI = (EAX);
  /* 100e4ee6 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4eecu);
  /* 100e4eec push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4eee mov ebp, eax */
  EBP = (EAX);
  /* 100e4ef0 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4ef6u);
  /* 100e4ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e4ef8 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100e4efc call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e4f02u);
  /* 100e4f02 mov ebx, eax */
  EBX = (EAX);
  /* 100e4f04 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 100e4f08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4f0b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4f10 jge 0x100e4fa3 */
  if ((C.sf==C.of)) goto L_100e4fa3;
  /* 100e4f16 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4f1c jle 0x100e4f29 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4f29;
  /* 100e4f1e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100e4f23 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4f25 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4f27 jmp 0x100e4f9b */
  goto L_100e4f9b;
L_100e4f29:;
  /* 100e4f29 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4f2f jle 0x100e4f3c */
  if ((C.zf||C.sf!=C.of)) goto L_100e4f3c;
  /* 100e4f31 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 100e4f36 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e4f3a jmp 0x100e4f9b */
  goto L_100e4f9b;
L_100e4f3c:;
  /* 100e4f3c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4f42 jle 0x100e4f4f */
  if ((C.zf||C.sf!=C.of)) goto L_100e4f4f;
  /* 100e4f44 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100e4f49 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 100e4f4d jmp 0x100e4f9b */
  goto L_100e4f9b;
L_100e4f4f:;
  /* 100e4f4f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4f55 jle 0x100e4f62 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4f62;
  /* 100e4f57 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 100e4f5c push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 100e4f60 jmp 0x100e4f9b */
  goto L_100e4f9b;
L_100e4f62:;
  /* 100e4f62 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4f6a jle 0x100e4f77 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4f77;
  /* 100e4f6c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 100e4f71 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4f73 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4f75 jmp 0x100e4f9b */
  goto L_100e4f9b;
L_100e4f77:;
  /* 100e4f77 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4f7d jle 0x100e4f8a */
  if ((C.zf||C.sf!=C.of)) goto L_100e4f8a;
  /* 100e4f7f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 100e4f84 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4f86 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4f88 jmp 0x100e4f9b */
  goto L_100e4f9b;
L_100e4f8a:;
  /* 100e4f8a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4f90 jle 0x100e4fa3 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4fa3;
  /* 100e4f92 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 100e4f97 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4f99 push 1 */
  push32((uint32_t)(0x1u));
L_100e4f9b:;
  /* 100e4f9b call 0x100e2610 */
  push32(0x100e4fa0u); f_100e2610();
  /* 100e4fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4fa3:;
  /* 100e4fa3 push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e4fa8 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e4faeu);
  /* 100e4fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e4fb3 je 0x100e5003 */
  if (C.zf) goto L_100e5003;
  /* 100e4fb5 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4fbb jle 0x100e5003 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5003;
  /* 100e4fbd push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e4fc2 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e4fc8u);
  /* 100e4fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e4fcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e4fcd jne 0x100e5003 */
  if (!C.zf) goto L_100e5003;
  /* 100e4fcf cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4fd5 jle 0x100e4fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_100e4fe8;
  /* 100e4fd7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 100e4fdc push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4fde push 4 */
  push32((uint32_t)(0x4u));
  /* 100e4fe0 call 0x100e2610 */
  push32(0x100e4fe5u); f_100e2610();
  /* 100e4fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e4fe8:;
  /* 100e4fe8 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e4ff0 jle 0x100e5003 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5003;
  /* 100e4ff2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100e4ff7 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e4ff9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e4ffb call 0x100e2610 */
  push32(0x100e5000u); f_100e2610();
  /* 100e5000 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5003:;
  /* 100e5003 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e5005 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e500bu);
  /* 100e500b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e500e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5013 jle 0x100e5026 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5026;
  /* 100e5015 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100e501a push 1 */
  push32((uint32_t)(0x1u));
  /* 100e501c push 2 */
  push32((uint32_t)(0x2u));
  /* 100e501e call 0x100e2610 */
  push32(0x100e5023u); f_100e2610();
  /* 100e5023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5026:;
  /* 100e5026 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e5028 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e502eu);
  /* 100e502e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5031 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5036 jle 0x100e5049 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5049;
  /* 100e5038 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 100e503d push 1 */
  push32((uint32_t)(0x1u));
  /* 100e503f push 0 */
  push32((uint32_t)(0x0u));
  /* 100e5041 call 0x100e2610 */
  push32(0x100e5046u); f_100e2610();
  /* 100e5046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5049:;
  /* 100e5049 push 0x100f61c8 */
  push32((uint32_t)(0x100f61c8u));
  /* 100e504e call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5054u);
  /* 100e5054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5059 je 0x100e51e0 */
  if (C.zf) goto L_100e51e0;
  /* 100e505f push 0x100f6198 */
  push32((uint32_t)(0x100f6198u));
  /* 100e5064 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e506au);
  /* 100e506a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e506d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e506f jne 0x100e51e0 */
  if (!C.zf) goto L_100e51e0;
  /* 100e5075 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e5077 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e507du);
  /* 100e507d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5080 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5085 jle 0x100e5140 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5140;
  /* 100e508b push 0 */
  push32((uint32_t)(0x0u));
  /* 100e508d call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e5093u);
  /* 100e5093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5098 je 0x100e5140 */
  if (C.zf) goto L_100e5140;
  /* 100e509e push 1 */
  push32((uint32_t)(0x1u));
  /* 100e50a0 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e50a6u);
  /* 100e50a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e50a9 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e50ae jge 0x100e5140 */
  if ((C.sf==C.of)) goto L_100e5140;
  /* 100e50b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e50b6 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e50bcu);
  /* 100e50bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e50bf cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e50c4 jle 0x100e50d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100e50d7;
  /* 100e50c6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100e50cb push 1 */
  push32((uint32_t)(0x1u));
  /* 100e50cd push 5 */
  push32((uint32_t)(0x5u));
  /* 100e50cf call 0x100e2610 */
  push32(0x100e50d4u); f_100e2610();
  /* 100e50d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e50d7:;
  /* 100e50d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e50d9 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e50dfu);
  /* 100e50df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e50e2 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e50e7 jle 0x100e50fa */
  if ((C.zf||C.sf!=C.of)) goto L_100e50fa;
  /* 100e50e9 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 100e50ee push 1 */
  push32((uint32_t)(0x1u));
  /* 100e50f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e50f2 call 0x100e2610 */
  push32(0x100e50f7u); f_100e2610();
  /* 100e50f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e50fa:;
  /* 100e50fa push 2 */
  push32((uint32_t)(0x2u));
  /* 100e50fc call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e5102u);
  /* 100e5102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5105 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e510a jle 0x100e511d */
  if ((C.zf||C.sf!=C.of)) goto L_100e511d;
  /* 100e510c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 100e5111 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5113 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e5115 call 0x100e2610 */
  push32(0x100e511au); f_100e2610();
  /* 100e511a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e511d:;
  /* 100e511d push 3 */
  push32((uint32_t)(0x3u));
  /* 100e511f call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e5125u);
  /* 100e5125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5128 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e512d jle 0x100e5140 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5140;
  /* 100e512f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 100e5134 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5136 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e5138 call 0x100e2610 */
  push32(0x100e513du); f_100e2610();
  /* 100e513d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5140:;
  /* 100e5140 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e5142 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e5148u);
  /* 100e5148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e514b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5150 jle 0x100e51e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100e51e0;
  /* 100e5156 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5158 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e515eu);
  /* 100e515e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5163 je 0x100e51e0 */
  if (C.zf) goto L_100e51e0;
  /* 100e5165 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5167 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e516du);
  /* 100e516d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5170 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5175 jle 0x100e51e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100e51e0;
  /* 100e5177 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e5179 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e517fu);
  /* 100e517f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5182 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5187 jle 0x100e519a */
  if ((C.zf||C.sf!=C.of)) goto L_100e519a;
  /* 100e5189 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100e518e push 4 */
  push32((uint32_t)(0x4u));
  /* 100e5190 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e5192 call 0x100e2610 */
  push32(0x100e5197u); f_100e2610();
  /* 100e5197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e519a:;
  /* 100e519a push 2 */
  push32((uint32_t)(0x2u));
  /* 100e519c call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e51a2u);
  /* 100e51a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e51a5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e51aa jle 0x100e51bd */
  if ((C.zf||C.sf!=C.of)) goto L_100e51bd;
  /* 100e51ac push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 100e51b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e51b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e51b5 call 0x100e2610 */
  push32(0x100e51bau); f_100e2610();
  /* 100e51ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e51bd:;
  /* 100e51bd push 3 */
  push32((uint32_t)(0x3u));
  /* 100e51bf call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e51c5u);
  /* 100e51c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e51c8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e51cd jle 0x100e51e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100e51e0;
  /* 100e51cf push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 100e51d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e51d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e51d8 call 0x100e2610 */
  push32(0x100e51ddu); f_100e2610();
  /* 100e51dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e51e0:;
  /* 100e51e0 call dword ptr [0x100f64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e0))), 0x100e51e6u);
  /* 100e51e6 mov ecx, dword ptr [eax*4 + 0x100f65ec] */
  ECX = (r32((uint32_t)(EAX*4 + 0x100f65ec)));
  /* 100e51ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100e51ef jne 0x100e5213 */
  if (!C.zf) goto L_100e5213;
  /* 100e51f1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100e51f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e51f8 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e51fa call 0x100e2610 */
  push32(0x100e51ffu); f_100e2610();
  /* 100e51ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5202 call dword ptr [0x100f64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e0))), 0x100e5208u);
  /* 100e5208 mov dword ptr [eax*4 + 0x100f65ec], 1 */
  w32((uint32_t)(EAX*4 + 0x100f65ec), (0x1u));
L_100e5213:;
  /* 100e5213 pop edi */
  EDI = (pop32());
  /* 100e5214 pop esi */
  ESI = (pop32());
  /* 100e5215 pop ebp */
  EBP = (pop32());
  /* 100e5216 pop ebx */
  EBX = (pop32());
  /* 100e5217 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e521a ret  */
  ESPCHK(0x100e43e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005220 @ 0x100e5220 (72 bytes, 22 insns) */
void f_100e5220(void) {
  FTRACE(0x100e5220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e5220 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5222 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5224 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5226 push 0x100f5fb8 */
  push32((uint32_t)(0x100f5fb8u));
  /* 100e522b call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5231u);
  /* 100e5231 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5233 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5235 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5237 push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e523c call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5242u);
  /* 100e5242 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5244 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5246 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5248 push 0x100f5fb0 */
  push32((uint32_t)(0x100f5fb0u));
  /* 100e524d call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5253u);
  /* 100e5253 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5257 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5259 push 0x100f3858 */
  push32((uint32_t)(0x100f3858u));
  /* 100e525e call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5264u);
  /* 100e5264 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5267 ret  */
  ESPCHK(0x100e5220u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x100e5270 (55 bytes, 16 insns) */
void f_100e5270(void) {
  FTRACE(0x100e5270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e5270 cmp dword ptr [esp + 4], 0x100f3668 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x100f3668u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5278 jne 0x100e52a4 */
  if (!C.zf) goto L_100e52a4;
  /* 100e527a push 0x100f6320 */
  push32((uint32_t)(0x100f6320u));
  /* 100e527f call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e5285u);
  /* 100e5285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5288 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e528a je 0x100e52a4 */
  if (C.zf) goto L_100e52a4;
  /* 100e528c push 0x100f6268 */
  push32((uint32_t)(0x100f6268u));
  /* 100e5291 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e5297u);
  /* 100e5297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e529a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e529c je 0x100e52a4 */
  if (C.zf) goto L_100e52a4;
  /* 100e529e mov eax, 1 */
  EAX = (0x1u);
  /* 100e52a3 ret  */
  ESPCHK(0x100e5270u, _esp0);
  ESP += 4; return;
L_100e52a4:;
  /* 100e52a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e52a6 ret  */
  ESPCHK(0x100e5270u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x100e52b0 (2008 bytes, 535 insns) */
void f_100e52b0(void) {
  FTRACE(0x100e52b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e52b0 push 0x100f6258 */
  push32((uint32_t)(0x100f6258u));
  /* 100e52b5 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e52bbu);
  /* 100e52bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e52be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e52c0 jne 0x100e52d4 */
  if (!C.zf) goto L_100e52d4;
  /* 100e52c2 push 0x100f38a8 */
  push32((uint32_t)(0x100f38a8u));
  /* 100e52c7 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e52cdu);
  /* 100e52cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e52d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e52d2 je 0x100e5304 */
  if (C.zf) goto L_100e5304;
L_100e52d4:;
  /* 100e52d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e52d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e52d8 push 0x100f3930 */
  push32((uint32_t)(0x100f3930u));
  /* 100e52dd call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e52e3u);
  /* 100e52e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e52e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e52e7 push 0x100f61d8 */
  push32((uint32_t)(0x100f61d8u));
  /* 100e52ec call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e52f2u);
  /* 100e52f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e52f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e52f6 push 0x100f61e0 */
  push32((uint32_t)(0x100f61e0u));
  /* 100e52fb call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5301u);
  /* 100e5301 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5304:;
  /* 100e5304 push 0x100f6390 */
  push32((uint32_t)(0x100f6390u));
  /* 100e5309 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e530fu);
  /* 100e530f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5312 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5315 jg 0x100e533f */
  if ((!C.zf&&C.sf==C.of)) goto L_100e533f;
  /* 100e5317 push 0x100f6310 */
  push32((uint32_t)(0x100f6310u));
  /* 100e531c call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5322u);
  /* 100e5322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5325 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5328 jg 0x100e533f */
  if ((!C.zf&&C.sf==C.of)) goto L_100e533f;
  /* 100e532a push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e532f call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5335u);
  /* 100e5335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5338 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e533d jle 0x100e539d */
  if ((C.zf||C.sf!=C.of)) goto L_100e539d;
L_100e533f:;
  /* 100e533f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5341 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e5343 push 0x100f3608 */
  push32((uint32_t)(0x100f3608u));
  /* 100e5348 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e534eu);
  /* 100e534e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5350 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e5352 push 0x100f3610 */
  push32((uint32_t)(0x100f3610u));
  /* 100e5357 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e535du);
  /* 100e535d push 0x100f6390 */
  push32((uint32_t)(0x100f6390u));
  /* 100e5362 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5368u);
  /* 100e5368 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e536b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5370 jg 0x100e538b */
  if ((!C.zf&&C.sf==C.of)) goto L_100e538b;
  /* 100e5372 push 0x100f6310 */
  push32((uint32_t)(0x100f6310u));
  /* 100e5377 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e537du);
  /* 100e537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5380 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5383 jg 0x100e538b */
  if ((!C.zf&&C.sf==C.of)) goto L_100e538b;
  /* 100e5385 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5387 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100e5389 jmp 0x100e538f */
  goto L_100e538f;
L_100e538b:;
  /* 100e538b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e538d push 0x5f */
  push32((uint32_t)(0x5fu));
L_100e538f:;
  /* 100e538f push 0x100f36e8 */
  push32((uint32_t)(0x100f36e8u));
  /* 100e5394 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e539au);
  /* 100e539a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e539d:;
  /* 100e539d push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e53a2 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e53a8u);
  /* 100e53a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e53ab cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e53ae jle 0x100e5463 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5463;
  /* 100e53b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e53b6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e53b8 push 0x100f6330 */
  push32((uint32_t)(0x100f6330u));
  /* 100e53bd call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e53c3u);
  /* 100e53c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e53c5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100e53c7 push 0x100f6338 */
  push32((uint32_t)(0x100f6338u));
  /* 100e53cc call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e53d2u);
  /* 100e53d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e53d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e53d6 push 0x100f6320 */
  push32((uint32_t)(0x100f6320u));
  /* 100e53db call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e53e1u);
  /* 100e53e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e53e3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e53e5 push 0x100f6278 */
  push32((uint32_t)(0x100f6278u));
  /* 100e53ea call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e53f0u);
  /* 100e53f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e53f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100e53f4 push 0x100f6260 */
  push32((uint32_t)(0x100f6260u));
  /* 100e53f9 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e53ffu);
  /* 100e53ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5401 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5403 push 0x100f6268 */
  push32((uint32_t)(0x100f6268u));
  /* 100e5408 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e540eu);
  /* 100e540e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5411 push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e5416 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e541cu);
  /* 100e541c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e541f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5422 jle 0x100e5463 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5463;
  /* 100e5424 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5426 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5428 push 0x100f6328 */
  push32((uint32_t)(0x100f6328u));
  /* 100e542d call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5433u);
  /* 100e5433 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5435 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5437 push 0x100f6340 */
  push32((uint32_t)(0x100f6340u));
  /* 100e543c call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5442u);
  /* 100e5442 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5444 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5446 push 0x100f6280 */
  push32((uint32_t)(0x100f6280u));
  /* 100e544b call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5451u);
  /* 100e5451 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5453 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5455 push 0x100f6288 */
  push32((uint32_t)(0x100f6288u));
  /* 100e545a call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5460u);
  /* 100e5460 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5463:;
  /* 100e5463 push 0x100f60c0 */
  push32((uint32_t)(0x100f60c0u));
  /* 100e5468 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e546eu);
  /* 100e546e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5471 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5474 jle 0x100e550b */
  if ((C.zf||C.sf!=C.of)) goto L_100e550b;
  /* 100e547a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e547c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e547e push 0x100f38f0 */
  push32((uint32_t)(0x100f38f0u));
  /* 100e5483 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5489u);
  /* 100e5489 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e548b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e548d push 0x100f38f8 */
  push32((uint32_t)(0x100f38f8u));
  /* 100e5492 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5498u);
  /* 100e5498 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e549a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e549c push 0x100f38e8 */
  push32((uint32_t)(0x100f38e8u));
  /* 100e54a1 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e54a7u);
  /* 100e54a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e54a9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e54ab push 0x100f5f58 */
  push32((uint32_t)(0x100f5f58u));
  /* 100e54b0 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e54b6u);
  /* 100e54b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e54b8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e54ba push 0x100f5f48 */
  push32((uint32_t)(0x100f5f48u));
  /* 100e54bf call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e54c5u);
  /* 100e54c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e54c7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e54c9 push 0x100f5f50 */
  push32((uint32_t)(0x100f5f50u));
  /* 100e54ce call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e54d4u);
  /* 100e54d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e54d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e54d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e54db push 0x100f61e8 */
  push32((uint32_t)(0x100f61e8u));
  /* 100e54e0 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e54e6u);
  /* 100e54e6 push 0x100f60c0 */
  push32((uint32_t)(0x100f60c0u));
  /* 100e54eb call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e54f1u);
  /* 100e54f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e54f4 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e54f7 jle 0x100e550b */
  if ((C.zf||C.sf!=C.of)) goto L_100e550b;
  /* 100e54f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e54fb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e54fd push 0x100f61f0 */
  push32((uint32_t)(0x100f61f0u));
  /* 100e5502 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5508u);
  /* 100e5508 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e550b:;
  /* 100e550b push 0x100f36e0 */
  push32((uint32_t)(0x100f36e0u));
  /* 100e5510 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5516u);
  /* 100e5516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5519 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e551c jle 0x100e553f */
  if ((C.zf||C.sf!=C.of)) goto L_100e553f;
  /* 100e551e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5520 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5522 push 0x100f6240 */
  push32((uint32_t)(0x100f6240u));
  /* 100e5527 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e552du);
  /* 100e552d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e552f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5531 push 0x100f5fa8 */
  push32((uint32_t)(0x100f5fa8u));
  /* 100e5536 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e553cu);
  /* 100e553c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e553f:;
  /* 100e553f push 0x100f6390 */
  push32((uint32_t)(0x100f6390u));
  /* 100e5544 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e554au);
  /* 100e554a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e554d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5550 jle 0x100e5623 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5623;
  /* 100e5556 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5558 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e555a push 0x100f6110 */
  push32((uint32_t)(0x100f6110u));
  /* 100e555f call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5565u);
  /* 100e5565 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5567 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100e5569 push 0x100f6108 */
  push32((uint32_t)(0x100f6108u));
  /* 100e556e call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5574u);
  /* 100e5574 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5576 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5578 push 0x100f6100 */
  push32((uint32_t)(0x100f6100u));
  /* 100e557d call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5583u);
  /* 100e5583 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5585 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e5587 push 0x100f5ff8 */
  push32((uint32_t)(0x100f5ff8u));
  /* 100e558c call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5592u);
  /* 100e5592 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5594 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100e5596 push 0x100f5ff0 */
  push32((uint32_t)(0x100f5ff0u));
  /* 100e559b call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e55a1u);
  /* 100e55a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e55a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e55a5 push 0x100f5fe8 */
  push32((uint32_t)(0x100f5fe8u));
  /* 100e55aa call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e55b0u);
  /* 100e55b0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e55b3 push 0x100f6390 */
  push32((uint32_t)(0x100f6390u));
  /* 100e55b8 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e55beu);
  /* 100e55be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e55c1 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e55c4 jle 0x100e5623 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5623;
  /* 100e55c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e55c8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e55ca push 0x100f60f8 */
  push32((uint32_t)(0x100f60f8u));
  /* 100e55cf call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e55d5u);
  /* 100e55d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e55d7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e55d9 push 0x100f60e8 */
  push32((uint32_t)(0x100f60e8u));
  /* 100e55de call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e55e4u);
  /* 100e55e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e55e6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e55e8 push 0x100f6138 */
  push32((uint32_t)(0x100f6138u));
  /* 100e55ed call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e55f3u);
  /* 100e55f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e55f5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e55f7 push 0x100f5fe0 */
  push32((uint32_t)(0x100f5fe0u));
  /* 100e55fc call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5602u);
  /* 100e5602 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5604 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e5606 push 0x100f5fd8 */
  push32((uint32_t)(0x100f5fd8u));
  /* 100e560b call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5611u);
  /* 100e5611 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5613 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e5615 push 0x100f5fd0 */
  push32((uint32_t)(0x100f5fd0u));
  /* 100e561a call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5620u);
  /* 100e5620 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5623:;
  /* 100e5623 push 0x100f6310 */
  push32((uint32_t)(0x100f6310u));
  /* 100e5628 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e562eu);
  /* 100e562e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5631 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5634 jle 0x100e5706 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5706;
  /* 100e563a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e563c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e563e push 0x100f3728 */
  push32((uint32_t)(0x100f3728u));
  /* 100e5643 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5649u);
  /* 100e5649 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e564b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e564d push 0x100f3720 */
  push32((uint32_t)(0x100f3720u));
  /* 100e5652 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5658u);
  /* 100e5658 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e565a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e565c push 0x100f3718 */
  push32((uint32_t)(0x100f3718u));
  /* 100e5661 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5667u);
  /* 100e5667 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5669 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e566b push 0x100f3698 */
  push32((uint32_t)(0x100f3698u));
  /* 100e5670 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5676u);
  /* 100e5676 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5678 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e567a push 0x100f3690 */
  push32((uint32_t)(0x100f3690u));
  /* 100e567f call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5685u);
  /* 100e5685 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5687 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e5689 push 0x100f3688 */
  push32((uint32_t)(0x100f3688u));
  /* 100e568e call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5694u);
  /* 100e5694 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5697 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5699 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e569b push 0x100f3680 */
  push32((uint32_t)(0x100f3680u));
  /* 100e56a0 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e56a6u);
  /* 100e56a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e56a8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e56aa push 0x100f3658 */
  push32((uint32_t)(0x100f3658u));
  /* 100e56af call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e56b5u);
  /* 100e56b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e56b7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e56b9 push 0x100f3650 */
  push32((uint32_t)(0x100f3650u));
  /* 100e56be call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e56c4u);
  /* 100e56c4 push 0x100f3650 */
  push32((uint32_t)(0x100f3650u));
  /* 100e56c9 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e56cfu);
  /* 100e56cf add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e56d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e56d4 je 0x100e5706 */
  if (C.zf) goto L_100e5706;
  /* 100e56d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e56d8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e56da push 0x100f3700 */
  push32((uint32_t)(0x100f3700u));
  /* 100e56df call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e56e5u);
  /* 100e56e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e56e7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e56e9 push 0x100f36f8 */
  push32((uint32_t)(0x100f36f8u));
  /* 100e56ee call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e56f4u);
  /* 100e56f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e56f6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e56f8 push 0x100f36f0 */
  push32((uint32_t)(0x100f36f0u));
  /* 100e56fd call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5703u);
  /* 100e5703 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5706:;
  /* 100e5706 push 0x100f3670 */
  push32((uint32_t)(0x100f3670u));
  /* 100e570b call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5711u);
  /* 100e5711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5714 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5717 jle 0x100e579f */
  if ((C.zf||C.sf!=C.of)) goto L_100e579f;
  /* 100e571d push 0x100f3660 */
  push32((uint32_t)(0x100f3660u));
  /* 100e5722 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5728u);
  /* 100e5728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e572b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e572e jge 0x100e579f */
  if ((C.sf==C.of)) goto L_100e579f;
  /* 100e5730 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5732 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e5734 push 0x100f38e0 */
  push32((uint32_t)(0x100f38e0u));
  /* 100e5739 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e573fu);
  /* 100e573f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5741 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100e5743 push 0x100f38d8 */
  push32((uint32_t)(0x100f38d8u));
  /* 100e5748 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e574eu);
  /* 100e574e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5750 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5752 push 0x100f38d0 */
  push32((uint32_t)(0x100f38d0u));
  /* 100e5757 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e575du);
  /* 100e575d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e575f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e5761 push 0x100f3898 */
  push32((uint32_t)(0x100f3898u));
  /* 100e5766 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e576cu);
  /* 100e576c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e576e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e5770 push 0x100f3890 */
  push32((uint32_t)(0x100f3890u));
  /* 100e5775 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e577bu);
  /* 100e577b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e577d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e577f push 0x100f3888 */
  push32((uint32_t)(0x100f3888u));
  /* 100e5784 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e578au);
  /* 100e578a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e578d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e578f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5791 push 0x100f61e8 */
  push32((uint32_t)(0x100f61e8u));
  /* 100e5796 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e579cu);
  /* 100e579c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e579f:;
  /* 100e579f push 0x100f3660 */
  push32((uint32_t)(0x100f3660u));
  /* 100e57a4 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e57aau);
  /* 100e57aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e57ad cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e57b0 jle 0x100e5891 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5891;
  /* 100e57b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e57b8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e57ba push 0x100f3638 */
  push32((uint32_t)(0x100f3638u));
  /* 100e57bf call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e57c5u);
  /* 100e57c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e57c7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100e57c9 push 0x100f3630 */
  push32((uint32_t)(0x100f3630u));
  /* 100e57ce call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e57d4u);
  /* 100e57d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e57d6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e57d8 push 0x100f3628 */
  push32((uint32_t)(0x100f3628u));
  /* 100e57dd call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e57e3u);
  /* 100e57e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e57e5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e57e7 push 0x100f62f8 */
  push32((uint32_t)(0x100f62f8u));
  /* 100e57ec call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e57f2u);
  /* 100e57f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e57f4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e57f6 push 0x100f62f0 */
  push32((uint32_t)(0x100f62f0u));
  /* 100e57fb call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5801u);
  /* 100e5801 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5803 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100e5805 push 0x100f62e8 */
  push32((uint32_t)(0x100f62e8u));
  /* 100e580a call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5810u);
  /* 100e5810 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5813 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5815 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e5817 push 0x100f6370 */
  push32((uint32_t)(0x100f6370u));
  /* 100e581c call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5822u);
  /* 100e5822 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5824 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100e5826 push 0x100f6368 */
  push32((uint32_t)(0x100f6368u));
  /* 100e582b call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5831u);
  /* 100e5831 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5833 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e5835 push 0x100f63b8 */
  push32((uint32_t)(0x100f63b8u));
  /* 100e583a call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5840u);
  /* 100e5840 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5842 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100e5844 push 0x100f63b0 */
  push32((uint32_t)(0x100f63b0u));
  /* 100e5849 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e584fu);
  /* 100e584f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5851 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100e5853 push 0x100f63a8 */
  push32((uint32_t)(0x100f63a8u));
  /* 100e5858 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e585eu);
  /* 100e585e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5860 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100e5862 push 0x100f63a0 */
  push32((uint32_t)(0x100f63a0u));
  /* 100e5867 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e586du);
  /* 100e586d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5870 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5872 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5874 push 0x100f61e8 */
  push32((uint32_t)(0x100f61e8u));
  /* 100e5879 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e587fu);
  /* 100e587f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5881 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5883 push 0x100f61f0 */
  push32((uint32_t)(0x100f61f0u));
  /* 100e5888 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e588eu);
  /* 100e588e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5891:;
  /* 100e5891 push 0x100f5f60 */
  push32((uint32_t)(0x100f5f60u));
  /* 100e5896 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e589cu);
  /* 100e589c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e589f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e58a2 jle 0x100e5a00 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5a00;
  /* 100e58a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e58aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e58ac push 0x100f36c0 */
  push32((uint32_t)(0x100f36c0u));
  /* 100e58b1 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e58b7u);
  /* 100e58b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e58b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e58bb push 0x100f36c8 */
  push32((uint32_t)(0x100f36c8u));
  /* 100e58c0 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e58c6u);
  /* 100e58c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e58c8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e58ca push 0x100f36d0 */
  push32((uint32_t)(0x100f36d0u));
  /* 100e58cf call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e58d5u);
  /* 100e58d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e58d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e58d9 push 0x100f36d8 */
  push32((uint32_t)(0x100f36d8u));
  /* 100e58de call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e58e4u);
  /* 100e58e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e58e6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e58e8 push 0x100f36a0 */
  push32((uint32_t)(0x100f36a0u));
  /* 100e58ed call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e58f3u);
  /* 100e58f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e58f5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e58f7 push 0x100f36b0 */
  push32((uint32_t)(0x100f36b0u));
  /* 100e58fc call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5902u);
  /* 100e5902 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5905 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5907 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5909 push 0x100f3768 */
  push32((uint32_t)(0x100f3768u));
  /* 100e590e call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5914u);
  /* 100e5914 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5916 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5918 push 0x100f3770 */
  push32((uint32_t)(0x100f3770u));
  /* 100e591d call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5923u);
  /* 100e5923 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5925 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5927 push 0x100f3778 */
  push32((uint32_t)(0x100f3778u));
  /* 100e592c call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5932u);
  /* 100e5932 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5934 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5936 push 0x100f3750 */
  push32((uint32_t)(0x100f3750u));
  /* 100e593b call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5941u);
  /* 100e5941 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5945 push 0x100f3758 */
  push32((uint32_t)(0x100f3758u));
  /* 100e594a call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5950u);
  /* 100e5950 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5952 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5954 push 0x100f3760 */
  push32((uint32_t)(0x100f3760u));
  /* 100e5959 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e595fu);
  /* 100e595f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5962 push 0x100f5f60 */
  push32((uint32_t)(0x100f5f60u));
  /* 100e5967 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e596du);
  /* 100e596d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5970 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5973 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5975 jle 0x100e598a */
  if ((C.zf||C.sf!=C.of)) goto L_100e598a;
  /* 100e5977 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5979 push 0x100f6008 */
  push32((uint32_t)(0x100f6008u));
  /* 100e597e call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5984u);
  /* 100e5984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5986 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5988 jmp 0x100e599b */
  goto L_100e599b;
L_100e598a:;
  /* 100e598a push 0xf */
  push32((uint32_t)(0xfu));
  /* 100e598c push 0x100f6008 */
  push32((uint32_t)(0x100f6008u));
  /* 100e5991 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5997u);
  /* 100e5997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5999 push 0xf */
  push32((uint32_t)(0xfu));
L_100e599b:;
  /* 100e599b push 0x100f6068 */
  push32((uint32_t)(0x100f6068u));
  /* 100e59a0 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e59a6u);
  /* 100e59a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e59a9 push 0x100f6008 */
  push32((uint32_t)(0x100f6008u));
  /* 100e59ae call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e59b4u);
  /* 100e59b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e59b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e59b9 je 0x100e59df */
  if (C.zf) goto L_100e59df;
  /* 100e59bb push 0x100f6068 */
  push32((uint32_t)(0x100f6068u));
  /* 100e59c0 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e59c6u);
  /* 100e59c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e59c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e59cb je 0x100e59df */
  if (C.zf) goto L_100e59df;
  /* 100e59cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e59cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e59d1 push 0x100f6060 */
  push32((uint32_t)(0x100f6060u));
  /* 100e59d6 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e59dcu);
  /* 100e59dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e59df:;
  /* 100e59df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e59e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e59e3 push 0x100f61e8 */
  push32((uint32_t)(0x100f61e8u));
  /* 100e59e8 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e59eeu);
  /* 100e59ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e59f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e59f2 push 0x100f61f0 */
  push32((uint32_t)(0x100f61f0u));
  /* 100e59f7 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e59fdu);
  /* 100e59fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5a00:;
  /* 100e5a00 push 0x100f62e8 */
  push32((uint32_t)(0x100f62e8u));
  /* 100e5a05 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e5a0bu);
  /* 100e5a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5a0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e5a10 je 0x100e5a87 */
  if (C.zf) goto L_100e5a87;
  /* 100e5a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5a14 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5a16 push 0x100f6150 */
  push32((uint32_t)(0x100f6150u));
  /* 100e5a1b call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5a21u);
  /* 100e5a21 push 0x100f6150 */
  push32((uint32_t)(0x100f6150u));
  /* 100e5a26 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e5a2cu);
  /* 100e5a2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5a2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e5a31 je 0x100e5a87 */
  if (C.zf) goto L_100e5a87;
  /* 100e5a33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5a35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5a37 push 0x100f6160 */
  push32((uint32_t)(0x100f6160u));
  /* 100e5a3c call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5a42u);
  /* 100e5a42 push 0x100f6160 */
  push32((uint32_t)(0x100f6160u));
  /* 100e5a47 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e5a4du);
  /* 100e5a4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5a50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e5a52 je 0x100e5a87 */
  if (C.zf) goto L_100e5a87;
  /* 100e5a54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5a56 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5a58 push 0x100f6158 */
  push32((uint32_t)(0x100f6158u));
  /* 100e5a5d call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5a63u);
  /* 100e5a63 push 0x100f6158 */
  push32((uint32_t)(0x100f6158u));
  /* 100e5a68 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e5a6eu);
  /* 100e5a6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5a71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e5a73 je 0x100e5a87 */
  if (C.zf) goto L_100e5a87;
  /* 100e5a75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5a77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5a79 push 0x100f6148 */
  push32((uint32_t)(0x100f6148u));
  /* 100e5a7e call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5a84u);
  /* 100e5a84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5a87:;
  /* 100e5a87 ret  */
  ESPCHK(0x100e52b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x100e5a90 (305 bytes, 86 insns) */
void f_100e5a90(void) {
  FTRACE(0x100e5a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e5a90 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5a92 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e5a94 push 0x100f6358 */
  push32((uint32_t)(0x100f6358u));
  /* 100e5a99 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5a9fu);
  /* 100e5a9f push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e5aa4 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5aaau);
  /* 100e5aaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5aaf je 0x100e5ac3 */
  if (C.zf) goto L_100e5ac3;
  /* 100e5ab1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5ab3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5ab5 push 0x100f3640 */
  push32((uint32_t)(0x100f3640u));
  /* 100e5aba call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5ac0u);
  /* 100e5ac0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5ac3:;
  /* 100e5ac3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5ac5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5ac7 push 0x100f6058 */
  push32((uint32_t)(0x100f6058u));
  /* 100e5acc call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5ad2u);
  /* 100e5ad2 push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e5ad7 call 0x100e5270 */
  push32(0x100e5adcu); f_100e5270();
  /* 100e5adc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5ae1 jne 0x100e5af1 */
  if (!C.zf) goto L_100e5af1;
  /* 100e5ae3 mov eax, dword ptr [0x100f5f38] */
  EAX = (r32((uint32_t)(0x100f5f38)));
  /* 100e5ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5aea je 0x100e5b03 */
  if (C.zf) goto L_100e5b03;
  /* 100e5aec cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5aef je 0x100e5b03 */
  if (C.zf) goto L_100e5b03;
L_100e5af1:;
  /* 100e5af1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5af3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100e5af5 push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e5afa call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5b00u);
  /* 100e5b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5b03:;
  /* 100e5b03 push 0x100f5fc8 */
  push32((uint32_t)(0x100f5fc8u));
  /* 100e5b08 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5b0eu);
  /* 100e5b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5b13 je 0x100e5b27 */
  if (C.zf) goto L_100e5b27;
  /* 100e5b15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5b17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5b19 push 0x100f6020 */
  push32((uint32_t)(0x100f6020u));
  /* 100e5b1e call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5b24u);
  /* 100e5b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5b27:;
  /* 100e5b27 push 0x100f6130 */
  push32((uint32_t)(0x100f6130u));
  /* 100e5b2c call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e5b32u);
  /* 100e5b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5b35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e5b37 je 0x100e5b4b */
  if (C.zf) goto L_100e5b4b;
  /* 100e5b39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5b3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5b3d push 0x100f6010 */
  push32((uint32_t)(0x100f6010u));
  /* 100e5b42 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5b48u);
  /* 100e5b48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5b4b:;
  /* 100e5b4b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5b4d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 100e5b4f push 0x100f6130 */
  push32((uint32_t)(0x100f6130u));
  /* 100e5b54 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5b5au);
  /* 100e5b5a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5b5c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 100e5b5e push 0x100f60e0 */
  push32((uint32_t)(0x100f60e0u));
  /* 100e5b63 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5b69u);
  /* 100e5b69 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e5b6e call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5b74u);
  /* 100e5b74 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5b79 je 0x100e5b8d */
  if (C.zf) goto L_100e5b8d;
  /* 100e5b7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5b7d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 100e5b7f push 0x100f6198 */
  push32((uint32_t)(0x100f6198u));
  /* 100e5b84 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5b8au);
  /* 100e5b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5b8d:;
  /* 100e5b8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5b8f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 100e5b91 push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e5b96 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5b9cu);
  /* 100e5b9c push 0x100f6238 */
  push32((uint32_t)(0x100f6238u));
  /* 100e5ba1 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5ba7u);
  /* 100e5ba7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5bac je 0x100e5bc0 */
  if (C.zf) goto L_100e5bc0;
  /* 100e5bae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5bb0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5bb2 push 0x100f38c0 */
  push32((uint32_t)(0x100f38c0u));
  /* 100e5bb7 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e5bbdu);
  /* 100e5bbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5bc0:;
  /* 100e5bc0 ret  */
  ESPCHK(0x100e5a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x100e5bd0 (536 bytes, 150 insns) */
void f_100e5bd0(void) {
  FTRACE(0x100e5bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e5bd0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5bd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5bd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e5bd6 push 0x100f6238 */
  push32((uint32_t)(0x100f6238u));
  /* 100e5bdb call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5be1u);
  /* 100e5be1 push 0x100f5fc8 */
  push32((uint32_t)(0x100f5fc8u));
  /* 100e5be6 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e5becu);
  /* 100e5bec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5bf1 je 0x100e5c18 */
  if (C.zf) goto L_100e5c18;
  /* 100e5bf3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5bf5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e5bf9 push 0x100f5fb8 */
  push32((uint32_t)(0x100f5fb8u));
  /* 100e5bfe call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5c04u);
  /* 100e5c04 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5c06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5c08 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e5c0a push 0x100f5fb0 */
  push32((uint32_t)(0x100f5fb0u));
  /* 100e5c0f call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5c15u);
  /* 100e5c15 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5c18:;
  /* 100e5c18 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5c1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5c1e push 0x100f5fb8 */
  push32((uint32_t)(0x100f5fb8u));
  /* 100e5c23 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5c29u);
  /* 100e5c29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5c2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5c2d push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5c2f push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e5c34 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5c3au);
  /* 100e5c3a mov eax, dword ptr [0x100f6294] */
  EAX = (r32((uint32_t)(0x100f6294)));
  /* 100e5c3f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5c42 mov ecx, dword ptr [eax*4 + 0x100f5f78] */
  ECX = (r32((uint32_t)(EAX*4 + 0x100f5f78)));
  /* 100e5c49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100e5c4b jne 0x100e5c68 */
  if (!C.zf) goto L_100e5c68;
  /* 100e5c4d call 0x100e5220 */
  push32(0x100e5c52u); f_100e5220();
  /* 100e5c52 push 0x100f3858 */
  push32((uint32_t)(0x100f3858u));
  /* 100e5c57 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e5c5du);
  /* 100e5c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5c62 je 0x100e5de7 */
  if (C.zf) goto L_100e5de7;
L_100e5c68:;
  /* 100e5c68 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5c6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5c6c push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5c6e push 0x100f61c8 */
  push32((uint32_t)(0x100f61c8u));
  /* 100e5c73 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5c79u);
  /* 100e5c79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5c7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 100e5c7f push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e5c84 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5c8au);
  /* 100e5c8a push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e5c8f call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e5c95u);
  /* 100e5c95 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5c98 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5c9b jge 0x100e5caa */
  if ((C.sf==C.of)) goto L_100e5caa;
  /* 100e5c9d call 0x100e2670 */
  push32(0x100e5ca2u); f_100e2670();
  /* 100e5ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5ca4 jne 0x100e5de7 */
  if (!C.zf) goto L_100e5de7;
L_100e5caa:;
  /* 100e5caa push esi */
  push32((uint32_t)(ESI));
  /* 100e5cab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5cad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5caf push 2 */
  push32((uint32_t)(0x2u));
  /* 100e5cb1 push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e5cb6 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5cbcu);
  /* 100e5cbc push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e5cc1 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e5cc7u);
  /* 100e5cc7 push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e5ccc mov esi, eax */
  ESI = (EAX);
  /* 100e5cce call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5cd4u);
  /* 100e5cd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5cd7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e5cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5cdb pop esi */
  ESI = (pop32());
  /* 100e5cdc jg 0x100e5de7 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e5de7;
  /* 100e5ce2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5ce4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5ce8 push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e5ced call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5cf3u);
  /* 100e5cf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5cf6 call 0x100e2780 */
  push32(0x100e5cfbu); f_100e2780();
  /* 100e5cfb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5cfe jge 0x100e5d27 */
  if ((C.sf==C.of)) goto L_100e5d27;
  /* 100e5d00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5d02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5d06 push 0x100f5fc8 */
  push32((uint32_t)(0x100f5fc8u));
  /* 100e5d0b call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5d11u);
  /* 100e5d11 push 0x100f5fc8 */
  push32((uint32_t)(0x100f5fc8u));
  /* 100e5d16 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e5d1cu);
  /* 100e5d1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5d21 je 0x100e5de7 */
  if (C.zf) goto L_100e5de7;
L_100e5d27:;
  /* 100e5d27 call 0x100e5220 */
  push32(0x100e5d2cu); f_100e5220();
  /* 100e5d2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5d2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5d30 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e5d32 push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e5d37 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5d3du);
  /* 100e5d3d push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e5d42 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e5d48u);
  /* 100e5d48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5d4b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5d4e jl 0x100e5de7 */
  if ((C.sf!=C.of)) goto L_100e5de7;
  /* 100e5d54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5d56 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5d58 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e5d5a push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e5d5f call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5d65u);
  /* 100e5d65 push 0x100f6238 */
  push32((uint32_t)(0x100f6238u));
  /* 100e5d6a call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5d70u);
  /* 100e5d70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5d75 je 0x100e5d8b */
  if (C.zf) goto L_100e5d8b;
  /* 100e5d77 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5d79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5d7b push 4 */
  push32((uint32_t)(0x4u));
  /* 100e5d7d push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e5d82 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5d88u);
  /* 100e5d88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5d8b:;
  /* 100e5d8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5d8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5d91 push 0x100f35f8 */
  push32((uint32_t)(0x100f35f8u));
  /* 100e5d96 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5d9cu);
  /* 100e5d9c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5d9e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100e5da0 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e5da2 push 0x100f35f8 */
  push32((uint32_t)(0x100f35f8u));
  /* 100e5da7 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5dadu);
  /* 100e5dad push 0x100f38c0 */
  push32((uint32_t)(0x100f38c0u));
  /* 100e5db2 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e5db8u);
  /* 100e5db8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5dbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e5dbd je 0x100e5dd3 */
  if (C.zf) goto L_100e5dd3;
  /* 100e5dbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5dc1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5dc3 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e5dc5 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e5dca call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5dd0u);
  /* 100e5dd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5dd3:;
  /* 100e5dd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5dd5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5dd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5dd9 push 0x100f60d8 */
  push32((uint32_t)(0x100f60d8u));
  /* 100e5dde call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5de4u);
  /* 100e5de4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5de7:;
  /* 100e5de7 ret  */
  ESPCHK(0x100e5bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x100e5df0 (472 bytes, 137 insns) */
void f_100e5df0(void) {
  FTRACE(0x100e5df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e5df0 push ecx */
  push32((uint32_t)(ECX));
  /* 100e5df1 push 0x100f6258 */
  push32((uint32_t)(0x100f6258u));
  /* 100e5df6 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5dfcu);
  /* 100e5dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5dff cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5e02 jge 0x100e5e17 */
  if ((C.sf==C.of)) goto L_100e5e17;
  /* 100e5e04 mov eax, dword ptr [0x100f6294] */
  EAX = (r32((uint32_t)(0x100f6294)));
  /* 100e5e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e5e0b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5e0e push eax */
  push32((uint32_t)(EAX));
  /* 100e5e0f call 0x100e26d0 */
  push32(0x100e5e14u); f_100e26d0();
  /* 100e5e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5e17:;
  /* 100e5e17 push 0x100f6258 */
  push32((uint32_t)(0x100f6258u));
  /* 100e5e1c call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5e22u);
  /* 100e5e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5e25 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5e2a jg 0x100e5e3e */
  if ((!C.zf&&C.sf==C.of)) goto L_100e5e3e;
  /* 100e5e2c push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e5e31 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e5e37u);
  /* 100e5e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5e3c je 0x100e5e52 */
  if (C.zf) goto L_100e5e52;
L_100e5e3e:;
  /* 100e5e3e mov ecx, dword ptr [0x100f6294] */
  ECX = (r32((uint32_t)(0x100f6294)));
  /* 100e5e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5e46 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5e49 push ecx */
  push32((uint32_t)(ECX));
  /* 100e5e4a call 0x100e26d0 */
  push32(0x100e5e4fu); f_100e26d0();
  /* 100e5e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5e52:;
  /* 100e5e52 push esi */
  push32((uint32_t)(ESI));
  /* 100e5e53 push edi */
  push32((uint32_t)(EDI));
  /* 100e5e54 mov edi, 2 */
  EDI = (0x2u);
L_100e5e59:;
  /* 100e5e59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5e5b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e5e5d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e5e62 push 0x100f6170 */
  push32((uint32_t)(0x100f6170u));
  /* 100e5e67 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5e6du);
  /* 100e5e6d push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e5e72 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e5e78u);
  /* 100e5e78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5e7b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5e80 jge 0x100e5e9b */
  if ((C.sf==C.of)) goto L_100e5e9b;
  /* 100e5e82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5e84 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e5e86 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e5e8b push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e5e90 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5e96u);
  /* 100e5e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5e99 jmp 0x100e5ec6 */
  goto L_100e5ec6;
L_100e5e9b:;
  /* 100e5e9b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100e5e9d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e5e9f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e5ea4 push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e5ea9 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5eafu);
  /* 100e5eaf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5eb1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e5eb3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e5eb8 push 0x100f60c0 */
  push32((uint32_t)(0x100f60c0u));
  /* 100e5ebd call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5ec3u);
  /* 100e5ec3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5ec6:;
  /* 100e5ec6 mov edx, dword ptr [0x100f6294] */
  EDX = (r32((uint32_t)(0x100f6294)));
  /* 100e5ecc add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5ecf push edx */
  push32((uint32_t)(EDX));
  /* 100e5ed0 call 0x100e26f0 */
  push32(0x100e5ed5u); f_100e26f0();
  /* 100e5ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5eda jne 0x100e5efd */
  if (!C.zf) goto L_100e5efd;
  /* 100e5edc call 0x100e2780 */
  push32(0x100e5ee1u); f_100e2780();
  /* 100e5ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5ee4 jge 0x100e5efd */
  if ((C.sf==C.of)) goto L_100e5efd;
  /* 100e5ee6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5ee8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e5eea push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 100e5eef push 0x100f6258 */
  push32((uint32_t)(0x100f6258u));
  /* 100e5ef4 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5efau);
  /* 100e5efa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e5efd:;
  /* 100e5efd mov al, byte ptr [0x100f6294] */
  AL = (r8((uint32_t)(0x100f6294)));
  /* 100e5f02 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 100e5f06 mov eax, dword ptr [0x100f6498] */
  EAX = (r32((uint32_t)(0x100f6498)));
  /* 100e5f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5f0d je 0x100e5f25 */
  if (C.zf) goto L_100e5f25;
  /* 100e5f0f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e5f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e5f15 push 0x100f3868 */
  push32((uint32_t)(0x100f3868u));
  /* 100e5f1a push ecx */
  push32((uint32_t)(ECX));
  /* 100e5f1b call eax */
  call_ind((uint32_t)(EAX), 0x100e5f1du);
  /* 100e5f1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5f20 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5f23 jge 0x100e5f65 */
  if ((C.sf==C.of)) goto L_100e5f65;
L_100e5f25:;
  /* 100e5f25 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e5f27 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e5f2du);
  /* 100e5f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5f30 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5f35 jle 0x100e5f65 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5f65;
  /* 100e5f37 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e5f39 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e5f3fu);
  /* 100e5f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5f42 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5f47 jle 0x100e5f65 */
  if ((C.zf||C.sf!=C.of)) goto L_100e5f65;
  /* 100e5f49 mov esi, 0x1e */
  ESI = (0x1eu);
L_100e5f4e:;
  /* 100e5f4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5f50 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e5f52 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e5f54 push 0x100f3868 */
  push32((uint32_t)(0x100f3868u));
  /* 100e5f59 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5f5fu);
  /* 100e5f5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5f62 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100e5f63 jne 0x100e5f4e */
  if (!C.zf) goto L_100e5f4e;
L_100e5f65:;
  /* 100e5f65 push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e5f6a call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e5f70u);
  /* 100e5f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5f73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e5f75 je 0x100e5f7b */
  if (C.zf) goto L_100e5f7b;
  /* 100e5f77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e5f79 jmp 0x100e5f7d */
  goto L_100e5f7d;
L_100e5f7b:;
  /* 100e5f7b push 0x64 */
  push32((uint32_t)(0x64u));
L_100e5f7d:;
  /* 100e5f7d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e5f7f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e5f84 push 0x100f6390 */
  push32((uint32_t)(0x100f6390u));
  /* 100e5f89 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5f8fu);
  /* 100e5f8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5f92 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5f94 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e5f96 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e5f9b push 0x100f3660 */
  push32((uint32_t)(0x100f3660u));
  /* 100e5fa0 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5fa6u);
  /* 100e5fa6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e5fa8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e5faa push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e5faf push 0x100f5f60 */
  push32((uint32_t)(0x100f5f60u));
  /* 100e5fb4 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e5fbau);
  /* 100e5fba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5fbd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100e5fbe jne 0x100e5e59 */
  if (!C.zf) goto L_100e5e59;
  /* 100e5fc4 pop edi */
  EDI = (pop32());
  /* 100e5fc5 pop esi */
  ESI = (pop32());
  /* 100e5fc6 pop ecx */
  ECX = (pop32());
  /* 100e5fc7 ret  */
  ESPCHK(0x100e5df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x100e5fd0 (789 bytes, 244 insns) */
void f_100e5fd0(void) {
  FTRACE(0x100e5fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e5fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 100e5fd1 push 0x100f3858 */
  push32((uint32_t)(0x100f3858u));
  /* 100e5fd6 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e5fdcu);
  /* 100e5fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e5fe1 je 0x100e62e3 */
  if (C.zf) goto L_100e62e3;
  /* 100e5fe7 call 0x100e2670 */
  push32(0x100e5fecu); f_100e2670();
  /* 100e5fec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e5fef jne 0x100e6036 */
  if (!C.zf) goto L_100e6036;
  /* 100e5ff1 mov eax, dword ptr [0x100f6294] */
  EAX = (r32((uint32_t)(0x100f6294)));
  /* 100e5ff6 push eax */
  push32((uint32_t)(EAX));
  /* 100e5ff7 call 0x100e26f0 */
  push32(0x100e5ffcu); f_100e26f0();
  /* 100e5ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e5fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6001 jne 0x100e62e3 */
  if (!C.zf) goto L_100e62e3;
  /* 100e6007 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 100e600c push 3 */
  push32((uint32_t)(0x3u));
  /* 100e600e push 2 */
  push32((uint32_t)(0x2u));
  /* 100e6010 call 0x100e2610 */
  push32(0x100e6015u); f_100e2610();
  /* 100e6015 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 100e601a push 3 */
  push32((uint32_t)(0x3u));
  /* 100e601c push 0 */
  push32((uint32_t)(0x0u));
  /* 100e601e call 0x100e2610 */
  push32(0x100e6023u); f_100e2610();
  /* 100e6023 mov ecx, dword ptr [0x100f6294] */
  ECX = (r32((uint32_t)(0x100f6294)));
  /* 100e6029 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e602b push ecx */
  push32((uint32_t)(ECX));
  /* 100e602c call 0x100e26d0 */
  push32(0x100e6031u); f_100e26d0();
  /* 100e6031 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6034 pop ecx */
  ECX = (pop32());
  /* 100e6035 ret  */
  ESPCHK(0x100e5fd0u, _esp0);
  ESP += 4; return;
L_100e6036:;
  /* 100e6036 push 0x100f3858 */
  push32((uint32_t)(0x100f3858u));
  /* 100e603b call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e6041u);
  /* 100e6041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6046 je 0x100e62e3 */
  if (C.zf) goto L_100e62e3;
  /* 100e604c mov edx, dword ptr [0x100f6294] */
  EDX = (r32((uint32_t)(0x100f6294)));
  /* 100e6052 push edx */
  push32((uint32_t)(EDX));
  /* 100e6053 call 0x100e26f0 */
  push32(0x100e6058u); f_100e26f0();
  /* 100e6058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e605b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e605d jne 0x100e60d2 */
  if (!C.zf) goto L_100e60d2;
  /* 100e605f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100e6064 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e6066 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e6068 call 0x100e2610 */
  push32(0x100e606du); f_100e2610();
  /* 100e606d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6070 call 0x100e2670 */
  push32(0x100e6075u); f_100e2670();
  /* 100e6075 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6078 jne 0x100e6099 */
  if (!C.zf) goto L_100e6099;
  /* 100e607a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e607f push 0 */
  push32((uint32_t)(0x0u));
  /* 100e6081 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e6083 call 0x100e2610 */
  push32(0x100e6088u); f_100e2610();
  /* 100e6088 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e608d push 2 */
  push32((uint32_t)(0x2u));
  /* 100e608f push 4 */
  push32((uint32_t)(0x4u));
  /* 100e6091 call 0x100e2610 */
  push32(0x100e6096u); f_100e2610();
  /* 100e6096 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6099:;
  /* 100e6099 call 0x100e2670 */
  push32(0x100e609eu); f_100e2670();
  /* 100e609e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e60a1 jne 0x100e60c2 */
  if (!C.zf) goto L_100e60c2;
  /* 100e60a3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100e60a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e60aa push 4 */
  push32((uint32_t)(0x4u));
  /* 100e60ac call 0x100e2610 */
  push32(0x100e60b1u); f_100e2610();
  /* 100e60b1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100e60b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e60b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e60ba call 0x100e2610 */
  push32(0x100e60bfu); f_100e2610();
  /* 100e60bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e60c2:;
  /* 100e60c2 mov eax, dword ptr [0x100f6294] */
  EAX = (r32((uint32_t)(0x100f6294)));
  /* 100e60c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e60c9 push eax */
  push32((uint32_t)(EAX));
  /* 100e60ca call 0x100e26d0 */
  push32(0x100e60cfu); f_100e26d0();
  /* 100e60cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e60d2:;
  /* 100e60d2 push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e60d7 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e60ddu);
  /* 100e60dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e60e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e60e2 je 0x100e6154 */
  if (C.zf) goto L_100e6154;
  /* 100e60e4 push 0x100f6130 */
  push32((uint32_t)(0x100f6130u));
  /* 100e60e9 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e60efu);
  /* 100e60ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e60f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e60f4 jne 0x100e6154 */
  if (!C.zf) goto L_100e6154;
  /* 100e60f6 push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e60fb call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e6101u);
  /* 100e6101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6106 je 0x100e6154 */
  if (C.zf) goto L_100e6154;
  /* 100e6108 mov eax, dword ptr [0x100f649c] */
  EAX = (r32((uint32_t)(0x100f649c)));
  /* 100e610d mov cl, byte ptr [0x100f6294] */
  CL = (r8((uint32_t)(0x100f6294)));
  /* 100e6113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6115 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100e6119 je 0x100e612e */
  if (C.zf) goto L_100e612e;
  /* 100e611b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100e611f push 5 */
  push32((uint32_t)(0x5u));
  /* 100e6121 push 0x100f6130 */
  push32((uint32_t)(0x100f6130u));
  /* 100e6126 push edx */
  push32((uint32_t)(EDX));
  /* 100e6127 call eax */
  call_ind((uint32_t)(EAX), 0x100e6129u);
  /* 100e6129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e612c jmp 0x100e6130 */
  goto L_100e6130;
L_100e612e:;
  /* 100e612e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100e6130:;
  /* 100e6130 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100e6133 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e6135 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100e6138 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100e613d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100e613f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100e6142 mov eax, edx */
  EAX = (EDX);
  /* 100e6144 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100e6147 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6149 push edx */
  push32((uint32_t)(EDX));
  /* 100e614a push 5 */
  push32((uint32_t)(0x5u));
  /* 100e614c call 0x100e2f90 */
  push32(0x100e6151u); f_100e2f90();
  /* 100e6151 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6154:;
  /* 100e6154 push 0x100f6130 */
  push32((uint32_t)(0x100f6130u));
  /* 100e6159 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e615fu);
  /* 100e615f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6162 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e6164 je 0x100e6279 */
  if (C.zf) goto L_100e6279;
  /* 100e616a push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e616f call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e6175u);
  /* 100e6175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6178 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e617a jne 0x100e6279 */
  if (!C.zf) goto L_100e6279;
  /* 100e6180 mov eax, dword ptr [0x100f649c] */
  EAX = (r32((uint32_t)(0x100f649c)));
  /* 100e6185 mov cl, byte ptr [0x100f6294] */
  CL = (r8((uint32_t)(0x100f6294)));
  /* 100e618b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e618d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100e6191 je 0x100e61a6 */
  if (C.zf) goto L_100e61a6;
  /* 100e6193 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100e6197 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e6199 push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e619e push edx */
  push32((uint32_t)(EDX));
  /* 100e619f call eax */
  call_ind((uint32_t)(EAX), 0x100e61a1u);
  /* 100e61a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e61a4 jmp 0x100e61a8 */
  goto L_100e61a8;
L_100e61a6:;
  /* 100e61a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100e61a8:;
  /* 100e61a8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100e61ab push 2 */
  push32((uint32_t)(0x2u));
  /* 100e61ad lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100e61b0 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100e61b5 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100e61b7 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100e61ba mov eax, edx */
  EAX = (EDX);
  /* 100e61bc shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100e61bf add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e61c1 push edx */
  push32((uint32_t)(EDX));
  /* 100e61c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e61c4 call 0x100e2f90 */
  push32(0x100e61c9u); f_100e2f90();
  /* 100e61c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e61cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e61ce je 0x100e6279 */
  if (C.zf) goto L_100e6279;
  /* 100e61d4 mov eax, dword ptr [0x100f649c] */
  EAX = (r32((uint32_t)(0x100f649c)));
  /* 100e61d9 mov cl, byte ptr [0x100f6294] */
  CL = (r8((uint32_t)(0x100f6294)));
  /* 100e61df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e61e1 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100e61e5 je 0x100e61fa */
  if (C.zf) goto L_100e61fa;
  /* 100e61e7 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100e61eb push 1 */
  push32((uint32_t)(0x1u));
  /* 100e61ed push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e61f2 push edx */
  push32((uint32_t)(EDX));
  /* 100e61f3 call eax */
  call_ind((uint32_t)(EAX), 0x100e61f5u);
  /* 100e61f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e61f8 jmp 0x100e61fc */
  goto L_100e61fc;
L_100e61fa:;
  /* 100e61fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100e61fc:;
  /* 100e61fc lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 100e6203 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e6205 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e6207 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 100e620a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100e620d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 100e6212 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100e6214 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 100e6217 mov eax, edx */
  EAX = (EDX);
  /* 100e6219 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100e621c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e621e push edx */
  push32((uint32_t)(EDX));
  /* 100e621f push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6221 call 0x100e2f90 */
  push32(0x100e6226u); f_100e2f90();
  /* 100e6226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6229 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e622b je 0x100e6279 */
  if (C.zf) goto L_100e6279;
  /* 100e622d mov eax, dword ptr [0x100f649c] */
  EAX = (r32((uint32_t)(0x100f649c)));
  /* 100e6232 mov cl, byte ptr [0x100f6294] */
  CL = (r8((uint32_t)(0x100f6294)));
  /* 100e6238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e623a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100e623e je 0x100e6253 */
  if (C.zf) goto L_100e6253;
  /* 100e6240 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100e6244 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e6246 push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e624b push edx */
  push32((uint32_t)(EDX));
  /* 100e624c call eax */
  call_ind((uint32_t)(EAX), 0x100e624eu);
  /* 100e624e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6251 jmp 0x100e6255 */
  goto L_100e6255;
L_100e6253:;
  /* 100e6253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100e6255:;
  /* 100e6255 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100e6258 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e625a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100e625d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100e6262 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100e6264 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100e6267 mov eax, edx */
  EAX = (EDX);
  /* 100e6269 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100e626c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e626e push edx */
  push32((uint32_t)(EDX));
  /* 100e626f push 4 */
  push32((uint32_t)(0x4u));
  /* 100e6271 call 0x100e2f90 */
  push32(0x100e6276u); f_100e2f90();
  /* 100e6276 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6279:;
  /* 100e6279 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e627b call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e6281u);
  /* 100e6281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6284 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6289 jle 0x100e62ae */
  if ((C.zf||C.sf!=C.of)) goto L_100e62ae;
  /* 100e628b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100e6290 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e6292 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e6294 call 0x100e2610 */
  push32(0x100e6299u); f_100e2610();
  /* 100e6299 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e629b call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e62a1u);
  /* 100e62a1 push eax */
  push32((uint32_t)(EAX));
  /* 100e62a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e62a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e62a6 call 0x100e2610 */
  push32(0x100e62abu); f_100e2610();
  /* 100e62ab add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e62ae:;
  /* 100e62ae push 0 */
  push32((uint32_t)(0x0u));
  /* 100e62b0 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e62b6u);
  /* 100e62b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e62b9 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e62be jle 0x100e62e3 */
  if ((C.zf||C.sf!=C.of)) goto L_100e62e3;
  /* 100e62c0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100e62c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e62c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e62c9 call 0x100e2610 */
  push32(0x100e62ceu); f_100e2610();
  /* 100e62ce push 0 */
  push32((uint32_t)(0x0u));
  /* 100e62d0 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e62d6u);
  /* 100e62d6 push eax */
  push32((uint32_t)(EAX));
  /* 100e62d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e62d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e62db call 0x100e2610 */
  push32(0x100e62e0u); f_100e2610();
  /* 100e62e0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e62e3:;
  /* 100e62e3 pop ecx */
  ECX = (pop32());
  /* 100e62e4 ret  */
  ESPCHK(0x100e5fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x100e62f0 (818 bytes, 268 insns) */
void f_100e62f0(void) {
  FTRACE(0x100e62f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e62f0 push ecx */
  push32((uint32_t)(ECX));
  /* 100e62f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e62f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e62f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e62f7 call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e62fdu);
  /* 100e62fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6300 call dword ptr [0x100f6550] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6550))), 0x100e6306u);
  /* 100e6306 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e6308 je 0x100e6620 */
  if (C.zf) goto L_100e6620;
  /* 100e630e push 4 */
  push32((uint32_t)(0x4u));
  /* 100e6310 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e6312 push 9 */
  push32((uint32_t)(0x9u));
  /* 100e6314 call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e631au);
  /* 100e631a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e631d call 0x100e2670 */
  push32(0x100e6322u); f_100e2670();
  /* 100e6322 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6325 je 0x100e6620 */
  if (C.zf) goto L_100e6620;
  /* 100e632b call dword ptr [0x100f6550] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6550))), 0x100e6331u);
  /* 100e6331 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e6333 je 0x100e6611 */
  if (C.zf) goto L_100e6611;
  /* 100e6339 push esi */
  push32((uint32_t)(ESI));
  /* 100e633a push edi */
  push32((uint32_t)(EDI));
  /* 100e633b push 4 */
  push32((uint32_t)(0x4u));
  /* 100e633d push 4 */
  push32((uint32_t)(0x4u));
  /* 100e633f push 9 */
  push32((uint32_t)(0x9u));
  /* 100e6341 call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e6347u);
  /* 100e6347 push 0x100f60e0 */
  push32((uint32_t)(0x100f60e0u));
  /* 100e634c call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e6352u);
  /* 100e6352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6355 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e6357 jne 0x100e63bf */
  if (!C.zf) goto L_100e63bf;
  /* 100e6359 mov al, byte ptr [0x100f6294] */
  AL = (r8((uint32_t)(0x100f6294)));
  /* 100e635e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 100e6362 mov eax, dword ptr [0x100f649c] */
  EAX = (r32((uint32_t)(0x100f649c)));
  /* 100e6367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6369 je 0x100e6380 */
  if (C.zf) goto L_100e6380;
  /* 100e636b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e636f push 3 */
  push32((uint32_t)(0x3u));
  /* 100e6371 push 0x100f60e0 */
  push32((uint32_t)(0x100f60e0u));
  /* 100e6376 push ecx */
  push32((uint32_t)(ECX));
  /* 100e6377 call eax */
  call_ind((uint32_t)(EAX), 0x100e6379u);
  /* 100e6379 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e637c mov esi, eax */
  ESI = (EAX);
  /* 100e637e jmp 0x100e6382 */
  goto L_100e6382;
L_100e6380:;
  /* 100e6380 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100e6382:;
  /* 100e6382 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e6384 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e638au);
  /* 100e638a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 100e638d mov edi, eax */
  EDI = (EAX);
  /* 100e638f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100e6394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6397 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 100e639a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100e639c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100e639f mov eax, edx */
  EAX = (EDX);
  /* 100e63a1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100e63a4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e63a6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e63a8 jge 0x100e63b0 */
  if ((C.sf==C.of)) goto L_100e63b0;
  /* 100e63aa push 4 */
  push32((uint32_t)(0x4u));
  /* 100e63ac push 4 */
  push32((uint32_t)(0x4u));
  /* 100e63ae jmp 0x100e63b4 */
  goto L_100e63b4;
L_100e63b0:;
  /* 100e63b0 push 6 */
  push32((uint32_t)(0x6u));
  /* 100e63b2 push 6 */
  push32((uint32_t)(0x6u));
L_100e63b4:;
  /* 100e63b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 100e63b6 call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e63bcu);
  /* 100e63bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e63bf:;
  /* 100e63bf push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e63c4 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e63cau);
  /* 100e63ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e63cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e63cf jne 0x100e6438 */
  if (!C.zf) goto L_100e6438;
  /* 100e63d1 mov eax, dword ptr [0x100f649c] */
  EAX = (r32((uint32_t)(0x100f649c)));
  /* 100e63d6 mov cl, byte ptr [0x100f6294] */
  CL = (r8((uint32_t)(0x100f6294)));
  /* 100e63dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e63de mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 100e63e2 je 0x100e63f9 */
  if (C.zf) goto L_100e63f9;
  /* 100e63e4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e63e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e63ea push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e63ef push edx */
  push32((uint32_t)(EDX));
  /* 100e63f0 call eax */
  call_ind((uint32_t)(EAX), 0x100e63f2u);
  /* 100e63f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e63f5 mov esi, eax */
  ESI = (EAX);
  /* 100e63f7 jmp 0x100e63fb */
  goto L_100e63fb;
L_100e63f9:;
  /* 100e63f9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100e63fb:;
  /* 100e63fb push 3 */
  push32((uint32_t)(0x3u));
  /* 100e63fd call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e6403u);
  /* 100e6403 mov edi, eax */
  EDI = (EAX);
  /* 100e6405 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 100e6408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e640b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 100e640e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100e6413 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100e6415 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100e6418 mov ecx, edx */
  ECX = (EDX);
  /* 100e641a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 100e641d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e641f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6421 jge 0x100e6429 */
  if ((C.sf==C.of)) goto L_100e6429;
  /* 100e6423 push 9 */
  push32((uint32_t)(0x9u));
  /* 100e6425 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e6427 jmp 0x100e642d */
  goto L_100e642d;
L_100e6429:;
  /* 100e6429 push 6 */
  push32((uint32_t)(0x6u));
  /* 100e642b push 6 */
  push32((uint32_t)(0x6u));
L_100e642d:;
  /* 100e642d push 9 */
  push32((uint32_t)(0x9u));
  /* 100e642f call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e6435u);
  /* 100e6435 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6438:;
  /* 100e6438 push 0x100f6130 */
  push32((uint32_t)(0x100f6130u));
  /* 100e643d call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e6443u);
  /* 100e6443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6446 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e6448 jne 0x100e64af */
  if (!C.zf) goto L_100e64af;
  /* 100e644a mov eax, dword ptr [0x100f649c] */
  EAX = (r32((uint32_t)(0x100f649c)));
  /* 100e644f mov dl, byte ptr [0x100f6294] */
  DL = (r8((uint32_t)(0x100f6294)));
  /* 100e6455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6457 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 100e645b je 0x100e6472 */
  if (C.zf) goto L_100e6472;
  /* 100e645d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e6461 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e6463 push 0x100f6130 */
  push32((uint32_t)(0x100f6130u));
  /* 100e6468 push ecx */
  push32((uint32_t)(ECX));
  /* 100e6469 call eax */
  call_ind((uint32_t)(EAX), 0x100e646bu);
  /* 100e646b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e646e mov esi, eax */
  ESI = (EAX);
  /* 100e6470 jmp 0x100e6474 */
  goto L_100e6474;
L_100e6472:;
  /* 100e6472 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100e6474:;
  /* 100e6474 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e6476 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e647cu);
  /* 100e647c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 100e647f mov edi, eax */
  EDI = (EAX);
  /* 100e6481 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100e6486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6489 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 100e648c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100e648e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100e6491 mov eax, edx */
  EAX = (EDX);
  /* 100e6493 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6495 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100e6498 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e649a push 9 */
  push32((uint32_t)(0x9u));
  /* 100e649c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e649e jge 0x100e64a4 */
  if ((C.sf==C.of)) goto L_100e64a4;
  /* 100e64a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 100e64a2 jmp 0x100e64a6 */
  goto L_100e64a6;
L_100e64a4:;
  /* 100e64a4 push 6 */
  push32((uint32_t)(0x6u));
L_100e64a6:;
  /* 100e64a6 call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e64acu);
  /* 100e64ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e64af:;
  /* 100e64af push 0x100f6320 */
  push32((uint32_t)(0x100f6320u));
  /* 100e64b4 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e64bau);
  /* 100e64ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e64bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e64bf je 0x100e64d3 */
  if (C.zf) goto L_100e64d3;
  /* 100e64c1 push 0x100f6268 */
  push32((uint32_t)(0x100f6268u));
  /* 100e64c6 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e64ccu);
  /* 100e64cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e64cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e64d1 jne 0x100e64f4 */
  if (!C.zf) goto L_100e64f4;
L_100e64d3:;
  /* 100e64d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e64d5 call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e64dbu);
  /* 100e64db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e64de cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e64e3 jge 0x100e64f4 */
  if ((C.sf==C.of)) goto L_100e64f4;
  /* 100e64e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e64e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e64e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 100e64eb call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e64f1u);
  /* 100e64f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e64f4:;
  /* 100e64f4 push 0x100f5fc8 */
  push32((uint32_t)(0x100f5fc8u));
  /* 100e64f9 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e64ffu);
  /* 100e64ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6504 jne 0x100e6577 */
  if (!C.zf) goto L_100e6577;
  /* 100e6506 call 0x100e2780 */
  push32(0x100e650bu); f_100e2780();
  /* 100e650b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e650e jge 0x100e6577 */
  if ((C.sf==C.of)) goto L_100e6577;
  /* 100e6510 mov eax, dword ptr [0x100f6498] */
  EAX = (r32((uint32_t)(0x100f6498)));
  /* 100e6515 mov cl, byte ptr [0x100f6294] */
  CL = (r8((uint32_t)(0x100f6294)));
  /* 100e651b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e651d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 100e6521 je 0x100e6538 */
  if (C.zf) goto L_100e6538;
  /* 100e6523 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e6527 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e6529 push 0x100f5fc8 */
  push32((uint32_t)(0x100f5fc8u));
  /* 100e652e push edx */
  push32((uint32_t)(EDX));
  /* 100e652f call eax */
  call_ind((uint32_t)(EAX), 0x100e6531u);
  /* 100e6531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6534 mov esi, eax */
  ESI = (EAX);
  /* 100e6536 jmp 0x100e653a */
  goto L_100e653a;
L_100e6538:;
  /* 100e6538 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100e653a:;
  /* 100e653a push 2 */
  push32((uint32_t)(0x2u));
  /* 100e653c call dword ptr [0x100f651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f651c))), 0x100e6542u);
  /* 100e6542 mov edi, eax */
  EDI = (EAX);
  /* 100e6544 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 100e6547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e654a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 100e654d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100e6552 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100e6554 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100e6557 mov ecx, edx */
  ECX = (EDX);
  /* 100e6559 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 100e655c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e655e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6560 jge 0x100e6568 */
  if ((C.sf==C.of)) goto L_100e6568;
  /* 100e6562 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e6564 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e6566 jmp 0x100e656c */
  goto L_100e656c;
L_100e6568:;
  /* 100e6568 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e656a push 7 */
  push32((uint32_t)(0x7u));
L_100e656c:;
  /* 100e656c push 9 */
  push32((uint32_t)(0x9u));
  /* 100e656e call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e6574u);
  /* 100e6574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6577:;
  /* 100e6577 push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e657c call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e6582u);
  /* 100e6582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6585 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e6587 pop edi */
  EDI = (pop32());
  /* 100e6588 pop esi */
  ESI = (pop32());
  /* 100e6589 jne 0x100e659a */
  if (!C.zf) goto L_100e659a;
  /* 100e658b push 1 */
  push32((uint32_t)(0x1u));
  /* 100e658d push 1 */
  push32((uint32_t)(0x1u));
  /* 100e658f push 9 */
  push32((uint32_t)(0x9u));
  /* 100e6591 call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e6597u);
  /* 100e6597 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e659a:;
  /* 100e659a push 0x100f6058 */
  push32((uint32_t)(0x100f6058u));
  /* 100e659f call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e65a5u);
  /* 100e65a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e65a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e65aa je 0x100e65be */
  if (C.zf) goto L_100e65be;
  /* 100e65ac push 0x100f3640 */
  push32((uint32_t)(0x100f3640u));
  /* 100e65b1 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e65b7u);
  /* 100e65b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e65ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e65bc jne 0x100e65cd */
  if (!C.zf) goto L_100e65cd;
L_100e65be:;
  /* 100e65be push 1 */
  push32((uint32_t)(0x1u));
  /* 100e65c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e65c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 100e65c4 call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e65cau);
  /* 100e65ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e65cd:;
  /* 100e65cd push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e65d2 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e65d8u);
  /* 100e65d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e65db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e65dd jne 0x100e65ee */
  if (!C.zf) goto L_100e65ee;
  /* 100e65df push 4 */
  push32((uint32_t)(0x4u));
  /* 100e65e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e65e3 push 6 */
  push32((uint32_t)(0x6u));
  /* 100e65e5 call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e65ebu);
  /* 100e65eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e65ee:;
  /* 100e65ee push 0x100f6358 */
  push32((uint32_t)(0x100f6358u));
  /* 100e65f3 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e65f9u);
  /* 100e65f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e65fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e65fe jne 0x100e6620 */
  if (!C.zf) goto L_100e6620;
  /* 100e6600 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6602 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6604 push 9 */
  push32((uint32_t)(0x9u));
  /* 100e6606 call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e660cu);
  /* 100e660c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e660f pop ecx */
  ECX = (pop32());
  /* 100e6610 ret  */
  ESPCHK(0x100e62f0u, _esp0);
  ESP += 4; return;
L_100e6611:;
  /* 100e6611 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e6613 push 6 */
  push32((uint32_t)(0x6u));
  /* 100e6615 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e6617 call dword ptr [0x100f64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64f4))), 0x100e661du);
  /* 100e661d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6620:;
  /* 100e6620 pop ecx */
  ECX = (pop32());
  /* 100e6621 ret  */
  ESPCHK(0x100e62f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x100e6630 (174 bytes, 50 insns) */
void f_100e6630(void) {
  FTRACE(0x100e6630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e6630 push 0x100f6578 */
  push32((uint32_t)(0x100f6578u));
  /* 100e6635 call 0x100e2720 */
  push32(0x100e663au); f_100e2720();
  /* 100e663a push 0x100f6320 */
  push32((uint32_t)(0x100f6320u));
  /* 100e663f call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e6645u);
  /* 100e6645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6648 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e664a je 0x100e666c */
  if (C.zf) goto L_100e666c;
  /* 100e664c push 0x100f6268 */
  push32((uint32_t)(0x100f6268u));
  /* 100e6651 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e6657u);
  /* 100e6657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e665a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e665c je 0x100e666c */
  if (C.zf) goto L_100e666c;
  /* 100e665e push 0x100ef16c */
  push32((uint32_t)(0x100ef16cu));
  /* 100e6663 call 0x100e2720 */
  push32(0x100e6668u); f_100e2720();
  /* 100e6668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e666b ret  */
  ESPCHK(0x100e6630u, _esp0);
  ESP += 4; return;
L_100e666c:;
  /* 100e666c mov eax, dword ptr [0x100f5f38] */
  EAX = (r32((uint32_t)(0x100f5f38)));
  /* 100e6671 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6674 je 0x100e66d2 */
  if (C.zf) goto L_100e66d2;
  /* 100e6676 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6679 je 0x100e66d2 */
  if (C.zf) goto L_100e66d2;
  /* 100e667b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e667e je 0x100e66d2 */
  if (C.zf) goto L_100e66d2;
  /* 100e6680 push 0x100f6250 */
  push32((uint32_t)(0x100f6250u));
  /* 100e6685 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e668bu);
  /* 100e668b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e668e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e6690 je 0x100e66b2 */
  if (C.zf) goto L_100e66b2;
  /* 100e6692 push 0x100f6130 */
  push32((uint32_t)(0x100f6130u));
  /* 100e6697 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e669du);
  /* 100e669d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e66a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e66a2 jne 0x100e66b2 */
  if (!C.zf) goto L_100e66b2;
  /* 100e66a4 push 0x100f6578 */
  push32((uint32_t)(0x100f6578u));
  /* 100e66a9 call 0x100e2720 */
  push32(0x100e66aeu); f_100e2720();
  /* 100e66ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e66b1 ret  */
  ESPCHK(0x100e6630u, _esp0);
  ESP += 4; return;
L_100e66b2:;
  /* 100e66b2 push 0x100f6130 */
  push32((uint32_t)(0x100f6130u));
  /* 100e66b7 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e66bdu);
  /* 100e66bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e66c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e66c2 je 0x100e66dd */
  if (C.zf) goto L_100e66dd;
  /* 100e66c4 push 0x100ef1d8 */
  push32((uint32_t)(0x100ef1d8u));
  /* 100e66c9 call 0x100e2720 */
  push32(0x100e66ceu); f_100e2720();
  /* 100e66ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e66d1 ret  */
  ESPCHK(0x100e6630u, _esp0);
  ESP += 4; return;
L_100e66d2:;
  /* 100e66d2 push 0x100ef1d8 */
  push32((uint32_t)(0x100ef1d8u));
  /* 100e66d7 call 0x100e2720 */
  push32(0x100e66dcu); f_100e2720();
  /* 100e66dc pop ecx */
  ECX = (pop32());
L_100e66dd:;
  /* 100e66dd ret  */
  ESPCHK(0x100e6630u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x100e66e0 (70 bytes, 22 insns) */
void f_100e66e0(void) {
  FTRACE(0x100e66e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e66e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e66e2 call 0x100e2760 */
  push32(0x100e66e7u); f_100e2760();
  /* 100e66e7 push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e66ec call 0x100e5270 */
  push32(0x100e66f1u); f_100e5270();
  /* 100e66f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e66f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e66f6 je 0x100e6702 */
  if (C.zf) goto L_100e6702;
  /* 100e66f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e66fa call 0x100e2760 */
  push32(0x100e66ffu); f_100e2760();
  /* 100e66ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6702:;
  /* 100e6702 call 0x100e2770 */
  push32(0x100e6707u); f_100e2770();
  /* 100e6707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6709 jg 0x100e671d */
  if ((!C.zf&&C.sf==C.of)) goto L_100e671d;
  /* 100e670b push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e6710 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e6716u);
  /* 100e6716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e671b jle 0x100e6725 */
  if ((C.zf||C.sf!=C.of)) goto L_100e6725;
L_100e671d:;
  /* 100e671d push 0 */
  push32((uint32_t)(0x0u));
  /* 100e671f call 0x100e2760 */
  push32(0x100e6724u); f_100e2760();
  /* 100e6724 pop ecx */
  ECX = (pop32());
L_100e6725:;
  /* 100e6725 ret  */
  ESPCHK(0x100e66e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x100e6730 (235 bytes, 66 insns) */
void f_100e6730(void) {
  FTRACE(0x100e6730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e6730 push 0x100f6178 */
  push32((uint32_t)(0x100f6178u));
  /* 100e6735 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e673bu);
  /* 100e673b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e673e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e6740 je 0x100e6756 */
  if (C.zf) goto L_100e6756;
  /* 100e6742 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e6744 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e6746 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e6748 push 0x100f6350 */
  push32((uint32_t)(0x100f6350u));
  /* 100e674d call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6753u);
  /* 100e6753 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6756:;
  /* 100e6756 push 0x100f6090 */
  push32((uint32_t)(0x100f6090u));
  /* 100e675b call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e6761u);
  /* 100e6761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6764 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e6766 je 0x100e677c */
  if (C.zf) goto L_100e677c;
  /* 100e6768 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e676a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e676c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e676e push 0x100f3648 */
  push32((uint32_t)(0x100f3648u));
  /* 100e6773 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6779u);
  /* 100e6779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e677c:;
  /* 100e677c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e677e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100e6780 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e6782 push 0x100f38a8 */
  push32((uint32_t)(0x100f38a8u));
  /* 100e6787 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e678du);
  /* 100e678d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e678f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e6791 push 0x100f61b8 */
  push32((uint32_t)(0x100f61b8u));
  /* 100e6796 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e679cu);
  /* 100e679c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e679e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e67a0 push 0x100f61b0 */
  push32((uint32_t)(0x100f61b0u));
  /* 100e67a5 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e67abu);
  /* 100e67ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e67ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e67af push 0x100f6180 */
  push32((uint32_t)(0x100f6180u));
  /* 100e67b4 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e67bau);
  /* 100e67ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e67bc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e67be push 0x100f6178 */
  push32((uint32_t)(0x100f6178u));
  /* 100e67c3 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e67c9u);
  /* 100e67c9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e67cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e67ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e67d0 push 0x100f6188 */
  push32((uint32_t)(0x100f6188u));
  /* 100e67d5 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e67dbu);
  /* 100e67db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e67dd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e67df push 0x100f6078 */
  push32((uint32_t)(0x100f6078u));
  /* 100e67e4 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e67eau);
  /* 100e67ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e67ec push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e67ee push 0x100f6080 */
  push32((uint32_t)(0x100f6080u));
  /* 100e67f3 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e67f9u);
  /* 100e67f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e67fb push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e67fd push 0x100f6088 */
  push32((uint32_t)(0x100f6088u));
  /* 100e6802 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e6808u);
  /* 100e6808 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e680a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e680c push 0x100f6090 */
  push32((uint32_t)(0x100f6090u));
  /* 100e6811 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e6817u);
  /* 100e6817 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e681a ret  */
  ESPCHK(0x100e6730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x100e6820 (303 bytes, 90 insns) */
void f_100e6820(void) {
  FTRACE(0x100e6820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e6820 push ecx */
  push32((uint32_t)(ECX));
  /* 100e6821 push ebx */
  push32((uint32_t)(EBX));
  /* 100e6822 push ebp */
  push32((uint32_t)(EBP));
  /* 100e6823 push esi */
  push32((uint32_t)(ESI));
  /* 100e6824 push edi */
  push32((uint32_t)(EDI));
  /* 100e6825 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e682a call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e6830u);
  /* 100e6830 push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e6835 mov ebx, eax */
  EBX = (EAX);
  /* 100e6837 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e683du);
  /* 100e683d push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e6842 mov edi, eax */
  EDI = (EAX);
  /* 100e6844 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e684au);
  /* 100e684a push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e684f mov ebp, eax */
  EBP = (EAX);
  /* 100e6851 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e6857u);
  /* 100e6857 push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e685c mov esi, eax */
  ESI = (EAX);
  /* 100e685e call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e6864u);
  /* 100e6864 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e6869 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100e686d call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e6873u);
  /* 100e6873 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 100e6877 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e687a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e687c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e687e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e6880 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e6882 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6884 pop edi */
  EDI = (pop32());
  /* 100e6885 pop esi */
  ESI = (pop32());
  /* 100e6886 pop ebp */
  EBP = (pop32());
  /* 100e6887 pop ebx */
  EBX = (pop32());
  /* 100e6888 jne 0x100e68f0 */
  if (!C.zf) goto L_100e68f0;
  /* 100e688a cmp dword ptr [0x100f6190], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x100f6190))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6891 jle 0x100e68f0 */
  if ((C.zf||C.sf!=C.of)) goto L_100e68f0;
  /* 100e6893 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6895 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e6897 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e6899 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e689e call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e68a4u);
  /* 100e68a4 push 0x100f6198 */
  push32((uint32_t)(0x100f6198u));
  /* 100e68a9 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e68afu);
  /* 100e68af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e68b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e68b4 je 0x100e68ca */
  if (C.zf) goto L_100e68ca;
  /* 100e68b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e68b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e68ba push 6 */
  push32((uint32_t)(0x6u));
  /* 100e68bc push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e68c1 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e68c7u);
  /* 100e68c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e68ca:;
  /* 100e68ca push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e68cf call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e68d5u);
  /* 100e68d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e68d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e68da je 0x100e68f0 */
  if (C.zf) goto L_100e68f0;
  /* 100e68dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e68de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e68e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 100e68e2 push 0x100f38b8 */
  push32((uint32_t)(0x100f38b8u));
  /* 100e68e7 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e68edu);
  /* 100e68ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e68f0:;
  /* 100e68f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e68f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100e68f4 push 0x100f62c8 */
  push32((uint32_t)(0x100f62c8u));
  /* 100e68f9 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e68ffu);
  /* 100e68ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6901 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100e6903 push 0x100f62b0 */
  push32((uint32_t)(0x100f62b0u));
  /* 100e6908 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e690eu);
  /* 100e690e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6910 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100e6912 push 0x100f62c0 */
  push32((uint32_t)(0x100f62c0u));
  /* 100e6917 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e691du);
  /* 100e691d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e691f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e6921 push 0x100f62a0 */
  push32((uint32_t)(0x100f62a0u));
  /* 100e6926 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e692cu);
  /* 100e692c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e692e push 0xf */
  push32((uint32_t)(0xfu));
  /* 100e6930 push 0x100f62a8 */
  push32((uint32_t)(0x100f62a8u));
  /* 100e6935 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e693bu);
  /* 100e693b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e693d push 0xa */
  push32((uint32_t)(0xau));
  /* 100e693f push 0x100f6298 */
  push32((uint32_t)(0x100f6298u));
  /* 100e6944 call dword ptr [0x100f64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e8))), 0x100e694au);
  /* 100e694a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e694d pop ecx */
  ECX = (pop32());
  /* 100e694e ret  */
  ESPCHK(0x100e6820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x100e6950 (517 bytes, 145 insns) */
void f_100e6950(void) {
  FTRACE(0x100e6950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e6950 push esi */
  push32((uint32_t)(ESI));
  /* 100e6951 push 0x100f6238 */
  push32((uint32_t)(0x100f6238u));
  /* 100e6956 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e695cu);
  /* 100e695c push 0x100f6238 */
  push32((uint32_t)(0x100f6238u));
  /* 100e6961 mov esi, eax */
  ESI = (EAX);
  /* 100e6963 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e6969u);
  /* 100e6969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e696c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e696e jne 0x100e6984 */
  if (!C.zf) goto L_100e6984;
  /* 100e6970 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6972 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6974 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e6976 push 0x100f6238 */
  push32((uint32_t)(0x100f6238u));
  /* 100e697b call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6981u);
  /* 100e6981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6984:;
  /* 100e6984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6986 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6988 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e698a push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e698f call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6995u);
  /* 100e6995 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6999 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e699b push 0x100f61c8 */
  push32((uint32_t)(0x100f61c8u));
  /* 100e69a0 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e69a6u);
  /* 100e69a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e69a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e69aa push 2 */
  push32((uint32_t)(0x2u));
  /* 100e69ac push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e69b1 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e69b7u);
  /* 100e69b7 push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e69bc call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e69c2u);
  /* 100e69c2 push 0x100f6230 */
  push32((uint32_t)(0x100f6230u));
  /* 100e69c7 mov esi, eax */
  ESI = (EAX);
  /* 100e69c9 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e69cfu);
  /* 100e69cf add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e69d2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e69d4 jne 0x100e6b53 */
  if (!C.zf) goto L_100e6b53;
  /* 100e69da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e69dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e69de push 1 */
  push32((uint32_t)(0x1u));
  /* 100e69e0 push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e69e5 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e69ebu);
  /* 100e69eb push 0x100f5f00 */
  push32((uint32_t)(0x100f5f00u));
  /* 100e69f0 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e69f6u);
  /* 100e69f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e69f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e69fb je 0x100e6b53 */
  if (C.zf) goto L_100e6b53;
  /* 100e6a01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6a07 push 0x100f5fb0 */
  push32((uint32_t)(0x100f5fb0u));
  /* 100e6a0c call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6a12u);
  /* 100e6a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a14 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6a18 push 0x100f5fb8 */
  push32((uint32_t)(0x100f5fb8u));
  /* 100e6a1d call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6a23u);
  /* 100e6a23 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a25 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6a29 push 0x100f3858 */
  push32((uint32_t)(0x100f3858u));
  /* 100e6a2e call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6a34u);
  /* 100e6a34 push 0x100f3858 */
  push32((uint32_t)(0x100f3858u));
  /* 100e6a39 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e6a3fu);
  /* 100e6a3f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6a44 je 0x100e6b53 */
  if (C.zf) goto L_100e6b53;
  /* 100e6a4a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a4e push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6a50 push 0x100f5fc8 */
  push32((uint32_t)(0x100f5fc8u));
  /* 100e6a55 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6a5bu);
  /* 100e6a5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6a61 push 0x100f60d8 */
  push32((uint32_t)(0x100f60d8u));
  /* 100e6a66 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6a6cu);
  /* 100e6a6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6a72 push 0x100f35f8 */
  push32((uint32_t)(0x100f35f8u));
  /* 100e6a77 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6a7du);
  /* 100e6a7d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6a83 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e6a88 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6a8eu);
  /* 100e6a8e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6a91 push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e6a96 call dword ptr [0x100f6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6530))), 0x100e6a9cu);
  /* 100e6a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6a9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e6aa1 je 0x100e6b53 */
  if (C.zf) goto L_100e6b53;
  /* 100e6aa7 push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e6aac call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e6ab2u);
  /* 100e6ab2 push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e6ab7 mov esi, eax */
  ESI = (EAX);
  /* 100e6ab9 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e6abfu);
  /* 100e6abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6ac2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e6ac4 jne 0x100e6aed */
  if (!C.zf) goto L_100e6aed;
  /* 100e6ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6ac8 call 0x100e2730 */
  push32(0x100e6acdu); f_100e2730();
  /* 100e6acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6ad0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6ad3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6ad5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6ad7 jge 0x100e6add */
  if ((C.sf==C.of)) goto L_100e6add;
  /* 100e6ad9 push 6 */
  push32((uint32_t)(0x6u));
  /* 100e6adb jmp 0x100e6adf */
  goto L_100e6adf;
L_100e6add:;
  /* 100e6add push 4 */
  push32((uint32_t)(0x4u));
L_100e6adf:;
  /* 100e6adf push 0x100f5f98 */
  push32((uint32_t)(0x100f5f98u));
  /* 100e6ae4 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6aeau);
  /* 100e6aea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6aed:;
  /* 100e6aed push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e6af2 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e6af8u);
  /* 100e6af8 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e6afd mov esi, eax */
  ESI = (EAX);
  /* 100e6aff call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e6b05u);
  /* 100e6b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6b08 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e6b0a jne 0x100e6b20 */
  if (!C.zf) goto L_100e6b20;
  /* 100e6b0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6b0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6b10 push 7 */
  push32((uint32_t)(0x7u));
  /* 100e6b12 push 0x100f60b8 */
  push32((uint32_t)(0x100f60b8u));
  /* 100e6b17 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6b1du);
  /* 100e6b1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6b20:;
  /* 100e6b20 push 0x100f35f8 */
  push32((uint32_t)(0x100f35f8u));
  /* 100e6b25 call dword ptr [0x100f6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6524))), 0x100e6b2bu);
  /* 100e6b2b push 0x100f35f8 */
  push32((uint32_t)(0x100f35f8u));
  /* 100e6b30 mov esi, eax */
  ESI = (EAX);
  /* 100e6b32 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e6b38u);
  /* 100e6b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6b3b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e6b3d jne 0x100e6b53 */
  if (!C.zf) goto L_100e6b53;
  /* 100e6b3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6b41 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6b43 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e6b45 push 0x100f35f8 */
  push32((uint32_t)(0x100f35f8u));
  /* 100e6b4a call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6b50u);
  /* 100e6b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6b53:;
  /* 100e6b53 pop esi */
  ESI = (pop32());
  /* 100e6b54 ret  */
  ESPCHK(0x100e6950u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x100e6b60 (121 bytes, 36 insns) */
void f_100e6b60(void) {
  FTRACE(0x100e6b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e6b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6b62 call 0x100e2760 */
  push32(0x100e6b67u); f_100e2760();
  /* 100e6b67 push 0x100f3868 */
  push32((uint32_t)(0x100f3868u));
  /* 100e6b6c call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e6b72u);
  /* 100e6b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6b75 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6b78 jge 0x100e6b8d */
  if ((C.sf==C.of)) goto L_100e6b8d;
  /* 100e6b7a mov eax, dword ptr [0x100f6294] */
  EAX = (r32((uint32_t)(0x100f6294)));
  /* 100e6b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 100e6b81 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6b84 push eax */
  push32((uint32_t)(EAX));
  /* 100e6b85 call 0x100e26d0 */
  push32(0x100e6b8au); f_100e26d0();
  /* 100e6b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6b8d:;
  /* 100e6b8d push 0x100f3868 */
  push32((uint32_t)(0x100f3868u));
  /* 100e6b92 call dword ptr [0x100f6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6520))), 0x100e6b98u);
  /* 100e6b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6b9b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6b9e jle 0x100e6bb4 */
  if ((C.zf||C.sf!=C.of)) goto L_100e6bb4;
  /* 100e6ba0 mov ecx, dword ptr [0x100f6294] */
  ECX = (r32((uint32_t)(0x100f6294)));
  /* 100e6ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6ba8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6bab push ecx */
  push32((uint32_t)(ECX));
  /* 100e6bac call 0x100e26d0 */
  push32(0x100e6bb1u); f_100e26d0();
  /* 100e6bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6bb4:;
  /* 100e6bb4 mov edx, dword ptr [0x100f6294] */
  EDX = (r32((uint32_t)(0x100f6294)));
  /* 100e6bba add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6bbd push edx */
  push32((uint32_t)(EDX));
  /* 100e6bbe call 0x100e26f0 */
  push32(0x100e6bc3u); f_100e26f0();
  /* 100e6bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6bc5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100e6bc8 push eax */
  push32((uint32_t)(EAX));
  /* 100e6bc9 call 0x100e2760 */
  push32(0x100e6bceu); f_100e2760();
  /* 100e6bce push 0 */
  push32((uint32_t)(0x0u));
  /* 100e6bd0 call 0x100e2760 */
  push32(0x100e6bd5u); f_100e2760();
  /* 100e6bd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6bd8 ret  */
  ESPCHK(0x100e6b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x100e6be0 (86 bytes, 20 insns) */
void f_100e6be0(void) {
  FTRACE(0x100e6be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e6be0 mov eax, dword ptr [0x100f6294] */
  EAX = (r32((uint32_t)(0x100f6294)));
  /* 100e6be5 mov ecx, dword ptr [eax*4 + 0x100f5f78] */
  ECX = (r32((uint32_t)(EAX*4 + 0x100f5f78)));
  /* 100e6bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100e6bee je 0x100e6bf5 */
  if (C.zf) goto L_100e6bf5;
  /* 100e6bf0 call 0x100e66e0 */
  push32(0x100e6bf5u); f_100e66e0();
L_100e6bf5:;
  /* 100e6bf5 call 0x100e5df0 */
  push32(0x100e6bfau); f_100e5df0();
  /* 100e6bfa call 0x100e6730 */
  push32(0x100e6bffu); f_100e6730();
  /* 100e6bff call 0x100e2780 */
  push32(0x100e6c04u); f_100e2780();
  /* 100e6c04 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6c07 jge 0x100e6c0e */
  if ((C.sf==C.of)) goto L_100e6c0e;
  /* 100e6c09 call 0x100e6820 */
  push32(0x100e6c0eu); f_100e6820();
L_100e6c0e:;
  /* 100e6c0e call 0x100e5bd0 */
  push32(0x100e6c13u); f_100e5bd0();
  /* 100e6c13 call 0x100e5a90 */
  push32(0x100e6c18u); f_100e5a90();
  /* 100e6c18 call 0x100e2780 */
  push32(0x100e6c1du); f_100e2780();
  /* 100e6c1d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6c20 jge 0x100e6c27 */
  if ((C.sf==C.of)) goto L_100e6c27;
  /* 100e6c22 call 0x100e52b0 */
  push32(0x100e6c27u); f_100e52b0();
L_100e6c27:;
  /* 100e6c27 call 0x100e5fd0 */
  push32(0x100e6c2cu); f_100e5fd0();
  /* 100e6c2c call 0x100e62f0 */
  push32(0x100e6c31u); f_100e62f0();
  /* 100e6c31 jmp 0x100e6630 */
  f_100e6630(); return;
}

/* FUN_10006c40 @ 0x100e6c40 (247 bytes, 70 insns) */
void f_100e6c40(void) {
  FTRACE(0x100e6c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e6c40 push esi */
  push32((uint32_t)(ESI));
  /* 100e6c41 push edi */
  push32((uint32_t)(EDI));
  /* 100e6c42 call 0x100e6b60 */
  push32(0x100e6c47u); f_100e6b60();
  /* 100e6c47 call 0x100e6950 */
  push32(0x100e6c4cu); f_100e6950();
  /* 100e6c4c mov edi, 2 */
  EDI = (0x2u);
L_100e6c51:;
  /* 100e6c51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6c53 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e6c55 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e6c5a push 0x100f6170 */
  push32((uint32_t)(0x100f6170u));
  /* 100e6c5f call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6c65u);
  /* 100e6c65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6c67 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e6c69 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e6c6e push 0x100f3668 */
  push32((uint32_t)(0x100f3668u));
  /* 100e6c73 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6c79u);
  /* 100e6c79 mov eax, dword ptr [0x100f6294] */
  EAX = (r32((uint32_t)(0x100f6294)));
  /* 100e6c7e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6c81 push eax */
  push32((uint32_t)(EAX));
  /* 100e6c82 call 0x100e26f0 */
  push32(0x100e6c87u); f_100e26f0();
  /* 100e6c87 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6c8c jne 0x100e6cac */
  if (!C.zf) goto L_100e6cac;
  /* 100e6c8e mov esi, 0x64 */
  ESI = (0x64u);
L_100e6c93:;
  /* 100e6c93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6c95 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e6c97 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 100e6c99 push 0x100f3868 */
  push32((uint32_t)(0x100f3868u));
  /* 100e6c9e call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6ca4u);
  /* 100e6ca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6ca7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100e6ca8 jne 0x100e6c93 */
  if (!C.zf) goto L_100e6c93;
  /* 100e6caa jmp 0x100e6cc0 */
  goto L_100e6cc0;
L_100e6cac:;
  /* 100e6cac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6cae push 0xa */
  push32((uint32_t)(0xau));
  /* 100e6cb0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100e6cb2 push 0x100f6140 */
  push32((uint32_t)(0x100f6140u));
  /* 100e6cb7 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6cbdu);
  /* 100e6cbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6cc0:;
  /* 100e6cc0 push 0x100f6000 */
  push32((uint32_t)(0x100f6000u));
  /* 100e6cc5 call dword ptr [0x100f652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f652c))), 0x100e6ccbu);
  /* 100e6ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6cce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e6cd0 jne 0x100e6ce9 */
  if (!C.zf) goto L_100e6ce9;
  /* 100e6cd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e6cd6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e6cdb push 0x100f3670 */
  push32((uint32_t)(0x100f3670u));
  /* 100e6ce0 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6ce6u);
  /* 100e6ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e6ce9:;
  /* 100e6ce9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6ceb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e6ced push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e6cf2 push 0x100f3660 */
  push32((uint32_t)(0x100f3660u));
  /* 100e6cf7 call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6cfdu);
  /* 100e6cfd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e6cff push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100e6d01 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100e6d06 push 0x100f5f60 */
  push32((uint32_t)(0x100f5f60u));
  /* 100e6d0b call dword ptr [0x100f64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64e4))), 0x100e6d11u);
  /* 100e6d11 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6d14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100e6d15 jne 0x100e6c51 */
  if (!C.zf) goto L_100e6c51;
  /* 100e6d1b call 0x100e6730 */
  push32(0x100e6d20u); f_100e6730();
  /* 100e6d20 call 0x100e5fd0 */
  push32(0x100e6d25u); f_100e5fd0();
  /* 100e6d25 call 0x100e62f0 */
  push32(0x100e6d2au); f_100e62f0();
  /* 100e6d2a call 0x100e52b0 */
  push32(0x100e6d2fu); f_100e52b0();
  /* 100e6d2f call 0x100e5a90 */
  push32(0x100e6d34u); f_100e5a90();
  /* 100e6d34 pop edi */
  EDI = (pop32());
  /* 100e6d35 pop esi */
  ESI = (pop32());
  /* 100e6d36 ret  */
  ESPCHK(0x100e6c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d40 @ 0x100e6d40 (279 bytes, 62 insns) [1 switch table(s)] */
void f_100e6d40(void) {
  FTRACE(0x100e6d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e6d40 call 0x100e2680 */
  push32(0x100e6d45u); f_100e2680();
  /* 100e6d45 mov dword ptr [0x100f5f38], eax */
  w32((uint32_t)(0x100f5f38), (EAX));
  /* 100e6d4a call 0x100e2660 */
  push32(0x100e6d4fu); f_100e2660();
  /* 100e6d4f mov dword ptr [0x100f6348], eax */
  w32((uint32_t)(0x100f6348), (EAX));
  /* 100e6d54 call 0x100e2670 */
  push32(0x100e6d59u); f_100e2670();
  /* 100e6d59 mov dword ptr [0x100f3878], eax */
  w32((uint32_t)(0x100f3878), (EAX));
  /* 100e6d5e call 0x100e3040 */
  push32(0x100e6d63u); f_100e3040();
  /* 100e6d63 push 0x100ef114 */
  push32((uint32_t)(0x100ef114u));
  /* 100e6d68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100e6d6a call dword ptr [0x100f64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64ec))), 0x100e6d70u);
  /* 100e6d70 call 0x100e6630 */
  push32(0x100e6d75u); f_100e6630();
  /* 100e6d75 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100e6d77 push 0x100ef244 */
  push32((uint32_t)(0x100ef244u));
  /* 100e6d7c call 0x100e2700 */
  push32(0x100e6d81u); f_100e2700();
  /* 100e6d81 mov eax, dword ptr [0x100f5f38] */
  EAX = (r32((uint32_t)(0x100f5f38)));
  /* 100e6d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6d89 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6d8c ja 0x100e6e52 */
  if ((!C.cf&&!C.zf)) goto L_100e6e52;
  /* 100e6d92 jmp dword ptr [eax*4 + 0x100e6e58] */
  switch (EAX) {
    case 0: goto L_100e6d99;
    case 1: goto L_100e6e15;
    case 2: goto L_100e6e1c;
    case 3: goto L_100e6e1c;
    case 4: goto L_100e6e1c;
    case 5: goto L_100e6d99;
    default: x86_unimpl("switch@0x100e6d92 out of table"); return;
  }
L_100e6d99:;
  /* 100e6d99 cmp dword ptr [0x100f3878], 3 */
  { uint32_t _a=(r32((uint32_t)(0x100f3878))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6da0 jne 0x100e6dd2 */
  if (!C.zf) goto L_100e6dd2;
  /* 100e6da2 push 0x100ef160 */
  push32((uint32_t)(0x100ef160u));
  /* 100e6da7 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e6da9 call dword ptr [0x100f64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64ec))), 0x100e6dafu);
  /* 100e6daf push 0x100ef16c */
  push32((uint32_t)(0x100ef16cu));
  /* 100e6db4 call 0x100e2720 */
  push32(0x100e6db9u); f_100e2720();
  /* 100e6db9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e6dbb push 0x100ef41c */
  push32((uint32_t)(0x100ef41cu));
  /* 100e6dc0 call 0x100e2700 */
  push32(0x100e6dc5u); f_100e2700();
  /* 100e6dc5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6dc8 call 0x100e6c40 */
  push32(0x100e6dcdu); f_100e6c40();
  /* 100e6dcd jmp 0x100e6e52 */
  goto L_100e6e52;
L_100e6dd2:;
  /* 100e6dd2 push 0x100ef114 */
  push32((uint32_t)(0x100ef114u));
  /* 100e6dd7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100e6dd9 call dword ptr [0x100f64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64ec))), 0x100e6ddfu);
  /* 100e6ddf push 0x100f6578 */
  push32((uint32_t)(0x100f6578u));
  /* 100e6de4 call 0x100e2720 */
  push32(0x100e6de9u); f_100e2720();
  /* 100e6de9 mov eax, dword ptr [0x100f3878] */
  EAX = (r32((uint32_t)(0x100f3878)));
  /* 100e6dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6df3 jne 0x100e6dff */
  if (!C.zf) goto L_100e6dff;
  /* 100e6df5 mov dword ptr [0x100ef248], 4 */
  w32((uint32_t)(0x100ef248), (0x4u));
L_100e6dff:;
  /* 100e6dff push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100e6e01 push 0x100ef244 */
  push32((uint32_t)(0x100ef244u));
  /* 100e6e06 call 0x100e2700 */
  push32(0x100e6e0bu); f_100e2700();
  /* 100e6e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6e0e call 0x100e6be0 */
  push32(0x100e6e13u); f_100e6be0();
  /* 100e6e13 jmp 0x100e6e52 */
  goto L_100e6e52;
L_100e6e15:;
  /* 100e6e15 call 0x100e43e0 */
  push32(0x100e6e1au); f_100e43e0();
  /* 100e6e1a jmp 0x100e6e52 */
  goto L_100e6e52;
L_100e6e1c:;
  /* 100e6e1c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100e6e21 call dword ptr [0x100f6508] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6508))), 0x100e6e27u);
  /* 100e6e27 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100e6e2c call dword ptr [0x100f650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f650c))), 0x100e6e32u);
  /* 100e6e32 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100e6e37 call dword ptr [0x100f6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6510))), 0x100e6e3du);
  /* 100e6e3d push 0x100ef07c */
  push32((uint32_t)(0x100ef07cu));
  /* 100e6e42 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100e6e44 call dword ptr [0x100f64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f64ec))), 0x100e6e4au);
  /* 100e6e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6e4d call 0x100e3360 */
  push32(0x100e6e52u); f_100e3360();
L_100e6e52:;
  /* 100e6e52 jmp 0x100e31c0 */
  f_100e31c0(); return;
}

/* FUN_10006e70 @ 0x100e6e70 (82 bytes, 32 insns) */
void f_100e6e70(void) {
  FTRACE(0x100e6e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e6e70 push ebp */
  push32((uint32_t)(EBP));
  /* 100e6e71 mov ebp, esp */
  EBP = (ESP);
  /* 100e6e73 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e6e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e6e79 push esi */
  push32((uint32_t)(ESI));
  /* 100e6e7a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 100e6e7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100e6e80 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100e6e83 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 100e6e8a push eax */
  push32((uint32_t)(EAX));
  /* 100e6e8b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 100e6e8e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e6e91 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 100e6e98 push eax */
  push32((uint32_t)(EAX));
  /* 100e6e99 call 0x100e71fc */
  push32(0x100e6e9eu); f_100e71fc();
  /* 100e6e9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6ea1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 100e6ea4 mov esi, eax */
  ESI = (EAX);
  /* 100e6ea6 js 0x100e6eb0 */
  if (C.sf) goto L_100e6eb0;
  /* 100e6ea8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 100e6eab and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 100e6eae jmp 0x100e6ebd */
  goto L_100e6ebd;
L_100e6eb0:;
  /* 100e6eb0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 100e6eb3 push eax */
  push32((uint32_t)(EAX));
  /* 100e6eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e6eb6 call 0x100e70e4 */
  push32(0x100e6ebbu); f_100e70e4();
  /* 100e6ebb pop ecx */
  ECX = (pop32());
  /* 100e6ebc pop ecx */
  ECX = (pop32());
L_100e6ebd:;
  /* 100e6ebd mov eax, esi */
  EAX = (ESI);
  /* 100e6ebf pop esi */
  ESI = (pop32());
  /* 100e6ec0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e6ec1 ret  */
  ESPCHK(0x100e6e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec2 @ 0x100e6ec2 (23 bytes, 6 insns) */
void f_100e6ec2(void) {
  FTRACE(0x100e6ec2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e6ec2 call 0x100e6eda */
  push32(0x100e6ec7u); f_100e6eda();
  /* 100e6ec7 call 0x100e7a56 */
  push32(0x100e6eccu); f_100e7a56();
  /* 100e6ecc mov dword ptr [0x100f6640], eax */
  w32((uint32_t)(0x100f6640), (EAX));
  /* 100e6ed1 call 0x100e7a06 */
  push32(0x100e6ed6u); f_100e7a06();
  /* 100e6ed6 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 100e6ed8 ret  */
  ESPCHK(0x100e6ec2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eda @ 0x100e6eda (56 bytes, 8 insns) */
void f_100e6eda(void) {
  FTRACE(0x100e6edau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e6eda mov eax, 0x100e7e2f */
  EAX = (0x100e7e2fu);
  /* 100e6edf mov dword ptr [0x100f067c], 0x100e7ad9 */
  w32((uint32_t)(0x100f067c), (0x100e7ad9u));
  /* 100e6ee9 mov dword ptr [0x100f0678], eax */
  w32((uint32_t)(0x100f0678), (EAX));
  /* 100e6eee mov dword ptr [0x100f0680], 0x100e7b3f */
  w32((uint32_t)(0x100f0680), (0x100e7b3fu));
  /* 100e6ef8 mov dword ptr [0x100f0684], 0x100e7a7f */
  w32((uint32_t)(0x100f0684), (0x100e7a7fu));
  /* 100e6f02 mov dword ptr [0x100f0688], 0x100e7b27 */
  w32((uint32_t)(0x100f0688), (0x100e7b27u));
  /* 100e6f0c mov dword ptr [0x100f068c], eax */
  w32((uint32_t)(0x100f068c), (EAX));
  /* 100e6f11 ret  */
  ESPCHK(0x100e6edau, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x100e6f14 (39 bytes, 16 insns) */
void f_100e6f14(void) {
  FTRACE(0x100e6f14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e6f14 push ebp */
  push32((uint32_t)(EBP));
  /* 100e6f15 mov ebp, esp */
  EBP = (ESP);
  /* 100e6f17 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6f1a wait  */
  /* wait (no observable integer/reg state) */
  /* 100e6f1b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 100e6f1e wait  */
  /* wait (no observable integer/reg state) */
  /* 100e6f1f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 100e6f23 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 100e6f26 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 100e6f2a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 100e6f2d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 100e6f30 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 100e6f33 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100e6f36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 100e6f39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e6f3a ret  */
  ESPCHK(0x100e6f14u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f3b @ 0x100e6f3b (217 bytes, 57 insns) */
void f_100e6f3b(void) {
  FTRACE(0x100e6f3bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e6f3b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e6f3f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6f42 jne 0x100e6fd0 */
  if (!C.zf) goto L_100e6fd0;
  /* 100e6f48 call dword ptr [0x100ee014] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee014))), 0x100e6f4eu);
  /* 100e6f4e push 1 */
  push32((uint32_t)(0x1u));
  /* 100e6f50 mov dword ptr [0x100f665c], eax */
  w32((uint32_t)(0x100f665c), (EAX));
  /* 100e6f55 call 0x100e890c */
  push32(0x100e6f5au); f_100e890c();
  /* 100e6f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6f5c pop ecx */
  ECX = (pop32());
  /* 100e6f5d je 0x100e6f9b */
  if (C.zf) goto L_100e6f9b;
  /* 100e6f5f mov eax, dword ptr [0x100f665c] */
  EAX = (r32((uint32_t)(0x100f665c)));
  /* 100e6f64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100e6f66 mov cl, byte ptr [0x100f665d] */
  CL = (r8((uint32_t)(0x100f665d)));
  /* 100e6f6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100e6f71 shr dword ptr [0x100f665c], 0x10 */
  w32((uint32_t)(0x100f665c), (sh_shr((uint32_t)(r32((uint32_t)(0x100f665c))), (0x10u)&0x1f, 32)));
  /* 100e6f78 mov dword ptr [0x100f6664], eax */
  w32((uint32_t)(0x100f6664), (EAX));
  /* 100e6f7d mov dword ptr [0x100f6668], ecx */
  w32((uint32_t)(0x100f6668), (ECX));
  /* 100e6f83 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100e6f86 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e6f88 mov dword ptr [0x100f6660], eax */
  w32((uint32_t)(0x100f6660), (EAX));
  /* 100e6f8d call 0x100e7fc3 */
  push32(0x100e6f92u); f_100e7fc3();
  /* 100e6f92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e6f94 jne 0x100e6f9f */
  if (!C.zf) goto L_100e6f9f;
  /* 100e6f96 call 0x100e8969 */
  push32(0x100e6f9bu); f_100e8969();
L_100e6f9b:;
  /* 100e6f9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e6f9d jmp 0x100e7011 */
  goto L_100e7011;
L_100e6f9f:;
  /* 100e6f9f call dword ptr [0x100ee010] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee010))), 0x100e6fa5u);
  /* 100e6fa5 mov dword ptr [0x100f7d54], eax */
  w32((uint32_t)(0x100f7d54), (EAX));
  /* 100e6faa call 0x100e8665 */
  push32(0x100e6fafu); f_100e8665();
  /* 100e6faf mov dword ptr [0x100f6648], eax */
  w32((uint32_t)(0x100f6648), (EAX));
  /* 100e6fb4 call 0x100e814f */
  push32(0x100e6fb9u); f_100e814f();
  /* 100e6fb9 call 0x100e8418 */
  push32(0x100e6fbeu); f_100e8418();
  /* 100e6fbe call 0x100e835f */
  push32(0x100e6fc3u); f_100e835f();
  /* 100e6fc3 call 0x100e7ea5 */
  push32(0x100e6fc8u); f_100e7ea5();
  /* 100e6fc8 inc dword ptr [0x100f6644] */
  { uint32_t _r=(r32((uint32_t)(0x100f6644)))+1; w32((uint32_t)(0x100f6644), (_r)); fl_inc(_r,32); }
  /* 100e6fce jmp 0x100e700e */
  goto L_100e700e;
L_100e6fd0:;
  /* 100e6fd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100e6fd2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6fd4 jne 0x100e7002 */
  if (!C.zf) goto L_100e7002;
  /* 100e6fd6 cmp dword ptr [0x100f6644], ecx */
  { uint32_t _a=(r32((uint32_t)(0x100f6644))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6fdc jle 0x100e6f9b */
  if ((C.zf||C.sf!=C.of)) goto L_100e6f9b;
  /* 100e6fde dec dword ptr [0x100f6644] */
  { uint32_t _r=(r32((uint32_t)(0x100f6644)))-1; w32((uint32_t)(0x100f6644), (_r)); fl_dec(_r,32); }
  /* 100e6fe4 cmp dword ptr [0x100f6694], ecx */
  { uint32_t _a=(r32((uint32_t)(0x100f6694))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e6fea jne 0x100e6ff1 */
  if (!C.zf) goto L_100e6ff1;
  /* 100e6fec call 0x100e7ee3 */
  push32(0x100e6ff1u); f_100e7ee3();
L_100e6ff1:;
  /* 100e6ff1 call 0x100e830b */
  push32(0x100e6ff6u); f_100e830b();
  /* 100e6ff6 call 0x100e8017 */
  push32(0x100e6ffbu); f_100e8017();
  /* 100e6ffb call 0x100e8969 */
  push32(0x100e7000u); f_100e8969();
  /* 100e7000 jmp 0x100e700e */
  goto L_100e700e;
L_100e7002:;
  /* 100e7002 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7005 jne 0x100e700e */
  if (!C.zf) goto L_100e700e;
  /* 100e7007 push ecx */
  push32((uint32_t)(ECX));
  /* 100e7008 call 0x100e80af */
  push32(0x100e700du); f_100e80af();
  /* 100e700d pop ecx */
  ECX = (pop32());
L_100e700e:;
  /* 100e700e push 1 */
  push32((uint32_t)(0x1u));
  /* 100e7010 pop eax */
  EAX = (pop32());
L_100e7011:;
  /* 100e7011 ret 0xc */
  ESPCHK(0x100e6f3bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x100e7014 (157 bytes, 73 insns) */
void f_100e7014(void) {
  FTRACE(0x100e7014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7014 push ebp */
  push32((uint32_t)(EBP));
  /* 100e7015 mov ebp, esp */
  EBP = (ESP);
  /* 100e7017 push ebx */
  push32((uint32_t)(EBX));
  /* 100e7018 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e701b push esi */
  push32((uint32_t)(ESI));
  /* 100e701c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100e701f push edi */
  push32((uint32_t)(EDI));
  /* 100e7020 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100e7023 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e7025 jne 0x100e7030 */
  if (!C.zf) goto L_100e7030;
  /* 100e7027 cmp dword ptr [0x100f6644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100f6644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e702e jmp 0x100e7056 */
  goto L_100e7056;
L_100e7030:;
  /* 100e7030 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7033 je 0x100e703a */
  if (C.zf) goto L_100e703a;
  /* 100e7035 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7038 jne 0x100e705c */
  if (!C.zf) goto L_100e705c;
L_100e703a:;
  /* 100e703a mov eax, dword ptr [0x100f7d58] */
  EAX = (r32((uint32_t)(0x100f7d58)));
  /* 100e703f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e7041 je 0x100e704c */
  if (C.zf) goto L_100e704c;
  /* 100e7043 push edi */
  push32((uint32_t)(EDI));
  /* 100e7044 push esi */
  push32((uint32_t)(ESI));
  /* 100e7045 push ebx */
  push32((uint32_t)(EBX));
  /* 100e7046 call eax */
  call_ind((uint32_t)(EAX), 0x100e7048u);
  /* 100e7048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e704a je 0x100e7058 */
  if (C.zf) goto L_100e7058;
L_100e704c:;
  /* 100e704c push edi */
  push32((uint32_t)(EDI));
  /* 100e704d push esi */
  push32((uint32_t)(ESI));
  /* 100e704e push ebx */
  push32((uint32_t)(EBX));
  /* 100e704f call 0x100e6f3b */
  push32(0x100e7054u); f_100e6f3b();
  /* 100e7054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_100e7056:;
  /* 100e7056 jne 0x100e705c */
  if (!C.zf) goto L_100e705c;
L_100e7058:;
  /* 100e7058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e705a jmp 0x100e70aa */
  goto L_100e70aa;
L_100e705c:;
  /* 100e705c push edi */
  push32((uint32_t)(EDI));
  /* 100e705d push esi */
  push32((uint32_t)(ESI));
  /* 100e705e push ebx */
  push32((uint32_t)(EBX));
  /* 100e705f call 0x100e27f0 */
  push32(0x100e7064u); f_100e27f0();
  /* 100e7064 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7067 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100e706a jne 0x100e7078 */
  if (!C.zf) goto L_100e7078;
  /* 100e706c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e706e jne 0x100e70a7 */
  if (!C.zf) goto L_100e70a7;
  /* 100e7070 push edi */
  push32((uint32_t)(EDI));
  /* 100e7071 push eax */
  push32((uint32_t)(EAX));
  /* 100e7072 push ebx */
  push32((uint32_t)(EBX));
  /* 100e7073 call 0x100e6f3b */
  push32(0x100e7078u); f_100e6f3b();
L_100e7078:;
  /* 100e7078 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e707a je 0x100e7081 */
  if (C.zf) goto L_100e7081;
  /* 100e707c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e707f jne 0x100e70a7 */
  if (!C.zf) goto L_100e70a7;
L_100e7081:;
  /* 100e7081 push edi */
  push32((uint32_t)(EDI));
  /* 100e7082 push esi */
  push32((uint32_t)(ESI));
  /* 100e7083 push ebx */
  push32((uint32_t)(EBX));
  /* 100e7084 call 0x100e6f3b */
  push32(0x100e7089u); f_100e6f3b();
  /* 100e7089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e708b jne 0x100e7090 */
  if (!C.zf) goto L_100e7090;
  /* 100e708d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_100e7090:;
  /* 100e7090 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7094 je 0x100e70a7 */
  if (C.zf) goto L_100e70a7;
  /* 100e7096 mov eax, dword ptr [0x100f7d58] */
  EAX = (r32((uint32_t)(0x100f7d58)));
  /* 100e709b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e709d je 0x100e70a7 */
  if (C.zf) goto L_100e70a7;
  /* 100e709f push edi */
  push32((uint32_t)(EDI));
  /* 100e70a0 push esi */
  push32((uint32_t)(ESI));
  /* 100e70a1 push ebx */
  push32((uint32_t)(EBX));
  /* 100e70a2 call eax */
  call_ind((uint32_t)(EAX), 0x100e70a4u);
  /* 100e70a4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_100e70a7:;
  /* 100e70a7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_100e70aa:;
  /* 100e70aa pop edi */
  EDI = (pop32());
  /* 100e70ab pop esi */
  ESI = (pop32());
  /* 100e70ac pop ebx */
  EBX = (pop32());
  /* 100e70ad pop ebp */
  EBP = (pop32());
  /* 100e70ae ret 0xc */
  ESPCHK(0x100e7014u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x100e70b1 (48 bytes, 15 insns) */
void f_100e70b1(void) {
  FTRACE(0x100e70b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e70b1 mov eax, dword ptr [0x100f6650] */
  EAX = (r32((uint32_t)(0x100f6650)));
  /* 100e70b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e70b9 je 0x100e70c8 */
  if (C.zf) goto L_100e70c8;
  /* 100e70bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e70bd jne 0x100e70cd */
  if (!C.zf) goto L_100e70cd;
  /* 100e70bf cmp dword ptr [0x100f6654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100f6654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e70c6 jne 0x100e70cd */
  if (!C.zf) goto L_100e70cd;
L_100e70c8:;
  /* 100e70c8 call 0x100e8a11 */
  push32(0x100e70cdu); f_100e8a11();
L_100e70cd:;
  /* 100e70cd push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100e70d1 call 0x100e8a4a */
  push32(0x100e70d6u); f_100e8a4a();
  /* 100e70d6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 100e70db call dword ptr [0x100f066c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f066c))), 0x100e70e1u);
  /* 100e70e1 pop ecx */
  ECX = (pop32());
  /* 100e70e2 pop ecx */
  ECX = (pop32());
  /* 100e70e3 ret  */
  ESPCHK(0x100e70b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e4 @ 0x100e70e4 (280 bytes, 106 insns) */
void f_100e70e4(void) {
  FTRACE(0x100e70e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e70e4 push ebp */
  push32((uint32_t)(EBP));
  /* 100e70e5 mov ebp, esp */
  EBP = (ESP);
  /* 100e70e7 push ebx */
  push32((uint32_t)(EBX));
  /* 100e70e8 push esi */
  push32((uint32_t)(ESI));
  /* 100e70e9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100e70ec mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100e70ef mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 100e70f2 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 100e70f4 je 0x100e71f0 */
  if (C.zf) goto L_100e71f0;
  /* 100e70fa test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 100e70fc jne 0x100e71f0 */
  if (!C.zf) goto L_100e71f0;
  /* 100e7102 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 100e7104 je 0x100e711c */
  if (C.zf) goto L_100e711c;
  /* 100e7106 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100e710a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 100e710c je 0x100e71f0 */
  if (C.zf) goto L_100e71f0;
  /* 100e7112 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 100e7115 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 100e7117 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100e7119 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_100e711c:;
  /* 100e711c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100e711f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100e7123 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 100e7127 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 100e7129 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 100e712b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 100e712f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 100e7132 jne 0x100e7156 */
  if (!C.zf) goto L_100e7156;
  /* 100e7134 cmp esi, 0x100f0770 */
  { uint32_t _a=(ESI),_b=(0x100f0770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e713a je 0x100e7144 */
  if (C.zf) goto L_100e7144;
  /* 100e713c cmp esi, 0x100f0790 */
  { uint32_t _a=(ESI),_b=(0x100f0790u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7142 jne 0x100e714f */
  if (!C.zf) goto L_100e714f;
L_100e7144:;
  /* 100e7144 push ebx */
  push32((uint32_t)(EBX));
  /* 100e7145 call 0x100e8ea9 */
  push32(0x100e714au); f_100e8ea9();
  /* 100e714a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e714c pop ecx */
  ECX = (pop32());
  /* 100e714d jne 0x100e7156 */
  if (!C.zf) goto L_100e7156;
L_100e714f:;
  /* 100e714f push esi */
  push32((uint32_t)(ESI));
  /* 100e7150 call 0x100e8e65 */
  push32(0x100e7155u); f_100e8e65();
  /* 100e7155 pop ecx */
  ECX = (pop32());
L_100e7156:;
  /* 100e7156 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 100e715c push edi */
  push32((uint32_t)(EDI));
  /* 100e715d je 0x100e71c6 */
  if (C.zf) goto L_100e71c6;
  /* 100e715f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100e7162 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 100e7164 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7166 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100e7169 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100e716b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 100e716e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100e716f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100e7171 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 100e7174 jle 0x100e7186 */
  if ((C.zf||C.sf!=C.of)) goto L_100e7186;
  /* 100e7176 push edi */
  push32((uint32_t)(EDI));
  /* 100e7177 push eax */
  push32((uint32_t)(EAX));
  /* 100e7178 push ebx */
  push32((uint32_t)(EBX));
  /* 100e7179 call 0x100e8c75 */
  push32(0x100e717eu); f_100e8c75();
  /* 100e717e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7181 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100e7184 jmp 0x100e71bc */
  goto L_100e71bc;
L_100e7186:;
  /* 100e7186 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7189 je 0x100e71a4 */
  if (C.zf) goto L_100e71a4;
  /* 100e718b mov ecx, ebx */
  ECX = (EBX);
  /* 100e718d mov eax, ebx */
  EAX = (EBX);
  /* 100e718f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100e7192 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100e7195 mov ecx, dword ptr [ecx*4 + 0x100f7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100f7c40)));
  /* 100e719c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100e719f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100e71a2 jmp 0x100e71a9 */
  goto L_100e71a9;
L_100e71a4:;
  /* 100e71a4 mov eax, 0x100f0698 */
  EAX = (0x100f0698u);
L_100e71a9:;
  /* 100e71a9 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100e71ad je 0x100e71bc */
  if (C.zf) goto L_100e71bc;
  /* 100e71af push 2 */
  push32((uint32_t)(0x2u));
  /* 100e71b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e71b3 push ebx */
  push32((uint32_t)(EBX));
  /* 100e71b4 call 0x100e8b9d */
  push32(0x100e71b9u); f_100e8b9d();
  /* 100e71b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e71bc:;
  /* 100e71bc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100e71bf mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 100e71c2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100e71c4 jmp 0x100e71da */
  goto L_100e71da;
L_100e71c6:;
  /* 100e71c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e71c8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100e71cb pop edi */
  EDI = (pop32());
  /* 100e71cc push edi */
  push32((uint32_t)(EDI));
  /* 100e71cd push eax */
  push32((uint32_t)(EAX));
  /* 100e71ce push ebx */
  push32((uint32_t)(EBX));
  /* 100e71cf call 0x100e8c75 */
  push32(0x100e71d4u); f_100e8c75();
  /* 100e71d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e71d7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_100e71da:;
  /* 100e71da cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e71dd pop edi */
  EDI = (pop32());
  /* 100e71de je 0x100e71e6 */
  if (C.zf) goto L_100e71e6;
  /* 100e71e0 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100e71e4 jmp 0x100e71f5 */
  goto L_100e71f5;
L_100e71e6:;
  /* 100e71e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e71e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100e71ee jmp 0x100e71f8 */
  goto L_100e71f8;
L_100e71f0:;
  /* 100e71f0 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 100e71f2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_100e71f5:;
  /* 100e71f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100e71f8:;
  /* 100e71f8 pop esi */
  ESI = (pop32());
  /* 100e71f9 pop ebx */
  EBX = (pop32());
  /* 100e71fa pop ebp */
  EBP = (pop32());
  /* 100e71fb ret  */
  ESPCHK(0x100e70e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100071fc @ 0x100e71fc (1825 bytes, 595 insns) [1 switch table(s)] */
void f_100e71fc(void) {
  FTRACE(0x100e71fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e71fc push ebp */
  push32((uint32_t)(EBP));
  /* 100e71fd mov ebp, esp */
  EBP = (ESP);
  /* 100e71ff sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7205 push ebx */
  push32((uint32_t)(EBX));
  /* 100e7206 push esi */
  push32((uint32_t)(ESI));
  /* 100e7207 push edi */
  push32((uint32_t)(EDI));
  /* 100e7208 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100e720b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100e720d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100e720f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100e7210 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100e7212 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 100e7215 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 100e7218 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 100e721b je 0x100e7915 */
  if (C.zf) goto L_100e7915;
  /* 100e7221 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100e7224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100e7226 jmp 0x100e7230 */
  goto L_100e7230;
L_100e7228:;
  /* 100e7228 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100e722b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 100e722e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_100e7230:;
  /* 100e7230 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7233 jl 0x100e7915 */
  if ((C.sf!=C.of)) goto L_100e7915;
  /* 100e7239 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e723c jl 0x100e7251 */
  if ((C.sf!=C.of)) goto L_100e7251;
  /* 100e723e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e7241 jg 0x100e7251 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e7251;
  /* 100e7243 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100e7246 mov al, byte ptr [eax + 0x100ee0c8] */
  AL = (r8((uint32_t)(EAX + 0x100ee0c8)));
  /* 100e724c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 100e724f jmp 0x100e7253 */
  goto L_100e7253;
L_100e7251:;
  /* 100e7251 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100e7253:;
  /* 100e7253 movsx eax, byte ptr [esi + eax*8 + 0x100ee0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x100ee0e8))));
  /* 100e725b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100e725e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7261 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 100e7264 ja 0x100e7904 */
  if ((!C.cf&&!C.zf)) goto L_100e7904;
  /* 100e726a jmp dword ptr [eax*4 + 0x100e791d] */
  switch (EAX) {
    case 0: goto L_100e739b;
    case 1: goto L_100e7271;
    case 2: goto L_100e728c;
    case 3: goto L_100e72d8;
    case 4: goto L_100e730f;
    case 5: goto L_100e7317;
    case 6: goto L_100e734c;
    case 7: goto L_100e73df;
    default: x86_unimpl("switch@0x100e726a out of table"); return;
  }
L_100e7271:;
  /* 100e7271 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 100e7275 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 100e7278 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 100e727b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 100e727e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 100e7281 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 100e7284 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100e7287 jmp 0x100e7904 */
  goto L_100e7904;
L_100e728c:;
  /* 100e728c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100e728f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7292 je 0x100e72cf */
  if (C.zf) goto L_100e72cf;
  /* 100e7294 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7297 je 0x100e72c6 */
  if (C.zf) goto L_100e72c6;
  /* 100e7299 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e729c je 0x100e72bd */
  if (C.zf) goto L_100e72bd;
  /* 100e729e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e729f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e72a0 je 0x100e72b4 */
  if (C.zf) goto L_100e72b4;
  /* 100e72a2 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e72a5 jne 0x100e7904 */
  if (!C.zf) goto L_100e7904;
  /* 100e72ab or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100e72af jmp 0x100e7904 */
  goto L_100e7904;
L_100e72b4:;
  /* 100e72b4 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100e72b8 jmp 0x100e7904 */
  goto L_100e7904;
L_100e72bd:;
  /* 100e72bd or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100e72c1 jmp 0x100e7904 */
  goto L_100e7904;
L_100e72c6:;
  /* 100e72c6 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 100e72ca jmp 0x100e7904 */
  goto L_100e7904;
L_100e72cf:;
  /* 100e72cf or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100e72d3 jmp 0x100e7904 */
  goto L_100e7904;
L_100e72d8:;
  /* 100e72d8 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e72db jne 0x100e7300 */
  if (!C.zf) goto L_100e7300;
  /* 100e72dd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100e72e0 push eax */
  push32((uint32_t)(EAX));
  /* 100e72e1 call 0x100e79db */
  push32(0x100e72e6u); f_100e79db();
  /* 100e72e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e72e8 pop ecx */
  ECX = (pop32());
  /* 100e72e9 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100e72ec jge 0x100e7904 */
  if ((C.sf==C.of)) goto L_100e7904;
  /* 100e72f2 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100e72f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_100e72f8:;
  /* 100e72f8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100e72fb jmp 0x100e7904 */
  goto L_100e7904;
L_100e7300:;
  /* 100e7300 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 100e7303 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100e7306 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100e7309 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 100e730d jmp 0x100e72f8 */
  goto L_100e72f8;
L_100e730f:;
  /* 100e730f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 100e7312 jmp 0x100e7904 */
  goto L_100e7904;
L_100e7317:;
  /* 100e7317 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e731a jne 0x100e733a */
  if (!C.zf) goto L_100e733a;
  /* 100e731c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100e731f push eax */
  push32((uint32_t)(EAX));
  /* 100e7320 call 0x100e79db */
  push32(0x100e7325u); f_100e79db();
  /* 100e7325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e7327 pop ecx */
  ECX = (pop32());
  /* 100e7328 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100e732b jge 0x100e7904 */
  if ((C.sf==C.of)) goto L_100e7904;
  /* 100e7331 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 100e7335 jmp 0x100e7904 */
  goto L_100e7904;
L_100e733a:;
  /* 100e733a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 100e733d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100e7340 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 100e7344 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100e7347 jmp 0x100e7904 */
  goto L_100e7904;
L_100e734c:;
  /* 100e734c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e734f je 0x100e737f */
  if (C.zf) goto L_100e737f;
  /* 100e7351 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e7354 je 0x100e7376 */
  if (C.zf) goto L_100e7376;
  /* 100e7356 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e7359 je 0x100e736d */
  if (C.zf) goto L_100e736d;
  /* 100e735b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e735e jne 0x100e7904 */
  if (!C.zf) goto L_100e7904;
  /* 100e7364 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100e7368 jmp 0x100e7904 */
  goto L_100e7904;
L_100e736d:;
  /* 100e736d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100e7371 jmp 0x100e7904 */
  goto L_100e7904;
L_100e7376:;
  /* 100e7376 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100e737a jmp 0x100e7904 */
  goto L_100e7904;
L_100e737f:;
  /* 100e737f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e7382 jne 0x100e7398 */
  if (!C.zf) goto L_100e7398;
  /* 100e7384 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e7388 jne 0x100e7398 */
  if (!C.zf) goto L_100e7398;
  /* 100e738a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100e738b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100e738c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100e7390 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 100e7393 jmp 0x100e7904 */
  goto L_100e7904;
L_100e7398:;
  /* 100e7398 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_100e739b:;
  /* 100e739b mov ecx, dword ptr [0x100f09d0] */
  ECX = (r32((uint32_t)(0x100f09d0)));
  /* 100e73a1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100e73a4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100e73a7 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100e73ac je 0x100e73c7 */
  if (C.zf) goto L_100e73c7;
  /* 100e73ae lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100e73b1 push eax */
  push32((uint32_t)(EAX));
  /* 100e73b2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e73b5 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100e73b8 push eax */
  push32((uint32_t)(EAX));
  /* 100e73b9 call 0x100e793d */
  push32(0x100e73beu); f_100e793d();
  /* 100e73be mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100e73c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e73c3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100e73c4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100e73c7:;
  /* 100e73c7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100e73ca push eax */
  push32((uint32_t)(EAX));
  /* 100e73cb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e73ce movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100e73d1 push eax */
  push32((uint32_t)(EAX));
  /* 100e73d2 call 0x100e793d */
  push32(0x100e73d7u); f_100e793d();
  /* 100e73d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e73da jmp 0x100e7904 */
  goto L_100e7904;
L_100e73df:;
  /* 100e73df movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100e73e2 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e73e5 jg 0x100e7607 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e7607;
  /* 100e73eb cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e73ee jge 0x100e748a */
  if ((C.sf==C.of)) goto L_100e748a;
  /* 100e73f4 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e73f7 jg 0x100e74e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e74e8;
  /* 100e73fd je 0x100e767b */
  if (C.zf) goto L_100e767b;
  /* 100e7403 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7406 je 0x100e74ab */
  if (C.zf) goto L_100e74ab;
  /* 100e740c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e740d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e740e je 0x100e7480 */
  if (C.zf) goto L_100e7480;
  /* 100e7410 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e7411 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e7412 je 0x100e7480 */
  if (C.zf) goto L_100e7480;
  /* 100e7414 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7417 jne 0x100e7806 */
  if (!C.zf) goto L_100e7806;
  /* 100e741d test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 100e7423 jne 0x100e7429 */
  if (!C.zf) goto L_100e7429;
  /* 100e7425 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_100e7429:;
  /* 100e7429 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 100e742c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e742f jne 0x100e7436 */
  if (!C.zf) goto L_100e7436;
  /* 100e7431 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_100e7436:;
  /* 100e7436 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100e7439 push eax */
  push32((uint32_t)(EAX));
  /* 100e743a call 0x100e79db */
  push32(0x100e743fu); f_100e79db();
  /* 100e743f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 100e7445 pop ecx */
  ECX = (pop32());
  /* 100e7446 mov ecx, eax */
  ECX = (EAX);
  /* 100e7448 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100e744b je 0x100e764f */
  if (C.zf) goto L_100e764f;
  /* 100e7451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100e7453 jne 0x100e745e */
  if (!C.zf) goto L_100e745e;
  /* 100e7455 mov ecx, dword ptr [0x100f0674] */
  ECX = (r32((uint32_t)(0x100f0674)));
  /* 100e745b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_100e745e:;
  /* 100e745e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 100e7465 mov eax, ecx */
  EAX = (ECX);
L_100e7467:;
  /* 100e7467 mov edx, esi */
  EDX = (ESI);
  /* 100e7469 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100e746a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100e746c je 0x100e7646 */
  if (C.zf) goto L_100e7646;
  /* 100e7472 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100e7476 je 0x100e7646 */
  if (C.zf) goto L_100e7646;
  /* 100e747c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e747d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e747e jmp 0x100e7467 */
  goto L_100e7467;
L_100e7480:;
  /* 100e7480 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 100e7487 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_100e748a:;
  /* 100e748a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100e748e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 100e7494 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7496 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 100e7499 jge 0x100e756e */
  if ((C.sf==C.of)) goto L_100e756e;
  /* 100e749f mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 100e74a6 jmp 0x100e757c */
  goto L_100e757c;
L_100e74ab:;
  /* 100e74ab test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 100e74b1 jne 0x100e74b7 */
  if (!C.zf) goto L_100e74b7;
  /* 100e74b3 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_100e74b7:;
  /* 100e74b7 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 100e74bd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100e74c0 push eax */
  push32((uint32_t)(EAX));
  /* 100e74c1 je 0x100e74fe */
  if (C.zf) goto L_100e74fe;
  /* 100e74c3 call 0x100e79f8 */
  push32(0x100e74c8u); f_100e79f8();
  /* 100e74c8 push eax */
  push32((uint32_t)(EAX));
  /* 100e74c9 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100e74cf push eax */
  push32((uint32_t)(EAX));
  /* 100e74d0 call 0x100e90bb */
  push32(0x100e74d5u); f_100e90bb();
  /* 100e74d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e74d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100e74db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e74dd jge 0x100e7511 */
  if ((C.sf==C.of)) goto L_100e7511;
  /* 100e74df mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 100e74e6 jmp 0x100e7511 */
  goto L_100e7511;
L_100e74e8:;
  /* 100e74e8 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e74eb je 0x100e751f */
  if (C.zf) goto L_100e751f;
  /* 100e74ed sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e74f0 je 0x100e74b7 */
  if (C.zf) goto L_100e74b7;
  /* 100e74f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e74f3 je 0x100e76e1 */
  if (C.zf) goto L_100e76e1;
  /* 100e74f9 jmp 0x100e7806 */
  goto L_100e7806;
L_100e74fe:;
  /* 100e74fe call 0x100e79db */
  push32(0x100e7503u); f_100e79db();
  /* 100e7503 pop ecx */
  ECX = (pop32());
  /* 100e7504 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 100e750a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_100e7511:;
  /* 100e7511 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100e7517 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100e751a jmp 0x100e7806 */
  goto L_100e7806;
L_100e751f:;
  /* 100e751f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100e7522 push eax */
  push32((uint32_t)(EAX));
  /* 100e7523 call 0x100e79db */
  push32(0x100e7528u); f_100e79db();
  /* 100e7528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e752a pop ecx */
  ECX = (pop32());
  /* 100e752b je 0x100e7560 */
  if (C.zf) goto L_100e7560;
  /* 100e752d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 100e7530 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100e7532 je 0x100e7560 */
  if (C.zf) goto L_100e7560;
  /* 100e7534 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 100e7538 je 0x100e7551 */
  if (C.zf) goto L_100e7551;
  /* 100e753a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 100e753d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100e753f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100e7542 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100e7545 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 100e754c jmp 0x100e7806 */
  goto L_100e7806;
L_100e7551:;
  /* 100e7551 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 100e7555 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100e7558 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 100e755b jmp 0x100e7803 */
  goto L_100e7803;
L_100e7560:;
  /* 100e7560 mov eax, dword ptr [0x100f0670] */
  EAX = (r32((uint32_t)(0x100f0670)));
  /* 100e7565 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100e7568 push eax */
  push32((uint32_t)(EAX));
  /* 100e7569 jmp 0x100e75fc */
  goto L_100e75fc;
L_100e756e:;
  /* 100e756e jne 0x100e757c */
  if (!C.zf) goto L_100e757c;
  /* 100e7570 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e7573 jne 0x100e757c */
  if (!C.zf) goto L_100e757c;
  /* 100e7575 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_100e757c:;
  /* 100e757c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100e757f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 100e7582 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7585 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 100e7588 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 100e758b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 100e758e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 100e7591 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 100e7594 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 100e7597 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100e759a push eax */
  push32((uint32_t)(EAX));
  /* 100e759b lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100e75a1 push eax */
  push32((uint32_t)(EAX));
  /* 100e75a2 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 100e75a5 push eax */
  push32((uint32_t)(EAX));
  /* 100e75a6 call dword ptr [0x100f0678] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f0678))), 0x100e75acu);
  /* 100e75ac mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 100e75af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e75b2 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 100e75b8 je 0x100e75ce */
  if (C.zf) goto L_100e75ce;
  /* 100e75ba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e75be jne 0x100e75ce */
  if (!C.zf) goto L_100e75ce;
  /* 100e75c0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100e75c6 push eax */
  push32((uint32_t)(EAX));
  /* 100e75c7 call dword ptr [0x100f0684] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f0684))), 0x100e75cdu);
  /* 100e75cd pop ecx */
  ECX = (pop32());
L_100e75ce:;
  /* 100e75ce cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e75d1 jne 0x100e75e5 */
  if (!C.zf) goto L_100e75e5;
  /* 100e75d3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e75d5 jne 0x100e75e5 */
  if (!C.zf) goto L_100e75e5;
  /* 100e75d7 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100e75dd push eax */
  push32((uint32_t)(EAX));
  /* 100e75de call dword ptr [0x100f067c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f067c))), 0x100e75e4u);
  /* 100e75e4 pop ecx */
  ECX = (pop32());
L_100e75e5:;
  /* 100e75e5 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e75ec jne 0x100e75fb */
  if (!C.zf) goto L_100e75fb;
  /* 100e75ee or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100e75f2 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 100e75f8 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_100e75fb:;
  /* 100e75fb push edi */
  push32((uint32_t)(EDI));
L_100e75fc:;
  /* 100e75fc call 0x100e9040 */
  push32(0x100e7601u); f_100e9040();
  /* 100e7601 pop ecx */
  ECX = (pop32());
  /* 100e7602 jmp 0x100e7803 */
  goto L_100e7803;
L_100e7607:;
  /* 100e7607 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e760a je 0x100e76e1 */
  if (C.zf) goto L_100e76e1;
  /* 100e7610 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7613 je 0x100e76b7 */
  if (C.zf) goto L_100e76b7;
  /* 100e7619 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e761a je 0x100e76a4 */
  if (C.zf) goto L_100e76a4;
  /* 100e7620 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e7621 je 0x100e7674 */
  if (C.zf) goto L_100e7674;
  /* 100e7623 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7626 je 0x100e7429 */
  if (C.zf) goto L_100e7429;
  /* 100e762c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e762d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e762e je 0x100e76e5 */
  if (C.zf) goto L_100e76e5;
  /* 100e7634 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7637 jne 0x100e7806 */
  if (!C.zf) goto L_100e7806;
  /* 100e763d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 100e7644 jmp 0x100e7682 */
  goto L_100e7682;
L_100e7646:;
  /* 100e7646 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7648 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100e764a jmp 0x100e7803 */
  goto L_100e7803;
L_100e764f:;
  /* 100e764f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100e7651 jne 0x100e765c */
  if (!C.zf) goto L_100e765c;
  /* 100e7653 mov ecx, dword ptr [0x100f0670] */
  ECX = (r32((uint32_t)(0x100f0670)));
  /* 100e7659 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_100e765c:;
  /* 100e765c mov eax, ecx */
  EAX = (ECX);
L_100e765e:;
  /* 100e765e mov edx, esi */
  EDX = (ESI);
  /* 100e7660 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100e7661 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100e7663 je 0x100e766d */
  if (C.zf) goto L_100e766d;
  /* 100e7665 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e7668 je 0x100e766d */
  if (C.zf) goto L_100e766d;
  /* 100e766a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e766b jmp 0x100e765e */
  goto L_100e765e;
L_100e766d:;
  /* 100e766d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e766f jmp 0x100e7803 */
  goto L_100e7803;
L_100e7674:;
  /* 100e7674 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_100e767b:;
  /* 100e767b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_100e7682:;
  /* 100e7682 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100e7686 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 100e768d je 0x100e76ec */
  if (C.zf) goto L_100e76ec;
  /* 100e768f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 100e7692 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 100e7696 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100e7698 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 100e769f mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 100e76a2 jmp 0x100e76ec */
  goto L_100e76ec;
L_100e76a4:;
  /* 100e76a4 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100e76a8 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 100e76af je 0x100e76ec */
  if (C.zf) goto L_100e76ec;
  /* 100e76b1 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100e76b5 jmp 0x100e76ec */
  goto L_100e76ec;
L_100e76b7:;
  /* 100e76b7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100e76ba push eax */
  push32((uint32_t)(EAX));
  /* 100e76bb call 0x100e79db */
  push32(0x100e76c0u); f_100e79db();
  /* 100e76c0 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100e76c4 pop ecx */
  ECX = (pop32());
  /* 100e76c5 je 0x100e76d0 */
  if (C.zf) goto L_100e76d0;
  /* 100e76c7 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 100e76cb mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 100e76ce jmp 0x100e76d5 */
  goto L_100e76d5;
L_100e76d0:;
  /* 100e76d0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 100e76d3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_100e76d5:;
  /* 100e76d5 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 100e76dc jmp 0x100e7904 */
  goto L_100e7904;
L_100e76e1:;
  /* 100e76e1 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_100e76e5:;
  /* 100e76e5 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_100e76ec:;
  /* 100e76ec test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 100e76f0 je 0x100e76fe */
  if (C.zf) goto L_100e76fe;
  /* 100e76f2 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100e76f5 push eax */
  push32((uint32_t)(EAX));
  /* 100e76f6 call 0x100e79e8 */
  push32(0x100e76fbu); f_100e79e8();
  /* 100e76fb pop ecx */
  ECX = (pop32());
  /* 100e76fc jmp 0x100e773f */
  goto L_100e773f;
L_100e76fe:;
  /* 100e76fe test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100e7702 je 0x100e7725 */
  if (C.zf) goto L_100e7725;
  /* 100e7704 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100e7708 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100e770b push eax */
  push32((uint32_t)(EAX));
  /* 100e770c je 0x100e771a */
  if (C.zf) goto L_100e771a;
  /* 100e770e call 0x100e79db */
  push32(0x100e7713u); f_100e79db();
  /* 100e7713 pop ecx */
  ECX = (pop32());
  /* 100e7714 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_100e7717:;
  /* 100e7717 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e7718 jmp 0x100e773f */
  goto L_100e773f;
L_100e771a:;
  /* 100e771a call 0x100e79db */
  push32(0x100e771fu); f_100e79db();
  /* 100e771f pop ecx */
  ECX = (pop32());
  /* 100e7720 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 100e7723 jmp 0x100e7717 */
  goto L_100e7717;
L_100e7725:;
  /* 100e7725 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100e7729 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100e772c push eax */
  push32((uint32_t)(EAX));
  /* 100e772d je 0x100e7737 */
  if (C.zf) goto L_100e7737;
  /* 100e772f call 0x100e79db */
  push32(0x100e7734u); f_100e79db();
  /* 100e7734 pop ecx */
  ECX = (pop32());
  /* 100e7735 jmp 0x100e7717 */
  goto L_100e7717;
L_100e7737:;
  /* 100e7737 call 0x100e79db */
  push32(0x100e773cu); f_100e79db();
  /* 100e773c pop ecx */
  ECX = (pop32());
  /* 100e773d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_100e773f:;
  /* 100e773f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100e7743 je 0x100e7760 */
  if (C.zf) goto L_100e7760;
  /* 100e7745 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100e7747 jg 0x100e7760 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e7760;
  /* 100e7749 jl 0x100e774f */
  if ((C.sf!=C.of)) goto L_100e774f;
  /* 100e774b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e774d jae 0x100e7760 */
  if (!C.cf) goto L_100e7760;
L_100e774f:;
  /* 100e774f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100e7751 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7754 mov esi, eax */
  ESI = (EAX);
  /* 100e7756 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 100e7758 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100e775c mov edi, edx */
  EDI = (EDX);
  /* 100e775e jmp 0x100e7764 */
  goto L_100e7764;
L_100e7760:;
  /* 100e7760 mov esi, eax */
  ESI = (EAX);
  /* 100e7762 mov edi, edx */
  EDI = (EDX);
L_100e7764:;
  /* 100e7764 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 100e7768 jne 0x100e776d */
  if (!C.zf) goto L_100e776d;
  /* 100e776a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_100e776d:;
  /* 100e776d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7771 jge 0x100e777c */
  if ((C.sf==C.of)) goto L_100e777c;
  /* 100e7773 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 100e777a jmp 0x100e7780 */
  goto L_100e7780;
L_100e777c:;
  /* 100e777c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_100e7780:;
  /* 100e7780 mov eax, esi */
  EAX = (ESI);
  /* 100e7782 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100e7784 jne 0x100e778a */
  if (!C.zf) goto L_100e778a;
  /* 100e7786 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_100e778a:;
  /* 100e778a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 100e778d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100e7790:;
  /* 100e7790 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 100e7793 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 100e7796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e7798 jg 0x100e77a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e77a0;
  /* 100e779a mov eax, esi */
  EAX = (ESI);
  /* 100e779c or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100e779e je 0x100e77db */
  if (C.zf) goto L_100e77db;
L_100e77a0:;
  /* 100e77a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100e77a3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e77a4 push edx */
  push32((uint32_t)(EDX));
  /* 100e77a5 push eax */
  push32((uint32_t)(EAX));
  /* 100e77a6 push edi */
  push32((uint32_t)(EDI));
  /* 100e77a7 push esi */
  push32((uint32_t)(ESI));
  /* 100e77a8 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 100e77ab mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 100e77ae call 0x100e91f0 */
  push32(0x100e77b3u); f_100e91f0();
  /* 100e77b3 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 100e77b6 mov ebx, eax */
  EBX = (EAX);
  /* 100e77b8 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e77bb push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 100e77be push edi */
  push32((uint32_t)(EDI));
  /* 100e77bf push esi */
  push32((uint32_t)(ESI));
  /* 100e77c0 call 0x100e9180 */
  push32(0x100e77c5u); f_100e9180();
  /* 100e77c5 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e77c8 mov esi, eax */
  ESI = (EAX);
  /* 100e77ca mov edi, edx */
  EDI = (EDX);
  /* 100e77cc jle 0x100e77d1 */
  if ((C.zf||C.sf!=C.of)) goto L_100e77d1;
  /* 100e77ce add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_100e77d1:;
  /* 100e77d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100e77d4 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100e77d7 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 100e77d9 jmp 0x100e7790 */
  goto L_100e7790;
L_100e77db:;
  /* 100e77db lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 100e77de sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e77e1 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 100e77e4 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 100e77e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100e77eb je 0x100e7806 */
  if (C.zf) goto L_100e7806;
  /* 100e77ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 100e77f0 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e77f3 jne 0x100e77f9 */
  if (!C.zf) goto L_100e77f9;
  /* 100e77f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e77f7 jne 0x100e7806 */
  if (!C.zf) goto L_100e7806;
L_100e77f9:;
  /* 100e77f9 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100e77fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e77fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 100e7800 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_100e7803:;
  /* 100e7803 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_100e7806:;
  /* 100e7806 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e780a jne 0x100e7904 */
  if (!C.zf) goto L_100e7904;
  /* 100e7810 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 100e7813 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 100e7816 je 0x100e783e */
  if (C.zf) goto L_100e783e;
  /* 100e7818 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 100e781b je 0x100e7823 */
  if (C.zf) goto L_100e7823;
  /* 100e781d mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 100e7821 jmp 0x100e7837 */
  goto L_100e7837;
L_100e7823:;
  /* 100e7823 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100e7826 je 0x100e782e */
  if (C.zf) goto L_100e782e;
  /* 100e7828 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 100e782c jmp 0x100e7837 */
  goto L_100e7837;
L_100e782e:;
  /* 100e782e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100e7831 je 0x100e783e */
  if (C.zf) goto L_100e783e;
  /* 100e7833 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_100e7837:;
  /* 100e7837 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_100e783e:;
  /* 100e783e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 100e7841 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7844 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7847 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 100e784a jne 0x100e785e */
  if (!C.zf) goto L_100e785e;
  /* 100e784c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100e784f push eax */
  push32((uint32_t)(EAX));
  /* 100e7850 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e7853 push esi */
  push32((uint32_t)(ESI));
  /* 100e7854 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100e7856 call 0x100e7972 */
  push32(0x100e785bu); f_100e7972();
  /* 100e785b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e785e:;
  /* 100e785e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100e7861 push eax */
  push32((uint32_t)(EAX));
  /* 100e7862 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 100e7865 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e7868 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 100e786b push eax */
  push32((uint32_t)(EAX));
  /* 100e786c call 0x100e79a3 */
  push32(0x100e7871u); f_100e79a3();
  /* 100e7871 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7874 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100e7877 je 0x100e7890 */
  if (C.zf) goto L_100e7890;
  /* 100e7879 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100e787c jne 0x100e7890 */
  if (!C.zf) goto L_100e7890;
  /* 100e787e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100e7881 push eax */
  push32((uint32_t)(EAX));
  /* 100e7882 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e7885 push esi */
  push32((uint32_t)(ESI));
  /* 100e7886 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 100e7888 call 0x100e7972 */
  push32(0x100e788du); f_100e7972();
  /* 100e788d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e7890:;
  /* 100e7890 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7894 je 0x100e78d7 */
  if (C.zf) goto L_100e78d7;
  /* 100e7896 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e789a jle 0x100e78d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100e78d7;
  /* 100e789c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100e789f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 100e78a2 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_100e78a5:;
  /* 100e78a5 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 100e78a8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100e78a9 push eax */
  push32((uint32_t)(EAX));
  /* 100e78aa lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100e78ad push eax */
  push32((uint32_t)(EAX));
  /* 100e78ae inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100e78af call 0x100e90bb */
  push32(0x100e78b4u); f_100e90bb();
  /* 100e78b4 pop ecx */
  ECX = (pop32());
  /* 100e78b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e78b7 pop ecx */
  ECX = (pop32());
  /* 100e78b8 jle 0x100e78ec */
  if ((C.zf||C.sf!=C.of)) goto L_100e78ec;
  /* 100e78ba lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 100e78bd push ecx */
  push32((uint32_t)(ECX));
  /* 100e78be push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e78c1 push eax */
  push32((uint32_t)(EAX));
  /* 100e78c2 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100e78c5 push eax */
  push32((uint32_t)(EAX));
  /* 100e78c6 call 0x100e79a3 */
  push32(0x100e78cbu); f_100e79a3();
  /* 100e78cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e78ce mov eax, edi */
  EAX = (EDI);
  /* 100e78d0 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100e78d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e78d3 jne 0x100e78a5 */
  if (!C.zf) goto L_100e78a5;
  /* 100e78d5 jmp 0x100e78ec */
  goto L_100e78ec;
L_100e78d7:;
  /* 100e78d7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100e78da push eax */
  push32((uint32_t)(EAX));
  /* 100e78db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e78de push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 100e78e1 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 100e78e4 call 0x100e79a3 */
  push32(0x100e78e9u); f_100e79a3();
  /* 100e78e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e78ec:;
  /* 100e78ec test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 100e78f0 je 0x100e7904 */
  if (C.zf) goto L_100e7904;
  /* 100e78f2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100e78f5 push eax */
  push32((uint32_t)(EAX));
  /* 100e78f6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e78f9 push esi */
  push32((uint32_t)(ESI));
  /* 100e78fa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100e78fc call 0x100e7972 */
  push32(0x100e7901u); f_100e7972();
  /* 100e7901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e7904:;
  /* 100e7904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100e7907 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100e7909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100e790a test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100e790c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 100e790f jne 0x100e7228 */
  if (!C.zf) goto L_100e7228;
L_100e7915:;
  /* 100e7915 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 100e7918 pop edi */
  EDI = (pop32());
  /* 100e7919 pop esi */
  ESI = (pop32());
  /* 100e791a pop ebx */
  EBX = (pop32());
  /* 100e791b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e791c ret  */
  ESPCHK(0x100e71fcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000793d @ 0x100e793d (53 bytes, 25 insns) */
void f_100e793d(void) {
  FTRACE(0x100e793du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e793d push ebp */
  push32((uint32_t)(EBP));
  /* 100e793e mov ebp, esp */
  EBP = (ESP);
  /* 100e7940 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e7943 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 100e7946 js 0x100e7956 */
  if (C.sf) goto L_100e7956;
  /* 100e7948 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 100e794a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 100e794d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 100e794f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100e7951 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 100e7954 jmp 0x100e7961 */
  goto L_100e7961;
L_100e7956:;
  /* 100e7956 push ecx */
  push32((uint32_t)(ECX));
  /* 100e7957 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e795a call 0x100e70e4 */
  push32(0x100e795fu); f_100e70e4();
  /* 100e795f pop ecx */
  ECX = (pop32());
  /* 100e7960 pop ecx */
  ECX = (pop32());
L_100e7961:;
  /* 100e7961 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7964 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100e7967 jne 0x100e796e */
  if (!C.zf) goto L_100e796e;
  /* 100e7969 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100e796c pop ebp */
  EBP = (pop32());
  /* 100e796d ret  */
  ESPCHK(0x100e793du, _esp0);
  ESP += 4; return;
L_100e796e:;
  /* 100e796e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 100e7970 pop ebp */
  EBP = (pop32());
  /* 100e7971 ret  */
  ESPCHK(0x100e793du, _esp0);
  ESP += 4; return;
}

/* FUN_10007972 @ 0x100e7972 (49 bytes, 22 insns) */
void f_100e7972(void) {
  FTRACE(0x100e7972u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7972 push esi */
  push32((uint32_t)(ESI));
  /* 100e7973 push edi */
  push32((uint32_t)(EDI));
  /* 100e7974 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100e7978 mov eax, edi */
  EAX = (EDI);
  /* 100e797a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100e797b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e797d jle 0x100e79a0 */
  if ((C.zf||C.sf!=C.of)) goto L_100e79a0;
  /* 100e797f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_100e7983:;
  /* 100e7983 push esi */
  push32((uint32_t)(ESI));
  /* 100e7984 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100e7988 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 100e798c call 0x100e793d */
  push32(0x100e7991u); f_100e793d();
  /* 100e7991 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7994 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7997 je 0x100e79a0 */
  if (C.zf) goto L_100e79a0;
  /* 100e7999 mov eax, edi */
  EAX = (EDI);
  /* 100e799b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100e799c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e799e jg 0x100e7983 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e7983;
L_100e79a0:;
  /* 100e79a0 pop edi */
  EDI = (pop32());
  /* 100e79a1 pop esi */
  ESI = (pop32());
  /* 100e79a2 ret  */
  ESPCHK(0x100e7972u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a3 @ 0x100e79a3 (56 bytes, 27 insns) */
void f_100e79a3(void) {
  FTRACE(0x100e79a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e79a3 push ebx */
  push32((uint32_t)(EBX));
  /* 100e79a4 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 100e79a8 mov eax, ebx */
  EAX = (EBX);
  /* 100e79aa dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100e79ab push esi */
  push32((uint32_t)(ESI));
  /* 100e79ac push edi */
  push32((uint32_t)(EDI));
  /* 100e79ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e79af jle 0x100e79d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100e79d7;
  /* 100e79b1 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 100e79b5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_100e79b9:;
  /* 100e79b9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100e79bc push edi */
  push32((uint32_t)(EDI));
  /* 100e79bd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100e79be push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 100e79c2 push eax */
  push32((uint32_t)(EAX));
  /* 100e79c3 call 0x100e793d */
  push32(0x100e79c8u); f_100e793d();
  /* 100e79c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e79cb cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e79ce je 0x100e79d7 */
  if (C.zf) goto L_100e79d7;
  /* 100e79d0 mov eax, ebx */
  EAX = (EBX);
  /* 100e79d2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100e79d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e79d5 jg 0x100e79b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e79b9;
L_100e79d7:;
  /* 100e79d7 pop edi */
  EDI = (pop32());
  /* 100e79d8 pop esi */
  ESI = (pop32());
  /* 100e79d9 pop ebx */
  EBX = (pop32());
  /* 100e79da ret  */
  ESPCHK(0x100e79a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100079db @ 0x100e79db (13 bytes, 5 insns) */
void f_100e79db(void) {
  FTRACE(0x100e79dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e79db mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e79df add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100e79e2 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100e79e4 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 100e79e7 ret  */
  ESPCHK(0x100e79dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100079e8 @ 0x100e79e8 (16 bytes, 6 insns) */
void f_100e79e8(void) {
  FTRACE(0x100e79e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e79e8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e79ec add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100e79ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100e79f1 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 100e79f4 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 100e79f7 ret  */
  ESPCHK(0x100e79e8u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f8 @ 0x100e79f8 (14 bytes, 5 insns) */
void f_100e79f8(void) {
  FTRACE(0x100e79f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e79f8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e79fc add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100e79ff mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100e7a01 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 100e7a05 ret  */
  ESPCHK(0x100e79f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a06 @ 0x100e7a06 (18 bytes, 6 insns) */
void f_100e7a06(void) {
  FTRACE(0x100e7a06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7a06 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 100e7a0b push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 100e7a10 call 0x100e929a */
  push32(0x100e7a15u); f_100e929a();
  /* 100e7a15 pop ecx */
  ECX = (pop32());
  /* 100e7a16 pop ecx */
  ECX = (pop32());
  /* 100e7a17 ret  */
  ESPCHK(0x100e7a06u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a18 @ 0x100e7a18 (62 bytes, 24 insns) */
void f_100e7a18(void) {
  FTRACE(0x100e7a18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7a18 push ebp */
  push32((uint32_t)(EBP));
  /* 100e7a19 mov ebp, esp */
  EBP = (ESP);
  /* 100e7a1b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7a1e fld qword ptr [0x100ee170] */
  fpu_push(rf64((uint32_t)(0x100ee170)));
  /* 100e7a24 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 100e7a27 fld qword ptr [0x100ee168] */
  fpu_push(rf64((uint32_t)(0x100ee168)));
  /* 100e7a2d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 100e7a30 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 100e7a33 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 100e7a36 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 100e7a39 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 100e7a3c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 100e7a3f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 100e7a42 fcomp qword ptr [0x100ee160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x100ee160)));
  (void)fpu_pop();
  /* 100e7a48 fnstsw ax */
  AX = fpu_status();
  /* 100e7a4a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 100e7a4b jbe 0x100e7a52 */
  if ((C.cf||C.zf)) goto L_100e7a52;
  /* 100e7a4d push 1 */
  push32((uint32_t)(0x1u));
  /* 100e7a4f pop eax */
  EAX = (pop32());
  /* 100e7a50 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e7a51 ret  */
  ESPCHK(0x100e7a18u, _esp0);
  ESP += 4; return;
L_100e7a52:;
  /* 100e7a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e7a54 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e7a55 ret  */
  ESPCHK(0x100e7a18u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a56 @ 0x100e7a56 (41 bytes, 13 insns) */
void f_100e7a56(void) {
  FTRACE(0x100e7a56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7a56 push 0x100ee194 */
  push32((uint32_t)(0x100ee194u));
  /* 100e7a5b call dword ptr [0x100ee004] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee004))), 0x100e7a61u);
  /* 100e7a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e7a63 je 0x100e7a7a */
  if (C.zf) goto L_100e7a7a;
  /* 100e7a65 push 0x100ee178 */
  push32((uint32_t)(0x100ee178u));
  /* 100e7a6a push eax */
  push32((uint32_t)(EAX));
  /* 100e7a6b call dword ptr [0x100ee088] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee088))), 0x100e7a71u);
  /* 100e7a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e7a73 je 0x100e7a7a */
  if (C.zf) goto L_100e7a7a;
  /* 100e7a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e7a77 call eax */
  call_ind((uint32_t)(EAX), 0x100e7a79u);
  /* 100e7a79 ret  */
  ESPCHK(0x100e7a56u, _esp0);
  ESP += 4; return;
L_100e7a7a:;
  /* 100e7a7a jmp 0x100e7a18 */
  f_100e7a18(); return;
}

/* FUN_10007a7f @ 0x100e7a7f (90 bytes, 37 insns) */
void f_100e7a7f(void) {
  FTRACE(0x100e7a7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7a7f push esi */
  push32((uint32_t)(ESI));
  /* 100e7a80 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100e7a84 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100e7a87 push eax */
  push32((uint32_t)(EAX));
  /* 100e7a88 call 0x100e9440 */
  push32(0x100e7a8du); f_100e9440();
  /* 100e7a8d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7a90 pop ecx */
  ECX = (pop32());
  /* 100e7a91 je 0x100e7abf */
  if (C.zf) goto L_100e7abf;
L_100e7a93:;
  /* 100e7a93 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100e7a94 cmp dword ptr [0x100f0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100f0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7a9b jle 0x100e7aac */
  if ((C.zf||C.sf!=C.of)) goto L_100e7aac;
  /* 100e7a9d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100e7aa0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100e7aa2 push eax */
  push32((uint32_t)(EAX));
  /* 100e7aa3 call 0x100e93cb */
  push32(0x100e7aa8u); f_100e93cb();
  /* 100e7aa8 pop ecx */
  ECX = (pop32());
  /* 100e7aa9 pop ecx */
  ECX = (pop32());
  /* 100e7aaa jmp 0x100e7abb */
  goto L_100e7abb;
L_100e7aac:;
  /* 100e7aac movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100e7aaf mov ecx, dword ptr [0x100f09d0] */
  ECX = (r32((uint32_t)(0x100f09d0)));
  /* 100e7ab5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100e7ab8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_100e7abb:;
  /* 100e7abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e7abd jne 0x100e7a93 */
  if (!C.zf) goto L_100e7a93;
L_100e7abf:;
  /* 100e7abf mov cl, byte ptr [0x100f0be4] */
  CL = (r8((uint32_t)(0x100f0be4)));
  /* 100e7ac5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100e7ac7 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 100e7ac9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100e7aca:;
  /* 100e7aca mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 100e7acc mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 100e7ace mov al, cl */
  AL = (CL);
  /* 100e7ad0 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 100e7ad2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100e7ad3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 100e7ad5 jne 0x100e7aca */
  if (!C.zf) goto L_100e7aca;
  /* 100e7ad7 pop esi */
  ESI = (pop32());
  /* 100e7ad8 ret  */
  ESPCHK(0x100e7a7fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x100e7b3f (62 bytes, 29 insns) */
void f_100e7b3f(void) {
  FTRACE(0x100e7b3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7b3f push ebp */
  push32((uint32_t)(EBP));
  /* 100e7b40 mov ebp, esp */
  EBP = (ESP);
  /* 100e7b42 push ecx */
  push32((uint32_t)(ECX));
  /* 100e7b43 push ecx */
  push32((uint32_t)(ECX));
  /* 100e7b44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7b48 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100e7b4b je 0x100e7b68 */
  if (C.zf) goto L_100e7b68;
  /* 100e7b4d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 100e7b50 push eax */
  push32((uint32_t)(EAX));
  /* 100e7b51 call 0x100e990c */
  push32(0x100e7b56u); f_100e990c();
  /* 100e7b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e7b59 pop ecx */
  ECX = (pop32());
  /* 100e7b5a pop ecx */
  ECX = (pop32());
  /* 100e7b5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 100e7b5e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100e7b60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100e7b63 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100e7b66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e7b67 ret  */
  ESPCHK(0x100e7b3fu, _esp0);
  ESP += 4; return;
L_100e7b68:;
  /* 100e7b68 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100e7b6b push eax */
  push32((uint32_t)(EAX));
  /* 100e7b6c call 0x100e9939 */
  push32(0x100e7b71u); f_100e9939();
  /* 100e7b71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e7b74 pop ecx */
  ECX = (pop32());
  /* 100e7b75 pop ecx */
  ECX = (pop32());
  /* 100e7b76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100e7b79 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100e7b7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e7b7c ret  */
  ESPCHK(0x100e7b3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b7d @ 0x100e7b7d (97 bytes, 42 insns) */
void f_100e7b7d(void) {
  FTRACE(0x100e7b7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7b7d push ebp */
  push32((uint32_t)(EBP));
  /* 100e7b7e mov ebp, esp */
  EBP = (ESP);
  /* 100e7b80 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7b83 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100e7b86 push esi */
  push32((uint32_t)(ESI));
  /* 100e7b87 push eax */
  push32((uint32_t)(EAX));
  /* 100e7b88 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100e7b8b push eax */
  push32((uint32_t)(EAX));
  /* 100e7b8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e7b8f push ecx */
  push32((uint32_t)(ECX));
  /* 100e7b90 push ecx */
  push32((uint32_t)(ECX));
  /* 100e7b91 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 100e7b93 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 100e7b96 call 0x100e99dd */
  push32(0x100e7b9bu); f_100e99dd();
  /* 100e7b9b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100e7b9e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100e7ba1 push eax */
  push32((uint32_t)(EAX));
  /* 100e7ba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e7ba5 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 100e7ba8 push eax */
  push32((uint32_t)(EAX));
  /* 100e7ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e7bab cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7baf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100e7bb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100e7bb4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e7bb6 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 100e7bb9 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7bbb add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7bbd push ecx */
  push32((uint32_t)(ECX));
  /* 100e7bbe call 0x100e9966 */
  push32(0x100e7bc3u); f_100e9966();
  /* 100e7bc3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100e7bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e7bc8 push eax */
  push32((uint32_t)(EAX));
  /* 100e7bc9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100e7bcc push esi */
  push32((uint32_t)(ESI));
  /* 100e7bcd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e7bd0 call 0x100e7bde */
  push32(0x100e7bd5u); f_100e7bde();
  /* 100e7bd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e7bd8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7bdb pop esi */
  ESI = (pop32());
  /* 100e7bdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e7bdd ret  */
  ESPCHK(0x100e7b7du, _esp0);
  ESP += 4; return;
}

/* FUN_10007bde @ 0x100e7bde (194 bytes, 91 insns) */
void f_100e7bde(void) {
  FTRACE(0x100e7bdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7bde push ebp */
  push32((uint32_t)(EBP));
  /* 100e7bdf mov ebp, esp */
  EBP = (ESP);
  /* 100e7be1 push ebx */
  push32((uint32_t)(EBX));
  /* 100e7be2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100e7be4 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e7be7 push esi */
  push32((uint32_t)(ESI));
  /* 100e7be8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 100e7beb push edi */
  push32((uint32_t)(EDI));
  /* 100e7bec mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100e7bef je 0x100e7c0c */
  if (C.zf) goto L_100e7c0c;
  /* 100e7bf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e7bf3 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7bf6 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 100e7bf9 push eax */
  push32((uint32_t)(EAX));
  /* 100e7bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e7bfc cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7bff sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100e7c02 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7c04 push eax */
  push32((uint32_t)(EAX));
  /* 100e7c05 call 0x100e7e80 */
  push32(0x100e7c0au); f_100e7e80();
  /* 100e7c0a pop ecx */
  ECX = (pop32());
  /* 100e7c0b pop ecx */
  ECX = (pop32());
L_100e7c0c:;
  /* 100e7c0c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7c0f mov eax, edi */
  EAX = (EDI);
  /* 100e7c11 jne 0x100e7c19 */
  if (!C.zf) goto L_100e7c19;
  /* 100e7c13 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 100e7c16 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_100e7c19:;
  /* 100e7c19 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7c1c jle 0x100e7c30 */
  if ((C.zf||C.sf!=C.of)) goto L_100e7c30;
  /* 100e7c1e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 100e7c21 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100e7c24 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 100e7c26 mov eax, ecx */
  EAX = (ECX);
  /* 100e7c28 mov cl, byte ptr [0x100f0be4] */
  CL = (r8((uint32_t)(0x100f0be4)));
  /* 100e7c2e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_100e7c30:;
  /* 100e7c30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100e7c32 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e7c35 push 0x100ee1a8 */
  push32((uint32_t)(0x100ee1a8u));
  /* 100e7c3a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 100e7c3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7c3f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7c42 push ecx */
  push32((uint32_t)(ECX));
  /* 100e7c43 call 0x100e9af0 */
  push32(0x100e7c48u); f_100e9af0();
  /* 100e7c48 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7c4b pop ecx */
  ECX = (pop32());
  /* 100e7c4c pop ecx */
  ECX = (pop32());
  /* 100e7c4d mov ecx, eax */
  ECX = (EAX);
  /* 100e7c4f je 0x100e7c54 */
  if (C.zf) goto L_100e7c54;
  /* 100e7c51 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_100e7c54:;
  /* 100e7c54 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100e7c57 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100e7c58 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e7c5b je 0x100e7c99 */
  if (C.zf) goto L_100e7c99;
  /* 100e7c5d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 100e7c60 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100e7c61 jns 0x100e7c68 */
  if (!C.sf) goto L_100e7c68;
  /* 100e7c63 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 100e7c65 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_100e7c68:;
  /* 100e7c68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100e7c69 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7c6c jl 0x100e7c7f */
  if ((C.sf!=C.of)) goto L_100e7c7f;
  /* 100e7c6e mov eax, ebx */
  EAX = (EBX);
  /* 100e7c70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100e7c72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e7c73 pop esi */
  ESI = (pop32());
  /* 100e7c74 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e7c76 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 100e7c78 mov eax, ebx */
  EAX = (EBX);
  /* 100e7c7a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e7c7b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e7c7d mov ebx, edx */
  EBX = (EDX);
L_100e7c7f:;
  /* 100e7c7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100e7c80 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7c83 jl 0x100e7c96 */
  if ((C.sf!=C.of)) goto L_100e7c96;
  /* 100e7c85 mov eax, ebx */
  EAX = (EBX);
  /* 100e7c87 push 0xa */
  push32((uint32_t)(0xau));
  /* 100e7c89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e7c8a pop esi */
  ESI = (pop32());
  /* 100e7c8b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e7c8d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 100e7c8f mov eax, ebx */
  EAX = (EBX);
  /* 100e7c91 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e7c92 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e7c94 mov ebx, edx */
  EBX = (EDX);
L_100e7c96:;
  /* 100e7c96 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_100e7c99:;
  /* 100e7c99 mov eax, edi */
  EAX = (EDI);
  /* 100e7c9b pop edi */
  EDI = (pop32());
  /* 100e7c9c pop esi */
  ESI = (pop32());
  /* 100e7c9d pop ebx */
  EBX = (pop32());
  /* 100e7c9e pop ebp */
  EBP = (pop32());
  /* 100e7c9f ret  */
  ESPCHK(0x100e7bdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ca0 @ 0x100e7ca0 (85 bytes, 37 insns) */
void f_100e7ca0(void) {
  FTRACE(0x100e7ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 100e7ca1 mov ebp, esp */
  EBP = (ESP);
  /* 100e7ca3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7ca6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100e7ca9 push esi */
  push32((uint32_t)(ESI));
  /* 100e7caa push eax */
  push32((uint32_t)(EAX));
  /* 100e7cab lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100e7cae push eax */
  push32((uint32_t)(EAX));
  /* 100e7caf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e7cb2 push ecx */
  push32((uint32_t)(ECX));
  /* 100e7cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 100e7cb4 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 100e7cb6 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 100e7cb9 call 0x100e99dd */
  push32(0x100e7cbeu); f_100e99dd();
  /* 100e7cbe mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100e7cc1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100e7cc4 push eax */
  push32((uint32_t)(EAX));
  /* 100e7cc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100e7cc8 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7cca push eax */
  push32((uint32_t)(EAX));
  /* 100e7ccb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e7ccd cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7cd1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100e7cd4 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7cd7 push eax */
  push32((uint32_t)(EAX));
  /* 100e7cd8 call 0x100e9966 */
  push32(0x100e7cddu); f_100e9966();
  /* 100e7cdd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100e7ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e7ce2 push eax */
  push32((uint32_t)(EAX));
  /* 100e7ce3 push esi */
  push32((uint32_t)(ESI));
  /* 100e7ce4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e7ce7 call 0x100e7cf5 */
  push32(0x100e7cecu); f_100e7cf5();
  /* 100e7cec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e7cef add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7cf2 pop esi */
  ESI = (pop32());
  /* 100e7cf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e7cf4 ret  */
  ESPCHK(0x100e7ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf5 @ 0x100e7cf5 (167 bytes, 73 insns) */
void f_100e7cf5(void) {
  FTRACE(0x100e7cf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7cf5 push ebp */
  push32((uint32_t)(EBP));
  /* 100e7cf6 mov ebp, esp */
  EBP = (ESP);
  /* 100e7cf8 push ebx */
  push32((uint32_t)(EBX));
  /* 100e7cf9 push esi */
  push32((uint32_t)(ESI));
  /* 100e7cfa mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100e7cfd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e7d00 push edi */
  push32((uint32_t)(EDI));
  /* 100e7d01 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100e7d04 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e7d05 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e7d09 je 0x100e7d25 */
  if (C.zf) goto L_100e7d25;
  /* 100e7d0b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7d0e jne 0x100e7d25 */
  if (!C.zf) goto L_100e7d25;
  /* 100e7d10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100e7d12 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7d15 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 100e7d18 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7d1a add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7d1c mov eax, ecx */
  EAX = (ECX);
  /* 100e7d1e mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 100e7d21 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_100e7d25:;
  /* 100e7d25 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7d28 mov edi, ebx */
  EDI = (EBX);
  /* 100e7d2a jne 0x100e7d32 */
  if (!C.zf) goto L_100e7d32;
  /* 100e7d2c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 100e7d2f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_100e7d32:;
  /* 100e7d32 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100e7d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e7d37 jg 0x100e7d49 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e7d49;
  /* 100e7d39 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e7d3b push edi */
  push32((uint32_t)(EDI));
  /* 100e7d3c call 0x100e7e80 */
  push32(0x100e7d41u); f_100e7e80();
  /* 100e7d41 pop ecx */
  ECX = (pop32());
  /* 100e7d42 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 100e7d45 pop ecx */
  ECX = (pop32());
  /* 100e7d46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100e7d47 jmp 0x100e7d4b */
  goto L_100e7d4b;
L_100e7d49:;
  /* 100e7d49 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100e7d4b:;
  /* 100e7d4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7d4f jle 0x100e7d95 */
  if ((C.zf||C.sf!=C.of)) goto L_100e7d95;
  /* 100e7d51 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e7d53 push edi */
  push32((uint32_t)(EDI));
  /* 100e7d54 call 0x100e7e80 */
  push32(0x100e7d59u); f_100e7e80();
  /* 100e7d59 mov al, byte ptr [0x100f0be4] */
  AL = (r8((uint32_t)(0x100f0be4)));
  /* 100e7d5e pop ecx */
  ECX = (pop32());
  /* 100e7d5f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100e7d61 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 100e7d64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100e7d65 pop ecx */
  ECX = (pop32());
  /* 100e7d66 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e7d68 jge 0x100e7d95 */
  if ((C.sf==C.of)) goto L_100e7d95;
  /* 100e7d6a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e7d6e je 0x100e7d74 */
  if (C.zf) goto L_100e7d74;
  /* 100e7d70 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 100e7d72 jmp 0x100e7d7b */
  goto L_100e7d7b;
L_100e7d74:;
  /* 100e7d74 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 100e7d76 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7d79 jl 0x100e7d7e */
  if ((C.sf!=C.of)) goto L_100e7d7e;
L_100e7d7b:;
  /* 100e7d7b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_100e7d7e:;
  /* 100e7d7e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e7d81 push edi */
  push32((uint32_t)(EDI));
  /* 100e7d82 call 0x100e7e80 */
  push32(0x100e7d87u); f_100e7e80();
  /* 100e7d87 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e7d8a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 100e7d8c push edi */
  push32((uint32_t)(EDI));
  /* 100e7d8d call 0x100e9be0 */
  push32(0x100e7d92u); f_100e9be0();
  /* 100e7d92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e7d95:;
  /* 100e7d95 pop edi */
  EDI = (pop32());
  /* 100e7d96 mov eax, ebx */
  EAX = (EBX);
  /* 100e7d98 pop esi */
  ESI = (pop32());
  /* 100e7d99 pop ebx */
  EBX = (pop32());
  /* 100e7d9a pop ebp */
  EBP = (pop32());
  /* 100e7d9b ret  */
  ESPCHK(0x100e7cf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d9c @ 0x100e7d9c (147 bytes, 66 insns) */
void f_100e7d9c(void) {
  FTRACE(0x100e7d9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7d9c push ebp */
  push32((uint32_t)(EBP));
  /* 100e7d9d mov ebp, esp */
  EBP = (ESP);
  /* 100e7d9f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7da2 push ebx */
  push32((uint32_t)(EBX));
  /* 100e7da3 push esi */
  push32((uint32_t)(ESI));
  /* 100e7da4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100e7da7 push edi */
  push32((uint32_t)(EDI));
  /* 100e7da8 push eax */
  push32((uint32_t)(EAX));
  /* 100e7da9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100e7dac push eax */
  push32((uint32_t)(EAX));
  /* 100e7dad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e7db0 push ecx */
  push32((uint32_t)(ECX));
  /* 100e7db1 push ecx */
  push32((uint32_t)(ECX));
  /* 100e7db2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 100e7db4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 100e7db7 call 0x100e99dd */
  push32(0x100e7dbcu); f_100e99dd();
  /* 100e7dbc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100e7dbf mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 100e7dc2 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 100e7dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e7dc7 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7dcb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100e7dce add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7dd1 mov edi, eax */
  EDI = (EAX);
  /* 100e7dd3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100e7dd6 push eax */
  push32((uint32_t)(EAX));
  /* 100e7dd7 push ebx */
  push32((uint32_t)(EBX));
  /* 100e7dd8 push edi */
  push32((uint32_t)(EDI));
  /* 100e7dd9 call 0x100e9966 */
  push32(0x100e7ddeu); f_100e9966();
  /* 100e7dde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100e7de1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7de4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e7de5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7de7 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 100e7dea cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7ded jl 0x100e7e15 */
  if ((C.sf!=C.of)) goto L_100e7e15;
  /* 100e7def cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7df1 jge 0x100e7e15 */
  if ((C.sf==C.of)) goto L_100e7e15;
  /* 100e7df3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 100e7df5 je 0x100e7e01 */
  if (C.zf) goto L_100e7e01;
L_100e7df7:;
  /* 100e7df7 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 100e7df9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100e7dfa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e7dfc jne 0x100e7df7 */
  if (!C.zf) goto L_100e7df7;
  /* 100e7dfe and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_100e7e01:;
  /* 100e7e01 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100e7e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e7e06 push eax */
  push32((uint32_t)(EAX));
  /* 100e7e07 push ebx */
  push32((uint32_t)(EBX));
  /* 100e7e08 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e7e0b call 0x100e7cf5 */
  push32(0x100e7e10u); f_100e7cf5();
  /* 100e7e10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7e13 jmp 0x100e7e2a */
  goto L_100e7e2a;
L_100e7e15:;
  /* 100e7e15 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100e7e18 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e7e1a push eax */
  push32((uint32_t)(EAX));
  /* 100e7e1b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100e7e1e push ebx */
  push32((uint32_t)(EBX));
  /* 100e7e1f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e7e22 call 0x100e7bde */
  push32(0x100e7e27u); f_100e7bde();
  /* 100e7e27 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e7e2a:;
  /* 100e7e2a pop edi */
  EDI = (pop32());
  /* 100e7e2b pop esi */
  ESI = (pop32());
  /* 100e7e2c pop ebx */
  EBX = (pop32());
  /* 100e7e2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e7e2e ret  */
  ESPCHK(0x100e7d9cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x100e7e2f (81 bytes, 29 insns) */
void f_100e7e2f(void) {
  FTRACE(0x100e7e2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7e2f push ebp */
  push32((uint32_t)(EBP));
  /* 100e7e30 mov ebp, esp */
  EBP = (ESP);
  /* 100e7e32 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7e36 je 0x100e7e6a */
  if (C.zf) goto L_100e7e6a;
  /* 100e7e38 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7e3c je 0x100e7e6a */
  if (C.zf) goto L_100e7e6a;
  /* 100e7e3e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7e42 jne 0x100e7e57 */
  if (!C.zf) goto L_100e7e57;
  /* 100e7e44 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100e7e47 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e7e4a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e7e4d call 0x100e7ca0 */
  push32(0x100e7e52u); f_100e7ca0();
  /* 100e7e52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7e55 pop ebp */
  EBP = (pop32());
  /* 100e7e56 ret  */
  ESPCHK(0x100e7e2fu, _esp0);
  ESP += 4; return;
L_100e7e57:;
  /* 100e7e57 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100e7e5a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100e7e5d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e7e60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e7e63 call 0x100e7d9c */
  push32(0x100e7e68u); f_100e7d9c();
  /* 100e7e68 jmp 0x100e7e7b */
  goto L_100e7e7b;
L_100e7e6a:;
  /* 100e7e6a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100e7e6d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100e7e70 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e7e73 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e7e76 call 0x100e7b7d */
  push32(0x100e7e7bu); f_100e7b7d();
L_100e7e7b:;
  /* 100e7e7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7e7e pop ebp */
  EBP = (pop32());
  /* 100e7e7f ret  */
  ESPCHK(0x100e7e2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x100e7e80 (37 bytes, 18 insns) */
void f_100e7e80(void) {
  FTRACE(0x100e7e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7e80 push edi */
  push32((uint32_t)(EDI));
  /* 100e7e81 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 100e7e85 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100e7e87 je 0x100e7ea3 */
  if (C.zf) goto L_100e7ea3;
  /* 100e7e89 push esi */
  push32((uint32_t)(ESI));
  /* 100e7e8a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 100e7e8e push esi */
  push32((uint32_t)(ESI));
  /* 100e7e8f call 0x100e9040 */
  push32(0x100e7e94u); f_100e9040();
  /* 100e7e94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e7e95 push eax */
  push32((uint32_t)(EAX));
  /* 100e7e96 push esi */
  push32((uint32_t)(ESI));
  /* 100e7e97 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7e99 push esi */
  push32((uint32_t)(ESI));
  /* 100e7e9a call 0x100e9c40 */
  push32(0x100e7e9fu); f_100e9c40();
  /* 100e7e9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7ea2 pop esi */
  ESI = (pop32());
L_100e7ea3:;
  /* 100e7ea3 pop edi */
  EDI = (pop32());
  /* 100e7ea4 ret  */
  ESPCHK(0x100e7e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea5 @ 0x100e7ea5 (45 bytes, 12 insns) */
void f_100e7ea5(void) {
  FTRACE(0x100e7ea5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7ea5 mov eax, dword ptr [0x100f0660] */
  EAX = (r32((uint32_t)(0x100f0660)));
  /* 100e7eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e7eac je 0x100e7eb0 */
  if (C.zf) goto L_100e7eb0;
  /* 100e7eae call eax */
  call_ind((uint32_t)(EAX), 0x100e7eb0u);
L_100e7eb0:;
  /* 100e7eb0 push 0x100ef014 */
  push32((uint32_t)(0x100ef014u));
  /* 100e7eb5 push 0x100ef008 */
  push32((uint32_t)(0x100ef008u));
  /* 100e7eba call 0x100e7fa9 */
  push32(0x100e7ebfu); f_100e7fa9();
  /* 100e7ebf push 0x100ef004 */
  push32((uint32_t)(0x100ef004u));
  /* 100e7ec4 push 0x100ef000 */
  push32((uint32_t)(0x100ef000u));
  /* 100e7ec9 call 0x100e7fa9 */
  push32(0x100e7eceu); f_100e7fa9();
  /* 100e7ece add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7ed1 ret  */
  ESPCHK(0x100e7ea5u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x100e7ed2 (17 bytes, 6 insns) */
void f_100e7ed2(void) {
  FTRACE(0x100e7ed2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e7ed4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e7ed6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100e7eda call 0x100e7ef2 */
  push32(0x100e7edfu); f_100e7ef2();
  /* 100e7edf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7ee2 ret  */
  ESPCHK(0x100e7ed2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee3 @ 0x100e7ee3 (15 bytes, 6 insns) */
void f_100e7ee3(void) {
  FTRACE(0x100e7ee3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e7ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e7ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e7ee9 call 0x100e7ef2 */
  push32(0x100e7eeeu); f_100e7ef2();
  /* 100e7eee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7ef1 ret  */
  ESPCHK(0x100e7ee3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef2 @ 0x100e7ef2 (163 bytes, 53 insns) */
void f_100e7ef2(void) {
  FTRACE(0x100e7ef2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7ef2 push edi */
  push32((uint32_t)(EDI));
  /* 100e7ef3 call 0x100e7f97 */
  push32(0x100e7ef8u); f_100e7f97();
  /* 100e7ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e7efa pop edi */
  EDI = (pop32());
  /* 100e7efb cmp dword ptr [0x100f6698], edi */
  { uint32_t _a=(r32((uint32_t)(0x100f6698))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7f01 jne 0x100e7f14 */
  if (!C.zf) goto L_100e7f14;
  /* 100e7f03 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100e7f07 call dword ptr [0x100ee020] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee020))), 0x100e7f0du);
  /* 100e7f0d push eax */
  push32((uint32_t)(EAX));
  /* 100e7f0e call dword ptr [0x100ee01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee01c))), 0x100e7f14u);
L_100e7f14:;
  /* 100e7f14 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7f19 push ebx */
  push32((uint32_t)(EBX));
  /* 100e7f1a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100e7f1e mov dword ptr [0x100f6694], edi */
  w32((uint32_t)(0x100f6694), (EDI));
  /* 100e7f24 mov byte ptr [0x100f6690], bl */
  w8((uint32_t)(0x100f6690), (BL));
  /* 100e7f2a jne 0x100e7f68 */
  if (!C.zf) goto L_100e7f68;
  /* 100e7f2c mov eax, dword ptr [0x100f7d50] */
  EAX = (r32((uint32_t)(0x100f7d50)));
  /* 100e7f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e7f33 je 0x100e7f57 */
  if (C.zf) goto L_100e7f57;
  /* 100e7f35 mov ecx, dword ptr [0x100f7d4c] */
  ECX = (r32((uint32_t)(0x100f7d4c)));
  /* 100e7f3b push esi */
  push32((uint32_t)(ESI));
  /* 100e7f3c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 100e7f3f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7f41 jb 0x100e7f56 */
  if (C.cf) goto L_100e7f56;
L_100e7f43:;
  /* 100e7f43 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100e7f45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e7f47 je 0x100e7f4b */
  if (C.zf) goto L_100e7f4b;
  /* 100e7f49 call eax */
  call_ind((uint32_t)(EAX), 0x100e7f4bu);
L_100e7f4b:;
  /* 100e7f4b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e7f4e cmp esi, dword ptr [0x100f7d50] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100f7d50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7f54 jae 0x100e7f43 */
  if (!C.cf) goto L_100e7f43;
L_100e7f56:;
  /* 100e7f56 pop esi */
  ESI = (pop32());
L_100e7f57:;
  /* 100e7f57 push 0x100ef020 */
  push32((uint32_t)(0x100ef020u));
  /* 100e7f5c push 0x100ef018 */
  push32((uint32_t)(0x100ef018u));
  /* 100e7f61 call 0x100e7fa9 */
  push32(0x100e7f66u); f_100e7fa9();
  /* 100e7f66 pop ecx */
  ECX = (pop32());
  /* 100e7f67 pop ecx */
  ECX = (pop32());
L_100e7f68:;
  /* 100e7f68 push 0x100ef028 */
  push32((uint32_t)(0x100ef028u));
  /* 100e7f6d push 0x100ef024 */
  push32((uint32_t)(0x100ef024u));
  /* 100e7f72 call 0x100e7fa9 */
  push32(0x100e7f77u); f_100e7fa9();
  /* 100e7f77 pop ecx */
  ECX = (pop32());
  /* 100e7f78 pop ecx */
  ECX = (pop32());
  /* 100e7f79 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100e7f7b pop ebx */
  EBX = (pop32());
  /* 100e7f7c je 0x100e7f85 */
  if (C.zf) goto L_100e7f85;
  /* 100e7f7e call 0x100e7fa0 */
  push32(0x100e7f83u); f_100e7fa0();
  /* 100e7f83 pop edi */
  EDI = (pop32());
  /* 100e7f84 ret  */
  ESPCHK(0x100e7ef2u, _esp0);
  ESP += 4; return;
L_100e7f85:;
  /* 100e7f85 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100e7f89 mov dword ptr [0x100f6698], edi */
  w32((uint32_t)(0x100f6698), (EDI));
  /* 100e7f8f call dword ptr [0x100ee018] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee018))), 0x100e7f95u);
  /* 100e7f95 pop edi */
  EDI = (pop32());
  /* 100e7f96 ret  */
  ESPCHK(0x100e7ef2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f97 @ 0x100e7f97 (9 bytes, 4 insns) */
void f_100e7f97(void) {
  FTRACE(0x100e7f97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7f97 push 0xd */
  push32((uint32_t)(0xdu));
  /* 100e7f99 call 0x100ea013 */
  push32(0x100e7f9eu); f_100ea013();
  /* 100e7f9e pop ecx */
  ECX = (pop32());
  /* 100e7f9f ret  */
  ESPCHK(0x100e7f97u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x100e7fa0 (9 bytes, 4 insns) */
void f_100e7fa0(void) {
  FTRACE(0x100e7fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7fa0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 100e7fa2 call 0x100ea074 */
  push32(0x100e7fa7u); f_100ea074();
  /* 100e7fa7 pop ecx */
  ECX = (pop32());
  /* 100e7fa8 ret  */
  ESPCHK(0x100e7fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa9 @ 0x100e7fa9 (26 bytes, 12 insns) */
void f_100e7fa9(void) {
  FTRACE(0x100e7fa9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7fa9 push esi */
  push32((uint32_t)(ESI));
  /* 100e7faa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_100e7fae:;
  /* 100e7fae cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7fb2 jae 0x100e7fc1 */
  if (!C.cf) goto L_100e7fc1;
  /* 100e7fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100e7fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e7fb8 je 0x100e7fbc */
  if (C.zf) goto L_100e7fbc;
  /* 100e7fba call eax */
  call_ind((uint32_t)(EAX), 0x100e7fbcu);
L_100e7fbc:;
  /* 100e7fbc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e7fbf jmp 0x100e7fae */
  goto L_100e7fae;
L_100e7fc1:;
  /* 100e7fc1 pop esi */
  ESI = (pop32());
  /* 100e7fc2 ret  */
  ESPCHK(0x100e7fa9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fc3 @ 0x100e7fc3 (84 bytes, 32 insns) */
void f_100e7fc3(void) {
  FTRACE(0x100e7fc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e7fc3 push esi */
  push32((uint32_t)(ESI));
  /* 100e7fc4 call 0x100e9f7e */
  push32(0x100e7fc9u); f_100e9f7e();
  /* 100e7fc9 call dword ptr [0x100ee02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee02c))), 0x100e7fcfu);
  /* 100e7fcf cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e7fd2 mov dword ptr [0x100f0690], eax */
  w32((uint32_t)(0x100f0690), (EAX));
  /* 100e7fd7 je 0x100e8013 */
  if (C.zf) goto L_100e8013;
  /* 100e7fd9 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 100e7fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 100e7fdd call 0x100ea089 */
  push32(0x100e7fe2u); f_100ea089();
  /* 100e7fe2 mov esi, eax */
  ESI = (EAX);
  /* 100e7fe4 pop ecx */
  ECX = (pop32());
  /* 100e7fe5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e7fe7 pop ecx */
  ECX = (pop32());
  /* 100e7fe8 je 0x100e8013 */
  if (C.zf) goto L_100e8013;
  /* 100e7fea push esi */
  push32((uint32_t)(ESI));
  /* 100e7feb push dword ptr [0x100f0690] */
  push32((uint32_t)(r32((uint32_t)(0x100f0690))));
  /* 100e7ff1 call dword ptr [0x100ee028] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee028))), 0x100e7ff7u);
  /* 100e7ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e7ff9 je 0x100e8013 */
  if (C.zf) goto L_100e8013;
  /* 100e7ffb push esi */
  push32((uint32_t)(ESI));
  /* 100e7ffc call 0x100e8035 */
  push32(0x100e8001u); f_100e8035();
  /* 100e8001 pop ecx */
  ECX = (pop32());
  /* 100e8002 call dword ptr [0x100ee024] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee024))), 0x100e8008u);
  /* 100e8008 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100e800c push 1 */
  push32((uint32_t)(0x1u));
  /* 100e800e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100e8010 pop eax */
  EAX = (pop32());
  /* 100e8011 pop esi */
  ESI = (pop32());
  /* 100e8012 ret  */
  ESPCHK(0x100e7fc3u, _esp0);
  ESP += 4; return;
L_100e8013:;
  /* 100e8013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e8015 pop esi */
  ESI = (pop32());
  /* 100e8016 ret  */
  ESPCHK(0x100e7fc3u, _esp0);
  ESP += 4; return;
}

/* FUN_10008017 @ 0x100e8017 (30 bytes, 8 insns) */
void f_100e8017(void) {
  FTRACE(0x100e8017u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8017 call 0x100e9fa7 */
  push32(0x100e801cu); f_100e9fa7();
  /* 100e801c mov eax, dword ptr [0x100f0690] */
  EAX = (r32((uint32_t)(0x100f0690)));
  /* 100e8021 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8024 je 0x100e8034 */
  if (C.zf) goto L_100e8034;
  /* 100e8026 push eax */
  push32((uint32_t)(EAX));
  /* 100e8027 call dword ptr [0x100ee030] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee030))), 0x100e802du);
  /* 100e802d or dword ptr [0x100f0690], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x100f0690)))|(0xffffffffu); w32((uint32_t)(0x100f0690), (_r)); fl_logic(_r,32); }
L_100e8034:;
  /* 100e8034 ret  */
  ESPCHK(0x100e8017u, _esp0);
  ESP += 4; return;
}

/* FUN_10008035 @ 0x100e8035 (19 bytes, 4 insns) */
void f_100e8035(void) {
  FTRACE(0x100e8035u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8035 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e8039 mov dword ptr [eax + 0x50], 0x100f0ce0 */
  w32((uint32_t)(EAX + 0x50), (0x100f0ce0u));
  /* 100e8040 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 100e8047 ret  */
  ESPCHK(0x100e8035u, _esp0);
  ESP += 4; return;
}

/* FUN_10008048 @ 0x100e8048 (103 bytes, 38 insns) */
void f_100e8048(void) {
  FTRACE(0x100e8048u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8048 push esi */
  push32((uint32_t)(ESI));
  /* 100e8049 push edi */
  push32((uint32_t)(EDI));
  /* 100e804a call dword ptr [0x100ee03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee03c))), 0x100e8050u);
  /* 100e8050 push dword ptr [0x100f0690] */
  push32((uint32_t)(r32((uint32_t)(0x100f0690))));
  /* 100e8056 mov edi, eax */
  EDI = (EAX);
  /* 100e8058 call dword ptr [0x100ee038] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee038))), 0x100e805eu);
  /* 100e805e mov esi, eax */
  ESI = (EAX);
  /* 100e8060 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e8062 jne 0x100e80a3 */
  if (!C.zf) goto L_100e80a3;
  /* 100e8064 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 100e8066 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e8068 call 0x100ea089 */
  push32(0x100e806du); f_100ea089();
  /* 100e806d mov esi, eax */
  ESI = (EAX);
  /* 100e806f pop ecx */
  ECX = (pop32());
  /* 100e8070 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e8072 pop ecx */
  ECX = (pop32());
  /* 100e8073 je 0x100e809b */
  if (C.zf) goto L_100e809b;
  /* 100e8075 push esi */
  push32((uint32_t)(ESI));
  /* 100e8076 push dword ptr [0x100f0690] */
  push32((uint32_t)(r32((uint32_t)(0x100f0690))));
  /* 100e807c call dword ptr [0x100ee028] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee028))), 0x100e8082u);
  /* 100e8082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8084 je 0x100e809b */
  if (C.zf) goto L_100e809b;
  /* 100e8086 push esi */
  push32((uint32_t)(ESI));
  /* 100e8087 call 0x100e8035 */
  push32(0x100e808cu); f_100e8035();
  /* 100e808c pop ecx */
  ECX = (pop32());
  /* 100e808d call dword ptr [0x100ee024] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee024))), 0x100e8093u);
  /* 100e8093 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100e8097 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100e8099 jmp 0x100e80a3 */
  goto L_100e80a3;
L_100e809b:;
  /* 100e809b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100e809d call 0x100e70b1 */
  push32(0x100e80a2u); f_100e70b1();
  /* 100e80a2 pop ecx */
  ECX = (pop32());
L_100e80a3:;
  /* 100e80a3 push edi */
  push32((uint32_t)(EDI));
  /* 100e80a4 call dword ptr [0x100ee034] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee034))), 0x100e80aau);
  /* 100e80aa mov eax, esi */
  EAX = (ESI);
  /* 100e80ac pop edi */
  EDI = (pop32());
  /* 100e80ad pop esi */
  ESI = (pop32());
  /* 100e80ae ret  */
  ESPCHK(0x100e8048u, _esp0);
  ESP += 4; return;
}

/* FUN_100080af @ 0x100e80af (160 bytes, 62 insns) */
void f_100e80af(void) {
  FTRACE(0x100e80afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e80af mov eax, dword ptr [0x100f0690] */
  EAX = (r32((uint32_t)(0x100f0690)));
  /* 100e80b4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e80b7 je 0x100e814e */
  if (C.zf) goto L_100e814e;
  /* 100e80bd push esi */
  push32((uint32_t)(ESI));
  /* 100e80be mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100e80c2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e80c4 jne 0x100e80d3 */
  if (!C.zf) goto L_100e80d3;
  /* 100e80c6 push eax */
  push32((uint32_t)(EAX));
  /* 100e80c7 call dword ptr [0x100ee038] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee038))), 0x100e80cdu);
  /* 100e80cd mov esi, eax */
  ESI = (EAX);
  /* 100e80cf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e80d1 je 0x100e813f */
  if (C.zf) goto L_100e813f;
L_100e80d3:;
  /* 100e80d3 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 100e80d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e80d8 je 0x100e80e1 */
  if (C.zf) goto L_100e80e1;
  /* 100e80da push eax */
  push32((uint32_t)(EAX));
  /* 100e80db call 0x100ea1c6 */
  push32(0x100e80e0u); f_100ea1c6();
  /* 100e80e0 pop ecx */
  ECX = (pop32());
L_100e80e1:;
  /* 100e80e1 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 100e80e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e80e6 je 0x100e80ef */
  if (C.zf) goto L_100e80ef;
  /* 100e80e8 push eax */
  push32((uint32_t)(EAX));
  /* 100e80e9 call 0x100ea1c6 */
  push32(0x100e80eeu); f_100ea1c6();
  /* 100e80ee pop ecx */
  ECX = (pop32());
L_100e80ef:;
  /* 100e80ef mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 100e80f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e80f4 je 0x100e80fd */
  if (C.zf) goto L_100e80fd;
  /* 100e80f6 push eax */
  push32((uint32_t)(EAX));
  /* 100e80f7 call 0x100ea1c6 */
  push32(0x100e80fcu); f_100ea1c6();
  /* 100e80fc pop ecx */
  ECX = (pop32());
L_100e80fd:;
  /* 100e80fd mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 100e8100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8102 je 0x100e810b */
  if (C.zf) goto L_100e810b;
  /* 100e8104 push eax */
  push32((uint32_t)(EAX));
  /* 100e8105 call 0x100ea1c6 */
  push32(0x100e810au); f_100ea1c6();
  /* 100e810a pop ecx */
  ECX = (pop32());
L_100e810b:;
  /* 100e810b mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 100e810e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8110 je 0x100e8119 */
  if (C.zf) goto L_100e8119;
  /* 100e8112 push eax */
  push32((uint32_t)(EAX));
  /* 100e8113 call 0x100ea1c6 */
  push32(0x100e8118u); f_100ea1c6();
  /* 100e8118 pop ecx */
  ECX = (pop32());
L_100e8119:;
  /* 100e8119 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 100e811c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e811e je 0x100e8127 */
  if (C.zf) goto L_100e8127;
  /* 100e8120 push eax */
  push32((uint32_t)(EAX));
  /* 100e8121 call 0x100ea1c6 */
  push32(0x100e8126u); f_100ea1c6();
  /* 100e8126 pop ecx */
  ECX = (pop32());
L_100e8127:;
  /* 100e8127 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 100e812a cmp eax, 0x100f0ce0 */
  { uint32_t _a=(EAX),_b=(0x100f0ce0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e812f je 0x100e8138 */
  if (C.zf) goto L_100e8138;
  /* 100e8131 push eax */
  push32((uint32_t)(EAX));
  /* 100e8132 call 0x100ea1c6 */
  push32(0x100e8137u); f_100ea1c6();
  /* 100e8137 pop ecx */
  ECX = (pop32());
L_100e8138:;
  /* 100e8138 push esi */
  push32((uint32_t)(ESI));
  /* 100e8139 call 0x100ea1c6 */
  push32(0x100e813eu); f_100ea1c6();
  /* 100e813e pop ecx */
  ECX = (pop32());
L_100e813f:;
  /* 100e813f push 0 */
  push32((uint32_t)(0x0u));
  /* 100e8141 push dword ptr [0x100f0690] */
  push32((uint32_t)(r32((uint32_t)(0x100f0690))));
  /* 100e8147 call dword ptr [0x100ee028] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee028))), 0x100e814du);
  /* 100e814d pop esi */
  ESI = (pop32());
L_100e814e:;
  /* 100e814e ret  */
  ESPCHK(0x100e80afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000814f @ 0x100e814f (444 bytes, 150 insns) */
void f_100e814f(void) {
  FTRACE(0x100e814fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e814f push ebp */
  push32((uint32_t)(EBP));
  /* 100e8150 mov ebp, esp */
  EBP = (ESP);
  /* 100e8152 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e8155 push ebx */
  push32((uint32_t)(EBX));
  /* 100e8156 push esi */
  push32((uint32_t)(ESI));
  /* 100e8157 push edi */
  push32((uint32_t)(EDI));
  /* 100e8158 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 100e815d call 0x100ea2af */
  push32(0x100e8162u); f_100ea2af();
  /* 100e8162 mov esi, eax */
  ESI = (EAX);
  /* 100e8164 pop ecx */
  ECX = (pop32());
  /* 100e8165 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e8167 jne 0x100e8171 */
  if (!C.zf) goto L_100e8171;
  /* 100e8169 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100e816b call 0x100e70b1 */
  push32(0x100e8170u); f_100e70b1();
  /* 100e8170 pop ecx */
  ECX = (pop32());
L_100e8171:;
  /* 100e8171 mov dword ptr [0x100f7c40], esi */
  w32((uint32_t)(0x100f7c40), (ESI));
  /* 100e8177 mov dword ptr [0x100f7d40], 0x20 */
  w32((uint32_t)(0x100f7d40), (0x20u));
  /* 100e8181 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_100e8187:;
  /* 100e8187 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8189 jae 0x100e81a9 */
  if (!C.cf) goto L_100e81a9;
  /* 100e818b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100e818f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100e8192 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 100e8196 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 100e819a mov eax, dword ptr [0x100f7c40] */
  EAX = (r32((uint32_t)(0x100f7c40)));
  /* 100e819f add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e81a2 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e81a7 jmp 0x100e8187 */
  goto L_100e8187;
L_100e81a9:;
  /* 100e81a9 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 100e81ac push eax */
  push32((uint32_t)(EAX));
  /* 100e81ad call dword ptr [0x100ee04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee04c))), 0x100e81b3u);
  /* 100e81b3 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100e81b8 je 0x100e828f */
  if (C.zf) goto L_100e828f;
  /* 100e81be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 100e81c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e81c3 je 0x100e828f */
  if (C.zf) goto L_100e828f;
  /* 100e81c9 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 100e81cb lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 100e81ce lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 100e81d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100e81d4 mov eax, 0x800 */
  EAX = (0x800u);
  /* 100e81d9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e81db jl 0x100e81df */
  if ((C.sf!=C.of)) goto L_100e81df;
  /* 100e81dd mov edi, eax */
  EDI = (EAX);
L_100e81df:;
  /* 100e81df cmp dword ptr [0x100f7d40], edi */
  { uint32_t _a=(r32((uint32_t)(0x100f7d40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e81e5 jge 0x100e823d */
  if ((C.sf==C.of)) goto L_100e823d;
  /* 100e81e7 mov esi, 0x100f7c44 */
  ESI = (0x100f7c44u);
L_100e81ec:;
  /* 100e81ec push 0x480 */
  push32((uint32_t)(0x480u));
  /* 100e81f1 call 0x100ea2af */
  push32(0x100e81f6u); f_100ea2af();
  /* 100e81f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e81f8 pop ecx */
  ECX = (pop32());
  /* 100e81f9 je 0x100e8237 */
  if (C.zf) goto L_100e8237;
  /* 100e81fb add dword ptr [0x100f7d40], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x100f7d40))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x100f7d40), (_r)); fl_add(_a,_b,_r,32); }
  /* 100e8202 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100e8204 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_100e820a:;
  /* 100e820a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e820c jae 0x100e822a */
  if (!C.cf) goto L_100e822a;
  /* 100e820e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 100e8212 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100e8215 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 100e8219 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 100e821d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 100e821f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8222 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8228 jmp 0x100e820a */
  goto L_100e820a;
L_100e822a:;
  /* 100e822a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e822d cmp dword ptr [0x100f7d40], edi */
  { uint32_t _a=(r32((uint32_t)(0x100f7d40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8233 jl 0x100e81ec */
  if ((C.sf!=C.of)) goto L_100e81ec;
  /* 100e8235 jmp 0x100e823d */
  goto L_100e823d;
L_100e8237:;
  /* 100e8237 mov edi, dword ptr [0x100f7d40] */
  EDI = (r32((uint32_t)(0x100f7d40)));
L_100e823d:;
  /* 100e823d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100e823f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100e8241 jle 0x100e828f */
  if ((C.zf||C.sf!=C.of)) goto L_100e828f;
L_100e8243:;
  /* 100e8243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100e8246 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100e8248 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e824b je 0x100e8285 */
  if (C.zf) goto L_100e8285;
  /* 100e824d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 100e824f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 100e8251 je 0x100e8285 */
  if (C.zf) goto L_100e8285;
  /* 100e8253 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 100e8255 jne 0x100e8262 */
  if (!C.zf) goto L_100e8262;
  /* 100e8257 push ecx */
  push32((uint32_t)(ECX));
  /* 100e8258 call dword ptr [0x100ee048] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee048))), 0x100e825eu);
  /* 100e825e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8260 je 0x100e8285 */
  if (C.zf) goto L_100e8285;
L_100e8262:;
  /* 100e8262 mov ecx, esi */
  ECX = (ESI);
  /* 100e8264 mov eax, esi */
  EAX = (ESI);
  /* 100e8266 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100e8269 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100e826c mov ecx, dword ptr [ecx*4 + 0x100f7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100f7c40)));
  /* 100e8273 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100e8276 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100e8279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100e827c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 100e827e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100e8280 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 100e8282 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_100e8285:;
  /* 100e8285 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100e8289 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100e828a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100e828b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e828d jl 0x100e8243 */
  if ((C.sf!=C.of)) goto L_100e8243;
L_100e828f:;
  /* 100e828f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100e8291:;
  /* 100e8291 mov ecx, dword ptr [0x100f7c40] */
  ECX = (r32((uint32_t)(0x100f7c40)));
  /* 100e8297 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 100e829a cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e829e lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 100e82a1 jne 0x100e82f0 */
  if (!C.zf) goto L_100e82f0;
  /* 100e82a3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100e82a5 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 100e82a9 jne 0x100e82b0 */
  if (!C.zf) goto L_100e82b0;
  /* 100e82ab push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 100e82ad pop eax */
  EAX = (pop32());
  /* 100e82ae jmp 0x100e82ba */
  goto L_100e82ba;
L_100e82b0:;
  /* 100e82b0 mov eax, ebx */
  EAX = (EBX);
  /* 100e82b2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e82b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100e82b5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e82b7 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100e82ba:;
  /* 100e82ba push eax */
  push32((uint32_t)(EAX));
  /* 100e82bb call dword ptr [0x100ee044] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee044))), 0x100e82c1u);
  /* 100e82c1 mov edi, eax */
  EDI = (EAX);
  /* 100e82c3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e82c6 je 0x100e82df */
  if (C.zf) goto L_100e82df;
  /* 100e82c8 push edi */
  push32((uint32_t)(EDI));
  /* 100e82c9 call dword ptr [0x100ee048] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee048))), 0x100e82cfu);
  /* 100e82cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e82d1 je 0x100e82df */
  if (C.zf) goto L_100e82df;
  /* 100e82d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100e82d8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100e82da cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e82dd jne 0x100e82e5 */
  if (!C.zf) goto L_100e82e5;
L_100e82df:;
  /* 100e82df or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100e82e3 jmp 0x100e82f4 */
  goto L_100e82f4;
L_100e82e5:;
  /* 100e82e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e82e8 jne 0x100e82f4 */
  if (!C.zf) goto L_100e82f4;
  /* 100e82ea or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100e82ee jmp 0x100e82f4 */
  goto L_100e82f4;
L_100e82f0:;
  /* 100e82f0 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_100e82f4:;
  /* 100e82f4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100e82f5 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e82f8 jl 0x100e8291 */
  if ((C.sf!=C.of)) goto L_100e8291;
  /* 100e82fa push dword ptr [0x100f7d40] */
  push32((uint32_t)(r32((uint32_t)(0x100f7d40))));
  /* 100e8300 call dword ptr [0x100ee040] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee040))), 0x100e8306u);
  /* 100e8306 pop edi */
  EDI = (pop32());
  /* 100e8307 pop esi */
  ESI = (pop32());
  /* 100e8308 pop ebx */
  EBX = (pop32());
  /* 100e8309 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e830a ret  */
  ESPCHK(0x100e814fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000830b @ 0x100e830b (84 bytes, 33 insns) */
void f_100e830b(void) {
  FTRACE(0x100e830bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e830b push ebx */
  push32((uint32_t)(EBX));
  /* 100e830c push esi */
  push32((uint32_t)(ESI));
  /* 100e830d push edi */
  push32((uint32_t)(EDI));
  /* 100e830e mov esi, 0x100f7c40 */
  ESI = (0x100f7c40u);
L_100e8313:;
  /* 100e8313 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100e8315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8317 je 0x100e8350 */
  if (C.zf) goto L_100e8350;
  /* 100e8319 mov edi, eax */
  EDI = (EAX);
  /* 100e831b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8320 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8322 jae 0x100e8345 */
  if (!C.cf) goto L_100e8345;
  /* 100e8324 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_100e8327:;
  /* 100e8327 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e832b je 0x100e8334 */
  if (C.zf) goto L_100e8334;
  /* 100e832d push ebx */
  push32((uint32_t)(EBX));
  /* 100e832e call dword ptr [0x100ee050] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee050))), 0x100e8334u);
L_100e8334:;
  /* 100e8334 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100e8336 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8339 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e833e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8341 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8343 jb 0x100e8327 */
  if (C.cf) goto L_100e8327;
L_100e8345:;
  /* 100e8345 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100e8347 call 0x100ea1c6 */
  push32(0x100e834cu); f_100ea1c6();
  /* 100e834c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100e834f pop ecx */
  ECX = (pop32());
L_100e8350:;
  /* 100e8350 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8353 cmp esi, 0x100f7d40 */
  { uint32_t _a=(ESI),_b=(0x100f7d40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8359 jl 0x100e8313 */
  if ((C.sf!=C.of)) goto L_100e8313;
  /* 100e835b pop edi */
  EDI = (pop32());
  /* 100e835c pop esi */
  ESI = (pop32());
  /* 100e835d pop ebx */
  EBX = (pop32());
  /* 100e835e ret  */
  ESPCHK(0x100e830bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000835f @ 0x100e835f (185 bytes, 71 insns) */
void f_100e835f(void) {
  FTRACE(0x100e835fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e835f push ebx */
  push32((uint32_t)(EBX));
  /* 100e8360 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100e8362 cmp dword ptr [0x100f7d48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100f7d48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8368 push esi */
  push32((uint32_t)(ESI));
  /* 100e8369 push edi */
  push32((uint32_t)(EDI));
  /* 100e836a jne 0x100e8371 */
  if (!C.zf) goto L_100e8371;
  /* 100e836c call 0x100ea7c1 */
  push32(0x100e8371u); f_100ea7c1();
L_100e8371:;
  /* 100e8371 mov esi, dword ptr [0x100f6648] */
  ESI = (r32((uint32_t)(0x100f6648)));
  /* 100e8377 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_100e8379:;
  /* 100e8379 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100e837b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e837d je 0x100e8391 */
  if (C.zf) goto L_100e8391;
  /* 100e837f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8381 je 0x100e8384 */
  if (C.zf) goto L_100e8384;
  /* 100e8383 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_100e8384:;
  /* 100e8384 push esi */
  push32((uint32_t)(ESI));
  /* 100e8385 call 0x100e9040 */
  push32(0x100e838au); f_100e9040();
  /* 100e838a pop ecx */
  ECX = (pop32());
  /* 100e838b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 100e838f jmp 0x100e8379 */
  goto L_100e8379;
L_100e8391:;
  /* 100e8391 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 100e8398 push eax */
  push32((uint32_t)(EAX));
  /* 100e8399 call 0x100ea2af */
  push32(0x100e839eu); f_100ea2af();
  /* 100e839e mov esi, eax */
  ESI = (EAX);
  /* 100e83a0 pop ecx */
  ECX = (pop32());
  /* 100e83a1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e83a3 mov dword ptr [0x100f6678], esi */
  w32((uint32_t)(0x100f6678), (ESI));
  /* 100e83a9 jne 0x100e83b3 */
  if (!C.zf) goto L_100e83b3;
  /* 100e83ab push 9 */
  push32((uint32_t)(0x9u));
  /* 100e83ad call 0x100e70b1 */
  push32(0x100e83b2u); f_100e70b1();
  /* 100e83b2 pop ecx */
  ECX = (pop32());
L_100e83b3:;
  /* 100e83b3 mov edi, dword ptr [0x100f6648] */
  EDI = (r32((uint32_t)(0x100f6648)));
  /* 100e83b9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e83bb je 0x100e83f6 */
  if (C.zf) goto L_100e83f6;
  /* 100e83bd push ebp */
  push32((uint32_t)(EBP));
L_100e83be:;
  /* 100e83be push edi */
  push32((uint32_t)(EDI));
  /* 100e83bf call 0x100e9040 */
  push32(0x100e83c4u); f_100e9040();
  /* 100e83c4 mov ebp, eax */
  EBP = (EAX);
  /* 100e83c6 pop ecx */
  ECX = (pop32());
  /* 100e83c7 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 100e83c8 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e83cb je 0x100e83ef */
  if (C.zf) goto L_100e83ef;
  /* 100e83cd push ebp */
  push32((uint32_t)(EBP));
  /* 100e83ce call 0x100ea2af */
  push32(0x100e83d3u); f_100ea2af();
  /* 100e83d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e83d5 pop ecx */
  ECX = (pop32());
  /* 100e83d6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100e83d8 jne 0x100e83e2 */
  if (!C.zf) goto L_100e83e2;
  /* 100e83da push 9 */
  push32((uint32_t)(0x9u));
  /* 100e83dc call 0x100e70b1 */
  push32(0x100e83e1u); f_100e70b1();
  /* 100e83e1 pop ecx */
  ECX = (pop32());
L_100e83e2:;
  /* 100e83e2 push edi */
  push32((uint32_t)(EDI));
  /* 100e83e3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100e83e5 call 0x100e9af0 */
  push32(0x100e83eau); f_100e9af0();
  /* 100e83ea pop ecx */
  ECX = (pop32());
  /* 100e83eb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e83ee pop ecx */
  ECX = (pop32());
L_100e83ef:;
  /* 100e83ef add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e83f1 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e83f3 jne 0x100e83be */
  if (!C.zf) goto L_100e83be;
  /* 100e83f5 pop ebp */
  EBP = (pop32());
L_100e83f6:;
  /* 100e83f6 push dword ptr [0x100f6648] */
  push32((uint32_t)(r32((uint32_t)(0x100f6648))));
  /* 100e83fc call 0x100ea1c6 */
  push32(0x100e8401u); f_100ea1c6();
  /* 100e8401 pop ecx */
  ECX = (pop32());
  /* 100e8402 mov dword ptr [0x100f6648], ebx */
  w32((uint32_t)(0x100f6648), (EBX));
  /* 100e8408 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 100e840a pop edi */
  EDI = (pop32());
  /* 100e840b pop esi */
  ESI = (pop32());
  /* 100e840c mov dword ptr [0x100f7d44], 1 */
  w32((uint32_t)(0x100f7d44), (0x1u));
  /* 100e8416 pop ebx */
  EBX = (pop32());
  /* 100e8417 ret  */
  ESPCHK(0x100e835fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008418 @ 0x100e8418 (153 bytes, 62 insns) */
void f_100e8418(void) {
  FTRACE(0x100e8418u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8418 push ebp */
  push32((uint32_t)(EBP));
  /* 100e8419 mov ebp, esp */
  EBP = (ESP);
  /* 100e841b push ecx */
  push32((uint32_t)(ECX));
  /* 100e841c push ecx */
  push32((uint32_t)(ECX));
  /* 100e841d push ebx */
  push32((uint32_t)(EBX));
  /* 100e841e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100e8420 cmp dword ptr [0x100f7d48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100f7d48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8426 push esi */
  push32((uint32_t)(ESI));
  /* 100e8427 push edi */
  push32((uint32_t)(EDI));
  /* 100e8428 jne 0x100e842f */
  if (!C.zf) goto L_100e842f;
  /* 100e842a call 0x100ea7c1 */
  push32(0x100e842fu); f_100ea7c1();
L_100e842f:;
  /* 100e842f mov esi, 0x100f669c */
  ESI = (0x100f669cu);
  /* 100e8434 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 100e8439 push esi */
  push32((uint32_t)(ESI));
  /* 100e843a push ebx */
  push32((uint32_t)(EBX));
  /* 100e843b call dword ptr [0x100ee054] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee054))), 0x100e8441u);
  /* 100e8441 mov eax, dword ptr [0x100f7d54] */
  EAX = (r32((uint32_t)(0x100f7d54)));
  /* 100e8446 mov dword ptr [0x100f6688], esi */
  w32((uint32_t)(0x100f6688), (ESI));
  /* 100e844c mov edi, esi */
  EDI = (ESI);
  /* 100e844e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8450 je 0x100e8454 */
  if (C.zf) goto L_100e8454;
  /* 100e8452 mov edi, eax */
  EDI = (EAX);
L_100e8454:;
  /* 100e8454 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 100e8457 push eax */
  push32((uint32_t)(EAX));
  /* 100e8458 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100e845b push eax */
  push32((uint32_t)(EAX));
  /* 100e845c push ebx */
  push32((uint32_t)(EBX));
  /* 100e845d push ebx */
  push32((uint32_t)(EBX));
  /* 100e845e push edi */
  push32((uint32_t)(EDI));
  /* 100e845f call 0x100e84b1 */
  push32(0x100e8464u); f_100e84b1();
  /* 100e8464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100e8467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100e846a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 100e846d push eax */
  push32((uint32_t)(EAX));
  /* 100e846e call 0x100ea2af */
  push32(0x100e8473u); f_100ea2af();
  /* 100e8473 mov esi, eax */
  ESI = (EAX);
  /* 100e8475 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8478 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e847a jne 0x100e8484 */
  if (!C.zf) goto L_100e8484;
  /* 100e847c push 8 */
  push32((uint32_t)(0x8u));
  /* 100e847e call 0x100e70b1 */
  push32(0x100e8483u); f_100e70b1();
  /* 100e8483 pop ecx */
  ECX = (pop32());
L_100e8484:;
  /* 100e8484 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 100e8487 push eax */
  push32((uint32_t)(EAX));
  /* 100e8488 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100e848b push eax */
  push32((uint32_t)(EAX));
  /* 100e848c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100e848f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 100e8492 push eax */
  push32((uint32_t)(EAX));
  /* 100e8493 push esi */
  push32((uint32_t)(ESI));
  /* 100e8494 push edi */
  push32((uint32_t)(EDI));
  /* 100e8495 call 0x100e84b1 */
  push32(0x100e849au); f_100e84b1();
  /* 100e849a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100e849d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e84a0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e84a1 mov dword ptr [0x100f6670], esi */
  w32((uint32_t)(0x100f6670), (ESI));
  /* 100e84a7 pop edi */
  EDI = (pop32());
  /* 100e84a8 pop esi */
  ESI = (pop32());
  /* 100e84a9 mov dword ptr [0x100f666c], eax */
  w32((uint32_t)(0x100f666c), (EAX));
  /* 100e84ae pop ebx */
  EBX = (pop32());
  /* 100e84af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e84b0 ret  */
  ESPCHK(0x100e8418u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b1 @ 0x100e84b1 (436 bytes, 187 insns) */
void f_100e84b1(void) {
  FTRACE(0x100e84b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e84b1 push ebp */
  push32((uint32_t)(EBP));
  /* 100e84b2 mov ebp, esp */
  EBP = (ESP);
  /* 100e84b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 100e84b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100e84ba push ebx */
  push32((uint32_t)(EBX));
  /* 100e84bb push esi */
  push32((uint32_t)(ESI));
  /* 100e84bc and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100e84bf mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100e84c2 push edi */
  push32((uint32_t)(EDI));
  /* 100e84c3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100e84c6 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 100e84cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e84cf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100e84d1 je 0x100e84db */
  if (C.zf) goto L_100e84db;
  /* 100e84d3 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 100e84d5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e84d8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100e84db:;
  /* 100e84db cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e84de jne 0x100e8524 */
  if (!C.zf) goto L_100e8524;
L_100e84e0:;
  /* 100e84e0 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 100e84e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e84e4 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e84e7 je 0x100e8512 */
  if (C.zf) goto L_100e8512;
  /* 100e84e9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100e84eb je 0x100e8512 */
  if (C.zf) goto L_100e8512;
  /* 100e84ed movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 100e84f0 test byte ptr [edx + 0x100f6b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x100f6b01)))&(0x4u); fl_logic(_r,8); }
  /* 100e84f7 je 0x100e8505 */
  if (C.zf) goto L_100e8505;
  /* 100e84f9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100e84fb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e84fd je 0x100e8505 */
  if (C.zf) goto L_100e8505;
  /* 100e84ff mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100e8501 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100e8503 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100e8504 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_100e8505:;
  /* 100e8505 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100e8507 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e8509 je 0x100e84e0 */
  if (C.zf) goto L_100e84e0;
  /* 100e850b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100e850d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100e850f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100e8510 jmp 0x100e84e0 */
  goto L_100e84e0;
L_100e8512:;
  /* 100e8512 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100e8514 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e8516 je 0x100e851c */
  if (C.zf) goto L_100e851c;
  /* 100e8518 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 100e851b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100e851c:;
  /* 100e851c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e851f jne 0x100e8567 */
  if (!C.zf) goto L_100e8567;
  /* 100e8521 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e8522 jmp 0x100e8567 */
  goto L_100e8567;
L_100e8524:;
  /* 100e8524 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100e8526 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e8528 je 0x100e852f */
  if (C.zf) goto L_100e852f;
  /* 100e852a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100e852c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100e852e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100e852f:;
  /* 100e852f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100e8531 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e8532 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 100e8535 test byte ptr [ebx + 0x100f6b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x100f6b01)))&(0x4u); fl_logic(_r,8); }
  /* 100e853c je 0x100e854a */
  if (C.zf) goto L_100e854a;
  /* 100e853e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100e8540 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e8542 je 0x100e8549 */
  if (C.zf) goto L_100e8549;
  /* 100e8544 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 100e8546 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 100e8548 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100e8549:;
  /* 100e8549 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_100e854a:;
  /* 100e854a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e854d je 0x100e8558 */
  if (C.zf) goto L_100e8558;
  /* 100e854f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100e8551 je 0x100e855c */
  if (C.zf) goto L_100e855c;
  /* 100e8553 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8556 jne 0x100e8524 */
  if (!C.zf) goto L_100e8524;
L_100e8558:;
  /* 100e8558 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100e855a jne 0x100e855f */
  if (!C.zf) goto L_100e855f;
L_100e855c:;
  /* 100e855c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e855d jmp 0x100e8567 */
  goto L_100e8567;
L_100e855f:;
  /* 100e855f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e8561 je 0x100e8567 */
  if (C.zf) goto L_100e8567;
  /* 100e8563 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_100e8567:;
  /* 100e8567 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_100e856b:;
  /* 100e856b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e856e je 0x100e8654 */
  if (C.zf) goto L_100e8654;
L_100e8574:;
  /* 100e8574 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100e8576 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8579 je 0x100e8580 */
  if (C.zf) goto L_100e8580;
  /* 100e857b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e857e jne 0x100e8583 */
  if (!C.zf) goto L_100e8583;
L_100e8580:;
  /* 100e8580 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e8581 jmp 0x100e8574 */
  goto L_100e8574;
L_100e8583:;
  /* 100e8583 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8586 je 0x100e8654 */
  if (C.zf) goto L_100e8654;
  /* 100e858c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100e858e je 0x100e8598 */
  if (C.zf) goto L_100e8598;
  /* 100e8590 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 100e8592 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8595 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100e8598:;
  /* 100e8598 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 100e859b inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_100e859d:;
  /* 100e859d mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 100e85a4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100e85a6:;
  /* 100e85a6 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e85a9 jne 0x100e85af */
  if (!C.zf) goto L_100e85af;
  /* 100e85ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e85ac inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100e85ad jmp 0x100e85a6 */
  goto L_100e85a6;
L_100e85af:;
  /* 100e85af cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e85b2 jne 0x100e85e0 */
  if (!C.zf) goto L_100e85e0;
  /* 100e85b4 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100e85b7 jne 0x100e85de */
  if (!C.zf) goto L_100e85de;
  /* 100e85b9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100e85bb cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e85be je 0x100e85cd */
  if (C.zf) goto L_100e85cd;
  /* 100e85c0 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e85c4 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 100e85c7 jne 0x100e85cd */
  if (!C.zf) goto L_100e85cd;
  /* 100e85c9 mov eax, edx */
  EAX = (EDX);
  /* 100e85cb jmp 0x100e85d0 */
  goto L_100e85d0;
L_100e85cd:;
  /* 100e85cd mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_100e85d0:;
  /* 100e85d0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100e85d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100e85d5 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e85d8 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 100e85db mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_100e85de:;
  /* 100e85de shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_100e85e0:;
  /* 100e85e0 mov edx, ebx */
  EDX = (EBX);
  /* 100e85e2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100e85e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100e85e5 je 0x100e85f5 */
  if (C.zf) goto L_100e85f5;
  /* 100e85e7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_100e85e8:;
  /* 100e85e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e85ea je 0x100e85f0 */
  if (C.zf) goto L_100e85f0;
  /* 100e85ec mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 100e85ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100e85f0:;
  /* 100e85f0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100e85f2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100e85f3 jne 0x100e85e8 */
  if (!C.zf) goto L_100e85e8;
L_100e85f5:;
  /* 100e85f5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100e85f7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100e85f9 je 0x100e8645 */
  if (C.zf) goto L_100e8645;
  /* 100e85fb cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e85ff jne 0x100e860b */
  if (!C.zf) goto L_100e860b;
  /* 100e8601 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8604 je 0x100e8645 */
  if (C.zf) goto L_100e8645;
  /* 100e8606 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8609 je 0x100e8645 */
  if (C.zf) goto L_100e8645;
L_100e860b:;
  /* 100e860b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e860f je 0x100e863f */
  if (C.zf) goto L_100e863f;
  /* 100e8611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e8613 je 0x100e862e */
  if (C.zf) goto L_100e862e;
  /* 100e8615 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 100e8618 test byte ptr [ebx + 0x100f6b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x100f6b01)))&(0x4u); fl_logic(_r,8); }
  /* 100e861f je 0x100e8627 */
  if (C.zf) goto L_100e8627;
  /* 100e8621 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100e8623 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100e8624 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e8625 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_100e8627:;
  /* 100e8627 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100e8629 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100e862b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100e862c jmp 0x100e863d */
  goto L_100e863d;
L_100e862e:;
  /* 100e862e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 100e8631 test byte ptr [edx + 0x100f6b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x100f6b01)))&(0x4u); fl_logic(_r,8); }
  /* 100e8638 je 0x100e863d */
  if (C.zf) goto L_100e863d;
  /* 100e863a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e863b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_100e863d:;
  /* 100e863d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_100e863f:;
  /* 100e863f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e8640 jmp 0x100e859d */
  goto L_100e859d;
L_100e8645:;
  /* 100e8645 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e8647 je 0x100e864d */
  if (C.zf) goto L_100e864d;
  /* 100e8649 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 100e864c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100e864d:;
  /* 100e864d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100e864f jmp 0x100e856b */
  goto L_100e856b;
L_100e8654:;
  /* 100e8654 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100e8656 je 0x100e865b */
  if (C.zf) goto L_100e865b;
  /* 100e8658 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_100e865b:;
  /* 100e865b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100e865e pop edi */
  EDI = (pop32());
  /* 100e865f pop esi */
  ESI = (pop32());
  /* 100e8660 pop ebx */
  EBX = (pop32());
  /* 100e8661 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 100e8663 pop ebp */
  EBP = (pop32());
  /* 100e8664 ret  */
  ESPCHK(0x100e84b1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008665 @ 0x100e8665 (306 bytes, 132 insns) */
void f_100e8665(void) {
  FTRACE(0x100e8665u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8665 push ecx */
  push32((uint32_t)(ECX));
  /* 100e8666 push ecx */
  push32((uint32_t)(ECX));
  /* 100e8667 mov eax, dword ptr [0x100f67a0] */
  EAX = (r32((uint32_t)(0x100f67a0)));
  /* 100e866c push ebx */
  push32((uint32_t)(EBX));
  /* 100e866d push ebp */
  push32((uint32_t)(EBP));
  /* 100e866e mov ebp, dword ptr [0x100ee068] */
  EBP = (r32((uint32_t)(0x100ee068)));
  /* 100e8674 push esi */
  push32((uint32_t)(ESI));
  /* 100e8675 push edi */
  push32((uint32_t)(EDI));
  /* 100e8676 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100e8678 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100e867a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100e867c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e867e jne 0x100e86b3 */
  if (!C.zf) goto L_100e86b3;
  /* 100e8680 call ebp */
  call_ind((uint32_t)(EBP), 0x100e8682u);
  /* 100e8682 mov esi, eax */
  ESI = (EAX);
  /* 100e8684 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8686 je 0x100e8694 */
  if (C.zf) goto L_100e8694;
  /* 100e8688 mov dword ptr [0x100f67a0], 1 */
  w32((uint32_t)(0x100f67a0), (0x1u));
  /* 100e8692 jmp 0x100e86bc */
  goto L_100e86bc;
L_100e8694:;
  /* 100e8694 call dword ptr [0x100ee064] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee064))), 0x100e869au);
  /* 100e869a mov edi, eax */
  EDI = (EAX);
  /* 100e869c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e869e je 0x100e878e */
  if (C.zf) goto L_100e878e;
  /* 100e86a4 mov dword ptr [0x100f67a0], 2 */
  w32((uint32_t)(0x100f67a0), (0x2u));
  /* 100e86ae jmp 0x100e8742 */
  goto L_100e8742;
L_100e86b3:;
  /* 100e86b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e86b6 jne 0x100e873d */
  if (!C.zf) goto L_100e873d;
L_100e86bc:;
  /* 100e86bc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e86be jne 0x100e86cc */
  if (!C.zf) goto L_100e86cc;
  /* 100e86c0 call ebp */
  call_ind((uint32_t)(EBP), 0x100e86c2u);
  /* 100e86c2 mov esi, eax */
  ESI = (EAX);
  /* 100e86c4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e86c6 je 0x100e878e */
  if (C.zf) goto L_100e878e;
L_100e86cc:;
  /* 100e86cc cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100e86cf mov eax, esi */
  EAX = (ESI);
  /* 100e86d1 je 0x100e86e1 */
  if (C.zf) goto L_100e86e1;
L_100e86d3:;
  /* 100e86d3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e86d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e86d5 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100e86d8 jne 0x100e86d3 */
  if (!C.zf) goto L_100e86d3;
  /* 100e86da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e86db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e86dc cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100e86df jne 0x100e86d3 */
  if (!C.zf) goto L_100e86d3;
L_100e86e1:;
  /* 100e86e1 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e86e3 mov edi, dword ptr [0x100ee060] */
  EDI = (r32((uint32_t)(0x100ee060)));
  /* 100e86e9 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100e86eb push ebx */
  push32((uint32_t)(EBX));
  /* 100e86ec push ebx */
  push32((uint32_t)(EBX));
  /* 100e86ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e86ee push ebx */
  push32((uint32_t)(EBX));
  /* 100e86ef push ebx */
  push32((uint32_t)(EBX));
  /* 100e86f0 push eax */
  push32((uint32_t)(EAX));
  /* 100e86f1 push esi */
  push32((uint32_t)(ESI));
  /* 100e86f2 push ebx */
  push32((uint32_t)(EBX));
  /* 100e86f3 push ebx */
  push32((uint32_t)(EBX));
  /* 100e86f4 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 100e86f8 call edi */
  call_ind((uint32_t)(EDI), 0x100e86fau);
  /* 100e86fa mov ebp, eax */
  EBP = (EAX);
  /* 100e86fc cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e86fe je 0x100e8732 */
  if (C.zf) goto L_100e8732;
  /* 100e8700 push ebp */
  push32((uint32_t)(EBP));
  /* 100e8701 call 0x100ea2af */
  push32(0x100e8706u); f_100ea2af();
  /* 100e8706 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8708 pop ecx */
  ECX = (pop32());
  /* 100e8709 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 100e870d je 0x100e8732 */
  if (C.zf) goto L_100e8732;
  /* 100e870f push ebx */
  push32((uint32_t)(EBX));
  /* 100e8710 push ebx */
  push32((uint32_t)(EBX));
  /* 100e8711 push ebp */
  push32((uint32_t)(EBP));
  /* 100e8712 push eax */
  push32((uint32_t)(EAX));
  /* 100e8713 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 100e8717 push esi */
  push32((uint32_t)(ESI));
  /* 100e8718 push ebx */
  push32((uint32_t)(EBX));
  /* 100e8719 push ebx */
  push32((uint32_t)(EBX));
  /* 100e871a call edi */
  call_ind((uint32_t)(EDI), 0x100e871cu);
  /* 100e871c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e871e jne 0x100e872e */
  if (!C.zf) goto L_100e872e;
  /* 100e8720 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100e8724 call 0x100ea1c6 */
  push32(0x100e8729u); f_100ea1c6();
  /* 100e8729 pop ecx */
  ECX = (pop32());
  /* 100e872a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_100e872e:;
  /* 100e872e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_100e8732:;
  /* 100e8732 push esi */
  push32((uint32_t)(ESI));
  /* 100e8733 call dword ptr [0x100ee05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee05c))), 0x100e8739u);
  /* 100e8739 mov eax, ebx */
  EAX = (EBX);
  /* 100e873b jmp 0x100e8790 */
  goto L_100e8790;
L_100e873d:;
  /* 100e873d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8740 jne 0x100e878e */
  if (!C.zf) goto L_100e878e;
L_100e8742:;
  /* 100e8742 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8744 jne 0x100e8752 */
  if (!C.zf) goto L_100e8752;
  /* 100e8746 call dword ptr [0x100ee064] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee064))), 0x100e874cu);
  /* 100e874c mov edi, eax */
  EDI = (EAX);
  /* 100e874e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8750 je 0x100e878e */
  if (C.zf) goto L_100e878e;
L_100e8752:;
  /* 100e8752 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8754 mov eax, edi */
  EAX = (EDI);
  /* 100e8756 je 0x100e8762 */
  if (C.zf) goto L_100e8762;
L_100e8758:;
  /* 100e8758 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e8759 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e875b jne 0x100e8758 */
  if (!C.zf) goto L_100e8758;
  /* 100e875d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e875e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8760 jne 0x100e8758 */
  if (!C.zf) goto L_100e8758;
L_100e8762:;
  /* 100e8762 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e8764 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e8765 mov ebp, eax */
  EBP = (EAX);
  /* 100e8767 push ebp */
  push32((uint32_t)(EBP));
  /* 100e8768 call 0x100ea2af */
  push32(0x100e876du); f_100ea2af();
  /* 100e876d mov esi, eax */
  ESI = (EAX);
  /* 100e876f pop ecx */
  ECX = (pop32());
  /* 100e8770 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8772 jne 0x100e8778 */
  if (!C.zf) goto L_100e8778;
  /* 100e8774 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100e8776 jmp 0x100e8783 */
  goto L_100e8783;
L_100e8778:;
  /* 100e8778 push ebp */
  push32((uint32_t)(EBP));
  /* 100e8779 push edi */
  push32((uint32_t)(EDI));
  /* 100e877a push esi */
  push32((uint32_t)(ESI));
  /* 100e877b call 0x100ea7e0 */
  push32(0x100e8780u); f_100ea7e0();
  /* 100e8780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e8783:;
  /* 100e8783 push edi */
  push32((uint32_t)(EDI));
  /* 100e8784 call dword ptr [0x100ee058] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee058))), 0x100e878au);
  /* 100e878a mov eax, esi */
  EAX = (ESI);
  /* 100e878c jmp 0x100e8790 */
  goto L_100e8790;
L_100e878e:;
  /* 100e878e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100e8790:;
  /* 100e8790 pop edi */
  EDI = (pop32());
  /* 100e8791 pop esi */
  ESI = (pop32());
  /* 100e8792 pop ebp */
  EBP = (pop32());
  /* 100e8793 pop ebx */
  EBX = (pop32());
  /* 100e8794 pop ecx */
  ECX = (pop32());
  /* 100e8795 pop ecx */
  ECX = (pop32());
  /* 100e8796 ret  */
  ESPCHK(0x100e8665u, _esp0);
  ESP += 4; return;
}

/* FUN_10008797 @ 0x100e8797 (45 bytes, 17 insns) */
void f_100e8797(void) {
  FTRACE(0x100e8797u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8797 push esi */
  push32((uint32_t)(ESI));
  /* 100e8798 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100e879c push 0 */
  push32((uint32_t)(0x0u));
  /* 100e879e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100e87a1 call dword ptr [0x100ee004] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee004))), 0x100e87a7u);
  /* 100e87a7 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100e87ac jne 0x100e87c2 */
  if (!C.zf) goto L_100e87c2;
  /* 100e87ae mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 100e87b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100e87b3 je 0x100e87c2 */
  if (C.zf) goto L_100e87c2;
  /* 100e87b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e87b7 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 100e87ba mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 100e87bc mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 100e87bf mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_100e87c2:;
  /* 100e87c2 pop esi */
  ESI = (pop32());
  /* 100e87c3 ret  */
  ESPCHK(0x100e8797u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c4 @ 0x100e87c4 (328 bytes, 115 insns) */
void f_100e87c4(void) {
  FTRACE(0x100e87c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e87c4 push ebp */
  push32((uint32_t)(EBP));
  /* 100e87c5 mov ebp, esp */
  EBP = (ESP);
  /* 100e87c7 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 100e87cc call 0x100eaed0 */
  push32(0x100e87d1u); f_100eaed0();
  /* 100e87d1 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 100e87d7 push ebx */
  push32((uint32_t)(EBX));
  /* 100e87d8 push eax */
  push32((uint32_t)(EAX));
  /* 100e87d9 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 100e87e3 call dword ptr [0x100ee070] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee070))), 0x100e87e9u);
  /* 100e87e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e87eb je 0x100e8807 */
  if (C.zf) goto L_100e8807;
  /* 100e87ed cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e87f4 jne 0x100e8807 */
  if (!C.zf) goto L_100e8807;
  /* 100e87f6 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e87fd jb 0x100e8807 */
  if (C.cf) goto L_100e8807;
  /* 100e87ff push 1 */
  push32((uint32_t)(0x1u));
  /* 100e8801 pop eax */
  EAX = (pop32());
  /* 100e8802 jmp 0x100e8909 */
  goto L_100e8909;
L_100e8807:;
  /* 100e8807 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100e880d push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 100e8812 push eax */
  push32((uint32_t)(EAX));
  /* 100e8813 push 0x100ee1c8 */
  push32((uint32_t)(0x100ee1c8u));
  /* 100e8818 call dword ptr [0x100ee06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee06c))), 0x100e881eu);
  /* 100e881e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8820 je 0x100e88f6 */
  if (C.zf) goto L_100e88f6;
  /* 100e8826 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100e8828 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 100e882e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8834 je 0x100e8849 */
  if (C.zf) goto L_100e8849;
L_100e8836:;
  /* 100e8836 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100e8838 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e883a jl 0x100e8844 */
  if ((C.sf!=C.of)) goto L_100e8844;
  /* 100e883c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e883e jg 0x100e8844 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e8844;
  /* 100e8840 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100e8842 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_100e8844:;
  /* 100e8844 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100e8845 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8847 jne 0x100e8836 */
  if (!C.zf) goto L_100e8836;
L_100e8849:;
  /* 100e8849 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100e884f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 100e8851 push eax */
  push32((uint32_t)(EAX));
  /* 100e8852 push 0x100ee1b0 */
  push32((uint32_t)(0x100ee1b0u));
  /* 100e8857 call 0x100eae90 */
  push32(0x100e885cu); f_100eae90();
  /* 100e885c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e885f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8861 jne 0x100e886b */
  if (!C.zf) goto L_100e886b;
  /* 100e8863 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100e8869 jmp 0x100e88b4 */
  goto L_100e88b4;
L_100e886b:;
  /* 100e886b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 100e8871 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 100e8876 push eax */
  push32((uint32_t)(EAX));
  /* 100e8877 push ebx */
  push32((uint32_t)(EBX));
  /* 100e8878 call dword ptr [0x100ee054] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee054))), 0x100e887eu);
  /* 100e887e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8884 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 100e888a je 0x100e889f */
  if (C.zf) goto L_100e889f;
L_100e888c:;
  /* 100e888c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100e888e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8890 jl 0x100e889a */
  if ((C.sf!=C.of)) goto L_100e889a;
  /* 100e8892 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8894 jg 0x100e889a */
  if ((!C.zf&&C.sf==C.of)) goto L_100e889a;
  /* 100e8896 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100e8898 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_100e889a:;
  /* 100e889a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100e889b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e889d jne 0x100e888c */
  if (!C.zf) goto L_100e888c;
L_100e889f:;
  /* 100e889f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 100e88a5 push eax */
  push32((uint32_t)(EAX));
  /* 100e88a6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100e88ac push eax */
  push32((uint32_t)(EAX));
  /* 100e88ad call 0x100eae10 */
  push32(0x100e88b2u); f_100eae10();
  /* 100e88b2 pop ecx */
  ECX = (pop32());
  /* 100e88b3 pop ecx */
  ECX = (pop32());
L_100e88b4:;
  /* 100e88b4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e88b6 je 0x100e88f6 */
  if (C.zf) goto L_100e88f6;
  /* 100e88b8 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 100e88ba push eax */
  push32((uint32_t)(EAX));
  /* 100e88bb call 0x100ead50 */
  push32(0x100e88c0u); f_100ead50();
  /* 100e88c0 pop ecx */
  ECX = (pop32());
  /* 100e88c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e88c3 pop ecx */
  ECX = (pop32());
  /* 100e88c4 je 0x100e88f6 */
  if (C.zf) goto L_100e88f6;
  /* 100e88c6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e88c7 mov ecx, eax */
  ECX = (EAX);
  /* 100e88c9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e88cb je 0x100e88db */
  if (C.zf) goto L_100e88db;
L_100e88cd:;
  /* 100e88cd cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e88d0 jne 0x100e88d6 */
  if (!C.zf) goto L_100e88d6;
  /* 100e88d2 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 100e88d4 jmp 0x100e88d7 */
  goto L_100e88d7;
L_100e88d6:;
  /* 100e88d6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_100e88d7:;
  /* 100e88d7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e88d9 jne 0x100e88cd */
  if (!C.zf) goto L_100e88cd;
L_100e88db:;
  /* 100e88db push 0xa */
  push32((uint32_t)(0xau));
  /* 100e88dd push ebx */
  push32((uint32_t)(EBX));
  /* 100e88de push eax */
  push32((uint32_t)(EAX));
  /* 100e88df call 0x100eab15 */
  push32(0x100e88e4u); f_100eab15();
  /* 100e88e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e88e7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e88ea je 0x100e8909 */
  if (C.zf) goto L_100e8909;
  /* 100e88ec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e88ef je 0x100e8909 */
  if (C.zf) goto L_100e8909;
  /* 100e88f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e88f4 je 0x100e8909 */
  if (C.zf) goto L_100e8909;
L_100e88f6:;
  /* 100e88f6 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100e88f9 push eax */
  push32((uint32_t)(EAX));
  /* 100e88fa call 0x100e8797 */
  push32(0x100e88ffu); f_100e8797();
  /* 100e88ff cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8903 pop ecx */
  ECX = (pop32());
  /* 100e8904 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e8906 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100e8909:;
  /* 100e8909 pop ebx */
  EBX = (pop32());
  /* 100e890a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e890b ret  */
  ESPCHK(0x100e87c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000890c @ 0x100e890c (93 bytes, 30 insns) */
void f_100e890c(void) {
  FTRACE(0x100e890cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e890c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e890e push 0 */
  push32((uint32_t)(0x0u));
  /* 100e8910 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8914 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100e8919 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100e891c push eax */
  push32((uint32_t)(EAX));
  /* 100e891d call dword ptr [0x100ee078] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee078))), 0x100e8923u);
  /* 100e8923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8925 mov dword ptr [0x100f7c24], eax */
  w32((uint32_t)(0x100f7c24), (EAX));
  /* 100e892a je 0x100e8962 */
  if (C.zf) goto L_100e8962;
  /* 100e892c call 0x100e87c4 */
  push32(0x100e8931u); f_100e87c4();
  /* 100e8931 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8934 mov dword ptr [0x100f7c28], eax */
  w32((uint32_t)(0x100f7c28), (EAX));
  /* 100e8939 jne 0x100e8948 */
  if (!C.zf) goto L_100e8948;
  /* 100e893b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 100e8940 call 0x100eaeff */
  push32(0x100e8945u); f_100eaeff();
  /* 100e8945 pop ecx */
  ECX = (pop32());
  /* 100e8946 jmp 0x100e8952 */
  goto L_100e8952;
L_100e8948:;
  /* 100e8948 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e894b jne 0x100e8965 */
  if (!C.zf) goto L_100e8965;
  /* 100e894d call 0x100eb750 */
  push32(0x100e8952u); f_100eb750();
L_100e8952:;
  /* 100e8952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8954 jne 0x100e8965 */
  if (!C.zf) goto L_100e8965;
  /* 100e8956 push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
  /* 100e895c call dword ptr [0x100ee074] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee074))), 0x100e8962u);
L_100e8962:;
  /* 100e8962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e8964 ret  */
  ESPCHK(0x100e890cu, _esp0);
  ESP += 4; return;
L_100e8965:;
  /* 100e8965 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e8967 pop eax */
  EAX = (pop32());
  /* 100e8968 ret  */
  ESPCHK(0x100e890cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008969 @ 0x100e8969 (168 bytes, 56 insns) */
void f_100e8969(void) {
  FTRACE(0x100e8969u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8969 mov eax, dword ptr [0x100f7c28] */
  EAX = (r32((uint32_t)(0x100f7c28)));
  /* 100e896e push esi */
  push32((uint32_t)(ESI));
  /* 100e896f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8972 push edi */
  push32((uint32_t)(EDI));
  /* 100e8973 jne 0x100e89db */
  if (!C.zf) goto L_100e89db;
  /* 100e8975 push ebx */
  push32((uint32_t)(EBX));
  /* 100e8976 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100e8978 cmp dword ptr [0x100f69c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100f69c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e897e push ebp */
  push32((uint32_t)(EBP));
  /* 100e897f mov ebp, dword ptr [0x100ee080] */
  EBP = (r32((uint32_t)(0x100ee080)));
  /* 100e8985 jle 0x100e89c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100e89c7;
  /* 100e8987 mov eax, dword ptr [0x100f69cc] */
  EAX = (r32((uint32_t)(0x100f69cc)));
  /* 100e898c mov edi, dword ptr [0x100ee07c] */
  EDI = (r32((uint32_t)(0x100ee07c)));
  /* 100e8992 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_100e8995:;
  /* 100e8995 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 100e899a push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 100e899f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100e89a1 call edi */
  call_ind((uint32_t)(EDI), 0x100e89a3u);
  /* 100e89a3 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100e89a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e89aa push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100e89ac call edi */
  call_ind((uint32_t)(EDI), 0x100e89aeu);
  /* 100e89ae push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 100e89b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e89b3 push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
  /* 100e89b9 call ebp */
  call_ind((uint32_t)(EBP), 0x100e89bbu);
  /* 100e89bb add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e89be inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100e89bf cmp ebx, dword ptr [0x100f69c8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100f69c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e89c5 jl 0x100e8995 */
  if ((C.sf!=C.of)) goto L_100e8995;
L_100e89c7:;
  /* 100e89c7 push dword ptr [0x100f69cc] */
  push32((uint32_t)(r32((uint32_t)(0x100f69cc))));
  /* 100e89cd push 0 */
  push32((uint32_t)(0x0u));
  /* 100e89cf push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
  /* 100e89d5 call ebp */
  call_ind((uint32_t)(EBP), 0x100e89d7u);
  /* 100e89d7 pop ebp */
  EBP = (pop32());
  /* 100e89d8 pop ebx */
  EBX = (pop32());
  /* 100e89d9 jmp 0x100e8a02 */
  goto L_100e8a02;
L_100e89db:;
  /* 100e89db cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e89de jne 0x100e8a02 */
  if (!C.zf) goto L_100e8a02;
  /* 100e89e0 mov edi, 0x100f0e60 */
  EDI = (0x100f0e60u);
  /* 100e89e5 mov esi, edi */
  ESI = (EDI);
L_100e89e7:;
  /* 100e89e7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 100e89ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e89ec je 0x100e89fc */
  if (C.zf) goto L_100e89fc;
  /* 100e89ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100e89f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e89f5 push eax */
  push32((uint32_t)(EAX));
  /* 100e89f6 call dword ptr [0x100ee07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee07c))), 0x100e89fcu);
L_100e89fc:;
  /* 100e89fc mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 100e89fe cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8a00 jne 0x100e89e7 */
  if (!C.zf) goto L_100e89e7;
L_100e8a02:;
  /* 100e8a02 push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
  /* 100e8a08 call dword ptr [0x100ee074] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee074))), 0x100e8a0eu);
  /* 100e8a0e pop edi */
  EDI = (pop32());
  /* 100e8a0f pop esi */
  ESI = (pop32());
  /* 100e8a10 ret  */
  ESPCHK(0x100e8969u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a11 @ 0x100e8a11 (57 bytes, 18 insns) */
void f_100e8a11(void) {
  FTRACE(0x100e8a11u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8a11 mov eax, dword ptr [0x100f6650] */
  EAX = (r32((uint32_t)(0x100f6650)));
  /* 100e8a16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8a19 je 0x100e8a28 */
  if (C.zf) goto L_100e8a28;
  /* 100e8a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8a1d jne 0x100e8a49 */
  if (!C.zf) goto L_100e8a49;
  /* 100e8a1f cmp dword ptr [0x100f6654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100f6654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8a26 jne 0x100e8a49 */
  if (!C.zf) goto L_100e8a49;
L_100e8a28:;
  /* 100e8a28 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 100e8a2d call 0x100e8a4a */
  push32(0x100e8a32u); f_100e8a4a();
  /* 100e8a32 mov eax, dword ptr [0x100f67a4] */
  EAX = (r32((uint32_t)(0x100f67a4)));
  /* 100e8a37 pop ecx */
  ECX = (pop32());
  /* 100e8a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8a3a je 0x100e8a3e */
  if (C.zf) goto L_100e8a3e;
  /* 100e8a3c call eax */
  call_ind((uint32_t)(EAX), 0x100e8a3eu);
L_100e8a3e:;
  /* 100e8a3e push 0xff */
  push32((uint32_t)(0xffu));
  /* 100e8a43 call 0x100e8a4a */
  push32(0x100e8a48u); f_100e8a4a();
  /* 100e8a48 pop ecx */
  ECX = (pop32());
L_100e8a49:;
  /* 100e8a49 ret  */
  ESPCHK(0x100e8a11u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a4a @ 0x100e8a4a (339 bytes, 100 insns) */
void f_100e8a4a(void) {
  FTRACE(0x100e8a4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8a4a push ebp */
  push32((uint32_t)(EBP));
  /* 100e8a4b mov ebp, esp */
  EBP = (ESP);
  /* 100e8a4d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e8a53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e8a56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100e8a58 mov eax, 0x100f06c0 */
  EAX = (0x100f06c0u);
L_100e8a5d:;
  /* 100e8a5d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8a5f je 0x100e8a6c */
  if (C.zf) goto L_100e8a6c;
  /* 100e8a61 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8a64 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100e8a65 cmp eax, 0x100f0750 */
  { uint32_t _a=(EAX),_b=(0x100f0750u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8a6a jl 0x100e8a5d */
  if ((C.sf!=C.of)) goto L_100e8a5d;
L_100e8a6c:;
  /* 100e8a6c push esi */
  push32((uint32_t)(ESI));
  /* 100e8a6d mov esi, ecx */
  ESI = (ECX);
  /* 100e8a6f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 100e8a72 cmp edx, dword ptr [esi + 0x100f06c0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x100f06c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8a78 jne 0x100e8b9a */
  if (!C.zf) goto L_100e8b9a;
  /* 100e8a7e mov eax, dword ptr [0x100f6650] */
  EAX = (r32((uint32_t)(0x100f6650)));
  /* 100e8a83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8a86 je 0x100e8b74 */
  if (C.zf) goto L_100e8b74;
  /* 100e8a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8a8e jne 0x100e8a9d */
  if (!C.zf) goto L_100e8a9d;
  /* 100e8a90 cmp dword ptr [0x100f6654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100f6654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8a97 je 0x100e8b74 */
  if (C.zf) goto L_100e8b74;
L_100e8a9d:;
  /* 100e8a9d cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8aa3 je 0x100e8b9a */
  if (C.zf) goto L_100e8b9a;
  /* 100e8aa9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100e8aaf push 0x104 */
  push32((uint32_t)(0x104u));
  /* 100e8ab4 push eax */
  push32((uint32_t)(EAX));
  /* 100e8ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e8ab7 call dword ptr [0x100ee054] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee054))), 0x100e8abdu);
  /* 100e8abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8abf jne 0x100e8ad4 */
  if (!C.zf) goto L_100e8ad4;
  /* 100e8ac1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100e8ac7 push 0x100ee4b8 */
  push32((uint32_t)(0x100ee4b8u));
  /* 100e8acc push eax */
  push32((uint32_t)(EAX));
  /* 100e8acd call 0x100e9af0 */
  push32(0x100e8ad2u); f_100e9af0();
  /* 100e8ad2 pop ecx */
  ECX = (pop32());
  /* 100e8ad3 pop ecx */
  ECX = (pop32());
L_100e8ad4:;
  /* 100e8ad4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100e8ada push edi */
  push32((uint32_t)(EDI));
  /* 100e8adb push eax */
  push32((uint32_t)(EAX));
  /* 100e8adc lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 100e8ae2 call 0x100e9040 */
  push32(0x100e8ae7u); f_100e9040();
  /* 100e8ae7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e8ae8 pop ecx */
  ECX = (pop32());
  /* 100e8ae9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8aec jbe 0x100e8b17 */
  if ((C.cf||C.zf)) goto L_100e8b17;
  /* 100e8aee lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100e8af4 push eax */
  push32((uint32_t)(EAX));
  /* 100e8af5 call 0x100e9040 */
  push32(0x100e8afau); f_100e9040();
  /* 100e8afa mov edi, eax */
  EDI = (EAX);
  /* 100e8afc lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100e8b02 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e8b05 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e8b07 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8b09 push 0x100ee4b4 */
  push32((uint32_t)(0x100ee4b4u));
  /* 100e8b0e push edi */
  push32((uint32_t)(EDI));
  /* 100e8b0f call 0x100ebe00 */
  push32(0x100e8b14u); f_100ebe00();
  /* 100e8b14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e8b17:;
  /* 100e8b17 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100e8b1d push 0x100ee498 */
  push32((uint32_t)(0x100ee498u));
  /* 100e8b22 push eax */
  push32((uint32_t)(EAX));
  /* 100e8b23 call 0x100e9af0 */
  push32(0x100e8b28u); f_100e9af0();
  /* 100e8b28 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100e8b2e push edi */
  push32((uint32_t)(EDI));
  /* 100e8b2f push eax */
  push32((uint32_t)(EAX));
  /* 100e8b30 call 0x100e9b00 */
  push32(0x100e8b35u); f_100e9b00();
  /* 100e8b35 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100e8b3b push 0x100ee494 */
  push32((uint32_t)(0x100ee494u));
  /* 100e8b40 push eax */
  push32((uint32_t)(EAX));
  /* 100e8b41 call 0x100e9b00 */
  push32(0x100e8b46u); f_100e9b00();
  /* 100e8b46 push dword ptr [esi + 0x100f06c4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x100f06c4))));
  /* 100e8b4c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100e8b52 push eax */
  push32((uint32_t)(EAX));
  /* 100e8b53 call 0x100e9b00 */
  push32(0x100e8b58u); f_100e9b00();
  /* 100e8b58 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 100e8b5d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100e8b63 push 0x100ee46c */
  push32((uint32_t)(0x100ee46cu));
  /* 100e8b68 push eax */
  push32((uint32_t)(EAX));
  /* 100e8b69 call 0x100ebd74 */
  push32(0x100e8b6eu); f_100ebd74();
  /* 100e8b6e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8b71 pop edi */
  EDI = (pop32());
  /* 100e8b72 jmp 0x100e8b9a */
  goto L_100e8b9a;
L_100e8b74:;
  /* 100e8b74 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100e8b77 lea esi, [esi + 0x100f06c4] */
  ESI = ((uint32_t)(ESI + 0x100f06c4));
  /* 100e8b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 100e8b7f push eax */
  push32((uint32_t)(EAX));
  /* 100e8b80 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100e8b82 call 0x100e9040 */
  push32(0x100e8b87u); f_100e9040();
  /* 100e8b87 pop ecx */
  ECX = (pop32());
  /* 100e8b88 push eax */
  push32((uint32_t)(EAX));
  /* 100e8b89 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100e8b8b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 100e8b8d call dword ptr [0x100ee044] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee044))), 0x100e8b93u);
  /* 100e8b93 push eax */
  push32((uint32_t)(EAX));
  /* 100e8b94 call dword ptr [0x100ee084] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee084))), 0x100e8b9au);
L_100e8b9a:;
  /* 100e8b9a pop esi */
  ESI = (pop32());
  /* 100e8b9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e8b9c ret  */
  ESPCHK(0x100e8a4au, _esp0);
  ESP += 4; return;
}

/* FUN_10008b9d @ 0x100e8b9d (101 bytes, 34 insns) */
void f_100e8b9d(void) {
  FTRACE(0x100e8b9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8b9d push esi */
  push32((uint32_t)(ESI));
  /* 100e8b9e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100e8ba2 cmp esi, dword ptr [0x100f7d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100f7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8ba8 jae 0x100e8bea */
  if (!C.cf) goto L_100e8bea;
  /* 100e8baa mov ecx, esi */
  ECX = (ESI);
  /* 100e8bac mov eax, esi */
  EAX = (ESI);
  /* 100e8bae sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100e8bb1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100e8bb4 mov ecx, dword ptr [ecx*4 + 0x100f7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100f7c40)));
  /* 100e8bbb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100e8bbe test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100e8bc3 je 0x100e8bea */
  if (C.zf) goto L_100e8bea;
  /* 100e8bc5 push edi */
  push32((uint32_t)(EDI));
  /* 100e8bc6 push esi */
  push32((uint32_t)(ESI));
  /* 100e8bc7 call 0x100ec044 */
  push32(0x100e8bccu); f_100ec044();
  /* 100e8bcc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100e8bd0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100e8bd4 push esi */
  push32((uint32_t)(ESI));
  /* 100e8bd5 call 0x100e8c02 */
  push32(0x100e8bdau); f_100e8c02();
  /* 100e8bda push esi */
  push32((uint32_t)(ESI));
  /* 100e8bdb mov edi, eax */
  EDI = (EAX);
  /* 100e8bdd call 0x100ec0a3 */
  push32(0x100e8be2u); f_100ec0a3();
  /* 100e8be2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8be5 mov eax, edi */
  EAX = (EDI);
  /* 100e8be7 pop edi */
  EDI = (pop32());
  /* 100e8be8 pop esi */
  ESI = (pop32());
  /* 100e8be9 ret  */
  ESPCHK(0x100e8b9du, _esp0);
  ESP += 4; return;
L_100e8bea:;
  /* 100e8bea call 0x100ebf71 */
  push32(0x100e8befu); f_100ebf71();
  /* 100e8bef mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100e8bf5 call 0x100ebf7a */
  push32(0x100e8bfau); f_100ebf7a();
  /* 100e8bfa and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100e8bfd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100e8c00 pop esi */
  ESI = (pop32());
  /* 100e8c01 ret  */
  ESPCHK(0x100e8b9du, _esp0);
  ESP += 4; return;
}

/* FUN_10008c02 @ 0x100e8c02 (115 bytes, 41 insns) */
void f_100e8c02(void) {
  FTRACE(0x100e8c02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8c02 push esi */
  push32((uint32_t)(ESI));
  /* 100e8c03 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100e8c07 push edi */
  push32((uint32_t)(EDI));
  /* 100e8c08 push esi */
  push32((uint32_t)(ESI));
  /* 100e8c09 call 0x100ec002 */
  push32(0x100e8c0eu); f_100ec002();
  /* 100e8c0e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8c11 pop ecx */
  ECX = (pop32());
  /* 100e8c12 jne 0x100e8c21 */
  if (!C.zf) goto L_100e8c21;
  /* 100e8c14 call 0x100ebf71 */
  push32(0x100e8c19u); f_100ebf71();
  /* 100e8c19 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100e8c1f jmp 0x100e8c4e */
  goto L_100e8c4e;
L_100e8c21:;
  /* 100e8c21 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 100e8c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e8c27 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100e8c2b push eax */
  push32((uint32_t)(EAX));
  /* 100e8c2c call dword ptr [0x100ee000] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee000))), 0x100e8c32u);
  /* 100e8c32 mov edi, eax */
  EDI = (EAX);
  /* 100e8c34 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8c37 jne 0x100e8c41 */
  if (!C.zf) goto L_100e8c41;
  /* 100e8c39 call dword ptr [0x100ee03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee03c))), 0x100e8c3fu);
  /* 100e8c3f jmp 0x100e8c43 */
  goto L_100e8c43;
L_100e8c41:;
  /* 100e8c41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100e8c43:;
  /* 100e8c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8c45 je 0x100e8c53 */
  if (C.zf) goto L_100e8c53;
  /* 100e8c47 push eax */
  push32((uint32_t)(EAX));
  /* 100e8c48 call 0x100ebefe */
  push32(0x100e8c4du); f_100ebefe();
  /* 100e8c4d pop ecx */
  ECX = (pop32());
L_100e8c4e:;
  /* 100e8c4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100e8c51 jmp 0x100e8c72 */
  goto L_100e8c72;
L_100e8c53:;
  /* 100e8c53 mov ecx, esi */
  ECX = (ESI);
  /* 100e8c55 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 100e8c58 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100e8c5b mov eax, esi */
  EAX = (ESI);
  /* 100e8c5d mov ecx, dword ptr [ecx*4 + 0x100f7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100f7c40)));
  /* 100e8c64 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100e8c67 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 100e8c6c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 100e8c70 mov eax, edi */
  EAX = (EDI);
L_100e8c72:;
  /* 100e8c72 pop edi */
  EDI = (pop32());
  /* 100e8c73 pop esi */
  ESI = (pop32());
  /* 100e8c74 ret  */
  ESPCHK(0x100e8c02u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c75 @ 0x100e8c75 (101 bytes, 34 insns) */
void f_100e8c75(void) {
  FTRACE(0x100e8c75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8c75 push esi */
  push32((uint32_t)(ESI));
  /* 100e8c76 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100e8c7a cmp esi, dword ptr [0x100f7d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100f7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8c80 jae 0x100e8cc2 */
  if (!C.cf) goto L_100e8cc2;
  /* 100e8c82 mov ecx, esi */
  ECX = (ESI);
  /* 100e8c84 mov eax, esi */
  EAX = (ESI);
  /* 100e8c86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100e8c89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100e8c8c mov ecx, dword ptr [ecx*4 + 0x100f7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100f7c40)));
  /* 100e8c93 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100e8c96 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100e8c9b je 0x100e8cc2 */
  if (C.zf) goto L_100e8cc2;
  /* 100e8c9d push edi */
  push32((uint32_t)(EDI));
  /* 100e8c9e push esi */
  push32((uint32_t)(ESI));
  /* 100e8c9f call 0x100ec044 */
  push32(0x100e8ca4u); f_100ec044();
  /* 100e8ca4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100e8ca8 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100e8cac push esi */
  push32((uint32_t)(ESI));
  /* 100e8cad call 0x100e8cda */
  push32(0x100e8cb2u); f_100e8cda();
  /* 100e8cb2 push esi */
  push32((uint32_t)(ESI));
  /* 100e8cb3 mov edi, eax */
  EDI = (EAX);
  /* 100e8cb5 call 0x100ec0a3 */
  push32(0x100e8cbau); f_100ec0a3();
  /* 100e8cba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8cbd mov eax, edi */
  EAX = (EDI);
  /* 100e8cbf pop edi */
  EDI = (pop32());
  /* 100e8cc0 pop esi */
  ESI = (pop32());
  /* 100e8cc1 ret  */
  ESPCHK(0x100e8c75u, _esp0);
  ESP += 4; return;
L_100e8cc2:;
  /* 100e8cc2 call 0x100ebf71 */
  push32(0x100e8cc7u); f_100ebf71();
  /* 100e8cc7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100e8ccd call 0x100ebf7a */
  push32(0x100e8cd2u); f_100ebf7a();
  /* 100e8cd2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100e8cd5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100e8cd8 pop esi */
  ESI = (pop32());
  /* 100e8cd9 ret  */
  ESPCHK(0x100e8c75u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cda @ 0x100e8cda (395 bytes, 135 insns) */
void f_100e8cda(void) {
  FTRACE(0x100e8cdau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8cda push ebp */
  push32((uint32_t)(EBP));
  /* 100e8cdb mov ebp, esp */
  EBP = (ESP);
  /* 100e8cdd sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e8ce3 push ebx */
  push32((uint32_t)(EBX));
  /* 100e8ce4 push esi */
  push32((uint32_t)(ESI));
  /* 100e8ce5 push edi */
  push32((uint32_t)(EDI));
  /* 100e8ce6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100e8ce8 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8ceb mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 100e8cee mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 100e8cf1 jne 0x100e8cfa */
  if (!C.zf) goto L_100e8cfa;
L_100e8cf3:;
  /* 100e8cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e8cf5 jmp 0x100e8e60 */
  goto L_100e8e60;
L_100e8cfa:;
  /* 100e8cfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e8cfd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100e8d00 lea ebx, [eax*4 + 0x100f7c40] */
  EBX = ((uint32_t)(EAX*4 + 0x100f7c40));
  /* 100e8d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e8d0a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100e8d0d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 100e8d10 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100e8d12 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100e8d15 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100e8d1a je 0x100e8d2a */
  if (C.zf) goto L_100e8d2a;
  /* 100e8d1c push 2 */
  push32((uint32_t)(0x2u));
  /* 100e8d1e push edi */
  push32((uint32_t)(EDI));
  /* 100e8d1f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e8d22 call 0x100e8c02 */
  push32(0x100e8d27u); f_100e8c02();
  /* 100e8d27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e8d2a:;
  /* 100e8d2a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100e8d2c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8d2e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100e8d32 je 0x100e8df9 */
  if (C.zf) goto L_100e8df9;
  /* 100e8d38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e8d3b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8d3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100e8d41 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 100e8d44 jbe 0x100e8e34 */
  if ((C.cf||C.zf)) goto L_100e8e34;
L_100e8d4a:;
  /* 100e8d4a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_100e8d50:;
  /* 100e8d50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100e8d53 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e8d56 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8d59 jae 0x100e8d84 */
  if (!C.cf) goto L_100e8d84;
  /* 100e8d5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100e8d5e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100e8d61 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 100e8d63 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8d66 jne 0x100e8d6f */
  if (!C.zf) goto L_100e8d6f;
  /* 100e8d68 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 100e8d6b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 100e8d6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_100e8d6f:;
  /* 100e8d6f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100e8d71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e8d72 mov ecx, eax */
  ECX = (EAX);
  /* 100e8d74 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 100e8d7a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e8d7c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8d82 jl 0x100e8d50 */
  if ((C.sf!=C.of)) goto L_100e8d50;
L_100e8d84:;
  /* 100e8d84 mov edi, eax */
  EDI = (EAX);
  /* 100e8d86 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 100e8d8c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e8d8e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e8d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e8d93 push eax */
  push32((uint32_t)(EAX));
  /* 100e8d94 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 100e8d9a push edi */
  push32((uint32_t)(EDI));
  /* 100e8d9b push eax */
  push32((uint32_t)(EAX));
  /* 100e8d9c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100e8d9e push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 100e8da1 call dword ptr [0x100ee084] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee084))), 0x100e8da7u);
  /* 100e8da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8da9 je 0x100e8dee */
  if (C.zf) goto L_100e8dee;
  /* 100e8dab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100e8dae add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100e8db1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8db3 jl 0x100e8dc0 */
  if ((C.sf!=C.of)) goto L_100e8dc0;
  /* 100e8db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100e8db8 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e8dbb cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8dbe jb 0x100e8d4a */
  if (C.cf) goto L_100e8d4a;
L_100e8dc0:;
  /* 100e8dc0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_100e8dc2:;
  /* 100e8dc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100e8dc5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8dc7 jne 0x100e8e5d */
  if (!C.zf) goto L_100e8e5d;
  /* 100e8dcd cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8dd0 je 0x100e8e34 */
  if (C.zf) goto L_100e8e34;
  /* 100e8dd2 push 5 */
  push32((uint32_t)(0x5u));
  /* 100e8dd4 pop esi */
  ESI = (pop32());
  /* 100e8dd5 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8dd8 jne 0x100e8e26 */
  if (!C.zf) goto L_100e8e26;
  /* 100e8dda call 0x100ebf71 */
  push32(0x100e8ddfu); f_100ebf71();
  /* 100e8ddf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100e8de5 call 0x100ebf7a */
  push32(0x100e8deau); f_100ebf7a();
  /* 100e8dea mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 100e8dec jmp 0x100e8e2f */
  goto L_100e8e2f;
L_100e8dee:;
  /* 100e8dee call dword ptr [0x100ee03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee03c))), 0x100e8df4u);
  /* 100e8df4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 100e8df7 jmp 0x100e8dc0 */
  goto L_100e8dc0;
L_100e8df9:;
  /* 100e8df9 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 100e8dfc push edi */
  push32((uint32_t)(EDI));
  /* 100e8dfd push ecx */
  push32((uint32_t)(ECX));
  /* 100e8dfe push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100e8e01 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e8e04 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 100e8e06 call dword ptr [0x100ee084] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee084))), 0x100e8e0cu);
  /* 100e8e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8e0e je 0x100e8e1b */
  if (C.zf) goto L_100e8e1b;
  /* 100e8e10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100e8e13 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 100e8e16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100e8e19 jmp 0x100e8dc2 */
  goto L_100e8dc2;
L_100e8e1b:;
  /* 100e8e1b call dword ptr [0x100ee03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee03c))), 0x100e8e21u);
  /* 100e8e21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 100e8e24 jmp 0x100e8dc2 */
  goto L_100e8dc2;
L_100e8e26:;
  /* 100e8e26 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e8e29 call 0x100ebefe */
  push32(0x100e8e2eu); f_100ebefe();
  /* 100e8e2e pop ecx */
  ECX = (pop32());
L_100e8e2f:;
  /* 100e8e2f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100e8e32 jmp 0x100e8e60 */
  goto L_100e8e60;
L_100e8e34:;
  /* 100e8e34 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100e8e36 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100e8e3b je 0x100e8e49 */
  if (C.zf) goto L_100e8e49;
  /* 100e8e3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e8e40 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e8e43 je 0x100e8cf3 */
  if (C.zf) goto L_100e8cf3;
L_100e8e49:;
  /* 100e8e49 call 0x100ebf71 */
  push32(0x100e8e4eu); f_100ebf71();
  /* 100e8e4e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 100e8e54 call 0x100ebf7a */
  push32(0x100e8e59u); f_100ebf7a();
  /* 100e8e59 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 100e8e5b jmp 0x100e8e2f */
  goto L_100e8e2f;
L_100e8e5d:;
  /* 100e8e5d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_100e8e60:;
  /* 100e8e60 pop edi */
  EDI = (pop32());
  /* 100e8e61 pop esi */
  ESI = (pop32());
  /* 100e8e62 pop ebx */
  EBX = (pop32());
  /* 100e8e63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e8e64 ret  */
  ESPCHK(0x100e8cdau, _esp0);
  ESP += 4; return;
}

/* FUN_10008e65 @ 0x100e8e65 (68 bytes, 19 insns) */
void f_100e8e65(void) {
  FTRACE(0x100e8e65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8e65 inc dword ptr [0x100f67a8] */
  { uint32_t _r=(r32((uint32_t)(0x100f67a8)))+1; w32((uint32_t)(0x100f67a8), (_r)); fl_inc(_r,32); }
  /* 100e8e6b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100e8e70 call 0x100ea2af */
  push32(0x100e8e75u); f_100ea2af();
  /* 100e8e75 pop ecx */
  ECX = (pop32());
  /* 100e8e76 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e8e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e8e7c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 100e8e7f je 0x100e8e8e */
  if (C.zf) goto L_100e8e8e;
  /* 100e8e81 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 100e8e85 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 100e8e8c jmp 0x100e8e9f */
  goto L_100e8e9f;
L_100e8e8e:;
  /* 100e8e8e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 100e8e92 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 100e8e95 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 100e8e98 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_100e8e9f:;
  /* 100e8e9f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 100e8ea2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100e8ea6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 100e8ea8 ret  */
  ESPCHK(0x100e8e65u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ea9 @ 0x100e8ea9 (41 bytes, 13 insns) */
void f_100e8ea9(void) {
  FTRACE(0x100e8ea9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8ea9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e8ead cmp eax, dword ptr [0x100f7d40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x100f7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8eb3 jb 0x100e8eb8 */
  if (C.cf) goto L_100e8eb8;
  /* 100e8eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e8eb7 ret  */
  ESPCHK(0x100e8ea9u, _esp0);
  ESP += 4; return;
L_100e8eb8:;
  /* 100e8eb8 mov ecx, eax */
  ECX = (EAX);
  /* 100e8eba and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100e8ebd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100e8ec0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100e8ec3 mov ecx, dword ptr [ecx*4 + 0x100f7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100f7c40)));
  /* 100e8eca mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 100e8ece and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 100e8ed1 ret  */
  ESPCHK(0x100e8ea9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f8e @ 0x100e8f8e (47 bytes, 17 insns) */
void f_100e8f8e(void) {
  FTRACE(0x100e8f8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8f8e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e8f92 mov ecx, 0x100f0750 */
  ECX = (0x100f0750u);
  /* 100e8f97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8f99 jb 0x100e8fb2 */
  if (C.cf) goto L_100e8fb2;
  /* 100e8f9b cmp eax, 0x100f09b0 */
  { uint32_t _a=(EAX),_b=(0x100f09b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8fa0 ja 0x100e8fb2 */
  if ((!C.cf&&!C.zf)) goto L_100e8fb2;
  /* 100e8fa2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e8fa4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100e8fa7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8faa push eax */
  push32((uint32_t)(EAX));
  /* 100e8fab call 0x100ea013 */
  push32(0x100e8fb0u); f_100ea013();
  /* 100e8fb0 pop ecx */
  ECX = (pop32());
  /* 100e8fb1 ret  */
  ESPCHK(0x100e8f8eu, _esp0);
  ESP += 4; return;
L_100e8fb2:;
  /* 100e8fb2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8fb5 push eax */
  push32((uint32_t)(EAX));
  /* 100e8fb6 call dword ptr [0x100ee00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee00c))), 0x100e8fbcu);
  /* 100e8fbc ret  */
  ESPCHK(0x100e8f8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fbd @ 0x100e8fbd (35 bytes, 13 insns) */
void f_100e8fbd(void) {
  FTRACE(0x100e8fbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8fbd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e8fc1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8fc4 jge 0x100e8fd1 */
  if ((C.sf==C.of)) goto L_100e8fd1;
  /* 100e8fc6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8fc9 push eax */
  push32((uint32_t)(EAX));
  /* 100e8fca call 0x100ea013 */
  push32(0x100e8fcfu); f_100ea013();
  /* 100e8fcf pop ecx */
  ECX = (pop32());
  /* 100e8fd0 ret  */
  ESPCHK(0x100e8fbdu, _esp0);
  ESP += 4; return;
L_100e8fd1:;
  /* 100e8fd1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e8fd5 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8fd8 push eax */
  push32((uint32_t)(EAX));
  /* 100e8fd9 call dword ptr [0x100ee00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee00c))), 0x100e8fdfu);
  /* 100e8fdf ret  */
  ESPCHK(0x100e8fbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fe0 @ 0x100e8fe0 (47 bytes, 17 insns) */
void f_100e8fe0(void) {
  FTRACE(0x100e8fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e8fe0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e8fe4 mov ecx, 0x100f0750 */
  ECX = (0x100f0750u);
  /* 100e8fe9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8feb jb 0x100e9004 */
  if (C.cf) goto L_100e9004;
  /* 100e8fed cmp eax, 0x100f09b0 */
  { uint32_t _a=(EAX),_b=(0x100f09b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e8ff2 ja 0x100e9004 */
  if ((!C.cf&&!C.zf)) goto L_100e9004;
  /* 100e8ff4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e8ff6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100e8ff9 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e8ffc push eax */
  push32((uint32_t)(EAX));
  /* 100e8ffd call 0x100ea074 */
  push32(0x100e9002u); f_100ea074();
  /* 100e9002 pop ecx */
  ECX = (pop32());
  /* 100e9003 ret  */
  ESPCHK(0x100e8fe0u, _esp0);
  ESP += 4; return;
L_100e9004:;
  /* 100e9004 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9007 push eax */
  push32((uint32_t)(EAX));
  /* 100e9008 call dword ptr [0x100ee008] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee008))), 0x100e900eu);
  /* 100e900e ret  */
  ESPCHK(0x100e8fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000900f @ 0x100e900f (35 bytes, 13 insns) */
void f_100e900f(void) {
  FTRACE(0x100e900fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e900f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e9013 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9016 jge 0x100e9023 */
  if ((C.sf==C.of)) goto L_100e9023;
  /* 100e9018 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e901b push eax */
  push32((uint32_t)(EAX));
  /* 100e901c call 0x100ea074 */
  push32(0x100e9021u); f_100ea074();
  /* 100e9021 pop ecx */
  ECX = (pop32());
  /* 100e9022 ret  */
  ESPCHK(0x100e900fu, _esp0);
  ESP += 4; return;
L_100e9023:;
  /* 100e9023 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e9027 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e902a push eax */
  push32((uint32_t)(EAX));
  /* 100e902b call dword ptr [0x100ee008] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee008))), 0x100e9031u);
  /* 100e9031 ret  */
  ESPCHK(0x100e900fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x100e9040 (123 bytes, 44 insns) */
void f_100e9040(void) {
  FTRACE(0x100e9040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9040 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e9044 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100e904a je 0x100e9060 */
  if (C.zf) goto L_100e9060;
L_100e904c:;
  /* 100e904c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100e904e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100e904f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e9051 je 0x100e9093 */
  if (C.zf) goto L_100e9093;
  /* 100e9053 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100e9059 jne 0x100e904c */
  if (!C.zf) goto L_100e904c;
  /* 100e905b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100e9060:;
  /* 100e9060 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 100e9062 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100e9067 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9069 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100e906c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100e906e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9071 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100e9076 je 0x100e9060 */
  if (C.zf) goto L_100e9060;
  /* 100e9078 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 100e907b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e907d je 0x100e90b1 */
  if (C.zf) goto L_100e90b1;
  /* 100e907f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100e9081 je 0x100e90a7 */
  if (C.zf) goto L_100e90a7;
  /* 100e9083 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 100e9088 je 0x100e909d */
  if (C.zf) goto L_100e909d;
  /* 100e908a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 100e908f je 0x100e9093 */
  if (C.zf) goto L_100e9093;
  /* 100e9091 jmp 0x100e9060 */
  goto L_100e9060;
L_100e9093:;
  /* 100e9093 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 100e9096 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e909a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e909c ret  */
  ESPCHK(0x100e9040u, _esp0);
  ESP += 4; return;
L_100e909d:;
  /* 100e909d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 100e90a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e90a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e90a6 ret  */
  ESPCHK(0x100e9040u, _esp0);
  ESP += 4; return;
L_100e90a7:;
  /* 100e90a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 100e90aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e90ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e90b0 ret  */
  ESPCHK(0x100e9040u, _esp0);
  ESP += 4; return;
L_100e90b1:;
  /* 100e90b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 100e90b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e90b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e90ba ret  */
  ESPCHK(0x100e9040u, _esp0);
  ESP += 4; return;
}

/* FUN_100090bb @ 0x100e90bb (89 bytes, 39 insns) */
void f_100e90bb(void) {
  FTRACE(0x100e90bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e90bb push ebp */
  push32((uint32_t)(EBP));
  /* 100e90bc mov ebp, esp */
  EBP = (ESP);
  /* 100e90be push ebx */
  push32((uint32_t)(EBX));
  /* 100e90bf push esi */
  push32((uint32_t)(ESI));
  /* 100e90c0 mov esi, 0x100f69b4 */
  ESI = (0x100f69b4u);
  /* 100e90c5 push edi */
  push32((uint32_t)(EDI));
  /* 100e90c6 push esi */
  push32((uint32_t)(ESI));
  /* 100e90c7 call dword ptr [0x100ee090] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee090))), 0x100e90cdu);
  /* 100e90cd mov edi, dword ptr [0x100ee08c] */
  EDI = (r32((uint32_t)(0x100ee08c)));
  /* 100e90d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100e90d5 cmp dword ptr [0x100f69b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100f69b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e90db je 0x100e90eb */
  if (C.zf) goto L_100e90eb;
  /* 100e90dd push esi */
  push32((uint32_t)(ESI));
  /* 100e90de call edi */
  call_ind((uint32_t)(EDI), 0x100e90e0u);
  /* 100e90e0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100e90e2 call 0x100ea013 */
  push32(0x100e90e7u); f_100ea013();
  /* 100e90e7 pop ecx */
  ECX = (pop32());
  /* 100e90e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e90ea pop ebx */
  EBX = (pop32());
L_100e90eb:;
  /* 100e90eb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e90ee push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e90f1 call 0x100e9114 */
  push32(0x100e90f6u); f_100e9114();
  /* 100e90f6 pop ecx */
  ECX = (pop32());
  /* 100e90f7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100e90fa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100e90fc pop ecx */
  ECX = (pop32());
  /* 100e90fd je 0x100e9109 */
  if (C.zf) goto L_100e9109;
  /* 100e90ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100e9101 call 0x100ea074 */
  push32(0x100e9106u); f_100ea074();
  /* 100e9106 pop ecx */
  ECX = (pop32());
  /* 100e9107 jmp 0x100e910c */
  goto L_100e910c;
L_100e9109:;
  /* 100e9109 push esi */
  push32((uint32_t)(ESI));
  /* 100e910a call edi */
  call_ind((uint32_t)(EDI), 0x100e910cu);
L_100e910c:;
  /* 100e910c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e910f pop edi */
  EDI = (pop32());
  /* 100e9110 pop esi */
  ESI = (pop32());
  /* 100e9111 pop ebx */
  EBX = (pop32());
  /* 100e9112 pop ebp */
  EBP = (pop32());
  /* 100e9113 ret  */
  ESPCHK(0x100e90bbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009114 @ 0x100e9114 (105 bytes, 38 insns) */
void f_100e9114(void) {
  FTRACE(0x100e9114u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9114 push ebp */
  push32((uint32_t)(EBP));
  /* 100e9115 mov ebp, esp */
  EBP = (ESP);
  /* 100e9117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e911a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e911c jne 0x100e9120 */
  if (!C.zf) goto L_100e9120;
  /* 100e911e pop ebp */
  EBP = (pop32());
  /* 100e911f ret  */
  ESPCHK(0x100e9114u, _esp0);
  ESP += 4; return;
L_100e9120:;
  /* 100e9120 cmp dword ptr [0x100f6838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100f6838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9127 jne 0x100e913b */
  if (!C.zf) goto L_100e913b;
  /* 100e9129 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 100e912d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100e9132 ja 0x100e916d */
  if ((!C.cf&&!C.zf)) goto L_100e916d;
  /* 100e9134 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e9136 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100e9138 pop eax */
  EAX = (pop32());
  /* 100e9139 pop ebp */
  EBP = (pop32());
  /* 100e913a ret  */
  ESPCHK(0x100e9114u, _esp0);
  ESP += 4; return;
L_100e913b:;
  /* 100e913b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 100e913e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 100e9142 push ecx */
  push32((uint32_t)(ECX));
  /* 100e9143 push 0 */
  push32((uint32_t)(0x0u));
  /* 100e9145 push dword ptr [0x100f0be0] */
  push32((uint32_t)(r32((uint32_t)(0x100f0be0))));
  /* 100e914b push eax */
  push32((uint32_t)(EAX));
  /* 100e914c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 100e914f push 1 */
  push32((uint32_t)(0x1u));
  /* 100e9151 push eax */
  push32((uint32_t)(EAX));
  /* 100e9152 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 100e9157 push dword ptr [0x100f6848] */
  push32((uint32_t)(r32((uint32_t)(0x100f6848))));
  /* 100e915d call dword ptr [0x100ee060] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee060))), 0x100e9163u);
  /* 100e9163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e9165 je 0x100e916d */
  if (C.zf) goto L_100e916d;
  /* 100e9167 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e916b je 0x100e917b */
  if (C.zf) goto L_100e917b;
L_100e916d:;
  /* 100e916d call 0x100ebf71 */
  push32(0x100e9172u); f_100ebf71();
  /* 100e9172 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 100e9178 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100e917b:;
  /* 100e917b pop ebp */
  EBP = (pop32());
  /* 100e917c ret  */
  ESPCHK(0x100e9114u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x100e9180 (104 bytes, 43 insns) */
void f_100e9180(void) {
  FTRACE(0x100e9180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9180 push ebx */
  push32((uint32_t)(EBX));
  /* 100e9181 push esi */
  push32((uint32_t)(ESI));
  /* 100e9182 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 100e9186 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e9188 jne 0x100e91a2 */
  if (!C.zf) goto L_100e91a2;
  /* 100e918a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 100e918e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100e9192 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100e9194 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e9196 mov ebx, eax */
  EBX = (EAX);
  /* 100e9198 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100e919c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e919e mov edx, ebx */
  EDX = (EBX);
  /* 100e91a0 jmp 0x100e91e3 */
  goto L_100e91e3;
L_100e91a2:;
  /* 100e91a2 mov ecx, eax */
  ECX = (EAX);
  /* 100e91a4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100e91a8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 100e91ac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_100e91b0:;
  /* 100e91b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100e91b2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 100e91b4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100e91b6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 100e91b8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100e91ba jne 0x100e91b0 */
  if (!C.zf) goto L_100e91b0;
  /* 100e91bc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e91be mov esi, eax */
  ESI = (EAX);
  /* 100e91c0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100e91c4 mov ecx, eax */
  ECX = (EAX);
  /* 100e91c6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100e91ca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100e91cc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e91ce jb 0x100e91de */
  if (C.cf) goto L_100e91de;
  /* 100e91d0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e91d4 ja 0x100e91de */
  if ((!C.cf&&!C.zf)) goto L_100e91de;
  /* 100e91d6 jb 0x100e91df */
  if (C.cf) goto L_100e91df;
  /* 100e91d8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e91dc jbe 0x100e91df */
  if ((C.cf||C.zf)) goto L_100e91df;
L_100e91de:;
  /* 100e91de dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_100e91df:;
  /* 100e91df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100e91e1 mov eax, esi */
  EAX = (ESI);
L_100e91e3:;
  /* 100e91e3 pop esi */
  ESI = (pop32());
  /* 100e91e4 pop ebx */
  EBX = (pop32());
  /* 100e91e5 ret 0x10 */
  ESPCHK(0x100e9180u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x100e91f0 (117 bytes, 44 insns) */
void f_100e91f0(void) {
  FTRACE(0x100e91f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e91f0 push ebx */
  push32((uint32_t)(EBX));
  /* 100e91f1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100e91f5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e91f7 jne 0x100e9211 */
  if (!C.zf) goto L_100e9211;
  /* 100e91f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 100e91fd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100e9201 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100e9203 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e9205 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e9209 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e920b mov eax, edx */
  EAX = (EDX);
  /* 100e920d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100e920f jmp 0x100e9261 */
  goto L_100e9261;
L_100e9211:;
  /* 100e9211 mov ecx, eax */
  ECX = (EAX);
  /* 100e9213 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 100e9217 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 100e921b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_100e921f:;
  /* 100e921f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100e9221 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 100e9223 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100e9225 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 100e9227 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100e9229 jne 0x100e921f */
  if (!C.zf) goto L_100e921f;
  /* 100e922b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e922d mov ecx, eax */
  ECX = (EAX);
  /* 100e922f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100e9233 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 100e9234 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100e9238 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e923a jb 0x100e924a */
  if (C.cf) goto L_100e924a;
  /* 100e923c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9240 ja 0x100e924a */
  if ((!C.cf&&!C.zf)) goto L_100e924a;
  /* 100e9242 jb 0x100e9252 */
  if (C.cf) goto L_100e9252;
  /* 100e9244 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9248 jbe 0x100e9252 */
  if ((C.cf||C.zf)) goto L_100e9252;
L_100e924a:;
  /* 100e924a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e924e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_100e9252:;
  /* 100e9252 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9256 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e925a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 100e925c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100e925e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_100e9261:;
  /* 100e9261 pop ebx */
  EBX = (pop32());
  /* 100e9262 ret 0x10 */
  ESPCHK(0x100e91f0u, _esp0);
  ESP += 20; return;
}

