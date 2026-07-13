#include "recomp.h"

/* ProcessAI @ 0x100a1000 (16 bytes, 3 insns) */
void f_100a1000(void) {
  FTRACE(0x100a1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a1000 call dword ptr [0x100b64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d0))), 0x100a1006u);
  /* 100a1006 mov dword ptr [0x100b6284], eax */
  w32((uint32_t)(0x100b6284), (EAX));
  /* 100a100b jmp 0x100a6d20 */
  f_100a6d20(); return;
}

/* InitAI @ 0x100a1010 (5566 bytes, 1459 insns) */
void f_100a1010(void) {
  FTRACE(0x100a1010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a1010 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1015 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a1018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a101a je 0x100a1078 */
  if (C.zf) goto L_100a1078;
  /* 100a101c push 0x100afec4 */
  push32((uint32_t)(0x100afec4u));
  /* 100a1021 push 0x100b6058 */
  push32((uint32_t)(0x100b6058u));
  /* 100a1026 call eax */
  call_ind((uint32_t)(EAX), 0x100a1028u);
  /* 100a1028 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a102d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1032 je 0x100a1078 */
  if (C.zf) goto L_100a1078;
  /* 100a1034 push 0x100afebc */
  push32((uint32_t)(0x100afebcu));
  /* 100a1039 push 0x100b5ff8 */
  push32((uint32_t)(0x100b5ff8u));
  /* 100a103e call eax */
  call_ind((uint32_t)(EAX), 0x100a1040u);
  /* 100a1040 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a104a je 0x100a1078 */
  if (C.zf) goto L_100a1078;
  /* 100a104c push 0x100afeb4 */
  push32((uint32_t)(0x100afeb4u));
  /* 100a1051 push 0x100b6050 */
  push32((uint32_t)(0x100b6050u));
  /* 100a1056 call eax */
  call_ind((uint32_t)(EAX), 0x100a1058u);
  /* 100a1058 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1062 je 0x100a1078 */
  if (C.zf) goto L_100a1078;
  /* 100a1064 push 0x100afeac */
  push32((uint32_t)(0x100afeacu));
  /* 100a1069 push 0x100b6060 */
  push32((uint32_t)(0x100b6060u));
  /* 100a106e call eax */
  call_ind((uint32_t)(EAX), 0x100a1070u);
  /* 100a1070 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a1078:;
  /* 100a1078 mov ecx, dword ptr [0x100b63c8] */
  ECX = (r32((uint32_t)(0x100b63c8)));
  /* 100a107e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100a1080 je 0x100a1096 */
  if (C.zf) goto L_100a1096;
  /* 100a1082 push 0x100afea0 */
  push32((uint32_t)(0x100afea0u));
  /* 100a1087 push 0x100b3660 */
  push32((uint32_t)(0x100b3660u));
  /* 100a108c call ecx */
  call_ind((uint32_t)(ECX), 0x100a108eu);
  /* 100a108e mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a1096:;
  /* 100a1096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1098 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a109e push 0x100afe8c */
  push32((uint32_t)(0x100afe8cu));
  /* 100a10a3 push 0x100b38d0 */
  push32((uint32_t)(0x100b38d0u));
  /* 100a10a8 call eax */
  call_ind((uint32_t)(EAX), 0x100a10aau);
  /* 100a10aa mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a10af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a10b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a10b4 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a10ba push 0x100afe78 */
  push32((uint32_t)(0x100afe78u));
  /* 100a10bf push 0x100b38c8 */
  push32((uint32_t)(0x100b38c8u));
  /* 100a10c4 call eax */
  call_ind((uint32_t)(EAX), 0x100a10c6u);
  /* 100a10c6 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a10cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a10ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a10d0 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a10d6 push 0x100afe64 */
  push32((uint32_t)(0x100afe64u));
  /* 100a10db push 0x100b38c0 */
  push32((uint32_t)(0x100b38c0u));
  /* 100a10e0 call eax */
  call_ind((uint32_t)(EAX), 0x100a10e2u);
  /* 100a10e2 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a10e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a10ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a10ec je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a10f2 push 0x100afe50 */
  push32((uint32_t)(0x100afe50u));
  /* 100a10f7 push 0x100b3908 */
  push32((uint32_t)(0x100b3908u));
  /* 100a10fc call eax */
  call_ind((uint32_t)(EAX), 0x100a10feu);
  /* 100a10fe mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1108 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a110e push 0x100afe3c */
  push32((uint32_t)(0x100afe3cu));
  /* 100a1113 push 0x100b38f8 */
  push32((uint32_t)(0x100b38f8u));
  /* 100a1118 call eax */
  call_ind((uint32_t)(EAX), 0x100a111au);
  /* 100a111a mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a111f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1124 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a112a push 0x100afe28 */
  push32((uint32_t)(0x100afe28u));
  /* 100a112f push 0x100b38f0 */
  push32((uint32_t)(0x100b38f0u));
  /* 100a1134 call eax */
  call_ind((uint32_t)(EAX), 0x100a1136u);
  /* 100a1136 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a113b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1140 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a1146 push 0x100afe14 */
  push32((uint32_t)(0x100afe14u));
  /* 100a114b push 0x100b36a8 */
  push32((uint32_t)(0x100b36a8u));
  /* 100a1150 call eax */
  call_ind((uint32_t)(EAX), 0x100a1152u);
  /* 100a1152 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a115a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a115c je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a1162 push 0x100afe00 */
  push32((uint32_t)(0x100afe00u));
  /* 100a1167 push 0x100b3698 */
  push32((uint32_t)(0x100b3698u));
  /* 100a116c call eax */
  call_ind((uint32_t)(EAX), 0x100a116eu);
  /* 100a116e mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1178 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a117e push 0x100afdec */
  push32((uint32_t)(0x100afdecu));
  /* 100a1183 push 0x100b3890 */
  push32((uint32_t)(0x100b3890u));
  /* 100a1188 call eax */
  call_ind((uint32_t)(EAX), 0x100a118au);
  /* 100a118a mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1194 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a119a push 0x100afdd8 */
  push32((uint32_t)(0x100afdd8u));
  /* 100a119f push 0x100b3888 */
  push32((uint32_t)(0x100b3888u));
  /* 100a11a4 call eax */
  call_ind((uint32_t)(EAX), 0x100a11a6u);
  /* 100a11a6 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a11ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a11ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a11b0 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a11b6 push 0x100afdc4 */
  push32((uint32_t)(0x100afdc4u));
  /* 100a11bb push 0x100b3880 */
  push32((uint32_t)(0x100b3880u));
  /* 100a11c0 call eax */
  call_ind((uint32_t)(EAX), 0x100a11c2u);
  /* 100a11c2 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a11c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a11ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a11cc je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a11d2 push 0x100afdb0 */
  push32((uint32_t)(0x100afdb0u));
  /* 100a11d7 push 0x100b3878 */
  push32((uint32_t)(0x100b3878u));
  /* 100a11dc call eax */
  call_ind((uint32_t)(EAX), 0x100a11deu);
  /* 100a11de mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a11e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a11e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a11e8 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a11ee push 0x100afe8c */
  push32((uint32_t)(0x100afe8cu));
  /* 100a11f3 push 0x100b38d0 */
  push32((uint32_t)(0x100b38d0u));
  /* 100a11f8 call eax */
  call_ind((uint32_t)(EAX), 0x100a11fau);
  /* 100a11fa mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a11ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1204 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a120a push 0x100afe78 */
  push32((uint32_t)(0x100afe78u));
  /* 100a120f push 0x100b38c8 */
  push32((uint32_t)(0x100b38c8u));
  /* 100a1214 call eax */
  call_ind((uint32_t)(EAX), 0x100a1216u);
  /* 100a1216 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a121b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a121e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1220 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a1226 push 0x100afe64 */
  push32((uint32_t)(0x100afe64u));
  /* 100a122b push 0x100b38c0 */
  push32((uint32_t)(0x100b38c0u));
  /* 100a1230 call eax */
  call_ind((uint32_t)(EAX), 0x100a1232u);
  /* 100a1232 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a123c je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a1242 push 0x100afe50 */
  push32((uint32_t)(0x100afe50u));
  /* 100a1247 push 0x100b3908 */
  push32((uint32_t)(0x100b3908u));
  /* 100a124c call eax */
  call_ind((uint32_t)(EAX), 0x100a124eu);
  /* 100a124e mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1258 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a125e push 0x100afe3c */
  push32((uint32_t)(0x100afe3cu));
  /* 100a1263 push 0x100b38f8 */
  push32((uint32_t)(0x100b38f8u));
  /* 100a1268 call eax */
  call_ind((uint32_t)(EAX), 0x100a126au);
  /* 100a126a mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1274 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a127a push 0x100afe28 */
  push32((uint32_t)(0x100afe28u));
  /* 100a127f push 0x100b38f0 */
  push32((uint32_t)(0x100b38f0u));
  /* 100a1284 call eax */
  call_ind((uint32_t)(EAX), 0x100a1286u);
  /* 100a1286 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a128e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1290 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a1296 push 0x100afe14 */
  push32((uint32_t)(0x100afe14u));
  /* 100a129b push 0x100b36a8 */
  push32((uint32_t)(0x100b36a8u));
  /* 100a12a0 call eax */
  call_ind((uint32_t)(EAX), 0x100a12a2u);
  /* 100a12a2 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a12a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a12aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a12ac je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a12ae push 0x100afe00 */
  push32((uint32_t)(0x100afe00u));
  /* 100a12b3 push 0x100b3698 */
  push32((uint32_t)(0x100b3698u));
  /* 100a12b8 call eax */
  call_ind((uint32_t)(EAX), 0x100a12bau);
  /* 100a12ba mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a12bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a12c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a12c4 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a12c6 push 0x100afdec */
  push32((uint32_t)(0x100afdecu));
  /* 100a12cb push 0x100b3890 */
  push32((uint32_t)(0x100b3890u));
  /* 100a12d0 call eax */
  call_ind((uint32_t)(EAX), 0x100a12d2u);
  /* 100a12d2 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a12d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a12da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a12dc je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a12de push 0x100afdd8 */
  push32((uint32_t)(0x100afdd8u));
  /* 100a12e3 push 0x100b3888 */
  push32((uint32_t)(0x100b3888u));
  /* 100a12e8 call eax */
  call_ind((uint32_t)(EAX), 0x100a12eau);
  /* 100a12ea mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a12ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a12f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a12f4 je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a12f6 push 0x100afdc4 */
  push32((uint32_t)(0x100afdc4u));
  /* 100a12fb push 0x100b3880 */
  push32((uint32_t)(0x100b3880u));
  /* 100a1300 call eax */
  call_ind((uint32_t)(EAX), 0x100a1302u);
  /* 100a1302 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a130c je 0x100a1322 */
  if (C.zf) goto L_100a1322;
  /* 100a130e push 0x100afdb0 */
  push32((uint32_t)(0x100afdb0u));
  /* 100a1313 push 0x100b3878 */
  push32((uint32_t)(0x100b3878u));
  /* 100a1318 call eax */
  call_ind((uint32_t)(EAX), 0x100a131au);
  /* 100a131a mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a1322:;
  /* 100a1322 mov ecx, dword ptr [0x100b63c8] */
  ECX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100a132a je 0x100a1340 */
  if (C.zf) goto L_100a1340;
  /* 100a132c push 0x100afda0 */
  push32((uint32_t)(0x100afda0u));
  /* 100a1331 push 0x100b3650 */
  push32((uint32_t)(0x100b3650u));
  /* 100a1336 call ecx */
  call_ind((uint32_t)(ECX), 0x100a1338u);
  /* 100a1338 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a133d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a1340:;
  /* 100a1340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1342 je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a1348 push 0x100afd8c */
  push32((uint32_t)(0x100afd8cu));
  /* 100a134d push 0x100b3628 */
  push32((uint32_t)(0x100b3628u));
  /* 100a1352 call eax */
  call_ind((uint32_t)(EAX), 0x100a1354u);
  /* 100a1354 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a135c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a135e je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a1364 push 0x100afd74 */
  push32((uint32_t)(0x100afd74u));
  /* 100a1369 push 0x100b3620 */
  push32((uint32_t)(0x100b3620u));
  /* 100a136e call eax */
  call_ind((uint32_t)(EAX), 0x100a1370u);
  /* 100a1370 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a137a je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a1380 push 0x100afd5c */
  push32((uint32_t)(0x100afd5cu));
  /* 100a1385 push 0x100b3618 */
  push32((uint32_t)(0x100b3618u));
  /* 100a138a call eax */
  call_ind((uint32_t)(EAX), 0x100a138cu);
  /* 100a138c mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1396 je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a139c push 0x100afd44 */
  push32((uint32_t)(0x100afd44u));
  /* 100a13a1 push 0x100b62e8 */
  push32((uint32_t)(0x100b62e8u));
  /* 100a13a6 call eax */
  call_ind((uint32_t)(EAX), 0x100a13a8u);
  /* 100a13a8 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a13ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a13b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a13b2 je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a13b8 push 0x100afd2c */
  push32((uint32_t)(0x100afd2cu));
  /* 100a13bd push 0x100b62e0 */
  push32((uint32_t)(0x100b62e0u));
  /* 100a13c2 call eax */
  call_ind((uint32_t)(EAX), 0x100a13c4u);
  /* 100a13c4 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a13c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a13cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a13ce je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a13d4 push 0x100afd14 */
  push32((uint32_t)(0x100afd14u));
  /* 100a13d9 push 0x100b62d8 */
  push32((uint32_t)(0x100b62d8u));
  /* 100a13de call eax */
  call_ind((uint32_t)(EAX), 0x100a13e0u);
  /* 100a13e0 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a13e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a13e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a13ea je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a13f0 push 0x100afd00 */
  push32((uint32_t)(0x100afd00u));
  /* 100a13f5 push 0x100b6360 */
  push32((uint32_t)(0x100b6360u));
  /* 100a13fa call eax */
  call_ind((uint32_t)(EAX), 0x100a13fcu);
  /* 100a13fc mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1406 je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a140c push 0x100afce8 */
  push32((uint32_t)(0x100afce8u));
  /* 100a1411 push 0x100b6358 */
  push32((uint32_t)(0x100b6358u));
  /* 100a1416 call eax */
  call_ind((uint32_t)(EAX), 0x100a1418u);
  /* 100a1418 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a141d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1422 je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a1428 push 0x100afcd0 */
  push32((uint32_t)(0x100afcd0u));
  /* 100a142d push 0x100b63a8 */
  push32((uint32_t)(0x100b63a8u));
  /* 100a1432 call eax */
  call_ind((uint32_t)(EAX), 0x100a1434u);
  /* 100a1434 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a143c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a143e je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a1444 push 0x100afcb8 */
  push32((uint32_t)(0x100afcb8u));
  /* 100a1449 push 0x100b63a0 */
  push32((uint32_t)(0x100b63a0u));
  /* 100a144e call eax */
  call_ind((uint32_t)(EAX), 0x100a1450u);
  /* 100a1450 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a145a je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a1460 push 0x100afca0 */
  push32((uint32_t)(0x100afca0u));
  /* 100a1465 push 0x100b6398 */
  push32((uint32_t)(0x100b6398u));
  /* 100a146a call eax */
  call_ind((uint32_t)(EAX), 0x100a146cu);
  /* 100a146c mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1476 je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a147c push 0x100afc88 */
  push32((uint32_t)(0x100afc88u));
  /* 100a1481 push 0x100b6390 */
  push32((uint32_t)(0x100b6390u));
  /* 100a1486 call eax */
  call_ind((uint32_t)(EAX), 0x100a1488u);
  /* 100a1488 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a148d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1492 je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a1498 push 0x100afd8c */
  push32((uint32_t)(0x100afd8cu));
  /* 100a149d push 0x100b3628 */
  push32((uint32_t)(0x100b3628u));
  /* 100a14a2 call eax */
  call_ind((uint32_t)(EAX), 0x100a14a4u);
  /* 100a14a4 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a14a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a14ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a14ae je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a14b4 push 0x100afd74 */
  push32((uint32_t)(0x100afd74u));
  /* 100a14b9 push 0x100b3620 */
  push32((uint32_t)(0x100b3620u));
  /* 100a14be call eax */
  call_ind((uint32_t)(EAX), 0x100a14c0u);
  /* 100a14c0 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a14c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a14c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a14ca je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a14d0 push 0x100afd5c */
  push32((uint32_t)(0x100afd5cu));
  /* 100a14d5 push 0x100b3618 */
  push32((uint32_t)(0x100b3618u));
  /* 100a14da call eax */
  call_ind((uint32_t)(EAX), 0x100a14dcu);
  /* 100a14dc mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a14e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a14e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a14e6 je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a14ec push 0x100afd44 */
  push32((uint32_t)(0x100afd44u));
  /* 100a14f1 push 0x100b62e8 */
  push32((uint32_t)(0x100b62e8u));
  /* 100a14f6 call eax */
  call_ind((uint32_t)(EAX), 0x100a14f8u);
  /* 100a14f8 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a14fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1502 je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a1508 push 0x100afd2c */
  push32((uint32_t)(0x100afd2cu));
  /* 100a150d push 0x100b62e0 */
  push32((uint32_t)(0x100b62e0u));
  /* 100a1512 call eax */
  call_ind((uint32_t)(EAX), 0x100a1514u);
  /* 100a1514 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a151e je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a1524 push 0x100afd14 */
  push32((uint32_t)(0x100afd14u));
  /* 100a1529 push 0x100b62d8 */
  push32((uint32_t)(0x100b62d8u));
  /* 100a152e call eax */
  call_ind((uint32_t)(EAX), 0x100a1530u);
  /* 100a1530 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a153a je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a1540 push 0x100afd00 */
  push32((uint32_t)(0x100afd00u));
  /* 100a1545 push 0x100b6360 */
  push32((uint32_t)(0x100b6360u));
  /* 100a154a call eax */
  call_ind((uint32_t)(EAX), 0x100a154cu);
  /* 100a154c mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1556 je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a1558 push 0x100afce8 */
  push32((uint32_t)(0x100afce8u));
  /* 100a155d push 0x100b6358 */
  push32((uint32_t)(0x100b6358u));
  /* 100a1562 call eax */
  call_ind((uint32_t)(EAX), 0x100a1564u);
  /* 100a1564 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a156c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a156e je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a1570 push 0x100afcd0 */
  push32((uint32_t)(0x100afcd0u));
  /* 100a1575 push 0x100b63a8 */
  push32((uint32_t)(0x100b63a8u));
  /* 100a157a call eax */
  call_ind((uint32_t)(EAX), 0x100a157cu);
  /* 100a157c mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1586 je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a1588 push 0x100afcb8 */
  push32((uint32_t)(0x100afcb8u));
  /* 100a158d push 0x100b63a0 */
  push32((uint32_t)(0x100b63a0u));
  /* 100a1592 call eax */
  call_ind((uint32_t)(EAX), 0x100a1594u);
  /* 100a1594 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a159e je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a15a0 push 0x100afca0 */
  push32((uint32_t)(0x100afca0u));
  /* 100a15a5 push 0x100b6398 */
  push32((uint32_t)(0x100b6398u));
  /* 100a15aa call eax */
  call_ind((uint32_t)(EAX), 0x100a15acu);
  /* 100a15ac mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a15b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a15b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a15b6 je 0x100a15c7 */
  if (C.zf) goto L_100a15c7;
  /* 100a15b8 push 0x100afc88 */
  push32((uint32_t)(0x100afc88u));
  /* 100a15bd push 0x100b6390 */
  push32((uint32_t)(0x100b6390u));
  /* 100a15c2 call eax */
  call_ind((uint32_t)(EAX), 0x100a15c4u);
  /* 100a15c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a15c7:;
  /* 100a15c7 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a15cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a15ce je 0x100a15df */
  if (C.zf) goto L_100a15df;
  /* 100a15d0 push 0x100afc74 */
  push32((uint32_t)(0x100afc74u));
  /* 100a15d5 push 0x100b5fb0 */
  push32((uint32_t)(0x100b5fb0u));
  /* 100a15da call eax */
  call_ind((uint32_t)(EAX), 0x100a15dcu);
  /* 100a15dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a15df:;
  /* 100a15df call dword ptr [0x100b64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d0))), 0x100a15e5u);
  /* 100a15e5 mov dword ptr [0x100b6284], eax */
  w32((uint32_t)(0x100b6284), (EAX));
  /* 100a15ea call 0x100a26a0 */
  push32(0x100a15efu); f_100a26a0();
  /* 100a15ef mov ecx, eax */
  ECX = (EAX);
  /* 100a15f1 mov eax, dword ptr [0x100b6284] */
  EAX = (r32((uint32_t)(0x100b6284)));
  /* 100a15f6 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 100a15fc mov dword ptr [eax*4 + 0x100b5f68], ecx */
  w32((uint32_t)(EAX*4 + 0x100b5f68), (ECX));
  /* 100a1603 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 100a1606 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 100a1609 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 100a160c lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 100a160f shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100a1612 mov dword ptr [eax + 0x100b3ac0], 0 */
  w32((uint32_t)(EAX + 0x100b3ac0), (0x0u));
  /* 100a161c mov dword ptr [eax + 0x100b3c54], 0 */
  w32((uint32_t)(EAX + 0x100b3c54), (0x0u));
  /* 100a1626 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a162b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a162d je 0x100a163e */
  if (C.zf) goto L_100a163e;
  /* 100a162f push 0x100afc58 */
  push32((uint32_t)(0x100afc58u));
  /* 100a1634 push 0x100b60a0 */
  push32((uint32_t)(0x100b60a0u));
  /* 100a1639 call eax */
  call_ind((uint32_t)(EAX), 0x100a163bu);
  /* 100a163b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a163e:;
  /* 100a163e mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1645 je 0x100a1656 */
  if (C.zf) goto L_100a1656;
  /* 100a1647 push 0x100afc44 */
  push32((uint32_t)(0x100afc44u));
  /* 100a164c push 0x100b3858 */
  push32((uint32_t)(0x100b3858u));
  /* 100a1651 call eax */
  call_ind((uint32_t)(EAX), 0x100a1653u);
  /* 100a1653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a1656:;
  /* 100a1656 push esi */
  push32((uint32_t)(ESI));
  /* 100a1657 push edi */
  push32((uint32_t)(EDI));
  /* 100a1658 call 0x100a26a0 */
  push32(0x100a165du); f_100a26a0();
  /* 100a165d mov edi, 0x100afc34 */
  EDI = (0x100afc34u);
  /* 100a1662 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100a1665 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a1667 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 100a166b repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 100a166d not ecx */
  ECX = (~(ECX));
  /* 100a166f sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a1671 mov eax, ecx */
  EAX = (ECX);
  /* 100a1673 mov esi, edi */
  ESI = (EDI);
  /* 100a1675 mov edi, edx */
  EDI = (EDX);
  /* 100a1677 lea edx, [esp + 0x38] */
  EDX = ((uint32_t)(ESP + 0x38));
  /* 100a167b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100a167e rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100a1680 mov ecx, eax */
  ECX = (EAX);
  /* 100a1682 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a1684 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100a1687 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 100a1689 mov edi, 0x100afc24 */
  EDI = (0x100afc24u);
  /* 100a168e or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100a1691 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 100a1693 not ecx */
  ECX = (~(ECX));
  /* 100a1695 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a1697 mov eax, ecx */
  EAX = (ECX);
  /* 100a1699 mov esi, edi */
  ESI = (EDI);
  /* 100a169b mov edi, edx */
  EDI = (EDX);
  /* 100a169d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100a16a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100a16a2 mov ecx, eax */
  ECX = (EAX);
  /* 100a16a4 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a16a9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100a16ac rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 100a16ae pop edi */
  EDI = (pop32());
  /* 100a16af pop esi */
  ESI = (pop32());
  /* 100a16b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a16b2 je 0x100a16f8 */
  if (C.zf) goto L_100a16f8;
  /* 100a16b4 push 0x100afc0c */
  push32((uint32_t)(0x100afc0cu));
  /* 100a16b9 push 0x100b6248 */
  push32((uint32_t)(0x100b6248u));
  /* 100a16be call eax */
  call_ind((uint32_t)(EAX), 0x100a16c0u);
  /* 100a16c0 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a16c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a16c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a16ca je 0x100a16f8 */
  if (C.zf) goto L_100a16f8;
  /* 100a16cc push 0x100afbf4 */
  push32((uint32_t)(0x100afbf4u));
  /* 100a16d1 push 0x100b62f8 */
  push32((uint32_t)(0x100b62f8u));
  /* 100a16d6 call eax */
  call_ind((uint32_t)(EAX), 0x100a16d8u);
  /* 100a16d8 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a16dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a16e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a16e2 je 0x100a16f8 */
  if (C.zf) goto L_100a16f8;
  /* 100a16e4 push 0x100afbe0 */
  push32((uint32_t)(0x100afbe0u));
  /* 100a16e9 push 0x100b36d0 */
  push32((uint32_t)(0x100b36d0u));
  /* 100a16ee call eax */
  call_ind((uint32_t)(EAX), 0x100a16f0u);
  /* 100a16f0 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a16f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a16f8:;
  /* 100a16f8 mov ecx, dword ptr [0x100b63cc] */
  ECX = (r32((uint32_t)(0x100b63cc)));
  /* 100a16fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100a1700 je 0x100a172e */
  if (C.zf) goto L_100a172e;
  /* 100a1702 push 0x100afbc8 */
  push32((uint32_t)(0x100afbc8u));
  /* 100a1707 push 0x100b6230 */
  push32((uint32_t)(0x100b6230u));
  /* 100a170c call ecx */
  call_ind((uint32_t)(ECX), 0x100a170eu);
  /* 100a170e mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1713 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1716 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1718 je 0x100a1729 */
  if (C.zf) goto L_100a1729;
  /* 100a171a push 0x100afbb0 */
  push32((uint32_t)(0x100afbb0u));
  /* 100a171f push 0x100b5f98 */
  push32((uint32_t)(0x100b5f98u));
  /* 100a1724 call eax */
  call_ind((uint32_t)(EAX), 0x100a1726u);
  /* 100a1726 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a1729:;
  /* 100a1729 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
L_100a172e:;
  /* 100a172e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1730 je 0x100a1741 */
  if (C.zf) goto L_100a1741;
  /* 100a1732 push 0x100afb9c */
  push32((uint32_t)(0x100afb9cu));
  /* 100a1737 push 0x100b3610 */
  push32((uint32_t)(0x100b3610u));
  /* 100a173c call eax */
  call_ind((uint32_t)(EAX), 0x100a173eu);
  /* 100a173e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a1741:;
  /* 100a1741 push 0x100afb88 */
  push32((uint32_t)(0x100afb88u));
  /* 100a1746 call 0x100a2670 */
  push32(0x100a174bu); f_100a2670();
  /* 100a174b mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1750 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1753 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1755 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a175b push 0x100afb88 */
  push32((uint32_t)(0x100afb88u));
  /* 100a1760 push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a1765 call eax */
  call_ind((uint32_t)(EAX), 0x100a1767u);
  /* 100a1767 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a176c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a176f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1771 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a1777 push 0x100afb74 */
  push32((uint32_t)(0x100afb74u));
  /* 100a177c push 0x100b6160 */
  push32((uint32_t)(0x100b6160u));
  /* 100a1781 call eax */
  call_ind((uint32_t)(EAX), 0x100a1783u);
  /* 100a1783 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a178b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a178d je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a1793 push 0x100afb60 */
  push32((uint32_t)(0x100afb60u));
  /* 100a1798 push 0x100b6130 */
  push32((uint32_t)(0x100b6130u));
  /* 100a179d call eax */
  call_ind((uint32_t)(EAX), 0x100a179fu);
  /* 100a179f mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a17a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a17a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a17a9 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a17af push 0x100afb4c */
  push32((uint32_t)(0x100afb4cu));
  /* 100a17b4 push 0x100b60b0 */
  push32((uint32_t)(0x100b60b0u));
  /* 100a17b9 call eax */
  call_ind((uint32_t)(EAX), 0x100a17bbu);
  /* 100a17bb mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a17c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a17c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a17c5 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a17cb lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 100a17cf push ecx */
  push32((uint32_t)(ECX));
  /* 100a17d0 push 0x100b6380 */
  push32((uint32_t)(0x100b6380u));
  /* 100a17d5 call eax */
  call_ind((uint32_t)(EAX), 0x100a17d7u);
  /* 100a17d7 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a17dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a17df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a17e1 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a17e7 push 0x100afb40 */
  push32((uint32_t)(0x100afb40u));
  /* 100a17ec push 0x100b6300 */
  push32((uint32_t)(0x100b6300u));
  /* 100a17f1 call eax */
  call_ind((uint32_t)(EAX), 0x100a17f3u);
  /* 100a17f3 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a17f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a17fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a17fd je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a1803 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 100a1807 push edx */
  push32((uint32_t)(EDX));
  /* 100a1808 push 0x100b5f50 */
  push32((uint32_t)(0x100b5f50u));
  /* 100a180d call eax */
  call_ind((uint32_t)(EAX), 0x100a180fu);
  /* 100a180f mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1817 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1819 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a181f push 0x100afb34 */
  push32((uint32_t)(0x100afb34u));
  /* 100a1824 push 0x100b6340 */
  push32((uint32_t)(0x100b6340u));
  /* 100a1829 call eax */
  call_ind((uint32_t)(EAX), 0x100a182bu);
  /* 100a182b mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1830 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1833 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1835 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a183b push 0x100afb28 */
  push32((uint32_t)(0x100afb28u));
  /* 100a1840 push 0x100b3638 */
  push32((uint32_t)(0x100b3638u));
  /* 100a1845 call eax */
  call_ind((uint32_t)(EAX), 0x100a1847u);
  /* 100a1847 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a184c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a184f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1851 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a1857 push 0x100afb18 */
  push32((uint32_t)(0x100afb18u));
  /* 100a185c push 0x100b3898 */
  push32((uint32_t)(0x100b3898u));
  /* 100a1861 call eax */
  call_ind((uint32_t)(EAX), 0x100a1863u);
  /* 100a1863 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1868 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a186b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a186d je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a1873 push 0x100afb0c */
  push32((uint32_t)(0x100afb0cu));
  /* 100a1878 push 0x100b61c0 */
  push32((uint32_t)(0x100b61c0u));
  /* 100a187d call eax */
  call_ind((uint32_t)(EAX), 0x100a187fu);
  /* 100a187f mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1884 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1887 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1889 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a188f push 0x100afb00 */
  push32((uint32_t)(0x100afb00u));
  /* 100a1894 push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a1899 call eax */
  call_ind((uint32_t)(EAX), 0x100a189bu);
  /* 100a189b mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a18a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a18a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a18a5 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a18ab push 0x100afaf4 */
  push32((uint32_t)(0x100afaf4u));
  /* 100a18b0 push 0x100b5fa8 */
  push32((uint32_t)(0x100b5fa8u));
  /* 100a18b5 call eax */
  call_ind((uint32_t)(EAX), 0x100a18b7u);
  /* 100a18b7 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a18bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a18bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a18c1 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a18c7 push 0x100afae0 */
  push32((uint32_t)(0x100afae0u));
  /* 100a18cc push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a18d1 call eax */
  call_ind((uint32_t)(EAX), 0x100a18d3u);
  /* 100a18d3 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a18d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a18db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a18dd je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a18e3 push 0x100afad4 */
  push32((uint32_t)(0x100afad4u));
  /* 100a18e8 push 0x100b6228 */
  push32((uint32_t)(0x100b6228u));
  /* 100a18ed call eax */
  call_ind((uint32_t)(EAX), 0x100a18efu);
  /* 100a18ef mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a18f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a18f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a18f9 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a18ff push 0x100afac8 */
  push32((uint32_t)(0x100afac8u));
  /* 100a1904 push 0x100b5fa0 */
  push32((uint32_t)(0x100b5fa0u));
  /* 100a1909 call eax */
  call_ind((uint32_t)(EAX), 0x100a190bu);
  /* 100a190b mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1910 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1913 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1915 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a191b push 0x100afab8 */
  push32((uint32_t)(0x100afab8u));
  /* 100a1920 push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a1925 call eax */
  call_ind((uint32_t)(EAX), 0x100a1927u);
  /* 100a1927 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a192c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a192f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1931 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a1937 push 0x100afaa0 */
  push32((uint32_t)(0x100afaa0u));
  /* 100a193c push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a1941 call eax */
  call_ind((uint32_t)(EAX), 0x100a1943u);
  /* 100a1943 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1948 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a194b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a194d je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a1953 push 0x100afa90 */
  push32((uint32_t)(0x100afa90u));
  /* 100a1958 push 0x100b5fb8 */
  push32((uint32_t)(0x100b5fb8u));
  /* 100a195d call eax */
  call_ind((uint32_t)(EAX), 0x100a195fu);
  /* 100a195f mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1964 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1967 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1969 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a196f push 0x100afa7c */
  push32((uint32_t)(0x100afa7cu));
  /* 100a1974 push 0x100b35e8 */
  push32((uint32_t)(0x100b35e8u));
  /* 100a1979 call eax */
  call_ind((uint32_t)(EAX), 0x100a197bu);
  /* 100a197b mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1980 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1983 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1985 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a198b push 0x100afa70 */
  push32((uint32_t)(0x100afa70u));
  /* 100a1990 push 0x100b3848 */
  push32((uint32_t)(0x100b3848u));
  /* 100a1995 call eax */
  call_ind((uint32_t)(EAX), 0x100a1997u);
  /* 100a1997 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a199c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a199f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a19a1 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a19a7 push 0x100afa64 */
  push32((uint32_t)(0x100afa64u));
  /* 100a19ac push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a19b1 call eax */
  call_ind((uint32_t)(EAX), 0x100a19b3u);
  /* 100a19b3 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a19b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a19bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a19bd je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a19c3 push 0x100afa58 */
  push32((uint32_t)(0x100afa58u));
  /* 100a19c8 push 0x100b61b8 */
  push32((uint32_t)(0x100b61b8u));
  /* 100a19cd call eax */
  call_ind((uint32_t)(EAX), 0x100a19cfu);
  /* 100a19cf mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a19d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a19d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a19d9 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a19df push 0x100afa44 */
  push32((uint32_t)(0x100afa44u));
  /* 100a19e4 push 0x100b60c8 */
  push32((uint32_t)(0x100b60c8u));
  /* 100a19e9 call eax */
  call_ind((uint32_t)(EAX), 0x100a19ebu);
  /* 100a19eb mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a19f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a19f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a19f5 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a19fb push 0x100afa38 */
  push32((uint32_t)(0x100afa38u));
  /* 100a1a00 push 0x100b62a8 */
  push32((uint32_t)(0x100b62a8u));
  /* 100a1a05 call eax */
  call_ind((uint32_t)(EAX), 0x100a1a07u);
  /* 100a1a07 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1a0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1a0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1a11 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a1a13 push 0x100afa2c */
  push32((uint32_t)(0x100afa2cu));
  /* 100a1a18 push 0x100b38b8 */
  push32((uint32_t)(0x100b38b8u));
  /* 100a1a1d call eax */
  call_ind((uint32_t)(EAX), 0x100a1a1fu);
  /* 100a1a1f mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1a24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1a27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1a29 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a1a2b push 0x100afa20 */
  push32((uint32_t)(0x100afa20u));
  /* 100a1a30 push 0x100b5f60 */
  push32((uint32_t)(0x100b5f60u));
  /* 100a1a35 call eax */
  call_ind((uint32_t)(EAX), 0x100a1a37u);
  /* 100a1a37 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1a3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1a3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1a41 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a1a43 push 0x100afa14 */
  push32((uint32_t)(0x100afa14u));
  /* 100a1a48 push 0x100b6368 */
  push32((uint32_t)(0x100b6368u));
  /* 100a1a4d call eax */
  call_ind((uint32_t)(EAX), 0x100a1a4fu);
  /* 100a1a4f mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1a54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1a57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1a59 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a1a5b push 0x100afa08 */
  push32((uint32_t)(0x100afa08u));
  /* 100a1a60 push 0x100b5f58 */
  push32((uint32_t)(0x100b5f58u));
  /* 100a1a65 call eax */
  call_ind((uint32_t)(EAX), 0x100a1a67u);
  /* 100a1a67 mov eax, dword ptr [0x100b63c8] */
  EAX = (r32((uint32_t)(0x100b63c8)));
  /* 100a1a6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1a6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1a71 je 0x100a1a82 */
  if (C.zf) goto L_100a1a82;
  /* 100a1a73 push 0x100af9f8 */
  push32((uint32_t)(0x100af9f8u));
  /* 100a1a78 push 0x100b3870 */
  push32((uint32_t)(0x100b3870u));
  /* 100a1a7d call eax */
  call_ind((uint32_t)(EAX), 0x100a1a7fu);
  /* 100a1a7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a1a82:;
  /* 100a1a82 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1a87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1a89 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1a8f push 0x100af9e4 */
  push32((uint32_t)(0x100af9e4u));
  /* 100a1a94 push 0x100b6348 */
  push32((uint32_t)(0x100b6348u));
  /* 100a1a99 call eax */
  call_ind((uint32_t)(EAX), 0x100a1a9bu);
  /* 100a1a9b mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1aa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1aa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1aa5 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1aab push 0x100af9d0 */
  push32((uint32_t)(0x100af9d0u));
  /* 100a1ab0 push 0x100b60d0 */
  push32((uint32_t)(0x100b60d0u));
  /* 100a1ab5 call eax */
  call_ind((uint32_t)(EAX), 0x100a1ab7u);
  /* 100a1ab7 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1abc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1ac1 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1ac7 push 0x100af9c8 */
  push32((uint32_t)(0x100af9c8u));
  /* 100a1acc push 0x100b3630 */
  push32((uint32_t)(0x100b3630u));
  /* 100a1ad1 call eax */
  call_ind((uint32_t)(EAX), 0x100a1ad3u);
  /* 100a1ad3 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1ad8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1adb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1add je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1ae3 push 0x100af9b0 */
  push32((uint32_t)(0x100af9b0u));
  /* 100a1ae8 push 0x100b6320 */
  push32((uint32_t)(0x100b6320u));
  /* 100a1aed call eax */
  call_ind((uint32_t)(EAX), 0x100a1aefu);
  /* 100a1aef mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1af4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1af7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1af9 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1aff push 0x100af998 */
  push32((uint32_t)(0x100af998u));
  /* 100a1b04 push 0x100b6328 */
  push32((uint32_t)(0x100b6328u));
  /* 100a1b09 call eax */
  call_ind((uint32_t)(EAX), 0x100a1b0bu);
  /* 100a1b0b mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1b10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1b13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1b15 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1b1b push 0x100af980 */
  push32((uint32_t)(0x100af980u));
  /* 100a1b20 push 0x100b6310 */
  push32((uint32_t)(0x100b6310u));
  /* 100a1b25 call eax */
  call_ind((uint32_t)(EAX), 0x100a1b27u);
  /* 100a1b27 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1b2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1b2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1b31 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1b37 push 0x100af968 */
  push32((uint32_t)(0x100af968u));
  /* 100a1b3c push 0x100b6318 */
  push32((uint32_t)(0x100b6318u));
  /* 100a1b41 call eax */
  call_ind((uint32_t)(EAX), 0x100a1b43u);
  /* 100a1b43 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1b48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1b4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1b4d je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1b53 push 0x100af950 */
  push32((uint32_t)(0x100af950u));
  /* 100a1b58 push 0x100b6330 */
  push32((uint32_t)(0x100b6330u));
  /* 100a1b5d call eax */
  call_ind((uint32_t)(EAX), 0x100a1b5fu);
  /* 100a1b5f mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1b64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1b67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1b69 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1b6f push 0x100af938 */
  push32((uint32_t)(0x100af938u));
  /* 100a1b74 push 0x100b6268 */
  push32((uint32_t)(0x100b6268u));
  /* 100a1b79 call eax */
  call_ind((uint32_t)(EAX), 0x100a1b7bu);
  /* 100a1b7b mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1b80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1b83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1b85 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1b8b push 0x100af920 */
  push32((uint32_t)(0x100af920u));
  /* 100a1b90 push 0x100b6250 */
  push32((uint32_t)(0x100b6250u));
  /* 100a1b95 call eax */
  call_ind((uint32_t)(EAX), 0x100a1b97u);
  /* 100a1b97 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1b9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1b9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1ba1 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1ba7 push 0x100af908 */
  push32((uint32_t)(0x100af908u));
  /* 100a1bac push 0x100b6258 */
  push32((uint32_t)(0x100b6258u));
  /* 100a1bb1 call eax */
  call_ind((uint32_t)(EAX), 0x100a1bb3u);
  /* 100a1bb3 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1bb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1bbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1bbd je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1bc3 push 0x100af8f0 */
  push32((uint32_t)(0x100af8f0u));
  /* 100a1bc8 push 0x100b6270 */
  push32((uint32_t)(0x100b6270u));
  /* 100a1bcd call eax */
  call_ind((uint32_t)(EAX), 0x100a1bcfu);
  /* 100a1bcf mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1bd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1bd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1bd9 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1bdf push 0x100af8d8 */
  push32((uint32_t)(0x100af8d8u));
  /* 100a1be4 push 0x100b6278 */
  push32((uint32_t)(0x100b6278u));
  /* 100a1be9 call eax */
  call_ind((uint32_t)(EAX), 0x100a1bebu);
  /* 100a1beb mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1bf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1bf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1bf5 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1bfb push 0x100af8c0 */
  push32((uint32_t)(0x100af8c0u));
  /* 100a1c00 push 0x100b38e0 */
  push32((uint32_t)(0x100b38e0u));
  /* 100a1c05 call eax */
  call_ind((uint32_t)(EAX), 0x100a1c07u);
  /* 100a1c07 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1c0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1c0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1c11 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1c13 push 0x100af8a8 */
  push32((uint32_t)(0x100af8a8u));
  /* 100a1c18 push 0x100b38e8 */
  push32((uint32_t)(0x100b38e8u));
  /* 100a1c1d call eax */
  call_ind((uint32_t)(EAX), 0x100a1c1fu);
  /* 100a1c1f mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1c27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1c29 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1c2b push 0x100af890 */
  push32((uint32_t)(0x100af890u));
  /* 100a1c30 push 0x100b38d8 */
  push32((uint32_t)(0x100b38d8u));
  /* 100a1c35 call eax */
  call_ind((uint32_t)(EAX), 0x100a1c37u);
  /* 100a1c37 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1c3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1c3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1c41 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1c43 push 0x100af878 */
  push32((uint32_t)(0x100af878u));
  /* 100a1c48 push 0x100b5f48 */
  push32((uint32_t)(0x100b5f48u));
  /* 100a1c4d call eax */
  call_ind((uint32_t)(EAX), 0x100a1c4fu);
  /* 100a1c4f mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1c54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1c57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1c59 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1c5b push 0x100af860 */
  push32((uint32_t)(0x100af860u));
  /* 100a1c60 push 0x100b5f38 */
  push32((uint32_t)(0x100b5f38u));
  /* 100a1c65 call eax */
  call_ind((uint32_t)(EAX), 0x100a1c67u);
  /* 100a1c67 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1c6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1c6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1c71 je 0x100a1c82 */
  if (C.zf) goto L_100a1c82;
  /* 100a1c73 push 0x100af848 */
  push32((uint32_t)(0x100af848u));
  /* 100a1c78 push 0x100b5f40 */
  push32((uint32_t)(0x100b5f40u));
  /* 100a1c7d call eax */
  call_ind((uint32_t)(EAX), 0x100a1c7fu);
  /* 100a1c7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a1c82:;
  /* 100a1c82 lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 100a1c86 push 0x100af840 */
  push32((uint32_t)(0x100af840u));
  /* 100a1c8b push eax */
  push32((uint32_t)(EAX));
  /* 100a1c8c call 0x100a2f10 */
  push32(0x100a1c91u); f_100a2f10();
  /* 100a1c91 push eax */
  push32((uint32_t)(EAX));
  /* 100a1c92 push 0x100b5fe8 */
  push32((uint32_t)(0x100b5fe8u));
  /* 100a1c97 call 0x100a2680 */
  push32(0x100a1c9cu); f_100a2680();
  /* 100a1c9c lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 100a1ca0 push 0x100af838 */
  push32((uint32_t)(0x100af838u));
  /* 100a1ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 100a1ca6 call 0x100a2f10 */
  push32(0x100a1cabu); f_100a2f10();
  /* 100a1cab push eax */
  push32((uint32_t)(EAX));
  /* 100a1cac push 0x100b5fe0 */
  push32((uint32_t)(0x100b5fe0u));
  /* 100a1cb1 call 0x100a2680 */
  push32(0x100a1cb6u); f_100a2680();
  /* 100a1cb6 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 100a1cba push 0x100af830 */
  push32((uint32_t)(0x100af830u));
  /* 100a1cbf push edx */
  push32((uint32_t)(EDX));
  /* 100a1cc0 call 0x100a2f10 */
  push32(0x100a1cc5u); f_100a2f10();
  /* 100a1cc5 push eax */
  push32((uint32_t)(EAX));
  /* 100a1cc6 push 0x100b5fd8 */
  push32((uint32_t)(0x100b5fd8u));
  /* 100a1ccb call 0x100a2680 */
  push32(0x100a1cd0u); f_100a2680();
  /* 100a1cd0 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 100a1cd4 push 0x100af828 */
  push32((uint32_t)(0x100af828u));
  /* 100a1cd9 push eax */
  push32((uint32_t)(EAX));
  /* 100a1cda call 0x100a2f10 */
  push32(0x100a1cdfu); f_100a2f10();
  /* 100a1cdf push eax */
  push32((uint32_t)(EAX));
  /* 100a1ce0 push 0x100b5fd0 */
  push32((uint32_t)(0x100b5fd0u));
  /* 100a1ce5 call 0x100a2680 */
  push32(0x100a1ceau); f_100a2680();
  /* 100a1cea add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1ced lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 100a1cf1 push 0x100af820 */
  push32((uint32_t)(0x100af820u));
  /* 100a1cf6 push ecx */
  push32((uint32_t)(ECX));
  /* 100a1cf7 call 0x100a2f10 */
  push32(0x100a1cfcu); f_100a2f10();
  /* 100a1cfc push eax */
  push32((uint32_t)(EAX));
  /* 100a1cfd push 0x100b5fc8 */
  push32((uint32_t)(0x100b5fc8u));
  /* 100a1d02 call 0x100a2680 */
  push32(0x100a1d07u); f_100a2680();
  /* 100a1d07 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 100a1d0b push 0x100af818 */
  push32((uint32_t)(0x100af818u));
  /* 100a1d10 push edx */
  push32((uint32_t)(EDX));
  /* 100a1d11 call 0x100a2f10 */
  push32(0x100a1d16u); f_100a2f10();
  /* 100a1d16 push eax */
  push32((uint32_t)(EAX));
  /* 100a1d17 push 0x100b5fc0 */
  push32((uint32_t)(0x100b5fc0u));
  /* 100a1d1c call 0x100a2680 */
  push32(0x100a1d21u); f_100a2680();
  /* 100a1d21 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 100a1d25 push 0x100af810 */
  push32((uint32_t)(0x100af810u));
  /* 100a1d2a push eax */
  push32((uint32_t)(EAX));
  /* 100a1d2b call 0x100a2f10 */
  push32(0x100a1d30u); f_100a2f10();
  /* 100a1d30 push eax */
  push32((uint32_t)(EAX));
  /* 100a1d31 push 0x100b6100 */
  push32((uint32_t)(0x100b6100u));
  /* 100a1d36 call 0x100a2680 */
  push32(0x100a1d3bu); f_100a2680();
  /* 100a1d3b lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 100a1d3f push 0x100af808 */
  push32((uint32_t)(0x100af808u));
  /* 100a1d44 push ecx */
  push32((uint32_t)(ECX));
  /* 100a1d45 call 0x100a2f10 */
  push32(0x100a1d4au); f_100a2f10();
  /* 100a1d4a push eax */
  push32((uint32_t)(EAX));
  /* 100a1d4b push 0x100b60f8 */
  push32((uint32_t)(0x100b60f8u));
  /* 100a1d50 call 0x100a2680 */
  push32(0x100a1d55u); f_100a2680();
  /* 100a1d55 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1d58 lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 100a1d5c push 0x100af800 */
  push32((uint32_t)(0x100af800u));
  /* 100a1d61 push edx */
  push32((uint32_t)(EDX));
  /* 100a1d62 call 0x100a2f10 */
  push32(0x100a1d67u); f_100a2f10();
  /* 100a1d67 push eax */
  push32((uint32_t)(EAX));
  /* 100a1d68 push 0x100b60f0 */
  push32((uint32_t)(0x100b60f0u));
  /* 100a1d6d call 0x100a2680 */
  push32(0x100a1d72u); f_100a2680();
  /* 100a1d72 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 100a1d76 push 0x100af7f8 */
  push32((uint32_t)(0x100af7f8u));
  /* 100a1d7b push eax */
  push32((uint32_t)(EAX));
  /* 100a1d7c call 0x100a2f10 */
  push32(0x100a1d81u); f_100a2f10();
  /* 100a1d81 push eax */
  push32((uint32_t)(EAX));
  /* 100a1d82 push 0x100b60e8 */
  push32((uint32_t)(0x100b60e8u));
  /* 100a1d87 call 0x100a2680 */
  push32(0x100a1d8cu); f_100a2680();
  /* 100a1d8c lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 100a1d90 push 0x100af7f0 */
  push32((uint32_t)(0x100af7f0u));
  /* 100a1d95 push ecx */
  push32((uint32_t)(ECX));
  /* 100a1d96 call 0x100a2f10 */
  push32(0x100a1d9bu); f_100a2f10();
  /* 100a1d9b push eax */
  push32((uint32_t)(EAX));
  /* 100a1d9c push 0x100b60d8 */
  push32((uint32_t)(0x100b60d8u));
  /* 100a1da1 call 0x100a2680 */
  push32(0x100a1da6u); f_100a2680();
  /* 100a1da6 push 0x100af7e8 */
  push32((uint32_t)(0x100af7e8u));
  /* 100a1dab lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 100a1daf push edx */
  push32((uint32_t)(EDX));
  /* 100a1db0 call 0x100a2f10 */
  push32(0x100a1db5u); f_100a2f10();
  /* 100a1db5 push eax */
  push32((uint32_t)(EAX));
  /* 100a1db6 push 0x100b6128 */
  push32((uint32_t)(0x100b6128u));
  /* 100a1dbb call 0x100a2680 */
  push32(0x100a1dc0u); f_100a2680();
  /* 100a1dc0 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1dc5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1dc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1dca je 0x100a1eff */
  if (C.zf) goto L_100a1eff;
  /* 100a1dd0 push 0x100af7d4 */
  push32((uint32_t)(0x100af7d4u));
  /* 100a1dd5 push 0x100b3688 */
  push32((uint32_t)(0x100b3688u));
  /* 100a1dda call eax */
  call_ind((uint32_t)(EAX), 0x100a1ddcu);
  /* 100a1ddc mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1de4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1de6 je 0x100a1eff */
  if (C.zf) goto L_100a1eff;
  /* 100a1dec push 0x100af7c0 */
  push32((uint32_t)(0x100af7c0u));
  /* 100a1df1 push 0x100b3680 */
  push32((uint32_t)(0x100b3680u));
  /* 100a1df6 call eax */
  call_ind((uint32_t)(EAX), 0x100a1df8u);
  /* 100a1df8 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1dfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1e00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1e02 je 0x100a1eff */
  if (C.zf) goto L_100a1eff;
  /* 100a1e08 push 0x100af7ac */
  push32((uint32_t)(0x100af7acu));
  /* 100a1e0d push 0x100b3678 */
  push32((uint32_t)(0x100b3678u));
  /* 100a1e12 call eax */
  call_ind((uint32_t)(EAX), 0x100a1e14u);
  /* 100a1e14 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1e19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1e1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1e1e je 0x100a1eff */
  if (C.zf) goto L_100a1eff;
  /* 100a1e24 push 0x100af798 */
  push32((uint32_t)(0x100af798u));
  /* 100a1e29 push 0x100b3670 */
  push32((uint32_t)(0x100b3670u));
  /* 100a1e2e call eax */
  call_ind((uint32_t)(EAX), 0x100a1e30u);
  /* 100a1e30 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1e35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1e38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1e3a je 0x100a1eff */
  if (C.zf) goto L_100a1eff;
  /* 100a1e40 push 0x100af784 */
  push32((uint32_t)(0x100af784u));
  /* 100a1e45 push 0x100b3648 */
  push32((uint32_t)(0x100b3648u));
  /* 100a1e4a call eax */
  call_ind((uint32_t)(EAX), 0x100a1e4cu);
  /* 100a1e4c mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1e51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1e54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1e56 je 0x100a1eff */
  if (C.zf) goto L_100a1eff;
  /* 100a1e5c push 0x100af770 */
  push32((uint32_t)(0x100af770u));
  /* 100a1e61 push 0x100b3640 */
  push32((uint32_t)(0x100b3640u));
  /* 100a1e66 call eax */
  call_ind((uint32_t)(EAX), 0x100a1e68u);
  /* 100a1e68 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1e6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1e70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1e72 je 0x100a1eff */
  if (C.zf) goto L_100a1eff;
  /* 100a1e78 push 0x100af75c */
  push32((uint32_t)(0x100af75cu));
  /* 100a1e7d push 0x100b3718 */
  push32((uint32_t)(0x100b3718u));
  /* 100a1e82 call eax */
  call_ind((uint32_t)(EAX), 0x100a1e84u);
  /* 100a1e84 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1e8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1e8e je 0x100a1eff */
  if (C.zf) goto L_100a1eff;
  /* 100a1e90 push 0x100af748 */
  push32((uint32_t)(0x100af748u));
  /* 100a1e95 push 0x100b3710 */
  push32((uint32_t)(0x100b3710u));
  /* 100a1e9a call eax */
  call_ind((uint32_t)(EAX), 0x100a1e9cu);
  /* 100a1e9c mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1ea1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1ea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1ea6 je 0x100a1eff */
  if (C.zf) goto L_100a1eff;
  /* 100a1ea8 push 0x100af734 */
  push32((uint32_t)(0x100af734u));
  /* 100a1ead push 0x100b3708 */
  push32((uint32_t)(0x100b3708u));
  /* 100a1eb2 call eax */
  call_ind((uint32_t)(EAX), 0x100a1eb4u);
  /* 100a1eb4 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1eb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1ebc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1ebe je 0x100a1eff */
  if (C.zf) goto L_100a1eff;
  /* 100a1ec0 push 0x100af720 */
  push32((uint32_t)(0x100af720u));
  /* 100a1ec5 push 0x100b36f0 */
  push32((uint32_t)(0x100b36f0u));
  /* 100a1eca call eax */
  call_ind((uint32_t)(EAX), 0x100a1eccu);
  /* 100a1ecc mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1ed1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1ed4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1ed6 je 0x100a1eff */
  if (C.zf) goto L_100a1eff;
  /* 100a1ed8 push 0x100af70c */
  push32((uint32_t)(0x100af70cu));
  /* 100a1edd push 0x100b36e8 */
  push32((uint32_t)(0x100b36e8u));
  /* 100a1ee2 call eax */
  call_ind((uint32_t)(EAX), 0x100a1ee4u);
  /* 100a1ee4 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a1ee9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1eec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a1eee je 0x100a1eff */
  if (C.zf) goto L_100a1eff;
  /* 100a1ef0 push 0x100af6f8 */
  push32((uint32_t)(0x100af6f8u));
  /* 100a1ef5 push 0x100b36e0 */
  push32((uint32_t)(0x100b36e0u));
  /* 100a1efa call eax */
  call_ind((uint32_t)(EAX), 0x100a1efcu);
  /* 100a1efc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a1eff:;
  /* 100a1eff lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 100a1f03 push 0x100af840 */
  push32((uint32_t)(0x100af840u));
  /* 100a1f08 push eax */
  push32((uint32_t)(EAX));
  /* 100a1f09 call 0x100a2f10 */
  push32(0x100a1f0eu); f_100a2f10();
  /* 100a1f0e push eax */
  push32((uint32_t)(EAX));
  /* 100a1f0f push 0x100b36b0 */
  push32((uint32_t)(0x100b36b0u));
  /* 100a1f14 call 0x100a2680 */
  push32(0x100a1f19u); f_100a2680();
  /* 100a1f19 lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 100a1f1d push 0x100af838 */
  push32((uint32_t)(0x100af838u));
  /* 100a1f22 push ecx */
  push32((uint32_t)(ECX));
  /* 100a1f23 call 0x100a2f10 */
  push32(0x100a1f28u); f_100a2f10();
  /* 100a1f28 push eax */
  push32((uint32_t)(EAX));
  /* 100a1f29 push 0x100b36b8 */
  push32((uint32_t)(0x100b36b8u));
  /* 100a1f2e call 0x100a2680 */
  push32(0x100a1f33u); f_100a2680();
  /* 100a1f33 lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 100a1f37 push 0x100af830 */
  push32((uint32_t)(0x100af830u));
  /* 100a1f3c push edx */
  push32((uint32_t)(EDX));
  /* 100a1f3d call 0x100a2f10 */
  push32(0x100a1f42u); f_100a2f10();
  /* 100a1f42 push eax */
  push32((uint32_t)(EAX));
  /* 100a1f43 push 0x100b36c0 */
  push32((uint32_t)(0x100b36c0u));
  /* 100a1f48 call 0x100a2680 */
  push32(0x100a1f4du); f_100a2680();
  /* 100a1f4d lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 100a1f51 push 0x100af828 */
  push32((uint32_t)(0x100af828u));
  /* 100a1f56 push eax */
  push32((uint32_t)(EAX));
  /* 100a1f57 call 0x100a2f10 */
  push32(0x100a1f5cu); f_100a2f10();
  /* 100a1f5c push eax */
  push32((uint32_t)(EAX));
  /* 100a1f5d push 0x100b36c8 */
  push32((uint32_t)(0x100b36c8u));
  /* 100a1f62 call 0x100a2680 */
  push32(0x100a1f67u); f_100a2680();
  /* 100a1f67 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1f6a lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 100a1f6e push 0x100af820 */
  push32((uint32_t)(0x100af820u));
  /* 100a1f73 push ecx */
  push32((uint32_t)(ECX));
  /* 100a1f74 call 0x100a2f10 */
  push32(0x100a1f79u); f_100a2f10();
  /* 100a1f79 push eax */
  push32((uint32_t)(EAX));
  /* 100a1f7a push 0x100b3690 */
  push32((uint32_t)(0x100b3690u));
  /* 100a1f7f call 0x100a2680 */
  push32(0x100a1f84u); f_100a2680();
  /* 100a1f84 lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 100a1f88 push 0x100af818 */
  push32((uint32_t)(0x100af818u));
  /* 100a1f8d push edx */
  push32((uint32_t)(EDX));
  /* 100a1f8e call 0x100a2f10 */
  push32(0x100a1f93u); f_100a2f10();
  /* 100a1f93 push eax */
  push32((uint32_t)(EAX));
  /* 100a1f94 push 0x100b36a0 */
  push32((uint32_t)(0x100b36a0u));
  /* 100a1f99 call 0x100a2680 */
  push32(0x100a1f9eu); f_100a2680();
  /* 100a1f9e lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 100a1fa2 push 0x100af810 */
  push32((uint32_t)(0x100af810u));
  /* 100a1fa7 push eax */
  push32((uint32_t)(EAX));
  /* 100a1fa8 call 0x100a2f10 */
  push32(0x100a1fadu); f_100a2f10();
  /* 100a1fad push eax */
  push32((uint32_t)(EAX));
  /* 100a1fae push 0x100b3758 */
  push32((uint32_t)(0x100b3758u));
  /* 100a1fb3 call 0x100a2680 */
  push32(0x100a1fb8u); f_100a2680();
  /* 100a1fb8 lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 100a1fbc push 0x100af808 */
  push32((uint32_t)(0x100af808u));
  /* 100a1fc1 push ecx */
  push32((uint32_t)(ECX));
  /* 100a1fc2 call 0x100a2f10 */
  push32(0x100a1fc7u); f_100a2f10();
  /* 100a1fc7 push eax */
  push32((uint32_t)(EAX));
  /* 100a1fc8 push 0x100b3760 */
  push32((uint32_t)(0x100b3760u));
  /* 100a1fcd call 0x100a2680 */
  push32(0x100a1fd2u); f_100a2680();
  /* 100a1fd2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a1fd5 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 100a1fd9 push 0x100af800 */
  push32((uint32_t)(0x100af800u));
  /* 100a1fde push edx */
  push32((uint32_t)(EDX));
  /* 100a1fdf call 0x100a2f10 */
  push32(0x100a1fe4u); f_100a2f10();
  /* 100a1fe4 push eax */
  push32((uint32_t)(EAX));
  /* 100a1fe5 push 0x100b3768 */
  push32((uint32_t)(0x100b3768u));
  /* 100a1fea call 0x100a2680 */
  push32(0x100a1fefu); f_100a2680();
  /* 100a1fef lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 100a1ff3 push 0x100af7f8 */
  push32((uint32_t)(0x100af7f8u));
  /* 100a1ff8 push eax */
  push32((uint32_t)(EAX));
  /* 100a1ff9 call 0x100a2f10 */
  push32(0x100a1ffeu); f_100a2f10();
  /* 100a1ffe push eax */
  push32((uint32_t)(EAX));
  /* 100a1fff push 0x100b3740 */
  push32((uint32_t)(0x100b3740u));
  /* 100a2004 call 0x100a2680 */
  push32(0x100a2009u); f_100a2680();
  /* 100a2009 lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 100a200d push 0x100af7f0 */
  push32((uint32_t)(0x100af7f0u));
  /* 100a2012 push ecx */
  push32((uint32_t)(ECX));
  /* 100a2013 call 0x100a2f10 */
  push32(0x100a2018u); f_100a2f10();
  /* 100a2018 push eax */
  push32((uint32_t)(EAX));
  /* 100a2019 push 0x100b3748 */
  push32((uint32_t)(0x100b3748u));
  /* 100a201e call 0x100a2680 */
  push32(0x100a2023u); f_100a2680();
  /* 100a2023 push 0x100af7e8 */
  push32((uint32_t)(0x100af7e8u));
  /* 100a2028 lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 100a202c push edx */
  push32((uint32_t)(EDX));
  /* 100a202d call 0x100a2f10 */
  push32(0x100a2032u); f_100a2f10();
  /* 100a2032 push eax */
  push32((uint32_t)(EAX));
  /* 100a2033 push 0x100b3750 */
  push32((uint32_t)(0x100b3750u));
  /* 100a2038 call 0x100a2680 */
  push32(0x100a203du); f_100a2680();
  /* 100a203d mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2042 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2047 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a204d push 0x100af6e8 */
  push32((uint32_t)(0x100af6e8u));
  /* 100a2052 push 0x100b61a8 */
  push32((uint32_t)(0x100b61a8u));
  /* 100a2057 call eax */
  call_ind((uint32_t)(EAX), 0x100a2059u);
  /* 100a2059 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a205e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2061 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2063 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2069 push 0x100af6d4 */
  push32((uint32_t)(0x100af6d4u));
  /* 100a206e push 0x100b61a0 */
  push32((uint32_t)(0x100b61a0u));
  /* 100a2073 call eax */
  call_ind((uint32_t)(EAX), 0x100a2075u);
  /* 100a2075 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a207a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a207d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a207f je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2085 push 0x100af6c0 */
  push32((uint32_t)(0x100af6c0u));
  /* 100a208a push 0x100b6170 */
  push32((uint32_t)(0x100b6170u));
  /* 100a208f call eax */
  call_ind((uint32_t)(EAX), 0x100a2091u);
  /* 100a2091 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2096 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a209b je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a20a1 push 0x100af6ac */
  push32((uint32_t)(0x100af6acu));
  /* 100a20a6 push 0x100b6168 */
  push32((uint32_t)(0x100b6168u));
  /* 100a20ab call eax */
  call_ind((uint32_t)(EAX), 0x100a20adu);
  /* 100a20ad mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a20b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a20b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a20b7 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a20bd push 0x100af698 */
  push32((uint32_t)(0x100af698u));
  /* 100a20c2 push 0x100b6178 */
  push32((uint32_t)(0x100b6178u));
  /* 100a20c7 call eax */
  call_ind((uint32_t)(EAX), 0x100a20c9u);
  /* 100a20c9 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a20ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a20d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a20d3 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a20d9 push 0x100af684 */
  push32((uint32_t)(0x100af684u));
  /* 100a20de push 0x100b6068 */
  push32((uint32_t)(0x100b6068u));
  /* 100a20e3 call eax */
  call_ind((uint32_t)(EAX), 0x100a20e5u);
  /* 100a20e5 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a20ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a20ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a20ef je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a20f5 push 0x100af670 */
  push32((uint32_t)(0x100af670u));
  /* 100a20fa push 0x100b6070 */
  push32((uint32_t)(0x100b6070u));
  /* 100a20ff call eax */
  call_ind((uint32_t)(EAX), 0x100a2101u);
  /* 100a2101 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a210b je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2111 push 0x100af65c */
  push32((uint32_t)(0x100af65cu));
  /* 100a2116 push 0x100b6078 */
  push32((uint32_t)(0x100b6078u));
  /* 100a211b call eax */
  call_ind((uint32_t)(EAX), 0x100a211du);
  /* 100a211d mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2122 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2125 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2127 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a212d push 0x100af648 */
  push32((uint32_t)(0x100af648u));
  /* 100a2132 push 0x100b6080 */
  push32((uint32_t)(0x100b6080u));
  /* 100a2137 call eax */
  call_ind((uint32_t)(EAX), 0x100a2139u);
  /* 100a2139 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a213e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2143 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2149 push 0x100af640 */
  push32((uint32_t)(0x100af640u));
  /* 100a214e push 0x100b6188 */
  push32((uint32_t)(0x100b6188u));
  /* 100a2153 call eax */
  call_ind((uint32_t)(EAX), 0x100a2155u);
  /* 100a2155 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a215a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a215d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a215f je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2165 push 0x100af638 */
  push32((uint32_t)(0x100af638u));
  /* 100a216a push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a216f call eax */
  call_ind((uint32_t)(EAX), 0x100a2171u);
  /* 100a2171 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a217b je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2181 push 0x100af630 */
  push32((uint32_t)(0x100af630u));
  /* 100a2186 push 0x100b3928 */
  push32((uint32_t)(0x100b3928u));
  /* 100a218b call eax */
  call_ind((uint32_t)(EAX), 0x100a218du);
  /* 100a218d mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2195 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2197 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a219d push 0x100af628 */
  push32((uint32_t)(0x100af628u));
  /* 100a21a2 push 0x100b6048 */
  push32((uint32_t)(0x100b6048u));
  /* 100a21a7 call eax */
  call_ind((uint32_t)(EAX), 0x100a21a9u);
  /* 100a21a9 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a21ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a21b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a21b3 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a21b9 push 0x100af620 */
  push32((uint32_t)(0x100af620u));
  /* 100a21be push 0x100b6000 */
  push32((uint32_t)(0x100b6000u));
  /* 100a21c3 call eax */
  call_ind((uint32_t)(EAX), 0x100a21c5u);
  /* 100a21c5 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a21ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a21cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a21cf je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a21d5 push 0x100af618 */
  push32((uint32_t)(0x100af618u));
  /* 100a21da push 0x100b6008 */
  push32((uint32_t)(0x100b6008u));
  /* 100a21df call eax */
  call_ind((uint32_t)(EAX), 0x100a21e1u);
  /* 100a21e1 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a21e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a21e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a21eb je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a21f1 push 0x100af610 */
  push32((uint32_t)(0x100af610u));
  /* 100a21f6 push 0x100b6010 */
  push32((uint32_t)(0x100b6010u));
  /* 100a21fb call eax */
  call_ind((uint32_t)(EAX), 0x100a21fdu);
  /* 100a21fd mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2202 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2207 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a220d push 0x100af608 */
  push32((uint32_t)(0x100af608u));
  /* 100a2212 push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a2217 call eax */
  call_ind((uint32_t)(EAX), 0x100a2219u);
  /* 100a2219 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a221e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2223 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2229 push 0x100af600 */
  push32((uint32_t)(0x100af600u));
  /* 100a222e push 0x100b60e0 */
  push32((uint32_t)(0x100b60e0u));
  /* 100a2233 call eax */
  call_ind((uint32_t)(EAX), 0x100a2235u);
  /* 100a2235 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a223a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a223d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a223f je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2245 push 0x100af5f8 */
  push32((uint32_t)(0x100af5f8u));
  /* 100a224a push 0x100b6120 */
  push32((uint32_t)(0x100b6120u));
  /* 100a224f call eax */
  call_ind((uint32_t)(EAX), 0x100a2251u);
  /* 100a2251 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2256 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a225b je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2261 push 0x100af5f0 */
  push32((uint32_t)(0x100af5f0u));
  /* 100a2266 push 0x100b61d8 */
  push32((uint32_t)(0x100b61d8u));
  /* 100a226b call eax */
  call_ind((uint32_t)(EAX), 0x100a226du);
  /* 100a226d mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2272 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2277 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a227d push 0x100af5e8 */
  push32((uint32_t)(0x100af5e8u));
  /* 100a2282 push 0x100b61e0 */
  push32((uint32_t)(0x100b61e0u));
  /* 100a2287 call eax */
  call_ind((uint32_t)(EAX), 0x100a2289u);
  /* 100a2289 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a228e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2293 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2299 push 0x100af5e0 */
  push32((uint32_t)(0x100af5e0u));
  /* 100a229e push 0x100b6138 */
  push32((uint32_t)(0x100b6138u));
  /* 100a22a3 call eax */
  call_ind((uint32_t)(EAX), 0x100a22a5u);
  /* 100a22a5 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a22aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a22ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a22af je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a22b5 push 0x100af5d8 */
  push32((uint32_t)(0x100af5d8u));
  /* 100a22ba push 0x100b6148 */
  push32((uint32_t)(0x100b6148u));
  /* 100a22bf call eax */
  call_ind((uint32_t)(EAX), 0x100a22c1u);
  /* 100a22c1 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a22c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a22c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a22cb je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a22d1 push 0x100af5d0 */
  push32((uint32_t)(0x100af5d0u));
  /* 100a22d6 push 0x100b6150 */
  push32((uint32_t)(0x100b6150u));
  /* 100a22db call eax */
  call_ind((uint32_t)(EAX), 0x100a22ddu);
  /* 100a22dd mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a22e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a22e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a22e7 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a22ed push 0x100af5c8 */
  push32((uint32_t)(0x100af5c8u));
  /* 100a22f2 push 0x100b6140 */
  push32((uint32_t)(0x100b6140u));
  /* 100a22f7 call eax */
  call_ind((uint32_t)(EAX), 0x100a22f9u);
  /* 100a22f9 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a22fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2303 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2309 push 0x100af5c0 */
  push32((uint32_t)(0x100af5c0u));
  /* 100a230e push 0x100b3920 */
  push32((uint32_t)(0x100b3920u));
  /* 100a2313 call eax */
  call_ind((uint32_t)(EAX), 0x100a2315u);
  /* 100a2315 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a231a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a231d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a231f je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2325 push 0x100af5b8 */
  push32((uint32_t)(0x100af5b8u));
  /* 100a232a push 0x100b38b0 */
  push32((uint32_t)(0x100b38b0u));
  /* 100a232f call eax */
  call_ind((uint32_t)(EAX), 0x100a2331u);
  /* 100a2331 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a233b je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2341 push 0x100af5b0 */
  push32((uint32_t)(0x100af5b0u));
  /* 100a2346 push 0x100b3770 */
  push32((uint32_t)(0x100b3770u));
  /* 100a234b call eax */
  call_ind((uint32_t)(EAX), 0x100a234du);
  /* 100a234d mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2352 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2355 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2357 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a235d push 0x100af5a8 */
  push32((uint32_t)(0x100af5a8u));
  /* 100a2362 push 0x100b60c0 */
  push32((uint32_t)(0x100b60c0u));
  /* 100a2367 call eax */
  call_ind((uint32_t)(EAX), 0x100a2369u);
  /* 100a2369 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a236e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2373 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2379 push 0x100af5a0 */
  push32((uint32_t)(0x100af5a0u));
  /* 100a237e push 0x100b3910 */
  push32((uint32_t)(0x100b3910u));
  /* 100a2383 call eax */
  call_ind((uint32_t)(EAX), 0x100a2385u);
  /* 100a2385 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a238a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a238d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a238f je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2395 push 0x100af598 */
  push32((uint32_t)(0x100af598u));
  /* 100a239a push 0x100b61c8 */
  push32((uint32_t)(0x100b61c8u));
  /* 100a239f call eax */
  call_ind((uint32_t)(EAX), 0x100a23a1u);
  /* 100a23a1 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a23a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a23a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a23ab je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a23b1 push 0x100af590 */
  push32((uint32_t)(0x100af590u));
  /* 100a23b6 push 0x100b61d0 */
  push32((uint32_t)(0x100b61d0u));
  /* 100a23bb call eax */
  call_ind((uint32_t)(EAX), 0x100a23bdu);
  /* 100a23bd mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a23c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a23c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a23c7 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a23cd push 0x100af588 */
  push32((uint32_t)(0x100af588u));
  /* 100a23d2 push 0x100b3840 */
  push32((uint32_t)(0x100b3840u));
  /* 100a23d7 call eax */
  call_ind((uint32_t)(EAX), 0x100a23d9u);
  /* 100a23d9 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a23de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a23e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a23e3 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a23e9 push 0x100af580 */
  push32((uint32_t)(0x100af580u));
  /* 100a23ee push 0x100b3850 */
  push32((uint32_t)(0x100b3850u));
  /* 100a23f3 call eax */
  call_ind((uint32_t)(EAX), 0x100a23f5u);
  /* 100a23f5 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a23fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a23fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a23ff je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2405 push 0x100af578 */
  push32((uint32_t)(0x100af578u));
  /* 100a240a push 0x100b3738 */
  push32((uint32_t)(0x100b3738u));
  /* 100a240f call eax */
  call_ind((uint32_t)(EAX), 0x100a2411u);
  /* 100a2411 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2416 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a241b je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2421 push 0x100af570 */
  push32((uint32_t)(0x100af570u));
  /* 100a2426 push 0x100b35f8 */
  push32((uint32_t)(0x100b35f8u));
  /* 100a242b call eax */
  call_ind((uint32_t)(EAX), 0x100a242du);
  /* 100a242d mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2437 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a243d push 0x100af568 */
  push32((uint32_t)(0x100af568u));
  /* 100a2442 push 0x100b36d8 */
  push32((uint32_t)(0x100b36d8u));
  /* 100a2447 call eax */
  call_ind((uint32_t)(EAX), 0x100a2449u);
  /* 100a2449 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a244e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a2453 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2459 push 0x100af560 */
  push32((uint32_t)(0x100af560u));
  /* 100a245e push 0x100b3600 */
  push32((uint32_t)(0x100b3600u));
  /* 100a2463 call eax */
  call_ind((uint32_t)(EAX), 0x100a2465u);
  /* 100a2465 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a246a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a246d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a246f je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a2475 push 0x100af54c */
  push32((uint32_t)(0x100af54cu));
  /* 100a247a push 0x100b62b8 */
  push32((uint32_t)(0x100b62b8u));
  /* 100a247f call eax */
  call_ind((uint32_t)(EAX), 0x100a2481u);
  /* 100a2481 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a2486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a248b je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a248d push 0x100af538 */
  push32((uint32_t)(0x100af538u));
  /* 100a2492 push 0x100b62a0 */
  push32((uint32_t)(0x100b62a0u));
  /* 100a2497 call eax */
  call_ind((uint32_t)(EAX), 0x100a2499u);
  /* 100a2499 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a249e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a24a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a24a3 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a24a5 push 0x100af524 */
  push32((uint32_t)(0x100af524u));
  /* 100a24aa push 0x100b62b0 */
  push32((uint32_t)(0x100b62b0u));
  /* 100a24af call eax */
  call_ind((uint32_t)(EAX), 0x100a24b1u);
  /* 100a24b1 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a24b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a24b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a24bb je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a24bd push 0x100af510 */
  push32((uint32_t)(0x100af510u));
  /* 100a24c2 push 0x100b6290 */
  push32((uint32_t)(0x100b6290u));
  /* 100a24c7 call eax */
  call_ind((uint32_t)(EAX), 0x100a24c9u);
  /* 100a24c9 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a24ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a24d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a24d3 je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a24d5 push 0x100af4fc */
  push32((uint32_t)(0x100af4fcu));
  /* 100a24da push 0x100b6298 */
  push32((uint32_t)(0x100b6298u));
  /* 100a24df call eax */
  call_ind((uint32_t)(EAX), 0x100a24e1u);
  /* 100a24e1 mov eax, dword ptr [0x100b63cc] */
  EAX = (r32((uint32_t)(0x100b63cc)));
  /* 100a24e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a24e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a24eb je 0x100a24fc */
  if (C.zf) goto L_100a24fc;
  /* 100a24ed push 0x100af4e8 */
  push32((uint32_t)(0x100af4e8u));
  /* 100a24f2 push 0x100b6288 */
  push32((uint32_t)(0x100b6288u));
  /* 100a24f7 call eax */
  call_ind((uint32_t)(EAX), 0x100a24f9u);
  /* 100a24f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a24fc:;
  /* 100a24fc push 4 */
  push32((uint32_t)(0x4u));
  /* 100a24fe push 4 */
  push32((uint32_t)(0x4u));
  /* 100a2500 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a2502 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a2508u);
  /* 100a2508 push 6 */
  push32((uint32_t)(0x6u));
  /* 100a250a call dword ptr [0x100b64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64f0))), 0x100a2510u);
  /* 100a2510 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a2512 push 0x100af4d4 */
  push32((uint32_t)(0x100af4d4u));
  /* 100a2517 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a2519 call dword ptr [0x100b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64f4))), 0x100a251fu);
  /* 100a251f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a2521 push 0x100af4c0 */
  push32((uint32_t)(0x100af4c0u));
  /* 100a2526 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a2528 call dword ptr [0x100b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64f4))), 0x100a252eu);
  /* 100a252e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a2530 push 0x100af4ac */
  push32((uint32_t)(0x100af4acu));
  /* 100a2535 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a2537 call dword ptr [0x100b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64f4))), 0x100a253du);
  /* 100a253d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a253f push 0x100af498 */
  push32((uint32_t)(0x100af498u));
  /* 100a2544 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a2546 call dword ptr [0x100b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64f4))), 0x100a254cu);
  /* 100a254c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a254f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a2551 push 0x100af484 */
  push32((uint32_t)(0x100af484u));
  /* 100a2556 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a2558 call dword ptr [0x100b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64f4))), 0x100a255eu);
  /* 100a255e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a2560 push 0x100af470 */
  push32((uint32_t)(0x100af470u));
  /* 100a2565 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a2567 call dword ptr [0x100b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64f4))), 0x100a256du);
  /* 100a256d push 0x100afb74 */
  push32((uint32_t)(0x100afb74u));
  /* 100a2572 call dword ptr [0x100b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6530))), 0x100a2578u);
  /* 100a2578 push 0x100af464 */
  push32((uint32_t)(0x100af464u));
  /* 100a257d call dword ptr [0x100b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b652c))), 0x100a2583u);
  /* 100a2583 push 0x100af454 */
  push32((uint32_t)(0x100af454u));
  /* 100a2588 call dword ptr [0x100b6534] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6534))), 0x100a258eu);
  /* 100a258e push 0x100af448 */
  push32((uint32_t)(0x100af448u));
  /* 100a2593 call dword ptr [0x100b653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b653c))), 0x100a2599u);
  /* 100a2599 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100a259e call dword ptr [0x100b64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64f8))), 0x100a25a4u);
  /* 100a25a4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a25a6 call dword ptr [0x100b64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64fc))), 0x100a25acu);
  /* 100a25ac push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a25ae call dword ptr [0x100b6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6500))), 0x100a25b4u);
  /* 100a25b4 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 100a25b9 call dword ptr [0x100b6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6504))), 0x100a25bfu);
  /* 100a25bf push 5 */
  push32((uint32_t)(0x5u));
  /* 100a25c1 call dword ptr [0x100b6508] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6508))), 0x100a25c7u);
  /* 100a25c7 add esp, 0x9c */
  { uint32_t _a=(ESP),_b=(0x9cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a25cd ret  */
  ESPCHK(0x100a1010u, _esp0);
  ESP += 4; return;
}

/* FUN_100025d0 @ 0x100a25d0 (20 bytes, 7 insns) */
void f_100a25d0(void) {
  FTRACE(0x100a25d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a25d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a25d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a25d8 push eax */
  push32((uint32_t)(EAX));
  /* 100a25d9 push ecx */
  push32((uint32_t)(ECX));
  /* 100a25da call dword ptr [0x100b64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e0))), 0x100a25e0u);
  /* 100a25e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a25e3 ret  */
  ESPCHK(0x100a25d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f0 @ 0x100a25f0 (25 bytes, 9 insns) */
void f_100a25f0(void) {
  FTRACE(0x100a25f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a25f0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100a25f4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a25f8 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a25fc push eax */
  push32((uint32_t)(EAX));
  /* 100a25fd push ecx */
  push32((uint32_t)(ECX));
  /* 100a25fe push edx */
  push32((uint32_t)(EDX));
  /* 100a25ff call dword ptr [0x100b64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64ec))), 0x100a2605u);
  /* 100a2605 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2608 ret  */
  ESPCHK(0x100a25f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x100a2610 (6 bytes, 1 insns) */
void f_100a2610(void) {
  FTRACE(0x100a2610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2610 jmp dword ptr [0x100b6518] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100b6518)))); return;
}

/* FUN_10002620 @ 0x100a2620 (20 bytes, 7 insns) */
void f_100a2620(void) {
  FTRACE(0x100a2620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2620 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a2624 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a2628 push eax */
  push32((uint32_t)(EAX));
  /* 100a2629 push ecx */
  push32((uint32_t)(ECX));
  /* 100a262a call dword ptr [0x100b6538] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6538))), 0x100a2630u);
  /* 100a2630 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2633 ret  */
  ESPCHK(0x100a2620u, _esp0);
  ESP += 4; return;
}

/* FUN_10002640 @ 0x100a2640 (6 bytes, 1 insns) */
void f_100a2640(void) {
  FTRACE(0x100a2640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2640 jmp dword ptr [0x100b6544] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100b6544)))); return;
}

/* FUN_10002650 @ 0x100a2650 (6 bytes, 1 insns) */
void f_100a2650(void) {
  FTRACE(0x100a2650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2650 jmp dword ptr [0x100b6548] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100b6548)))); return;
}

/* FUN_10002660 @ 0x100a2660 (6 bytes, 1 insns) */
void f_100a2660(void) {
  FTRACE(0x100a2660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2660 jmp dword ptr [0x100b6550] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100b6550)))); return;
}

/* FUN_10002670 @ 0x100a2670 (13 bytes, 5 insns) */
void f_100a2670(void) {
  FTRACE(0x100a2670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2670 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a2674 push eax */
  push32((uint32_t)(EAX));
  /* 100a2675 call dword ptr [0x100b6554] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6554))), 0x100a267bu);
  /* 100a267b pop ecx */
  ECX = (pop32());
  /* 100a267c ret  */
  ESPCHK(0x100a2670u, _esp0);
  ESP += 4; return;
}

/* FUN_10002680 @ 0x100a2680 (20 bytes, 7 insns) */
void f_100a2680(void) {
  FTRACE(0x100a2680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2680 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a2684 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a2688 push eax */
  push32((uint32_t)(EAX));
  /* 100a2689 push ecx */
  push32((uint32_t)(ECX));
  /* 100a268a call dword ptr [0x100b6558] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6558))), 0x100a2690u);
  /* 100a2690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2693 ret  */
  ESPCHK(0x100a2680u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x100a26a0 (6 bytes, 1 insns) */
void f_100a26a0(void) {
  FTRACE(0x100a26a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a26a0 jmp dword ptr [0x100b655c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100b655c)))); return;
}

/* FUN_100026b0 @ 0x100a26b0 (20 bytes, 7 insns) */
void f_100a26b0(void) {
  FTRACE(0x100a26b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a26b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a26b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a26b8 push eax */
  push32((uint32_t)(EAX));
  /* 100a26b9 push ecx */
  push32((uint32_t)(ECX));
  /* 100a26ba call dword ptr [0x100b6238] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6238))), 0x100a26c0u);
  /* 100a26c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a26c3 ret  */
  ESPCHK(0x100a26b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026d0 @ 0x100a26d0 (15 bytes, 5 insns) */
void f_100a26d0(void) {
  FTRACE(0x100a26d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a26d0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a26d4 push eax */
  push32((uint32_t)(EAX));
  /* 100a26d5 call dword ptr [0x100b6280] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6280))), 0x100a26dbu);
  /* 100a26db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a26de ret  */
  ESPCHK(0x100a26d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026e0 @ 0x100a26e0 (20 bytes, 7 insns) */
void f_100a26e0(void) {
  FTRACE(0x100a26e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a26e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a26e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a26e8 push eax */
  push32((uint32_t)(EAX));
  /* 100a26e9 push ecx */
  push32((uint32_t)(ECX));
  /* 100a26ea call dword ptr [0x100b3700] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b3700))), 0x100a26f0u);
  /* 100a26f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a26f3 ret  */
  ESPCHK(0x100a26e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x100a2700 (13 bytes, 5 insns) */
void f_100a2700(void) {
  FTRACE(0x100a2700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2700 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a2704 push eax */
  push32((uint32_t)(EAX));
  /* 100a2705 call dword ptr [0x100b38a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b38a0))), 0x100a270bu);
  /* 100a270b pop ecx */
  ECX = (pop32());
  /* 100a270c ret  */
  ESPCHK(0x100a2700u, _esp0);
  ESP += 4; return;
}

/* FUN_10002710 @ 0x100a2710 (15 bytes, 5 insns) */
void f_100a2710(void) {
  FTRACE(0x100a2710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2710 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a2714 push eax */
  push32((uint32_t)(EAX));
  /* 100a2715 call dword ptr [0x100b6560] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6560))), 0x100a271bu);
  /* 100a271b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a271e ret  */
  ESPCHK(0x100a2710u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x100a2720 (25 bytes, 9 insns) */
void f_100a2720(void) {
  FTRACE(0x100a2720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2720 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100a2724 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a2728 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a272c push eax */
  push32((uint32_t)(EAX));
  /* 100a272d push ecx */
  push32((uint32_t)(ECX));
  /* 100a272e push edx */
  push32((uint32_t)(EDX));
  /* 100a272f call dword ptr [0x100b5f90] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b5f90))), 0x100a2735u);
  /* 100a2735 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2738 ret  */
  ESPCHK(0x100a2720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x100a2740 (13 bytes, 5 insns) */
void f_100a2740(void) {
  FTRACE(0x100a2740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2740 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a2744 push eax */
  push32((uint32_t)(EAX));
  /* 100a2745 call dword ptr [0x100b3900] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b3900))), 0x100a274bu);
  /* 100a274b pop ecx */
  ECX = (pop32());
  /* 100a274c ret  */
  ESPCHK(0x100a2740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002750 @ 0x100a2750 (6 bytes, 1 insns) */
void f_100a2750(void) {
  FTRACE(0x100a2750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2750 jmp dword ptr [0x100b6218] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100b6218)))); return;
}

/* FUN_10002760 @ 0x100a2760 (6 bytes, 1 insns) */
void f_100a2760(void) {
  FTRACE(0x100a2760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2760 jmp dword ptr [0x100b3918] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100b3918)))); return;
}

/* FUN_10002770 @ 0x100a2770 (82 bytes, 28 insns) */
void f_100a2770(void) {
  FTRACE(0x100a2770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2770 mov eax, dword ptr [0x100b63b0] */
  EAX = (r32((uint32_t)(0x100b63b0)));
  /* 100a2775 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a277b push esi */
  push32((uint32_t)(ESI));
  /* 100a277c push edi */
  push32((uint32_t)(EDI));
  /* 100a277d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 100a2784 push edi */
  push32((uint32_t)(EDI));
  /* 100a2785 push eax */
  push32((uint32_t)(EAX));
  /* 100a2786 call dword ptr [0x100ae088] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae088))), 0x100a278cu);
  /* 100a278c mov esi, eax */
  ESI = (EAX);
  /* 100a278e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a2790 jne 0x100a27b7 */
  if (!C.zf) goto L_100a27b7;
  /* 100a2792 push edi */
  push32((uint32_t)(EDI));
  /* 100a2793 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 100a2797 push 0x100afedc */
  push32((uint32_t)(0x100afedcu));
  /* 100a279c push ecx */
  push32((uint32_t)(ECX));
  /* 100a279d call 0x100a6e50 */
  push32(0x100a27a2u); f_100a6e50();
  /* 100a27a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a27a5 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 100a27a9 push esi */
  push32((uint32_t)(ESI));
  /* 100a27aa push 0x100afecc */
  push32((uint32_t)(0x100afeccu));
  /* 100a27af push edx */
  push32((uint32_t)(EDX));
  /* 100a27b0 push esi */
  push32((uint32_t)(ESI));
  /* 100a27b1 call dword ptr [0x100ae0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0dc))), 0x100a27b7u);
L_100a27b7:;
  /* 100a27b7 mov eax, esi */
  EAX = (ESI);
  /* 100a27b9 pop edi */
  EDI = (pop32());
  /* 100a27ba pop esi */
  ESI = (pop32());
  /* 100a27bb add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a27c1 ret  */
  ESPCHK(0x100a2770u, _esp0);
  ESP += 4; return;
}

/* FUN_100027d0 @ 0x100a27d0 (1844 bytes, 376 insns) */
void f_100a27d0(void) {
  FTRACE(0x100a27d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a27d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a27d4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a27d5 jne 0x100a2efc */
  if (!C.zf) goto L_100a2efc;
  /* 100a27db push 0x100b0630 */
  push32((uint32_t)(0x100b0630u));
  /* 100a27e0 call dword ptr [0x100ae004] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae004))), 0x100a27e6u);
  /* 100a27e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a27e8 mov dword ptr [0x100b63b0], eax */
  w32((uint32_t)(0x100b63b0), (EAX));
  /* 100a27ed jne 0x100a2809 */
  if (!C.zf) goto L_100a2809;
  /* 100a27ef push eax */
  push32((uint32_t)(EAX));
  /* 100a27f0 push 0x100b0628 */
  push32((uint32_t)(0x100b0628u));
  /* 100a27f5 push 0x100b0610 */
  push32((uint32_t)(0x100b0610u));
  /* 100a27fa push eax */
  push32((uint32_t)(EAX));
  /* 100a27fb call dword ptr [0x100ae0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0dc))), 0x100a2801u);
  /* 100a2801 mov eax, 1 */
  EAX = (0x1u);
  /* 100a2806 ret 0xc */
  ESPCHK(0x100a27d0u, _esp0);
  ESP += 16; return;
L_100a2809:;
  /* 100a2809 push 0x100b0600 */
  push32((uint32_t)(0x100b0600u));
  /* 100a280e call 0x100a2770 */
  push32(0x100a2813u); f_100a2770();
  /* 100a2813 push 0x100b05f0 */
  push32((uint32_t)(0x100b05f0u));
  /* 100a2818 mov dword ptr [0x100b63b4], eax */
  w32((uint32_t)(0x100b63b4), (EAX));
  /* 100a281d call 0x100a2770 */
  push32(0x100a2822u); f_100a2770();
  /* 100a2822 push 0x100b05e0 */
  push32((uint32_t)(0x100b05e0u));
  /* 100a2827 mov dword ptr [0x100b63b8], eax */
  w32((uint32_t)(0x100b63b8), (EAX));
  /* 100a282c call 0x100a2770 */
  push32(0x100a2831u); f_100a2770();
  /* 100a2831 push 0x100b05d4 */
  push32((uint32_t)(0x100b05d4u));
  /* 100a2836 mov dword ptr [0x100b63bc], eax */
  w32((uint32_t)(0x100b63bc), (EAX));
  /* 100a283b call 0x100a2770 */
  push32(0x100a2840u); f_100a2770();
  /* 100a2840 push 0x100b05c4 */
  push32((uint32_t)(0x100b05c4u));
  /* 100a2845 mov dword ptr [0x100b63c0], eax */
  w32((uint32_t)(0x100b63c0), (EAX));
  /* 100a284a call 0x100a2770 */
  push32(0x100a284fu); f_100a2770();
  /* 100a284f push 0x100b05b0 */
  push32((uint32_t)(0x100b05b0u));
  /* 100a2854 mov dword ptr [0x100b63c4], eax */
  w32((uint32_t)(0x100b63c4), (EAX));
  /* 100a2859 call 0x100a2770 */
  push32(0x100a285eu); f_100a2770();
  /* 100a285e push 0x100b05a0 */
  push32((uint32_t)(0x100b05a0u));
  /* 100a2863 mov dword ptr [0x100b63c8], eax */
  w32((uint32_t)(0x100b63c8), (EAX));
  /* 100a2868 call 0x100a2770 */
  push32(0x100a286du); f_100a2770();
  /* 100a286d push 0x100b0590 */
  push32((uint32_t)(0x100b0590u));
  /* 100a2872 mov dword ptr [0x100b63cc], eax */
  w32((uint32_t)(0x100b63cc), (EAX));
  /* 100a2877 call 0x100a2770 */
  push32(0x100a287cu); f_100a2770();
  /* 100a287c push 0x100b057c */
  push32((uint32_t)(0x100b057cu));
  /* 100a2881 mov dword ptr [0x100b63d0], eax */
  w32((uint32_t)(0x100b63d0), (EAX));
  /* 100a2886 call 0x100a2770 */
  push32(0x100a288bu); f_100a2770();
  /* 100a288b push 0x100b0568 */
  push32((uint32_t)(0x100b0568u));
  /* 100a2890 mov dword ptr [0x100b63d4], eax */
  w32((uint32_t)(0x100b63d4), (EAX));
  /* 100a2895 call 0x100a2770 */
  push32(0x100a289au); f_100a2770();
  /* 100a289a push 0x100b0558 */
  push32((uint32_t)(0x100b0558u));
  /* 100a289f mov dword ptr [0x100b63d8], eax */
  w32((uint32_t)(0x100b63d8), (EAX));
  /* 100a28a4 call 0x100a2770 */
  push32(0x100a28a9u); f_100a2770();
  /* 100a28a9 push 0x100b0548 */
  push32((uint32_t)(0x100b0548u));
  /* 100a28ae mov dword ptr [0x100b63dc], eax */
  w32((uint32_t)(0x100b63dc), (EAX));
  /* 100a28b3 call 0x100a2770 */
  push32(0x100a28b8u); f_100a2770();
  /* 100a28b8 push 0x100b0538 */
  push32((uint32_t)(0x100b0538u));
  /* 100a28bd mov dword ptr [0x100b63e0], eax */
  w32((uint32_t)(0x100b63e0), (EAX));
  /* 100a28c2 call 0x100a2770 */
  push32(0x100a28c7u); f_100a2770();
  /* 100a28c7 push 0x100b0528 */
  push32((uint32_t)(0x100b0528u));
  /* 100a28cc mov dword ptr [0x100b63e4], eax */
  w32((uint32_t)(0x100b63e4), (EAX));
  /* 100a28d1 call 0x100a2770 */
  push32(0x100a28d6u); f_100a2770();
  /* 100a28d6 push 0x100b0518 */
  push32((uint32_t)(0x100b0518u));
  /* 100a28db mov dword ptr [0x100b63e8], eax */
  w32((uint32_t)(0x100b63e8), (EAX));
  /* 100a28e0 call 0x100a2770 */
  push32(0x100a28e5u); f_100a2770();
  /* 100a28e5 push 0x100b0508 */
  push32((uint32_t)(0x100b0508u));
  /* 100a28ea mov dword ptr [0x100b63ec], eax */
  w32((uint32_t)(0x100b63ec), (EAX));
  /* 100a28ef call 0x100a2770 */
  push32(0x100a28f4u); f_100a2770();
  /* 100a28f4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a28f7 mov dword ptr [0x100b63f0], eax */
  w32((uint32_t)(0x100b63f0), (EAX));
  /* 100a28fc push 0x100b04f8 */
  push32((uint32_t)(0x100b04f8u));
  /* 100a2901 call 0x100a2770 */
  push32(0x100a2906u); f_100a2770();
  /* 100a2906 push 0x100b04e8 */
  push32((uint32_t)(0x100b04e8u));
  /* 100a290b mov dword ptr [0x100b63f4], eax */
  w32((uint32_t)(0x100b63f4), (EAX));
  /* 100a2910 call 0x100a2770 */
  push32(0x100a2915u); f_100a2770();
  /* 100a2915 push 0x100b04d4 */
  push32((uint32_t)(0x100b04d4u));
  /* 100a291a mov dword ptr [0x100b63f8], eax */
  w32((uint32_t)(0x100b63f8), (EAX));
  /* 100a291f call 0x100a2770 */
  push32(0x100a2924u); f_100a2770();
  /* 100a2924 push 0x100b04cc */
  push32((uint32_t)(0x100b04ccu));
  /* 100a2929 mov dword ptr [0x100b63fc], eax */
  w32((uint32_t)(0x100b63fc), (EAX));
  /* 100a292e call 0x100a2770 */
  push32(0x100a2933u); f_100a2770();
  /* 100a2933 push 0x100b04bc */
  push32((uint32_t)(0x100b04bcu));
  /* 100a2938 mov dword ptr [0x100b6400], eax */
  w32((uint32_t)(0x100b6400), (EAX));
  /* 100a293d call 0x100a2770 */
  push32(0x100a2942u); f_100a2770();
  /* 100a2942 push 0x100b04ac */
  push32((uint32_t)(0x100b04acu));
  /* 100a2947 mov dword ptr [0x100b6404], eax */
  w32((uint32_t)(0x100b6404), (EAX));
  /* 100a294c call 0x100a2770 */
  push32(0x100a2951u); f_100a2770();
  /* 100a2951 push 0x100b04a0 */
  push32((uint32_t)(0x100b04a0u));
  /* 100a2956 mov dword ptr [0x100b6408], eax */
  w32((uint32_t)(0x100b6408), (EAX));
  /* 100a295b call 0x100a2770 */
  push32(0x100a2960u); f_100a2770();
  /* 100a2960 push 0x100b0490 */
  push32((uint32_t)(0x100b0490u));
  /* 100a2965 mov dword ptr [0x100b640c], eax */
  w32((uint32_t)(0x100b640c), (EAX));
  /* 100a296a call 0x100a2770 */
  push32(0x100a296fu); f_100a2770();
  /* 100a296f push 0x100b0488 */
  push32((uint32_t)(0x100b0488u));
  /* 100a2974 mov dword ptr [0x100b6410], eax */
  w32((uint32_t)(0x100b6410), (EAX));
  /* 100a2979 call 0x100a2770 */
  push32(0x100a297eu); f_100a2770();
  /* 100a297e push 0x100b0478 */
  push32((uint32_t)(0x100b0478u));
  /* 100a2983 mov dword ptr [0x100b6428], eax */
  w32((uint32_t)(0x100b6428), (EAX));
  /* 100a2988 call 0x100a2770 */
  push32(0x100a298du); f_100a2770();
  /* 100a298d push 0x100b0468 */
  push32((uint32_t)(0x100b0468u));
  /* 100a2992 mov dword ptr [0x100b642c], eax */
  w32((uint32_t)(0x100b642c), (EAX));
  /* 100a2997 call 0x100a2770 */
  push32(0x100a299cu); f_100a2770();
  /* 100a299c push 0x100b045c */
  push32((uint32_t)(0x100b045cu));
  /* 100a29a1 mov dword ptr [0x100b6430], eax */
  w32((uint32_t)(0x100b6430), (EAX));
  /* 100a29a6 call 0x100a2770 */
  push32(0x100a29abu); f_100a2770();
  /* 100a29ab push 0x100b044c */
  push32((uint32_t)(0x100b044cu));
  /* 100a29b0 mov dword ptr [0x100b6434], eax */
  w32((uint32_t)(0x100b6434), (EAX));
  /* 100a29b5 call 0x100a2770 */
  push32(0x100a29bau); f_100a2770();
  /* 100a29ba push 0x100b0440 */
  push32((uint32_t)(0x100b0440u));
  /* 100a29bf mov dword ptr [0x100b6438], eax */
  w32((uint32_t)(0x100b6438), (EAX));
  /* 100a29c4 call 0x100a2770 */
  push32(0x100a29c9u); f_100a2770();
  /* 100a29c9 push 0x100b0430 */
  push32((uint32_t)(0x100b0430u));
  /* 100a29ce mov dword ptr [0x100b6454], eax */
  w32((uint32_t)(0x100b6454), (EAX));
  /* 100a29d3 call 0x100a2770 */
  push32(0x100a29d8u); f_100a2770();
  /* 100a29d8 push 0x100b0428 */
  push32((uint32_t)(0x100b0428u));
  /* 100a29dd mov dword ptr [0x100b643c], eax */
  w32((uint32_t)(0x100b643c), (EAX));
  /* 100a29e2 call 0x100a2770 */
  push32(0x100a29e7u); f_100a2770();
  /* 100a29e7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a29ea mov dword ptr [0x100b6440], eax */
  w32((uint32_t)(0x100b6440), (EAX));
  /* 100a29ef push 0x100b0418 */
  push32((uint32_t)(0x100b0418u));
  /* 100a29f4 call 0x100a2770 */
  push32(0x100a29f9u); f_100a2770();
  /* 100a29f9 push 0x100b0408 */
  push32((uint32_t)(0x100b0408u));
  /* 100a29fe mov dword ptr [0x100b6444], eax */
  w32((uint32_t)(0x100b6444), (EAX));
  /* 100a2a03 call 0x100a2770 */
  push32(0x100a2a08u); f_100a2770();
  /* 100a2a08 push 0x100b03f8 */
  push32((uint32_t)(0x100b03f8u));
  /* 100a2a0d mov dword ptr [0x100b6448], eax */
  w32((uint32_t)(0x100b6448), (EAX));
  /* 100a2a12 call 0x100a2770 */
  push32(0x100a2a17u); f_100a2770();
  /* 100a2a17 push 0x100b03ec */
  push32((uint32_t)(0x100b03ecu));
  /* 100a2a1c mov dword ptr [0x100b644c], eax */
  w32((uint32_t)(0x100b644c), (EAX));
  /* 100a2a21 call 0x100a2770 */
  push32(0x100a2a26u); f_100a2770();
  /* 100a2a26 push 0x100b03e4 */
  push32((uint32_t)(0x100b03e4u));
  /* 100a2a2b mov dword ptr [0x100b6450], eax */
  w32((uint32_t)(0x100b6450), (EAX));
  /* 100a2a30 call 0x100a2770 */
  push32(0x100a2a35u); f_100a2770();
  /* 100a2a35 push 0x100b03d4 */
  push32((uint32_t)(0x100b03d4u));
  /* 100a2a3a mov dword ptr [0x100b6458], eax */
  w32((uint32_t)(0x100b6458), (EAX));
  /* 100a2a3f call 0x100a2770 */
  push32(0x100a2a44u); f_100a2770();
  /* 100a2a44 push 0x100b03c4 */
  push32((uint32_t)(0x100b03c4u));
  /* 100a2a49 mov dword ptr [0x100b645c], eax */
  w32((uint32_t)(0x100b645c), (EAX));
  /* 100a2a4e call 0x100a2770 */
  push32(0x100a2a53u); f_100a2770();
  /* 100a2a53 push 0x100b03b4 */
  push32((uint32_t)(0x100b03b4u));
  /* 100a2a58 mov dword ptr [0x100b6460], eax */
  w32((uint32_t)(0x100b6460), (EAX));
  /* 100a2a5d call 0x100a2770 */
  push32(0x100a2a62u); f_100a2770();
  /* 100a2a62 push 0x100b03a4 */
  push32((uint32_t)(0x100b03a4u));
  /* 100a2a67 mov dword ptr [0x100b6464], eax */
  w32((uint32_t)(0x100b6464), (EAX));
  /* 100a2a6c call 0x100a2770 */
  push32(0x100a2a71u); f_100a2770();
  /* 100a2a71 push 0x100b0398 */
  push32((uint32_t)(0x100b0398u));
  /* 100a2a76 mov dword ptr [0x100b6468], eax */
  w32((uint32_t)(0x100b6468), (EAX));
  /* 100a2a7b call 0x100a2770 */
  push32(0x100a2a80u); f_100a2770();
  /* 100a2a80 push 0x100b038c */
  push32((uint32_t)(0x100b038cu));
  /* 100a2a85 mov dword ptr [0x100b646c], eax */
  w32((uint32_t)(0x100b646c), (EAX));
  /* 100a2a8a call 0x100a2770 */
  push32(0x100a2a8fu); f_100a2770();
  /* 100a2a8f push 0x100b037c */
  push32((uint32_t)(0x100b037cu));
  /* 100a2a94 mov dword ptr [0x100b6470], eax */
  w32((uint32_t)(0x100b6470), (EAX));
  /* 100a2a99 call 0x100a2770 */
  push32(0x100a2a9eu); f_100a2770();
  /* 100a2a9e push 0x100b0370 */
  push32((uint32_t)(0x100b0370u));
  /* 100a2aa3 mov dword ptr [0x100b6474], eax */
  w32((uint32_t)(0x100b6474), (EAX));
  /* 100a2aa8 call 0x100a2770 */
  push32(0x100a2aadu); f_100a2770();
  /* 100a2aad push 0x100b0364 */
  push32((uint32_t)(0x100b0364u));
  /* 100a2ab2 mov dword ptr [0x100b6478], eax */
  w32((uint32_t)(0x100b6478), (EAX));
  /* 100a2ab7 call 0x100a2770 */
  push32(0x100a2abcu); f_100a2770();
  /* 100a2abc push 0x100b0358 */
  push32((uint32_t)(0x100b0358u));
  /* 100a2ac1 mov dword ptr [0x100b647c], eax */
  w32((uint32_t)(0x100b647c), (EAX));
  /* 100a2ac6 call 0x100a2770 */
  push32(0x100a2acbu); f_100a2770();
  /* 100a2acb push 0x100b034c */
  push32((uint32_t)(0x100b034cu));
  /* 100a2ad0 mov dword ptr [0x100b61b0], eax */
  w32((uint32_t)(0x100b61b0), (EAX));
  /* 100a2ad5 call 0x100a2770 */
  push32(0x100a2adau); f_100a2770();
  /* 100a2ada add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2add mov dword ptr [0x100b6480], eax */
  w32((uint32_t)(0x100b6480), (EAX));
  /* 100a2ae2 push 0x100b0340 */
  push32((uint32_t)(0x100b0340u));
  /* 100a2ae7 call 0x100a2770 */
  push32(0x100a2aecu); f_100a2770();
  /* 100a2aec push 0x100b0334 */
  push32((uint32_t)(0x100b0334u));
  /* 100a2af1 mov dword ptr [0x100b6484], eax */
  w32((uint32_t)(0x100b6484), (EAX));
  /* 100a2af6 call 0x100a2770 */
  push32(0x100a2afbu); f_100a2770();
  /* 100a2afb push 0x100b0324 */
  push32((uint32_t)(0x100b0324u));
  /* 100a2b00 mov dword ptr [0x100b6488], eax */
  w32((uint32_t)(0x100b6488), (EAX));
  /* 100a2b05 call 0x100a2770 */
  push32(0x100a2b0au); f_100a2770();
  /* 100a2b0a push 0x100b0318 */
  push32((uint32_t)(0x100b0318u));
  /* 100a2b0f mov dword ptr [0x100b648c], eax */
  w32((uint32_t)(0x100b648c), (EAX));
  /* 100a2b14 call 0x100a2770 */
  push32(0x100a2b19u); f_100a2770();
  /* 100a2b19 push 0x100b030c */
  push32((uint32_t)(0x100b030cu));
  /* 100a2b1e mov dword ptr [0x100b6490], eax */
  w32((uint32_t)(0x100b6490), (EAX));
  /* 100a2b23 call 0x100a2770 */
  push32(0x100a2b28u); f_100a2770();
  /* 100a2b28 mov dword ptr [0x100b6494], eax */
  w32((uint32_t)(0x100b6494), (EAX));
  /* 100a2b2d push 0x100b02fc */
  push32((uint32_t)(0x100b02fcu));
  /* 100a2b32 call 0x100a2770 */
  push32(0x100a2b37u); f_100a2770();
  /* 100a2b37 push 0x100b02ec */
  push32((uint32_t)(0x100b02ecu));
  /* 100a2b3c mov dword ptr [0x100b6498], eax */
  w32((uint32_t)(0x100b6498), (EAX));
  /* 100a2b41 call 0x100a2770 */
  push32(0x100a2b46u); f_100a2770();
  /* 100a2b46 push 0x100b02e0 */
  push32((uint32_t)(0x100b02e0u));
  /* 100a2b4b mov dword ptr [0x100b649c], eax */
  w32((uint32_t)(0x100b649c), (EAX));
  /* 100a2b50 call 0x100a2770 */
  push32(0x100a2b55u); f_100a2770();
  /* 100a2b55 push 0x100b02d8 */
  push32((uint32_t)(0x100b02d8u));
  /* 100a2b5a mov dword ptr [0x100b64a0], eax */
  w32((uint32_t)(0x100b64a0), (EAX));
  /* 100a2b5f call 0x100a2770 */
  push32(0x100a2b64u); f_100a2770();
  /* 100a2b64 push 0x100b02c8 */
  push32((uint32_t)(0x100b02c8u));
  /* 100a2b69 mov dword ptr [0x100b64a4], eax */
  w32((uint32_t)(0x100b64a4), (EAX));
  /* 100a2b6e call 0x100a2770 */
  push32(0x100a2b73u); f_100a2770();
  /* 100a2b73 push 0x100b02c0 */
  push32((uint32_t)(0x100b02c0u));
  /* 100a2b78 mov dword ptr [0x100b64a8], eax */
  w32((uint32_t)(0x100b64a8), (EAX));
  /* 100a2b7d call 0x100a2770 */
  push32(0x100a2b82u); f_100a2770();
  /* 100a2b82 push 0x100b02b4 */
  push32((uint32_t)(0x100b02b4u));
  /* 100a2b87 mov dword ptr [0x100b64ac], eax */
  w32((uint32_t)(0x100b64ac), (EAX));
  /* 100a2b8c call 0x100a2770 */
  push32(0x100a2b91u); f_100a2770();
  /* 100a2b91 push 0x100b02ac */
  push32((uint32_t)(0x100b02acu));
  /* 100a2b96 mov dword ptr [0x100b64b0], eax */
  w32((uint32_t)(0x100b64b0), (EAX));
  /* 100a2b9b call 0x100a2770 */
  push32(0x100a2ba0u); f_100a2770();
  /* 100a2ba0 push 0x100b0298 */
  push32((uint32_t)(0x100b0298u));
  /* 100a2ba5 mov dword ptr [0x100b64b4], eax */
  w32((uint32_t)(0x100b64b4), (EAX));
  /* 100a2baa call 0x100a2770 */
  push32(0x100a2bafu); f_100a2770();
  /* 100a2baf push 0x100b028c */
  push32((uint32_t)(0x100b028cu));
  /* 100a2bb4 mov dword ptr [0x100b3608], eax */
  w32((uint32_t)(0x100b3608), (EAX));
  /* 100a2bb9 call 0x100a2770 */
  push32(0x100a2bbeu); f_100a2770();
  /* 100a2bbe push 0x100b0280 */
  push32((uint32_t)(0x100b0280u));
  /* 100a2bc3 mov dword ptr [0x100b64c0], eax */
  w32((uint32_t)(0x100b64c0), (EAX));
  /* 100a2bc8 call 0x100a2770 */
  push32(0x100a2bcdu); f_100a2770();
  /* 100a2bcd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2bd0 mov dword ptr [0x100b64bc], eax */
  w32((uint32_t)(0x100b64bc), (EAX));
  /* 100a2bd5 push 0x100b026c */
  push32((uint32_t)(0x100b026cu));
  /* 100a2bda call 0x100a2770 */
  push32(0x100a2bdfu); f_100a2770();
  /* 100a2bdf push 0x100b025c */
  push32((uint32_t)(0x100b025cu));
  /* 100a2be4 mov dword ptr [0x100b64c4], eax */
  w32((uint32_t)(0x100b64c4), (EAX));
  /* 100a2be9 call 0x100a2770 */
  push32(0x100a2beeu); f_100a2770();
  /* 100a2bee push 0x100b024c */
  push32((uint32_t)(0x100b024cu));
  /* 100a2bf3 mov dword ptr [0x100b64c8], eax */
  w32((uint32_t)(0x100b64c8), (EAX));
  /* 100a2bf8 call 0x100a2770 */
  push32(0x100a2bfdu); f_100a2770();
  /* 100a2bfd push 0x100b023c */
  push32((uint32_t)(0x100b023cu));
  /* 100a2c02 mov dword ptr [0x100b64cc], eax */
  w32((uint32_t)(0x100b64cc), (EAX));
  /* 100a2c07 call 0x100a2770 */
  push32(0x100a2c0cu); f_100a2770();
  /* 100a2c0c push 0x100b0230 */
  push32((uint32_t)(0x100b0230u));
  /* 100a2c11 mov dword ptr [0x100b6418], eax */
  w32((uint32_t)(0x100b6418), (EAX));
  /* 100a2c16 call 0x100a2770 */
  push32(0x100a2c1bu); f_100a2770();
  /* 100a2c1b push 0x100b0220 */
  push32((uint32_t)(0x100b0220u));
  /* 100a2c20 mov dword ptr [0x100b6414], eax */
  w32((uint32_t)(0x100b6414), (EAX));
  /* 100a2c25 call 0x100a2770 */
  push32(0x100a2c2au); f_100a2770();
  /* 100a2c2a push 0x100b020c */
  push32((uint32_t)(0x100b020cu));
  /* 100a2c2f mov dword ptr [0x100b641c], eax */
  w32((uint32_t)(0x100b641c), (EAX));
  /* 100a2c34 call 0x100a2770 */
  push32(0x100a2c39u); f_100a2770();
  /* 100a2c39 push 0x100b01f4 */
  push32((uint32_t)(0x100b01f4u));
  /* 100a2c3e mov dword ptr [0x100b6420], eax */
  w32((uint32_t)(0x100b6420), (EAX));
  /* 100a2c43 call 0x100a2770 */
  push32(0x100a2c48u); f_100a2770();
  /* 100a2c48 push 0x100b01e4 */
  push32((uint32_t)(0x100b01e4u));
  /* 100a2c4d mov dword ptr [0x100b6424], eax */
  w32((uint32_t)(0x100b6424), (EAX));
  /* 100a2c52 call 0x100a2770 */
  push32(0x100a2c57u); f_100a2770();
  /* 100a2c57 push 0x100b01cc */
  push32((uint32_t)(0x100b01ccu));
  /* 100a2c5c mov dword ptr [0x100b64e8], eax */
  w32((uint32_t)(0x100b64e8), (EAX));
  /* 100a2c61 call 0x100a2770 */
  push32(0x100a2c66u); f_100a2770();
  /* 100a2c66 push 0x100b01bc */
  push32((uint32_t)(0x100b01bcu));
  /* 100a2c6b mov dword ptr [0x100b6518], eax */
  w32((uint32_t)(0x100b6518), (EAX));
  /* 100a2c70 call 0x100a2770 */
  push32(0x100a2c75u); f_100a2770();
  /* 100a2c75 push 0x100b01b4 */
  push32((uint32_t)(0x100b01b4u));
  /* 100a2c7a mov dword ptr [0x100b64e0], eax */
  w32((uint32_t)(0x100b64e0), (EAX));
  /* 100a2c7f call 0x100a2770 */
  push32(0x100a2c84u); f_100a2770();
  /* 100a2c84 push 0x100b01a4 */
  push32((uint32_t)(0x100b01a4u));
  /* 100a2c89 mov dword ptr [0x100b64ec], eax */
  w32((uint32_t)(0x100b64ec), (EAX));
  /* 100a2c8e call 0x100a2770 */
  push32(0x100a2c93u); f_100a2770();
  /* 100a2c93 push 0x100b0198 */
  push32((uint32_t)(0x100b0198u));
  /* 100a2c98 mov dword ptr [0x100b6538], eax */
  w32((uint32_t)(0x100b6538), (EAX));
  /* 100a2c9d call 0x100a2770 */
  push32(0x100a2ca2u); f_100a2770();
  /* 100a2ca2 push 0x100b0190 */
  push32((uint32_t)(0x100b0190u));
  /* 100a2ca7 mov dword ptr [0x100b64d0], eax */
  w32((uint32_t)(0x100b64d0), (EAX));
  /* 100a2cac call 0x100a2770 */
  push32(0x100a2cb1u); f_100a2770();
  /* 100a2cb1 push 0x100b0184 */
  push32((uint32_t)(0x100b0184u));
  /* 100a2cb6 mov dword ptr [0x100b64d4], eax */
  w32((uint32_t)(0x100b64d4), (EAX));
  /* 100a2cbb call 0x100a2770 */
  push32(0x100a2cc0u); f_100a2770();
  /* 100a2cc0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2cc3 mov dword ptr [0x100b64d8], eax */
  w32((uint32_t)(0x100b64d8), (EAX));
  /* 100a2cc8 push 0x100b0174 */
  push32((uint32_t)(0x100b0174u));
  /* 100a2ccd call 0x100a2770 */
  push32(0x100a2cd2u); f_100a2770();
  /* 100a2cd2 push 0x100b0160 */
  push32((uint32_t)(0x100b0160u));
  /* 100a2cd7 mov dword ptr [0x100b64dc], eax */
  w32((uint32_t)(0x100b64dc), (EAX));
  /* 100a2cdc call 0x100a2770 */
  push32(0x100a2ce1u); f_100a2770();
  /* 100a2ce1 push 0x100b0144 */
  push32((uint32_t)(0x100b0144u));
  /* 100a2ce6 mov dword ptr [0x100b64e4], eax */
  w32((uint32_t)(0x100b64e4), (EAX));
  /* 100a2ceb call 0x100a2770 */
  push32(0x100a2cf0u); f_100a2770();
  /* 100a2cf0 push 0x100b0130 */
  push32((uint32_t)(0x100b0130u));
  /* 100a2cf5 mov dword ptr [0x100b64f0], eax */
  w32((uint32_t)(0x100b64f0), (EAX));
  /* 100a2cfa call 0x100a2770 */
  push32(0x100a2cffu); f_100a2770();
  /* 100a2cff push 0x100b0124 */
  push32((uint32_t)(0x100b0124u));
  /* 100a2d04 mov dword ptr [0x100b64f4], eax */
  w32((uint32_t)(0x100b64f4), (EAX));
  /* 100a2d09 call 0x100a2770 */
  push32(0x100a2d0eu); f_100a2770();
  /* 100a2d0e push 0x100b0114 */
  push32((uint32_t)(0x100b0114u));
  /* 100a2d13 mov dword ptr [0x100b652c], eax */
  w32((uint32_t)(0x100b652c), (EAX));
  /* 100a2d18 call 0x100a2770 */
  push32(0x100a2d1du); f_100a2770();
  /* 100a2d1d push 0x100b0108 */
  push32((uint32_t)(0x100b0108u));
  /* 100a2d22 mov dword ptr [0x100b6530], eax */
  w32((uint32_t)(0x100b6530), (EAX));
  /* 100a2d27 call 0x100a2770 */
  push32(0x100a2d2cu); f_100a2770();
  /* 100a2d2c push 0x100b00fc */
  push32((uint32_t)(0x100b00fcu));
  /* 100a2d31 mov dword ptr [0x100b6534], eax */
  w32((uint32_t)(0x100b6534), (EAX));
  /* 100a2d36 call 0x100a2770 */
  push32(0x100a2d3bu); f_100a2770();
  /* 100a2d3b push 0x100b00e4 */
  push32((uint32_t)(0x100b00e4u));
  /* 100a2d40 mov dword ptr [0x100b653c], eax */
  w32((uint32_t)(0x100b653c), (EAX));
  /* 100a2d45 call 0x100a2770 */
  push32(0x100a2d4au); f_100a2770();
  /* 100a2d4a push 0x100b00c8 */
  push32((uint32_t)(0x100b00c8u));
  /* 100a2d4f mov dword ptr [0x100b64f8], eax */
  w32((uint32_t)(0x100b64f8), (EAX));
  /* 100a2d54 call 0x100a2770 */
  push32(0x100a2d59u); f_100a2770();
  /* 100a2d59 push 0x100b00ac */
  push32((uint32_t)(0x100b00acu));
  /* 100a2d5e mov dword ptr [0x100b64fc], eax */
  w32((uint32_t)(0x100b64fc), (EAX));
  /* 100a2d63 call 0x100a2770 */
  push32(0x100a2d68u); f_100a2770();
  /* 100a2d68 push 0x100b0094 */
  push32((uint32_t)(0x100b0094u));
  /* 100a2d6d mov dword ptr [0x100b6500], eax */
  w32((uint32_t)(0x100b6500), (EAX));
  /* 100a2d72 call 0x100a2770 */
  push32(0x100a2d77u); f_100a2770();
  /* 100a2d77 push 0x100b007c */
  push32((uint32_t)(0x100b007cu));
  /* 100a2d7c mov dword ptr [0x100b6504], eax */
  w32((uint32_t)(0x100b6504), (EAX));
  /* 100a2d81 call 0x100a2770 */
  push32(0x100a2d86u); f_100a2770();
  /* 100a2d86 push 0x100b0070 */
  push32((uint32_t)(0x100b0070u));
  /* 100a2d8b mov dword ptr [0x100b6508], eax */
  w32((uint32_t)(0x100b6508), (EAX));
  /* 100a2d90 call 0x100a2770 */
  push32(0x100a2d95u); f_100a2770();
  /* 100a2d95 push 0x100b0064 */
  push32((uint32_t)(0x100b0064u));
  /* 100a2d9a mov dword ptr [0x100b650c], eax */
  w32((uint32_t)(0x100b650c), (EAX));
  /* 100a2d9f call 0x100a2770 */
  push32(0x100a2da4u); f_100a2770();
  /* 100a2da4 push 0x100b0054 */
  push32((uint32_t)(0x100b0054u));
  /* 100a2da9 mov dword ptr [0x100b6510], eax */
  w32((uint32_t)(0x100b6510), (EAX));
  /* 100a2dae call 0x100a2770 */
  push32(0x100a2db3u); f_100a2770();
  /* 100a2db3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2db6 mov dword ptr [0x100b6514], eax */
  w32((uint32_t)(0x100b6514), (EAX));
  /* 100a2dbb push 0x100b0048 */
  push32((uint32_t)(0x100b0048u));
  /* 100a2dc0 call 0x100a2770 */
  push32(0x100a2dc5u); f_100a2770();
  /* 100a2dc5 push 0x100b003c */
  push32((uint32_t)(0x100b003cu));
  /* 100a2dca mov dword ptr [0x100b651c], eax */
  w32((uint32_t)(0x100b651c), (EAX));
  /* 100a2dcf call 0x100a2770 */
  push32(0x100a2dd4u); f_100a2770();
  /* 100a2dd4 push 0x100b0030 */
  push32((uint32_t)(0x100b0030u));
  /* 100a2dd9 mov dword ptr [0x100b6520], eax */
  w32((uint32_t)(0x100b6520), (EAX));
  /* 100a2dde call 0x100a2770 */
  push32(0x100a2de3u); f_100a2770();
  /* 100a2de3 push 0x100b0020 */
  push32((uint32_t)(0x100b0020u));
  /* 100a2de8 mov dword ptr [0x100b6540], eax */
  w32((uint32_t)(0x100b6540), (EAX));
  /* 100a2ded call 0x100a2770 */
  push32(0x100a2df2u); f_100a2770();
  /* 100a2df2 push 0x100b0014 */
  push32((uint32_t)(0x100b0014u));
  /* 100a2df7 mov dword ptr [0x100b6544], eax */
  w32((uint32_t)(0x100b6544), (EAX));
  /* 100a2dfc call 0x100a2770 */
  push32(0x100a2e01u); f_100a2770();
  /* 100a2e01 push 0x100b0008 */
  push32((uint32_t)(0x100b0008u));
  /* 100a2e06 mov dword ptr [0x100b6548], eax */
  w32((uint32_t)(0x100b6548), (EAX));
  /* 100a2e0b call 0x100a2770 */
  push32(0x100a2e10u); f_100a2770();
  /* 100a2e10 push 0x100afffc */
  push32((uint32_t)(0x100afffcu));
  /* 100a2e15 mov dword ptr [0x100b654c], eax */
  w32((uint32_t)(0x100b654c), (EAX));
  /* 100a2e1a call 0x100a2770 */
  push32(0x100a2e1fu); f_100a2770();
  /* 100a2e1f push 0x100affec */
  push32((uint32_t)(0x100affecu));
  /* 100a2e24 mov dword ptr [0x100b6550], eax */
  w32((uint32_t)(0x100b6550), (EAX));
  /* 100a2e29 call 0x100a2770 */
  push32(0x100a2e2eu); f_100a2770();
  /* 100a2e2e push 0x100affdc */
  push32((uint32_t)(0x100affdcu));
  /* 100a2e33 mov dword ptr [0x100b6554], eax */
  w32((uint32_t)(0x100b6554), (EAX));
  /* 100a2e38 call 0x100a2770 */
  push32(0x100a2e3du); f_100a2770();
  /* 100a2e3d push 0x100affc8 */
  push32((uint32_t)(0x100affc8u));
  /* 100a2e42 mov dword ptr [0x100b655c], eax */
  w32((uint32_t)(0x100b655c), (EAX));
  /* 100a2e47 call 0x100a2770 */
  push32(0x100a2e4cu); f_100a2770();
  /* 100a2e4c mov dword ptr [0x100b6558], eax */
  w32((uint32_t)(0x100b6558), (EAX));
  /* 100a2e51 push 0x100affb0 */
  push32((uint32_t)(0x100affb0u));
  /* 100a2e56 call 0x100a2770 */
  push32(0x100a2e5bu); f_100a2770();
  /* 100a2e5b push 0x100aff98 */
  push32((uint32_t)(0x100aff98u));
  /* 100a2e60 mov dword ptr [0x100b38a0], eax */
  w32((uint32_t)(0x100b38a0), (EAX));
  /* 100a2e65 call 0x100a2770 */
  push32(0x100a2e6au); f_100a2770();
  /* 100a2e6a push 0x100aff88 */
  push32((uint32_t)(0x100aff88u));
  /* 100a2e6f mov dword ptr [0x100b3700], eax */
  w32((uint32_t)(0x100b3700), (EAX));
  /* 100a2e74 call 0x100a2770 */
  push32(0x100a2e79u); f_100a2770();
  /* 100a2e79 push 0x100aff78 */
  push32((uint32_t)(0x100aff78u));
  /* 100a2e7e mov dword ptr [0x100b6560], eax */
  w32((uint32_t)(0x100b6560), (EAX));
  /* 100a2e83 call 0x100a2770 */
  push32(0x100a2e88u); f_100a2770();
  /* 100a2e88 push 0x100aff68 */
  push32((uint32_t)(0x100aff68u));
  /* 100a2e8d mov dword ptr [0x100b6524], eax */
  w32((uint32_t)(0x100b6524), (EAX));
  /* 100a2e92 call 0x100a2770 */
  push32(0x100a2e97u); f_100a2770();
  /* 100a2e97 push 0x100aff58 */
  push32((uint32_t)(0x100aff58u));
  /* 100a2e9c mov dword ptr [0x100b6528], eax */
  w32((uint32_t)(0x100b6528), (EAX));
  /* 100a2ea1 call 0x100a2770 */
  push32(0x100a2ea6u); f_100a2770();
  /* 100a2ea6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2ea9 mov dword ptr [0x100b6280], eax */
  w32((uint32_t)(0x100b6280), (EAX));
  /* 100a2eae push 0x100aff48 */
  push32((uint32_t)(0x100aff48u));
  /* 100a2eb3 call 0x100a2770 */
  push32(0x100a2eb8u); f_100a2770();
  /* 100a2eb8 push 0x100aff38 */
  push32((uint32_t)(0x100aff38u));
  /* 100a2ebd mov dword ptr [0x100b6238], eax */
  w32((uint32_t)(0x100b6238), (EAX));
  /* 100a2ec2 call 0x100a2770 */
  push32(0x100a2ec7u); f_100a2770();
  /* 100a2ec7 push 0x100aff28 */
  push32((uint32_t)(0x100aff28u));
  /* 100a2ecc mov dword ptr [0x100b5f90], eax */
  w32((uint32_t)(0x100b5f90), (EAX));
  /* 100a2ed1 call 0x100a2770 */
  push32(0x100a2ed6u); f_100a2770();
  /* 100a2ed6 push 0x100aff18 */
  push32((uint32_t)(0x100aff18u));
  /* 100a2edb mov dword ptr [0x100b3900], eax */
  w32((uint32_t)(0x100b3900), (EAX));
  /* 100a2ee0 call 0x100a2770 */
  push32(0x100a2ee5u); f_100a2770();
  /* 100a2ee5 push 0x100aff04 */
  push32((uint32_t)(0x100aff04u));
  /* 100a2eea mov dword ptr [0x100b6218], eax */
  w32((uint32_t)(0x100b6218), (EAX));
  /* 100a2eef call 0x100a2770 */
  push32(0x100a2ef4u); f_100a2770();
  /* 100a2ef4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2ef7 mov dword ptr [0x100b3918], eax */
  w32((uint32_t)(0x100b3918), (EAX));
L_100a2efc:;
  /* 100a2efc mov eax, 1 */
  EAX = (0x1u);
  /* 100a2f01 ret 0xc */
  ESPCHK(0x100a27d0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f10 @ 0x100a2f10 (34 bytes, 10 insns) */
void f_100a2f10(void) {
  FTRACE(0x100a2f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2f10 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a2f14 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a2f18 push eax */
  push32((uint32_t)(EAX));
  /* 100a2f19 push ecx */
  push32((uint32_t)(ECX));
  /* 100a2f1a push 0x100b063c */
  push32((uint32_t)(0x100b063cu));
  /* 100a2f1f push 0x100b3778 */
  push32((uint32_t)(0x100b3778u));
  /* 100a2f24 call 0x100a6e50 */
  push32(0x100a2f29u); f_100a6e50();
  /* 100a2f29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2f2c mov eax, 0x100b3778 */
  EAX = (0x100b3778u);
  /* 100a2f31 ret  */
  ESPCHK(0x100a2f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f40 @ 0x100a2f40 (45 bytes, 16 insns) */
void f_100a2f40(void) {
  FTRACE(0x100a2f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2f40 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a2f44 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a2f48 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a2f4d push eax */
  push32((uint32_t)(EAX));
  /* 100a2f4e push ecx */
  push32((uint32_t)(ECX));
  /* 100a2f4f call 0x100a2720 */
  push32(0x100a2f54u); f_100a2720();
  /* 100a2f54 mov ecx, eax */
  ECX = (EAX);
  /* 100a2f56 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 100a2f5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2f5d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100a2f60 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100a2f63 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100a2f66 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100a2f69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a2f6a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a2f6c ret  */
  ESPCHK(0x100a2f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f70 @ 0x100a2f70 (171 bytes, 77 insns) */
void f_100a2f70(void) {
  FTRACE(0x100a2f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a2f70 push ebx */
  push32((uint32_t)(EBX));
  /* 100a2f71 push ebp */
  push32((uint32_t)(EBP));
  /* 100a2f72 push esi */
  push32((uint32_t)(ESI));
  /* 100a2f73 push edi */
  push32((uint32_t)(EDI));
  /* 100a2f74 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 100a2f78 push edi */
  push32((uint32_t)(EDI));
  /* 100a2f79 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a2f7fu);
  /* 100a2f7f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 100a2f83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2f86 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a2f88 jl 0x100a2f91 */
  if ((C.sf!=C.of)) goto L_100a2f91;
  /* 100a2f8a pop edi */
  EDI = (pop32());
  /* 100a2f8b pop esi */
  ESI = (pop32());
  /* 100a2f8c pop ebp */
  EBP = (pop32());
  /* 100a2f8d mov al, 1 */
  AL = (0x1u);
  /* 100a2f8f pop ebx */
  EBX = (pop32());
  /* 100a2f90 ret  */
  ESPCHK(0x100a2f70u, _esp0);
  ESP += 4; return;
L_100a2f91:;
  /* 100a2f91 push edi */
  push32((uint32_t)(EDI));
  /* 100a2f92 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a2f98u);
  /* 100a2f98 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 100a2f9c sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a2f9e push esi */
  push32((uint32_t)(ESI));
  /* 100a2f9f push edi */
  push32((uint32_t)(EDI));
  /* 100a2fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 100a2fa1 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 100a2fa5 call 0x100a2f40 */
  push32(0x100a2faau); f_100a2f40();
  /* 100a2faa push ebp */
  push32((uint32_t)(EBP));
  /* 100a2fab mov ebx, eax */
  EBX = (EAX);
  /* 100a2fad call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a2fb3u);
  /* 100a2fb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2fb6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a2fb8 jle 0x100a3014 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3014;
  /* 100a2fba cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a2fc0 jle 0x100a3014 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3014;
  /* 100a2fc2 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 100a2fc7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100a2fc9 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100a2fcb sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 100a2fce mov eax, edx */
  EAX = (EDX);
  /* 100a2fd0 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100a2fd3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2fd5 mov ebx, edx */
  EBX = (EDX);
L_100a2fd7:;
  /* 100a2fd7 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a2fda mov eax, 0xf */
  EAX = (0xfu);
  /* 100a2fdf jg 0x100a2fe3 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a2fe3;
  /* 100a2fe1 mov eax, ebx */
  EAX = (EBX);
L_100a2fe3:;
  /* 100a2fe3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a2fe5 jge 0x100a2ff6 */
  if ((C.sf==C.of)) goto L_100a2ff6;
  /* 100a2fe7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a2fe9 push ebp */
  push32((uint32_t)(EBP));
  /* 100a2fea push edi */
  push32((uint32_t)(EDI));
  /* 100a2feb call 0x100a25f0 */
  push32(0x100a2ff0u); f_100a25f0();
  /* 100a2ff0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a2ff3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100a2ff4 jmp 0x100a2fd7 */
  goto L_100a2fd7;
L_100a2ff6:;
  /* 100a2ff6 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 100a2ffa push ecx */
  push32((uint32_t)(ECX));
  /* 100a2ffb push edi */
  push32((uint32_t)(EDI));
  /* 100a2ffc push ebp */
  push32((uint32_t)(EBP));
  /* 100a2ffd call 0x100a2f40 */
  push32(0x100a3002u); f_100a2f40();
  /* 100a3002 push eax */
  push32((uint32_t)(EAX));
  /* 100a3003 push edi */
  push32((uint32_t)(EDI));
  /* 100a3004 push ebp */
  push32((uint32_t)(EBP));
  /* 100a3005 call 0x100a25f0 */
  push32(0x100a300au); f_100a25f0();
  /* 100a300a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a300d mov al, 1 */
  AL = (0x1u);
  /* 100a300f pop edi */
  EDI = (pop32());
  /* 100a3010 pop esi */
  ESI = (pop32());
  /* 100a3011 pop ebp */
  EBP = (pop32());
  /* 100a3012 pop ebx */
  EBX = (pop32());
  /* 100a3013 ret  */
  ESPCHK(0x100a2f70u, _esp0);
  ESP += 4; return;
L_100a3014:;
  /* 100a3014 pop edi */
  EDI = (pop32());
  /* 100a3015 pop esi */
  ESI = (pop32());
  /* 100a3016 pop ebp */
  EBP = (pop32());
  /* 100a3017 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 100a3019 pop ebx */
  EBX = (pop32());
  /* 100a301a ret  */
  ESPCHK(0x100a2f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003020 @ 0x100a3020 (369 bytes, 82 insns) */
void f_100a3020(void) {
  FTRACE(0x100a3020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a3020 push ebx */
  push32((uint32_t)(EBX));
  /* 100a3021 push esi */
  push32((uint32_t)(ESI));
  /* 100a3022 call dword ptr [0x100b64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d0))), 0x100a3028u);
  /* 100a3028 push 0x100b6160 */
  push32((uint32_t)(0x100b6160u));
  /* 100a302d mov dword ptr [0x100b6284], eax */
  w32((uint32_t)(0x100b6284), (EAX));
  /* 100a3032 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a3038u);
  /* 100a3038 mov ebx, 1 */
  EBX = (0x1u);
  /* 100a303d mov esi, eax */
  ESI = (EAX);
  /* 100a303f push ebx */
  push32((uint32_t)(EBX));
  /* 100a3040 call 0x100a2710 */
  push32(0x100a3045u); f_100a2710();
  /* 100a3045 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a3047 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a3049 call 0x100a2710 */
  push32(0x100a304eu); f_100a2710();
  /* 100a304e push 5 */
  push32((uint32_t)(0x5u));
  /* 100a3050 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a3052 call 0x100a2710 */
  push32(0x100a3057u); f_100a2710();
  /* 100a3057 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a3059 mov eax, dword ptr [0x100b6284] */
  EAX = (r32((uint32_t)(0x100b6284)));
  /* 100a305e push 3 */
  push32((uint32_t)(0x3u));
  /* 100a3060 mov dword ptr [0x100b6180], esi */
  w32((uint32_t)(0x100b6180), (ESI));
  /* 100a3066 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 100a3069 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 100a306c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 100a306f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 100a3072 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100a3075 mov ecx, dword ptr [eax + 0x100b3ac0] */
  ECX = (r32((uint32_t)(EAX + 0x100b3ac0)));
  /* 100a307b lea edx, [eax + 0x100b3930] */
  EDX = ((uint32_t)(EAX + 0x100b3930));
  /* 100a3081 mov dword ptr [0x100b6190], edx */
  w32((uint32_t)(0x100b6190), (EDX));
  /* 100a3087 lea edx, [eax + 0x100b3ac4] */
  EDX = ((uint32_t)(EAX + 0x100b3ac4));
  /* 100a308d mov dword ptr [0x100b65d4], ecx */
  w32((uint32_t)(0x100b65d4), (ECX));
  /* 100a3093 mov ecx, dword ptr [eax + 0x100b3c54] */
  ECX = (r32((uint32_t)(EAX + 0x100b3c54)));
  /* 100a3099 mov dword ptr [0x100b6194], edx */
  w32((uint32_t)(0x100b6194), (EDX));
  /* 100a309f lea edx, [eax + 0x100b3c58] */
  EDX = ((uint32_t)(EAX + 0x100b3c58));
  /* 100a30a5 mov dword ptr [0x100b65d8], ecx */
  w32((uint32_t)(0x100b65d8), (ECX));
  /* 100a30ab mov dword ptr [0x100b621c], edx */
  w32((uint32_t)(0x100b621c), (EDX));
  /* 100a30b1 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a30b7u);
  /* 100a30b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a30b9 mov dword ptr [0x100b6260], eax */
  w32((uint32_t)(0x100b6260), (EAX));
  /* 100a30be call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a30c4u);
  /* 100a30c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a30c6 mov dword ptr [0x100b35f0], eax */
  w32((uint32_t)(0x100b35f0), (EAX));
  /* 100a30cb call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a30d1u);
  /* 100a30d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a30d3 mov dword ptr [0x100b6350], eax */
  w32((uint32_t)(0x100b6350), (EAX));
  /* 100a30d8 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a30deu);
  /* 100a30de push 5 */
  push32((uint32_t)(0x5u));
  /* 100a30e0 mov dword ptr [0x100b36f8], eax */
  w32((uint32_t)(0x100b36f8), (EAX));
  /* 100a30e5 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a30ebu);
  /* 100a30eb push ebx */
  push32((uint32_t)(EBX));
  /* 100a30ec mov dword ptr [0x100b60b8], eax */
  w32((uint32_t)(0x100b60b8), (EAX));
  /* 100a30f1 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a30f7u);
  /* 100a30f7 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a30fa mov dword ptr [0x100b6308], eax */
  w32((uint32_t)(0x100b6308), (EAX));
  /* 100a30ff call 0x100a2650 */
  push32(0x100a3104u); f_100a2650();
  /* 100a3104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a3106 jne 0x100a3112 */
  if (!C.zf) goto L_100a3112;
  /* 100a3108 mov dword ptr [0x100af248], 4 */
  w32((uint32_t)(0x100af248), (0x4u));
L_100a3112:;
  /* 100a3112 push 0x100af114 */
  push32((uint32_t)(0x100af114u));
  /* 100a3117 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100a3119 call dword ptr [0x100b64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64dc))), 0x100a311fu);
  /* 100a311f push 0x100b6568 */
  push32((uint32_t)(0x100b6568u));
  /* 100a3124 call 0x100a2700 */
  push32(0x100a3129u); f_100a2700();
  /* 100a3129 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100a312b push 0x100af244 */
  push32((uint32_t)(0x100af244u));
  /* 100a3130 call 0x100a26e0 */
  push32(0x100a3135u); f_100a26e0();
  /* 100a3135 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3138 mov byte ptr [0x100b6158], bl */
  w8((uint32_t)(0x100b6158), (BL));
  /* 100a313e mov byte ptr [0x100b615a], bl */
  w8((uint32_t)(0x100b615a), (BL));
  /* 100a3144 mov byte ptr [0x100b615c], bl */
  w8((uint32_t)(0x100b615c), (BL));
  /* 100a314a mov byte ptr [0x100b615d], bl */
  w8((uint32_t)(0x100b615d), (BL));
  /* 100a3150 mov byte ptr [0x100b62f3], bl */
  w8((uint32_t)(0x100b62f3), (BL));
  /* 100a3156 mov byte ptr [0x100b62f1], bl */
  w8((uint32_t)(0x100b62f1), (BL));
  /* 100a315c mov byte ptr [0x100b62f4], bl */
  w8((uint32_t)(0x100b62f4), (BL));
  /* 100a3162 mov byte ptr [0x100b62f5], bl */
  w8((uint32_t)(0x100b62f5), (BL));
  /* 100a3168 pop esi */
  ESI = (pop32());
  /* 100a3169 mov byte ptr [0x100b615b], 0 */
  w8((uint32_t)(0x100b615b), (0x0u));
  /* 100a3170 mov byte ptr [0x100b6159], 0 */
  w8((uint32_t)(0x100b6159), (0x0u));
  /* 100a3177 mov byte ptr [0x100b62f0], 0 */
  w8((uint32_t)(0x100b62f0), (0x0u));
  /* 100a317e mov byte ptr [0x100b62f2], 0 */
  w8((uint32_t)(0x100b62f2), (0x0u));
  /* 100a3185 mov dword ptr [0x100b661c], 0 */
  w32((uint32_t)(0x100b661c), (0x0u));
  /* 100a318f pop ebx */
  EBX = (pop32());
  /* 100a3190 ret  */
  ESPCHK(0x100a3020u, _esp0);
  ESP += 4; return;
}

/* FUN_100031a0 @ 0x100a31a0 (85 bytes, 29 insns) */
void f_100a31a0(void) {
  FTRACE(0x100a31a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a31a0 mov eax, dword ptr [0x100b5f28] */
  EAX = (r32((uint32_t)(0x100b5f28)));
  /* 100a31a5 push esi */
  push32((uint32_t)(ESI));
  /* 100a31a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a31a9 jg 0x100a31f3 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a31f3;
  /* 100a31ab push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a31b0 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a31b6u);
  /* 100a31b6 mov ecx, eax */
  ECX = (EAX);
  /* 100a31b8 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 100a31bd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100a31bf sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 100a31c2 mov eax, edx */
  EAX = (EDX);
  /* 100a31c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a31c7 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100a31ca add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a31cc mov esi, edx */
  ESI = (EDX);
  /* 100a31ce je 0x100a31f3 */
  if (C.zf) goto L_100a31f3;
  /* 100a31d0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a31d2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a31d4 push esi */
  push32((uint32_t)(ESI));
  /* 100a31d5 push 0x100b36d0 */
  push32((uint32_t)(0x100b36d0u));
  /* 100a31da call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a31e0u);
  /* 100a31e0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a31e2 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a31e4 push esi */
  push32((uint32_t)(ESI));
  /* 100a31e5 push 0x100b3610 */
  push32((uint32_t)(0x100b3610u));
  /* 100a31ea call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a31f0u);
  /* 100a31f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a31f3:;
  /* 100a31f3 pop esi */
  ESI = (pop32());
  /* 100a31f4 ret  */
  ESPCHK(0x100a31a0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x100a3200 (1 bytes, 1 insns) */
void f_100a3200(void) {
  FTRACE(0x100a3200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a3200 ret  */
  ESPCHK(0x100a3200u, _esp0);
  ESP += 4; return;
}

/* FUN_10003210 @ 0x100a3210 (157 bytes, 43 insns) */
void f_100a3210(void) {
  FTRACE(0x100a3210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a3210 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3212 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a3214 push 0x100b6320 */
  push32((uint32_t)(0x100b6320u));
  /* 100a3219 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a321fu);
  /* 100a321f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3221 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a3223 push 0x100b6328 */
  push32((uint32_t)(0x100b6328u));
  /* 100a3228 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a322eu);
  /* 100a322e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3230 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a3232 push 0x100b6310 */
  push32((uint32_t)(0x100b6310u));
  /* 100a3237 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a323du);
  /* 100a323d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a323f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a3241 push 0x100b6318 */
  push32((uint32_t)(0x100b6318u));
  /* 100a3246 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a324cu);
  /* 100a324c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a324e push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3250 push 0x100b6330 */
  push32((uint32_t)(0x100b6330u));
  /* 100a3255 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a325bu);
  /* 100a325b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a325d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a325f push 0x100b6268 */
  push32((uint32_t)(0x100b6268u));
  /* 100a3264 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a326au);
  /* 100a326a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a326d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a326f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a3271 push 0x100b6250 */
  push32((uint32_t)(0x100b6250u));
  /* 100a3276 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a327cu);
  /* 100a327c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a327e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a3280 push 0x100b6258 */
  push32((uint32_t)(0x100b6258u));
  /* 100a3285 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a328bu);
  /* 100a328b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a328d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a328f push 0x100b6270 */
  push32((uint32_t)(0x100b6270u));
  /* 100a3294 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a329au);
  /* 100a329a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a329c push 0xa */
  push32((uint32_t)(0xau));
  /* 100a329e push 0x100b6278 */
  push32((uint32_t)(0x100b6278u));
  /* 100a32a3 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a32a9u);
  /* 100a32a9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a32ac ret  */
  ESPCHK(0x100a3210u, _esp0);
  ESP += 4; return;
}

/* FUN_100032b0 @ 0x100a32b0 (79 bytes, 22 insns) */
void f_100a32b0(void) {
  FTRACE(0x100a32b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a32b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a32b2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a32b4 push 0x100b38e0 */
  push32((uint32_t)(0x100b38e0u));
  /* 100a32b9 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a32bfu);
  /* 100a32bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a32c1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a32c3 push 0x100b38e8 */
  push32((uint32_t)(0x100b38e8u));
  /* 100a32c8 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a32ceu);
  /* 100a32ce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a32d0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a32d2 push 0x100b38d8 */
  push32((uint32_t)(0x100b38d8u));
  /* 100a32d7 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a32ddu);
  /* 100a32dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a32df push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a32e1 push 0x100b5f48 */
  push32((uint32_t)(0x100b5f48u));
  /* 100a32e6 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a32ecu);
  /* 100a32ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a32ee push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a32f0 push 0x100b5f38 */
  push32((uint32_t)(0x100b5f38u));
  /* 100a32f5 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a32fbu);
  /* 100a32fb add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a32fe ret  */
  ESPCHK(0x100a32b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003300 @ 0x100a3300 (64 bytes, 18 insns) */
void f_100a3300(void) {
  FTRACE(0x100a3300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a3300 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a3302 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a3304 push 0x100b6068 */
  push32((uint32_t)(0x100b6068u));
  /* 100a3309 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a330fu);
  /* 100a330f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a3311 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a3313 push 0x100b6070 */
  push32((uint32_t)(0x100b6070u));
  /* 100a3318 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a331eu);
  /* 100a331e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a3320 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a3322 push 0x100b6078 */
  push32((uint32_t)(0x100b6078u));
  /* 100a3327 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a332du);
  /* 100a332d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a332f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a3331 push 0x100b6080 */
  push32((uint32_t)(0x100b6080u));
  /* 100a3336 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a333cu);
  /* 100a333c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a333f ret  */
  ESPCHK(0x100a3300u, _esp0);
  ESP += 4; return;
}

/* FUN_10003340 @ 0x100a3340 (3787 bytes, 1079 insns) */
void f_100a3340(void) {
  FTRACE(0x100a3340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a3340 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a3343 push ebx */
  push32((uint32_t)(EBX));
  /* 100a3344 push ebp */
  push32((uint32_t)(EBP));
  /* 100a3345 push esi */
  push32((uint32_t)(ESI));
  /* 100a3346 push edi */
  push32((uint32_t)(EDI));
  /* 100a3347 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 100a334c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 100a3351 call dword ptr [0x100b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e8))), 0x100a3357u);
  /* 100a3357 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a3359 call 0x100a2740 */
  push32(0x100a335eu); f_100a2740();
  /* 100a335e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100a3360 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a3362 call 0x100a2620 */
  push32(0x100a3367u); f_100a2620();
  /* 100a3367 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100a3369 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a336b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 100a336f call 0x100a2620 */
  push32(0x100a3374u); f_100a2620();
  /* 100a3374 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 100a3376 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a3378 mov edi, eax */
  EDI = (EAX);
  /* 100a337a call 0x100a2620 */
  push32(0x100a337fu); f_100a2620();
  /* 100a337f push 0xe */
  push32((uint32_t)(0xeu));
  /* 100a3381 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a3383 mov esi, eax */
  ESI = (EAX);
  /* 100a3385 call 0x100a2620 */
  push32(0x100a338au); f_100a2620();
  /* 100a338a push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a338f mov ebx, eax */
  EBX = (EAX);
  /* 100a3391 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a3397u);
  /* 100a3397 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100a339a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100a339f add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a33a1 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 100a33a5 push 0x100b62a8 */
  push32((uint32_t)(0x100b62a8u));
  /* 100a33aa lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 100a33ad mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100a33b1 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a33b7u);
  /* 100a33b7 push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a33bc mov ebx, eax */
  EBX = (EAX);
  /* 100a33be call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a33c4u);
  /* 100a33c4 push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a33c9 mov ebp, eax */
  EBP = (EAX);
  /* 100a33cb call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a33d1u);
  /* 100a33d1 push 0x100b5fb8 */
  push32((uint32_t)(0x100b5fb8u));
  /* 100a33d6 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100a33da call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a33e0u);
  /* 100a33e0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a33e3 mov edi, eax */
  EDI = (EAX);
  /* 100a33e5 push 0x100b5fb8 */
  push32((uint32_t)(0x100b5fb8u));
  /* 100a33ea call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a33f0u);
  /* 100a33f0 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a33f5 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 100a33f9 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a33ffu);
  /* 100a33ff push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a3404 mov esi, eax */
  ESI = (EAX);
  /* 100a3406 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a340cu);
  /* 100a340c push 0x100b62a8 */
  push32((uint32_t)(0x100b62a8u));
  /* 100a3411 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 100a3415 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a341bu);
  /* 100a341b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 100a341f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 100a3423 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a3425 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 100a3429 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a342b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a342d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a342f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3431 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a3433 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a3435 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3437 push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a343c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a343e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 100a3442 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3448u);
  /* 100a3448 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a344a mov bl, 1 */
  BL = (0x1u);
  /* 100a344c call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3452u);
  /* 100a3452 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3455 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a345a jle 0x100a348a */
  if ((C.zf||C.sf!=C.of)) goto L_100a348a;
  /* 100a345c push 1 */
  push32((uint32_t)(0x1u));
  /* 100a345e call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3464u);
  /* 100a3464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3467 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a346c jle 0x100a348a */
  if ((C.zf||C.sf!=C.of)) goto L_100a348a;
  /* 100a346e push 4 */
  push32((uint32_t)(0x4u));
  /* 100a3470 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3476u);
  /* 100a3476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3479 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a347e jle 0x100a348a */
  if ((C.zf||C.sf!=C.of)) goto L_100a348a;
  /* 100a3480 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 100a3484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a3486 jne 0x100a348a */
  if (!C.zf) goto L_100a348a;
  /* 100a3488 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_100a348a:;
  /* 100a348a push 0x100b6160 */
  push32((uint32_t)(0x100b6160u));
  /* 100a348f call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a3495u);
  /* 100a3495 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a3497 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100a349b call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a34a1u);
  /* 100a34a1 push 0x100b6188 */
  push32((uint32_t)(0x100b6188u));
  /* 100a34a6 mov esi, eax */
  ESI = (EAX);
  /* 100a34a8 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a34aeu);
  /* 100a34ae push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a34b3 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 100a34b7 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a34bdu);
  /* 100a34bd push 0x100b60b0 */
  push32((uint32_t)(0x100b60b0u));
  /* 100a34c2 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a34c8u);
  /* 100a34c8 push 0x100b6380 */
  push32((uint32_t)(0x100b6380u));
  /* 100a34cd mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 100a34d1 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a34d7u);
  /* 100a34d7 push 0x100b6300 */
  push32((uint32_t)(0x100b6300u));
  /* 100a34dc mov edi, eax */
  EDI = (EAX);
  /* 100a34de call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a34e4u);
  /* 100a34e4 push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a34e9 mov ebp, eax */
  EBP = (EAX);
  /* 100a34eb call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a34f1u);
  /* 100a34f1 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a34f3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a34f5 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a34f7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a34f9 push 0x100b60e0 */
  push32((uint32_t)(0x100b60e0u));
  /* 100a34fe mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 100a3502 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 100a3507 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a350du);
  /* 100a350d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a350f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 100a3511 push 0x100b6120 */
  push32((uint32_t)(0x100b6120u));
  /* 100a3516 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a351cu);
  /* 100a351c push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a3521 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a3527u);
  /* 100a3527 push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a352c mov edi, eax */
  EDI = (EAX);
  /* 100a352e call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a3534u);
  /* 100a3534 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3537 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a3539 je 0x100a3540 */
  if (C.zf) goto L_100a3540;
  /* 100a353b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_100a3540:;
  /* 100a3540 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 100a3544 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 100a3546 je 0x100a3f0d */
  if (C.zf) goto L_100a3f0d;
  /* 100a354c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a354e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3550 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3552 push 0x100b5fa8 */
  push32((uint32_t)(0x100b5fa8u));
  /* 100a3557 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a355du);
  /* 100a355d push 0x100b5fa8 */
  push32((uint32_t)(0x100b5fa8u));
  /* 100a3562 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a3568u);
  /* 100a3568 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a356b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a356d je 0x100a4203 */
  if (C.zf) goto L_100a4203;
  /* 100a3573 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3575 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3577 push 0x100b6348 */
  push32((uint32_t)(0x100b6348u));
  /* 100a357c call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3582u);
  /* 100a3582 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3585 call dword ptr [0x100b6540] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6540))), 0x100a358bu);
  /* 100a358b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a358d jne 0x100a35d0 */
  if (!C.zf) goto L_100a35d0;
  /* 100a358f cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3595 jle 0x100a35bc */
  if ((C.zf||C.sf!=C.of)) goto L_100a35bc;
  /* 100a3597 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3599 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a359b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a359d push 0x100b6160 */
  push32((uint32_t)(0x100b6160u));
  /* 100a35a2 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a35a8u);
  /* 100a35a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a35aa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a35ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a35ae push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a35b3 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a35b9u);
  /* 100a35b9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a35bc:;
  /* 100a35bc push 1 */
  push32((uint32_t)(0x1u));
  /* 100a35be push 1 */
  push32((uint32_t)(0x1u));
  /* 100a35c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a35c2 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a35c8u);
  /* 100a35c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a35cb jmp 0x100a36de */
  goto L_100a36de;
L_100a35d0:;
  /* 100a35d0 push 0x100b3770 */
  push32((uint32_t)(0x100b3770u));
  /* 100a35d5 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a35dbu);
  /* 100a35db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a35de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a35e0 je 0x100a360a */
  if (C.zf) goto L_100a360a;
  /* 100a35e2 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a35e8 jle 0x100a35f2 */
  if ((C.zf||C.sf!=C.of)) goto L_100a35f2;
  /* 100a35ea push 6 */
  push32((uint32_t)(0x6u));
  /* 100a35ec push 8 */
  push32((uint32_t)(0x8u));
  /* 100a35ee push 9 */
  push32((uint32_t)(0x9u));
  /* 100a35f0 jmp 0x100a3630 */
  goto L_100a3630;
L_100a35f2:;
  /* 100a35f2 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a35f8 jle 0x100a3602 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3602;
  /* 100a35fa push 3 */
  push32((uint32_t)(0x3u));
  /* 100a35fc push 5 */
  push32((uint32_t)(0x5u));
  /* 100a35fe push 9 */
  push32((uint32_t)(0x9u));
  /* 100a3600 jmp 0x100a3630 */
  goto L_100a3630;
L_100a3602:;
  /* 100a3602 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3604 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a3606 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a3608 jmp 0x100a3630 */
  goto L_100a3630;
L_100a360a:;
  /* 100a360a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3610 jle 0x100a361a */
  if ((C.zf||C.sf!=C.of)) goto L_100a361a;
  /* 100a3612 push 8 */
  push32((uint32_t)(0x8u));
  /* 100a3614 push 8 */
  push32((uint32_t)(0x8u));
  /* 100a3616 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a3618 jmp 0x100a3630 */
  goto L_100a3630;
L_100a361a:;
  /* 100a361a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3620 jle 0x100a362a */
  if ((C.zf||C.sf!=C.of)) goto L_100a362a;
  /* 100a3622 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a3624 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a3626 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a3628 jmp 0x100a3630 */
  goto L_100a3630;
L_100a362a:;
  /* 100a362a push 4 */
  push32((uint32_t)(0x4u));
  /* 100a362c push 4 */
  push32((uint32_t)(0x4u));
  /* 100a362e push 0xa */
  push32((uint32_t)(0xau));
L_100a3630:;
  /* 100a3630 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a3636u);
  /* 100a3636 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 100a363a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a363d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a363f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 100a3644 je 0x100a364b */
  if (C.zf) goto L_100a364b;
  /* 100a3646 mov edi, 0x12c */
  EDI = (0x12cu);
L_100a364b:;
  /* 100a364b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a364e jge 0x100a366c */
  if ((C.sf==C.of)) goto L_100a366c;
  /* 100a3650 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3656 jle 0x100a366c */
  if ((C.zf||C.sf!=C.of)) goto L_100a366c;
  /* 100a3658 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a365a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a365c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a365e push 0x100b6160 */
  push32((uint32_t)(0x100b6160u));
  /* 100a3663 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3669u);
  /* 100a3669 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a366c:;
  /* 100a366c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3672 jle 0x100a36ad */
  if ((C.zf||C.sf!=C.of)) goto L_100a36ad;
  /* 100a3674 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100a3676 je 0x100a3692 */
  if (C.zf) goto L_100a3692;
  /* 100a3678 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a367a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 100a367f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a3684 push 0x100b6160 */
  push32((uint32_t)(0x100b6160u));
  /* 100a3689 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a368fu);
  /* 100a368f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3692:;
  /* 100a3692 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3698 jle 0x100a36ad */
  if ((C.zf||C.sf!=C.of)) goto L_100a36ad;
  /* 100a369a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a369c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a369e push edi */
  push32((uint32_t)(EDI));
  /* 100a369f push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a36a4 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a36aau);
  /* 100a36aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a36ad:;
  /* 100a36ad push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a36b2 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a36b8u);
  /* 100a36b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a36bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a36bd je 0x100a36de */
  if (C.zf) goto L_100a36de;
  /* 100a36bf cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a36c5 jle 0x100a36de */
  if ((C.zf||C.sf!=C.of)) goto L_100a36de;
  /* 100a36c7 push 0x100b62a8 */
  push32((uint32_t)(0x100b62a8u));
  /* 100a36cc call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a36d2u);
  /* 100a36d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a36d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a36d7 jle 0x100a36de */
  if ((C.zf||C.sf!=C.of)) goto L_100a36de;
  /* 100a36d9 call 0x100a3210 */
  push32(0x100a36deu); f_100a3210();
L_100a36de:;
  /* 100a36de mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 100a36e2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a36e4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a36e7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100a36e9 jge 0x100a36ef */
  if ((C.sf==C.of)) goto L_100a36ef;
  /* 100a36eb push 5 */
  push32((uint32_t)(0x5u));
  /* 100a36ed jmp 0x100a36f3 */
  goto L_100a36f3;
L_100a36ef:;
  /* 100a36ef add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a36f2 push eax */
  push32((uint32_t)(EAX));
L_100a36f3:;
  /* 100a36f3 push 0x100b5f60 */
  push32((uint32_t)(0x100b5f60u));
  /* 100a36f8 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a36feu);
  /* 100a36fe mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 100a3702 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3705 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3708 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a370a jge 0x100a3720 */
  if ((C.sf==C.of)) goto L_100a3720;
  /* 100a370c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100a370e push 0xc */
  push32((uint32_t)(0xcu));
  /* 100a3710 push 0x100b38b8 */
  push32((uint32_t)(0x100b38b8u));
  /* 100a3715 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a371bu);
  /* 100a371b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a371e jmp 0x100a375a */
  goto L_100a375a;
L_100a3720:;
  /* 100a3720 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 100a3723 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a3725 push ecx */
  push32((uint32_t)(ECX));
  /* 100a3726 push 0x100b38b8 */
  push32((uint32_t)(0x100b38b8u));
  /* 100a372b call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3731u);
  /* 100a3731 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a3733 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 100a3736 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100a3738 push edx */
  push32((uint32_t)(EDX));
  /* 100a3739 push 0x100b38b8 */
  push32((uint32_t)(0x100b38b8u));
  /* 100a373e call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3744u);
  /* 100a3744 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a3746 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3749 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a374b push edi */
  push32((uint32_t)(EDI));
  /* 100a374c push 0x100b38b8 */
  push32((uint32_t)(0x100b38b8u));
  /* 100a3751 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3757u);
  /* 100a3757 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a375a:;
  /* 100a375a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100a375c push 0 */
  push32((uint32_t)(0x0u));
  /* 100a375e call 0x100a2620 */
  push32(0x100a3763u); f_100a2620();
  /* 100a3763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a3768 je 0x100a37c7 */
  if (C.zf) goto L_100a37c7;
  /* 100a376a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a376c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a376e push 0x100b62b8 */
  push32((uint32_t)(0x100b62b8u));
  /* 100a3773 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3779u);
  /* 100a3779 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a377b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a377d push 0x100b62a0 */
  push32((uint32_t)(0x100b62a0u));
  /* 100a3782 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3788u);
  /* 100a3788 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a378a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a378c push 0x100b62b0 */
  push32((uint32_t)(0x100b62b0u));
  /* 100a3791 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3797u);
  /* 100a3797 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a3799 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a379b push 0x100b6290 */
  push32((uint32_t)(0x100b6290u));
  /* 100a37a0 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a37a6u);
  /* 100a37a6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a37a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a37aa push 0x100b6298 */
  push32((uint32_t)(0x100b6298u));
  /* 100a37af call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a37b5u);
  /* 100a37b5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a37b7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a37b9 push 0x100b6288 */
  push32((uint32_t)(0x100b6288u));
  /* 100a37be call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a37c4u);
  /* 100a37c4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a37c7:;
  /* 100a37c7 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a37c9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a37cb push 3 */
  push32((uint32_t)(0x3u));
  /* 100a37cd push 0x100b3870 */
  push32((uint32_t)(0x100b3870u));
  /* 100a37d2 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a37d8u);
  /* 100a37d8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a37da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a37dc push 1 */
  push32((uint32_t)(0x1u));
  /* 100a37de push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a37e3 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a37e9u);
  /* 100a37e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a37eb push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a37ed push 2 */
  push32((uint32_t)(0x2u));
  /* 100a37ef push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a37f4 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a37fau);
  /* 100a37fa mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 100a37fe add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3801 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a3803 jne 0x100a3819 */
  if (!C.zf) goto L_100a3819;
  /* 100a3805 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a3807 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a3809 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a380b push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a3810 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3816u);
  /* 100a3816 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3819:;
  /* 100a3819 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a381b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a381d push 1 */
  push32((uint32_t)(0x1u));
  /* 100a381f push 0x100b61b8 */
  push32((uint32_t)(0x100b61b8u));
  /* 100a3824 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a382au);
  /* 100a382a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a382c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a382e push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3830 push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a3835 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a383bu);
  /* 100a383b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a383d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a383f push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3841 push 0x100b5fa0 */
  push32((uint32_t)(0x100b5fa0u));
  /* 100a3846 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a384cu);
  /* 100a384c push 5 */
  push32((uint32_t)(0x5u));
  /* 100a384e push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3850 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a3852 push 0x100b61b8 */
  push32((uint32_t)(0x100b61b8u));
  /* 100a3857 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a385du);
  /* 100a385d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3860 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3862 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a3864 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3866 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a386b call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3871u);
  /* 100a3871 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3873 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a3875 push 0x100b3630 */
  push32((uint32_t)(0x100b3630u));
  /* 100a387a call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3880u);
  /* 100a3880 push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a3885 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a388bu);
  /* 100a388b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a388e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a3890 jle 0x100a38b7 */
  if ((C.zf||C.sf!=C.of)) goto L_100a38b7;
  /* 100a3892 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100a3894 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3896 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3898 push 0x100b3848 */
  push32((uint32_t)(0x100b3848u));
  /* 100a389d call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a38a3u);
  /* 100a38a3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a38a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a38a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a38a9 push 0x100b60c8 */
  push32((uint32_t)(0x100b60c8u));
  /* 100a38ae call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a38b4u);
  /* 100a38b4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a38b7:;
  /* 100a38b7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a38b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a38bb push 1 */
  push32((uint32_t)(0x1u));
  /* 100a38bd push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a38c2 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a38c8u);
  /* 100a38c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a38cb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a38cd jne 0x100a38e3 */
  if (!C.zf) goto L_100a38e3;
  /* 100a38cf push 0xa */
  push32((uint32_t)(0xau));
  /* 100a38d1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a38d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a38d5 push 0x100b5fb8 */
  push32((uint32_t)(0x100b5fb8u));
  /* 100a38da call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a38e0u);
  /* 100a38e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a38e3:;
  /* 100a38e3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a38e5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a38e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a38e9 push 0x100b35e8 */
  push32((uint32_t)(0x100b35e8u));
  /* 100a38ee call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a38f4u);
  /* 100a38f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a38f7 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a38fa jle 0x100a3910 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3910;
  /* 100a38fc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a38fe push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a3900 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a3902 push 0x100b5fa8 */
  push32((uint32_t)(0x100b5fa8u));
  /* 100a3907 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a390du);
  /* 100a390d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3910:;
  /* 100a3910 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a3912 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3914 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3916 push 0x100b6228 */
  push32((uint32_t)(0x100b6228u));
  /* 100a391b call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3921u);
  /* 100a3921 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a3923 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a3925 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a3927 push 0x100b6228 */
  push32((uint32_t)(0x100b6228u));
  /* 100a392c call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3932u);
  /* 100a3932 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a3934 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3936 push 0x100b6048 */
  push32((uint32_t)(0x100b6048u));
  /* 100a393b call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3941u);
  /* 100a3941 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a3943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3945 push 0x100b6000 */
  push32((uint32_t)(0x100b6000u));
  /* 100a394a call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3950u);
  /* 100a3950 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a3952 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3954 push 0x100b6008 */
  push32((uint32_t)(0x100b6008u));
  /* 100a3959 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a395fu);
  /* 100a395f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3962 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a3964 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3966 push 0x100b6010 */
  push32((uint32_t)(0x100b6010u));
  /* 100a396b call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3971u);
  /* 100a3971 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3973 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a3975 push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a397a call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3980u);
  /* 100a3980 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3982 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a3984 push 0x100b6188 */
  push32((uint32_t)(0x100b6188u));
  /* 100a3989 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a398fu);
  /* 100a398f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a3991 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a3993 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3995 push 0x100b62a8 */
  push32((uint32_t)(0x100b62a8u));
  /* 100a399a call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a39a0u);
  /* 100a39a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a39a2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a39a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a39a6 push 0x100b62a8 */
  push32((uint32_t)(0x100b62a8u));
  /* 100a39ab call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a39b1u);
  /* 100a39b1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a39b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a39b6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a39b8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a39ba push 0x100b62a8 */
  push32((uint32_t)(0x100b62a8u));
  /* 100a39bf call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a39c5u);
  /* 100a39c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a39c7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a39c9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a39cb push 0x100b62a8 */
  push32((uint32_t)(0x100b62a8u));
  /* 100a39d0 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a39d6u);
  /* 100a39d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a39d8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a39da push 0x100b3928 */
  push32((uint32_t)(0x100b3928u));
  /* 100a39df call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a39e5u);
  /* 100a39e5 call 0x100a2610 */
  push32(0x100a39eau); f_100a2610();
  /* 100a39ea push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a39ef mov edi, eax */
  EDI = (EAX);
  /* 100a39f1 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a39f7u);
  /* 100a39f7 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a39fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a39fc je 0x100a3a1f */
  if (C.zf) goto L_100a3a1f;
  /* 100a39fe push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3a00 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3a02 push 0x100b3928 */
  push32((uint32_t)(0x100b3928u));
  /* 100a3a07 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3a0du);
  /* 100a3a0d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3a0f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a3a11 push 0x100b3840 */
  push32((uint32_t)(0x100b3840u));
  /* 100a3a16 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3a1cu);
  /* 100a3a1c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3a1f:;
  /* 100a3a1f push 0x100b3928 */
  push32((uint32_t)(0x100b3928u));
  /* 100a3a24 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a3a2au);
  /* 100a3a2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3a2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3a2f je 0x100a3a57 */
  if (C.zf) goto L_100a3a57;
  /* 100a3a31 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3a33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3a35 push 0x100b3910 */
  push32((uint32_t)(0x100b3910u));
  /* 100a3a3a call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3a40u);
  /* 100a3a40 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3a42 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100a3a44 push 0x100b3850 */
  push32((uint32_t)(0x100b3850u));
  /* 100a3a49 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3a4fu);
  /* 100a3a4f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3a52 call 0x100a3300 */
  push32(0x100a3a57u); f_100a3300();
L_100a3a57:;
  /* 100a3a57 push 0x100b6080 */
  push32((uint32_t)(0x100b6080u));
  /* 100a3a5c call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a3a62u);
  /* 100a3a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3a65 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3a67 je 0x100a3a8e */
  if (C.zf) goto L_100a3a8e;
  /* 100a3a69 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3a6b push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3a6d push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3a6f push 0x100b3638 */
  push32((uint32_t)(0x100b3638u));
  /* 100a3a74 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3a7au);
  /* 100a3a7a push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3a7c push 3 */
  push32((uint32_t)(0x3u));
  /* 100a3a7e push 0xf */
  push32((uint32_t)(0xfu));
  /* 100a3a80 push 0x100b3638 */
  push32((uint32_t)(0x100b3638u));
  /* 100a3a85 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3a8bu);
  /* 100a3a8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3a8e:;
  /* 100a3a8e push 0 */
  push32((uint32_t)(0x0u));
  /* 100a3a90 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3a92 call 0x100a25d0 */
  push32(0x100a3a97u); f_100a25d0();
  /* 100a3a97 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a3a99 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3a9fu);
  /* 100a3a9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3aa2 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3aa7 jle 0x100a3aeb */
  if ((C.zf||C.sf!=C.of)) goto L_100a3aeb;
  /* 100a3aa9 push 0x100b3770 */
  push32((uint32_t)(0x100b3770u));
  /* 100a3aae call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a3ab4u);
  /* 100a3ab4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3ab7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3ab9 je 0x100a3aeb */
  if (C.zf) goto L_100a3aeb;
  /* 100a3abb push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3abd call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3ac3u);
  /* 100a3ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3ac6 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3acb jge 0x100a3aeb */
  if ((C.sf==C.of)) goto L_100a3aeb;
  /* 100a3acd push 0x100b3928 */
  push32((uint32_t)(0x100b3928u));
  /* 100a3ad2 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a3ad8u);
  /* 100a3ad8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3adb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3add jne 0x100a3aeb */
  if (!C.zf) goto L_100a3aeb;
  /* 100a3adf push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3ae1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3ae3 call 0x100a25d0 */
  push32(0x100a3ae8u); f_100a25d0();
  /* 100a3ae8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3aeb:;
  /* 100a3aeb push 0x100b3928 */
  push32((uint32_t)(0x100b3928u));
  /* 100a3af0 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a3af6u);
  /* 100a3af6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3af9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3afb je 0x100a3c7c */
  if (C.zf) goto L_100a3c7c;
  /* 100a3b01 push 0x100b60c0 */
  push32((uint32_t)(0x100b60c0u));
  /* 100a3b06 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a3b0cu);
  /* 100a3b0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3b0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3b11 je 0x100a3c7c */
  if (C.zf) goto L_100a3c7c;
  /* 100a3b17 push 0x100b6188 */
  push32((uint32_t)(0x100b6188u));
  /* 100a3b1c call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a3b22u);
  /* 100a3b22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3b25 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3b27 je 0x100a3c7c */
  if (C.zf) goto L_100a3c7c;
  /* 100a3b2d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3b30 je 0x100a3b37 */
  if (C.zf) goto L_100a3b37;
  /* 100a3b32 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3b35 jne 0x100a3b67 */
  if (!C.zf) goto L_100a3b67;
L_100a3b37:;
  /* 100a3b37 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a3b39 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3b3fu);
  /* 100a3b3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3b42 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3b47 jle 0x100a3b67 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3b67;
  /* 100a3b49 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3b4b call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3b51u);
  /* 100a3b51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3b54 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3b59 jge 0x100a3b67 */
  if ((C.sf==C.of)) goto L_100a3b67;
  /* 100a3b5b push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3b5d push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3b5f call 0x100a25d0 */
  push32(0x100a3b64u); f_100a25d0();
  /* 100a3b64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3b67:;
  /* 100a3b67 push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a3b6c call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a3b72u);
  /* 100a3b72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3b75 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3b77 jne 0x100a3ba9 */
  if (!C.zf) goto L_100a3ba9;
  /* 100a3b79 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a3b7b call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3b81u);
  /* 100a3b81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3b84 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3b89 jle 0x100a3ba9 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3ba9;
  /* 100a3b8b push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3b8d call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3b93u);
  /* 100a3b93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3b96 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3b9b jge 0x100a3ba9 */
  if ((C.sf==C.of)) goto L_100a3ba9;
  /* 100a3b9d push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3b9f push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3ba1 call 0x100a25d0 */
  push32(0x100a3ba6u); f_100a25d0();
  /* 100a3ba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3ba9:;
  /* 100a3ba9 push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a3bae call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a3bb4u);
  /* 100a3bb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3bb7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3bb9 je 0x100a3c7c */
  if (C.zf) goto L_100a3c7c;
  /* 100a3bbf cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3bc2 jne 0x100a3c02 */
  if (!C.zf) goto L_100a3c02;
  /* 100a3bc4 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a3bc6 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3bccu);
  /* 100a3bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3bcf cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3bd4 jle 0x100a3cd7 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3cd7;
  /* 100a3bda push 4 */
  push32((uint32_t)(0x4u));
  /* 100a3bdc call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3be2u);
  /* 100a3be2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3be5 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3bea jle 0x100a3cd7 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3cd7;
  /* 100a3bf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3bf2 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3bf8u);
  /* 100a3bf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3bfb cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3c00 jmp 0x100a3c6c */
  goto L_100a3c6c;
L_100a3c02:;
  /* 100a3c02 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3c05 jne 0x100a3c45 */
  if (!C.zf) goto L_100a3c45;
  /* 100a3c07 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a3c09 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3c0fu);
  /* 100a3c0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3c12 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3c17 jle 0x100a3cd7 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3cd7;
  /* 100a3c1d push 4 */
  push32((uint32_t)(0x4u));
  /* 100a3c1f call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3c25u);
  /* 100a3c25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3c28 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3c2d jle 0x100a3cd7 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3cd7;
  /* 100a3c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3c35 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3c3bu);
  /* 100a3c3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3c3e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3c43 jmp 0x100a3c6c */
  goto L_100a3c6c;
L_100a3c45:;
  /* 100a3c45 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3c48 jne 0x100a3c7c */
  if (!C.zf) goto L_100a3c7c;
  /* 100a3c4a push 3 */
  push32((uint32_t)(0x3u));
  /* 100a3c4c call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3c52u);
  /* 100a3c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3c55 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3c5a jle 0x100a3cd7 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3cd7;
  /* 100a3c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3c5e call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3c64u);
  /* 100a3c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3c67 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100a3c6c:;
  /* 100a3c6c jge 0x100a3cd7 */
  if ((C.sf==C.of)) goto L_100a3cd7;
  /* 100a3c6e push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3c70 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3c72 call 0x100a25d0 */
  push32(0x100a3c77u); f_100a25d0();
  /* 100a3c77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3c7a jmp 0x100a3cd7 */
  goto L_100a3cd7;
L_100a3c7c:;
  /* 100a3c7c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3c7f jne 0x100a3cd7 */
  if (!C.zf) goto L_100a3cd7;
  /* 100a3c81 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3c83 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100a3c85 push 0x100b3738 */
  push32((uint32_t)(0x100b3738u));
  /* 100a3c8a call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3c90u);
  /* 100a3c90 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a3c92 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a3c94 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3c96 push 0x100b6368 */
  push32((uint32_t)(0x100b6368u));
  /* 100a3c9b call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3ca1u);
  /* 100a3ca1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a3ca3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a3ca5 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a3ca7 push 0x100b6368 */
  push32((uint32_t)(0x100b6368u));
  /* 100a3cac call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3cb2u);
  /* 100a3cb2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a3cb4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a3cb6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a3cb8 push 0x100b6368 */
  push32((uint32_t)(0x100b6368u));
  /* 100a3cbd call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3cc3u);
  /* 100a3cc3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a3cc5 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3cc7 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a3cc9 push 0x100b6368 */
  push32((uint32_t)(0x100b6368u));
  /* 100a3cce call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3cd4u);
  /* 100a3cd4 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3cd7:;
  /* 100a3cd7 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3cda jle 0x100a3d33 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3d33;
  /* 100a3cdc mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 100a3ce0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3ce2 je 0x100a3d33 */
  if (C.zf) goto L_100a3d33;
  /* 100a3ce4 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3ce6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a3ce8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3cea push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a3cef call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3cf5u);
  /* 100a3cf5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3cf8 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3cfb jle 0x100a3d33 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3d33;
  /* 100a3cfd push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3cff push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a3d01 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a3d03 push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a3d08 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3d0eu);
  /* 100a3d0e push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3d10 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a3d12 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a3d14 push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a3d19 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3d1fu);
  /* 100a3d1f push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3d21 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a3d23 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a3d25 push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a3d2a call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3d30u);
  /* 100a3d30 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3d33:;
  /* 100a3d33 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 100a3d37 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100a3d39 je 0x100a3d77 */
  if (C.zf) goto L_100a3d77;
  /* 100a3d3b push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a3d40 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a3d46u);
  /* 100a3d46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3d49 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3d4b je 0x100a3d77 */
  if (C.zf) goto L_100a3d77;
  /* 100a3d4d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a3d4f push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3d51 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 100a3d53 push 0x100b6130 */
  push32((uint32_t)(0x100b6130u));
  /* 100a3d58 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3d5eu);
  /* 100a3d5e push 0x100b6168 */
  push32((uint32_t)(0x100b6168u));
  /* 100a3d63 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a3d69u);
  /* 100a3d69 push 0x100b6080 */
  push32((uint32_t)(0x100b6080u));
  /* 100a3d6e call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a3d74u);
  /* 100a3d74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3d77:;
  /* 100a3d77 push 0x100b35e8 */
  push32((uint32_t)(0x100b35e8u));
  /* 100a3d7c call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a3d82u);
  /* 100a3d82 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3d84 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3d86 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a3d88 push 0x100b61c0 */
  push32((uint32_t)(0x100b61c0u));
  /* 100a3d8d call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3d93u);
  /* 100a3d93 push 0x100b60c0 */
  push32((uint32_t)(0x100b60c0u));
  /* 100a3d98 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a3d9eu);
  /* 100a3d9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3da1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3da3 je 0x100a3db9 */
  if (C.zf) goto L_100a3db9;
  /* 100a3da5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3da7 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3da9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a3dab push 0x100b61c0 */
  push32((uint32_t)(0x100b61c0u));
  /* 100a3db0 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3db6u);
  /* 100a3db6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3db9:;
  /* 100a3db9 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100a3dbb je 0x100a3ea5 */
  if (C.zf) goto L_100a3ea5;
  /* 100a3dc1 push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a3dc6 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a3dccu);
  /* 100a3dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3dcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3dd1 je 0x100a3ea5 */
  if (C.zf) goto L_100a3ea5;
  /* 100a3dd7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a3dd9 jne 0x100a3e11 */
  if (!C.zf) goto L_100a3e11;
  /* 100a3ddb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a3ddd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3ddf push 2 */
  push32((uint32_t)(0x2u));
  /* 100a3de1 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a3de6 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3decu);
  /* 100a3dec push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a3dee push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3df0 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a3df2 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a3df7 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3dfdu);
  /* 100a3dfd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a3dff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3e01 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a3e03 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a3e08 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3e0eu);
  /* 100a3e0e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3e11:;
  /* 100a3e11 push 0x100b60b0 */
  push32((uint32_t)(0x100b60b0u));
  /* 100a3e16 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a3e1cu);
  /* 100a3e1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3e1f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3e22 jle 0x100a3e45 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3e45;
  /* 100a3e24 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3e26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3e28 push 0x100b61d8 */
  push32((uint32_t)(0x100b61d8u));
  /* 100a3e2d call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3e33u);
  /* 100a3e33 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100a3e35 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a3e37 push 0x100b61e0 */
  push32((uint32_t)(0x100b61e0u));
  /* 100a3e3c call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3e42u);
  /* 100a3e42 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3e45:;
  /* 100a3e45 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3e47 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a3e49 push 0x100b60c0 */
  push32((uint32_t)(0x100b60c0u));
  /* 100a3e4e call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3e54u);
  /* 100a3e54 push 0x100b38d8 */
  push32((uint32_t)(0x100b38d8u));
  /* 100a3e59 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a3e5fu);
  /* 100a3e5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3e62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3e64 je 0x100a3ea5 */
  if (C.zf) goto L_100a3ea5;
  /* 100a3e66 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3e68 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3e6a push 0x100b6138 */
  push32((uint32_t)(0x100b6138u));
  /* 100a3e6f call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3e75u);
  /* 100a3e75 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3e77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3e79 push 0x100b6148 */
  push32((uint32_t)(0x100b6148u));
  /* 100a3e7e call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3e84u);
  /* 100a3e84 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3e86 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100a3e88 push 0x100b6150 */
  push32((uint32_t)(0x100b6150u));
  /* 100a3e8d call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3e93u);
  /* 100a3e93 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3e95 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100a3e97 push 0x100b6140 */
  push32((uint32_t)(0x100b6140u));
  /* 100a3e9c call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3ea2u);
  /* 100a3ea2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3ea5:;
  /* 100a3ea5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a3ea7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a3ea9 push 0x100b3770 */
  push32((uint32_t)(0x100b3770u));
  /* 100a3eae call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3eb4u);
  /* 100a3eb4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3eb6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a3eb8 push 0x100b38b0 */
  push32((uint32_t)(0x100b38b0u));
  /* 100a3ebd call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3ec3u);
  /* 100a3ec3 push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a3ec8 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a3eceu);
  /* 100a3ece add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3ed1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3ed4 jle 0x100a3f11 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3f11;
  /* 100a3ed6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 100a3eda cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3edf jle 0x100a3f11 */
  if ((C.zf||C.sf!=C.of)) goto L_100a3f11;
  /* 100a3ee1 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 100a3ee4 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100a3ee8 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 100a3eeb cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3eed jge 0x100a3f06 */
  if ((C.sf==C.of)) goto L_100a3f06;
  /* 100a3eef push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3ef1 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a3ef3 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 100a3ef8 push 0x100b60b0 */
  push32((uint32_t)(0x100b60b0u));
  /* 100a3efd call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3f03u);
  /* 100a3f03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3f06:;
  /* 100a3f06 call 0x100a32b0 */
  push32(0x100a3f0bu); f_100a32b0();
  /* 100a3f0b jmp 0x100a3f11 */
  goto L_100a3f11;
L_100a3f0d:;
  /* 100a3f0d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_100a3f11:;
  /* 100a3f11 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100a3f13 je 0x100a3f56 */
  if (C.zf) goto L_100a3f56;
  /* 100a3f15 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3f17 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a3f19 push 0x100b3600 */
  push32((uint32_t)(0x100b3600u));
  /* 100a3f1e call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3f24u);
  /* 100a3f24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3f26 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a3f28 push 0x100b36d8 */
  push32((uint32_t)(0x100b36d8u));
  /* 100a3f2d call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3f33u);
  /* 100a3f33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3f35 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a3f37 push 0x100b35f8 */
  push32((uint32_t)(0x100b35f8u));
  /* 100a3f3c call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3f42u);
  /* 100a3f42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3f44 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a3f46 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a3f48 push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a3f4d call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a3f53u);
  /* 100a3f53 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3f56:;
  /* 100a3f56 push 0x100b3770 */
  push32((uint32_t)(0x100b3770u));
  /* 100a3f5b call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a3f61u);
  /* 100a3f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3f64 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3f66 je 0x100a3f89 */
  if (C.zf) goto L_100a3f89;
  /* 100a3f68 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3f6a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a3f6c push 0x100b61c8 */
  push32((uint32_t)(0x100b61c8u));
  /* 100a3f71 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3f77u);
  /* 100a3f77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a3f79 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a3f7b push 0x100b61d0 */
  push32((uint32_t)(0x100b61d0u));
  /* 100a3f80 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a3f86u);
  /* 100a3f86 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a3f89:;
  /* 100a3f89 push 0x100b3848 */
  push32((uint32_t)(0x100b3848u));
  /* 100a3f8e call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a3f94u);
  /* 100a3f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3f97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a3f99 je 0x100a4203 */
  if (C.zf) goto L_100a4203;
  /* 100a3f9f push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a3fa4 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a3faau);
  /* 100a3faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3fad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a3faf je 0x100a400a */
  if (C.zf) goto L_100a400a;
  /* 100a3fb1 push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a3fb6 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a3fbcu);
  /* 100a3fbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3fbf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a3fc1 jne 0x100a400a */
  if (!C.zf) goto L_100a400a;
  /* 100a3fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a3fc5 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3fcbu);
  /* 100a3fcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3fce cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3fd3 jle 0x100a400a */
  if ((C.zf||C.sf!=C.of)) goto L_100a400a;
  /* 100a3fd5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a3fd7 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3fddu);
  /* 100a3fdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3fe0 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3fe5 jge 0x100a400a */
  if ((C.sf==C.of)) goto L_100a400a;
  /* 100a3fe7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a3fe9 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a3fefu);
  /* 100a3fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a3ff2 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a3ff7 jle 0x100a400a */
  if ((C.zf||C.sf!=C.of)) goto L_100a400a;
  /* 100a3ff9 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100a3ffe push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4000 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a4002 call 0x100a25f0 */
  push32(0x100a4007u); f_100a25f0();
  /* 100a4007 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a400a:;
  /* 100a400a push 3 */
  push32((uint32_t)(0x3u));
  /* 100a400c call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4012u);
  /* 100a4012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4015 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a401a jge 0x100a403f */
  if ((C.sf==C.of)) goto L_100a403f;
  /* 100a401c push 2 */
  push32((uint32_t)(0x2u));
  /* 100a401e call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4024u);
  /* 100a4024 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4027 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a402c jle 0x100a403f */
  if ((C.zf||C.sf!=C.of)) goto L_100a403f;
  /* 100a402e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100a4033 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4035 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4037 call 0x100a25f0 */
  push32(0x100a403cu); f_100a25f0();
  /* 100a403c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a403f:;
  /* 100a403f push 0x100b61c8 */
  push32((uint32_t)(0x100b61c8u));
  /* 100a4044 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a404au);
  /* 100a404a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a404d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a404f je 0x100a4177 */
  if (C.zf) goto L_100a4177;
  /* 100a4055 push 0x100b61d0 */
  push32((uint32_t)(0x100b61d0u));
  /* 100a405a call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a4060u);
  /* 100a4060 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4063 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4065 je 0x100a4177 */
  if (C.zf) goto L_100a4177;
  /* 100a406b push 2 */
  push32((uint32_t)(0x2u));
  /* 100a406d call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4073u);
  /* 100a4073 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4076 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a407b jle 0x100a408e */
  if ((C.zf||C.sf!=C.of)) goto L_100a408e;
  /* 100a407d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100a4082 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4084 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4086 call 0x100a25f0 */
  push32(0x100a408bu); f_100a25f0();
  /* 100a408b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a408e:;
  /* 100a408e push 0 */
  push32((uint32_t)(0x0u));
  /* 100a4090 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4096u);
  /* 100a4096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a409b je 0x100a419a */
  if (C.zf) goto L_100a419a;
  /* 100a40a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a40a3 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a40a9u);
  /* 100a40a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a40ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a40ae je 0x100a411b */
  if (C.zf) goto L_100a411b;
  /* 100a40b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a40b2 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a40b8u);
  /* 100a40b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a40bb cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a40c0 jge 0x100a411b */
  if ((C.sf==C.of)) goto L_100a411b;
  /* 100a40c2 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a40c4 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a40cau);
  /* 100a40ca push 5 */
  push32((uint32_t)(0x5u));
  /* 100a40cc mov esi, eax */
  ESI = (EAX);
  /* 100a40ce call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a40d4u);
  /* 100a40d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a40d7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a40d9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100a40de jge 0x100a40ff */
  if ((C.sf==C.of)) goto L_100a40ff;
  /* 100a40e0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a40e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a40e4 call 0x100a25f0 */
  push32(0x100a40e9u); f_100a25f0();
  /* 100a40e9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100a40ee push 4 */
  push32((uint32_t)(0x4u));
  /* 100a40f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a40f2 call 0x100a25f0 */
  push32(0x100a40f7u); f_100a25f0();
  /* 100a40f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a40fa jmp 0x100a419a */
  goto L_100a419a;
L_100a40ff:;
  /* 100a40ff push 4 */
  push32((uint32_t)(0x4u));
  /* 100a4101 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4103 call 0x100a25f0 */
  push32(0x100a4108u); f_100a25f0();
  /* 100a4108 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100a410d push 5 */
  push32((uint32_t)(0x5u));
  /* 100a410f push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4111 call 0x100a25f0 */
  push32(0x100a4116u); f_100a25f0();
  /* 100a4116 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4119 jmp 0x100a419a */
  goto L_100a419a;
L_100a411b:;
  /* 100a411b push 5 */
  push32((uint32_t)(0x5u));
  /* 100a411d call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4123u);
  /* 100a4123 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4126 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a412b jge 0x100a414d */
  if ((C.sf==C.of)) goto L_100a414d;
  /* 100a412d push 0 */
  push32((uint32_t)(0x0u));
  /* 100a412f call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4135u);
  /* 100a4135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a413a je 0x100a414d */
  if (C.zf) goto L_100a414d;
  /* 100a413c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 100a4141 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a4143 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4145 call 0x100a25f0 */
  push32(0x100a414au); f_100a25f0();
  /* 100a414a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a414d:;
  /* 100a414d push 5 */
  push32((uint32_t)(0x5u));
  /* 100a414f call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4155u);
  /* 100a4155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4158 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a415d jge 0x100a419a */
  if ((C.sf==C.of)) goto L_100a419a;
  /* 100a415f push 0 */
  push32((uint32_t)(0x0u));
  /* 100a4161 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4167u);
  /* 100a4167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a416a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a416c je 0x100a419a */
  if (C.zf) goto L_100a419a;
  /* 100a416e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 100a4173 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a4175 jmp 0x100a4190 */
  goto L_100a4190;
L_100a4177:;
  /* 100a4177 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4179 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a417fu);
  /* 100a417f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4182 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4187 jle 0x100a419a */
  if ((C.zf||C.sf!=C.of)) goto L_100a419a;
  /* 100a4189 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 100a418e push 1 */
  push32((uint32_t)(0x1u));
L_100a4190:;
  /* 100a4190 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4192 call 0x100a25f0 */
  push32(0x100a4197u); f_100a25f0();
  /* 100a4197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a419a:;
  /* 100a419a push 0 */
  push32((uint32_t)(0x0u));
  /* 100a419c call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a41a2u);
  /* 100a41a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a41a5 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a41aa jle 0x100a41bd */
  if ((C.zf||C.sf!=C.of)) goto L_100a41bd;
  /* 100a41ac push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100a41b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a41b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a41b5 call 0x100a25f0 */
  push32(0x100a41bau); f_100a25f0();
  /* 100a41ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a41bd:;
  /* 100a41bd push 4 */
  push32((uint32_t)(0x4u));
  /* 100a41bf call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a41c5u);
  /* 100a41c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a41c8 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a41cd jle 0x100a41e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100a41e0;
  /* 100a41cf push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 100a41d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a41d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a41d8 call 0x100a25f0 */
  push32(0x100a41ddu); f_100a25f0();
  /* 100a41dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a41e0:;
  /* 100a41e0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a41e2 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a41e8u);
  /* 100a41e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a41eb cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a41f0 jle 0x100a4203 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4203;
  /* 100a41f2 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 100a41f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a41f9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a41fb call 0x100a25f0 */
  push32(0x100a4200u); f_100a25f0();
  /* 100a4200 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4203:;
  /* 100a4203 pop edi */
  EDI = (pop32());
  /* 100a4204 pop esi */
  ESI = (pop32());
  /* 100a4205 pop ebp */
  EBP = (pop32());
  /* 100a4206 pop ebx */
  EBX = (pop32());
  /* 100a4207 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a420a ret  */
  ESPCHK(0x100a3340u, _esp0);
  ESP += 4; return;
}

/* FUN_10004210 @ 0x100a4210 (209 bytes, 56 insns) */
void f_100a4210(void) {
  FTRACE(0x100a4210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a4210 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4212 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4218u);
  /* 100a4218 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a421b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4220 jle 0x100a42e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100a42e0;
  /* 100a4226 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4228 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100a422a push 0x100b6320 */
  push32((uint32_t)(0x100b6320u));
  /* 100a422f call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4235u);
  /* 100a4235 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4237 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4239 push 0x100b6328 */
  push32((uint32_t)(0x100b6328u));
  /* 100a423e call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4244u);
  /* 100a4244 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4246 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4248 push 0x100b6310 */
  push32((uint32_t)(0x100b6310u));
  /* 100a424d call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4253u);
  /* 100a4253 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4255 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4257 push 0x100b6318 */
  push32((uint32_t)(0x100b6318u));
  /* 100a425c call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4262u);
  /* 100a4262 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4264 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4266 push 0x100b6330 */
  push32((uint32_t)(0x100b6330u));
  /* 100a426b call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4271u);
  /* 100a4271 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4273 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4275 push 0x100b6268 */
  push32((uint32_t)(0x100b6268u));
  /* 100a427a call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4280u);
  /* 100a4280 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4283 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4285 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4287 push 0x100b6250 */
  push32((uint32_t)(0x100b6250u));
  /* 100a428c call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4292u);
  /* 100a4292 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4294 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4296 push 0x100b6258 */
  push32((uint32_t)(0x100b6258u));
  /* 100a429b call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a42a1u);
  /* 100a42a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a42a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a42a5 push 0x100b6270 */
  push32((uint32_t)(0x100b6270u));
  /* 100a42aa call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a42b0u);
  /* 100a42b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a42b2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a42b4 push 0x100b6278 */
  push32((uint32_t)(0x100b6278u));
  /* 100a42b9 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a42bfu);
  /* 100a42bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a42c1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a42c3 push 0x100b6230 */
  push32((uint32_t)(0x100b6230u));
  /* 100a42c8 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a42ceu);
  /* 100a42ce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a42d0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a42d2 push 0x100b5f98 */
  push32((uint32_t)(0x100b5f98u));
  /* 100a42d7 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a42ddu);
  /* 100a42dd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a42e0:;
  /* 100a42e0 ret  */
  ESPCHK(0x100a4210u, _esp0);
  ESP += 4; return;
}

/* FUN_100042f0 @ 0x100a42f0 (79 bytes, 22 insns) */
void f_100a42f0(void) {
  FTRACE(0x100a42f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a42f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a42f2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a42f4 push 0x100b38e0 */
  push32((uint32_t)(0x100b38e0u));
  /* 100a42f9 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a42ffu);
  /* 100a42ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4301 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4303 push 0x100b38e8 */
  push32((uint32_t)(0x100b38e8u));
  /* 100a4308 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a430eu);
  /* 100a430e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4310 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4312 push 0x100b38d8 */
  push32((uint32_t)(0x100b38d8u));
  /* 100a4317 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a431du);
  /* 100a431d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a431f push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4321 push 0x100b5f48 */
  push32((uint32_t)(0x100b5f48u));
  /* 100a4326 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a432cu);
  /* 100a432c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a432e push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4330 push 0x100b5f38 */
  push32((uint32_t)(0x100b5f38u));
  /* 100a4335 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a433bu);
  /* 100a433b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a433e ret  */
  ESPCHK(0x100a42f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004340 @ 0x100a4340 (127 bytes, 35 insns) */
void f_100a4340(void) {
  FTRACE(0x100a4340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a4340 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4342 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a4344 push 0x100b61a8 */
  push32((uint32_t)(0x100b61a8u));
  /* 100a4349 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a434fu);
  /* 100a434f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4351 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a4353 push 0x100b61a0 */
  push32((uint32_t)(0x100b61a0u));
  /* 100a4358 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a435eu);
  /* 100a435e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4360 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a4362 push 0x100b6170 */
  push32((uint32_t)(0x100b6170u));
  /* 100a4367 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a436du);
  /* 100a436d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a436f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a4371 push 0x100b6168 */
  push32((uint32_t)(0x100b6168u));
  /* 100a4376 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a437cu);
  /* 100a437c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a437e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a4380 push 0x100b6068 */
  push32((uint32_t)(0x100b6068u));
  /* 100a4385 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a438bu);
  /* 100a438b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a438d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a438f push 0x100b6070 */
  push32((uint32_t)(0x100b6070u));
  /* 100a4394 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a439au);
  /* 100a439a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a439d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a439f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a43a1 push 0x100b6078 */
  push32((uint32_t)(0x100b6078u));
  /* 100a43a6 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a43acu);
  /* 100a43ac push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a43ae push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a43b0 push 0x100b6080 */
  push32((uint32_t)(0x100b6080u));
  /* 100a43b5 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a43bbu);
  /* 100a43bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a43be ret  */
  ESPCHK(0x100a4340u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x100a43c0 (3643 bytes, 1035 insns) */
void f_100a43c0(void) {
  FTRACE(0x100a43c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a43c0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a43c3 push ebx */
  push32((uint32_t)(EBX));
  /* 100a43c4 push ebp */
  push32((uint32_t)(EBP));
  /* 100a43c5 push esi */
  push32((uint32_t)(ESI));
  /* 100a43c6 push edi */
  push32((uint32_t)(EDI));
  /* 100a43c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a43c9 call 0x100a2740 */
  push32(0x100a43ceu); f_100a2740();
  /* 100a43ce push 0x100af030 */
  push32((uint32_t)(0x100af030u));
  /* 100a43d3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100a43d5 call dword ptr [0x100b64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64dc))), 0x100a43dbu);
  /* 100a43db push 0x100b6160 */
  push32((uint32_t)(0x100b6160u));
  /* 100a43e0 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a43e6u);
  /* 100a43e6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a43e8 mov ebx, eax */
  EBX = (EAX);
  /* 100a43ea call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a43f0u);
  /* 100a43f0 mov ebp, eax */
  EBP = (EAX);
  /* 100a43f2 push 0x100b6188 */
  push32((uint32_t)(0x100b6188u));
  /* 100a43f7 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 100a43fb call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a4401u);
  /* 100a4401 push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a4406 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 100a440a call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a4410u);
  /* 100a4410 push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a4415 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a441bu);
  /* 100a441b push 0x100b60b0 */
  push32((uint32_t)(0x100b60b0u));
  /* 100a4420 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a4426u);
  /* 100a4426 push 0x100b6380 */
  push32((uint32_t)(0x100b6380u));
  /* 100a442b call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a4431u);
  /* 100a4431 push 0x100b6300 */
  push32((uint32_t)(0x100b6300u));
  /* 100a4436 mov esi, eax */
  ESI = (EAX);
  /* 100a4438 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a443eu);
  /* 100a443e push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a4443 mov edi, eax */
  EDI = (EAX);
  /* 100a4445 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a444bu);
  /* 100a444b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a444d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4450 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4452 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 100a4457 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 100a445b call 0x100a2640 */
  push32(0x100a4460u); f_100a2640();
  /* 100a4460 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a4462 jle 0x100a4478 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4478;
  /* 100a4464 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100a4466 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a4468 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100a446a push 0x100b62f8 */
  push32((uint32_t)(0x100b62f8u));
  /* 100a446f call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4475u);
  /* 100a4475 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4478:;
  /* 100a4478 push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a447d call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a4483u);
  /* 100a4483 push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a4488 mov esi, eax */
  ESI = (EAX);
  /* 100a448a call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a4490u);
  /* 100a4490 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4493 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a4495 je 0x100a449c */
  if (C.zf) goto L_100a449c;
  /* 100a4497 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_100a449c:;
  /* 100a449c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100a449e je 0x100a51f3 */
  if (C.zf) goto L_100a51f3;
  /* 100a44a4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a44a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a44a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a44aa push 0x100b5fa8 */
  push32((uint32_t)(0x100b5fa8u));
  /* 100a44af call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a44b5u);
  /* 100a44b5 push 0x100b5fa8 */
  push32((uint32_t)(0x100b5fa8u));
  /* 100a44ba call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a44c0u);
  /* 100a44c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a44c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a44c5 je 0x100a51f3 */
  if (C.zf) goto L_100a51f3;
  /* 100a44cb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a44cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a44cf push 0x100b6348 */
  push32((uint32_t)(0x100b6348u));
  /* 100a44d4 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a44dau);
  /* 100a44da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a44dd call dword ptr [0x100b6540] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6540))), 0x100a44e3u);
  /* 100a44e3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a44e5 jne 0x100a453c */
  if (!C.zf) goto L_100a453c;
  /* 100a44e7 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a44ed jle 0x100a4514 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4514;
  /* 100a44ef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a44f1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a44f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a44f5 push 0x100b6160 */
  push32((uint32_t)(0x100b6160u));
  /* 100a44fa call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4500u);
  /* 100a4500 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4502 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4504 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4506 push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a450b call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4511u);
  /* 100a4511 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4514:;
  /* 100a4514 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a451a jle 0x100a4528 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4528;
  /* 100a451c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4521 jle 0x100a4528 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4528;
  /* 100a4523 call 0x100a4210 */
  push32(0x100a4528u); f_100a4210();
L_100a4528:;
  /* 100a4528 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a452a push 1 */
  push32((uint32_t)(0x1u));
  /* 100a452c push 0 */
  push32((uint32_t)(0x0u));
  /* 100a452e call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a4534u);
  /* 100a4534 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4537 jmp 0x100a45ff */
  goto L_100a45ff;
L_100a453c:;
  /* 100a453c mov eax, dword ptr [0x100b6564] */
  EAX = (r32((uint32_t)(0x100b6564)));
  /* 100a4541 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a4544 je 0x100a4558 */
  if (C.zf) goto L_100a4558;
  /* 100a4546 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a4547 je 0x100a4552 */
  if (C.zf) goto L_100a4552;
  /* 100a4549 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a454a jne 0x100a4584 */
  if (!C.zf) goto L_100a4584;
  /* 100a454c push 9 */
  push32((uint32_t)(0x9u));
  /* 100a454e push 4 */
  push32((uint32_t)(0x4u));
  /* 100a4550 jmp 0x100a4579 */
  goto L_100a4579;
L_100a4552:;
  /* 100a4552 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a4554 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a4556 jmp 0x100a4579 */
  goto L_100a4579;
L_100a4558:;
  /* 100a4558 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a455e jle 0x100a456f */
  if ((C.zf||C.sf!=C.of)) goto L_100a456f;
  /* 100a4560 push 6 */
  push32((uint32_t)(0x6u));
  /* 100a4562 push 6 */
  push32((uint32_t)(0x6u));
  /* 100a4564 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a4566 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a456cu);
  /* 100a456c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a456f:;
  /* 100a456f push 5 */
  push32((uint32_t)(0x5u));
  /* 100a4571 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4577 push 5 */
  push32((uint32_t)(0x5u));
L_100a4579:;
  /* 100a4579 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a457b call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a4581u);
  /* 100a4581 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4584:;
  /* 100a4584 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 100a4588 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 100a458d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a458f je 0x100a4596 */
  if (C.zf) goto L_100a4596;
  /* 100a4591 mov esi, 0x17c */
  ESI = (0x17cu);
L_100a4596:;
  /* 100a4596 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4599 jge 0x100a45b7 */
  if ((C.sf==C.of)) goto L_100a45b7;
  /* 100a459b cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a45a1 jle 0x100a45f3 */
  if ((C.zf||C.sf!=C.of)) goto L_100a45f3;
  /* 100a45a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a45a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a45a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a45a9 push 0x100b6160 */
  push32((uint32_t)(0x100b6160u));
  /* 100a45ae call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a45b4u);
  /* 100a45b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a45b7:;
  /* 100a45b7 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a45bd jle 0x100a45f3 */
  if ((C.zf||C.sf!=C.of)) goto L_100a45f3;
  /* 100a45bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a45c1 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 100a45c6 push esi */
  push32((uint32_t)(ESI));
  /* 100a45c7 push 0x100b6160 */
  push32((uint32_t)(0x100b6160u));
  /* 100a45cc call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a45d2u);
  /* 100a45d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a45d5 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a45db jle 0x100a45f3 */
  if ((C.zf||C.sf!=C.of)) goto L_100a45f3;
  /* 100a45dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a45df push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 100a45e4 push esi */
  push32((uint32_t)(ESI));
  /* 100a45e5 push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a45ea call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a45f0u);
  /* 100a45f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a45f3:;
  /* 100a45f3 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a45f8 jle 0x100a45ff */
  if ((C.zf||C.sf!=C.of)) goto L_100a45ff;
  /* 100a45fa call 0x100a4210 */
  push32(0x100a45ffu); f_100a4210();
L_100a45ff:;
  /* 100a45ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4601 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4603 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4605 push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a460a call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4610u);
  /* 100a4610 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a4612 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4614 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4616 push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a461b call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4621u);
  /* 100a4621 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a4623 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4625 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4627 push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a462c call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4632u);
  /* 100a4632 push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a4637 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a463du);
  /* 100a463d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4640 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4643 jle 0x100a46b6 */
  if ((C.zf||C.sf!=C.of)) goto L_100a46b6;
  /* 100a4645 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a4647 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a4649 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a464b push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a4650 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4656u);
  /* 100a4656 push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a465b call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a4661u);
  /* 100a4661 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4664 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4667 jle 0x100a467d */
  if ((C.zf||C.sf!=C.of)) goto L_100a467d;
  /* 100a4669 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a466b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a466d push 1 */
  push32((uint32_t)(0x1u));
  /* 100a466f push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a4674 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a467au);
  /* 100a467a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a467d:;
  /* 100a467d push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a4682 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a4688u);
  /* 100a4688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a468b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a468e jle 0x100a46a4 */
  if ((C.zf||C.sf!=C.of)) goto L_100a46a4;
  /* 100a4690 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4692 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4694 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4696 push 0x100b3848 */
  push32((uint32_t)(0x100b3848u));
  /* 100a469b call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a46a1u);
  /* 100a46a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a46a4:;
  /* 100a46a4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a46a6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a46a8 push 0x100b60e0 */
  push32((uint32_t)(0x100b60e0u));
  /* 100a46ad call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a46b3u);
  /* 100a46b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a46b6:;
  /* 100a46b6 push 0x100b6160 */
  push32((uint32_t)(0x100b6160u));
  /* 100a46bb call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a46c1u);
  /* 100a46c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a46c4 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a46c7 jle 0x100a46dd */
  if ((C.zf||C.sf!=C.of)) goto L_100a46dd;
  /* 100a46c9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a46cb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a46cd push 1 */
  push32((uint32_t)(0x1u));
  /* 100a46cf push 0x100b3848 */
  push32((uint32_t)(0x100b3848u));
  /* 100a46d4 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a46dau);
  /* 100a46da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a46dd:;
  /* 100a46dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a46df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a46e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a46e3 push 0x100b61b8 */
  push32((uint32_t)(0x100b61b8u));
  /* 100a46e8 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a46eeu);
  /* 100a46ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a46f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a46f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a46f4 push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a46f9 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a46ffu);
  /* 100a46ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4701 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4703 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4705 push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a470a call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4710u);
  /* 100a4710 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4712 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4714 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4716 push 0x100b5fa0 */
  push32((uint32_t)(0x100b5fa0u));
  /* 100a471b call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4721u);
  /* 100a4721 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4724 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a4726 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4728 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a472a push 0x100b61b8 */
  push32((uint32_t)(0x100b61b8u));
  /* 100a472f call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4735u);
  /* 100a4735 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4737 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a4739 push 0x100b3630 */
  push32((uint32_t)(0x100b3630u));
  /* 100a473e call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4744u);
  /* 100a4744 push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a4749 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a474fu);
  /* 100a474f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a4754 jle 0x100a476a */
  if ((C.zf||C.sf!=C.of)) goto L_100a476a;
  /* 100a4756 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4758 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a475a push 1 */
  push32((uint32_t)(0x1u));
  /* 100a475c push 0x100b60c8 */
  push32((uint32_t)(0x100b60c8u));
  /* 100a4761 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4767u);
  /* 100a4767 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a476a:;
  /* 100a476a call dword ptr [0x100b6540] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6540))), 0x100a4770u);
  /* 100a4770 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4772 je 0x100a4788 */
  if (C.zf) goto L_100a4788;
  /* 100a4774 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4776 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4778 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a477a push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a477f call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4785u);
  /* 100a4785 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4788:;
  /* 100a4788 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a478a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a478c push 1 */
  push32((uint32_t)(0x1u));
  /* 100a478e push 0x100b5fb8 */
  push32((uint32_t)(0x100b5fb8u));
  /* 100a4793 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4799u);
  /* 100a4799 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a479b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a479d push 1 */
  push32((uint32_t)(0x1u));
  /* 100a479f push 0x100b35e8 */
  push32((uint32_t)(0x100b35e8u));
  /* 100a47a4 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a47aau);
  /* 100a47aa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a47ad cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a47b0 jle 0x100a47c6 */
  if ((C.zf||C.sf!=C.of)) goto L_100a47c6;
  /* 100a47b2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a47b4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a47b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a47b8 push 0x100b5fa8 */
  push32((uint32_t)(0x100b5fa8u));
  /* 100a47bd call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a47c3u);
  /* 100a47c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a47c6:;
  /* 100a47c6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a47c8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a47ca push 1 */
  push32((uint32_t)(0x1u));
  /* 100a47cc push 0x100b6228 */
  push32((uint32_t)(0x100b6228u));
  /* 100a47d1 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a47d7u);
  /* 100a47d7 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a47d9 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a47db push 2 */
  push32((uint32_t)(0x2u));
  /* 100a47dd push 0x100b6228 */
  push32((uint32_t)(0x100b6228u));
  /* 100a47e2 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a47e8u);
  /* 100a47e8 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a47ea push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a47ec push 0x100b6048 */
  push32((uint32_t)(0x100b6048u));
  /* 100a47f1 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a47f7u);
  /* 100a47f7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a47f9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a47fb push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a4800 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4806u);
  /* 100a4806 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4808 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a480a push 0x100b6188 */
  push32((uint32_t)(0x100b6188u));
  /* 100a480f call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4815u);
  /* 100a4815 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4818 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a481a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a481c push 0x100b6010 */
  push32((uint32_t)(0x100b6010u));
  /* 100a4821 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4827u);
  /* 100a4827 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4829 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a482b push 0x100b6000 */
  push32((uint32_t)(0x100b6000u));
  /* 100a4830 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4836u);
  /* 100a4836 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4838 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a483a push 0x100b6008 */
  push32((uint32_t)(0x100b6008u));
  /* 100a483f call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4845u);
  /* 100a4845 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a484a call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a4850u);
  /* 100a4850 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4853 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a4855 je 0x100a4914 */
  if (C.zf) goto L_100a4914;
  /* 100a485b push 0x100b6188 */
  push32((uint32_t)(0x100b6188u));
  /* 100a4860 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a4866u);
  /* 100a4866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4869 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a486b jne 0x100a4914 */
  if (!C.zf) goto L_100a4914;
  /* 100a4871 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4873 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4879u);
  /* 100a4879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a487c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4881 jle 0x100a48a7 */
  if ((C.zf||C.sf!=C.of)) goto L_100a48a7;
  /* 100a4883 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a4885 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a488bu);
  /* 100a488b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a488e cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4893 jle 0x100a48a7 */
  if ((C.zf||C.sf!=C.of)) goto L_100a48a7;
  /* 100a4895 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a4897 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a489du);
  /* 100a489d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a48a0 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a48a5 jg 0x100a4914 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a4914;
L_100a48a7:;
  /* 100a48a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a48a9 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a48afu);
  /* 100a48af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a48b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a48b4 je 0x100a493b */
  if (C.zf) goto L_100a493b;
  /* 100a48ba push 5 */
  push32((uint32_t)(0x5u));
  /* 100a48bc call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a48c2u);
  /* 100a48c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a48c5 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a48ca jle 0x100a493b */
  if ((C.zf||C.sf!=C.of)) goto L_100a493b;
  /* 100a48cc push 5 */
  push32((uint32_t)(0x5u));
  /* 100a48ce call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a48d4u);
  /* 100a48d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a48d7 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a48dc jle 0x100a48ef */
  if ((C.zf||C.sf!=C.of)) goto L_100a48ef;
  /* 100a48de push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100a48e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a48e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a48e7 call 0x100a25f0 */
  push32(0x100a48ecu); f_100a25f0();
  /* 100a48ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a48ef:;
  /* 100a48ef push 4 */
  push32((uint32_t)(0x4u));
  /* 100a48f1 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a48f7u);
  /* 100a48f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a48fa cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a48ff jle 0x100a493b */
  if ((C.zf||C.sf!=C.of)) goto L_100a493b;
  /* 100a4901 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100a4906 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4908 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a490a call 0x100a25f0 */
  push32(0x100a490fu); f_100a25f0();
  /* 100a490f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4912 jmp 0x100a493b */
  goto L_100a493b;
L_100a4914:;
  /* 100a4914 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a4916 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4918 call 0x100a25d0 */
  push32(0x100a491du); f_100a25d0();
  /* 100a491d push 0 */
  push32((uint32_t)(0x0u));
  /* 100a491f push 4 */
  push32((uint32_t)(0x4u));
  /* 100a4921 call 0x100a25d0 */
  push32(0x100a4926u); f_100a25d0();
  /* 100a4926 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a4928 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a492a call 0x100a25d0 */
  push32(0x100a492fu); f_100a25d0();
  /* 100a492f push 0 */
  push32((uint32_t)(0x0u));
  /* 100a4931 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4933 call 0x100a25d0 */
  push32(0x100a4938u); f_100a25d0();
  /* 100a4938 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a493b:;
  /* 100a493b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a493d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a493f push 0x100b3770 */
  push32((uint32_t)(0x100b3770u));
  /* 100a4944 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a494au);
  /* 100a494a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a494c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a494e push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4950 push 0x100b62a8 */
  push32((uint32_t)(0x100b62a8u));
  /* 100a4955 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a495bu);
  /* 100a495b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a495d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a495f push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4961 push 0x100b62a8 */
  push32((uint32_t)(0x100b62a8u));
  /* 100a4966 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a496cu);
  /* 100a496c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a496e push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4970 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4972 push 0x100b62a8 */
  push32((uint32_t)(0x100b62a8u));
  /* 100a4977 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a497du);
  /* 100a497d push 0x100b3928 */
  push32((uint32_t)(0x100b3928u));
  /* 100a4982 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a4988u);
  /* 100a4988 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a498b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a498d jne 0x100a49d8 */
  if (!C.zf) goto L_100a49d8;
  /* 100a498f push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 100a4991 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a4993 call 0x100a2620 */
  push32(0x100a4998u); f_100a2620();
  /* 100a4998 mov esi, eax */
  ESI = (EAX);
  /* 100a499a push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100a499c push 0 */
  push32((uint32_t)(0x0u));
  /* 100a499e sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100a49a1 call 0x100a2620 */
  push32(0x100a49a6u); f_100a2620();
  /* 100a49a6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100a49a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a49aa add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a49ac call 0x100a2620 */
  push32(0x100a49b1u); f_100a2620();
  /* 100a49b1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a49b3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a49b6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a49b9 jle 0x100a49c8 */
  if ((C.zf||C.sf!=C.of)) goto L_100a49c8;
  /* 100a49bb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a49bd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a49bf push 6 */
  push32((uint32_t)(0x6u));
  /* 100a49c1 push 0x100b5f60 */
  push32((uint32_t)(0x100b5f60u));
  /* 100a49c6 jmp 0x100a49e3 */
  goto L_100a49e3;
L_100a49c8:;
  /* 100a49c8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a49ca je 0x100a49ec */
  if (C.zf) goto L_100a49ec;
  /* 100a49cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a49ce push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a49d0 push esi */
  push32((uint32_t)(ESI));
  /* 100a49d1 push 0x100b5f60 */
  push32((uint32_t)(0x100b5f60u));
  /* 100a49d6 jmp 0x100a49e3 */
  goto L_100a49e3;
L_100a49d8:;
  /* 100a49d8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a49da push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a49dc push 0xa */
  push32((uint32_t)(0xau));
  /* 100a49de push 0x100b38b8 */
  push32((uint32_t)(0x100b38b8u));
L_100a49e3:;
  /* 100a49e3 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a49e9u);
  /* 100a49e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a49ec:;
  /* 100a49ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a49ee push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a49f0 push 0x100b3928 */
  push32((uint32_t)(0x100b3928u));
  /* 100a49f5 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a49fbu);
  /* 100a49fb push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a4a00 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a4a06u);
  /* 100a4a06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4a09 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4a0b je 0x100a4a2e */
  if (C.zf) goto L_100a4a2e;
  /* 100a4a0d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4a0f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4a11 push 0x100b3928 */
  push32((uint32_t)(0x100b3928u));
  /* 100a4a16 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4a1cu);
  /* 100a4a1c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4a1e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a4a20 push 0x100b3840 */
  push32((uint32_t)(0x100b3840u));
  /* 100a4a25 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4a2bu);
  /* 100a4a2b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4a2e:;
  /* 100a4a2e push 0x100b3928 */
  push32((uint32_t)(0x100b3928u));
  /* 100a4a33 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a4a39u);
  /* 100a4a39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4a3c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4a3e je 0x100a4a66 */
  if (C.zf) goto L_100a4a66;
  /* 100a4a40 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4a42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4a44 push 0x100b3910 */
  push32((uint32_t)(0x100b3910u));
  /* 100a4a49 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4a4fu);
  /* 100a4a4f push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4a51 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100a4a53 push 0x100b3850 */
  push32((uint32_t)(0x100b3850u));
  /* 100a4a58 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4a5eu);
  /* 100a4a5e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4a61 call 0x100a3300 */
  push32(0x100a4a66u); f_100a3300();
L_100a4a66:;
  /* 100a4a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a4a68 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4a6a call 0x100a25d0 */
  push32(0x100a4a6fu); f_100a25d0();
  /* 100a4a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 100a4a71 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4a77u);
  /* 100a4a77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4a7a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4a7f jle 0x100a4ac3 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4ac3;
  /* 100a4a81 push 0x100b3770 */
  push32((uint32_t)(0x100b3770u));
  /* 100a4a86 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a4a8cu);
  /* 100a4a8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4a8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4a91 je 0x100a4ac3 */
  if (C.zf) goto L_100a4ac3;
  /* 100a4a93 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4a95 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4a9bu);
  /* 100a4a9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4a9e cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4aa3 jge 0x100a4ac3 */
  if ((C.sf==C.of)) goto L_100a4ac3;
  /* 100a4aa5 push 0x100b3928 */
  push32((uint32_t)(0x100b3928u));
  /* 100a4aaa call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a4ab0u);
  /* 100a4ab0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4ab3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4ab5 jne 0x100a4ac3 */
  if (!C.zf) goto L_100a4ac3;
  /* 100a4ab7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4ab9 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4abb call 0x100a25d0 */
  push32(0x100a4ac0u); f_100a25d0();
  /* 100a4ac0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4ac3:;
  /* 100a4ac3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4ac5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4ac7 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4ac9 push 0x100b61c0 */
  push32((uint32_t)(0x100b61c0u));
  /* 100a4ace call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4ad4u);
  /* 100a4ad4 push 0x100b60c0 */
  push32((uint32_t)(0x100b60c0u));
  /* 100a4ad9 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a4adfu);
  /* 100a4adf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4ae2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4ae4 je 0x100a4afa */
  if (C.zf) goto L_100a4afa;
  /* 100a4ae6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4ae8 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4aea push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a4aec push 0x100b61c0 */
  push32((uint32_t)(0x100b61c0u));
  /* 100a4af1 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4af7u);
  /* 100a4af7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4afa:;
  /* 100a4afa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4afc push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a4afe push 0x100b60c0 */
  push32((uint32_t)(0x100b60c0u));
  /* 100a4b03 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4b09u);
  /* 100a4b09 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4b0b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a4b0d push 0x100b60d0 */
  push32((uint32_t)(0x100b60d0u));
  /* 100a4b12 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4b18u);
  /* 100a4b18 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4b1a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4b1c push 0x100b62b8 */
  push32((uint32_t)(0x100b62b8u));
  /* 100a4b21 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4b27u);
  /* 100a4b27 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4b29 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4b2b push 0x100b62a0 */
  push32((uint32_t)(0x100b62a0u));
  /* 100a4b30 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4b36u);
  /* 100a4b36 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4b38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4b3a push 0x100b62b0 */
  push32((uint32_t)(0x100b62b0u));
  /* 100a4b3f call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4b45u);
  /* 100a4b45 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4b47 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4b49 push 0x100b6290 */
  push32((uint32_t)(0x100b6290u));
  /* 100a4b4e call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4b54u);
  /* 100a4b54 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4b57 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4b59 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4b5b push 0x100b6298 */
  push32((uint32_t)(0x100b6298u));
  /* 100a4b60 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4b66u);
  /* 100a4b66 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4b68 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4b6a push 0x100b6288 */
  push32((uint32_t)(0x100b6288u));
  /* 100a4b6f call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4b75u);
  /* 100a4b75 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4b78 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4b7b jle 0x100a4bd4 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4bd4;
  /* 100a4b7d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 100a4b81 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4b83 je 0x100a4bd4 */
  if (C.zf) goto L_100a4bd4;
  /* 100a4b85 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4b87 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a4b89 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4b8b push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a4b90 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4b96u);
  /* 100a4b96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4b99 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4b9c jle 0x100a4bd4 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4bd4;
  /* 100a4b9e push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4ba0 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a4ba2 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4ba4 push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a4ba9 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4bafu);
  /* 100a4baf push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4bb1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4bb3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4bb5 push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a4bba call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4bc0u);
  /* 100a4bc0 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4bc2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a4bc4 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a4bc6 push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a4bcb call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4bd1u);
  /* 100a4bd1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4bd4:;
  /* 100a4bd4 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 100a4bd8 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100a4bda je 0x100a4cbe */
  if (C.zf) goto L_100a4cbe;
  /* 100a4be0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4be2 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4be4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4be6 push 0x100b3898 */
  push32((uint32_t)(0x100b3898u));
  /* 100a4beb call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4bf1u);
  /* 100a4bf1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a4bf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4bf5 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 100a4bf7 push 0x100b6130 */
  push32((uint32_t)(0x100b6130u));
  /* 100a4bfc call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4c02u);
  /* 100a4c02 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a4c04 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4c06 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a4c08 push 0x100b6248 */
  push32((uint32_t)(0x100b6248u));
  /* 100a4c0d call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4c13u);
  /* 100a4c13 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4c15 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a4c17 push 0x100b3600 */
  push32((uint32_t)(0x100b3600u));
  /* 100a4c1c call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4c22u);
  /* 100a4c22 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4c24 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a4c26 push 0x100b36d8 */
  push32((uint32_t)(0x100b36d8u));
  /* 100a4c2b call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4c31u);
  /* 100a4c31 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4c34 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4c36 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a4c38 push 0x100b35f8 */
  push32((uint32_t)(0x100b35f8u));
  /* 100a4c3d call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4c43u);
  /* 100a4c43 push 0x100b6168 */
  push32((uint32_t)(0x100b6168u));
  /* 100a4c48 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a4c4eu);
  /* 100a4c4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4c51 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4c53 je 0x100a4c69 */
  if (C.zf) goto L_100a4c69;
  /* 100a4c55 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4c57 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a4c59 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a4c5b push 0x100b6340 */
  push32((uint32_t)(0x100b6340u));
  /* 100a4c60 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4c66u);
  /* 100a4c66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4c69:;
  /* 100a4c69 push 0x100b6080 */
  push32((uint32_t)(0x100b6080u));
  /* 100a4c6e call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a4c74u);
  /* 100a4c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4c77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4c79 je 0x100a4c8f */
  if (C.zf) goto L_100a4c8f;
  /* 100a4c7b push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4c7d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a4c7f push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4c81 push 0x100b3638 */
  push32((uint32_t)(0x100b3638u));
  /* 100a4c86 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4c8cu);
  /* 100a4c8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4c8f:;
  /* 100a4c8f call 0x100a4340 */
  push32(0x100a4c94u); f_100a4340();
L_100a4c94:;
  /* 100a4c94 push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a4c99 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a4c9fu);
  /* 100a4c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4ca2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4ca4 je 0x100a4cf4 */
  if (C.zf) goto L_100a4cf4;
  /* 100a4ca6 push 0x100b60d0 */
  push32((uint32_t)(0x100b60d0u));
  /* 100a4cab call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a4cb1u);
  /* 100a4cb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4cb4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4cb6 jne 0x100a4ce5 */
  if (!C.zf) goto L_100a4ce5;
  /* 100a4cb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4cba push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4cbc jmp 0x100a4ce9 */
  goto L_100a4ce9;
L_100a4cbe:;
  /* 100a4cbe push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a4cc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4cc2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a4cc4 push 0x100b6130 */
  push32((uint32_t)(0x100b6130u));
  /* 100a4cc9 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4ccfu);
  /* 100a4ccf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a4cd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4cd3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a4cd5 push 0x100b6248 */
  push32((uint32_t)(0x100b6248u));
  /* 100a4cda call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4ce0u);
  /* 100a4ce0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4ce3 jmp 0x100a4c94 */
  goto L_100a4c94;
L_100a4ce5:;
  /* 100a4ce5 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a4ce7 push 4 */
  push32((uint32_t)(0x4u));
L_100a4ce9:;
  /* 100a4ce9 push 8 */
  push32((uint32_t)(0x8u));
  /* 100a4ceb call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a4cf1u);
  /* 100a4cf1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4cf4:;
  /* 100a4cf4 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a4cf9 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a4cffu);
  /* 100a4cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4d02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a4d04 je 0x100a4d1a */
  if (C.zf) goto L_100a4d1a;
  /* 100a4d06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4d08 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4d0a push 6 */
  push32((uint32_t)(0x6u));
  /* 100a4d0c push 0x100b61c0 */
  push32((uint32_t)(0x100b61c0u));
  /* 100a4d11 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4d17u);
  /* 100a4d17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4d1a:;
  /* 100a4d1a push 0x100b60c0 */
  push32((uint32_t)(0x100b60c0u));
  /* 100a4d1f call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a4d25u);
  /* 100a4d25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4d28 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4d2a je 0x100a4d40 */
  if (C.zf) goto L_100a4d40;
  /* 100a4d2c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4d2e push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4d30 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a4d32 push 0x100b61c0 */
  push32((uint32_t)(0x100b61c0u));
  /* 100a4d37 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4d3du);
  /* 100a4d3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4d40:;
  /* 100a4d40 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100a4d42 je 0x100a4e43 */
  if (C.zf) goto L_100a4e43;
  /* 100a4d48 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a4d4a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a4d4c push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4d4e push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a4d53 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4d59u);
  /* 100a4d59 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a4d5b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a4d5d push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4d5f push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a4d64 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4d6au);
  /* 100a4d6a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a4d6c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a4d6e push 4 */
  push32((uint32_t)(0x4u));
  /* 100a4d70 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a4d75 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4d7bu);
  /* 100a4d7b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a4d7d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100a4d7f push 5 */
  push32((uint32_t)(0x5u));
  /* 100a4d81 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a4d86 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4d8cu);
  /* 100a4d8c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4d8f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a4d91 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100a4d93 push 6 */
  push32((uint32_t)(0x6u));
  /* 100a4d95 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a4d9a call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4da0u);
  /* 100a4da0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4da2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a4da4 push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a4da9 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4dafu);
  /* 100a4daf push 0x100b60b0 */
  push32((uint32_t)(0x100b60b0u));
  /* 100a4db4 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a4dbau);
  /* 100a4dba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4dbd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4dc0 jle 0x100a4de3 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4de3;
  /* 100a4dc2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4dc4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4dc6 push 0x100b61d8 */
  push32((uint32_t)(0x100b61d8u));
  /* 100a4dcb call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4dd1u);
  /* 100a4dd1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100a4dd3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a4dd5 push 0x100b61e0 */
  push32((uint32_t)(0x100b61e0u));
  /* 100a4dda call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4de0u);
  /* 100a4de0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4de3:;
  /* 100a4de3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4de5 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a4de7 push 0x100b60c0 */
  push32((uint32_t)(0x100b60c0u));
  /* 100a4dec call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4df2u);
  /* 100a4df2 push 0x100b38d8 */
  push32((uint32_t)(0x100b38d8u));
  /* 100a4df7 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a4dfdu);
  /* 100a4dfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4e00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4e02 je 0x100a4e43 */
  if (C.zf) goto L_100a4e43;
  /* 100a4e04 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4e06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4e08 push 0x100b6138 */
  push32((uint32_t)(0x100b6138u));
  /* 100a4e0d call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4e13u);
  /* 100a4e13 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4e15 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4e17 push 0x100b6148 */
  push32((uint32_t)(0x100b6148u));
  /* 100a4e1c call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4e22u);
  /* 100a4e22 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4e24 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100a4e26 push 0x100b6150 */
  push32((uint32_t)(0x100b6150u));
  /* 100a4e2b call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4e31u);
  /* 100a4e31 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4e33 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100a4e35 push 0x100b6140 */
  push32((uint32_t)(0x100b6140u));
  /* 100a4e3a call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4e40u);
  /* 100a4e40 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4e43:;
  /* 100a4e43 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4e45 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100a4e47 push 0x100b3770 */
  push32((uint32_t)(0x100b3770u));
  /* 100a4e4c call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4e52u);
  /* 100a4e52 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a4e54 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a4e56 push 0x100b38b0 */
  push32((uint32_t)(0x100b38b0u));
  /* 100a4e5b call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4e61u);
  /* 100a4e61 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4e63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4e65 push 0x100b6120 */
  push32((uint32_t)(0x100b6120u));
  /* 100a4e6a call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a4e70u);
  /* 100a4e70 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 100a4e74 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4e77 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4e7c jle 0x100a4e9a */
  if ((C.zf||C.sf!=C.of)) goto L_100a4e9a;
  /* 100a4e7e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a4e80 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a4e82 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 100a4e87 push 0x100b60b0 */
  push32((uint32_t)(0x100b60b0u));
  /* 100a4e8c call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a4e92u);
  /* 100a4e92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4e95 call 0x100a42f0 */
  push32(0x100a4e9au); f_100a42f0();
L_100a4e9a:;
  /* 100a4e9a push 0x100b3848 */
  push32((uint32_t)(0x100b3848u));
  /* 100a4e9f call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a4ea5u);
  /* 100a4ea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a4eaa je 0x100a51f3 */
  if (C.zf) goto L_100a51f3;
  /* 100a4eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a4eb2 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4eb8u);
  /* 100a4eb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4eba mov edi, eax */
  EDI = (EAX);
  /* 100a4ebc call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4ec2u);
  /* 100a4ec2 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a4ec4 mov esi, eax */
  ESI = (EAX);
  /* 100a4ec6 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4eccu);
  /* 100a4ecc push 5 */
  push32((uint32_t)(0x5u));
  /* 100a4ece mov ebp, eax */
  EBP = (EAX);
  /* 100a4ed0 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4ed6u);
  /* 100a4ed6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4ed8 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100a4edc call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4ee2u);
  /* 100a4ee2 mov ebx, eax */
  EBX = (EAX);
  /* 100a4ee4 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 100a4ee8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4eeb cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4ef0 jge 0x100a4f83 */
  if ((C.sf==C.of)) goto L_100a4f83;
  /* 100a4ef6 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4efc jle 0x100a4f09 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4f09;
  /* 100a4efe push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100a4f03 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4f05 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4f07 jmp 0x100a4f7b */
  goto L_100a4f7b;
L_100a4f09:;
  /* 100a4f09 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4f0f jle 0x100a4f1c */
  if ((C.zf||C.sf!=C.of)) goto L_100a4f1c;
  /* 100a4f11 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 100a4f16 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4f18 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4f1a jmp 0x100a4f7b */
  goto L_100a4f7b;
L_100a4f1c:;
  /* 100a4f1c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4f22 jle 0x100a4f2f */
  if ((C.zf||C.sf!=C.of)) goto L_100a4f2f;
  /* 100a4f24 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100a4f29 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 100a4f2d jmp 0x100a4f7b */
  goto L_100a4f7b;
L_100a4f2f:;
  /* 100a4f2f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4f35 jle 0x100a4f42 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4f42;
  /* 100a4f37 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 100a4f3c push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 100a4f40 jmp 0x100a4f7b */
  goto L_100a4f7b;
L_100a4f42:;
  /* 100a4f42 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4f4a jle 0x100a4f57 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4f57;
  /* 100a4f4c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 100a4f51 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4f53 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a4f55 jmp 0x100a4f7b */
  goto L_100a4f7b;
L_100a4f57:;
  /* 100a4f57 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4f5d jle 0x100a4f6a */
  if ((C.zf||C.sf!=C.of)) goto L_100a4f6a;
  /* 100a4f5f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 100a4f64 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4f66 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a4f68 jmp 0x100a4f7b */
  goto L_100a4f7b;
L_100a4f6a:;
  /* 100a4f6a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4f70 jle 0x100a4f83 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4f83;
  /* 100a4f72 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 100a4f77 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4f79 push 1 */
  push32((uint32_t)(0x1u));
L_100a4f7b:;
  /* 100a4f7b call 0x100a25f0 */
  push32(0x100a4f80u); f_100a25f0();
  /* 100a4f80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4f83:;
  /* 100a4f83 push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a4f88 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a4f8eu);
  /* 100a4f8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4f91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a4f93 je 0x100a4fe3 */
  if (C.zf) goto L_100a4fe3;
  /* 100a4f95 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4f9b jle 0x100a4fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4fe3;
  /* 100a4f9d push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a4fa2 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a4fa8u);
  /* 100a4fa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4fab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a4fad jne 0x100a4fe3 */
  if (!C.zf) goto L_100a4fe3;
  /* 100a4faf cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4fb5 jle 0x100a4fc8 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4fc8;
  /* 100a4fb7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 100a4fbc push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4fbe push 4 */
  push32((uint32_t)(0x4u));
  /* 100a4fc0 call 0x100a25f0 */
  push32(0x100a4fc5u); f_100a25f0();
  /* 100a4fc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4fc8:;
  /* 100a4fc8 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4fd0 jle 0x100a4fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_100a4fe3;
  /* 100a4fd2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100a4fd7 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a4fd9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a4fdb call 0x100a25f0 */
  push32(0x100a4fe0u); f_100a25f0();
  /* 100a4fe0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a4fe3:;
  /* 100a4fe3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4fe5 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a4febu);
  /* 100a4feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a4fee cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a4ff3 jle 0x100a5006 */
  if ((C.zf||C.sf!=C.of)) goto L_100a5006;
  /* 100a4ff5 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100a4ffa push 1 */
  push32((uint32_t)(0x1u));
  /* 100a4ffc push 2 */
  push32((uint32_t)(0x2u));
  /* 100a4ffe call 0x100a25f0 */
  push32(0x100a5003u); f_100a25f0();
  /* 100a5003 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5006:;
  /* 100a5006 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a5008 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a500eu);
  /* 100a500e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5011 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5016 jle 0x100a5029 */
  if ((C.zf||C.sf!=C.of)) goto L_100a5029;
  /* 100a5018 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 100a501d push 1 */
  push32((uint32_t)(0x1u));
  /* 100a501f push 0 */
  push32((uint32_t)(0x0u));
  /* 100a5021 call 0x100a25f0 */
  push32(0x100a5026u); f_100a25f0();
  /* 100a5026 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5029:;
  /* 100a5029 push 0x100b61b8 */
  push32((uint32_t)(0x100b61b8u));
  /* 100a502e call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5034u);
  /* 100a5034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5039 je 0x100a51c0 */
  if (C.zf) goto L_100a51c0;
  /* 100a503f push 0x100b6188 */
  push32((uint32_t)(0x100b6188u));
  /* 100a5044 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a504au);
  /* 100a504a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a504d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a504f jne 0x100a51c0 */
  if (!C.zf) goto L_100a51c0;
  /* 100a5055 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a5057 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a505du);
  /* 100a505d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5060 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5065 jle 0x100a5120 */
  if ((C.zf||C.sf!=C.of)) goto L_100a5120;
  /* 100a506b push 0 */
  push32((uint32_t)(0x0u));
  /* 100a506d call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a5073u);
  /* 100a5073 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5078 je 0x100a5120 */
  if (C.zf) goto L_100a5120;
  /* 100a507e push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5080 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a5086u);
  /* 100a5086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5089 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a508e jge 0x100a5120 */
  if ((C.sf==C.of)) goto L_100a5120;
  /* 100a5094 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a5096 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a509cu);
  /* 100a509c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a509f cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a50a4 jle 0x100a50b7 */
  if ((C.zf||C.sf!=C.of)) goto L_100a50b7;
  /* 100a50a6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100a50ab push 1 */
  push32((uint32_t)(0x1u));
  /* 100a50ad push 5 */
  push32((uint32_t)(0x5u));
  /* 100a50af call 0x100a25f0 */
  push32(0x100a50b4u); f_100a25f0();
  /* 100a50b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a50b7:;
  /* 100a50b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a50b9 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a50bfu);
  /* 100a50bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a50c2 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a50c7 jle 0x100a50da */
  if ((C.zf||C.sf!=C.of)) goto L_100a50da;
  /* 100a50c9 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 100a50ce push 1 */
  push32((uint32_t)(0x1u));
  /* 100a50d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a50d2 call 0x100a25f0 */
  push32(0x100a50d7u); f_100a25f0();
  /* 100a50d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a50da:;
  /* 100a50da push 2 */
  push32((uint32_t)(0x2u));
  /* 100a50dc call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a50e2u);
  /* 100a50e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a50e5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a50ea jle 0x100a50fd */
  if ((C.zf||C.sf!=C.of)) goto L_100a50fd;
  /* 100a50ec push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 100a50f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a50f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a50f5 call 0x100a25f0 */
  push32(0x100a50fau); f_100a25f0();
  /* 100a50fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a50fd:;
  /* 100a50fd push 3 */
  push32((uint32_t)(0x3u));
  /* 100a50ff call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a5105u);
  /* 100a5105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5108 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a510d jle 0x100a5120 */
  if ((C.zf||C.sf!=C.of)) goto L_100a5120;
  /* 100a510f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 100a5114 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5116 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a5118 call 0x100a25f0 */
  push32(0x100a511du); f_100a25f0();
  /* 100a511d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5120:;
  /* 100a5120 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a5122 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a5128u);
  /* 100a5128 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a512b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5130 jle 0x100a51c0 */
  if ((C.zf||C.sf!=C.of)) goto L_100a51c0;
  /* 100a5136 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5138 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a513eu);
  /* 100a513e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5143 je 0x100a51c0 */
  if (C.zf) goto L_100a51c0;
  /* 100a5145 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5147 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a514du);
  /* 100a514d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5150 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5155 jle 0x100a51c0 */
  if ((C.zf||C.sf!=C.of)) goto L_100a51c0;
  /* 100a5157 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a5159 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a515fu);
  /* 100a515f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5162 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5167 jle 0x100a517a */
  if ((C.zf||C.sf!=C.of)) goto L_100a517a;
  /* 100a5169 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100a516e push 4 */
  push32((uint32_t)(0x4u));
  /* 100a5170 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a5172 call 0x100a25f0 */
  push32(0x100a5177u); f_100a25f0();
  /* 100a5177 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a517a:;
  /* 100a517a push 2 */
  push32((uint32_t)(0x2u));
  /* 100a517c call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a5182u);
  /* 100a5182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5185 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a518a jle 0x100a519d */
  if ((C.zf||C.sf!=C.of)) goto L_100a519d;
  /* 100a518c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 100a5191 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a5193 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a5195 call 0x100a25f0 */
  push32(0x100a519au); f_100a25f0();
  /* 100a519a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a519d:;
  /* 100a519d push 3 */
  push32((uint32_t)(0x3u));
  /* 100a519f call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a51a5u);
  /* 100a51a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a51a8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a51ad jle 0x100a51c0 */
  if ((C.zf||C.sf!=C.of)) goto L_100a51c0;
  /* 100a51af push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 100a51b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a51b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a51b8 call 0x100a25f0 */
  push32(0x100a51bdu); f_100a25f0();
  /* 100a51bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a51c0:;
  /* 100a51c0 call dword ptr [0x100b64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d0))), 0x100a51c6u);
  /* 100a51c6 mov ecx, dword ptr [eax*4 + 0x100b65dc] */
  ECX = (r32((uint32_t)(EAX*4 + 0x100b65dc)));
  /* 100a51cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100a51cf jne 0x100a51f3 */
  if (!C.zf) goto L_100a51f3;
  /* 100a51d1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100a51d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a51d8 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a51da call 0x100a25f0 */
  push32(0x100a51dfu); f_100a25f0();
  /* 100a51df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a51e2 call dword ptr [0x100b64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d0))), 0x100a51e8u);
  /* 100a51e8 mov dword ptr [eax*4 + 0x100b65dc], 1 */
  w32((uint32_t)(EAX*4 + 0x100b65dc), (0x1u));
L_100a51f3:;
  /* 100a51f3 pop edi */
  EDI = (pop32());
  /* 100a51f4 pop esi */
  ESI = (pop32());
  /* 100a51f5 pop ebp */
  EBP = (pop32());
  /* 100a51f6 pop ebx */
  EBX = (pop32());
  /* 100a51f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a51fa ret  */
  ESPCHK(0x100a43c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005200 @ 0x100a5200 (72 bytes, 22 insns) */
void f_100a5200(void) {
  FTRACE(0x100a5200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a5200 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5202 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5204 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5206 push 0x100b5fa8 */
  push32((uint32_t)(0x100b5fa8u));
  /* 100a520b call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5211u);
  /* 100a5211 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5213 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5215 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5217 push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a521c call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5222u);
  /* 100a5222 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5224 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5226 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5228 push 0x100b5fa0 */
  push32((uint32_t)(0x100b5fa0u));
  /* 100a522d call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5233u);
  /* 100a5233 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5235 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5237 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5239 push 0x100b3848 */
  push32((uint32_t)(0x100b3848u));
  /* 100a523e call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5244u);
  /* 100a5244 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5247 ret  */
  ESPCHK(0x100a5200u, _esp0);
  ESP += 4; return;
}

/* FUN_10005250 @ 0x100a5250 (55 bytes, 16 insns) */
void f_100a5250(void) {
  FTRACE(0x100a5250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a5250 cmp dword ptr [esp + 4], 0x100b3658 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x100b3658u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5258 jne 0x100a5284 */
  if (!C.zf) goto L_100a5284;
  /* 100a525a push 0x100b6310 */
  push32((uint32_t)(0x100b6310u));
  /* 100a525f call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a5265u);
  /* 100a5265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5268 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a526a je 0x100a5284 */
  if (C.zf) goto L_100a5284;
  /* 100a526c push 0x100b6258 */
  push32((uint32_t)(0x100b6258u));
  /* 100a5271 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a5277u);
  /* 100a5277 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a527a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a527c je 0x100a5284 */
  if (C.zf) goto L_100a5284;
  /* 100a527e mov eax, 1 */
  EAX = (0x1u);
  /* 100a5283 ret  */
  ESPCHK(0x100a5250u, _esp0);
  ESP += 4; return;
L_100a5284:;
  /* 100a5284 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a5286 ret  */
  ESPCHK(0x100a5250u, _esp0);
  ESP += 4; return;
}

/* FUN_10005290 @ 0x100a5290 (2008 bytes, 535 insns) */
void f_100a5290(void) {
  FTRACE(0x100a5290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a5290 push 0x100b6248 */
  push32((uint32_t)(0x100b6248u));
  /* 100a5295 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a529bu);
  /* 100a529b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a529e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a52a0 jne 0x100a52b4 */
  if (!C.zf) goto L_100a52b4;
  /* 100a52a2 push 0x100b3898 */
  push32((uint32_t)(0x100b3898u));
  /* 100a52a7 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a52adu);
  /* 100a52ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a52b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a52b2 je 0x100a52e4 */
  if (C.zf) goto L_100a52e4;
L_100a52b4:;
  /* 100a52b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a52b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a52b8 push 0x100b3920 */
  push32((uint32_t)(0x100b3920u));
  /* 100a52bd call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a52c3u);
  /* 100a52c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a52c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a52c7 push 0x100b61c8 */
  push32((uint32_t)(0x100b61c8u));
  /* 100a52cc call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a52d2u);
  /* 100a52d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a52d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a52d6 push 0x100b61d0 */
  push32((uint32_t)(0x100b61d0u));
  /* 100a52db call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a52e1u);
  /* 100a52e1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a52e4:;
  /* 100a52e4 push 0x100b6380 */
  push32((uint32_t)(0x100b6380u));
  /* 100a52e9 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a52efu);
  /* 100a52ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a52f2 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a52f5 jg 0x100a531f */
  if ((!C.zf&&C.sf==C.of)) goto L_100a531f;
  /* 100a52f7 push 0x100b6300 */
  push32((uint32_t)(0x100b6300u));
  /* 100a52fc call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5302u);
  /* 100a5302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5305 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5308 jg 0x100a531f */
  if ((!C.zf&&C.sf==C.of)) goto L_100a531f;
  /* 100a530a push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a530f call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5315u);
  /* 100a5315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5318 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a531d jle 0x100a537d */
  if ((C.zf||C.sf!=C.of)) goto L_100a537d;
L_100a531f:;
  /* 100a531f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5321 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a5323 push 0x100b35f8 */
  push32((uint32_t)(0x100b35f8u));
  /* 100a5328 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a532eu);
  /* 100a532e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5330 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a5332 push 0x100b3600 */
  push32((uint32_t)(0x100b3600u));
  /* 100a5337 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a533du);
  /* 100a533d push 0x100b6380 */
  push32((uint32_t)(0x100b6380u));
  /* 100a5342 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5348u);
  /* 100a5348 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a534b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5350 jg 0x100a536b */
  if ((!C.zf&&C.sf==C.of)) goto L_100a536b;
  /* 100a5352 push 0x100b6300 */
  push32((uint32_t)(0x100b6300u));
  /* 100a5357 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a535du);
  /* 100a535d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5360 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5363 jg 0x100a536b */
  if ((!C.zf&&C.sf==C.of)) goto L_100a536b;
  /* 100a5365 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5367 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100a5369 jmp 0x100a536f */
  goto L_100a536f;
L_100a536b:;
  /* 100a536b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a536d push 0x5f */
  push32((uint32_t)(0x5fu));
L_100a536f:;
  /* 100a536f push 0x100b36d8 */
  push32((uint32_t)(0x100b36d8u));
  /* 100a5374 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a537au);
  /* 100a537a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a537d:;
  /* 100a537d push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a5382 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5388u);
  /* 100a5388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a538b cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a538e jle 0x100a5443 */
  if ((C.zf||C.sf!=C.of)) goto L_100a5443;
  /* 100a5394 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5396 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a5398 push 0x100b6320 */
  push32((uint32_t)(0x100b6320u));
  /* 100a539d call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a53a3u);
  /* 100a53a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a53a5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100a53a7 push 0x100b6328 */
  push32((uint32_t)(0x100b6328u));
  /* 100a53ac call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a53b2u);
  /* 100a53b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a53b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a53b6 push 0x100b6310 */
  push32((uint32_t)(0x100b6310u));
  /* 100a53bb call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a53c1u);
  /* 100a53c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a53c3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a53c5 push 0x100b6268 */
  push32((uint32_t)(0x100b6268u));
  /* 100a53ca call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a53d0u);
  /* 100a53d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a53d2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100a53d4 push 0x100b6250 */
  push32((uint32_t)(0x100b6250u));
  /* 100a53d9 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a53dfu);
  /* 100a53df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a53e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a53e3 push 0x100b6258 */
  push32((uint32_t)(0x100b6258u));
  /* 100a53e8 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a53eeu);
  /* 100a53ee add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a53f1 push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a53f6 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a53fcu);
  /* 100a53fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a53ff cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5402 jle 0x100a5443 */
  if ((C.zf||C.sf!=C.of)) goto L_100a5443;
  /* 100a5404 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5406 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5408 push 0x100b6318 */
  push32((uint32_t)(0x100b6318u));
  /* 100a540d call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5413u);
  /* 100a5413 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5415 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5417 push 0x100b6330 */
  push32((uint32_t)(0x100b6330u));
  /* 100a541c call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5422u);
  /* 100a5422 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5424 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5426 push 0x100b6270 */
  push32((uint32_t)(0x100b6270u));
  /* 100a542b call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5431u);
  /* 100a5431 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5433 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5435 push 0x100b6278 */
  push32((uint32_t)(0x100b6278u));
  /* 100a543a call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5440u);
  /* 100a5440 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5443:;
  /* 100a5443 push 0x100b60b0 */
  push32((uint32_t)(0x100b60b0u));
  /* 100a5448 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a544eu);
  /* 100a544e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5451 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5454 jle 0x100a54eb */
  if ((C.zf||C.sf!=C.of)) goto L_100a54eb;
  /* 100a545a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a545c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a545e push 0x100b38e0 */
  push32((uint32_t)(0x100b38e0u));
  /* 100a5463 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5469u);
  /* 100a5469 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a546b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a546d push 0x100b38e8 */
  push32((uint32_t)(0x100b38e8u));
  /* 100a5472 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5478u);
  /* 100a5478 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a547a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a547c push 0x100b38d8 */
  push32((uint32_t)(0x100b38d8u));
  /* 100a5481 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5487u);
  /* 100a5487 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5489 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a548b push 0x100b5f48 */
  push32((uint32_t)(0x100b5f48u));
  /* 100a5490 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5496u);
  /* 100a5496 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5498 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a549a push 0x100b5f38 */
  push32((uint32_t)(0x100b5f38u));
  /* 100a549f call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a54a5u);
  /* 100a54a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a54a7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a54a9 push 0x100b5f40 */
  push32((uint32_t)(0x100b5f40u));
  /* 100a54ae call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a54b4u);
  /* 100a54b4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a54b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a54b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a54bb push 0x100b61d8 */
  push32((uint32_t)(0x100b61d8u));
  /* 100a54c0 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a54c6u);
  /* 100a54c6 push 0x100b60b0 */
  push32((uint32_t)(0x100b60b0u));
  /* 100a54cb call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a54d1u);
  /* 100a54d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a54d4 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a54d7 jle 0x100a54eb */
  if ((C.zf||C.sf!=C.of)) goto L_100a54eb;
  /* 100a54d9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a54db push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a54dd push 0x100b61e0 */
  push32((uint32_t)(0x100b61e0u));
  /* 100a54e2 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a54e8u);
  /* 100a54e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a54eb:;
  /* 100a54eb push 0x100b36d0 */
  push32((uint32_t)(0x100b36d0u));
  /* 100a54f0 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a54f6u);
  /* 100a54f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a54f9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a54fc jle 0x100a551f */
  if ((C.zf||C.sf!=C.of)) goto L_100a551f;
  /* 100a54fe push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5500 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5502 push 0x100b6230 */
  push32((uint32_t)(0x100b6230u));
  /* 100a5507 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a550du);
  /* 100a550d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a550f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5511 push 0x100b5f98 */
  push32((uint32_t)(0x100b5f98u));
  /* 100a5516 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a551cu);
  /* 100a551c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a551f:;
  /* 100a551f push 0x100b6380 */
  push32((uint32_t)(0x100b6380u));
  /* 100a5524 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a552au);
  /* 100a552a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a552d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5530 jle 0x100a5603 */
  if ((C.zf||C.sf!=C.of)) goto L_100a5603;
  /* 100a5536 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5538 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a553a push 0x100b6100 */
  push32((uint32_t)(0x100b6100u));
  /* 100a553f call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5545u);
  /* 100a5545 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5547 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100a5549 push 0x100b60f8 */
  push32((uint32_t)(0x100b60f8u));
  /* 100a554e call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5554u);
  /* 100a5554 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5556 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5558 push 0x100b60f0 */
  push32((uint32_t)(0x100b60f0u));
  /* 100a555d call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5563u);
  /* 100a5563 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5565 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a5567 push 0x100b5fe8 */
  push32((uint32_t)(0x100b5fe8u));
  /* 100a556c call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5572u);
  /* 100a5572 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5574 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100a5576 push 0x100b5fe0 */
  push32((uint32_t)(0x100b5fe0u));
  /* 100a557b call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5581u);
  /* 100a5581 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5583 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5585 push 0x100b5fd8 */
  push32((uint32_t)(0x100b5fd8u));
  /* 100a558a call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5590u);
  /* 100a5590 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5593 push 0x100b6380 */
  push32((uint32_t)(0x100b6380u));
  /* 100a5598 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a559eu);
  /* 100a559e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a55a1 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a55a4 jle 0x100a5603 */
  if ((C.zf||C.sf!=C.of)) goto L_100a5603;
  /* 100a55a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a55a8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a55aa push 0x100b60e8 */
  push32((uint32_t)(0x100b60e8u));
  /* 100a55af call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a55b5u);
  /* 100a55b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a55b7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a55b9 push 0x100b60d8 */
  push32((uint32_t)(0x100b60d8u));
  /* 100a55be call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a55c4u);
  /* 100a55c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a55c6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a55c8 push 0x100b6128 */
  push32((uint32_t)(0x100b6128u));
  /* 100a55cd call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a55d3u);
  /* 100a55d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a55d5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a55d7 push 0x100b5fd0 */
  push32((uint32_t)(0x100b5fd0u));
  /* 100a55dc call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a55e2u);
  /* 100a55e2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a55e4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a55e6 push 0x100b5fc8 */
  push32((uint32_t)(0x100b5fc8u));
  /* 100a55eb call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a55f1u);
  /* 100a55f1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a55f3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a55f5 push 0x100b5fc0 */
  push32((uint32_t)(0x100b5fc0u));
  /* 100a55fa call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5600u);
  /* 100a5600 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5603:;
  /* 100a5603 push 0x100b6300 */
  push32((uint32_t)(0x100b6300u));
  /* 100a5608 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a560eu);
  /* 100a560e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5611 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5614 jle 0x100a56e6 */
  if ((C.zf||C.sf!=C.of)) goto L_100a56e6;
  /* 100a561a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a561c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a561e push 0x100b3718 */
  push32((uint32_t)(0x100b3718u));
  /* 100a5623 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5629u);
  /* 100a5629 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a562b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a562d push 0x100b3710 */
  push32((uint32_t)(0x100b3710u));
  /* 100a5632 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5638u);
  /* 100a5638 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a563a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a563c push 0x100b3708 */
  push32((uint32_t)(0x100b3708u));
  /* 100a5641 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5647u);
  /* 100a5647 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5649 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a564b push 0x100b3688 */
  push32((uint32_t)(0x100b3688u));
  /* 100a5650 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5656u);
  /* 100a5656 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5658 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a565a push 0x100b3680 */
  push32((uint32_t)(0x100b3680u));
  /* 100a565f call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5665u);
  /* 100a5665 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5667 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a5669 push 0x100b3678 */
  push32((uint32_t)(0x100b3678u));
  /* 100a566e call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5674u);
  /* 100a5674 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5677 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5679 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a567b push 0x100b3670 */
  push32((uint32_t)(0x100b3670u));
  /* 100a5680 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5686u);
  /* 100a5686 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5688 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a568a push 0x100b3648 */
  push32((uint32_t)(0x100b3648u));
  /* 100a568f call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5695u);
  /* 100a5695 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5697 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a5699 push 0x100b3640 */
  push32((uint32_t)(0x100b3640u));
  /* 100a569e call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a56a4u);
  /* 100a56a4 push 0x100b3640 */
  push32((uint32_t)(0x100b3640u));
  /* 100a56a9 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a56afu);
  /* 100a56af add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a56b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a56b4 je 0x100a56e6 */
  if (C.zf) goto L_100a56e6;
  /* 100a56b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a56b8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a56ba push 0x100b36f0 */
  push32((uint32_t)(0x100b36f0u));
  /* 100a56bf call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a56c5u);
  /* 100a56c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a56c7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a56c9 push 0x100b36e8 */
  push32((uint32_t)(0x100b36e8u));
  /* 100a56ce call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a56d4u);
  /* 100a56d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a56d6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a56d8 push 0x100b36e0 */
  push32((uint32_t)(0x100b36e0u));
  /* 100a56dd call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a56e3u);
  /* 100a56e3 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a56e6:;
  /* 100a56e6 push 0x100b3660 */
  push32((uint32_t)(0x100b3660u));
  /* 100a56eb call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a56f1u);
  /* 100a56f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a56f4 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a56f7 jle 0x100a577f */
  if ((C.zf||C.sf!=C.of)) goto L_100a577f;
  /* 100a56fd push 0x100b3650 */
  push32((uint32_t)(0x100b3650u));
  /* 100a5702 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5708u);
  /* 100a5708 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a570b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a570e jge 0x100a577f */
  if ((C.sf==C.of)) goto L_100a577f;
  /* 100a5710 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5712 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a5714 push 0x100b38d0 */
  push32((uint32_t)(0x100b38d0u));
  /* 100a5719 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a571fu);
  /* 100a571f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5721 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100a5723 push 0x100b38c8 */
  push32((uint32_t)(0x100b38c8u));
  /* 100a5728 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a572eu);
  /* 100a572e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5730 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5732 push 0x100b38c0 */
  push32((uint32_t)(0x100b38c0u));
  /* 100a5737 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a573du);
  /* 100a573d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a573f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a5741 push 0x100b3888 */
  push32((uint32_t)(0x100b3888u));
  /* 100a5746 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a574cu);
  /* 100a574c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a574e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a5750 push 0x100b3880 */
  push32((uint32_t)(0x100b3880u));
  /* 100a5755 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a575bu);
  /* 100a575b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a575d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a575f push 0x100b3878 */
  push32((uint32_t)(0x100b3878u));
  /* 100a5764 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a576au);
  /* 100a576a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a576d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a576f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5771 push 0x100b61d8 */
  push32((uint32_t)(0x100b61d8u));
  /* 100a5776 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a577cu);
  /* 100a577c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a577f:;
  /* 100a577f push 0x100b3650 */
  push32((uint32_t)(0x100b3650u));
  /* 100a5784 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a578au);
  /* 100a578a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a578d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5790 jle 0x100a5871 */
  if ((C.zf||C.sf!=C.of)) goto L_100a5871;
  /* 100a5796 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5798 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a579a push 0x100b3628 */
  push32((uint32_t)(0x100b3628u));
  /* 100a579f call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a57a5u);
  /* 100a57a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a57a7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100a57a9 push 0x100b3620 */
  push32((uint32_t)(0x100b3620u));
  /* 100a57ae call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a57b4u);
  /* 100a57b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a57b6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a57b8 push 0x100b3618 */
  push32((uint32_t)(0x100b3618u));
  /* 100a57bd call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a57c3u);
  /* 100a57c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a57c5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a57c7 push 0x100b62e8 */
  push32((uint32_t)(0x100b62e8u));
  /* 100a57cc call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a57d2u);
  /* 100a57d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a57d4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a57d6 push 0x100b62e0 */
  push32((uint32_t)(0x100b62e0u));
  /* 100a57db call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a57e1u);
  /* 100a57e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a57e3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100a57e5 push 0x100b62d8 */
  push32((uint32_t)(0x100b62d8u));
  /* 100a57ea call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a57f0u);
  /* 100a57f0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a57f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a57f5 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a57f7 push 0x100b6360 */
  push32((uint32_t)(0x100b6360u));
  /* 100a57fc call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5802u);
  /* 100a5802 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5804 push 0xf */
  push32((uint32_t)(0xfu));
  /* 100a5806 push 0x100b6358 */
  push32((uint32_t)(0x100b6358u));
  /* 100a580b call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5811u);
  /* 100a5811 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5813 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a5815 push 0x100b63a8 */
  push32((uint32_t)(0x100b63a8u));
  /* 100a581a call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5820u);
  /* 100a5820 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5822 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100a5824 push 0x100b63a0 */
  push32((uint32_t)(0x100b63a0u));
  /* 100a5829 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a582fu);
  /* 100a582f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5831 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100a5833 push 0x100b6398 */
  push32((uint32_t)(0x100b6398u));
  /* 100a5838 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a583eu);
  /* 100a583e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5840 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100a5842 push 0x100b6390 */
  push32((uint32_t)(0x100b6390u));
  /* 100a5847 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a584du);
  /* 100a584d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5850 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5852 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5854 push 0x100b61d8 */
  push32((uint32_t)(0x100b61d8u));
  /* 100a5859 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a585fu);
  /* 100a585f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5861 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5863 push 0x100b61e0 */
  push32((uint32_t)(0x100b61e0u));
  /* 100a5868 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a586eu);
  /* 100a586e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5871:;
  /* 100a5871 push 0x100b5f50 */
  push32((uint32_t)(0x100b5f50u));
  /* 100a5876 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a587cu);
  /* 100a587c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a587f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5882 jle 0x100a59e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100a59e0;
  /* 100a5888 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a588a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a588c push 0x100b36b0 */
  push32((uint32_t)(0x100b36b0u));
  /* 100a5891 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5897u);
  /* 100a5897 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5899 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a589b push 0x100b36b8 */
  push32((uint32_t)(0x100b36b8u));
  /* 100a58a0 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a58a6u);
  /* 100a58a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a58a8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a58aa push 0x100b36c0 */
  push32((uint32_t)(0x100b36c0u));
  /* 100a58af call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a58b5u);
  /* 100a58b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a58b7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a58b9 push 0x100b36c8 */
  push32((uint32_t)(0x100b36c8u));
  /* 100a58be call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a58c4u);
  /* 100a58c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a58c6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a58c8 push 0x100b3690 */
  push32((uint32_t)(0x100b3690u));
  /* 100a58cd call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a58d3u);
  /* 100a58d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a58d5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a58d7 push 0x100b36a0 */
  push32((uint32_t)(0x100b36a0u));
  /* 100a58dc call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a58e2u);
  /* 100a58e2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a58e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a58e7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a58e9 push 0x100b3758 */
  push32((uint32_t)(0x100b3758u));
  /* 100a58ee call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a58f4u);
  /* 100a58f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a58f6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a58f8 push 0x100b3760 */
  push32((uint32_t)(0x100b3760u));
  /* 100a58fd call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5903u);
  /* 100a5903 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5905 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5907 push 0x100b3768 */
  push32((uint32_t)(0x100b3768u));
  /* 100a590c call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5912u);
  /* 100a5912 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5914 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5916 push 0x100b3740 */
  push32((uint32_t)(0x100b3740u));
  /* 100a591b call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5921u);
  /* 100a5921 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5923 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5925 push 0x100b3748 */
  push32((uint32_t)(0x100b3748u));
  /* 100a592a call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5930u);
  /* 100a5930 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5932 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5934 push 0x100b3750 */
  push32((uint32_t)(0x100b3750u));
  /* 100a5939 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a593fu);
  /* 100a593f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5942 push 0x100b5f50 */
  push32((uint32_t)(0x100b5f50u));
  /* 100a5947 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a594du);
  /* 100a594d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5950 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5953 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5955 jle 0x100a596a */
  if ((C.zf||C.sf!=C.of)) goto L_100a596a;
  /* 100a5957 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5959 push 0x100b5ff8 */
  push32((uint32_t)(0x100b5ff8u));
  /* 100a595e call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5964u);
  /* 100a5964 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5966 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5968 jmp 0x100a597b */
  goto L_100a597b;
L_100a596a:;
  /* 100a596a push 0xf */
  push32((uint32_t)(0xfu));
  /* 100a596c push 0x100b5ff8 */
  push32((uint32_t)(0x100b5ff8u));
  /* 100a5971 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5977u);
  /* 100a5977 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5979 push 0xf */
  push32((uint32_t)(0xfu));
L_100a597b:;
  /* 100a597b push 0x100b6058 */
  push32((uint32_t)(0x100b6058u));
  /* 100a5980 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5986u);
  /* 100a5986 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5989 push 0x100b5ff8 */
  push32((uint32_t)(0x100b5ff8u));
  /* 100a598e call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a5994u);
  /* 100a5994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5997 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a5999 je 0x100a59bf */
  if (C.zf) goto L_100a59bf;
  /* 100a599b push 0x100b6058 */
  push32((uint32_t)(0x100b6058u));
  /* 100a59a0 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a59a6u);
  /* 100a59a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a59a9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a59ab je 0x100a59bf */
  if (C.zf) goto L_100a59bf;
  /* 100a59ad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a59af push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a59b1 push 0x100b6050 */
  push32((uint32_t)(0x100b6050u));
  /* 100a59b6 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a59bcu);
  /* 100a59bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a59bf:;
  /* 100a59bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a59c1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a59c3 push 0x100b61d8 */
  push32((uint32_t)(0x100b61d8u));
  /* 100a59c8 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a59ceu);
  /* 100a59ce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a59d0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a59d2 push 0x100b61e0 */
  push32((uint32_t)(0x100b61e0u));
  /* 100a59d7 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a59ddu);
  /* 100a59dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a59e0:;
  /* 100a59e0 push 0x100b62d8 */
  push32((uint32_t)(0x100b62d8u));
  /* 100a59e5 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a59ebu);
  /* 100a59eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a59ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a59f0 je 0x100a5a67 */
  if (C.zf) goto L_100a5a67;
  /* 100a59f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a59f4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a59f6 push 0x100b6140 */
  push32((uint32_t)(0x100b6140u));
  /* 100a59fb call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5a01u);
  /* 100a5a01 push 0x100b6140 */
  push32((uint32_t)(0x100b6140u));
  /* 100a5a06 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a5a0cu);
  /* 100a5a0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5a0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a5a11 je 0x100a5a67 */
  if (C.zf) goto L_100a5a67;
  /* 100a5a13 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5a15 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5a17 push 0x100b6150 */
  push32((uint32_t)(0x100b6150u));
  /* 100a5a1c call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5a22u);
  /* 100a5a22 push 0x100b6150 */
  push32((uint32_t)(0x100b6150u));
  /* 100a5a27 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a5a2du);
  /* 100a5a2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5a30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a5a32 je 0x100a5a67 */
  if (C.zf) goto L_100a5a67;
  /* 100a5a34 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5a36 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5a38 push 0x100b6148 */
  push32((uint32_t)(0x100b6148u));
  /* 100a5a3d call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5a43u);
  /* 100a5a43 push 0x100b6148 */
  push32((uint32_t)(0x100b6148u));
  /* 100a5a48 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a5a4eu);
  /* 100a5a4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5a51 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a5a53 je 0x100a5a67 */
  if (C.zf) goto L_100a5a67;
  /* 100a5a55 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5a57 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5a59 push 0x100b6138 */
  push32((uint32_t)(0x100b6138u));
  /* 100a5a5e call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5a64u);
  /* 100a5a64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5a67:;
  /* 100a5a67 ret  */
  ESPCHK(0x100a5290u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a70 @ 0x100a5a70 (305 bytes, 86 insns) */
void f_100a5a70(void) {
  FTRACE(0x100a5a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a5a70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5a72 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a5a74 push 0x100b6348 */
  push32((uint32_t)(0x100b6348u));
  /* 100a5a79 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5a7fu);
  /* 100a5a7f push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a5a84 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5a8au);
  /* 100a5a8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5a8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5a8f je 0x100a5aa3 */
  if (C.zf) goto L_100a5aa3;
  /* 100a5a91 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5a93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5a95 push 0x100b3630 */
  push32((uint32_t)(0x100b3630u));
  /* 100a5a9a call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5aa0u);
  /* 100a5aa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5aa3:;
  /* 100a5aa3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5aa5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5aa7 push 0x100b6048 */
  push32((uint32_t)(0x100b6048u));
  /* 100a5aac call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5ab2u);
  /* 100a5ab2 push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a5ab7 call 0x100a5250 */
  push32(0x100a5abcu); f_100a5250();
  /* 100a5abc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5ac1 jne 0x100a5ad1 */
  if (!C.zf) goto L_100a5ad1;
  /* 100a5ac3 mov eax, dword ptr [0x100b5f28] */
  EAX = (r32((uint32_t)(0x100b5f28)));
  /* 100a5ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5aca je 0x100a5ae3 */
  if (C.zf) goto L_100a5ae3;
  /* 100a5acc cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5acf je 0x100a5ae3 */
  if (C.zf) goto L_100a5ae3;
L_100a5ad1:;
  /* 100a5ad1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5ad3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100a5ad5 push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a5ada call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5ae0u);
  /* 100a5ae0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5ae3:;
  /* 100a5ae3 push 0x100b5fb8 */
  push32((uint32_t)(0x100b5fb8u));
  /* 100a5ae8 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5aeeu);
  /* 100a5aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5af3 je 0x100a5b07 */
  if (C.zf) goto L_100a5b07;
  /* 100a5af5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5af7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5af9 push 0x100b6010 */
  push32((uint32_t)(0x100b6010u));
  /* 100a5afe call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5b04u);
  /* 100a5b04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5b07:;
  /* 100a5b07 push 0x100b6120 */
  push32((uint32_t)(0x100b6120u));
  /* 100a5b0c call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a5b12u);
  /* 100a5b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5b15 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a5b17 je 0x100a5b2b */
  if (C.zf) goto L_100a5b2b;
  /* 100a5b19 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5b1b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5b1d push 0x100b6000 */
  push32((uint32_t)(0x100b6000u));
  /* 100a5b22 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5b28u);
  /* 100a5b28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5b2b:;
  /* 100a5b2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5b2d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 100a5b2f push 0x100b6120 */
  push32((uint32_t)(0x100b6120u));
  /* 100a5b34 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5b3au);
  /* 100a5b3a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5b3c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 100a5b3e push 0x100b60d0 */
  push32((uint32_t)(0x100b60d0u));
  /* 100a5b43 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5b49u);
  /* 100a5b49 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a5b4e call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5b54u);
  /* 100a5b54 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5b59 je 0x100a5b6d */
  if (C.zf) goto L_100a5b6d;
  /* 100a5b5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5b5d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 100a5b5f push 0x100b6188 */
  push32((uint32_t)(0x100b6188u));
  /* 100a5b64 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5b6au);
  /* 100a5b6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5b6d:;
  /* 100a5b6d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5b6f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 100a5b71 push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a5b76 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5b7cu);
  /* 100a5b7c push 0x100b6228 */
  push32((uint32_t)(0x100b6228u));
  /* 100a5b81 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5b87u);
  /* 100a5b87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5b8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5b8c je 0x100a5ba0 */
  if (C.zf) goto L_100a5ba0;
  /* 100a5b8e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5b90 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5b92 push 0x100b38b0 */
  push32((uint32_t)(0x100b38b0u));
  /* 100a5b97 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a5b9du);
  /* 100a5b9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5ba0:;
  /* 100a5ba0 ret  */
  ESPCHK(0x100a5a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bb0 @ 0x100a5bb0 (536 bytes, 150 insns) */
void f_100a5bb0(void) {
  FTRACE(0x100a5bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a5bb0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5bb2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5bb4 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a5bb6 push 0x100b6228 */
  push32((uint32_t)(0x100b6228u));
  /* 100a5bbb call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5bc1u);
  /* 100a5bc1 push 0x100b5fb8 */
  push32((uint32_t)(0x100b5fb8u));
  /* 100a5bc6 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a5bccu);
  /* 100a5bcc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5bcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5bd1 je 0x100a5bf8 */
  if (C.zf) goto L_100a5bf8;
  /* 100a5bd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5bd5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5bd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a5bd9 push 0x100b5fa8 */
  push32((uint32_t)(0x100b5fa8u));
  /* 100a5bde call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5be4u);
  /* 100a5be4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5be6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5be8 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a5bea push 0x100b5fa0 */
  push32((uint32_t)(0x100b5fa0u));
  /* 100a5bef call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5bf5u);
  /* 100a5bf5 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5bf8:;
  /* 100a5bf8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5bfa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5bfc push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5bfe push 0x100b5fa8 */
  push32((uint32_t)(0x100b5fa8u));
  /* 100a5c03 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5c09u);
  /* 100a5c09 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5c0b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5c0d push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5c0f push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a5c14 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5c1au);
  /* 100a5c1a mov eax, dword ptr [0x100b6284] */
  EAX = (r32((uint32_t)(0x100b6284)));
  /* 100a5c1f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5c22 mov ecx, dword ptr [eax*4 + 0x100b5f68] */
  ECX = (r32((uint32_t)(EAX*4 + 0x100b5f68)));
  /* 100a5c29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100a5c2b jne 0x100a5c48 */
  if (!C.zf) goto L_100a5c48;
  /* 100a5c2d call 0x100a5200 */
  push32(0x100a5c32u); f_100a5200();
  /* 100a5c32 push 0x100b3848 */
  push32((uint32_t)(0x100b3848u));
  /* 100a5c37 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a5c3du);
  /* 100a5c3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5c40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5c42 je 0x100a5dc7 */
  if (C.zf) goto L_100a5dc7;
L_100a5c48:;
  /* 100a5c48 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5c4a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5c4c push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5c4e push 0x100b61b8 */
  push32((uint32_t)(0x100b61b8u));
  /* 100a5c53 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5c59u);
  /* 100a5c59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5c5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5c5d push 2 */
  push32((uint32_t)(0x2u));
  /* 100a5c5f push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a5c64 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5c6au);
  /* 100a5c6a push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a5c6f call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a5c75u);
  /* 100a5c75 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5c78 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5c7b jge 0x100a5c8a */
  if ((C.sf==C.of)) goto L_100a5c8a;
  /* 100a5c7d call 0x100a2650 */
  push32(0x100a5c82u); f_100a2650();
  /* 100a5c82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5c84 jne 0x100a5dc7 */
  if (!C.zf) goto L_100a5dc7;
L_100a5c8a:;
  /* 100a5c8a push esi */
  push32((uint32_t)(ESI));
  /* 100a5c8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5c8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5c8f push 2 */
  push32((uint32_t)(0x2u));
  /* 100a5c91 push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a5c96 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5c9cu);
  /* 100a5c9c push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a5ca1 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a5ca7u);
  /* 100a5ca7 push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a5cac mov esi, eax */
  ESI = (EAX);
  /* 100a5cae call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5cb4u);
  /* 100a5cb4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5cb7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a5cb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5cbb pop esi */
  ESI = (pop32());
  /* 100a5cbc jg 0x100a5dc7 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a5dc7;
  /* 100a5cc2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5cc4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5cc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5cc8 push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a5ccd call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5cd3u);
  /* 100a5cd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5cd6 call 0x100a2760 */
  push32(0x100a5cdbu); f_100a2760();
  /* 100a5cdb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5cde jge 0x100a5d07 */
  if ((C.sf==C.of)) goto L_100a5d07;
  /* 100a5ce0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5ce2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5ce4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5ce6 push 0x100b5fb8 */
  push32((uint32_t)(0x100b5fb8u));
  /* 100a5ceb call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5cf1u);
  /* 100a5cf1 push 0x100b5fb8 */
  push32((uint32_t)(0x100b5fb8u));
  /* 100a5cf6 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a5cfcu);
  /* 100a5cfc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5cff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5d01 je 0x100a5dc7 */
  if (C.zf) goto L_100a5dc7;
L_100a5d07:;
  /* 100a5d07 call 0x100a5200 */
  push32(0x100a5d0cu); f_100a5200();
  /* 100a5d0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5d0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5d10 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a5d12 push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a5d17 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5d1du);
  /* 100a5d1d push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a5d22 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a5d28u);
  /* 100a5d28 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5d2b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5d2e jl 0x100a5dc7 */
  if ((C.sf!=C.of)) goto L_100a5dc7;
  /* 100a5d34 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5d36 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5d38 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a5d3a push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a5d3f call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5d45u);
  /* 100a5d45 push 0x100b6228 */
  push32((uint32_t)(0x100b6228u));
  /* 100a5d4a call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5d50u);
  /* 100a5d50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5d53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5d55 je 0x100a5d6b */
  if (C.zf) goto L_100a5d6b;
  /* 100a5d57 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5d59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5d5b push 4 */
  push32((uint32_t)(0x4u));
  /* 100a5d5d push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a5d62 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5d68u);
  /* 100a5d68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5d6b:;
  /* 100a5d6b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5d6d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5d71 push 0x100b35e8 */
  push32((uint32_t)(0x100b35e8u));
  /* 100a5d76 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5d7cu);
  /* 100a5d7c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5d7e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100a5d80 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a5d82 push 0x100b35e8 */
  push32((uint32_t)(0x100b35e8u));
  /* 100a5d87 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5d8du);
  /* 100a5d8d push 0x100b38b0 */
  push32((uint32_t)(0x100b38b0u));
  /* 100a5d92 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a5d98u);
  /* 100a5d98 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5d9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a5d9d je 0x100a5db3 */
  if (C.zf) goto L_100a5db3;
  /* 100a5d9f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5da1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5da3 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a5da5 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a5daa call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5db0u);
  /* 100a5db0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5db3:;
  /* 100a5db3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5db5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5db9 push 0x100b60c8 */
  push32((uint32_t)(0x100b60c8u));
  /* 100a5dbe call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5dc4u);
  /* 100a5dc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5dc7:;
  /* 100a5dc7 ret  */
  ESPCHK(0x100a5bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x100a5dd0 (472 bytes, 137 insns) */
void f_100a5dd0(void) {
  FTRACE(0x100a5dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a5dd0 push ecx */
  push32((uint32_t)(ECX));
  /* 100a5dd1 push 0x100b6248 */
  push32((uint32_t)(0x100b6248u));
  /* 100a5dd6 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5ddcu);
  /* 100a5ddc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5ddf cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5de2 jge 0x100a5df7 */
  if ((C.sf==C.of)) goto L_100a5df7;
  /* 100a5de4 mov eax, dword ptr [0x100b6284] */
  EAX = (r32((uint32_t)(0x100b6284)));
  /* 100a5de9 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a5deb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5dee push eax */
  push32((uint32_t)(EAX));
  /* 100a5def call 0x100a26b0 */
  push32(0x100a5df4u); f_100a26b0();
  /* 100a5df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5df7:;
  /* 100a5df7 push 0x100b6248 */
  push32((uint32_t)(0x100b6248u));
  /* 100a5dfc call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5e02u);
  /* 100a5e02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5e05 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5e0a jg 0x100a5e1e */
  if ((!C.zf&&C.sf==C.of)) goto L_100a5e1e;
  /* 100a5e0c push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a5e11 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a5e17u);
  /* 100a5e17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5e1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5e1c je 0x100a5e32 */
  if (C.zf) goto L_100a5e32;
L_100a5e1e:;
  /* 100a5e1e mov ecx, dword ptr [0x100b6284] */
  ECX = (r32((uint32_t)(0x100b6284)));
  /* 100a5e24 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5e26 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5e29 push ecx */
  push32((uint32_t)(ECX));
  /* 100a5e2a call 0x100a26b0 */
  push32(0x100a5e2fu); f_100a26b0();
  /* 100a5e2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5e32:;
  /* 100a5e32 push esi */
  push32((uint32_t)(ESI));
  /* 100a5e33 push edi */
  push32((uint32_t)(EDI));
  /* 100a5e34 mov edi, 2 */
  EDI = (0x2u);
L_100a5e39:;
  /* 100a5e39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5e3b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a5e3d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a5e42 push 0x100b6160 */
  push32((uint32_t)(0x100b6160u));
  /* 100a5e47 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5e4du);
  /* 100a5e4d push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a5e52 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a5e58u);
  /* 100a5e58 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5e5b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5e60 jge 0x100a5e7b */
  if ((C.sf==C.of)) goto L_100a5e7b;
  /* 100a5e62 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5e64 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a5e66 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a5e6b push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a5e70 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5e76u);
  /* 100a5e76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5e79 jmp 0x100a5ea6 */
  goto L_100a5ea6;
L_100a5e7b:;
  /* 100a5e7b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100a5e7d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a5e7f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a5e84 push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a5e89 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5e8fu);
  /* 100a5e8f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5e91 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a5e93 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a5e98 push 0x100b60b0 */
  push32((uint32_t)(0x100b60b0u));
  /* 100a5e9d call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5ea3u);
  /* 100a5ea3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5ea6:;
  /* 100a5ea6 mov edx, dword ptr [0x100b6284] */
  EDX = (r32((uint32_t)(0x100b6284)));
  /* 100a5eac add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5eaf push edx */
  push32((uint32_t)(EDX));
  /* 100a5eb0 call 0x100a26d0 */
  push32(0x100a5eb5u); f_100a26d0();
  /* 100a5eb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5eb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5eba jne 0x100a5edd */
  if (!C.zf) goto L_100a5edd;
  /* 100a5ebc call 0x100a2760 */
  push32(0x100a5ec1u); f_100a2760();
  /* 100a5ec1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5ec4 jge 0x100a5edd */
  if ((C.sf==C.of)) goto L_100a5edd;
  /* 100a5ec6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5ec8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a5eca push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 100a5ecf push 0x100b6248 */
  push32((uint32_t)(0x100b6248u));
  /* 100a5ed4 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5edau);
  /* 100a5eda add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a5edd:;
  /* 100a5edd mov al, byte ptr [0x100b6284] */
  AL = (r8((uint32_t)(0x100b6284)));
  /* 100a5ee2 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 100a5ee6 mov eax, dword ptr [0x100b6488] */
  EAX = (r32((uint32_t)(0x100b6488)));
  /* 100a5eeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5eed je 0x100a5f05 */
  if (C.zf) goto L_100a5f05;
  /* 100a5eef mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a5ef3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a5ef5 push 0x100b3858 */
  push32((uint32_t)(0x100b3858u));
  /* 100a5efa push ecx */
  push32((uint32_t)(ECX));
  /* 100a5efb call eax */
  call_ind((uint32_t)(EAX), 0x100a5efdu);
  /* 100a5efd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5f00 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5f03 jge 0x100a5f45 */
  if ((C.sf==C.of)) goto L_100a5f45;
L_100a5f05:;
  /* 100a5f05 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a5f07 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a5f0du);
  /* 100a5f0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5f10 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5f15 jle 0x100a5f45 */
  if ((C.zf||C.sf!=C.of)) goto L_100a5f45;
  /* 100a5f17 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a5f19 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a5f1fu);
  /* 100a5f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5f22 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5f27 jle 0x100a5f45 */
  if ((C.zf||C.sf!=C.of)) goto L_100a5f45;
  /* 100a5f29 mov esi, 0x1e */
  ESI = (0x1eu);
L_100a5f2e:;
  /* 100a5f2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5f30 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a5f32 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a5f34 push 0x100b3858 */
  push32((uint32_t)(0x100b3858u));
  /* 100a5f39 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5f3fu);
  /* 100a5f3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5f42 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100a5f43 jne 0x100a5f2e */
  if (!C.zf) goto L_100a5f2e;
L_100a5f45:;
  /* 100a5f45 push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a5f4a call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a5f50u);
  /* 100a5f50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5f53 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a5f55 je 0x100a5f5b */
  if (C.zf) goto L_100a5f5b;
  /* 100a5f57 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a5f59 jmp 0x100a5f5d */
  goto L_100a5f5d;
L_100a5f5b:;
  /* 100a5f5b push 0x64 */
  push32((uint32_t)(0x64u));
L_100a5f5d:;
  /* 100a5f5d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a5f5f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a5f64 push 0x100b6380 */
  push32((uint32_t)(0x100b6380u));
  /* 100a5f69 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5f6fu);
  /* 100a5f6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5f72 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5f74 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a5f76 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a5f7b push 0x100b3650 */
  push32((uint32_t)(0x100b3650u));
  /* 100a5f80 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5f86u);
  /* 100a5f86 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a5f88 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a5f8a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a5f8f push 0x100b5f50 */
  push32((uint32_t)(0x100b5f50u));
  /* 100a5f94 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a5f9au);
  /* 100a5f9a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5f9d dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100a5f9e jne 0x100a5e39 */
  if (!C.zf) goto L_100a5e39;
  /* 100a5fa4 pop edi */
  EDI = (pop32());
  /* 100a5fa5 pop esi */
  ESI = (pop32());
  /* 100a5fa6 pop ecx */
  ECX = (pop32());
  /* 100a5fa7 ret  */
  ESPCHK(0x100a5dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fb0 @ 0x100a5fb0 (789 bytes, 244 insns) */
void f_100a5fb0(void) {
  FTRACE(0x100a5fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a5fb0 push ecx */
  push32((uint32_t)(ECX));
  /* 100a5fb1 push 0x100b3848 */
  push32((uint32_t)(0x100b3848u));
  /* 100a5fb6 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a5fbcu);
  /* 100a5fbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5fbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5fc1 je 0x100a62c3 */
  if (C.zf) goto L_100a62c3;
  /* 100a5fc7 call 0x100a2650 */
  push32(0x100a5fccu); f_100a2650();
  /* 100a5fcc cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a5fcf jne 0x100a6016 */
  if (!C.zf) goto L_100a6016;
  /* 100a5fd1 mov eax, dword ptr [0x100b6284] */
  EAX = (r32((uint32_t)(0x100b6284)));
  /* 100a5fd6 push eax */
  push32((uint32_t)(EAX));
  /* 100a5fd7 call 0x100a26d0 */
  push32(0x100a5fdcu); f_100a26d0();
  /* 100a5fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a5fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a5fe1 jne 0x100a62c3 */
  if (!C.zf) goto L_100a62c3;
  /* 100a5fe7 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 100a5fec push 3 */
  push32((uint32_t)(0x3u));
  /* 100a5fee push 2 */
  push32((uint32_t)(0x2u));
  /* 100a5ff0 call 0x100a25f0 */
  push32(0x100a5ff5u); f_100a25f0();
  /* 100a5ff5 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 100a5ffa push 3 */
  push32((uint32_t)(0x3u));
  /* 100a5ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 100a5ffe call 0x100a25f0 */
  push32(0x100a6003u); f_100a25f0();
  /* 100a6003 mov ecx, dword ptr [0x100b6284] */
  ECX = (r32((uint32_t)(0x100b6284)));
  /* 100a6009 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a600b push ecx */
  push32((uint32_t)(ECX));
  /* 100a600c call 0x100a26b0 */
  push32(0x100a6011u); f_100a26b0();
  /* 100a6011 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6014 pop ecx */
  ECX = (pop32());
  /* 100a6015 ret  */
  ESPCHK(0x100a5fb0u, _esp0);
  ESP += 4; return;
L_100a6016:;
  /* 100a6016 push 0x100b3848 */
  push32((uint32_t)(0x100b3848u));
  /* 100a601b call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a6021u);
  /* 100a6021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6024 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a6026 je 0x100a62c3 */
  if (C.zf) goto L_100a62c3;
  /* 100a602c mov edx, dword ptr [0x100b6284] */
  EDX = (r32((uint32_t)(0x100b6284)));
  /* 100a6032 push edx */
  push32((uint32_t)(EDX));
  /* 100a6033 call 0x100a26d0 */
  push32(0x100a6038u); f_100a26d0();
  /* 100a6038 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a603b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a603d jne 0x100a60b2 */
  if (!C.zf) goto L_100a60b2;
  /* 100a603f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100a6044 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a6046 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a6048 call 0x100a25f0 */
  push32(0x100a604du); f_100a25f0();
  /* 100a604d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6050 call 0x100a2650 */
  push32(0x100a6055u); f_100a2650();
  /* 100a6055 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6058 jne 0x100a6079 */
  if (!C.zf) goto L_100a6079;
  /* 100a605a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a605f push 0 */
  push32((uint32_t)(0x0u));
  /* 100a6061 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a6063 call 0x100a25f0 */
  push32(0x100a6068u); f_100a25f0();
  /* 100a6068 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a606d push 2 */
  push32((uint32_t)(0x2u));
  /* 100a606f push 4 */
  push32((uint32_t)(0x4u));
  /* 100a6071 call 0x100a25f0 */
  push32(0x100a6076u); f_100a25f0();
  /* 100a6076 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6079:;
  /* 100a6079 call 0x100a2650 */
  push32(0x100a607eu); f_100a2650();
  /* 100a607e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6081 jne 0x100a60a2 */
  if (!C.zf) goto L_100a60a2;
  /* 100a6083 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100a6088 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a608a push 4 */
  push32((uint32_t)(0x4u));
  /* 100a608c call 0x100a25f0 */
  push32(0x100a6091u); f_100a25f0();
  /* 100a6091 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100a6096 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a6098 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a609a call 0x100a25f0 */
  push32(0x100a609fu); f_100a25f0();
  /* 100a609f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a60a2:;
  /* 100a60a2 mov eax, dword ptr [0x100b6284] */
  EAX = (r32((uint32_t)(0x100b6284)));
  /* 100a60a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a60a9 push eax */
  push32((uint32_t)(EAX));
  /* 100a60aa call 0x100a26b0 */
  push32(0x100a60afu); f_100a26b0();
  /* 100a60af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a60b2:;
  /* 100a60b2 push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a60b7 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a60bdu);
  /* 100a60bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a60c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a60c2 je 0x100a6134 */
  if (C.zf) goto L_100a6134;
  /* 100a60c4 push 0x100b6120 */
  push32((uint32_t)(0x100b6120u));
  /* 100a60c9 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a60cfu);
  /* 100a60cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a60d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a60d4 jne 0x100a6134 */
  if (!C.zf) goto L_100a6134;
  /* 100a60d6 push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a60db call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a60e1u);
  /* 100a60e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a60e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a60e6 je 0x100a6134 */
  if (C.zf) goto L_100a6134;
  /* 100a60e8 mov eax, dword ptr [0x100b648c] */
  EAX = (r32((uint32_t)(0x100b648c)));
  /* 100a60ed mov cl, byte ptr [0x100b6284] */
  CL = (r8((uint32_t)(0x100b6284)));
  /* 100a60f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a60f5 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100a60f9 je 0x100a610e */
  if (C.zf) goto L_100a610e;
  /* 100a60fb mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100a60ff push 5 */
  push32((uint32_t)(0x5u));
  /* 100a6101 push 0x100b6120 */
  push32((uint32_t)(0x100b6120u));
  /* 100a6106 push edx */
  push32((uint32_t)(EDX));
  /* 100a6107 call eax */
  call_ind((uint32_t)(EAX), 0x100a6109u);
  /* 100a6109 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a610c jmp 0x100a6110 */
  goto L_100a6110;
L_100a610e:;
  /* 100a610e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100a6110:;
  /* 100a6110 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100a6113 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a6115 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100a6118 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100a611d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100a611f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100a6122 mov eax, edx */
  EAX = (EDX);
  /* 100a6124 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100a6127 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6129 push edx */
  push32((uint32_t)(EDX));
  /* 100a612a push 5 */
  push32((uint32_t)(0x5u));
  /* 100a612c call 0x100a2f70 */
  push32(0x100a6131u); f_100a2f70();
  /* 100a6131 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6134:;
  /* 100a6134 push 0x100b6120 */
  push32((uint32_t)(0x100b6120u));
  /* 100a6139 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a613fu);
  /* 100a613f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6142 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a6144 je 0x100a6259 */
  if (C.zf) goto L_100a6259;
  /* 100a614a push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a614f call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a6155u);
  /* 100a6155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6158 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a615a jne 0x100a6259 */
  if (!C.zf) goto L_100a6259;
  /* 100a6160 mov eax, dword ptr [0x100b648c] */
  EAX = (r32((uint32_t)(0x100b648c)));
  /* 100a6165 mov cl, byte ptr [0x100b6284] */
  CL = (r8((uint32_t)(0x100b6284)));
  /* 100a616b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a616d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100a6171 je 0x100a6186 */
  if (C.zf) goto L_100a6186;
  /* 100a6173 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100a6177 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a6179 push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a617e push edx */
  push32((uint32_t)(EDX));
  /* 100a617f call eax */
  call_ind((uint32_t)(EAX), 0x100a6181u);
  /* 100a6181 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6184 jmp 0x100a6188 */
  goto L_100a6188;
L_100a6186:;
  /* 100a6186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100a6188:;
  /* 100a6188 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100a618b push 2 */
  push32((uint32_t)(0x2u));
  /* 100a618d lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100a6190 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100a6195 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100a6197 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100a619a mov eax, edx */
  EAX = (EDX);
  /* 100a619c shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100a619f add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a61a1 push edx */
  push32((uint32_t)(EDX));
  /* 100a61a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a61a4 call 0x100a2f70 */
  push32(0x100a61a9u); f_100a2f70();
  /* 100a61a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a61ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a61ae je 0x100a6259 */
  if (C.zf) goto L_100a6259;
  /* 100a61b4 mov eax, dword ptr [0x100b648c] */
  EAX = (r32((uint32_t)(0x100b648c)));
  /* 100a61b9 mov cl, byte ptr [0x100b6284] */
  CL = (r8((uint32_t)(0x100b6284)));
  /* 100a61bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a61c1 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100a61c5 je 0x100a61da */
  if (C.zf) goto L_100a61da;
  /* 100a61c7 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100a61cb push 1 */
  push32((uint32_t)(0x1u));
  /* 100a61cd push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a61d2 push edx */
  push32((uint32_t)(EDX));
  /* 100a61d3 call eax */
  call_ind((uint32_t)(EAX), 0x100a61d5u);
  /* 100a61d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a61d8 jmp 0x100a61dc */
  goto L_100a61dc;
L_100a61da:;
  /* 100a61da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100a61dc:;
  /* 100a61dc lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 100a61e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a61e5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a61e7 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 100a61ea lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100a61ed mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 100a61f2 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100a61f4 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 100a61f7 mov eax, edx */
  EAX = (EDX);
  /* 100a61f9 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100a61fc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a61fe push edx */
  push32((uint32_t)(EDX));
  /* 100a61ff push 1 */
  push32((uint32_t)(0x1u));
  /* 100a6201 call 0x100a2f70 */
  push32(0x100a6206u); f_100a2f70();
  /* 100a6206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6209 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a620b je 0x100a6259 */
  if (C.zf) goto L_100a6259;
  /* 100a620d mov eax, dword ptr [0x100b648c] */
  EAX = (r32((uint32_t)(0x100b648c)));
  /* 100a6212 mov cl, byte ptr [0x100b6284] */
  CL = (r8((uint32_t)(0x100b6284)));
  /* 100a6218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a621a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100a621e je 0x100a6233 */
  if (C.zf) goto L_100a6233;
  /* 100a6220 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100a6224 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a6226 push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a622b push edx */
  push32((uint32_t)(EDX));
  /* 100a622c call eax */
  call_ind((uint32_t)(EAX), 0x100a622eu);
  /* 100a622e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6231 jmp 0x100a6235 */
  goto L_100a6235;
L_100a6233:;
  /* 100a6233 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100a6235:;
  /* 100a6235 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100a6238 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a623a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100a623d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100a6242 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100a6244 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100a6247 mov eax, edx */
  EAX = (EDX);
  /* 100a6249 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100a624c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a624e push edx */
  push32((uint32_t)(EDX));
  /* 100a624f push 4 */
  push32((uint32_t)(0x4u));
  /* 100a6251 call 0x100a2f70 */
  push32(0x100a6256u); f_100a2f70();
  /* 100a6256 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6259:;
  /* 100a6259 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a625b call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a6261u);
  /* 100a6261 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6264 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6269 jle 0x100a628e */
  if ((C.zf||C.sf!=C.of)) goto L_100a628e;
  /* 100a626b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100a6270 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a6272 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a6274 call 0x100a25f0 */
  push32(0x100a6279u); f_100a25f0();
  /* 100a6279 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a627b call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a6281u);
  /* 100a6281 push eax */
  push32((uint32_t)(EAX));
  /* 100a6282 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a6284 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a6286 call 0x100a25f0 */
  push32(0x100a628bu); f_100a25f0();
  /* 100a628b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a628e:;
  /* 100a628e push 0 */
  push32((uint32_t)(0x0u));
  /* 100a6290 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a6296u);
  /* 100a6296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6299 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a629e jle 0x100a62c3 */
  if ((C.zf||C.sf!=C.of)) goto L_100a62c3;
  /* 100a62a0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100a62a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a62a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a62a9 call 0x100a25f0 */
  push32(0x100a62aeu); f_100a25f0();
  /* 100a62ae push 0 */
  push32((uint32_t)(0x0u));
  /* 100a62b0 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a62b6u);
  /* 100a62b6 push eax */
  push32((uint32_t)(EAX));
  /* 100a62b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a62b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a62bb call 0x100a25f0 */
  push32(0x100a62c0u); f_100a25f0();
  /* 100a62c0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a62c3:;
  /* 100a62c3 pop ecx */
  ECX = (pop32());
  /* 100a62c4 ret  */
  ESPCHK(0x100a5fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062d0 @ 0x100a62d0 (818 bytes, 268 insns) */
void f_100a62d0(void) {
  FTRACE(0x100a62d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a62d0 push ecx */
  push32((uint32_t)(ECX));
  /* 100a62d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a62d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a62d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a62d7 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a62ddu);
  /* 100a62dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a62e0 call dword ptr [0x100b6540] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6540))), 0x100a62e6u);
  /* 100a62e6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a62e8 je 0x100a6600 */
  if (C.zf) goto L_100a6600;
  /* 100a62ee push 4 */
  push32((uint32_t)(0x4u));
  /* 100a62f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a62f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a62f4 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a62fau);
  /* 100a62fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a62fd call 0x100a2650 */
  push32(0x100a6302u); f_100a2650();
  /* 100a6302 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6305 je 0x100a6600 */
  if (C.zf) goto L_100a6600;
  /* 100a630b call dword ptr [0x100b6540] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6540))), 0x100a6311u);
  /* 100a6311 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a6313 je 0x100a65f1 */
  if (C.zf) goto L_100a65f1;
  /* 100a6319 push esi */
  push32((uint32_t)(ESI));
  /* 100a631a push edi */
  push32((uint32_t)(EDI));
  /* 100a631b push 4 */
  push32((uint32_t)(0x4u));
  /* 100a631d push 4 */
  push32((uint32_t)(0x4u));
  /* 100a631f push 9 */
  push32((uint32_t)(0x9u));
  /* 100a6321 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a6327u);
  /* 100a6327 push 0x100b60d0 */
  push32((uint32_t)(0x100b60d0u));
  /* 100a632c call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a6332u);
  /* 100a6332 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6335 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a6337 jne 0x100a639f */
  if (!C.zf) goto L_100a639f;
  /* 100a6339 mov al, byte ptr [0x100b6284] */
  AL = (r8((uint32_t)(0x100b6284)));
  /* 100a633e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 100a6342 mov eax, dword ptr [0x100b648c] */
  EAX = (r32((uint32_t)(0x100b648c)));
  /* 100a6347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a6349 je 0x100a6360 */
  if (C.zf) goto L_100a6360;
  /* 100a634b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a634f push 3 */
  push32((uint32_t)(0x3u));
  /* 100a6351 push 0x100b60d0 */
  push32((uint32_t)(0x100b60d0u));
  /* 100a6356 push ecx */
  push32((uint32_t)(ECX));
  /* 100a6357 call eax */
  call_ind((uint32_t)(EAX), 0x100a6359u);
  /* 100a6359 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a635c mov esi, eax */
  ESI = (EAX);
  /* 100a635e jmp 0x100a6362 */
  goto L_100a6362;
L_100a6360:;
  /* 100a6360 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100a6362:;
  /* 100a6362 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a6364 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a636au);
  /* 100a636a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 100a636d mov edi, eax */
  EDI = (EAX);
  /* 100a636f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100a6374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6377 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 100a637a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100a637c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100a637f mov eax, edx */
  EAX = (EDX);
  /* 100a6381 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100a6384 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6386 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6388 jge 0x100a6390 */
  if ((C.sf==C.of)) goto L_100a6390;
  /* 100a638a push 4 */
  push32((uint32_t)(0x4u));
  /* 100a638c push 4 */
  push32((uint32_t)(0x4u));
  /* 100a638e jmp 0x100a6394 */
  goto L_100a6394;
L_100a6390:;
  /* 100a6390 push 6 */
  push32((uint32_t)(0x6u));
  /* 100a6392 push 6 */
  push32((uint32_t)(0x6u));
L_100a6394:;
  /* 100a6394 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a6396 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a639cu);
  /* 100a639c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a639f:;
  /* 100a639f push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a63a4 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a63aau);
  /* 100a63aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a63ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a63af jne 0x100a6418 */
  if (!C.zf) goto L_100a6418;
  /* 100a63b1 mov eax, dword ptr [0x100b648c] */
  EAX = (r32((uint32_t)(0x100b648c)));
  /* 100a63b6 mov cl, byte ptr [0x100b6284] */
  CL = (r8((uint32_t)(0x100b6284)));
  /* 100a63bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a63be mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 100a63c2 je 0x100a63d9 */
  if (C.zf) goto L_100a63d9;
  /* 100a63c4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a63c8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a63ca push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a63cf push edx */
  push32((uint32_t)(EDX));
  /* 100a63d0 call eax */
  call_ind((uint32_t)(EAX), 0x100a63d2u);
  /* 100a63d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a63d5 mov esi, eax */
  ESI = (EAX);
  /* 100a63d7 jmp 0x100a63db */
  goto L_100a63db;
L_100a63d9:;
  /* 100a63d9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100a63db:;
  /* 100a63db push 3 */
  push32((uint32_t)(0x3u));
  /* 100a63dd call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a63e3u);
  /* 100a63e3 mov edi, eax */
  EDI = (EAX);
  /* 100a63e5 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 100a63e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a63eb lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 100a63ee mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100a63f3 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100a63f5 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100a63f8 mov ecx, edx */
  ECX = (EDX);
  /* 100a63fa shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 100a63fd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a63ff cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6401 jge 0x100a6409 */
  if ((C.sf==C.of)) goto L_100a6409;
  /* 100a6403 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a6405 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a6407 jmp 0x100a640d */
  goto L_100a640d;
L_100a6409:;
  /* 100a6409 push 6 */
  push32((uint32_t)(0x6u));
  /* 100a640b push 6 */
  push32((uint32_t)(0x6u));
L_100a640d:;
  /* 100a640d push 9 */
  push32((uint32_t)(0x9u));
  /* 100a640f call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a6415u);
  /* 100a6415 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6418:;
  /* 100a6418 push 0x100b6120 */
  push32((uint32_t)(0x100b6120u));
  /* 100a641d call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a6423u);
  /* 100a6423 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6426 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a6428 jne 0x100a648f */
  if (!C.zf) goto L_100a648f;
  /* 100a642a mov eax, dword ptr [0x100b648c] */
  EAX = (r32((uint32_t)(0x100b648c)));
  /* 100a642f mov dl, byte ptr [0x100b6284] */
  DL = (r8((uint32_t)(0x100b6284)));
  /* 100a6435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a6437 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 100a643b je 0x100a6452 */
  if (C.zf) goto L_100a6452;
  /* 100a643d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a6441 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a6443 push 0x100b6120 */
  push32((uint32_t)(0x100b6120u));
  /* 100a6448 push ecx */
  push32((uint32_t)(ECX));
  /* 100a6449 call eax */
  call_ind((uint32_t)(EAX), 0x100a644bu);
  /* 100a644b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a644e mov esi, eax */
  ESI = (EAX);
  /* 100a6450 jmp 0x100a6454 */
  goto L_100a6454;
L_100a6452:;
  /* 100a6452 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100a6454:;
  /* 100a6454 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a6456 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a645cu);
  /* 100a645c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 100a645f mov edi, eax */
  EDI = (EAX);
  /* 100a6461 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100a6466 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6469 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 100a646c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100a646e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100a6471 mov eax, edx */
  EAX = (EDX);
  /* 100a6473 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a6475 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100a6478 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a647a push 9 */
  push32((uint32_t)(0x9u));
  /* 100a647c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a647e jge 0x100a6484 */
  if ((C.sf==C.of)) goto L_100a6484;
  /* 100a6480 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a6482 jmp 0x100a6486 */
  goto L_100a6486;
L_100a6484:;
  /* 100a6484 push 6 */
  push32((uint32_t)(0x6u));
L_100a6486:;
  /* 100a6486 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a648cu);
  /* 100a648c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a648f:;
  /* 100a648f push 0x100b6310 */
  push32((uint32_t)(0x100b6310u));
  /* 100a6494 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a649au);
  /* 100a649a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a649d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a649f je 0x100a64b3 */
  if (C.zf) goto L_100a64b3;
  /* 100a64a1 push 0x100b6258 */
  push32((uint32_t)(0x100b6258u));
  /* 100a64a6 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a64acu);
  /* 100a64ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a64af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a64b1 jne 0x100a64d4 */
  if (!C.zf) goto L_100a64d4;
L_100a64b3:;
  /* 100a64b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a64b5 call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a64bbu);
  /* 100a64bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a64be cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a64c3 jge 0x100a64d4 */
  if ((C.sf==C.of)) goto L_100a64d4;
  /* 100a64c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a64c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a64c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a64cb call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a64d1u);
  /* 100a64d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a64d4:;
  /* 100a64d4 push 0x100b5fb8 */
  push32((uint32_t)(0x100b5fb8u));
  /* 100a64d9 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a64dfu);
  /* 100a64df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a64e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a64e4 jne 0x100a6557 */
  if (!C.zf) goto L_100a6557;
  /* 100a64e6 call 0x100a2760 */
  push32(0x100a64ebu); f_100a2760();
  /* 100a64eb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a64ee jge 0x100a6557 */
  if ((C.sf==C.of)) goto L_100a6557;
  /* 100a64f0 mov eax, dword ptr [0x100b6488] */
  EAX = (r32((uint32_t)(0x100b6488)));
  /* 100a64f5 mov cl, byte ptr [0x100b6284] */
  CL = (r8((uint32_t)(0x100b6284)));
  /* 100a64fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a64fd mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 100a6501 je 0x100a6518 */
  if (C.zf) goto L_100a6518;
  /* 100a6503 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a6507 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a6509 push 0x100b5fb8 */
  push32((uint32_t)(0x100b5fb8u));
  /* 100a650e push edx */
  push32((uint32_t)(EDX));
  /* 100a650f call eax */
  call_ind((uint32_t)(EAX), 0x100a6511u);
  /* 100a6511 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6514 mov esi, eax */
  ESI = (EAX);
  /* 100a6516 jmp 0x100a651a */
  goto L_100a651a;
L_100a6518:;
  /* 100a6518 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100a651a:;
  /* 100a651a push 2 */
  push32((uint32_t)(0x2u));
  /* 100a651c call dword ptr [0x100b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b650c))), 0x100a6522u);
  /* 100a6522 mov edi, eax */
  EDI = (EAX);
  /* 100a6524 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 100a6527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a652a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 100a652d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100a6532 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100a6534 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100a6537 mov ecx, edx */
  ECX = (EDX);
  /* 100a6539 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 100a653c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a653e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6540 jge 0x100a6548 */
  if ((C.sf==C.of)) goto L_100a6548;
  /* 100a6542 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a6544 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a6546 jmp 0x100a654c */
  goto L_100a654c;
L_100a6548:;
  /* 100a6548 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a654a push 7 */
  push32((uint32_t)(0x7u));
L_100a654c:;
  /* 100a654c push 9 */
  push32((uint32_t)(0x9u));
  /* 100a654e call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a6554u);
  /* 100a6554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6557:;
  /* 100a6557 push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a655c call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a6562u);
  /* 100a6562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6565 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a6567 pop edi */
  EDI = (pop32());
  /* 100a6568 pop esi */
  ESI = (pop32());
  /* 100a6569 jne 0x100a657a */
  if (!C.zf) goto L_100a657a;
  /* 100a656b push 1 */
  push32((uint32_t)(0x1u));
  /* 100a656d push 1 */
  push32((uint32_t)(0x1u));
  /* 100a656f push 9 */
  push32((uint32_t)(0x9u));
  /* 100a6571 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a6577u);
  /* 100a6577 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a657a:;
  /* 100a657a push 0x100b6048 */
  push32((uint32_t)(0x100b6048u));
  /* 100a657f call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a6585u);
  /* 100a6585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6588 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a658a je 0x100a659e */
  if (C.zf) goto L_100a659e;
  /* 100a658c push 0x100b3630 */
  push32((uint32_t)(0x100b3630u));
  /* 100a6591 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a6597u);
  /* 100a6597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a659a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a659c jne 0x100a65ad */
  if (!C.zf) goto L_100a65ad;
L_100a659e:;
  /* 100a659e push 1 */
  push32((uint32_t)(0x1u));
  /* 100a65a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a65a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a65a4 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a65aau);
  /* 100a65aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a65ad:;
  /* 100a65ad push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a65b2 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a65b8u);
  /* 100a65b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a65bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a65bd jne 0x100a65ce */
  if (!C.zf) goto L_100a65ce;
  /* 100a65bf push 4 */
  push32((uint32_t)(0x4u));
  /* 100a65c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a65c3 push 6 */
  push32((uint32_t)(0x6u));
  /* 100a65c5 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a65cbu);
  /* 100a65cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a65ce:;
  /* 100a65ce push 0x100b6348 */
  push32((uint32_t)(0x100b6348u));
  /* 100a65d3 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a65d9u);
  /* 100a65d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a65dc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a65de jne 0x100a6600 */
  if (!C.zf) goto L_100a6600;
  /* 100a65e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a65e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a65e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 100a65e6 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a65ecu);
  /* 100a65ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a65ef pop ecx */
  ECX = (pop32());
  /* 100a65f0 ret  */
  ESPCHK(0x100a62d0u, _esp0);
  ESP += 4; return;
L_100a65f1:;
  /* 100a65f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a65f3 push 6 */
  push32((uint32_t)(0x6u));
  /* 100a65f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a65f7 call dword ptr [0x100b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64e4))), 0x100a65fdu);
  /* 100a65fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6600:;
  /* 100a6600 pop ecx */
  ECX = (pop32());
  /* 100a6601 ret  */
  ESPCHK(0x100a62d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006610 @ 0x100a6610 (174 bytes, 50 insns) */
void f_100a6610(void) {
  FTRACE(0x100a6610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6610 push 0x100b6568 */
  push32((uint32_t)(0x100b6568u));
  /* 100a6615 call 0x100a2700 */
  push32(0x100a661au); f_100a2700();
  /* 100a661a push 0x100b6310 */
  push32((uint32_t)(0x100b6310u));
  /* 100a661f call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a6625u);
  /* 100a6625 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6628 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a662a je 0x100a664c */
  if (C.zf) goto L_100a664c;
  /* 100a662c push 0x100b6258 */
  push32((uint32_t)(0x100b6258u));
  /* 100a6631 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a6637u);
  /* 100a6637 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a663a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a663c je 0x100a664c */
  if (C.zf) goto L_100a664c;
  /* 100a663e push 0x100af16c */
  push32((uint32_t)(0x100af16cu));
  /* 100a6643 call 0x100a2700 */
  push32(0x100a6648u); f_100a2700();
  /* 100a6648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a664b ret  */
  ESPCHK(0x100a6610u, _esp0);
  ESP += 4; return;
L_100a664c:;
  /* 100a664c mov eax, dword ptr [0x100b5f28] */
  EAX = (r32((uint32_t)(0x100b5f28)));
  /* 100a6651 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6654 je 0x100a66b2 */
  if (C.zf) goto L_100a66b2;
  /* 100a6656 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6659 je 0x100a66b2 */
  if (C.zf) goto L_100a66b2;
  /* 100a665b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a665e je 0x100a66b2 */
  if (C.zf) goto L_100a66b2;
  /* 100a6660 push 0x100b6240 */
  push32((uint32_t)(0x100b6240u));
  /* 100a6665 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a666bu);
  /* 100a666b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a666e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a6670 je 0x100a6692 */
  if (C.zf) goto L_100a6692;
  /* 100a6672 push 0x100b6120 */
  push32((uint32_t)(0x100b6120u));
  /* 100a6677 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a667du);
  /* 100a667d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6680 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a6682 jne 0x100a6692 */
  if (!C.zf) goto L_100a6692;
  /* 100a6684 push 0x100b6568 */
  push32((uint32_t)(0x100b6568u));
  /* 100a6689 call 0x100a2700 */
  push32(0x100a668eu); f_100a2700();
  /* 100a668e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6691 ret  */
  ESPCHK(0x100a6610u, _esp0);
  ESP += 4; return;
L_100a6692:;
  /* 100a6692 push 0x100b6120 */
  push32((uint32_t)(0x100b6120u));
  /* 100a6697 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a669du);
  /* 100a669d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a66a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a66a2 je 0x100a66bd */
  if (C.zf) goto L_100a66bd;
  /* 100a66a4 push 0x100af1d8 */
  push32((uint32_t)(0x100af1d8u));
  /* 100a66a9 call 0x100a2700 */
  push32(0x100a66aeu); f_100a2700();
  /* 100a66ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a66b1 ret  */
  ESPCHK(0x100a6610u, _esp0);
  ESP += 4; return;
L_100a66b2:;
  /* 100a66b2 push 0x100af1d8 */
  push32((uint32_t)(0x100af1d8u));
  /* 100a66b7 call 0x100a2700 */
  push32(0x100a66bcu); f_100a2700();
  /* 100a66bc pop ecx */
  ECX = (pop32());
L_100a66bd:;
  /* 100a66bd ret  */
  ESPCHK(0x100a6610u, _esp0);
  ESP += 4; return;
}

/* FUN_100066c0 @ 0x100a66c0 (70 bytes, 22 insns) */
void f_100a66c0(void) {
  FTRACE(0x100a66c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a66c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a66c2 call 0x100a2740 */
  push32(0x100a66c7u); f_100a2740();
  /* 100a66c7 push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a66cc call 0x100a5250 */
  push32(0x100a66d1u); f_100a5250();
  /* 100a66d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a66d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a66d6 je 0x100a66e2 */
  if (C.zf) goto L_100a66e2;
  /* 100a66d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a66da call 0x100a2740 */
  push32(0x100a66dfu); f_100a2740();
  /* 100a66df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a66e2:;
  /* 100a66e2 call 0x100a2750 */
  push32(0x100a66e7u); f_100a2750();
  /* 100a66e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a66e9 jg 0x100a66fd */
  if ((!C.zf&&C.sf==C.of)) goto L_100a66fd;
  /* 100a66eb push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a66f0 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a66f6u);
  /* 100a66f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a66f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a66fb jle 0x100a6705 */
  if ((C.zf||C.sf!=C.of)) goto L_100a6705;
L_100a66fd:;
  /* 100a66fd push 0 */
  push32((uint32_t)(0x0u));
  /* 100a66ff call 0x100a2740 */
  push32(0x100a6704u); f_100a2740();
  /* 100a6704 pop ecx */
  ECX = (pop32());
L_100a6705:;
  /* 100a6705 ret  */
  ESPCHK(0x100a66c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006710 @ 0x100a6710 (235 bytes, 66 insns) */
void f_100a6710(void) {
  FTRACE(0x100a6710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6710 push 0x100b6168 */
  push32((uint32_t)(0x100b6168u));
  /* 100a6715 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a671bu);
  /* 100a671b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a671e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a6720 je 0x100a6736 */
  if (C.zf) goto L_100a6736;
  /* 100a6722 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a6724 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a6726 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a6728 push 0x100b6340 */
  push32((uint32_t)(0x100b6340u));
  /* 100a672d call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6733u);
  /* 100a6733 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6736:;
  /* 100a6736 push 0x100b6080 */
  push32((uint32_t)(0x100b6080u));
  /* 100a673b call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a6741u);
  /* 100a6741 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6744 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a6746 je 0x100a675c */
  if (C.zf) goto L_100a675c;
  /* 100a6748 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a674a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a674c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a674e push 0x100b3638 */
  push32((uint32_t)(0x100b3638u));
  /* 100a6753 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6759u);
  /* 100a6759 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a675c:;
  /* 100a675c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a675e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100a6760 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a6762 push 0x100b3898 */
  push32((uint32_t)(0x100b3898u));
  /* 100a6767 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a676du);
  /* 100a676d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a676f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a6771 push 0x100b61a8 */
  push32((uint32_t)(0x100b61a8u));
  /* 100a6776 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a677cu);
  /* 100a677c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a677e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a6780 push 0x100b61a0 */
  push32((uint32_t)(0x100b61a0u));
  /* 100a6785 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a678bu);
  /* 100a678b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a678d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a678f push 0x100b6170 */
  push32((uint32_t)(0x100b6170u));
  /* 100a6794 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a679au);
  /* 100a679a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a679c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a679e push 0x100b6168 */
  push32((uint32_t)(0x100b6168u));
  /* 100a67a3 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a67a9u);
  /* 100a67a9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a67ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a67ae push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a67b0 push 0x100b6178 */
  push32((uint32_t)(0x100b6178u));
  /* 100a67b5 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a67bbu);
  /* 100a67bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a67bd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a67bf push 0x100b6068 */
  push32((uint32_t)(0x100b6068u));
  /* 100a67c4 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a67cau);
  /* 100a67ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a67cc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a67ce push 0x100b6070 */
  push32((uint32_t)(0x100b6070u));
  /* 100a67d3 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a67d9u);
  /* 100a67d9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a67db push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a67dd push 0x100b6078 */
  push32((uint32_t)(0x100b6078u));
  /* 100a67e2 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a67e8u);
  /* 100a67e8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a67ea push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a67ec push 0x100b6080 */
  push32((uint32_t)(0x100b6080u));
  /* 100a67f1 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a67f7u);
  /* 100a67f7 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a67fa ret  */
  ESPCHK(0x100a6710u, _esp0);
  ESP += 4; return;
}

/* FUN_10006800 @ 0x100a6800 (303 bytes, 90 insns) */
void f_100a6800(void) {
  FTRACE(0x100a6800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6800 push ecx */
  push32((uint32_t)(ECX));
  /* 100a6801 push ebx */
  push32((uint32_t)(EBX));
  /* 100a6802 push ebp */
  push32((uint32_t)(EBP));
  /* 100a6803 push esi */
  push32((uint32_t)(ESI));
  /* 100a6804 push edi */
  push32((uint32_t)(EDI));
  /* 100a6805 push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a680a call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a6810u);
  /* 100a6810 push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a6815 mov ebx, eax */
  EBX = (EAX);
  /* 100a6817 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a681du);
  /* 100a681d push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a6822 mov edi, eax */
  EDI = (EAX);
  /* 100a6824 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a682au);
  /* 100a682a push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a682f mov ebp, eax */
  EBP = (EAX);
  /* 100a6831 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a6837u);
  /* 100a6837 push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a683c mov esi, eax */
  ESI = (EAX);
  /* 100a683e call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a6844u);
  /* 100a6844 push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a6849 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100a684d call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a6853u);
  /* 100a6853 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 100a6857 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a685a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a685c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a685e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a6860 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a6862 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6864 pop edi */
  EDI = (pop32());
  /* 100a6865 pop esi */
  ESI = (pop32());
  /* 100a6866 pop ebp */
  EBP = (pop32());
  /* 100a6867 pop ebx */
  EBX = (pop32());
  /* 100a6868 jne 0x100a68d0 */
  if (!C.zf) goto L_100a68d0;
  /* 100a686a cmp dword ptr [0x100b6180], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x100b6180))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6871 jle 0x100a68d0 */
  if ((C.zf||C.sf!=C.of)) goto L_100a68d0;
  /* 100a6873 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6875 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a6877 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a6879 push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a687e call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6884u);
  /* 100a6884 push 0x100b6188 */
  push32((uint32_t)(0x100b6188u));
  /* 100a6889 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a688fu);
  /* 100a688f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6892 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a6894 je 0x100a68aa */
  if (C.zf) goto L_100a68aa;
  /* 100a6896 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6898 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a689a push 6 */
  push32((uint32_t)(0x6u));
  /* 100a689c push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a68a1 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a68a7u);
  /* 100a68a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a68aa:;
  /* 100a68aa push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a68af call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a68b5u);
  /* 100a68b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a68b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a68ba je 0x100a68d0 */
  if (C.zf) goto L_100a68d0;
  /* 100a68bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a68be push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a68c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 100a68c2 push 0x100b38a8 */
  push32((uint32_t)(0x100b38a8u));
  /* 100a68c7 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a68cdu);
  /* 100a68cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a68d0:;
  /* 100a68d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a68d2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100a68d4 push 0x100b62b8 */
  push32((uint32_t)(0x100b62b8u));
  /* 100a68d9 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a68dfu);
  /* 100a68df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a68e1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100a68e3 push 0x100b62a0 */
  push32((uint32_t)(0x100b62a0u));
  /* 100a68e8 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a68eeu);
  /* 100a68ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a68f0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100a68f2 push 0x100b62b0 */
  push32((uint32_t)(0x100b62b0u));
  /* 100a68f7 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a68fdu);
  /* 100a68fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a68ff push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a6901 push 0x100b6290 */
  push32((uint32_t)(0x100b6290u));
  /* 100a6906 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a690cu);
  /* 100a690c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a690e push 0xf */
  push32((uint32_t)(0xfu));
  /* 100a6910 push 0x100b6298 */
  push32((uint32_t)(0x100b6298u));
  /* 100a6915 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a691bu);
  /* 100a691b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a691d push 0xa */
  push32((uint32_t)(0xau));
  /* 100a691f push 0x100b6288 */
  push32((uint32_t)(0x100b6288u));
  /* 100a6924 call dword ptr [0x100b64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d8))), 0x100a692au);
  /* 100a692a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a692d pop ecx */
  ECX = (pop32());
  /* 100a692e ret  */
  ESPCHK(0x100a6800u, _esp0);
  ESP += 4; return;
}

/* FUN_10006930 @ 0x100a6930 (517 bytes, 145 insns) */
void f_100a6930(void) {
  FTRACE(0x100a6930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6930 push esi */
  push32((uint32_t)(ESI));
  /* 100a6931 push 0x100b6228 */
  push32((uint32_t)(0x100b6228u));
  /* 100a6936 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a693cu);
  /* 100a693c push 0x100b6228 */
  push32((uint32_t)(0x100b6228u));
  /* 100a6941 mov esi, eax */
  ESI = (EAX);
  /* 100a6943 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a6949u);
  /* 100a6949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a694c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a694e jne 0x100a6964 */
  if (!C.zf) goto L_100a6964;
  /* 100a6950 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6952 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6954 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a6956 push 0x100b6228 */
  push32((uint32_t)(0x100b6228u));
  /* 100a695b call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6961u);
  /* 100a6961 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6964:;
  /* 100a6964 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6966 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6968 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a696a push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a696f call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6975u);
  /* 100a6975 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6977 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6979 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a697b push 0x100b61b8 */
  push32((uint32_t)(0x100b61b8u));
  /* 100a6980 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6986u);
  /* 100a6986 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6988 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a698a push 2 */
  push32((uint32_t)(0x2u));
  /* 100a698c push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a6991 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6997u);
  /* 100a6997 push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a699c call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a69a2u);
  /* 100a69a2 push 0x100b6220 */
  push32((uint32_t)(0x100b6220u));
  /* 100a69a7 mov esi, eax */
  ESI = (EAX);
  /* 100a69a9 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a69afu);
  /* 100a69af add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a69b2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a69b4 jne 0x100a6b33 */
  if (!C.zf) goto L_100a6b33;
  /* 100a69ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a69bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a69be push 1 */
  push32((uint32_t)(0x1u));
  /* 100a69c0 push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a69c5 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a69cbu);
  /* 100a69cb push 0x100b5ef0 */
  push32((uint32_t)(0x100b5ef0u));
  /* 100a69d0 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a69d6u);
  /* 100a69d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a69d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a69db je 0x100a6b33 */
  if (C.zf) goto L_100a6b33;
  /* 100a69e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a69e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a69e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a69e7 push 0x100b5fa0 */
  push32((uint32_t)(0x100b5fa0u));
  /* 100a69ec call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a69f2u);
  /* 100a69f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a69f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a69f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a69f8 push 0x100b5fa8 */
  push32((uint32_t)(0x100b5fa8u));
  /* 100a69fd call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6a03u);
  /* 100a6a03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6a05 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6a07 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a6a09 push 0x100b3848 */
  push32((uint32_t)(0x100b3848u));
  /* 100a6a0e call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6a14u);
  /* 100a6a14 push 0x100b3848 */
  push32((uint32_t)(0x100b3848u));
  /* 100a6a19 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a6a1fu);
  /* 100a6a1f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a6a24 je 0x100a6b33 */
  if (C.zf) goto L_100a6b33;
  /* 100a6a2a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6a2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6a2e push 1 */
  push32((uint32_t)(0x1u));
  /* 100a6a30 push 0x100b5fb8 */
  push32((uint32_t)(0x100b5fb8u));
  /* 100a6a35 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6a3bu);
  /* 100a6a3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6a3d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6a3f push 1 */
  push32((uint32_t)(0x1u));
  /* 100a6a41 push 0x100b60c8 */
  push32((uint32_t)(0x100b60c8u));
  /* 100a6a46 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6a4cu);
  /* 100a6a4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6a4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6a50 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a6a52 push 0x100b35e8 */
  push32((uint32_t)(0x100b35e8u));
  /* 100a6a57 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6a5du);
  /* 100a6a5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6a5f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6a61 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a6a63 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a6a68 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6a6eu);
  /* 100a6a6e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6a71 push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a6a76 call dword ptr [0x100b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6520))), 0x100a6a7cu);
  /* 100a6a7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6a7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a6a81 je 0x100a6b33 */
  if (C.zf) goto L_100a6b33;
  /* 100a6a87 push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a6a8c call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a6a92u);
  /* 100a6a92 push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a6a97 mov esi, eax */
  ESI = (EAX);
  /* 100a6a99 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a6a9fu);
  /* 100a6a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6aa2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a6aa4 jne 0x100a6acd */
  if (!C.zf) goto L_100a6acd;
  /* 100a6aa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a6aa8 call 0x100a2710 */
  push32(0x100a6aadu); f_100a2710();
  /* 100a6aad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6ab0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6ab3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6ab5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6ab7 jge 0x100a6abd */
  if ((C.sf==C.of)) goto L_100a6abd;
  /* 100a6ab9 push 6 */
  push32((uint32_t)(0x6u));
  /* 100a6abb jmp 0x100a6abf */
  goto L_100a6abf;
L_100a6abd:;
  /* 100a6abd push 4 */
  push32((uint32_t)(0x4u));
L_100a6abf:;
  /* 100a6abf push 0x100b5f88 */
  push32((uint32_t)(0x100b5f88u));
  /* 100a6ac4 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6acau);
  /* 100a6aca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6acd:;
  /* 100a6acd push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a6ad2 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a6ad8u);
  /* 100a6ad8 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a6add mov esi, eax */
  ESI = (EAX);
  /* 100a6adf call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a6ae5u);
  /* 100a6ae5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6ae8 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a6aea jne 0x100a6b00 */
  if (!C.zf) goto L_100a6b00;
  /* 100a6aec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6aee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6af0 push 7 */
  push32((uint32_t)(0x7u));
  /* 100a6af2 push 0x100b60a8 */
  push32((uint32_t)(0x100b60a8u));
  /* 100a6af7 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6afdu);
  /* 100a6afd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6b00:;
  /* 100a6b00 push 0x100b35e8 */
  push32((uint32_t)(0x100b35e8u));
  /* 100a6b05 call dword ptr [0x100b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6514))), 0x100a6b0bu);
  /* 100a6b0b push 0x100b35e8 */
  push32((uint32_t)(0x100b35e8u));
  /* 100a6b10 mov esi, eax */
  ESI = (EAX);
  /* 100a6b12 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a6b18u);
  /* 100a6b18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6b1b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a6b1d jne 0x100a6b33 */
  if (!C.zf) goto L_100a6b33;
  /* 100a6b1f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6b21 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6b23 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a6b25 push 0x100b35e8 */
  push32((uint32_t)(0x100b35e8u));
  /* 100a6b2a call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6b30u);
  /* 100a6b30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6b33:;
  /* 100a6b33 pop esi */
  ESI = (pop32());
  /* 100a6b34 ret  */
  ESPCHK(0x100a6930u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b40 @ 0x100a6b40 (121 bytes, 36 insns) */
void f_100a6b40(void) {
  FTRACE(0x100a6b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6b40 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a6b42 call 0x100a2740 */
  push32(0x100a6b47u); f_100a2740();
  /* 100a6b47 push 0x100b3858 */
  push32((uint32_t)(0x100b3858u));
  /* 100a6b4c call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a6b52u);
  /* 100a6b52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6b55 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6b58 jge 0x100a6b6d */
  if ((C.sf==C.of)) goto L_100a6b6d;
  /* 100a6b5a mov eax, dword ptr [0x100b6284] */
  EAX = (r32((uint32_t)(0x100b6284)));
  /* 100a6b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 100a6b61 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6b64 push eax */
  push32((uint32_t)(EAX));
  /* 100a6b65 call 0x100a26b0 */
  push32(0x100a6b6au); f_100a26b0();
  /* 100a6b6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6b6d:;
  /* 100a6b6d push 0x100b3858 */
  push32((uint32_t)(0x100b3858u));
  /* 100a6b72 call dword ptr [0x100b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6510))), 0x100a6b78u);
  /* 100a6b78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6b7b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6b7e jle 0x100a6b94 */
  if ((C.zf||C.sf!=C.of)) goto L_100a6b94;
  /* 100a6b80 mov ecx, dword ptr [0x100b6284] */
  ECX = (r32((uint32_t)(0x100b6284)));
  /* 100a6b86 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a6b88 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6b8b push ecx */
  push32((uint32_t)(ECX));
  /* 100a6b8c call 0x100a26b0 */
  push32(0x100a6b91u); f_100a26b0();
  /* 100a6b91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6b94:;
  /* 100a6b94 mov edx, dword ptr [0x100b6284] */
  EDX = (r32((uint32_t)(0x100b6284)));
  /* 100a6b9a add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6b9d push edx */
  push32((uint32_t)(EDX));
  /* 100a6b9e call 0x100a26d0 */
  push32(0x100a6ba3u); f_100a26d0();
  /* 100a6ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a6ba5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100a6ba8 push eax */
  push32((uint32_t)(EAX));
  /* 100a6ba9 call 0x100a2740 */
  push32(0x100a6baeu); f_100a2740();
  /* 100a6bae push 0 */
  push32((uint32_t)(0x0u));
  /* 100a6bb0 call 0x100a2740 */
  push32(0x100a6bb5u); f_100a2740();
  /* 100a6bb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6bb8 ret  */
  ESPCHK(0x100a6b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bc0 @ 0x100a6bc0 (86 bytes, 20 insns) */
void f_100a6bc0(void) {
  FTRACE(0x100a6bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6bc0 mov eax, dword ptr [0x100b6284] */
  EAX = (r32((uint32_t)(0x100b6284)));
  /* 100a6bc5 mov ecx, dword ptr [eax*4 + 0x100b5f68] */
  ECX = (r32((uint32_t)(EAX*4 + 0x100b5f68)));
  /* 100a6bcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100a6bce je 0x100a6bd5 */
  if (C.zf) goto L_100a6bd5;
  /* 100a6bd0 call 0x100a66c0 */
  push32(0x100a6bd5u); f_100a66c0();
L_100a6bd5:;
  /* 100a6bd5 call 0x100a5dd0 */
  push32(0x100a6bdau); f_100a5dd0();
  /* 100a6bda call 0x100a6710 */
  push32(0x100a6bdfu); f_100a6710();
  /* 100a6bdf call 0x100a2760 */
  push32(0x100a6be4u); f_100a2760();
  /* 100a6be4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6be7 jge 0x100a6bee */
  if ((C.sf==C.of)) goto L_100a6bee;
  /* 100a6be9 call 0x100a6800 */
  push32(0x100a6beeu); f_100a6800();
L_100a6bee:;
  /* 100a6bee call 0x100a5bb0 */
  push32(0x100a6bf3u); f_100a5bb0();
  /* 100a6bf3 call 0x100a5a70 */
  push32(0x100a6bf8u); f_100a5a70();
  /* 100a6bf8 call 0x100a2760 */
  push32(0x100a6bfdu); f_100a2760();
  /* 100a6bfd cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6c00 jge 0x100a6c07 */
  if ((C.sf==C.of)) goto L_100a6c07;
  /* 100a6c02 call 0x100a5290 */
  push32(0x100a6c07u); f_100a5290();
L_100a6c07:;
  /* 100a6c07 call 0x100a5fb0 */
  push32(0x100a6c0cu); f_100a5fb0();
  /* 100a6c0c call 0x100a62d0 */
  push32(0x100a6c11u); f_100a62d0();
  /* 100a6c11 jmp 0x100a6610 */
  f_100a6610(); return;
}

/* FUN_10006c20 @ 0x100a6c20 (247 bytes, 70 insns) */
void f_100a6c20(void) {
  FTRACE(0x100a6c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6c20 push esi */
  push32((uint32_t)(ESI));
  /* 100a6c21 push edi */
  push32((uint32_t)(EDI));
  /* 100a6c22 call 0x100a6b40 */
  push32(0x100a6c27u); f_100a6b40();
  /* 100a6c27 call 0x100a6930 */
  push32(0x100a6c2cu); f_100a6930();
  /* 100a6c2c mov edi, 2 */
  EDI = (0x2u);
L_100a6c31:;
  /* 100a6c31 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6c33 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a6c35 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a6c3a push 0x100b6160 */
  push32((uint32_t)(0x100b6160u));
  /* 100a6c3f call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6c45u);
  /* 100a6c45 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6c47 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a6c49 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a6c4e push 0x100b3658 */
  push32((uint32_t)(0x100b3658u));
  /* 100a6c53 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6c59u);
  /* 100a6c59 mov eax, dword ptr [0x100b6284] */
  EAX = (r32((uint32_t)(0x100b6284)));
  /* 100a6c5e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6c61 push eax */
  push32((uint32_t)(EAX));
  /* 100a6c62 call 0x100a26d0 */
  push32(0x100a6c67u); f_100a26d0();
  /* 100a6c67 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a6c6c jne 0x100a6c8c */
  if (!C.zf) goto L_100a6c8c;
  /* 100a6c6e mov esi, 0x64 */
  ESI = (0x64u);
L_100a6c73:;
  /* 100a6c73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6c75 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a6c77 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 100a6c79 push 0x100b3858 */
  push32((uint32_t)(0x100b3858u));
  /* 100a6c7e call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6c84u);
  /* 100a6c84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6c87 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100a6c88 jne 0x100a6c73 */
  if (!C.zf) goto L_100a6c73;
  /* 100a6c8a jmp 0x100a6ca0 */
  goto L_100a6ca0;
L_100a6c8c:;
  /* 100a6c8c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6c8e push 0xa */
  push32((uint32_t)(0xau));
  /* 100a6c90 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100a6c92 push 0x100b6130 */
  push32((uint32_t)(0x100b6130u));
  /* 100a6c97 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6c9du);
  /* 100a6c9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6ca0:;
  /* 100a6ca0 push 0x100b5ff0 */
  push32((uint32_t)(0x100b5ff0u));
  /* 100a6ca5 call dword ptr [0x100b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b651c))), 0x100a6cabu);
  /* 100a6cab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6cae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a6cb0 jne 0x100a6cc9 */
  if (!C.zf) goto L_100a6cc9;
  /* 100a6cb2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6cb4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a6cb6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a6cbb push 0x100b3660 */
  push32((uint32_t)(0x100b3660u));
  /* 100a6cc0 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6cc6u);
  /* 100a6cc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a6cc9:;
  /* 100a6cc9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6ccb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a6ccd push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a6cd2 push 0x100b3650 */
  push32((uint32_t)(0x100b3650u));
  /* 100a6cd7 call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6cddu);
  /* 100a6cdd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a6cdf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100a6ce1 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100a6ce6 push 0x100b5f50 */
  push32((uint32_t)(0x100b5f50u));
  /* 100a6ceb call dword ptr [0x100b64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64d4))), 0x100a6cf1u);
  /* 100a6cf1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6cf4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100a6cf5 jne 0x100a6c31 */
  if (!C.zf) goto L_100a6c31;
  /* 100a6cfb call 0x100a6710 */
  push32(0x100a6d00u); f_100a6710();
  /* 100a6d00 call 0x100a5fb0 */
  push32(0x100a6d05u); f_100a5fb0();
  /* 100a6d05 call 0x100a62d0 */
  push32(0x100a6d0au); f_100a62d0();
  /* 100a6d0a call 0x100a5290 */
  push32(0x100a6d0fu); f_100a5290();
  /* 100a6d0f call 0x100a5a70 */
  push32(0x100a6d14u); f_100a5a70();
  /* 100a6d14 pop edi */
  EDI = (pop32());
  /* 100a6d15 pop esi */
  ESI = (pop32());
  /* 100a6d16 ret  */
  ESPCHK(0x100a6c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d20 @ 0x100a6d20 (279 bytes, 62 insns) [1 switch table(s)] */
void f_100a6d20(void) {
  FTRACE(0x100a6d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6d20 call 0x100a2660 */
  push32(0x100a6d25u); f_100a2660();
  /* 100a6d25 mov dword ptr [0x100b5f28], eax */
  w32((uint32_t)(0x100b5f28), (EAX));
  /* 100a6d2a call 0x100a2640 */
  push32(0x100a6d2fu); f_100a2640();
  /* 100a6d2f mov dword ptr [0x100b6338], eax */
  w32((uint32_t)(0x100b6338), (EAX));
  /* 100a6d34 call 0x100a2650 */
  push32(0x100a6d39u); f_100a2650();
  /* 100a6d39 mov dword ptr [0x100b3868], eax */
  w32((uint32_t)(0x100b3868), (EAX));
  /* 100a6d3e call 0x100a3020 */
  push32(0x100a6d43u); f_100a3020();
  /* 100a6d43 push 0x100af114 */
  push32((uint32_t)(0x100af114u));
  /* 100a6d48 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100a6d4a call dword ptr [0x100b64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64dc))), 0x100a6d50u);
  /* 100a6d50 call 0x100a6610 */
  push32(0x100a6d55u); f_100a6610();
  /* 100a6d55 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100a6d57 push 0x100af244 */
  push32((uint32_t)(0x100af244u));
  /* 100a6d5c call 0x100a26e0 */
  push32(0x100a6d61u); f_100a26e0();
  /* 100a6d61 mov eax, dword ptr [0x100b5f28] */
  EAX = (r32((uint32_t)(0x100b5f28)));
  /* 100a6d66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6d69 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6d6c ja 0x100a6e32 */
  if ((!C.cf&&!C.zf)) goto L_100a6e32;
  /* 100a6d72 jmp dword ptr [eax*4 + 0x100a6e38] */
  switch (EAX) {
    case 0: goto L_100a6d79;
    case 1: goto L_100a6df5;
    case 2: goto L_100a6dfc;
    case 3: goto L_100a6dfc;
    case 4: goto L_100a6dfc;
    case 5: goto L_100a6d79;
    default: x86_unimpl("switch@0x100a6d72 out of table"); return;
  }
L_100a6d79:;
  /* 100a6d79 cmp dword ptr [0x100b3868], 3 */
  { uint32_t _a=(r32((uint32_t)(0x100b3868))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6d80 jne 0x100a6db2 */
  if (!C.zf) goto L_100a6db2;
  /* 100a6d82 push 0x100af160 */
  push32((uint32_t)(0x100af160u));
  /* 100a6d87 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a6d89 call dword ptr [0x100b64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64dc))), 0x100a6d8fu);
  /* 100a6d8f push 0x100af16c */
  push32((uint32_t)(0x100af16cu));
  /* 100a6d94 call 0x100a2700 */
  push32(0x100a6d99u); f_100a2700();
  /* 100a6d99 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a6d9b push 0x100af41c */
  push32((uint32_t)(0x100af41cu));
  /* 100a6da0 call 0x100a26e0 */
  push32(0x100a6da5u); f_100a26e0();
  /* 100a6da5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6da8 call 0x100a6c20 */
  push32(0x100a6dadu); f_100a6c20();
  /* 100a6dad jmp 0x100a6e32 */
  goto L_100a6e32;
L_100a6db2:;
  /* 100a6db2 push 0x100af114 */
  push32((uint32_t)(0x100af114u));
  /* 100a6db7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100a6db9 call dword ptr [0x100b64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64dc))), 0x100a6dbfu);
  /* 100a6dbf push 0x100b6568 */
  push32((uint32_t)(0x100b6568u));
  /* 100a6dc4 call 0x100a2700 */
  push32(0x100a6dc9u); f_100a2700();
  /* 100a6dc9 mov eax, dword ptr [0x100b3868] */
  EAX = (r32((uint32_t)(0x100b3868)));
  /* 100a6dce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a6dd3 jne 0x100a6ddf */
  if (!C.zf) goto L_100a6ddf;
  /* 100a6dd5 mov dword ptr [0x100af248], 4 */
  w32((uint32_t)(0x100af248), (0x4u));
L_100a6ddf:;
  /* 100a6ddf push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100a6de1 push 0x100af244 */
  push32((uint32_t)(0x100af244u));
  /* 100a6de6 call 0x100a26e0 */
  push32(0x100a6debu); f_100a26e0();
  /* 100a6deb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6dee call 0x100a6bc0 */
  push32(0x100a6df3u); f_100a6bc0();
  /* 100a6df3 jmp 0x100a6e32 */
  goto L_100a6e32;
L_100a6df5:;
  /* 100a6df5 call 0x100a43c0 */
  push32(0x100a6dfau); f_100a43c0();
  /* 100a6dfa jmp 0x100a6e32 */
  goto L_100a6e32;
L_100a6dfc:;
  /* 100a6dfc push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100a6e01 call dword ptr [0x100b64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64f8))), 0x100a6e07u);
  /* 100a6e07 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100a6e0c call dword ptr [0x100b64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64fc))), 0x100a6e12u);
  /* 100a6e12 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100a6e17 call dword ptr [0x100b6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6500))), 0x100a6e1du);
  /* 100a6e1d push 0x100af07c */
  push32((uint32_t)(0x100af07cu));
  /* 100a6e22 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100a6e24 call dword ptr [0x100b64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b64dc))), 0x100a6e2au);
  /* 100a6e2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6e2d call 0x100a3340 */
  push32(0x100a6e32u); f_100a3340();
L_100a6e32:;
  /* 100a6e32 jmp 0x100a31a0 */
  f_100a31a0(); return;
}

/* FUN_10006e50 @ 0x100a6e50 (82 bytes, 32 insns) */
void f_100a6e50(void) {
  FTRACE(0x100a6e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6e50 push ebp */
  push32((uint32_t)(EBP));
  /* 100a6e51 mov ebp, esp */
  EBP = (ESP);
  /* 100a6e53 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a6e56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a6e59 push esi */
  push32((uint32_t)(ESI));
  /* 100a6e5a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 100a6e5d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100a6e60 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100a6e63 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 100a6e6a push eax */
  push32((uint32_t)(EAX));
  /* 100a6e6b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 100a6e6e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a6e71 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 100a6e78 push eax */
  push32((uint32_t)(EAX));
  /* 100a6e79 call 0x100a71dc */
  push32(0x100a6e7eu); f_100a71dc();
  /* 100a6e7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6e81 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 100a6e84 mov esi, eax */
  ESI = (EAX);
  /* 100a6e86 js 0x100a6e90 */
  if (C.sf) goto L_100a6e90;
  /* 100a6e88 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 100a6e8b and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 100a6e8e jmp 0x100a6e9d */
  goto L_100a6e9d;
L_100a6e90:;
  /* 100a6e90 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 100a6e93 push eax */
  push32((uint32_t)(EAX));
  /* 100a6e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a6e96 call 0x100a70c4 */
  push32(0x100a6e9bu); f_100a70c4();
  /* 100a6e9b pop ecx */
  ECX = (pop32());
  /* 100a6e9c pop ecx */
  ECX = (pop32());
L_100a6e9d:;
  /* 100a6e9d mov eax, esi */
  EAX = (ESI);
  /* 100a6e9f pop esi */
  ESI = (pop32());
  /* 100a6ea0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a6ea1 ret  */
  ESPCHK(0x100a6e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea2 @ 0x100a6ea2 (23 bytes, 6 insns) */
void f_100a6ea2(void) {
  FTRACE(0x100a6ea2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6ea2 call 0x100a6eba */
  push32(0x100a6ea7u); f_100a6eba();
  /* 100a6ea7 call 0x100a7a36 */
  push32(0x100a6eacu); f_100a7a36();
  /* 100a6eac mov dword ptr [0x100b6630], eax */
  w32((uint32_t)(0x100b6630), (EAX));
  /* 100a6eb1 call 0x100a79e6 */
  push32(0x100a6eb6u); f_100a79e6();
  /* 100a6eb6 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 100a6eb8 ret  */
  ESPCHK(0x100a6ea2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eba @ 0x100a6eba (56 bytes, 8 insns) */
void f_100a6eba(void) {
  FTRACE(0x100a6ebau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6eba mov eax, 0x100a7e0f */
  EAX = (0x100a7e0fu);
  /* 100a6ebf mov dword ptr [0x100b0668], 0x100a7ab9 */
  w32((uint32_t)(0x100b0668), (0x100a7ab9u));
  /* 100a6ec9 mov dword ptr [0x100b0664], eax */
  w32((uint32_t)(0x100b0664), (EAX));
  /* 100a6ece mov dword ptr [0x100b066c], 0x100a7b1f */
  w32((uint32_t)(0x100b066c), (0x100a7b1fu));
  /* 100a6ed8 mov dword ptr [0x100b0670], 0x100a7a5f */
  w32((uint32_t)(0x100b0670), (0x100a7a5fu));
  /* 100a6ee2 mov dword ptr [0x100b0674], 0x100a7b07 */
  w32((uint32_t)(0x100b0674), (0x100a7b07u));
  /* 100a6eec mov dword ptr [0x100b0678], eax */
  w32((uint32_t)(0x100b0678), (EAX));
  /* 100a6ef1 ret  */
  ESPCHK(0x100a6ebau, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x100a6ef4 (39 bytes, 16 insns) */
void f_100a6ef4(void) {
  FTRACE(0x100a6ef4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6ef4 push ebp */
  push32((uint32_t)(EBP));
  /* 100a6ef5 mov ebp, esp */
  EBP = (ESP);
  /* 100a6ef7 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6efa wait  */
  /* wait (no observable integer/reg state) */
  /* 100a6efb fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 100a6efe wait  */
  /* wait (no observable integer/reg state) */
  /* 100a6eff mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 100a6f03 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 100a6f06 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 100a6f0a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 100a6f0d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 100a6f10 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 100a6f13 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100a6f16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 100a6f19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a6f1a ret  */
  ESPCHK(0x100a6ef4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f1b @ 0x100a6f1b (217 bytes, 57 insns) */
void f_100a6f1b(void) {
  FTRACE(0x100a6f1bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6f1b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a6f1f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6f22 jne 0x100a6fb0 */
  if (!C.zf) goto L_100a6fb0;
  /* 100a6f28 call dword ptr [0x100ae014] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae014))), 0x100a6f2eu);
  /* 100a6f2e push 1 */
  push32((uint32_t)(0x1u));
  /* 100a6f30 mov dword ptr [0x100b664c], eax */
  w32((uint32_t)(0x100b664c), (EAX));
  /* 100a6f35 call 0x100a88ec */
  push32(0x100a6f3au); f_100a88ec();
  /* 100a6f3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a6f3c pop ecx */
  ECX = (pop32());
  /* 100a6f3d je 0x100a6f7b */
  if (C.zf) goto L_100a6f7b;
  /* 100a6f3f mov eax, dword ptr [0x100b664c] */
  EAX = (r32((uint32_t)(0x100b664c)));
  /* 100a6f44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100a6f46 mov cl, byte ptr [0x100b664d] */
  CL = (r8((uint32_t)(0x100b664d)));
  /* 100a6f4c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100a6f51 shr dword ptr [0x100b664c], 0x10 */
  w32((uint32_t)(0x100b664c), (sh_shr((uint32_t)(r32((uint32_t)(0x100b664c))), (0x10u)&0x1f, 32)));
  /* 100a6f58 mov dword ptr [0x100b6654], eax */
  w32((uint32_t)(0x100b6654), (EAX));
  /* 100a6f5d mov dword ptr [0x100b6658], ecx */
  w32((uint32_t)(0x100b6658), (ECX));
  /* 100a6f63 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100a6f66 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a6f68 mov dword ptr [0x100b6650], eax */
  w32((uint32_t)(0x100b6650), (EAX));
  /* 100a6f6d call 0x100a7fa3 */
  push32(0x100a6f72u); f_100a7fa3();
  /* 100a6f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a6f74 jne 0x100a6f7f */
  if (!C.zf) goto L_100a6f7f;
  /* 100a6f76 call 0x100a8949 */
  push32(0x100a6f7bu); f_100a8949();
L_100a6f7b:;
  /* 100a6f7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a6f7d jmp 0x100a6ff1 */
  goto L_100a6ff1;
L_100a6f7f:;
  /* 100a6f7f call dword ptr [0x100ae010] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae010))), 0x100a6f85u);
  /* 100a6f85 mov dword ptr [0x100b7d34], eax */
  w32((uint32_t)(0x100b7d34), (EAX));
  /* 100a6f8a call 0x100a8645 */
  push32(0x100a6f8fu); f_100a8645();
  /* 100a6f8f mov dword ptr [0x100b6638], eax */
  w32((uint32_t)(0x100b6638), (EAX));
  /* 100a6f94 call 0x100a812f */
  push32(0x100a6f99u); f_100a812f();
  /* 100a6f99 call 0x100a83f8 */
  push32(0x100a6f9eu); f_100a83f8();
  /* 100a6f9e call 0x100a833f */
  push32(0x100a6fa3u); f_100a833f();
  /* 100a6fa3 call 0x100a7e85 */
  push32(0x100a6fa8u); f_100a7e85();
  /* 100a6fa8 inc dword ptr [0x100b6634] */
  { uint32_t _r=(r32((uint32_t)(0x100b6634)))+1; w32((uint32_t)(0x100b6634), (_r)); fl_inc(_r,32); }
  /* 100a6fae jmp 0x100a6fee */
  goto L_100a6fee;
L_100a6fb0:;
  /* 100a6fb0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100a6fb2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6fb4 jne 0x100a6fe2 */
  if (!C.zf) goto L_100a6fe2;
  /* 100a6fb6 cmp dword ptr [0x100b6634], ecx */
  { uint32_t _a=(r32((uint32_t)(0x100b6634))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6fbc jle 0x100a6f7b */
  if ((C.zf||C.sf!=C.of)) goto L_100a6f7b;
  /* 100a6fbe dec dword ptr [0x100b6634] */
  { uint32_t _r=(r32((uint32_t)(0x100b6634)))-1; w32((uint32_t)(0x100b6634), (_r)); fl_dec(_r,32); }
  /* 100a6fc4 cmp dword ptr [0x100b6684], ecx */
  { uint32_t _a=(r32((uint32_t)(0x100b6684))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6fca jne 0x100a6fd1 */
  if (!C.zf) goto L_100a6fd1;
  /* 100a6fcc call 0x100a7ec3 */
  push32(0x100a6fd1u); f_100a7ec3();
L_100a6fd1:;
  /* 100a6fd1 call 0x100a82eb */
  push32(0x100a6fd6u); f_100a82eb();
  /* 100a6fd6 call 0x100a7ff7 */
  push32(0x100a6fdbu); f_100a7ff7();
  /* 100a6fdb call 0x100a8949 */
  push32(0x100a6fe0u); f_100a8949();
  /* 100a6fe0 jmp 0x100a6fee */
  goto L_100a6fee;
L_100a6fe2:;
  /* 100a6fe2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a6fe5 jne 0x100a6fee */
  if (!C.zf) goto L_100a6fee;
  /* 100a6fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 100a6fe8 call 0x100a808f */
  push32(0x100a6fedu); f_100a808f();
  /* 100a6fed pop ecx */
  ECX = (pop32());
L_100a6fee:;
  /* 100a6fee push 1 */
  push32((uint32_t)(0x1u));
  /* 100a6ff0 pop eax */
  EAX = (pop32());
L_100a6ff1:;
  /* 100a6ff1 ret 0xc */
  ESPCHK(0x100a6f1bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x100a6ff4 (157 bytes, 73 insns) */
void f_100a6ff4(void) {
  FTRACE(0x100a6ff4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a6ff4 push ebp */
  push32((uint32_t)(EBP));
  /* 100a6ff5 mov ebp, esp */
  EBP = (ESP);
  /* 100a6ff7 push ebx */
  push32((uint32_t)(EBX));
  /* 100a6ff8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a6ffb push esi */
  push32((uint32_t)(ESI));
  /* 100a6ffc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100a6fff push edi */
  push32((uint32_t)(EDI));
  /* 100a7000 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100a7003 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a7005 jne 0x100a7010 */
  if (!C.zf) goto L_100a7010;
  /* 100a7007 cmp dword ptr [0x100b6634], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100b6634))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a700e jmp 0x100a7036 */
  goto L_100a7036;
L_100a7010:;
  /* 100a7010 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7013 je 0x100a701a */
  if (C.zf) goto L_100a701a;
  /* 100a7015 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7018 jne 0x100a703c */
  if (!C.zf) goto L_100a703c;
L_100a701a:;
  /* 100a701a mov eax, dword ptr [0x100b7d38] */
  EAX = (r32((uint32_t)(0x100b7d38)));
  /* 100a701f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a7021 je 0x100a702c */
  if (C.zf) goto L_100a702c;
  /* 100a7023 push edi */
  push32((uint32_t)(EDI));
  /* 100a7024 push esi */
  push32((uint32_t)(ESI));
  /* 100a7025 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7026 call eax */
  call_ind((uint32_t)(EAX), 0x100a7028u);
  /* 100a7028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a702a je 0x100a7038 */
  if (C.zf) goto L_100a7038;
L_100a702c:;
  /* 100a702c push edi */
  push32((uint32_t)(EDI));
  /* 100a702d push esi */
  push32((uint32_t)(ESI));
  /* 100a702e push ebx */
  push32((uint32_t)(EBX));
  /* 100a702f call 0x100a6f1b */
  push32(0x100a7034u); f_100a6f1b();
  /* 100a7034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_100a7036:;
  /* 100a7036 jne 0x100a703c */
  if (!C.zf) goto L_100a703c;
L_100a7038:;
  /* 100a7038 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a703a jmp 0x100a708a */
  goto L_100a708a;
L_100a703c:;
  /* 100a703c push edi */
  push32((uint32_t)(EDI));
  /* 100a703d push esi */
  push32((uint32_t)(ESI));
  /* 100a703e push ebx */
  push32((uint32_t)(EBX));
  /* 100a703f call 0x100a27d0 */
  push32(0x100a7044u); f_100a27d0();
  /* 100a7044 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7047 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100a704a jne 0x100a7058 */
  if (!C.zf) goto L_100a7058;
  /* 100a704c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a704e jne 0x100a7087 */
  if (!C.zf) goto L_100a7087;
  /* 100a7050 push edi */
  push32((uint32_t)(EDI));
  /* 100a7051 push eax */
  push32((uint32_t)(EAX));
  /* 100a7052 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7053 call 0x100a6f1b */
  push32(0x100a7058u); f_100a6f1b();
L_100a7058:;
  /* 100a7058 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a705a je 0x100a7061 */
  if (C.zf) goto L_100a7061;
  /* 100a705c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a705f jne 0x100a7087 */
  if (!C.zf) goto L_100a7087;
L_100a7061:;
  /* 100a7061 push edi */
  push32((uint32_t)(EDI));
  /* 100a7062 push esi */
  push32((uint32_t)(ESI));
  /* 100a7063 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7064 call 0x100a6f1b */
  push32(0x100a7069u); f_100a6f1b();
  /* 100a7069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a706b jne 0x100a7070 */
  if (!C.zf) goto L_100a7070;
  /* 100a706d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_100a7070:;
  /* 100a7070 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7074 je 0x100a7087 */
  if (C.zf) goto L_100a7087;
  /* 100a7076 mov eax, dword ptr [0x100b7d38] */
  EAX = (r32((uint32_t)(0x100b7d38)));
  /* 100a707b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a707d je 0x100a7087 */
  if (C.zf) goto L_100a7087;
  /* 100a707f push edi */
  push32((uint32_t)(EDI));
  /* 100a7080 push esi */
  push32((uint32_t)(ESI));
  /* 100a7081 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7082 call eax */
  call_ind((uint32_t)(EAX), 0x100a7084u);
  /* 100a7084 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_100a7087:;
  /* 100a7087 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_100a708a:;
  /* 100a708a pop edi */
  EDI = (pop32());
  /* 100a708b pop esi */
  ESI = (pop32());
  /* 100a708c pop ebx */
  EBX = (pop32());
  /* 100a708d pop ebp */
  EBP = (pop32());
  /* 100a708e ret 0xc */
  ESPCHK(0x100a6ff4u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x100a7091 (48 bytes, 15 insns) */
void f_100a7091(void) {
  FTRACE(0x100a7091u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7091 mov eax, dword ptr [0x100b6640] */
  EAX = (r32((uint32_t)(0x100b6640)));
  /* 100a7096 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7099 je 0x100a70a8 */
  if (C.zf) goto L_100a70a8;
  /* 100a709b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a709d jne 0x100a70ad */
  if (!C.zf) goto L_100a70ad;
  /* 100a709f cmp dword ptr [0x100b6644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100b6644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a70a6 jne 0x100a70ad */
  if (!C.zf) goto L_100a70ad;
L_100a70a8:;
  /* 100a70a8 call 0x100a89f1 */
  push32(0x100a70adu); f_100a89f1();
L_100a70ad:;
  /* 100a70ad push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100a70b1 call 0x100a8a2a */
  push32(0x100a70b6u); f_100a8a2a();
  /* 100a70b6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 100a70bb call dword ptr [0x100b0658] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b0658))), 0x100a70c1u);
  /* 100a70c1 pop ecx */
  ECX = (pop32());
  /* 100a70c2 pop ecx */
  ECX = (pop32());
  /* 100a70c3 ret  */
  ESPCHK(0x100a7091u, _esp0);
  ESP += 4; return;
}

/* FUN_100070c4 @ 0x100a70c4 (280 bytes, 106 insns) */
void f_100a70c4(void) {
  FTRACE(0x100a70c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a70c4 push ebp */
  push32((uint32_t)(EBP));
  /* 100a70c5 mov ebp, esp */
  EBP = (ESP);
  /* 100a70c7 push ebx */
  push32((uint32_t)(EBX));
  /* 100a70c8 push esi */
  push32((uint32_t)(ESI));
  /* 100a70c9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100a70cc mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100a70cf mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 100a70d2 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 100a70d4 je 0x100a71d0 */
  if (C.zf) goto L_100a71d0;
  /* 100a70da test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 100a70dc jne 0x100a71d0 */
  if (!C.zf) goto L_100a71d0;
  /* 100a70e2 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 100a70e4 je 0x100a70fc */
  if (C.zf) goto L_100a70fc;
  /* 100a70e6 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100a70ea test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 100a70ec je 0x100a71d0 */
  if (C.zf) goto L_100a71d0;
  /* 100a70f2 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 100a70f5 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 100a70f7 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100a70f9 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_100a70fc:;
  /* 100a70fc mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100a70ff and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100a7103 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 100a7107 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 100a7109 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 100a710b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 100a710f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 100a7112 jne 0x100a7136 */
  if (!C.zf) goto L_100a7136;
  /* 100a7114 cmp esi, 0x100b0758 */
  { uint32_t _a=(ESI),_b=(0x100b0758u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a711a je 0x100a7124 */
  if (C.zf) goto L_100a7124;
  /* 100a711c cmp esi, 0x100b0778 */
  { uint32_t _a=(ESI),_b=(0x100b0778u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7122 jne 0x100a712f */
  if (!C.zf) goto L_100a712f;
L_100a7124:;
  /* 100a7124 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7125 call 0x100a8e89 */
  push32(0x100a712au); f_100a8e89();
  /* 100a712a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a712c pop ecx */
  ECX = (pop32());
  /* 100a712d jne 0x100a7136 */
  if (!C.zf) goto L_100a7136;
L_100a712f:;
  /* 100a712f push esi */
  push32((uint32_t)(ESI));
  /* 100a7130 call 0x100a8e45 */
  push32(0x100a7135u); f_100a8e45();
  /* 100a7135 pop ecx */
  ECX = (pop32());
L_100a7136:;
  /* 100a7136 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 100a713c push edi */
  push32((uint32_t)(EDI));
  /* 100a713d je 0x100a71a6 */
  if (C.zf) goto L_100a71a6;
  /* 100a713f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100a7142 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 100a7144 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a7146 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100a7149 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100a714b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 100a714e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100a714f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100a7151 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 100a7154 jle 0x100a7166 */
  if ((C.zf||C.sf!=C.of)) goto L_100a7166;
  /* 100a7156 push edi */
  push32((uint32_t)(EDI));
  /* 100a7157 push eax */
  push32((uint32_t)(EAX));
  /* 100a7158 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7159 call 0x100a8c55 */
  push32(0x100a715eu); f_100a8c55();
  /* 100a715e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7161 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100a7164 jmp 0x100a719c */
  goto L_100a719c;
L_100a7166:;
  /* 100a7166 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7169 je 0x100a7184 */
  if (C.zf) goto L_100a7184;
  /* 100a716b mov ecx, ebx */
  ECX = (EBX);
  /* 100a716d mov eax, ebx */
  EAX = (EBX);
  /* 100a716f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100a7172 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100a7175 mov ecx, dword ptr [ecx*4 + 0x100b7c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100b7c20)));
  /* 100a717c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100a717f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100a7182 jmp 0x100a7189 */
  goto L_100a7189;
L_100a7184:;
  /* 100a7184 mov eax, 0x100b0680 */
  EAX = (0x100b0680u);
L_100a7189:;
  /* 100a7189 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100a718d je 0x100a719c */
  if (C.zf) goto L_100a719c;
  /* 100a718f push 2 */
  push32((uint32_t)(0x2u));
  /* 100a7191 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a7193 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7194 call 0x100a8b7d */
  push32(0x100a7199u); f_100a8b7d();
  /* 100a7199 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a719c:;
  /* 100a719c mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100a719f mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 100a71a2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100a71a4 jmp 0x100a71ba */
  goto L_100a71ba;
L_100a71a6:;
  /* 100a71a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a71a8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100a71ab pop edi */
  EDI = (pop32());
  /* 100a71ac push edi */
  push32((uint32_t)(EDI));
  /* 100a71ad push eax */
  push32((uint32_t)(EAX));
  /* 100a71ae push ebx */
  push32((uint32_t)(EBX));
  /* 100a71af call 0x100a8c55 */
  push32(0x100a71b4u); f_100a8c55();
  /* 100a71b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a71b7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_100a71ba:;
  /* 100a71ba cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a71bd pop edi */
  EDI = (pop32());
  /* 100a71be je 0x100a71c6 */
  if (C.zf) goto L_100a71c6;
  /* 100a71c0 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100a71c4 jmp 0x100a71d5 */
  goto L_100a71d5;
L_100a71c6:;
  /* 100a71c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a71c9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100a71ce jmp 0x100a71d8 */
  goto L_100a71d8;
L_100a71d0:;
  /* 100a71d0 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 100a71d2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_100a71d5:;
  /* 100a71d5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100a71d8:;
  /* 100a71d8 pop esi */
  ESI = (pop32());
  /* 100a71d9 pop ebx */
  EBX = (pop32());
  /* 100a71da pop ebp */
  EBP = (pop32());
  /* 100a71db ret  */
  ESPCHK(0x100a70c4u, _esp0);
  ESP += 4; return;
}

/* FUN_100071dc @ 0x100a71dc (1825 bytes, 595 insns) [1 switch table(s)] */
void f_100a71dc(void) {
  FTRACE(0x100a71dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a71dc push ebp */
  push32((uint32_t)(EBP));
  /* 100a71dd mov ebp, esp */
  EBP = (ESP);
  /* 100a71df sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a71e5 push ebx */
  push32((uint32_t)(EBX));
  /* 100a71e6 push esi */
  push32((uint32_t)(ESI));
  /* 100a71e7 push edi */
  push32((uint32_t)(EDI));
  /* 100a71e8 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100a71eb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100a71ed mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100a71ef inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100a71f0 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100a71f2 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 100a71f5 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 100a71f8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 100a71fb je 0x100a78f5 */
  if (C.zf) goto L_100a78f5;
  /* 100a7201 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100a7204 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100a7206 jmp 0x100a7210 */
  goto L_100a7210;
L_100a7208:;
  /* 100a7208 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100a720b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 100a720e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_100a7210:;
  /* 100a7210 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7213 jl 0x100a78f5 */
  if ((C.sf!=C.of)) goto L_100a78f5;
  /* 100a7219 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a721c jl 0x100a7231 */
  if ((C.sf!=C.of)) goto L_100a7231;
  /* 100a721e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a7221 jg 0x100a7231 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a7231;
  /* 100a7223 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100a7226 mov al, byte ptr [eax + 0x100ae0c8] */
  AL = (r8((uint32_t)(EAX + 0x100ae0c8)));
  /* 100a722c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 100a722f jmp 0x100a7233 */
  goto L_100a7233;
L_100a7231:;
  /* 100a7231 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100a7233:;
  /* 100a7233 movsx eax, byte ptr [esi + eax*8 + 0x100ae0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x100ae0e8))));
  /* 100a723b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100a723e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7241 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 100a7244 ja 0x100a78e4 */
  if ((!C.cf&&!C.zf)) goto L_100a78e4;
  /* 100a724a jmp dword ptr [eax*4 + 0x100a78fd] */
  switch (EAX) {
    case 0: goto L_100a737b;
    case 1: goto L_100a7251;
    case 2: goto L_100a726c;
    case 3: goto L_100a72b8;
    case 4: goto L_100a72ef;
    case 5: goto L_100a72f7;
    case 6: goto L_100a732c;
    case 7: goto L_100a73bf;
    default: x86_unimpl("switch@0x100a724a out of table"); return;
  }
L_100a7251:;
  /* 100a7251 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 100a7255 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 100a7258 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 100a725b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 100a725e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 100a7261 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 100a7264 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100a7267 jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a726c:;
  /* 100a726c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100a726f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a7272 je 0x100a72af */
  if (C.zf) goto L_100a72af;
  /* 100a7274 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a7277 je 0x100a72a6 */
  if (C.zf) goto L_100a72a6;
  /* 100a7279 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a727c je 0x100a729d */
  if (C.zf) goto L_100a729d;
  /* 100a727e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a727f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a7280 je 0x100a7294 */
  if (C.zf) goto L_100a7294;
  /* 100a7282 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a7285 jne 0x100a78e4 */
  if (!C.zf) goto L_100a78e4;
  /* 100a728b or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100a728f jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a7294:;
  /* 100a7294 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100a7298 jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a729d:;
  /* 100a729d or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100a72a1 jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a72a6:;
  /* 100a72a6 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 100a72aa jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a72af:;
  /* 100a72af or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100a72b3 jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a72b8:;
  /* 100a72b8 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a72bb jne 0x100a72e0 */
  if (!C.zf) goto L_100a72e0;
  /* 100a72bd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100a72c0 push eax */
  push32((uint32_t)(EAX));
  /* 100a72c1 call 0x100a79bb */
  push32(0x100a72c6u); f_100a79bb();
  /* 100a72c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a72c8 pop ecx */
  ECX = (pop32());
  /* 100a72c9 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100a72cc jge 0x100a78e4 */
  if ((C.sf==C.of)) goto L_100a78e4;
  /* 100a72d2 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100a72d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_100a72d8:;
  /* 100a72d8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100a72db jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a72e0:;
  /* 100a72e0 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 100a72e3 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100a72e6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100a72e9 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 100a72ed jmp 0x100a72d8 */
  goto L_100a72d8;
L_100a72ef:;
  /* 100a72ef mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 100a72f2 jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a72f7:;
  /* 100a72f7 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a72fa jne 0x100a731a */
  if (!C.zf) goto L_100a731a;
  /* 100a72fc lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100a72ff push eax */
  push32((uint32_t)(EAX));
  /* 100a7300 call 0x100a79bb */
  push32(0x100a7305u); f_100a79bb();
  /* 100a7305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a7307 pop ecx */
  ECX = (pop32());
  /* 100a7308 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100a730b jge 0x100a78e4 */
  if ((C.sf==C.of)) goto L_100a78e4;
  /* 100a7311 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 100a7315 jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a731a:;
  /* 100a731a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 100a731d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100a7320 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 100a7324 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100a7327 jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a732c:;
  /* 100a732c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a732f je 0x100a735f */
  if (C.zf) goto L_100a735f;
  /* 100a7331 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a7334 je 0x100a7356 */
  if (C.zf) goto L_100a7356;
  /* 100a7336 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a7339 je 0x100a734d */
  if (C.zf) goto L_100a734d;
  /* 100a733b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a733e jne 0x100a78e4 */
  if (!C.zf) goto L_100a78e4;
  /* 100a7344 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100a7348 jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a734d:;
  /* 100a734d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100a7351 jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a7356:;
  /* 100a7356 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100a735a jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a735f:;
  /* 100a735f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a7362 jne 0x100a7378 */
  if (!C.zf) goto L_100a7378;
  /* 100a7364 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a7368 jne 0x100a7378 */
  if (!C.zf) goto L_100a7378;
  /* 100a736a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100a736b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100a736c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100a7370 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 100a7373 jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a7378:;
  /* 100a7378 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_100a737b:;
  /* 100a737b mov ecx, dword ptr [0x100b09c0] */
  ECX = (r32((uint32_t)(0x100b09c0)));
  /* 100a7381 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100a7384 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100a7387 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100a738c je 0x100a73a7 */
  if (C.zf) goto L_100a73a7;
  /* 100a738e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100a7391 push eax */
  push32((uint32_t)(EAX));
  /* 100a7392 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a7395 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100a7398 push eax */
  push32((uint32_t)(EAX));
  /* 100a7399 call 0x100a791d */
  push32(0x100a739eu); f_100a791d();
  /* 100a739e mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100a73a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a73a3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100a73a4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100a73a7:;
  /* 100a73a7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100a73aa push eax */
  push32((uint32_t)(EAX));
  /* 100a73ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a73ae movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100a73b1 push eax */
  push32((uint32_t)(EAX));
  /* 100a73b2 call 0x100a791d */
  push32(0x100a73b7u); f_100a791d();
  /* 100a73b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a73ba jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a73bf:;
  /* 100a73bf movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100a73c2 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a73c5 jg 0x100a75e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a75e7;
  /* 100a73cb cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a73ce jge 0x100a746a */
  if ((C.sf==C.of)) goto L_100a746a;
  /* 100a73d4 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a73d7 jg 0x100a74c8 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a74c8;
  /* 100a73dd je 0x100a765b */
  if (C.zf) goto L_100a765b;
  /* 100a73e3 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a73e6 je 0x100a748b */
  if (C.zf) goto L_100a748b;
  /* 100a73ec dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a73ed dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a73ee je 0x100a7460 */
  if (C.zf) goto L_100a7460;
  /* 100a73f0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a73f1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a73f2 je 0x100a7460 */
  if (C.zf) goto L_100a7460;
  /* 100a73f4 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a73f7 jne 0x100a77e6 */
  if (!C.zf) goto L_100a77e6;
  /* 100a73fd test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 100a7403 jne 0x100a7409 */
  if (!C.zf) goto L_100a7409;
  /* 100a7405 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_100a7409:;
  /* 100a7409 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 100a740c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a740f jne 0x100a7416 */
  if (!C.zf) goto L_100a7416;
  /* 100a7411 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_100a7416:;
  /* 100a7416 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100a7419 push eax */
  push32((uint32_t)(EAX));
  /* 100a741a call 0x100a79bb */
  push32(0x100a741fu); f_100a79bb();
  /* 100a741f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 100a7425 pop ecx */
  ECX = (pop32());
  /* 100a7426 mov ecx, eax */
  ECX = (EAX);
  /* 100a7428 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100a742b je 0x100a762f */
  if (C.zf) goto L_100a762f;
  /* 100a7431 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100a7433 jne 0x100a743e */
  if (!C.zf) goto L_100a743e;
  /* 100a7435 mov ecx, dword ptr [0x100b0660] */
  ECX = (r32((uint32_t)(0x100b0660)));
  /* 100a743b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_100a743e:;
  /* 100a743e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 100a7445 mov eax, ecx */
  EAX = (ECX);
L_100a7447:;
  /* 100a7447 mov edx, esi */
  EDX = (ESI);
  /* 100a7449 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100a744a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100a744c je 0x100a7626 */
  if (C.zf) goto L_100a7626;
  /* 100a7452 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100a7456 je 0x100a7626 */
  if (C.zf) goto L_100a7626;
  /* 100a745c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a745d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a745e jmp 0x100a7447 */
  goto L_100a7447;
L_100a7460:;
  /* 100a7460 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 100a7467 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_100a746a:;
  /* 100a746a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100a746e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 100a7474 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7476 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 100a7479 jge 0x100a754e */
  if ((C.sf==C.of)) goto L_100a754e;
  /* 100a747f mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 100a7486 jmp 0x100a755c */
  goto L_100a755c;
L_100a748b:;
  /* 100a748b test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 100a7491 jne 0x100a7497 */
  if (!C.zf) goto L_100a7497;
  /* 100a7493 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_100a7497:;
  /* 100a7497 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 100a749d lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100a74a0 push eax */
  push32((uint32_t)(EAX));
  /* 100a74a1 je 0x100a74de */
  if (C.zf) goto L_100a74de;
  /* 100a74a3 call 0x100a79d8 */
  push32(0x100a74a8u); f_100a79d8();
  /* 100a74a8 push eax */
  push32((uint32_t)(EAX));
  /* 100a74a9 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100a74af push eax */
  push32((uint32_t)(EAX));
  /* 100a74b0 call 0x100a909b */
  push32(0x100a74b5u); f_100a909b();
  /* 100a74b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a74b8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100a74bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a74bd jge 0x100a74f1 */
  if ((C.sf==C.of)) goto L_100a74f1;
  /* 100a74bf mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 100a74c6 jmp 0x100a74f1 */
  goto L_100a74f1;
L_100a74c8:;
  /* 100a74c8 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a74cb je 0x100a74ff */
  if (C.zf) goto L_100a74ff;
  /* 100a74cd sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a74d0 je 0x100a7497 */
  if (C.zf) goto L_100a7497;
  /* 100a74d2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a74d3 je 0x100a76c1 */
  if (C.zf) goto L_100a76c1;
  /* 100a74d9 jmp 0x100a77e6 */
  goto L_100a77e6;
L_100a74de:;
  /* 100a74de call 0x100a79bb */
  push32(0x100a74e3u); f_100a79bb();
  /* 100a74e3 pop ecx */
  ECX = (pop32());
  /* 100a74e4 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 100a74ea mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_100a74f1:;
  /* 100a74f1 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100a74f7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100a74fa jmp 0x100a77e6 */
  goto L_100a77e6;
L_100a74ff:;
  /* 100a74ff lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100a7502 push eax */
  push32((uint32_t)(EAX));
  /* 100a7503 call 0x100a79bb */
  push32(0x100a7508u); f_100a79bb();
  /* 100a7508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a750a pop ecx */
  ECX = (pop32());
  /* 100a750b je 0x100a7540 */
  if (C.zf) goto L_100a7540;
  /* 100a750d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 100a7510 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100a7512 je 0x100a7540 */
  if (C.zf) goto L_100a7540;
  /* 100a7514 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 100a7518 je 0x100a7531 */
  if (C.zf) goto L_100a7531;
  /* 100a751a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 100a751d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100a751f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100a7522 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100a7525 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 100a752c jmp 0x100a77e6 */
  goto L_100a77e6;
L_100a7531:;
  /* 100a7531 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 100a7535 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100a7538 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 100a753b jmp 0x100a77e3 */
  goto L_100a77e3;
L_100a7540:;
  /* 100a7540 mov eax, dword ptr [0x100b065c] */
  EAX = (r32((uint32_t)(0x100b065c)));
  /* 100a7545 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100a7548 push eax */
  push32((uint32_t)(EAX));
  /* 100a7549 jmp 0x100a75dc */
  goto L_100a75dc;
L_100a754e:;
  /* 100a754e jne 0x100a755c */
  if (!C.zf) goto L_100a755c;
  /* 100a7550 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a7553 jne 0x100a755c */
  if (!C.zf) goto L_100a755c;
  /* 100a7555 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_100a755c:;
  /* 100a755c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100a755f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 100a7562 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7565 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 100a7568 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 100a756b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 100a756e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 100a7571 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 100a7574 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 100a7577 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100a757a push eax */
  push32((uint32_t)(EAX));
  /* 100a757b lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100a7581 push eax */
  push32((uint32_t)(EAX));
  /* 100a7582 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 100a7585 push eax */
  push32((uint32_t)(EAX));
  /* 100a7586 call dword ptr [0x100b0664] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b0664))), 0x100a758cu);
  /* 100a758c mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 100a758f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7592 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 100a7598 je 0x100a75ae */
  if (C.zf) goto L_100a75ae;
  /* 100a759a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a759e jne 0x100a75ae */
  if (!C.zf) goto L_100a75ae;
  /* 100a75a0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100a75a6 push eax */
  push32((uint32_t)(EAX));
  /* 100a75a7 call dword ptr [0x100b0670] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b0670))), 0x100a75adu);
  /* 100a75ad pop ecx */
  ECX = (pop32());
L_100a75ae:;
  /* 100a75ae cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a75b1 jne 0x100a75c5 */
  if (!C.zf) goto L_100a75c5;
  /* 100a75b3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a75b5 jne 0x100a75c5 */
  if (!C.zf) goto L_100a75c5;
  /* 100a75b7 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100a75bd push eax */
  push32((uint32_t)(EAX));
  /* 100a75be call dword ptr [0x100b0668] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b0668))), 0x100a75c4u);
  /* 100a75c4 pop ecx */
  ECX = (pop32());
L_100a75c5:;
  /* 100a75c5 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a75cc jne 0x100a75db */
  if (!C.zf) goto L_100a75db;
  /* 100a75ce or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100a75d2 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 100a75d8 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_100a75db:;
  /* 100a75db push edi */
  push32((uint32_t)(EDI));
L_100a75dc:;
  /* 100a75dc call 0x100a9020 */
  push32(0x100a75e1u); f_100a9020();
  /* 100a75e1 pop ecx */
  ECX = (pop32());
  /* 100a75e2 jmp 0x100a77e3 */
  goto L_100a77e3;
L_100a75e7:;
  /* 100a75e7 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a75ea je 0x100a76c1 */
  if (C.zf) goto L_100a76c1;
  /* 100a75f0 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a75f3 je 0x100a7697 */
  if (C.zf) goto L_100a7697;
  /* 100a75f9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a75fa je 0x100a7684 */
  if (C.zf) goto L_100a7684;
  /* 100a7600 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a7601 je 0x100a7654 */
  if (C.zf) goto L_100a7654;
  /* 100a7603 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a7606 je 0x100a7409 */
  if (C.zf) goto L_100a7409;
  /* 100a760c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a760d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a760e je 0x100a76c5 */
  if (C.zf) goto L_100a76c5;
  /* 100a7614 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a7617 jne 0x100a77e6 */
  if (!C.zf) goto L_100a77e6;
  /* 100a761d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 100a7624 jmp 0x100a7662 */
  goto L_100a7662;
L_100a7626:;
  /* 100a7626 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a7628 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100a762a jmp 0x100a77e3 */
  goto L_100a77e3;
L_100a762f:;
  /* 100a762f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100a7631 jne 0x100a763c */
  if (!C.zf) goto L_100a763c;
  /* 100a7633 mov ecx, dword ptr [0x100b065c] */
  ECX = (r32((uint32_t)(0x100b065c)));
  /* 100a7639 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_100a763c:;
  /* 100a763c mov eax, ecx */
  EAX = (ECX);
L_100a763e:;
  /* 100a763e mov edx, esi */
  EDX = (ESI);
  /* 100a7640 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100a7641 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100a7643 je 0x100a764d */
  if (C.zf) goto L_100a764d;
  /* 100a7645 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a7648 je 0x100a764d */
  if (C.zf) goto L_100a764d;
  /* 100a764a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a764b jmp 0x100a763e */
  goto L_100a763e;
L_100a764d:;
  /* 100a764d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a764f jmp 0x100a77e3 */
  goto L_100a77e3;
L_100a7654:;
  /* 100a7654 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_100a765b:;
  /* 100a765b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_100a7662:;
  /* 100a7662 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100a7666 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 100a766d je 0x100a76cc */
  if (C.zf) goto L_100a76cc;
  /* 100a766f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 100a7672 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 100a7676 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100a7678 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 100a767f mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 100a7682 jmp 0x100a76cc */
  goto L_100a76cc;
L_100a7684:;
  /* 100a7684 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100a7688 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 100a768f je 0x100a76cc */
  if (C.zf) goto L_100a76cc;
  /* 100a7691 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100a7695 jmp 0x100a76cc */
  goto L_100a76cc;
L_100a7697:;
  /* 100a7697 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100a769a push eax */
  push32((uint32_t)(EAX));
  /* 100a769b call 0x100a79bb */
  push32(0x100a76a0u); f_100a79bb();
  /* 100a76a0 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100a76a4 pop ecx */
  ECX = (pop32());
  /* 100a76a5 je 0x100a76b0 */
  if (C.zf) goto L_100a76b0;
  /* 100a76a7 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 100a76ab mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 100a76ae jmp 0x100a76b5 */
  goto L_100a76b5;
L_100a76b0:;
  /* 100a76b0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 100a76b3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_100a76b5:;
  /* 100a76b5 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 100a76bc jmp 0x100a78e4 */
  goto L_100a78e4;
L_100a76c1:;
  /* 100a76c1 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_100a76c5:;
  /* 100a76c5 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_100a76cc:;
  /* 100a76cc test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 100a76d0 je 0x100a76de */
  if (C.zf) goto L_100a76de;
  /* 100a76d2 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100a76d5 push eax */
  push32((uint32_t)(EAX));
  /* 100a76d6 call 0x100a79c8 */
  push32(0x100a76dbu); f_100a79c8();
  /* 100a76db pop ecx */
  ECX = (pop32());
  /* 100a76dc jmp 0x100a771f */
  goto L_100a771f;
L_100a76de:;
  /* 100a76de test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100a76e2 je 0x100a7705 */
  if (C.zf) goto L_100a7705;
  /* 100a76e4 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100a76e8 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100a76eb push eax */
  push32((uint32_t)(EAX));
  /* 100a76ec je 0x100a76fa */
  if (C.zf) goto L_100a76fa;
  /* 100a76ee call 0x100a79bb */
  push32(0x100a76f3u); f_100a79bb();
  /* 100a76f3 pop ecx */
  ECX = (pop32());
  /* 100a76f4 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_100a76f7:;
  /* 100a76f7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a76f8 jmp 0x100a771f */
  goto L_100a771f;
L_100a76fa:;
  /* 100a76fa call 0x100a79bb */
  push32(0x100a76ffu); f_100a79bb();
  /* 100a76ff pop ecx */
  ECX = (pop32());
  /* 100a7700 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 100a7703 jmp 0x100a76f7 */
  goto L_100a76f7;
L_100a7705:;
  /* 100a7705 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100a7709 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100a770c push eax */
  push32((uint32_t)(EAX));
  /* 100a770d je 0x100a7717 */
  if (C.zf) goto L_100a7717;
  /* 100a770f call 0x100a79bb */
  push32(0x100a7714u); f_100a79bb();
  /* 100a7714 pop ecx */
  ECX = (pop32());
  /* 100a7715 jmp 0x100a76f7 */
  goto L_100a76f7;
L_100a7717:;
  /* 100a7717 call 0x100a79bb */
  push32(0x100a771cu); f_100a79bb();
  /* 100a771c pop ecx */
  ECX = (pop32());
  /* 100a771d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_100a771f:;
  /* 100a771f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100a7723 je 0x100a7740 */
  if (C.zf) goto L_100a7740;
  /* 100a7725 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100a7727 jg 0x100a7740 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a7740;
  /* 100a7729 jl 0x100a772f */
  if ((C.sf!=C.of)) goto L_100a772f;
  /* 100a772b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a772d jae 0x100a7740 */
  if (!C.cf) goto L_100a7740;
L_100a772f:;
  /* 100a772f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100a7731 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7734 mov esi, eax */
  ESI = (EAX);
  /* 100a7736 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 100a7738 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100a773c mov edi, edx */
  EDI = (EDX);
  /* 100a773e jmp 0x100a7744 */
  goto L_100a7744;
L_100a7740:;
  /* 100a7740 mov esi, eax */
  ESI = (EAX);
  /* 100a7742 mov edi, edx */
  EDI = (EDX);
L_100a7744:;
  /* 100a7744 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 100a7748 jne 0x100a774d */
  if (!C.zf) goto L_100a774d;
  /* 100a774a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_100a774d:;
  /* 100a774d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7751 jge 0x100a775c */
  if ((C.sf==C.of)) goto L_100a775c;
  /* 100a7753 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 100a775a jmp 0x100a7760 */
  goto L_100a7760;
L_100a775c:;
  /* 100a775c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_100a7760:;
  /* 100a7760 mov eax, esi */
  EAX = (ESI);
  /* 100a7762 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100a7764 jne 0x100a776a */
  if (!C.zf) goto L_100a776a;
  /* 100a7766 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_100a776a:;
  /* 100a776a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 100a776d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100a7770:;
  /* 100a7770 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 100a7773 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 100a7776 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a7778 jg 0x100a7780 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a7780;
  /* 100a777a mov eax, esi */
  EAX = (ESI);
  /* 100a777c or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100a777e je 0x100a77bb */
  if (C.zf) goto L_100a77bb;
L_100a7780:;
  /* 100a7780 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100a7783 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a7784 push edx */
  push32((uint32_t)(EDX));
  /* 100a7785 push eax */
  push32((uint32_t)(EAX));
  /* 100a7786 push edi */
  push32((uint32_t)(EDI));
  /* 100a7787 push esi */
  push32((uint32_t)(ESI));
  /* 100a7788 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 100a778b mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 100a778e call 0x100a91d0 */
  push32(0x100a7793u); f_100a91d0();
  /* 100a7793 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 100a7796 mov ebx, eax */
  EBX = (EAX);
  /* 100a7798 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a779b push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 100a779e push edi */
  push32((uint32_t)(EDI));
  /* 100a779f push esi */
  push32((uint32_t)(ESI));
  /* 100a77a0 call 0x100a9160 */
  push32(0x100a77a5u); f_100a9160();
  /* 100a77a5 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a77a8 mov esi, eax */
  ESI = (EAX);
  /* 100a77aa mov edi, edx */
  EDI = (EDX);
  /* 100a77ac jle 0x100a77b1 */
  if ((C.zf||C.sf!=C.of)) goto L_100a77b1;
  /* 100a77ae add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_100a77b1:;
  /* 100a77b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100a77b4 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100a77b7 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 100a77b9 jmp 0x100a7770 */
  goto L_100a7770;
L_100a77bb:;
  /* 100a77bb lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 100a77be sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a77c1 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 100a77c4 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 100a77c8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100a77cb je 0x100a77e6 */
  if (C.zf) goto L_100a77e6;
  /* 100a77cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 100a77d0 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a77d3 jne 0x100a77d9 */
  if (!C.zf) goto L_100a77d9;
  /* 100a77d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a77d7 jne 0x100a77e6 */
  if (!C.zf) goto L_100a77e6;
L_100a77d9:;
  /* 100a77d9 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100a77dc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a77dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 100a77e0 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_100a77e3:;
  /* 100a77e3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_100a77e6:;
  /* 100a77e6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a77ea jne 0x100a78e4 */
  if (!C.zf) goto L_100a78e4;
  /* 100a77f0 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 100a77f3 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 100a77f6 je 0x100a781e */
  if (C.zf) goto L_100a781e;
  /* 100a77f8 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 100a77fb je 0x100a7803 */
  if (C.zf) goto L_100a7803;
  /* 100a77fd mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 100a7801 jmp 0x100a7817 */
  goto L_100a7817;
L_100a7803:;
  /* 100a7803 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100a7806 je 0x100a780e */
  if (C.zf) goto L_100a780e;
  /* 100a7808 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 100a780c jmp 0x100a7817 */
  goto L_100a7817;
L_100a780e:;
  /* 100a780e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100a7811 je 0x100a781e */
  if (C.zf) goto L_100a781e;
  /* 100a7813 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_100a7817:;
  /* 100a7817 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_100a781e:;
  /* 100a781e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 100a7821 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a7824 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a7827 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 100a782a jne 0x100a783e */
  if (!C.zf) goto L_100a783e;
  /* 100a782c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100a782f push eax */
  push32((uint32_t)(EAX));
  /* 100a7830 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a7833 push esi */
  push32((uint32_t)(ESI));
  /* 100a7834 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100a7836 call 0x100a7952 */
  push32(0x100a783bu); f_100a7952();
  /* 100a783b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a783e:;
  /* 100a783e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100a7841 push eax */
  push32((uint32_t)(EAX));
  /* 100a7842 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 100a7845 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a7848 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 100a784b push eax */
  push32((uint32_t)(EAX));
  /* 100a784c call 0x100a7983 */
  push32(0x100a7851u); f_100a7983();
  /* 100a7851 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7854 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100a7857 je 0x100a7870 */
  if (C.zf) goto L_100a7870;
  /* 100a7859 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100a785c jne 0x100a7870 */
  if (!C.zf) goto L_100a7870;
  /* 100a785e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100a7861 push eax */
  push32((uint32_t)(EAX));
  /* 100a7862 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a7865 push esi */
  push32((uint32_t)(ESI));
  /* 100a7866 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 100a7868 call 0x100a7952 */
  push32(0x100a786du); f_100a7952();
  /* 100a786d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a7870:;
  /* 100a7870 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7874 je 0x100a78b7 */
  if (C.zf) goto L_100a78b7;
  /* 100a7876 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a787a jle 0x100a78b7 */
  if ((C.zf||C.sf!=C.of)) goto L_100a78b7;
  /* 100a787c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100a787f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 100a7882 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_100a7885:;
  /* 100a7885 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 100a7888 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100a7889 push eax */
  push32((uint32_t)(EAX));
  /* 100a788a lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100a788d push eax */
  push32((uint32_t)(EAX));
  /* 100a788e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100a788f call 0x100a909b */
  push32(0x100a7894u); f_100a909b();
  /* 100a7894 pop ecx */
  ECX = (pop32());
  /* 100a7895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a7897 pop ecx */
  ECX = (pop32());
  /* 100a7898 jle 0x100a78cc */
  if ((C.zf||C.sf!=C.of)) goto L_100a78cc;
  /* 100a789a lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 100a789d push ecx */
  push32((uint32_t)(ECX));
  /* 100a789e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a78a1 push eax */
  push32((uint32_t)(EAX));
  /* 100a78a2 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100a78a5 push eax */
  push32((uint32_t)(EAX));
  /* 100a78a6 call 0x100a7983 */
  push32(0x100a78abu); f_100a7983();
  /* 100a78ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a78ae mov eax, edi */
  EAX = (EDI);
  /* 100a78b0 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100a78b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a78b3 jne 0x100a7885 */
  if (!C.zf) goto L_100a7885;
  /* 100a78b5 jmp 0x100a78cc */
  goto L_100a78cc;
L_100a78b7:;
  /* 100a78b7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100a78ba push eax */
  push32((uint32_t)(EAX));
  /* 100a78bb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a78be push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 100a78c1 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 100a78c4 call 0x100a7983 */
  push32(0x100a78c9u); f_100a7983();
  /* 100a78c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a78cc:;
  /* 100a78cc test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 100a78d0 je 0x100a78e4 */
  if (C.zf) goto L_100a78e4;
  /* 100a78d2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100a78d5 push eax */
  push32((uint32_t)(EAX));
  /* 100a78d6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a78d9 push esi */
  push32((uint32_t)(ESI));
  /* 100a78da push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100a78dc call 0x100a7952 */
  push32(0x100a78e1u); f_100a7952();
  /* 100a78e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a78e4:;
  /* 100a78e4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100a78e7 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100a78e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100a78ea test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100a78ec mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 100a78ef jne 0x100a7208 */
  if (!C.zf) goto L_100a7208;
L_100a78f5:;
  /* 100a78f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 100a78f8 pop edi */
  EDI = (pop32());
  /* 100a78f9 pop esi */
  ESI = (pop32());
  /* 100a78fa pop ebx */
  EBX = (pop32());
  /* 100a78fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a78fc ret  */
  ESPCHK(0x100a71dcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000791d @ 0x100a791d (53 bytes, 25 insns) */
void f_100a791d(void) {
  FTRACE(0x100a791du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a791d push ebp */
  push32((uint32_t)(EBP));
  /* 100a791e mov ebp, esp */
  EBP = (ESP);
  /* 100a7920 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a7923 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 100a7926 js 0x100a7936 */
  if (C.sf) goto L_100a7936;
  /* 100a7928 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 100a792a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 100a792d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 100a792f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100a7931 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 100a7934 jmp 0x100a7941 */
  goto L_100a7941;
L_100a7936:;
  /* 100a7936 push ecx */
  push32((uint32_t)(ECX));
  /* 100a7937 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a793a call 0x100a70c4 */
  push32(0x100a793fu); f_100a70c4();
  /* 100a793f pop ecx */
  ECX = (pop32());
  /* 100a7940 pop ecx */
  ECX = (pop32());
L_100a7941:;
  /* 100a7941 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7944 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100a7947 jne 0x100a794e */
  if (!C.zf) goto L_100a794e;
  /* 100a7949 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100a794c pop ebp */
  EBP = (pop32());
  /* 100a794d ret  */
  ESPCHK(0x100a791du, _esp0);
  ESP += 4; return;
L_100a794e:;
  /* 100a794e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 100a7950 pop ebp */
  EBP = (pop32());
  /* 100a7951 ret  */
  ESPCHK(0x100a791du, _esp0);
  ESP += 4; return;
}

/* FUN_10007952 @ 0x100a7952 (49 bytes, 22 insns) */
void f_100a7952(void) {
  FTRACE(0x100a7952u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7952 push esi */
  push32((uint32_t)(ESI));
  /* 100a7953 push edi */
  push32((uint32_t)(EDI));
  /* 100a7954 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100a7958 mov eax, edi */
  EAX = (EDI);
  /* 100a795a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100a795b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a795d jle 0x100a7980 */
  if ((C.zf||C.sf!=C.of)) goto L_100a7980;
  /* 100a795f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_100a7963:;
  /* 100a7963 push esi */
  push32((uint32_t)(ESI));
  /* 100a7964 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100a7968 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 100a796c call 0x100a791d */
  push32(0x100a7971u); f_100a791d();
  /* 100a7971 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7974 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7977 je 0x100a7980 */
  if (C.zf) goto L_100a7980;
  /* 100a7979 mov eax, edi */
  EAX = (EDI);
  /* 100a797b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100a797c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a797e jg 0x100a7963 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a7963;
L_100a7980:;
  /* 100a7980 pop edi */
  EDI = (pop32());
  /* 100a7981 pop esi */
  ESI = (pop32());
  /* 100a7982 ret  */
  ESPCHK(0x100a7952u, _esp0);
  ESP += 4; return;
}

/* FUN_10007983 @ 0x100a7983 (56 bytes, 27 insns) */
void f_100a7983(void) {
  FTRACE(0x100a7983u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7983 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7984 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 100a7988 mov eax, ebx */
  EAX = (EBX);
  /* 100a798a dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100a798b push esi */
  push32((uint32_t)(ESI));
  /* 100a798c push edi */
  push32((uint32_t)(EDI));
  /* 100a798d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a798f jle 0x100a79b7 */
  if ((C.zf||C.sf!=C.of)) goto L_100a79b7;
  /* 100a7991 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 100a7995 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_100a7999:;
  /* 100a7999 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100a799c push edi */
  push32((uint32_t)(EDI));
  /* 100a799d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100a799e push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 100a79a2 push eax */
  push32((uint32_t)(EAX));
  /* 100a79a3 call 0x100a791d */
  push32(0x100a79a8u); f_100a791d();
  /* 100a79a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a79ab cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a79ae je 0x100a79b7 */
  if (C.zf) goto L_100a79b7;
  /* 100a79b0 mov eax, ebx */
  EAX = (EBX);
  /* 100a79b2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100a79b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a79b5 jg 0x100a7999 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a7999;
L_100a79b7:;
  /* 100a79b7 pop edi */
  EDI = (pop32());
  /* 100a79b8 pop esi */
  ESI = (pop32());
  /* 100a79b9 pop ebx */
  EBX = (pop32());
  /* 100a79ba ret  */
  ESPCHK(0x100a7983u, _esp0);
  ESP += 4; return;
}

/* FUN_100079bb @ 0x100a79bb (13 bytes, 5 insns) */
void f_100a79bb(void) {
  FTRACE(0x100a79bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a79bb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a79bf add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100a79c2 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100a79c4 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 100a79c7 ret  */
  ESPCHK(0x100a79bbu, _esp0);
  ESP += 4; return;
}

/* FUN_100079c8 @ 0x100a79c8 (16 bytes, 6 insns) */
void f_100a79c8(void) {
  FTRACE(0x100a79c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a79c8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a79cc add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100a79cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100a79d1 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 100a79d4 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 100a79d7 ret  */
  ESPCHK(0x100a79c8u, _esp0);
  ESP += 4; return;
}

/* FUN_100079d8 @ 0x100a79d8 (14 bytes, 5 insns) */
void f_100a79d8(void) {
  FTRACE(0x100a79d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a79d8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a79dc add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100a79df mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100a79e1 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 100a79e5 ret  */
  ESPCHK(0x100a79d8u, _esp0);
  ESP += 4; return;
}

/* FUN_100079e6 @ 0x100a79e6 (18 bytes, 6 insns) */
void f_100a79e6(void) {
  FTRACE(0x100a79e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a79e6 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 100a79eb push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 100a79f0 call 0x100a927a */
  push32(0x100a79f5u); f_100a927a();
  /* 100a79f5 pop ecx */
  ECX = (pop32());
  /* 100a79f6 pop ecx */
  ECX = (pop32());
  /* 100a79f7 ret  */
  ESPCHK(0x100a79e6u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f8 @ 0x100a79f8 (62 bytes, 24 insns) */
void f_100a79f8(void) {
  FTRACE(0x100a79f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a79f8 push ebp */
  push32((uint32_t)(EBP));
  /* 100a79f9 mov ebp, esp */
  EBP = (ESP);
  /* 100a79fb sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a79fe fld qword ptr [0x100ae170] */
  fpu_push(rf64((uint32_t)(0x100ae170)));
  /* 100a7a04 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 100a7a07 fld qword ptr [0x100ae168] */
  fpu_push(rf64((uint32_t)(0x100ae168)));
  /* 100a7a0d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 100a7a10 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 100a7a13 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 100a7a16 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 100a7a19 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 100a7a1c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 100a7a1f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 100a7a22 fcomp qword ptr [0x100ae160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x100ae160)));
  (void)fpu_pop();
  /* 100a7a28 fnstsw ax */
  AX = fpu_status();
  /* 100a7a2a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 100a7a2b jbe 0x100a7a32 */
  if ((C.cf||C.zf)) goto L_100a7a32;
  /* 100a7a2d push 1 */
  push32((uint32_t)(0x1u));
  /* 100a7a2f pop eax */
  EAX = (pop32());
  /* 100a7a30 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a7a31 ret  */
  ESPCHK(0x100a79f8u, _esp0);
  ESP += 4; return;
L_100a7a32:;
  /* 100a7a32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a7a34 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a7a35 ret  */
  ESPCHK(0x100a79f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a36 @ 0x100a7a36 (41 bytes, 13 insns) */
void f_100a7a36(void) {
  FTRACE(0x100a7a36u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7a36 push 0x100ae194 */
  push32((uint32_t)(0x100ae194u));
  /* 100a7a3b call dword ptr [0x100ae004] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae004))), 0x100a7a41u);
  /* 100a7a41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a7a43 je 0x100a7a5a */
  if (C.zf) goto L_100a7a5a;
  /* 100a7a45 push 0x100ae178 */
  push32((uint32_t)(0x100ae178u));
  /* 100a7a4a push eax */
  push32((uint32_t)(EAX));
  /* 100a7a4b call dword ptr [0x100ae088] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae088))), 0x100a7a51u);
  /* 100a7a51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a7a53 je 0x100a7a5a */
  if (C.zf) goto L_100a7a5a;
  /* 100a7a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a7a57 call eax */
  call_ind((uint32_t)(EAX), 0x100a7a59u);
  /* 100a7a59 ret  */
  ESPCHK(0x100a7a36u, _esp0);
  ESP += 4; return;
L_100a7a5a:;
  /* 100a7a5a jmp 0x100a79f8 */
  f_100a79f8(); return;
}

/* FUN_10007a5f @ 0x100a7a5f (90 bytes, 37 insns) */
void f_100a7a5f(void) {
  FTRACE(0x100a7a5fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7a5f push esi */
  push32((uint32_t)(ESI));
  /* 100a7a60 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100a7a64 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100a7a67 push eax */
  push32((uint32_t)(EAX));
  /* 100a7a68 call 0x100a9420 */
  push32(0x100a7a6du); f_100a9420();
  /* 100a7a6d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7a70 pop ecx */
  ECX = (pop32());
  /* 100a7a71 je 0x100a7a9f */
  if (C.zf) goto L_100a7a9f;
L_100a7a73:;
  /* 100a7a73 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100a7a74 cmp dword ptr [0x100b0bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100b0bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7a7b jle 0x100a7a8c */
  if ((C.zf||C.sf!=C.of)) goto L_100a7a8c;
  /* 100a7a7d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100a7a80 push 4 */
  push32((uint32_t)(0x4u));
  /* 100a7a82 push eax */
  push32((uint32_t)(EAX));
  /* 100a7a83 call 0x100a93ab */
  push32(0x100a7a88u); f_100a93ab();
  /* 100a7a88 pop ecx */
  ECX = (pop32());
  /* 100a7a89 pop ecx */
  ECX = (pop32());
  /* 100a7a8a jmp 0x100a7a9b */
  goto L_100a7a9b;
L_100a7a8c:;
  /* 100a7a8c movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100a7a8f mov ecx, dword ptr [0x100b09c0] */
  ECX = (r32((uint32_t)(0x100b09c0)));
  /* 100a7a95 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100a7a98 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_100a7a9b:;
  /* 100a7a9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a7a9d jne 0x100a7a73 */
  if (!C.zf) goto L_100a7a73;
L_100a7a9f:;
  /* 100a7a9f mov cl, byte ptr [0x100b0bd4] */
  CL = (r8((uint32_t)(0x100b0bd4)));
  /* 100a7aa5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100a7aa7 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 100a7aa9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100a7aaa:;
  /* 100a7aaa mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 100a7aac mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 100a7aae mov al, cl */
  AL = (CL);
  /* 100a7ab0 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 100a7ab2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100a7ab3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 100a7ab5 jne 0x100a7aaa */
  if (!C.zf) goto L_100a7aaa;
  /* 100a7ab7 pop esi */
  ESI = (pop32());
  /* 100a7ab8 ret  */
  ESPCHK(0x100a7a5fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x100a7b1f (62 bytes, 29 insns) */
void f_100a7b1f(void) {
  FTRACE(0x100a7b1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7b1f push ebp */
  push32((uint32_t)(EBP));
  /* 100a7b20 mov ebp, esp */
  EBP = (ESP);
  /* 100a7b22 push ecx */
  push32((uint32_t)(ECX));
  /* 100a7b23 push ecx */
  push32((uint32_t)(ECX));
  /* 100a7b24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7b28 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100a7b2b je 0x100a7b48 */
  if (C.zf) goto L_100a7b48;
  /* 100a7b2d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 100a7b30 push eax */
  push32((uint32_t)(EAX));
  /* 100a7b31 call 0x100a98ec */
  push32(0x100a7b36u); f_100a98ec();
  /* 100a7b36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a7b39 pop ecx */
  ECX = (pop32());
  /* 100a7b3a pop ecx */
  ECX = (pop32());
  /* 100a7b3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 100a7b3e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100a7b40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100a7b43 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100a7b46 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a7b47 ret  */
  ESPCHK(0x100a7b1fu, _esp0);
  ESP += 4; return;
L_100a7b48:;
  /* 100a7b48 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100a7b4b push eax */
  push32((uint32_t)(EAX));
  /* 100a7b4c call 0x100a9919 */
  push32(0x100a7b51u); f_100a9919();
  /* 100a7b51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a7b54 pop ecx */
  ECX = (pop32());
  /* 100a7b55 pop ecx */
  ECX = (pop32());
  /* 100a7b56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100a7b59 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100a7b5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a7b5c ret  */
  ESPCHK(0x100a7b1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b5d @ 0x100a7b5d (97 bytes, 42 insns) */
void f_100a7b5d(void) {
  FTRACE(0x100a7b5du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7b5d push ebp */
  push32((uint32_t)(EBP));
  /* 100a7b5e mov ebp, esp */
  EBP = (ESP);
  /* 100a7b60 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a7b63 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100a7b66 push esi */
  push32((uint32_t)(ESI));
  /* 100a7b67 push eax */
  push32((uint32_t)(EAX));
  /* 100a7b68 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100a7b6b push eax */
  push32((uint32_t)(EAX));
  /* 100a7b6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a7b6f push ecx */
  push32((uint32_t)(ECX));
  /* 100a7b70 push ecx */
  push32((uint32_t)(ECX));
  /* 100a7b71 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 100a7b73 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 100a7b76 call 0x100a99bd */
  push32(0x100a7b7bu); f_100a99bd();
  /* 100a7b7b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100a7b7e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100a7b81 push eax */
  push32((uint32_t)(EAX));
  /* 100a7b82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a7b85 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 100a7b88 push eax */
  push32((uint32_t)(EAX));
  /* 100a7b89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a7b8b cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7b8f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100a7b92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100a7b94 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a7b96 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 100a7b99 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7b9b add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7b9d push ecx */
  push32((uint32_t)(ECX));
  /* 100a7b9e call 0x100a9946 */
  push32(0x100a7ba3u); f_100a9946();
  /* 100a7ba3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100a7ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a7ba8 push eax */
  push32((uint32_t)(EAX));
  /* 100a7ba9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100a7bac push esi */
  push32((uint32_t)(ESI));
  /* 100a7bad push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a7bb0 call 0x100a7bbe */
  push32(0x100a7bb5u); f_100a7bbe();
  /* 100a7bb5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a7bb8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7bbb pop esi */
  ESI = (pop32());
  /* 100a7bbc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a7bbd ret  */
  ESPCHK(0x100a7b5du, _esp0);
  ESP += 4; return;
}

/* FUN_10007bbe @ 0x100a7bbe (194 bytes, 91 insns) */
void f_100a7bbe(void) {
  FTRACE(0x100a7bbeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7bbe push ebp */
  push32((uint32_t)(EBP));
  /* 100a7bbf mov ebp, esp */
  EBP = (ESP);
  /* 100a7bc1 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7bc2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100a7bc4 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a7bc7 push esi */
  push32((uint32_t)(ESI));
  /* 100a7bc8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 100a7bcb push edi */
  push32((uint32_t)(EDI));
  /* 100a7bcc mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100a7bcf je 0x100a7bec */
  if (C.zf) goto L_100a7bec;
  /* 100a7bd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a7bd3 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7bd6 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 100a7bd9 push eax */
  push32((uint32_t)(EAX));
  /* 100a7bda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a7bdc cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7bdf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100a7be2 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7be4 push eax */
  push32((uint32_t)(EAX));
  /* 100a7be5 call 0x100a7e60 */
  push32(0x100a7beau); f_100a7e60();
  /* 100a7bea pop ecx */
  ECX = (pop32());
  /* 100a7beb pop ecx */
  ECX = (pop32());
L_100a7bec:;
  /* 100a7bec cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7bef mov eax, edi */
  EAX = (EDI);
  /* 100a7bf1 jne 0x100a7bf9 */
  if (!C.zf) goto L_100a7bf9;
  /* 100a7bf3 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 100a7bf6 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_100a7bf9:;
  /* 100a7bf9 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7bfc jle 0x100a7c10 */
  if ((C.zf||C.sf!=C.of)) goto L_100a7c10;
  /* 100a7bfe mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 100a7c01 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100a7c04 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 100a7c06 mov eax, ecx */
  EAX = (ECX);
  /* 100a7c08 mov cl, byte ptr [0x100b0bd4] */
  CL = (r8((uint32_t)(0x100b0bd4)));
  /* 100a7c0e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_100a7c10:;
  /* 100a7c10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100a7c12 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a7c15 push 0x100ae1a8 */
  push32((uint32_t)(0x100ae1a8u));
  /* 100a7c1a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 100a7c1d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7c1f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7c22 push ecx */
  push32((uint32_t)(ECX));
  /* 100a7c23 call 0x100a9ad0 */
  push32(0x100a7c28u); f_100a9ad0();
  /* 100a7c28 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7c2b pop ecx */
  ECX = (pop32());
  /* 100a7c2c pop ecx */
  ECX = (pop32());
  /* 100a7c2d mov ecx, eax */
  ECX = (EAX);
  /* 100a7c2f je 0x100a7c34 */
  if (C.zf) goto L_100a7c34;
  /* 100a7c31 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_100a7c34:;
  /* 100a7c34 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100a7c37 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100a7c38 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a7c3b je 0x100a7c79 */
  if (C.zf) goto L_100a7c79;
  /* 100a7c3d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 100a7c40 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100a7c41 jns 0x100a7c48 */
  if (!C.sf) goto L_100a7c48;
  /* 100a7c43 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 100a7c45 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_100a7c48:;
  /* 100a7c48 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100a7c49 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7c4c jl 0x100a7c5f */
  if ((C.sf!=C.of)) goto L_100a7c5f;
  /* 100a7c4e mov eax, ebx */
  EAX = (EBX);
  /* 100a7c50 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100a7c52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a7c53 pop esi */
  ESI = (pop32());
  /* 100a7c54 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a7c56 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 100a7c58 mov eax, ebx */
  EAX = (EBX);
  /* 100a7c5a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a7c5b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a7c5d mov ebx, edx */
  EBX = (EDX);
L_100a7c5f:;
  /* 100a7c5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100a7c60 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7c63 jl 0x100a7c76 */
  if ((C.sf!=C.of)) goto L_100a7c76;
  /* 100a7c65 mov eax, ebx */
  EAX = (EBX);
  /* 100a7c67 push 0xa */
  push32((uint32_t)(0xau));
  /* 100a7c69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a7c6a pop esi */
  ESI = (pop32());
  /* 100a7c6b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a7c6d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 100a7c6f mov eax, ebx */
  EAX = (EBX);
  /* 100a7c71 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a7c72 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a7c74 mov ebx, edx */
  EBX = (EDX);
L_100a7c76:;
  /* 100a7c76 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_100a7c79:;
  /* 100a7c79 mov eax, edi */
  EAX = (EDI);
  /* 100a7c7b pop edi */
  EDI = (pop32());
  /* 100a7c7c pop esi */
  ESI = (pop32());
  /* 100a7c7d pop ebx */
  EBX = (pop32());
  /* 100a7c7e pop ebp */
  EBP = (pop32());
  /* 100a7c7f ret  */
  ESPCHK(0x100a7bbeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007c80 @ 0x100a7c80 (85 bytes, 37 insns) */
void f_100a7c80(void) {
  FTRACE(0x100a7c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7c80 push ebp */
  push32((uint32_t)(EBP));
  /* 100a7c81 mov ebp, esp */
  EBP = (ESP);
  /* 100a7c83 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a7c86 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100a7c89 push esi */
  push32((uint32_t)(ESI));
  /* 100a7c8a push eax */
  push32((uint32_t)(EAX));
  /* 100a7c8b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100a7c8e push eax */
  push32((uint32_t)(EAX));
  /* 100a7c8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a7c92 push ecx */
  push32((uint32_t)(ECX));
  /* 100a7c93 push ecx */
  push32((uint32_t)(ECX));
  /* 100a7c94 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 100a7c96 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 100a7c99 call 0x100a99bd */
  push32(0x100a7c9eu); f_100a99bd();
  /* 100a7c9e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100a7ca1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100a7ca4 push eax */
  push32((uint32_t)(EAX));
  /* 100a7ca5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100a7ca8 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7caa push eax */
  push32((uint32_t)(EAX));
  /* 100a7cab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a7cad cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7cb1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100a7cb4 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7cb7 push eax */
  push32((uint32_t)(EAX));
  /* 100a7cb8 call 0x100a9946 */
  push32(0x100a7cbdu); f_100a9946();
  /* 100a7cbd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100a7cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a7cc2 push eax */
  push32((uint32_t)(EAX));
  /* 100a7cc3 push esi */
  push32((uint32_t)(ESI));
  /* 100a7cc4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a7cc7 call 0x100a7cd5 */
  push32(0x100a7cccu); f_100a7cd5();
  /* 100a7ccc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a7ccf add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7cd2 pop esi */
  ESI = (pop32());
  /* 100a7cd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a7cd4 ret  */
  ESPCHK(0x100a7c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cd5 @ 0x100a7cd5 (167 bytes, 73 insns) */
void f_100a7cd5(void) {
  FTRACE(0x100a7cd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7cd5 push ebp */
  push32((uint32_t)(EBP));
  /* 100a7cd6 mov ebp, esp */
  EBP = (ESP);
  /* 100a7cd8 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7cd9 push esi */
  push32((uint32_t)(ESI));
  /* 100a7cda mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100a7cdd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a7ce0 push edi */
  push32((uint32_t)(EDI));
  /* 100a7ce1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100a7ce4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a7ce5 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a7ce9 je 0x100a7d05 */
  if (C.zf) goto L_100a7d05;
  /* 100a7ceb cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7cee jne 0x100a7d05 */
  if (!C.zf) goto L_100a7d05;
  /* 100a7cf0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100a7cf2 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7cf5 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 100a7cf8 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7cfa add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7cfc mov eax, ecx */
  EAX = (ECX);
  /* 100a7cfe mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 100a7d01 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_100a7d05:;
  /* 100a7d05 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7d08 mov edi, ebx */
  EDI = (EBX);
  /* 100a7d0a jne 0x100a7d12 */
  if (!C.zf) goto L_100a7d12;
  /* 100a7d0c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 100a7d0f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_100a7d12:;
  /* 100a7d12 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100a7d15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a7d17 jg 0x100a7d29 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a7d29;
  /* 100a7d19 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a7d1b push edi */
  push32((uint32_t)(EDI));
  /* 100a7d1c call 0x100a7e60 */
  push32(0x100a7d21u); f_100a7e60();
  /* 100a7d21 pop ecx */
  ECX = (pop32());
  /* 100a7d22 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 100a7d25 pop ecx */
  ECX = (pop32());
  /* 100a7d26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100a7d27 jmp 0x100a7d2b */
  goto L_100a7d2b;
L_100a7d29:;
  /* 100a7d29 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100a7d2b:;
  /* 100a7d2b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7d2f jle 0x100a7d75 */
  if ((C.zf||C.sf!=C.of)) goto L_100a7d75;
  /* 100a7d31 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a7d33 push edi */
  push32((uint32_t)(EDI));
  /* 100a7d34 call 0x100a7e60 */
  push32(0x100a7d39u); f_100a7e60();
  /* 100a7d39 mov al, byte ptr [0x100b0bd4] */
  AL = (r8((uint32_t)(0x100b0bd4)));
  /* 100a7d3e pop ecx */
  ECX = (pop32());
  /* 100a7d3f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100a7d41 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 100a7d44 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100a7d45 pop ecx */
  ECX = (pop32());
  /* 100a7d46 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a7d48 jge 0x100a7d75 */
  if ((C.sf==C.of)) goto L_100a7d75;
  /* 100a7d4a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a7d4e je 0x100a7d54 */
  if (C.zf) goto L_100a7d54;
  /* 100a7d50 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 100a7d52 jmp 0x100a7d5b */
  goto L_100a7d5b;
L_100a7d54:;
  /* 100a7d54 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 100a7d56 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7d59 jl 0x100a7d5e */
  if ((C.sf!=C.of)) goto L_100a7d5e;
L_100a7d5b:;
  /* 100a7d5b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_100a7d5e:;
  /* 100a7d5e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a7d61 push edi */
  push32((uint32_t)(EDI));
  /* 100a7d62 call 0x100a7e60 */
  push32(0x100a7d67u); f_100a7e60();
  /* 100a7d67 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a7d6a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 100a7d6c push edi */
  push32((uint32_t)(EDI));
  /* 100a7d6d call 0x100a9bc0 */
  push32(0x100a7d72u); f_100a9bc0();
  /* 100a7d72 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a7d75:;
  /* 100a7d75 pop edi */
  EDI = (pop32());
  /* 100a7d76 mov eax, ebx */
  EAX = (EBX);
  /* 100a7d78 pop esi */
  ESI = (pop32());
  /* 100a7d79 pop ebx */
  EBX = (pop32());
  /* 100a7d7a pop ebp */
  EBP = (pop32());
  /* 100a7d7b ret  */
  ESPCHK(0x100a7cd5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d7c @ 0x100a7d7c (147 bytes, 66 insns) */
void f_100a7d7c(void) {
  FTRACE(0x100a7d7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7d7c push ebp */
  push32((uint32_t)(EBP));
  /* 100a7d7d mov ebp, esp */
  EBP = (ESP);
  /* 100a7d7f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a7d82 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7d83 push esi */
  push32((uint32_t)(ESI));
  /* 100a7d84 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100a7d87 push edi */
  push32((uint32_t)(EDI));
  /* 100a7d88 push eax */
  push32((uint32_t)(EAX));
  /* 100a7d89 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100a7d8c push eax */
  push32((uint32_t)(EAX));
  /* 100a7d8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a7d90 push ecx */
  push32((uint32_t)(ECX));
  /* 100a7d91 push ecx */
  push32((uint32_t)(ECX));
  /* 100a7d92 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 100a7d94 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 100a7d97 call 0x100a99bd */
  push32(0x100a7d9cu); f_100a99bd();
  /* 100a7d9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100a7d9f mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 100a7da2 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 100a7da5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a7da7 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7dab sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100a7dae add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7db1 mov edi, eax */
  EDI = (EAX);
  /* 100a7db3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100a7db6 push eax */
  push32((uint32_t)(EAX));
  /* 100a7db7 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7db8 push edi */
  push32((uint32_t)(EDI));
  /* 100a7db9 call 0x100a9946 */
  push32(0x100a7dbeu); f_100a9946();
  /* 100a7dbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100a7dc1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7dc4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a7dc5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7dc7 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 100a7dca cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7dcd jl 0x100a7df5 */
  if ((C.sf!=C.of)) goto L_100a7df5;
  /* 100a7dcf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7dd1 jge 0x100a7df5 */
  if ((C.sf==C.of)) goto L_100a7df5;
  /* 100a7dd3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 100a7dd5 je 0x100a7de1 */
  if (C.zf) goto L_100a7de1;
L_100a7dd7:;
  /* 100a7dd7 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 100a7dd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100a7dda test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a7ddc jne 0x100a7dd7 */
  if (!C.zf) goto L_100a7dd7;
  /* 100a7dde and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_100a7de1:;
  /* 100a7de1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100a7de4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a7de6 push eax */
  push32((uint32_t)(EAX));
  /* 100a7de7 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7de8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a7deb call 0x100a7cd5 */
  push32(0x100a7df0u); f_100a7cd5();
  /* 100a7df0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7df3 jmp 0x100a7e0a */
  goto L_100a7e0a;
L_100a7df5:;
  /* 100a7df5 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100a7df8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a7dfa push eax */
  push32((uint32_t)(EAX));
  /* 100a7dfb push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100a7dfe push ebx */
  push32((uint32_t)(EBX));
  /* 100a7dff push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a7e02 call 0x100a7bbe */
  push32(0x100a7e07u); f_100a7bbe();
  /* 100a7e07 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a7e0a:;
  /* 100a7e0a pop edi */
  EDI = (pop32());
  /* 100a7e0b pop esi */
  ESI = (pop32());
  /* 100a7e0c pop ebx */
  EBX = (pop32());
  /* 100a7e0d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a7e0e ret  */
  ESPCHK(0x100a7d7cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x100a7e0f (81 bytes, 29 insns) */
void f_100a7e0f(void) {
  FTRACE(0x100a7e0fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7e0f push ebp */
  push32((uint32_t)(EBP));
  /* 100a7e10 mov ebp, esp */
  EBP = (ESP);
  /* 100a7e12 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7e16 je 0x100a7e4a */
  if (C.zf) goto L_100a7e4a;
  /* 100a7e18 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7e1c je 0x100a7e4a */
  if (C.zf) goto L_100a7e4a;
  /* 100a7e1e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7e22 jne 0x100a7e37 */
  if (!C.zf) goto L_100a7e37;
  /* 100a7e24 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100a7e27 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a7e2a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a7e2d call 0x100a7c80 */
  push32(0x100a7e32u); f_100a7c80();
  /* 100a7e32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7e35 pop ebp */
  EBP = (pop32());
  /* 100a7e36 ret  */
  ESPCHK(0x100a7e0fu, _esp0);
  ESP += 4; return;
L_100a7e37:;
  /* 100a7e37 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100a7e3a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100a7e3d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a7e40 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a7e43 call 0x100a7d7c */
  push32(0x100a7e48u); f_100a7d7c();
  /* 100a7e48 jmp 0x100a7e5b */
  goto L_100a7e5b;
L_100a7e4a:;
  /* 100a7e4a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100a7e4d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100a7e50 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a7e53 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a7e56 call 0x100a7b5d */
  push32(0x100a7e5bu); f_100a7b5d();
L_100a7e5b:;
  /* 100a7e5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7e5e pop ebp */
  EBP = (pop32());
  /* 100a7e5f ret  */
  ESPCHK(0x100a7e0fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007e60 @ 0x100a7e60 (37 bytes, 18 insns) */
void f_100a7e60(void) {
  FTRACE(0x100a7e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7e60 push edi */
  push32((uint32_t)(EDI));
  /* 100a7e61 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 100a7e65 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100a7e67 je 0x100a7e83 */
  if (C.zf) goto L_100a7e83;
  /* 100a7e69 push esi */
  push32((uint32_t)(ESI));
  /* 100a7e6a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 100a7e6e push esi */
  push32((uint32_t)(ESI));
  /* 100a7e6f call 0x100a9020 */
  push32(0x100a7e74u); f_100a9020();
  /* 100a7e74 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a7e75 push eax */
  push32((uint32_t)(EAX));
  /* 100a7e76 push esi */
  push32((uint32_t)(ESI));
  /* 100a7e77 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7e79 push esi */
  push32((uint32_t)(ESI));
  /* 100a7e7a call 0x100a9c20 */
  push32(0x100a7e7fu); f_100a9c20();
  /* 100a7e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7e82 pop esi */
  ESI = (pop32());
L_100a7e83:;
  /* 100a7e83 pop edi */
  EDI = (pop32());
  /* 100a7e84 ret  */
  ESPCHK(0x100a7e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e85 @ 0x100a7e85 (45 bytes, 12 insns) */
void f_100a7e85(void) {
  FTRACE(0x100a7e85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7e85 mov eax, dword ptr [0x100b064c] */
  EAX = (r32((uint32_t)(0x100b064c)));
  /* 100a7e8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a7e8c je 0x100a7e90 */
  if (C.zf) goto L_100a7e90;
  /* 100a7e8e call eax */
  call_ind((uint32_t)(EAX), 0x100a7e90u);
L_100a7e90:;
  /* 100a7e90 push 0x100af014 */
  push32((uint32_t)(0x100af014u));
  /* 100a7e95 push 0x100af008 */
  push32((uint32_t)(0x100af008u));
  /* 100a7e9a call 0x100a7f89 */
  push32(0x100a7e9fu); f_100a7f89();
  /* 100a7e9f push 0x100af004 */
  push32((uint32_t)(0x100af004u));
  /* 100a7ea4 push 0x100af000 */
  push32((uint32_t)(0x100af000u));
  /* 100a7ea9 call 0x100a7f89 */
  push32(0x100a7eaeu); f_100a7f89();
  /* 100a7eae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7eb1 ret  */
  ESPCHK(0x100a7e85u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x100a7eb2 (17 bytes, 6 insns) */
void f_100a7eb2(void) {
  FTRACE(0x100a7eb2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a7eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a7eb6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100a7eba call 0x100a7ed2 */
  push32(0x100a7ebfu); f_100a7ed2();
  /* 100a7ebf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7ec2 ret  */
  ESPCHK(0x100a7eb2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec3 @ 0x100a7ec3 (15 bytes, 6 insns) */
void f_100a7ec3(void) {
  FTRACE(0x100a7ec3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a7ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a7ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a7ec9 call 0x100a7ed2 */
  push32(0x100a7eceu); f_100a7ed2();
  /* 100a7ece add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7ed1 ret  */
  ESPCHK(0x100a7ec3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ed2 @ 0x100a7ed2 (163 bytes, 53 insns) */
void f_100a7ed2(void) {
  FTRACE(0x100a7ed2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7ed2 push edi */
  push32((uint32_t)(EDI));
  /* 100a7ed3 call 0x100a7f77 */
  push32(0x100a7ed8u); f_100a7f77();
  /* 100a7ed8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a7eda pop edi */
  EDI = (pop32());
  /* 100a7edb cmp dword ptr [0x100b6688], edi */
  { uint32_t _a=(r32((uint32_t)(0x100b6688))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7ee1 jne 0x100a7ef4 */
  if (!C.zf) goto L_100a7ef4;
  /* 100a7ee3 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100a7ee7 call dword ptr [0x100ae020] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae020))), 0x100a7eedu);
  /* 100a7eed push eax */
  push32((uint32_t)(EAX));
  /* 100a7eee call dword ptr [0x100ae01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae01c))), 0x100a7ef4u);
L_100a7ef4:;
  /* 100a7ef4 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7ef9 push ebx */
  push32((uint32_t)(EBX));
  /* 100a7efa mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100a7efe mov dword ptr [0x100b6684], edi */
  w32((uint32_t)(0x100b6684), (EDI));
  /* 100a7f04 mov byte ptr [0x100b6680], bl */
  w8((uint32_t)(0x100b6680), (BL));
  /* 100a7f0a jne 0x100a7f48 */
  if (!C.zf) goto L_100a7f48;
  /* 100a7f0c mov eax, dword ptr [0x100b7d30] */
  EAX = (r32((uint32_t)(0x100b7d30)));
  /* 100a7f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a7f13 je 0x100a7f37 */
  if (C.zf) goto L_100a7f37;
  /* 100a7f15 mov ecx, dword ptr [0x100b7d2c] */
  ECX = (r32((uint32_t)(0x100b7d2c)));
  /* 100a7f1b push esi */
  push32((uint32_t)(ESI));
  /* 100a7f1c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 100a7f1f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7f21 jb 0x100a7f36 */
  if (C.cf) goto L_100a7f36;
L_100a7f23:;
  /* 100a7f23 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100a7f25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a7f27 je 0x100a7f2b */
  if (C.zf) goto L_100a7f2b;
  /* 100a7f29 call eax */
  call_ind((uint32_t)(EAX), 0x100a7f2bu);
L_100a7f2b:;
  /* 100a7f2b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a7f2e cmp esi, dword ptr [0x100b7d30] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100b7d30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7f34 jae 0x100a7f23 */
  if (!C.cf) goto L_100a7f23;
L_100a7f36:;
  /* 100a7f36 pop esi */
  ESI = (pop32());
L_100a7f37:;
  /* 100a7f37 push 0x100af020 */
  push32((uint32_t)(0x100af020u));
  /* 100a7f3c push 0x100af018 */
  push32((uint32_t)(0x100af018u));
  /* 100a7f41 call 0x100a7f89 */
  push32(0x100a7f46u); f_100a7f89();
  /* 100a7f46 pop ecx */
  ECX = (pop32());
  /* 100a7f47 pop ecx */
  ECX = (pop32());
L_100a7f48:;
  /* 100a7f48 push 0x100af028 */
  push32((uint32_t)(0x100af028u));
  /* 100a7f4d push 0x100af024 */
  push32((uint32_t)(0x100af024u));
  /* 100a7f52 call 0x100a7f89 */
  push32(0x100a7f57u); f_100a7f89();
  /* 100a7f57 pop ecx */
  ECX = (pop32());
  /* 100a7f58 pop ecx */
  ECX = (pop32());
  /* 100a7f59 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100a7f5b pop ebx */
  EBX = (pop32());
  /* 100a7f5c je 0x100a7f65 */
  if (C.zf) goto L_100a7f65;
  /* 100a7f5e call 0x100a7f80 */
  push32(0x100a7f63u); f_100a7f80();
  /* 100a7f63 pop edi */
  EDI = (pop32());
  /* 100a7f64 ret  */
  ESPCHK(0x100a7ed2u, _esp0);
  ESP += 4; return;
L_100a7f65:;
  /* 100a7f65 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100a7f69 mov dword ptr [0x100b6688], edi */
  w32((uint32_t)(0x100b6688), (EDI));
  /* 100a7f6f call dword ptr [0x100ae018] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae018))), 0x100a7f75u);
  /* 100a7f75 pop edi */
  EDI = (pop32());
  /* 100a7f76 ret  */
  ESPCHK(0x100a7ed2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f77 @ 0x100a7f77 (9 bytes, 4 insns) */
void f_100a7f77(void) {
  FTRACE(0x100a7f77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7f77 push 0xd */
  push32((uint32_t)(0xdu));
  /* 100a7f79 call 0x100a9ff3 */
  push32(0x100a7f7eu); f_100a9ff3();
  /* 100a7f7e pop ecx */
  ECX = (pop32());
  /* 100a7f7f ret  */
  ESPCHK(0x100a7f77u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f80 @ 0x100a7f80 (9 bytes, 4 insns) */
void f_100a7f80(void) {
  FTRACE(0x100a7f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7f80 push 0xd */
  push32((uint32_t)(0xdu));
  /* 100a7f82 call 0x100aa054 */
  push32(0x100a7f87u); f_100aa054();
  /* 100a7f87 pop ecx */
  ECX = (pop32());
  /* 100a7f88 ret  */
  ESPCHK(0x100a7f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f89 @ 0x100a7f89 (26 bytes, 12 insns) */
void f_100a7f89(void) {
  FTRACE(0x100a7f89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7f89 push esi */
  push32((uint32_t)(ESI));
  /* 100a7f8a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_100a7f8e:;
  /* 100a7f8e cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7f92 jae 0x100a7fa1 */
  if (!C.cf) goto L_100a7fa1;
  /* 100a7f94 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100a7f96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a7f98 je 0x100a7f9c */
  if (C.zf) goto L_100a7f9c;
  /* 100a7f9a call eax */
  call_ind((uint32_t)(EAX), 0x100a7f9cu);
L_100a7f9c:;
  /* 100a7f9c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a7f9f jmp 0x100a7f8e */
  goto L_100a7f8e;
L_100a7fa1:;
  /* 100a7fa1 pop esi */
  ESI = (pop32());
  /* 100a7fa2 ret  */
  ESPCHK(0x100a7f89u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa3 @ 0x100a7fa3 (84 bytes, 32 insns) */
void f_100a7fa3(void) {
  FTRACE(0x100a7fa3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7fa3 push esi */
  push32((uint32_t)(ESI));
  /* 100a7fa4 call 0x100a9f5e */
  push32(0x100a7fa9u); f_100a9f5e();
  /* 100a7fa9 call dword ptr [0x100ae02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae02c))), 0x100a7fafu);
  /* 100a7faf cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a7fb2 mov dword ptr [0x100b067c], eax */
  w32((uint32_t)(0x100b067c), (EAX));
  /* 100a7fb7 je 0x100a7ff3 */
  if (C.zf) goto L_100a7ff3;
  /* 100a7fb9 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 100a7fbb push 1 */
  push32((uint32_t)(0x1u));
  /* 100a7fbd call 0x100aa069 */
  push32(0x100a7fc2u); f_100aa069();
  /* 100a7fc2 mov esi, eax */
  ESI = (EAX);
  /* 100a7fc4 pop ecx */
  ECX = (pop32());
  /* 100a7fc5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a7fc7 pop ecx */
  ECX = (pop32());
  /* 100a7fc8 je 0x100a7ff3 */
  if (C.zf) goto L_100a7ff3;
  /* 100a7fca push esi */
  push32((uint32_t)(ESI));
  /* 100a7fcb push dword ptr [0x100b067c] */
  push32((uint32_t)(r32((uint32_t)(0x100b067c))));
  /* 100a7fd1 call dword ptr [0x100ae028] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae028))), 0x100a7fd7u);
  /* 100a7fd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a7fd9 je 0x100a7ff3 */
  if (C.zf) goto L_100a7ff3;
  /* 100a7fdb push esi */
  push32((uint32_t)(ESI));
  /* 100a7fdc call 0x100a8015 */
  push32(0x100a7fe1u); f_100a8015();
  /* 100a7fe1 pop ecx */
  ECX = (pop32());
  /* 100a7fe2 call dword ptr [0x100ae024] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae024))), 0x100a7fe8u);
  /* 100a7fe8 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100a7fec push 1 */
  push32((uint32_t)(0x1u));
  /* 100a7fee mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100a7ff0 pop eax */
  EAX = (pop32());
  /* 100a7ff1 pop esi */
  ESI = (pop32());
  /* 100a7ff2 ret  */
  ESPCHK(0x100a7fa3u, _esp0);
  ESP += 4; return;
L_100a7ff3:;
  /* 100a7ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a7ff5 pop esi */
  ESI = (pop32());
  /* 100a7ff6 ret  */
  ESPCHK(0x100a7fa3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ff7 @ 0x100a7ff7 (30 bytes, 8 insns) */
void f_100a7ff7(void) {
  FTRACE(0x100a7ff7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a7ff7 call 0x100a9f87 */
  push32(0x100a7ffcu); f_100a9f87();
  /* 100a7ffc mov eax, dword ptr [0x100b067c] */
  EAX = (r32((uint32_t)(0x100b067c)));
  /* 100a8001 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8004 je 0x100a8014 */
  if (C.zf) goto L_100a8014;
  /* 100a8006 push eax */
  push32((uint32_t)(EAX));
  /* 100a8007 call dword ptr [0x100ae030] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae030))), 0x100a800du);
  /* 100a800d or dword ptr [0x100b067c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x100b067c)))|(0xffffffffu); w32((uint32_t)(0x100b067c), (_r)); fl_logic(_r,32); }
L_100a8014:;
  /* 100a8014 ret  */
  ESPCHK(0x100a7ff7u, _esp0);
  ESP += 4; return;
}

/* FUN_10008015 @ 0x100a8015 (19 bytes, 4 insns) */
void f_100a8015(void) {
  FTRACE(0x100a8015u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8015 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a8019 mov dword ptr [eax + 0x50], 0x100b0cd0 */
  w32((uint32_t)(EAX + 0x50), (0x100b0cd0u));
  /* 100a8020 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 100a8027 ret  */
  ESPCHK(0x100a8015u, _esp0);
  ESP += 4; return;
}

/* FUN_10008028 @ 0x100a8028 (103 bytes, 38 insns) */
void f_100a8028(void) {
  FTRACE(0x100a8028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8028 push esi */
  push32((uint32_t)(ESI));
  /* 100a8029 push edi */
  push32((uint32_t)(EDI));
  /* 100a802a call dword ptr [0x100ae03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae03c))), 0x100a8030u);
  /* 100a8030 push dword ptr [0x100b067c] */
  push32((uint32_t)(r32((uint32_t)(0x100b067c))));
  /* 100a8036 mov edi, eax */
  EDI = (EAX);
  /* 100a8038 call dword ptr [0x100ae038] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae038))), 0x100a803eu);
  /* 100a803e mov esi, eax */
  ESI = (EAX);
  /* 100a8040 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a8042 jne 0x100a8083 */
  if (!C.zf) goto L_100a8083;
  /* 100a8044 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 100a8046 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a8048 call 0x100aa069 */
  push32(0x100a804du); f_100aa069();
  /* 100a804d mov esi, eax */
  ESI = (EAX);
  /* 100a804f pop ecx */
  ECX = (pop32());
  /* 100a8050 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a8052 pop ecx */
  ECX = (pop32());
  /* 100a8053 je 0x100a807b */
  if (C.zf) goto L_100a807b;
  /* 100a8055 push esi */
  push32((uint32_t)(ESI));
  /* 100a8056 push dword ptr [0x100b067c] */
  push32((uint32_t)(r32((uint32_t)(0x100b067c))));
  /* 100a805c call dword ptr [0x100ae028] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae028))), 0x100a8062u);
  /* 100a8062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a8064 je 0x100a807b */
  if (C.zf) goto L_100a807b;
  /* 100a8066 push esi */
  push32((uint32_t)(ESI));
  /* 100a8067 call 0x100a8015 */
  push32(0x100a806cu); f_100a8015();
  /* 100a806c pop ecx */
  ECX = (pop32());
  /* 100a806d call dword ptr [0x100ae024] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae024))), 0x100a8073u);
  /* 100a8073 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100a8077 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100a8079 jmp 0x100a8083 */
  goto L_100a8083;
L_100a807b:;
  /* 100a807b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100a807d call 0x100a7091 */
  push32(0x100a8082u); f_100a7091();
  /* 100a8082 pop ecx */
  ECX = (pop32());
L_100a8083:;
  /* 100a8083 push edi */
  push32((uint32_t)(EDI));
  /* 100a8084 call dword ptr [0x100ae034] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae034))), 0x100a808au);
  /* 100a808a mov eax, esi */
  EAX = (ESI);
  /* 100a808c pop edi */
  EDI = (pop32());
  /* 100a808d pop esi */
  ESI = (pop32());
  /* 100a808e ret  */
  ESPCHK(0x100a8028u, _esp0);
  ESP += 4; return;
}

/* FUN_1000808f @ 0x100a808f (160 bytes, 62 insns) */
void f_100a808f(void) {
  FTRACE(0x100a808fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a808f mov eax, dword ptr [0x100b067c] */
  EAX = (r32((uint32_t)(0x100b067c)));
  /* 100a8094 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8097 je 0x100a812e */
  if (C.zf) goto L_100a812e;
  /* 100a809d push esi */
  push32((uint32_t)(ESI));
  /* 100a809e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100a80a2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a80a4 jne 0x100a80b3 */
  if (!C.zf) goto L_100a80b3;
  /* 100a80a6 push eax */
  push32((uint32_t)(EAX));
  /* 100a80a7 call dword ptr [0x100ae038] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae038))), 0x100a80adu);
  /* 100a80ad mov esi, eax */
  ESI = (EAX);
  /* 100a80af test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a80b1 je 0x100a811f */
  if (C.zf) goto L_100a811f;
L_100a80b3:;
  /* 100a80b3 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 100a80b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a80b8 je 0x100a80c1 */
  if (C.zf) goto L_100a80c1;
  /* 100a80ba push eax */
  push32((uint32_t)(EAX));
  /* 100a80bb call 0x100aa1a6 */
  push32(0x100a80c0u); f_100aa1a6();
  /* 100a80c0 pop ecx */
  ECX = (pop32());
L_100a80c1:;
  /* 100a80c1 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 100a80c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a80c6 je 0x100a80cf */
  if (C.zf) goto L_100a80cf;
  /* 100a80c8 push eax */
  push32((uint32_t)(EAX));
  /* 100a80c9 call 0x100aa1a6 */
  push32(0x100a80ceu); f_100aa1a6();
  /* 100a80ce pop ecx */
  ECX = (pop32());
L_100a80cf:;
  /* 100a80cf mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 100a80d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a80d4 je 0x100a80dd */
  if (C.zf) goto L_100a80dd;
  /* 100a80d6 push eax */
  push32((uint32_t)(EAX));
  /* 100a80d7 call 0x100aa1a6 */
  push32(0x100a80dcu); f_100aa1a6();
  /* 100a80dc pop ecx */
  ECX = (pop32());
L_100a80dd:;
  /* 100a80dd mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 100a80e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a80e2 je 0x100a80eb */
  if (C.zf) goto L_100a80eb;
  /* 100a80e4 push eax */
  push32((uint32_t)(EAX));
  /* 100a80e5 call 0x100aa1a6 */
  push32(0x100a80eau); f_100aa1a6();
  /* 100a80ea pop ecx */
  ECX = (pop32());
L_100a80eb:;
  /* 100a80eb mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 100a80ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a80f0 je 0x100a80f9 */
  if (C.zf) goto L_100a80f9;
  /* 100a80f2 push eax */
  push32((uint32_t)(EAX));
  /* 100a80f3 call 0x100aa1a6 */
  push32(0x100a80f8u); f_100aa1a6();
  /* 100a80f8 pop ecx */
  ECX = (pop32());
L_100a80f9:;
  /* 100a80f9 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 100a80fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a80fe je 0x100a8107 */
  if (C.zf) goto L_100a8107;
  /* 100a8100 push eax */
  push32((uint32_t)(EAX));
  /* 100a8101 call 0x100aa1a6 */
  push32(0x100a8106u); f_100aa1a6();
  /* 100a8106 pop ecx */
  ECX = (pop32());
L_100a8107:;
  /* 100a8107 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 100a810a cmp eax, 0x100b0cd0 */
  { uint32_t _a=(EAX),_b=(0x100b0cd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a810f je 0x100a8118 */
  if (C.zf) goto L_100a8118;
  /* 100a8111 push eax */
  push32((uint32_t)(EAX));
  /* 100a8112 call 0x100aa1a6 */
  push32(0x100a8117u); f_100aa1a6();
  /* 100a8117 pop ecx */
  ECX = (pop32());
L_100a8118:;
  /* 100a8118 push esi */
  push32((uint32_t)(ESI));
  /* 100a8119 call 0x100aa1a6 */
  push32(0x100a811eu); f_100aa1a6();
  /* 100a811e pop ecx */
  ECX = (pop32());
L_100a811f:;
  /* 100a811f push 0 */
  push32((uint32_t)(0x0u));
  /* 100a8121 push dword ptr [0x100b067c] */
  push32((uint32_t)(r32((uint32_t)(0x100b067c))));
  /* 100a8127 call dword ptr [0x100ae028] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae028))), 0x100a812du);
  /* 100a812d pop esi */
  ESI = (pop32());
L_100a812e:;
  /* 100a812e ret  */
  ESPCHK(0x100a808fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000812f @ 0x100a812f (444 bytes, 150 insns) */
void f_100a812f(void) {
  FTRACE(0x100a812fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a812f push ebp */
  push32((uint32_t)(EBP));
  /* 100a8130 mov ebp, esp */
  EBP = (ESP);
  /* 100a8132 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a8135 push ebx */
  push32((uint32_t)(EBX));
  /* 100a8136 push esi */
  push32((uint32_t)(ESI));
  /* 100a8137 push edi */
  push32((uint32_t)(EDI));
  /* 100a8138 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 100a813d call 0x100aa28f */
  push32(0x100a8142u); f_100aa28f();
  /* 100a8142 mov esi, eax */
  ESI = (EAX);
  /* 100a8144 pop ecx */
  ECX = (pop32());
  /* 100a8145 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a8147 jne 0x100a8151 */
  if (!C.zf) goto L_100a8151;
  /* 100a8149 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100a814b call 0x100a7091 */
  push32(0x100a8150u); f_100a7091();
  /* 100a8150 pop ecx */
  ECX = (pop32());
L_100a8151:;
  /* 100a8151 mov dword ptr [0x100b7c20], esi */
  w32((uint32_t)(0x100b7c20), (ESI));
  /* 100a8157 mov dword ptr [0x100b7d20], 0x20 */
  w32((uint32_t)(0x100b7d20), (0x20u));
  /* 100a8161 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_100a8167:;
  /* 100a8167 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8169 jae 0x100a8189 */
  if (!C.cf) goto L_100a8189;
  /* 100a816b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100a816f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100a8172 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 100a8176 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 100a817a mov eax, dword ptr [0x100b7c20] */
  EAX = (r32((uint32_t)(0x100b7c20)));
  /* 100a817f add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8182 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8187 jmp 0x100a8167 */
  goto L_100a8167;
L_100a8189:;
  /* 100a8189 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 100a818c push eax */
  push32((uint32_t)(EAX));
  /* 100a818d call dword ptr [0x100ae04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae04c))), 0x100a8193u);
  /* 100a8193 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100a8198 je 0x100a826f */
  if (C.zf) goto L_100a826f;
  /* 100a819e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 100a81a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a81a3 je 0x100a826f */
  if (C.zf) goto L_100a826f;
  /* 100a81a9 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 100a81ab lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 100a81ae lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 100a81b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100a81b4 mov eax, 0x800 */
  EAX = (0x800u);
  /* 100a81b9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a81bb jl 0x100a81bf */
  if ((C.sf!=C.of)) goto L_100a81bf;
  /* 100a81bd mov edi, eax */
  EDI = (EAX);
L_100a81bf:;
  /* 100a81bf cmp dword ptr [0x100b7d20], edi */
  { uint32_t _a=(r32((uint32_t)(0x100b7d20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a81c5 jge 0x100a821d */
  if ((C.sf==C.of)) goto L_100a821d;
  /* 100a81c7 mov esi, 0x100b7c24 */
  ESI = (0x100b7c24u);
L_100a81cc:;
  /* 100a81cc push 0x480 */
  push32((uint32_t)(0x480u));
  /* 100a81d1 call 0x100aa28f */
  push32(0x100a81d6u); f_100aa28f();
  /* 100a81d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a81d8 pop ecx */
  ECX = (pop32());
  /* 100a81d9 je 0x100a8217 */
  if (C.zf) goto L_100a8217;
  /* 100a81db add dword ptr [0x100b7d20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x100b7d20))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x100b7d20), (_r)); fl_add(_a,_b,_r,32); }
  /* 100a81e2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100a81e4 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_100a81ea:;
  /* 100a81ea cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a81ec jae 0x100a820a */
  if (!C.cf) goto L_100a820a;
  /* 100a81ee and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 100a81f2 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100a81f5 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 100a81f9 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 100a81fd mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 100a81ff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8202 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8208 jmp 0x100a81ea */
  goto L_100a81ea;
L_100a820a:;
  /* 100a820a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a820d cmp dword ptr [0x100b7d20], edi */
  { uint32_t _a=(r32((uint32_t)(0x100b7d20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8213 jl 0x100a81cc */
  if ((C.sf!=C.of)) goto L_100a81cc;
  /* 100a8215 jmp 0x100a821d */
  goto L_100a821d;
L_100a8217:;
  /* 100a8217 mov edi, dword ptr [0x100b7d20] */
  EDI = (r32((uint32_t)(0x100b7d20)));
L_100a821d:;
  /* 100a821d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100a821f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100a8221 jle 0x100a826f */
  if ((C.zf||C.sf!=C.of)) goto L_100a826f;
L_100a8223:;
  /* 100a8223 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100a8226 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100a8228 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a822b je 0x100a8265 */
  if (C.zf) goto L_100a8265;
  /* 100a822d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 100a822f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 100a8231 je 0x100a8265 */
  if (C.zf) goto L_100a8265;
  /* 100a8233 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 100a8235 jne 0x100a8242 */
  if (!C.zf) goto L_100a8242;
  /* 100a8237 push ecx */
  push32((uint32_t)(ECX));
  /* 100a8238 call dword ptr [0x100ae048] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae048))), 0x100a823eu);
  /* 100a823e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a8240 je 0x100a8265 */
  if (C.zf) goto L_100a8265;
L_100a8242:;
  /* 100a8242 mov ecx, esi */
  ECX = (ESI);
  /* 100a8244 mov eax, esi */
  EAX = (ESI);
  /* 100a8246 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100a8249 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100a824c mov ecx, dword ptr [ecx*4 + 0x100b7c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100b7c20)));
  /* 100a8253 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100a8256 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100a8259 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100a825c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 100a825e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100a8260 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 100a8262 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_100a8265:;
  /* 100a8265 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100a8269 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100a826a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100a826b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a826d jl 0x100a8223 */
  if ((C.sf!=C.of)) goto L_100a8223;
L_100a826f:;
  /* 100a826f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100a8271:;
  /* 100a8271 mov ecx, dword ptr [0x100b7c20] */
  ECX = (r32((uint32_t)(0x100b7c20)));
  /* 100a8277 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 100a827a cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a827e lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 100a8281 jne 0x100a82d0 */
  if (!C.zf) goto L_100a82d0;
  /* 100a8283 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100a8285 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 100a8289 jne 0x100a8290 */
  if (!C.zf) goto L_100a8290;
  /* 100a828b push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 100a828d pop eax */
  EAX = (pop32());
  /* 100a828e jmp 0x100a829a */
  goto L_100a829a;
L_100a8290:;
  /* 100a8290 mov eax, ebx */
  EAX = (EBX);
  /* 100a8292 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a8293 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100a8295 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a8297 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100a829a:;
  /* 100a829a push eax */
  push32((uint32_t)(EAX));
  /* 100a829b call dword ptr [0x100ae044] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae044))), 0x100a82a1u);
  /* 100a82a1 mov edi, eax */
  EDI = (EAX);
  /* 100a82a3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a82a6 je 0x100a82bf */
  if (C.zf) goto L_100a82bf;
  /* 100a82a8 push edi */
  push32((uint32_t)(EDI));
  /* 100a82a9 call dword ptr [0x100ae048] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae048))), 0x100a82afu);
  /* 100a82af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a82b1 je 0x100a82bf */
  if (C.zf) goto L_100a82bf;
  /* 100a82b3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100a82b8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100a82ba cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a82bd jne 0x100a82c5 */
  if (!C.zf) goto L_100a82c5;
L_100a82bf:;
  /* 100a82bf or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100a82c3 jmp 0x100a82d4 */
  goto L_100a82d4;
L_100a82c5:;
  /* 100a82c5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a82c8 jne 0x100a82d4 */
  if (!C.zf) goto L_100a82d4;
  /* 100a82ca or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100a82ce jmp 0x100a82d4 */
  goto L_100a82d4;
L_100a82d0:;
  /* 100a82d0 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_100a82d4:;
  /* 100a82d4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100a82d5 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a82d8 jl 0x100a8271 */
  if ((C.sf!=C.of)) goto L_100a8271;
  /* 100a82da push dword ptr [0x100b7d20] */
  push32((uint32_t)(r32((uint32_t)(0x100b7d20))));
  /* 100a82e0 call dword ptr [0x100ae040] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae040))), 0x100a82e6u);
  /* 100a82e6 pop edi */
  EDI = (pop32());
  /* 100a82e7 pop esi */
  ESI = (pop32());
  /* 100a82e8 pop ebx */
  EBX = (pop32());
  /* 100a82e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a82ea ret  */
  ESPCHK(0x100a812fu, _esp0);
  ESP += 4; return;
}

/* FUN_100082eb @ 0x100a82eb (84 bytes, 33 insns) */
void f_100a82eb(void) {
  FTRACE(0x100a82ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a82eb push ebx */
  push32((uint32_t)(EBX));
  /* 100a82ec push esi */
  push32((uint32_t)(ESI));
  /* 100a82ed push edi */
  push32((uint32_t)(EDI));
  /* 100a82ee mov esi, 0x100b7c20 */
  ESI = (0x100b7c20u);
L_100a82f3:;
  /* 100a82f3 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100a82f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a82f7 je 0x100a8330 */
  if (C.zf) goto L_100a8330;
  /* 100a82f9 mov edi, eax */
  EDI = (EAX);
  /* 100a82fb add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8300 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8302 jae 0x100a8325 */
  if (!C.cf) goto L_100a8325;
  /* 100a8304 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_100a8307:;
  /* 100a8307 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a830b je 0x100a8314 */
  if (C.zf) goto L_100a8314;
  /* 100a830d push ebx */
  push32((uint32_t)(EBX));
  /* 100a830e call dword ptr [0x100ae050] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae050))), 0x100a8314u);
L_100a8314:;
  /* 100a8314 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100a8316 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8319 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a831e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8321 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8323 jb 0x100a8307 */
  if (C.cf) goto L_100a8307;
L_100a8325:;
  /* 100a8325 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100a8327 call 0x100aa1a6 */
  push32(0x100a832cu); f_100aa1a6();
  /* 100a832c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100a832f pop ecx */
  ECX = (pop32());
L_100a8330:;
  /* 100a8330 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8333 cmp esi, 0x100b7d20 */
  { uint32_t _a=(ESI),_b=(0x100b7d20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8339 jl 0x100a82f3 */
  if ((C.sf!=C.of)) goto L_100a82f3;
  /* 100a833b pop edi */
  EDI = (pop32());
  /* 100a833c pop esi */
  ESI = (pop32());
  /* 100a833d pop ebx */
  EBX = (pop32());
  /* 100a833e ret  */
  ESPCHK(0x100a82ebu, _esp0);
  ESP += 4; return;
}

/* FUN_1000833f @ 0x100a833f (185 bytes, 71 insns) */
void f_100a833f(void) {
  FTRACE(0x100a833fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a833f push ebx */
  push32((uint32_t)(EBX));
  /* 100a8340 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100a8342 cmp dword ptr [0x100b7d28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100b7d28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8348 push esi */
  push32((uint32_t)(ESI));
  /* 100a8349 push edi */
  push32((uint32_t)(EDI));
  /* 100a834a jne 0x100a8351 */
  if (!C.zf) goto L_100a8351;
  /* 100a834c call 0x100aa7a1 */
  push32(0x100a8351u); f_100aa7a1();
L_100a8351:;
  /* 100a8351 mov esi, dword ptr [0x100b6638] */
  ESI = (r32((uint32_t)(0x100b6638)));
  /* 100a8357 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_100a8359:;
  /* 100a8359 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100a835b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a835d je 0x100a8371 */
  if (C.zf) goto L_100a8371;
  /* 100a835f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8361 je 0x100a8364 */
  if (C.zf) goto L_100a8364;
  /* 100a8363 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_100a8364:;
  /* 100a8364 push esi */
  push32((uint32_t)(ESI));
  /* 100a8365 call 0x100a9020 */
  push32(0x100a836au); f_100a9020();
  /* 100a836a pop ecx */
  ECX = (pop32());
  /* 100a836b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 100a836f jmp 0x100a8359 */
  goto L_100a8359;
L_100a8371:;
  /* 100a8371 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 100a8378 push eax */
  push32((uint32_t)(EAX));
  /* 100a8379 call 0x100aa28f */
  push32(0x100a837eu); f_100aa28f();
  /* 100a837e mov esi, eax */
  ESI = (EAX);
  /* 100a8380 pop ecx */
  ECX = (pop32());
  /* 100a8381 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8383 mov dword ptr [0x100b6668], esi */
  w32((uint32_t)(0x100b6668), (ESI));
  /* 100a8389 jne 0x100a8393 */
  if (!C.zf) goto L_100a8393;
  /* 100a838b push 9 */
  push32((uint32_t)(0x9u));
  /* 100a838d call 0x100a7091 */
  push32(0x100a8392u); f_100a7091();
  /* 100a8392 pop ecx */
  ECX = (pop32());
L_100a8393:;
  /* 100a8393 mov edi, dword ptr [0x100b6638] */
  EDI = (r32((uint32_t)(0x100b6638)));
  /* 100a8399 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a839b je 0x100a83d6 */
  if (C.zf) goto L_100a83d6;
  /* 100a839d push ebp */
  push32((uint32_t)(EBP));
L_100a839e:;
  /* 100a839e push edi */
  push32((uint32_t)(EDI));
  /* 100a839f call 0x100a9020 */
  push32(0x100a83a4u); f_100a9020();
  /* 100a83a4 mov ebp, eax */
  EBP = (EAX);
  /* 100a83a6 pop ecx */
  ECX = (pop32());
  /* 100a83a7 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 100a83a8 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a83ab je 0x100a83cf */
  if (C.zf) goto L_100a83cf;
  /* 100a83ad push ebp */
  push32((uint32_t)(EBP));
  /* 100a83ae call 0x100aa28f */
  push32(0x100a83b3u); f_100aa28f();
  /* 100a83b3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a83b5 pop ecx */
  ECX = (pop32());
  /* 100a83b6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100a83b8 jne 0x100a83c2 */
  if (!C.zf) goto L_100a83c2;
  /* 100a83ba push 9 */
  push32((uint32_t)(0x9u));
  /* 100a83bc call 0x100a7091 */
  push32(0x100a83c1u); f_100a7091();
  /* 100a83c1 pop ecx */
  ECX = (pop32());
L_100a83c2:;
  /* 100a83c2 push edi */
  push32((uint32_t)(EDI));
  /* 100a83c3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100a83c5 call 0x100a9ad0 */
  push32(0x100a83cau); f_100a9ad0();
  /* 100a83ca pop ecx */
  ECX = (pop32());
  /* 100a83cb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a83ce pop ecx */
  ECX = (pop32());
L_100a83cf:;
  /* 100a83cf add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a83d1 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a83d3 jne 0x100a839e */
  if (!C.zf) goto L_100a839e;
  /* 100a83d5 pop ebp */
  EBP = (pop32());
L_100a83d6:;
  /* 100a83d6 push dword ptr [0x100b6638] */
  push32((uint32_t)(r32((uint32_t)(0x100b6638))));
  /* 100a83dc call 0x100aa1a6 */
  push32(0x100a83e1u); f_100aa1a6();
  /* 100a83e1 pop ecx */
  ECX = (pop32());
  /* 100a83e2 mov dword ptr [0x100b6638], ebx */
  w32((uint32_t)(0x100b6638), (EBX));
  /* 100a83e8 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 100a83ea pop edi */
  EDI = (pop32());
  /* 100a83eb pop esi */
  ESI = (pop32());
  /* 100a83ec mov dword ptr [0x100b7d24], 1 */
  w32((uint32_t)(0x100b7d24), (0x1u));
  /* 100a83f6 pop ebx */
  EBX = (pop32());
  /* 100a83f7 ret  */
  ESPCHK(0x100a833fu, _esp0);
  ESP += 4; return;
}

/* FUN_100083f8 @ 0x100a83f8 (153 bytes, 62 insns) */
void f_100a83f8(void) {
  FTRACE(0x100a83f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a83f8 push ebp */
  push32((uint32_t)(EBP));
  /* 100a83f9 mov ebp, esp */
  EBP = (ESP);
  /* 100a83fb push ecx */
  push32((uint32_t)(ECX));
  /* 100a83fc push ecx */
  push32((uint32_t)(ECX));
  /* 100a83fd push ebx */
  push32((uint32_t)(EBX));
  /* 100a83fe xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100a8400 cmp dword ptr [0x100b7d28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100b7d28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8406 push esi */
  push32((uint32_t)(ESI));
  /* 100a8407 push edi */
  push32((uint32_t)(EDI));
  /* 100a8408 jne 0x100a840f */
  if (!C.zf) goto L_100a840f;
  /* 100a840a call 0x100aa7a1 */
  push32(0x100a840fu); f_100aa7a1();
L_100a840f:;
  /* 100a840f mov esi, 0x100b668c */
  ESI = (0x100b668cu);
  /* 100a8414 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 100a8419 push esi */
  push32((uint32_t)(ESI));
  /* 100a841a push ebx */
  push32((uint32_t)(EBX));
  /* 100a841b call dword ptr [0x100ae054] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae054))), 0x100a8421u);
  /* 100a8421 mov eax, dword ptr [0x100b7d34] */
  EAX = (r32((uint32_t)(0x100b7d34)));
  /* 100a8426 mov dword ptr [0x100b6678], esi */
  w32((uint32_t)(0x100b6678), (ESI));
  /* 100a842c mov edi, esi */
  EDI = (ESI);
  /* 100a842e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8430 je 0x100a8434 */
  if (C.zf) goto L_100a8434;
  /* 100a8432 mov edi, eax */
  EDI = (EAX);
L_100a8434:;
  /* 100a8434 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 100a8437 push eax */
  push32((uint32_t)(EAX));
  /* 100a8438 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100a843b push eax */
  push32((uint32_t)(EAX));
  /* 100a843c push ebx */
  push32((uint32_t)(EBX));
  /* 100a843d push ebx */
  push32((uint32_t)(EBX));
  /* 100a843e push edi */
  push32((uint32_t)(EDI));
  /* 100a843f call 0x100a8491 */
  push32(0x100a8444u); f_100a8491();
  /* 100a8444 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100a8447 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100a844a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 100a844d push eax */
  push32((uint32_t)(EAX));
  /* 100a844e call 0x100aa28f */
  push32(0x100a8453u); f_100aa28f();
  /* 100a8453 mov esi, eax */
  ESI = (EAX);
  /* 100a8455 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8458 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a845a jne 0x100a8464 */
  if (!C.zf) goto L_100a8464;
  /* 100a845c push 8 */
  push32((uint32_t)(0x8u));
  /* 100a845e call 0x100a7091 */
  push32(0x100a8463u); f_100a7091();
  /* 100a8463 pop ecx */
  ECX = (pop32());
L_100a8464:;
  /* 100a8464 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 100a8467 push eax */
  push32((uint32_t)(EAX));
  /* 100a8468 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100a846b push eax */
  push32((uint32_t)(EAX));
  /* 100a846c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100a846f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 100a8472 push eax */
  push32((uint32_t)(EAX));
  /* 100a8473 push esi */
  push32((uint32_t)(ESI));
  /* 100a8474 push edi */
  push32((uint32_t)(EDI));
  /* 100a8475 call 0x100a8491 */
  push32(0x100a847au); f_100a8491();
  /* 100a847a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100a847d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8480 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a8481 mov dword ptr [0x100b6660], esi */
  w32((uint32_t)(0x100b6660), (ESI));
  /* 100a8487 pop edi */
  EDI = (pop32());
  /* 100a8488 pop esi */
  ESI = (pop32());
  /* 100a8489 mov dword ptr [0x100b665c], eax */
  w32((uint32_t)(0x100b665c), (EAX));
  /* 100a848e pop ebx */
  EBX = (pop32());
  /* 100a848f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a8490 ret  */
  ESPCHK(0x100a83f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10008491 @ 0x100a8491 (436 bytes, 187 insns) */
void f_100a8491(void) {
  FTRACE(0x100a8491u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8491 push ebp */
  push32((uint32_t)(EBP));
  /* 100a8492 mov ebp, esp */
  EBP = (ESP);
  /* 100a8494 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 100a8497 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100a849a push ebx */
  push32((uint32_t)(EBX));
  /* 100a849b push esi */
  push32((uint32_t)(ESI));
  /* 100a849c and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100a849f mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100a84a2 push edi */
  push32((uint32_t)(EDI));
  /* 100a84a3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100a84a6 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 100a84ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a84af test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100a84b1 je 0x100a84bb */
  if (C.zf) goto L_100a84bb;
  /* 100a84b3 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 100a84b5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a84b8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100a84bb:;
  /* 100a84bb cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a84be jne 0x100a8504 */
  if (!C.zf) goto L_100a8504;
L_100a84c0:;
  /* 100a84c0 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 100a84c3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a84c4 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a84c7 je 0x100a84f2 */
  if (C.zf) goto L_100a84f2;
  /* 100a84c9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100a84cb je 0x100a84f2 */
  if (C.zf) goto L_100a84f2;
  /* 100a84cd movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 100a84d0 test byte ptr [edx + 0x100b6ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x100b6ae1)))&(0x4u); fl_logic(_r,8); }
  /* 100a84d7 je 0x100a84e5 */
  if (C.zf) goto L_100a84e5;
  /* 100a84d9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100a84db test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a84dd je 0x100a84e5 */
  if (C.zf) goto L_100a84e5;
  /* 100a84df mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100a84e1 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100a84e3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100a84e4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_100a84e5:;
  /* 100a84e5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100a84e7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a84e9 je 0x100a84c0 */
  if (C.zf) goto L_100a84c0;
  /* 100a84eb mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100a84ed mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100a84ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100a84f0 jmp 0x100a84c0 */
  goto L_100a84c0;
L_100a84f2:;
  /* 100a84f2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100a84f4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a84f6 je 0x100a84fc */
  if (C.zf) goto L_100a84fc;
  /* 100a84f8 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 100a84fb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100a84fc:;
  /* 100a84fc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a84ff jne 0x100a8547 */
  if (!C.zf) goto L_100a8547;
  /* 100a8501 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a8502 jmp 0x100a8547 */
  goto L_100a8547;
L_100a8504:;
  /* 100a8504 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100a8506 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a8508 je 0x100a850f */
  if (C.zf) goto L_100a850f;
  /* 100a850a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100a850c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100a850e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100a850f:;
  /* 100a850f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100a8511 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a8512 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 100a8515 test byte ptr [ebx + 0x100b6ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x100b6ae1)))&(0x4u); fl_logic(_r,8); }
  /* 100a851c je 0x100a852a */
  if (C.zf) goto L_100a852a;
  /* 100a851e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100a8520 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a8522 je 0x100a8529 */
  if (C.zf) goto L_100a8529;
  /* 100a8524 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 100a8526 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 100a8528 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100a8529:;
  /* 100a8529 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_100a852a:;
  /* 100a852a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a852d je 0x100a8538 */
  if (C.zf) goto L_100a8538;
  /* 100a852f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100a8531 je 0x100a853c */
  if (C.zf) goto L_100a853c;
  /* 100a8533 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8536 jne 0x100a8504 */
  if (!C.zf) goto L_100a8504;
L_100a8538:;
  /* 100a8538 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100a853a jne 0x100a853f */
  if (!C.zf) goto L_100a853f;
L_100a853c:;
  /* 100a853c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a853d jmp 0x100a8547 */
  goto L_100a8547;
L_100a853f:;
  /* 100a853f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a8541 je 0x100a8547 */
  if (C.zf) goto L_100a8547;
  /* 100a8543 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_100a8547:;
  /* 100a8547 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_100a854b:;
  /* 100a854b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a854e je 0x100a8634 */
  if (C.zf) goto L_100a8634;
L_100a8554:;
  /* 100a8554 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100a8556 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8559 je 0x100a8560 */
  if (C.zf) goto L_100a8560;
  /* 100a855b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a855e jne 0x100a8563 */
  if (!C.zf) goto L_100a8563;
L_100a8560:;
  /* 100a8560 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a8561 jmp 0x100a8554 */
  goto L_100a8554;
L_100a8563:;
  /* 100a8563 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8566 je 0x100a8634 */
  if (C.zf) goto L_100a8634;
  /* 100a856c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100a856e je 0x100a8578 */
  if (C.zf) goto L_100a8578;
  /* 100a8570 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 100a8572 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8575 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100a8578:;
  /* 100a8578 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 100a857b inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_100a857d:;
  /* 100a857d mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 100a8584 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100a8586:;
  /* 100a8586 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8589 jne 0x100a858f */
  if (!C.zf) goto L_100a858f;
  /* 100a858b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a858c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100a858d jmp 0x100a8586 */
  goto L_100a8586;
L_100a858f:;
  /* 100a858f cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8592 jne 0x100a85c0 */
  if (!C.zf) goto L_100a85c0;
  /* 100a8594 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100a8597 jne 0x100a85be */
  if (!C.zf) goto L_100a85be;
  /* 100a8599 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100a859b cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a859e je 0x100a85ad */
  if (C.zf) goto L_100a85ad;
  /* 100a85a0 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a85a4 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 100a85a7 jne 0x100a85ad */
  if (!C.zf) goto L_100a85ad;
  /* 100a85a9 mov eax, edx */
  EAX = (EDX);
  /* 100a85ab jmp 0x100a85b0 */
  goto L_100a85b0;
L_100a85ad:;
  /* 100a85ad mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_100a85b0:;
  /* 100a85b0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100a85b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100a85b5 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a85b8 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 100a85bb mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_100a85be:;
  /* 100a85be shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_100a85c0:;
  /* 100a85c0 mov edx, ebx */
  EDX = (EBX);
  /* 100a85c2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100a85c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100a85c5 je 0x100a85d5 */
  if (C.zf) goto L_100a85d5;
  /* 100a85c7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_100a85c8:;
  /* 100a85c8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a85ca je 0x100a85d0 */
  if (C.zf) goto L_100a85d0;
  /* 100a85cc mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 100a85cf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100a85d0:;
  /* 100a85d0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100a85d2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100a85d3 jne 0x100a85c8 */
  if (!C.zf) goto L_100a85c8;
L_100a85d5:;
  /* 100a85d5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100a85d7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100a85d9 je 0x100a8625 */
  if (C.zf) goto L_100a8625;
  /* 100a85db cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a85df jne 0x100a85eb */
  if (!C.zf) goto L_100a85eb;
  /* 100a85e1 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a85e4 je 0x100a8625 */
  if (C.zf) goto L_100a8625;
  /* 100a85e6 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a85e9 je 0x100a8625 */
  if (C.zf) goto L_100a8625;
L_100a85eb:;
  /* 100a85eb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a85ef je 0x100a861f */
  if (C.zf) goto L_100a861f;
  /* 100a85f1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a85f3 je 0x100a860e */
  if (C.zf) goto L_100a860e;
  /* 100a85f5 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 100a85f8 test byte ptr [ebx + 0x100b6ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x100b6ae1)))&(0x4u); fl_logic(_r,8); }
  /* 100a85ff je 0x100a8607 */
  if (C.zf) goto L_100a8607;
  /* 100a8601 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100a8603 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100a8604 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a8605 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_100a8607:;
  /* 100a8607 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100a8609 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100a860b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100a860c jmp 0x100a861d */
  goto L_100a861d;
L_100a860e:;
  /* 100a860e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 100a8611 test byte ptr [edx + 0x100b6ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x100b6ae1)))&(0x4u); fl_logic(_r,8); }
  /* 100a8618 je 0x100a861d */
  if (C.zf) goto L_100a861d;
  /* 100a861a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a861b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_100a861d:;
  /* 100a861d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_100a861f:;
  /* 100a861f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a8620 jmp 0x100a857d */
  goto L_100a857d;
L_100a8625:;
  /* 100a8625 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a8627 je 0x100a862d */
  if (C.zf) goto L_100a862d;
  /* 100a8629 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 100a862c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100a862d:;
  /* 100a862d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100a862f jmp 0x100a854b */
  goto L_100a854b;
L_100a8634:;
  /* 100a8634 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100a8636 je 0x100a863b */
  if (C.zf) goto L_100a863b;
  /* 100a8638 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_100a863b:;
  /* 100a863b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100a863e pop edi */
  EDI = (pop32());
  /* 100a863f pop esi */
  ESI = (pop32());
  /* 100a8640 pop ebx */
  EBX = (pop32());
  /* 100a8641 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 100a8643 pop ebp */
  EBP = (pop32());
  /* 100a8644 ret  */
  ESPCHK(0x100a8491u, _esp0);
  ESP += 4; return;
}

/* FUN_10008645 @ 0x100a8645 (306 bytes, 132 insns) */
void f_100a8645(void) {
  FTRACE(0x100a8645u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8645 push ecx */
  push32((uint32_t)(ECX));
  /* 100a8646 push ecx */
  push32((uint32_t)(ECX));
  /* 100a8647 mov eax, dword ptr [0x100b6790] */
  EAX = (r32((uint32_t)(0x100b6790)));
  /* 100a864c push ebx */
  push32((uint32_t)(EBX));
  /* 100a864d push ebp */
  push32((uint32_t)(EBP));
  /* 100a864e mov ebp, dword ptr [0x100ae068] */
  EBP = (r32((uint32_t)(0x100ae068)));
  /* 100a8654 push esi */
  push32((uint32_t)(ESI));
  /* 100a8655 push edi */
  push32((uint32_t)(EDI));
  /* 100a8656 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100a8658 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100a865a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100a865c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a865e jne 0x100a8693 */
  if (!C.zf) goto L_100a8693;
  /* 100a8660 call ebp */
  call_ind((uint32_t)(EBP), 0x100a8662u);
  /* 100a8662 mov esi, eax */
  ESI = (EAX);
  /* 100a8664 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8666 je 0x100a8674 */
  if (C.zf) goto L_100a8674;
  /* 100a8668 mov dword ptr [0x100b6790], 1 */
  w32((uint32_t)(0x100b6790), (0x1u));
  /* 100a8672 jmp 0x100a869c */
  goto L_100a869c;
L_100a8674:;
  /* 100a8674 call dword ptr [0x100ae064] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae064))), 0x100a867au);
  /* 100a867a mov edi, eax */
  EDI = (EAX);
  /* 100a867c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a867e je 0x100a876e */
  if (C.zf) goto L_100a876e;
  /* 100a8684 mov dword ptr [0x100b6790], 2 */
  w32((uint32_t)(0x100b6790), (0x2u));
  /* 100a868e jmp 0x100a8722 */
  goto L_100a8722;
L_100a8693:;
  /* 100a8693 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8696 jne 0x100a871d */
  if (!C.zf) goto L_100a871d;
L_100a869c:;
  /* 100a869c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a869e jne 0x100a86ac */
  if (!C.zf) goto L_100a86ac;
  /* 100a86a0 call ebp */
  call_ind((uint32_t)(EBP), 0x100a86a2u);
  /* 100a86a2 mov esi, eax */
  ESI = (EAX);
  /* 100a86a4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a86a6 je 0x100a876e */
  if (C.zf) goto L_100a876e;
L_100a86ac:;
  /* 100a86ac cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100a86af mov eax, esi */
  EAX = (ESI);
  /* 100a86b1 je 0x100a86c1 */
  if (C.zf) goto L_100a86c1;
L_100a86b3:;
  /* 100a86b3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a86b4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a86b5 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100a86b8 jne 0x100a86b3 */
  if (!C.zf) goto L_100a86b3;
  /* 100a86ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a86bb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a86bc cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100a86bf jne 0x100a86b3 */
  if (!C.zf) goto L_100a86b3;
L_100a86c1:;
  /* 100a86c1 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a86c3 mov edi, dword ptr [0x100ae060] */
  EDI = (r32((uint32_t)(0x100ae060)));
  /* 100a86c9 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100a86cb push ebx */
  push32((uint32_t)(EBX));
  /* 100a86cc push ebx */
  push32((uint32_t)(EBX));
  /* 100a86cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a86ce push ebx */
  push32((uint32_t)(EBX));
  /* 100a86cf push ebx */
  push32((uint32_t)(EBX));
  /* 100a86d0 push eax */
  push32((uint32_t)(EAX));
  /* 100a86d1 push esi */
  push32((uint32_t)(ESI));
  /* 100a86d2 push ebx */
  push32((uint32_t)(EBX));
  /* 100a86d3 push ebx */
  push32((uint32_t)(EBX));
  /* 100a86d4 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 100a86d8 call edi */
  call_ind((uint32_t)(EDI), 0x100a86dau);
  /* 100a86da mov ebp, eax */
  EBP = (EAX);
  /* 100a86dc cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a86de je 0x100a8712 */
  if (C.zf) goto L_100a8712;
  /* 100a86e0 push ebp */
  push32((uint32_t)(EBP));
  /* 100a86e1 call 0x100aa28f */
  push32(0x100a86e6u); f_100aa28f();
  /* 100a86e6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a86e8 pop ecx */
  ECX = (pop32());
  /* 100a86e9 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 100a86ed je 0x100a8712 */
  if (C.zf) goto L_100a8712;
  /* 100a86ef push ebx */
  push32((uint32_t)(EBX));
  /* 100a86f0 push ebx */
  push32((uint32_t)(EBX));
  /* 100a86f1 push ebp */
  push32((uint32_t)(EBP));
  /* 100a86f2 push eax */
  push32((uint32_t)(EAX));
  /* 100a86f3 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 100a86f7 push esi */
  push32((uint32_t)(ESI));
  /* 100a86f8 push ebx */
  push32((uint32_t)(EBX));
  /* 100a86f9 push ebx */
  push32((uint32_t)(EBX));
  /* 100a86fa call edi */
  call_ind((uint32_t)(EDI), 0x100a86fcu);
  /* 100a86fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a86fe jne 0x100a870e */
  if (!C.zf) goto L_100a870e;
  /* 100a8700 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100a8704 call 0x100aa1a6 */
  push32(0x100a8709u); f_100aa1a6();
  /* 100a8709 pop ecx */
  ECX = (pop32());
  /* 100a870a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_100a870e:;
  /* 100a870e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_100a8712:;
  /* 100a8712 push esi */
  push32((uint32_t)(ESI));
  /* 100a8713 call dword ptr [0x100ae05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae05c))), 0x100a8719u);
  /* 100a8719 mov eax, ebx */
  EAX = (EBX);
  /* 100a871b jmp 0x100a8770 */
  goto L_100a8770;
L_100a871d:;
  /* 100a871d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8720 jne 0x100a876e */
  if (!C.zf) goto L_100a876e;
L_100a8722:;
  /* 100a8722 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8724 jne 0x100a8732 */
  if (!C.zf) goto L_100a8732;
  /* 100a8726 call dword ptr [0x100ae064] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae064))), 0x100a872cu);
  /* 100a872c mov edi, eax */
  EDI = (EAX);
  /* 100a872e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8730 je 0x100a876e */
  if (C.zf) goto L_100a876e;
L_100a8732:;
  /* 100a8732 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8734 mov eax, edi */
  EAX = (EDI);
  /* 100a8736 je 0x100a8742 */
  if (C.zf) goto L_100a8742;
L_100a8738:;
  /* 100a8738 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a8739 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a873b jne 0x100a8738 */
  if (!C.zf) goto L_100a8738;
  /* 100a873d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a873e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8740 jne 0x100a8738 */
  if (!C.zf) goto L_100a8738;
L_100a8742:;
  /* 100a8742 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a8744 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a8745 mov ebp, eax */
  EBP = (EAX);
  /* 100a8747 push ebp */
  push32((uint32_t)(EBP));
  /* 100a8748 call 0x100aa28f */
  push32(0x100a874du); f_100aa28f();
  /* 100a874d mov esi, eax */
  ESI = (EAX);
  /* 100a874f pop ecx */
  ECX = (pop32());
  /* 100a8750 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8752 jne 0x100a8758 */
  if (!C.zf) goto L_100a8758;
  /* 100a8754 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100a8756 jmp 0x100a8763 */
  goto L_100a8763;
L_100a8758:;
  /* 100a8758 push ebp */
  push32((uint32_t)(EBP));
  /* 100a8759 push edi */
  push32((uint32_t)(EDI));
  /* 100a875a push esi */
  push32((uint32_t)(ESI));
  /* 100a875b call 0x100aa7c0 */
  push32(0x100a8760u); f_100aa7c0();
  /* 100a8760 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a8763:;
  /* 100a8763 push edi */
  push32((uint32_t)(EDI));
  /* 100a8764 call dword ptr [0x100ae058] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae058))), 0x100a876au);
  /* 100a876a mov eax, esi */
  EAX = (ESI);
  /* 100a876c jmp 0x100a8770 */
  goto L_100a8770;
L_100a876e:;
  /* 100a876e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100a8770:;
  /* 100a8770 pop edi */
  EDI = (pop32());
  /* 100a8771 pop esi */
  ESI = (pop32());
  /* 100a8772 pop ebp */
  EBP = (pop32());
  /* 100a8773 pop ebx */
  EBX = (pop32());
  /* 100a8774 pop ecx */
  ECX = (pop32());
  /* 100a8775 pop ecx */
  ECX = (pop32());
  /* 100a8776 ret  */
  ESPCHK(0x100a8645u, _esp0);
  ESP += 4; return;
}

/* FUN_10008777 @ 0x100a8777 (45 bytes, 17 insns) */
void f_100a8777(void) {
  FTRACE(0x100a8777u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8777 push esi */
  push32((uint32_t)(ESI));
  /* 100a8778 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100a877c push 0 */
  push32((uint32_t)(0x0u));
  /* 100a877e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100a8781 call dword ptr [0x100ae004] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae004))), 0x100a8787u);
  /* 100a8787 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100a878c jne 0x100a87a2 */
  if (!C.zf) goto L_100a87a2;
  /* 100a878e mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 100a8791 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100a8793 je 0x100a87a2 */
  if (C.zf) goto L_100a87a2;
  /* 100a8795 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8797 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 100a879a mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 100a879c mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 100a879f mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_100a87a2:;
  /* 100a87a2 pop esi */
  ESI = (pop32());
  /* 100a87a3 ret  */
  ESPCHK(0x100a8777u, _esp0);
  ESP += 4; return;
}

/* FUN_100087a4 @ 0x100a87a4 (328 bytes, 115 insns) */
void f_100a87a4(void) {
  FTRACE(0x100a87a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a87a4 push ebp */
  push32((uint32_t)(EBP));
  /* 100a87a5 mov ebp, esp */
  EBP = (ESP);
  /* 100a87a7 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 100a87ac call 0x100aaeb0 */
  push32(0x100a87b1u); f_100aaeb0();
  /* 100a87b1 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 100a87b7 push ebx */
  push32((uint32_t)(EBX));
  /* 100a87b8 push eax */
  push32((uint32_t)(EAX));
  /* 100a87b9 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 100a87c3 call dword ptr [0x100ae070] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae070))), 0x100a87c9u);
  /* 100a87c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a87cb je 0x100a87e7 */
  if (C.zf) goto L_100a87e7;
  /* 100a87cd cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a87d4 jne 0x100a87e7 */
  if (!C.zf) goto L_100a87e7;
  /* 100a87d6 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a87dd jb 0x100a87e7 */
  if (C.cf) goto L_100a87e7;
  /* 100a87df push 1 */
  push32((uint32_t)(0x1u));
  /* 100a87e1 pop eax */
  EAX = (pop32());
  /* 100a87e2 jmp 0x100a88e9 */
  goto L_100a88e9;
L_100a87e7:;
  /* 100a87e7 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100a87ed push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 100a87f2 push eax */
  push32((uint32_t)(EAX));
  /* 100a87f3 push 0x100ae1c8 */
  push32((uint32_t)(0x100ae1c8u));
  /* 100a87f8 call dword ptr [0x100ae06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae06c))), 0x100a87feu);
  /* 100a87fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a8800 je 0x100a88d6 */
  if (C.zf) goto L_100a88d6;
  /* 100a8806 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100a8808 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 100a880e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8814 je 0x100a8829 */
  if (C.zf) goto L_100a8829;
L_100a8816:;
  /* 100a8816 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100a8818 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a881a jl 0x100a8824 */
  if ((C.sf!=C.of)) goto L_100a8824;
  /* 100a881c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a881e jg 0x100a8824 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a8824;
  /* 100a8820 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100a8822 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_100a8824:;
  /* 100a8824 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100a8825 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8827 jne 0x100a8816 */
  if (!C.zf) goto L_100a8816;
L_100a8829:;
  /* 100a8829 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100a882f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 100a8831 push eax */
  push32((uint32_t)(EAX));
  /* 100a8832 push 0x100ae1b0 */
  push32((uint32_t)(0x100ae1b0u));
  /* 100a8837 call 0x100aae70 */
  push32(0x100a883cu); f_100aae70();
  /* 100a883c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a883f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a8841 jne 0x100a884b */
  if (!C.zf) goto L_100a884b;
  /* 100a8843 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100a8849 jmp 0x100a8894 */
  goto L_100a8894;
L_100a884b:;
  /* 100a884b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 100a8851 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 100a8856 push eax */
  push32((uint32_t)(EAX));
  /* 100a8857 push ebx */
  push32((uint32_t)(EBX));
  /* 100a8858 call dword ptr [0x100ae054] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae054))), 0x100a885eu);
  /* 100a885e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8864 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 100a886a je 0x100a887f */
  if (C.zf) goto L_100a887f;
L_100a886c:;
  /* 100a886c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100a886e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8870 jl 0x100a887a */
  if ((C.sf!=C.of)) goto L_100a887a;
  /* 100a8872 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8874 jg 0x100a887a */
  if ((!C.zf&&C.sf==C.of)) goto L_100a887a;
  /* 100a8876 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100a8878 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_100a887a:;
  /* 100a887a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100a887b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a887d jne 0x100a886c */
  if (!C.zf) goto L_100a886c;
L_100a887f:;
  /* 100a887f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 100a8885 push eax */
  push32((uint32_t)(EAX));
  /* 100a8886 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100a888c push eax */
  push32((uint32_t)(EAX));
  /* 100a888d call 0x100aadf0 */
  push32(0x100a8892u); f_100aadf0();
  /* 100a8892 pop ecx */
  ECX = (pop32());
  /* 100a8893 pop ecx */
  ECX = (pop32());
L_100a8894:;
  /* 100a8894 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8896 je 0x100a88d6 */
  if (C.zf) goto L_100a88d6;
  /* 100a8898 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 100a889a push eax */
  push32((uint32_t)(EAX));
  /* 100a889b call 0x100aad30 */
  push32(0x100a88a0u); f_100aad30();
  /* 100a88a0 pop ecx */
  ECX = (pop32());
  /* 100a88a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a88a3 pop ecx */
  ECX = (pop32());
  /* 100a88a4 je 0x100a88d6 */
  if (C.zf) goto L_100a88d6;
  /* 100a88a6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a88a7 mov ecx, eax */
  ECX = (EAX);
  /* 100a88a9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a88ab je 0x100a88bb */
  if (C.zf) goto L_100a88bb;
L_100a88ad:;
  /* 100a88ad cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a88b0 jne 0x100a88b6 */
  if (!C.zf) goto L_100a88b6;
  /* 100a88b2 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 100a88b4 jmp 0x100a88b7 */
  goto L_100a88b7;
L_100a88b6:;
  /* 100a88b6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_100a88b7:;
  /* 100a88b7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a88b9 jne 0x100a88ad */
  if (!C.zf) goto L_100a88ad;
L_100a88bb:;
  /* 100a88bb push 0xa */
  push32((uint32_t)(0xau));
  /* 100a88bd push ebx */
  push32((uint32_t)(EBX));
  /* 100a88be push eax */
  push32((uint32_t)(EAX));
  /* 100a88bf call 0x100aaaf5 */
  push32(0x100a88c4u); f_100aaaf5();
  /* 100a88c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a88c7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a88ca je 0x100a88e9 */
  if (C.zf) goto L_100a88e9;
  /* 100a88cc cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a88cf je 0x100a88e9 */
  if (C.zf) goto L_100a88e9;
  /* 100a88d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a88d4 je 0x100a88e9 */
  if (C.zf) goto L_100a88e9;
L_100a88d6:;
  /* 100a88d6 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100a88d9 push eax */
  push32((uint32_t)(EAX));
  /* 100a88da call 0x100a8777 */
  push32(0x100a88dfu); f_100a8777();
  /* 100a88df cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a88e3 pop ecx */
  ECX = (pop32());
  /* 100a88e4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a88e6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100a88e9:;
  /* 100a88e9 pop ebx */
  EBX = (pop32());
  /* 100a88ea leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a88eb ret  */
  ESPCHK(0x100a87a4u, _esp0);
  ESP += 4; return;
}

/* FUN_100088ec @ 0x100a88ec (93 bytes, 30 insns) */
void f_100a88ec(void) {
  FTRACE(0x100a88ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a88ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a88ee push 0 */
  push32((uint32_t)(0x0u));
  /* 100a88f0 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a88f4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100a88f9 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100a88fc push eax */
  push32((uint32_t)(EAX));
  /* 100a88fd call dword ptr [0x100ae078] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae078))), 0x100a8903u);
  /* 100a8903 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a8905 mov dword ptr [0x100b7c04], eax */
  w32((uint32_t)(0x100b7c04), (EAX));
  /* 100a890a je 0x100a8942 */
  if (C.zf) goto L_100a8942;
  /* 100a890c call 0x100a87a4 */
  push32(0x100a8911u); f_100a87a4();
  /* 100a8911 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8914 mov dword ptr [0x100b7c08], eax */
  w32((uint32_t)(0x100b7c08), (EAX));
  /* 100a8919 jne 0x100a8928 */
  if (!C.zf) goto L_100a8928;
  /* 100a891b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 100a8920 call 0x100aaedf */
  push32(0x100a8925u); f_100aaedf();
  /* 100a8925 pop ecx */
  ECX = (pop32());
  /* 100a8926 jmp 0x100a8932 */
  goto L_100a8932;
L_100a8928:;
  /* 100a8928 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a892b jne 0x100a8945 */
  if (!C.zf) goto L_100a8945;
  /* 100a892d call 0x100ab730 */
  push32(0x100a8932u); f_100ab730();
L_100a8932:;
  /* 100a8932 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a8934 jne 0x100a8945 */
  if (!C.zf) goto L_100a8945;
  /* 100a8936 push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
  /* 100a893c call dword ptr [0x100ae074] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae074))), 0x100a8942u);
L_100a8942:;
  /* 100a8942 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a8944 ret  */
  ESPCHK(0x100a88ecu, _esp0);
  ESP += 4; return;
L_100a8945:;
  /* 100a8945 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a8947 pop eax */
  EAX = (pop32());
  /* 100a8948 ret  */
  ESPCHK(0x100a88ecu, _esp0);
  ESP += 4; return;
}

/* FUN_10008949 @ 0x100a8949 (168 bytes, 56 insns) */
void f_100a8949(void) {
  FTRACE(0x100a8949u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8949 mov eax, dword ptr [0x100b7c08] */
  EAX = (r32((uint32_t)(0x100b7c08)));
  /* 100a894e push esi */
  push32((uint32_t)(ESI));
  /* 100a894f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8952 push edi */
  push32((uint32_t)(EDI));
  /* 100a8953 jne 0x100a89bb */
  if (!C.zf) goto L_100a89bb;
  /* 100a8955 push ebx */
  push32((uint32_t)(EBX));
  /* 100a8956 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100a8958 cmp dword ptr [0x100b69b8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100b69b8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a895e push ebp */
  push32((uint32_t)(EBP));
  /* 100a895f mov ebp, dword ptr [0x100ae080] */
  EBP = (r32((uint32_t)(0x100ae080)));
  /* 100a8965 jle 0x100a89a7 */
  if ((C.zf||C.sf!=C.of)) goto L_100a89a7;
  /* 100a8967 mov eax, dword ptr [0x100b69bc] */
  EAX = (r32((uint32_t)(0x100b69bc)));
  /* 100a896c mov edi, dword ptr [0x100ae07c] */
  EDI = (r32((uint32_t)(0x100ae07c)));
  /* 100a8972 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_100a8975:;
  /* 100a8975 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 100a897a push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 100a897f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100a8981 call edi */
  call_ind((uint32_t)(EDI), 0x100a8983u);
  /* 100a8983 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100a8988 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a898a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100a898c call edi */
  call_ind((uint32_t)(EDI), 0x100a898eu);
  /* 100a898e push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 100a8991 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a8993 push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
  /* 100a8999 call ebp */
  call_ind((uint32_t)(EBP), 0x100a899bu);
  /* 100a899b add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a899e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100a899f cmp ebx, dword ptr [0x100b69b8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100b69b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a89a5 jl 0x100a8975 */
  if ((C.sf!=C.of)) goto L_100a8975;
L_100a89a7:;
  /* 100a89a7 push dword ptr [0x100b69bc] */
  push32((uint32_t)(r32((uint32_t)(0x100b69bc))));
  /* 100a89ad push 0 */
  push32((uint32_t)(0x0u));
  /* 100a89af push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
  /* 100a89b5 call ebp */
  call_ind((uint32_t)(EBP), 0x100a89b7u);
  /* 100a89b7 pop ebp */
  EBP = (pop32());
  /* 100a89b8 pop ebx */
  EBX = (pop32());
  /* 100a89b9 jmp 0x100a89e2 */
  goto L_100a89e2;
L_100a89bb:;
  /* 100a89bb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a89be jne 0x100a89e2 */
  if (!C.zf) goto L_100a89e2;
  /* 100a89c0 mov edi, 0x100b0e50 */
  EDI = (0x100b0e50u);
  /* 100a89c5 mov esi, edi */
  ESI = (EDI);
L_100a89c7:;
  /* 100a89c7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 100a89ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a89cc je 0x100a89dc */
  if (C.zf) goto L_100a89dc;
  /* 100a89ce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100a89d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a89d5 push eax */
  push32((uint32_t)(EAX));
  /* 100a89d6 call dword ptr [0x100ae07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae07c))), 0x100a89dcu);
L_100a89dc:;
  /* 100a89dc mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 100a89de cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a89e0 jne 0x100a89c7 */
  if (!C.zf) goto L_100a89c7;
L_100a89e2:;
  /* 100a89e2 push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
  /* 100a89e8 call dword ptr [0x100ae074] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae074))), 0x100a89eeu);
  /* 100a89ee pop edi */
  EDI = (pop32());
  /* 100a89ef pop esi */
  ESI = (pop32());
  /* 100a89f0 ret  */
  ESPCHK(0x100a8949u, _esp0);
  ESP += 4; return;
}

/* FUN_100089f1 @ 0x100a89f1 (57 bytes, 18 insns) */
void f_100a89f1(void) {
  FTRACE(0x100a89f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a89f1 mov eax, dword ptr [0x100b6640] */
  EAX = (r32((uint32_t)(0x100b6640)));
  /* 100a89f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a89f9 je 0x100a8a08 */
  if (C.zf) goto L_100a8a08;
  /* 100a89fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a89fd jne 0x100a8a29 */
  if (!C.zf) goto L_100a8a29;
  /* 100a89ff cmp dword ptr [0x100b6644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100b6644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8a06 jne 0x100a8a29 */
  if (!C.zf) goto L_100a8a29;
L_100a8a08:;
  /* 100a8a08 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 100a8a0d call 0x100a8a2a */
  push32(0x100a8a12u); f_100a8a2a();
  /* 100a8a12 mov eax, dword ptr [0x100b6794] */
  EAX = (r32((uint32_t)(0x100b6794)));
  /* 100a8a17 pop ecx */
  ECX = (pop32());
  /* 100a8a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a8a1a je 0x100a8a1e */
  if (C.zf) goto L_100a8a1e;
  /* 100a8a1c call eax */
  call_ind((uint32_t)(EAX), 0x100a8a1eu);
L_100a8a1e:;
  /* 100a8a1e push 0xff */
  push32((uint32_t)(0xffu));
  /* 100a8a23 call 0x100a8a2a */
  push32(0x100a8a28u); f_100a8a2a();
  /* 100a8a28 pop ecx */
  ECX = (pop32());
L_100a8a29:;
  /* 100a8a29 ret  */
  ESPCHK(0x100a89f1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a2a @ 0x100a8a2a (339 bytes, 100 insns) */
void f_100a8a2a(void) {
  FTRACE(0x100a8a2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8a2a push ebp */
  push32((uint32_t)(EBP));
  /* 100a8a2b mov ebp, esp */
  EBP = (ESP);
  /* 100a8a2d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a8a33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a8a36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100a8a38 mov eax, 0x100b06a8 */
  EAX = (0x100b06a8u);
L_100a8a3d:;
  /* 100a8a3d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8a3f je 0x100a8a4c */
  if (C.zf) goto L_100a8a4c;
  /* 100a8a41 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8a44 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100a8a45 cmp eax, 0x100b0738 */
  { uint32_t _a=(EAX),_b=(0x100b0738u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8a4a jl 0x100a8a3d */
  if ((C.sf!=C.of)) goto L_100a8a3d;
L_100a8a4c:;
  /* 100a8a4c push esi */
  push32((uint32_t)(ESI));
  /* 100a8a4d mov esi, ecx */
  ESI = (ECX);
  /* 100a8a4f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 100a8a52 cmp edx, dword ptr [esi + 0x100b06a8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x100b06a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8a58 jne 0x100a8b7a */
  if (!C.zf) goto L_100a8b7a;
  /* 100a8a5e mov eax, dword ptr [0x100b6640] */
  EAX = (r32((uint32_t)(0x100b6640)));
  /* 100a8a63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8a66 je 0x100a8b54 */
  if (C.zf) goto L_100a8b54;
  /* 100a8a6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a8a6e jne 0x100a8a7d */
  if (!C.zf) goto L_100a8a7d;
  /* 100a8a70 cmp dword ptr [0x100b6644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100b6644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8a77 je 0x100a8b54 */
  if (C.zf) goto L_100a8b54;
L_100a8a7d:;
  /* 100a8a7d cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8a83 je 0x100a8b7a */
  if (C.zf) goto L_100a8b7a;
  /* 100a8a89 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100a8a8f push 0x104 */
  push32((uint32_t)(0x104u));
  /* 100a8a94 push eax */
  push32((uint32_t)(EAX));
  /* 100a8a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a8a97 call dword ptr [0x100ae054] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae054))), 0x100a8a9du);
  /* 100a8a9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a8a9f jne 0x100a8ab4 */
  if (!C.zf) goto L_100a8ab4;
  /* 100a8aa1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100a8aa7 push 0x100ae4b8 */
  push32((uint32_t)(0x100ae4b8u));
  /* 100a8aac push eax */
  push32((uint32_t)(EAX));
  /* 100a8aad call 0x100a9ad0 */
  push32(0x100a8ab2u); f_100a9ad0();
  /* 100a8ab2 pop ecx */
  ECX = (pop32());
  /* 100a8ab3 pop ecx */
  ECX = (pop32());
L_100a8ab4:;
  /* 100a8ab4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100a8aba push edi */
  push32((uint32_t)(EDI));
  /* 100a8abb push eax */
  push32((uint32_t)(EAX));
  /* 100a8abc lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 100a8ac2 call 0x100a9020 */
  push32(0x100a8ac7u); f_100a9020();
  /* 100a8ac7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a8ac8 pop ecx */
  ECX = (pop32());
  /* 100a8ac9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8acc jbe 0x100a8af7 */
  if ((C.cf||C.zf)) goto L_100a8af7;
  /* 100a8ace lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100a8ad4 push eax */
  push32((uint32_t)(EAX));
  /* 100a8ad5 call 0x100a9020 */
  push32(0x100a8adau); f_100a9020();
  /* 100a8ada mov edi, eax */
  EDI = (EAX);
  /* 100a8adc lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 100a8ae2 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a8ae5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a8ae7 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8ae9 push 0x100ae4b4 */
  push32((uint32_t)(0x100ae4b4u));
  /* 100a8aee push edi */
  push32((uint32_t)(EDI));
  /* 100a8aef call 0x100abde0 */
  push32(0x100a8af4u); f_100abde0();
  /* 100a8af4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a8af7:;
  /* 100a8af7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100a8afd push 0x100ae498 */
  push32((uint32_t)(0x100ae498u));
  /* 100a8b02 push eax */
  push32((uint32_t)(EAX));
  /* 100a8b03 call 0x100a9ad0 */
  push32(0x100a8b08u); f_100a9ad0();
  /* 100a8b08 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100a8b0e push edi */
  push32((uint32_t)(EDI));
  /* 100a8b0f push eax */
  push32((uint32_t)(EAX));
  /* 100a8b10 call 0x100a9ae0 */
  push32(0x100a8b15u); f_100a9ae0();
  /* 100a8b15 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100a8b1b push 0x100ae494 */
  push32((uint32_t)(0x100ae494u));
  /* 100a8b20 push eax */
  push32((uint32_t)(EAX));
  /* 100a8b21 call 0x100a9ae0 */
  push32(0x100a8b26u); f_100a9ae0();
  /* 100a8b26 push dword ptr [esi + 0x100b06ac] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x100b06ac))));
  /* 100a8b2c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100a8b32 push eax */
  push32((uint32_t)(EAX));
  /* 100a8b33 call 0x100a9ae0 */
  push32(0x100a8b38u); f_100a9ae0();
  /* 100a8b38 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 100a8b3d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 100a8b43 push 0x100ae46c */
  push32((uint32_t)(0x100ae46cu));
  /* 100a8b48 push eax */
  push32((uint32_t)(EAX));
  /* 100a8b49 call 0x100abd54 */
  push32(0x100a8b4eu); f_100abd54();
  /* 100a8b4e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8b51 pop edi */
  EDI = (pop32());
  /* 100a8b52 jmp 0x100a8b7a */
  goto L_100a8b7a;
L_100a8b54:;
  /* 100a8b54 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100a8b57 lea esi, [esi + 0x100b06ac] */
  ESI = ((uint32_t)(ESI + 0x100b06ac));
  /* 100a8b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 100a8b5f push eax */
  push32((uint32_t)(EAX));
  /* 100a8b60 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100a8b62 call 0x100a9020 */
  push32(0x100a8b67u); f_100a9020();
  /* 100a8b67 pop ecx */
  ECX = (pop32());
  /* 100a8b68 push eax */
  push32((uint32_t)(EAX));
  /* 100a8b69 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100a8b6b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 100a8b6d call dword ptr [0x100ae044] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae044))), 0x100a8b73u);
  /* 100a8b73 push eax */
  push32((uint32_t)(EAX));
  /* 100a8b74 call dword ptr [0x100ae084] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae084))), 0x100a8b7au);
L_100a8b7a:;
  /* 100a8b7a pop esi */
  ESI = (pop32());
  /* 100a8b7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a8b7c ret  */
  ESPCHK(0x100a8a2au, _esp0);
  ESP += 4; return;
}

/* FUN_10008b7d @ 0x100a8b7d (101 bytes, 34 insns) */
void f_100a8b7d(void) {
  FTRACE(0x100a8b7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8b7d push esi */
  push32((uint32_t)(ESI));
  /* 100a8b7e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100a8b82 cmp esi, dword ptr [0x100b7d20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100b7d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8b88 jae 0x100a8bca */
  if (!C.cf) goto L_100a8bca;
  /* 100a8b8a mov ecx, esi */
  ECX = (ESI);
  /* 100a8b8c mov eax, esi */
  EAX = (ESI);
  /* 100a8b8e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100a8b91 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100a8b94 mov ecx, dword ptr [ecx*4 + 0x100b7c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100b7c20)));
  /* 100a8b9b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100a8b9e test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100a8ba3 je 0x100a8bca */
  if (C.zf) goto L_100a8bca;
  /* 100a8ba5 push edi */
  push32((uint32_t)(EDI));
  /* 100a8ba6 push esi */
  push32((uint32_t)(ESI));
  /* 100a8ba7 call 0x100ac024 */
  push32(0x100a8bacu); f_100ac024();
  /* 100a8bac push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100a8bb0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100a8bb4 push esi */
  push32((uint32_t)(ESI));
  /* 100a8bb5 call 0x100a8be2 */
  push32(0x100a8bbau); f_100a8be2();
  /* 100a8bba push esi */
  push32((uint32_t)(ESI));
  /* 100a8bbb mov edi, eax */
  EDI = (EAX);
  /* 100a8bbd call 0x100ac083 */
  push32(0x100a8bc2u); f_100ac083();
  /* 100a8bc2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8bc5 mov eax, edi */
  EAX = (EDI);
  /* 100a8bc7 pop edi */
  EDI = (pop32());
  /* 100a8bc8 pop esi */
  ESI = (pop32());
  /* 100a8bc9 ret  */
  ESPCHK(0x100a8b7du, _esp0);
  ESP += 4; return;
L_100a8bca:;
  /* 100a8bca call 0x100abf51 */
  push32(0x100a8bcfu); f_100abf51();
  /* 100a8bcf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100a8bd5 call 0x100abf5a */
  push32(0x100a8bdau); f_100abf5a();
  /* 100a8bda and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100a8bdd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100a8be0 pop esi */
  ESI = (pop32());
  /* 100a8be1 ret  */
  ESPCHK(0x100a8b7du, _esp0);
  ESP += 4; return;
}

/* FUN_10008be2 @ 0x100a8be2 (115 bytes, 41 insns) */
void f_100a8be2(void) {
  FTRACE(0x100a8be2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8be2 push esi */
  push32((uint32_t)(ESI));
  /* 100a8be3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100a8be7 push edi */
  push32((uint32_t)(EDI));
  /* 100a8be8 push esi */
  push32((uint32_t)(ESI));
  /* 100a8be9 call 0x100abfe2 */
  push32(0x100a8beeu); f_100abfe2();
  /* 100a8bee cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8bf1 pop ecx */
  ECX = (pop32());
  /* 100a8bf2 jne 0x100a8c01 */
  if (!C.zf) goto L_100a8c01;
  /* 100a8bf4 call 0x100abf51 */
  push32(0x100a8bf9u); f_100abf51();
  /* 100a8bf9 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100a8bff jmp 0x100a8c2e */
  goto L_100a8c2e;
L_100a8c01:;
  /* 100a8c01 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 100a8c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a8c07 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100a8c0b push eax */
  push32((uint32_t)(EAX));
  /* 100a8c0c call dword ptr [0x100ae000] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae000))), 0x100a8c12u);
  /* 100a8c12 mov edi, eax */
  EDI = (EAX);
  /* 100a8c14 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8c17 jne 0x100a8c21 */
  if (!C.zf) goto L_100a8c21;
  /* 100a8c19 call dword ptr [0x100ae03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae03c))), 0x100a8c1fu);
  /* 100a8c1f jmp 0x100a8c23 */
  goto L_100a8c23;
L_100a8c21:;
  /* 100a8c21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100a8c23:;
  /* 100a8c23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a8c25 je 0x100a8c33 */
  if (C.zf) goto L_100a8c33;
  /* 100a8c27 push eax */
  push32((uint32_t)(EAX));
  /* 100a8c28 call 0x100abede */
  push32(0x100a8c2du); f_100abede();
  /* 100a8c2d pop ecx */
  ECX = (pop32());
L_100a8c2e:;
  /* 100a8c2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100a8c31 jmp 0x100a8c52 */
  goto L_100a8c52;
L_100a8c33:;
  /* 100a8c33 mov ecx, esi */
  ECX = (ESI);
  /* 100a8c35 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 100a8c38 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100a8c3b mov eax, esi */
  EAX = (ESI);
  /* 100a8c3d mov ecx, dword ptr [ecx*4 + 0x100b7c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100b7c20)));
  /* 100a8c44 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100a8c47 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 100a8c4c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 100a8c50 mov eax, edi */
  EAX = (EDI);
L_100a8c52:;
  /* 100a8c52 pop edi */
  EDI = (pop32());
  /* 100a8c53 pop esi */
  ESI = (pop32());
  /* 100a8c54 ret  */
  ESPCHK(0x100a8be2u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c55 @ 0x100a8c55 (101 bytes, 34 insns) */
void f_100a8c55(void) {
  FTRACE(0x100a8c55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8c55 push esi */
  push32((uint32_t)(ESI));
  /* 100a8c56 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100a8c5a cmp esi, dword ptr [0x100b7d20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100b7d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8c60 jae 0x100a8ca2 */
  if (!C.cf) goto L_100a8ca2;
  /* 100a8c62 mov ecx, esi */
  ECX = (ESI);
  /* 100a8c64 mov eax, esi */
  EAX = (ESI);
  /* 100a8c66 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100a8c69 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100a8c6c mov ecx, dword ptr [ecx*4 + 0x100b7c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100b7c20)));
  /* 100a8c73 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100a8c76 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100a8c7b je 0x100a8ca2 */
  if (C.zf) goto L_100a8ca2;
  /* 100a8c7d push edi */
  push32((uint32_t)(EDI));
  /* 100a8c7e push esi */
  push32((uint32_t)(ESI));
  /* 100a8c7f call 0x100ac024 */
  push32(0x100a8c84u); f_100ac024();
  /* 100a8c84 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100a8c88 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100a8c8c push esi */
  push32((uint32_t)(ESI));
  /* 100a8c8d call 0x100a8cba */
  push32(0x100a8c92u); f_100a8cba();
  /* 100a8c92 push esi */
  push32((uint32_t)(ESI));
  /* 100a8c93 mov edi, eax */
  EDI = (EAX);
  /* 100a8c95 call 0x100ac083 */
  push32(0x100a8c9au); f_100ac083();
  /* 100a8c9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8c9d mov eax, edi */
  EAX = (EDI);
  /* 100a8c9f pop edi */
  EDI = (pop32());
  /* 100a8ca0 pop esi */
  ESI = (pop32());
  /* 100a8ca1 ret  */
  ESPCHK(0x100a8c55u, _esp0);
  ESP += 4; return;
L_100a8ca2:;
  /* 100a8ca2 call 0x100abf51 */
  push32(0x100a8ca7u); f_100abf51();
  /* 100a8ca7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100a8cad call 0x100abf5a */
  push32(0x100a8cb2u); f_100abf5a();
  /* 100a8cb2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100a8cb5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100a8cb8 pop esi */
  ESI = (pop32());
  /* 100a8cb9 ret  */
  ESPCHK(0x100a8c55u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cba @ 0x100a8cba (395 bytes, 135 insns) */
void f_100a8cba(void) {
  FTRACE(0x100a8cbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8cba push ebp */
  push32((uint32_t)(EBP));
  /* 100a8cbb mov ebp, esp */
  EBP = (ESP);
  /* 100a8cbd sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a8cc3 push ebx */
  push32((uint32_t)(EBX));
  /* 100a8cc4 push esi */
  push32((uint32_t)(ESI));
  /* 100a8cc5 push edi */
  push32((uint32_t)(EDI));
  /* 100a8cc6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100a8cc8 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8ccb mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 100a8cce mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 100a8cd1 jne 0x100a8cda */
  if (!C.zf) goto L_100a8cda;
L_100a8cd3:;
  /* 100a8cd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a8cd5 jmp 0x100a8e40 */
  goto L_100a8e40;
L_100a8cda:;
  /* 100a8cda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a8cdd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100a8ce0 lea ebx, [eax*4 + 0x100b7c20] */
  EBX = ((uint32_t)(EAX*4 + 0x100b7c20));
  /* 100a8ce7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a8cea and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100a8ced lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 100a8cf0 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100a8cf2 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100a8cf5 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100a8cfa je 0x100a8d0a */
  if (C.zf) goto L_100a8d0a;
  /* 100a8cfc push 2 */
  push32((uint32_t)(0x2u));
  /* 100a8cfe push edi */
  push32((uint32_t)(EDI));
  /* 100a8cff push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a8d02 call 0x100a8be2 */
  push32(0x100a8d07u); f_100a8be2();
  /* 100a8d07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a8d0a:;
  /* 100a8d0a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100a8d0c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8d0e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100a8d12 je 0x100a8dd9 */
  if (C.zf) goto L_100a8dd9;
  /* 100a8d18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a8d1b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8d1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100a8d21 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 100a8d24 jbe 0x100a8e14 */
  if ((C.cf||C.zf)) goto L_100a8e14;
L_100a8d2a:;
  /* 100a8d2a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_100a8d30:;
  /* 100a8d30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100a8d33 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a8d36 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8d39 jae 0x100a8d64 */
  if (!C.cf) goto L_100a8d64;
  /* 100a8d3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100a8d3e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100a8d41 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 100a8d43 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8d46 jne 0x100a8d4f */
  if (!C.zf) goto L_100a8d4f;
  /* 100a8d48 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 100a8d4b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 100a8d4e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_100a8d4f:;
  /* 100a8d4f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100a8d51 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a8d52 mov ecx, eax */
  ECX = (EAX);
  /* 100a8d54 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 100a8d5a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a8d5c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8d62 jl 0x100a8d30 */
  if ((C.sf!=C.of)) goto L_100a8d30;
L_100a8d64:;
  /* 100a8d64 mov edi, eax */
  EDI = (EAX);
  /* 100a8d66 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 100a8d6c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a8d6e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a8d71 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a8d73 push eax */
  push32((uint32_t)(EAX));
  /* 100a8d74 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 100a8d7a push edi */
  push32((uint32_t)(EDI));
  /* 100a8d7b push eax */
  push32((uint32_t)(EAX));
  /* 100a8d7c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100a8d7e push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 100a8d81 call dword ptr [0x100ae084] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae084))), 0x100a8d87u);
  /* 100a8d87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a8d89 je 0x100a8dce */
  if (C.zf) goto L_100a8dce;
  /* 100a8d8b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100a8d8e add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100a8d91 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8d93 jl 0x100a8da0 */
  if ((C.sf!=C.of)) goto L_100a8da0;
  /* 100a8d95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100a8d98 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a8d9b cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8d9e jb 0x100a8d2a */
  if (C.cf) goto L_100a8d2a;
L_100a8da0:;
  /* 100a8da0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_100a8da2:;
  /* 100a8da2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100a8da5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8da7 jne 0x100a8e3d */
  if (!C.zf) goto L_100a8e3d;
  /* 100a8dad cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8db0 je 0x100a8e14 */
  if (C.zf) goto L_100a8e14;
  /* 100a8db2 push 5 */
  push32((uint32_t)(0x5u));
  /* 100a8db4 pop esi */
  ESI = (pop32());
  /* 100a8db5 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8db8 jne 0x100a8e06 */
  if (!C.zf) goto L_100a8e06;
  /* 100a8dba call 0x100abf51 */
  push32(0x100a8dbfu); f_100abf51();
  /* 100a8dbf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100a8dc5 call 0x100abf5a */
  push32(0x100a8dcau); f_100abf5a();
  /* 100a8dca mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 100a8dcc jmp 0x100a8e0f */
  goto L_100a8e0f;
L_100a8dce:;
  /* 100a8dce call dword ptr [0x100ae03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae03c))), 0x100a8dd4u);
  /* 100a8dd4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 100a8dd7 jmp 0x100a8da0 */
  goto L_100a8da0;
L_100a8dd9:;
  /* 100a8dd9 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 100a8ddc push edi */
  push32((uint32_t)(EDI));
  /* 100a8ddd push ecx */
  push32((uint32_t)(ECX));
  /* 100a8dde push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100a8de1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a8de4 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 100a8de6 call dword ptr [0x100ae084] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae084))), 0x100a8decu);
  /* 100a8dec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a8dee je 0x100a8dfb */
  if (C.zf) goto L_100a8dfb;
  /* 100a8df0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100a8df3 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 100a8df6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100a8df9 jmp 0x100a8da2 */
  goto L_100a8da2;
L_100a8dfb:;
  /* 100a8dfb call dword ptr [0x100ae03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae03c))), 0x100a8e01u);
  /* 100a8e01 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 100a8e04 jmp 0x100a8da2 */
  goto L_100a8da2;
L_100a8e06:;
  /* 100a8e06 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a8e09 call 0x100abede */
  push32(0x100a8e0eu); f_100abede();
  /* 100a8e0e pop ecx */
  ECX = (pop32());
L_100a8e0f:;
  /* 100a8e0f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100a8e12 jmp 0x100a8e40 */
  goto L_100a8e40;
L_100a8e14:;
  /* 100a8e14 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100a8e16 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100a8e1b je 0x100a8e29 */
  if (C.zf) goto L_100a8e29;
  /* 100a8e1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a8e20 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a8e23 je 0x100a8cd3 */
  if (C.zf) goto L_100a8cd3;
L_100a8e29:;
  /* 100a8e29 call 0x100abf51 */
  push32(0x100a8e2eu); f_100abf51();
  /* 100a8e2e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 100a8e34 call 0x100abf5a */
  push32(0x100a8e39u); f_100abf5a();
  /* 100a8e39 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 100a8e3b jmp 0x100a8e0f */
  goto L_100a8e0f;
L_100a8e3d:;
  /* 100a8e3d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_100a8e40:;
  /* 100a8e40 pop edi */
  EDI = (pop32());
  /* 100a8e41 pop esi */
  ESI = (pop32());
  /* 100a8e42 pop ebx */
  EBX = (pop32());
  /* 100a8e43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a8e44 ret  */
  ESPCHK(0x100a8cbau, _esp0);
  ESP += 4; return;
}

/* FUN_10008e45 @ 0x100a8e45 (68 bytes, 19 insns) */
void f_100a8e45(void) {
  FTRACE(0x100a8e45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8e45 inc dword ptr [0x100b6798] */
  { uint32_t _r=(r32((uint32_t)(0x100b6798)))+1; w32((uint32_t)(0x100b6798), (_r)); fl_inc(_r,32); }
  /* 100a8e4b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100a8e50 call 0x100aa28f */
  push32(0x100a8e55u); f_100aa28f();
  /* 100a8e55 pop ecx */
  ECX = (pop32());
  /* 100a8e56 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a8e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a8e5c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 100a8e5f je 0x100a8e6e */
  if (C.zf) goto L_100a8e6e;
  /* 100a8e61 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 100a8e65 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 100a8e6c jmp 0x100a8e7f */
  goto L_100a8e7f;
L_100a8e6e:;
  /* 100a8e6e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 100a8e72 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 100a8e75 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 100a8e78 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_100a8e7f:;
  /* 100a8e7f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 100a8e82 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100a8e86 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 100a8e88 ret  */
  ESPCHK(0x100a8e45u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e89 @ 0x100a8e89 (41 bytes, 13 insns) */
void f_100a8e89(void) {
  FTRACE(0x100a8e89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8e89 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a8e8d cmp eax, dword ptr [0x100b7d20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x100b7d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8e93 jb 0x100a8e98 */
  if (C.cf) goto L_100a8e98;
  /* 100a8e95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a8e97 ret  */
  ESPCHK(0x100a8e89u, _esp0);
  ESP += 4; return;
L_100a8e98:;
  /* 100a8e98 mov ecx, eax */
  ECX = (EAX);
  /* 100a8e9a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100a8e9d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100a8ea0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100a8ea3 mov ecx, dword ptr [ecx*4 + 0x100b7c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100b7c20)));
  /* 100a8eaa mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 100a8eae and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 100a8eb1 ret  */
  ESPCHK(0x100a8e89u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f6e @ 0x100a8f6e (47 bytes, 17 insns) */
void f_100a8f6e(void) {
  FTRACE(0x100a8f6eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8f6e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a8f72 mov ecx, 0x100b0738 */
  ECX = (0x100b0738u);
  /* 100a8f77 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8f79 jb 0x100a8f92 */
  if (C.cf) goto L_100a8f92;
  /* 100a8f7b cmp eax, 0x100b0998 */
  { uint32_t _a=(EAX),_b=(0x100b0998u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8f80 ja 0x100a8f92 */
  if ((!C.cf&&!C.zf)) goto L_100a8f92;
  /* 100a8f82 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a8f84 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100a8f87 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8f8a push eax */
  push32((uint32_t)(EAX));
  /* 100a8f8b call 0x100a9ff3 */
  push32(0x100a8f90u); f_100a9ff3();
  /* 100a8f90 pop ecx */
  ECX = (pop32());
  /* 100a8f91 ret  */
  ESPCHK(0x100a8f6eu, _esp0);
  ESP += 4; return;
L_100a8f92:;
  /* 100a8f92 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8f95 push eax */
  push32((uint32_t)(EAX));
  /* 100a8f96 call dword ptr [0x100ae00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae00c))), 0x100a8f9cu);
  /* 100a8f9c ret  */
  ESPCHK(0x100a8f6eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008f9d @ 0x100a8f9d (35 bytes, 13 insns) */
void f_100a8f9d(void) {
  FTRACE(0x100a8f9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8f9d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a8fa1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8fa4 jge 0x100a8fb1 */
  if ((C.sf==C.of)) goto L_100a8fb1;
  /* 100a8fa6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8fa9 push eax */
  push32((uint32_t)(EAX));
  /* 100a8faa call 0x100a9ff3 */
  push32(0x100a8fafu); f_100a9ff3();
  /* 100a8faf pop ecx */
  ECX = (pop32());
  /* 100a8fb0 ret  */
  ESPCHK(0x100a8f9du, _esp0);
  ESP += 4; return;
L_100a8fb1:;
  /* 100a8fb1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a8fb5 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8fb8 push eax */
  push32((uint32_t)(EAX));
  /* 100a8fb9 call dword ptr [0x100ae00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae00c))), 0x100a8fbfu);
  /* 100a8fbf ret  */
  ESPCHK(0x100a8f9du, _esp0);
  ESP += 4; return;
}

/* FUN_10008fc0 @ 0x100a8fc0 (47 bytes, 17 insns) */
void f_100a8fc0(void) {
  FTRACE(0x100a8fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8fc0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a8fc4 mov ecx, 0x100b0738 */
  ECX = (0x100b0738u);
  /* 100a8fc9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8fcb jb 0x100a8fe4 */
  if (C.cf) goto L_100a8fe4;
  /* 100a8fcd cmp eax, 0x100b0998 */
  { uint32_t _a=(EAX),_b=(0x100b0998u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8fd2 ja 0x100a8fe4 */
  if ((!C.cf&&!C.zf)) goto L_100a8fe4;
  /* 100a8fd4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a8fd6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100a8fd9 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8fdc push eax */
  push32((uint32_t)(EAX));
  /* 100a8fdd call 0x100aa054 */
  push32(0x100a8fe2u); f_100aa054();
  /* 100a8fe2 pop ecx */
  ECX = (pop32());
  /* 100a8fe3 ret  */
  ESPCHK(0x100a8fc0u, _esp0);
  ESP += 4; return;
L_100a8fe4:;
  /* 100a8fe4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8fe7 push eax */
  push32((uint32_t)(EAX));
  /* 100a8fe8 call dword ptr [0x100ae008] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae008))), 0x100a8feeu);
  /* 100a8fee ret  */
  ESPCHK(0x100a8fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fef @ 0x100a8fef (35 bytes, 13 insns) */
void f_100a8fef(void) {
  FTRACE(0x100a8fefu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a8fef mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a8ff3 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a8ff6 jge 0x100a9003 */
  if ((C.sf==C.of)) goto L_100a9003;
  /* 100a8ff8 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a8ffb push eax */
  push32((uint32_t)(EAX));
  /* 100a8ffc call 0x100aa054 */
  push32(0x100a9001u); f_100aa054();
  /* 100a9001 pop ecx */
  ECX = (pop32());
  /* 100a9002 ret  */
  ESPCHK(0x100a8fefu, _esp0);
  ESP += 4; return;
L_100a9003:;
  /* 100a9003 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a9007 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a900a push eax */
  push32((uint32_t)(EAX));
  /* 100a900b call dword ptr [0x100ae008] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae008))), 0x100a9011u);
  /* 100a9011 ret  */
  ESPCHK(0x100a8fefu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x100a9020 (123 bytes, 44 insns) */
void f_100a9020(void) {
  FTRACE(0x100a9020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9020 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a9024 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100a902a je 0x100a9040 */
  if (C.zf) goto L_100a9040;
L_100a902c:;
  /* 100a902c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100a902e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100a902f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a9031 je 0x100a9073 */
  if (C.zf) goto L_100a9073;
  /* 100a9033 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100a9039 jne 0x100a902c */
  if (!C.zf) goto L_100a902c;
  /* 100a903b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100a9040:;
  /* 100a9040 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 100a9042 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100a9047 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9049 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100a904c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100a904e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9051 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100a9056 je 0x100a9040 */
  if (C.zf) goto L_100a9040;
  /* 100a9058 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 100a905b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a905d je 0x100a9091 */
  if (C.zf) goto L_100a9091;
  /* 100a905f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100a9061 je 0x100a9087 */
  if (C.zf) goto L_100a9087;
  /* 100a9063 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 100a9068 je 0x100a907d */
  if (C.zf) goto L_100a907d;
  /* 100a906a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 100a906f je 0x100a9073 */
  if (C.zf) goto L_100a9073;
  /* 100a9071 jmp 0x100a9040 */
  goto L_100a9040;
L_100a9073:;
  /* 100a9073 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 100a9076 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a907a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a907c ret  */
  ESPCHK(0x100a9020u, _esp0);
  ESP += 4; return;
L_100a907d:;
  /* 100a907d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 100a9080 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a9084 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9086 ret  */
  ESPCHK(0x100a9020u, _esp0);
  ESP += 4; return;
L_100a9087:;
  /* 100a9087 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 100a908a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a908e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9090 ret  */
  ESPCHK(0x100a9020u, _esp0);
  ESP += 4; return;
L_100a9091:;
  /* 100a9091 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 100a9094 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a9098 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a909a ret  */
  ESPCHK(0x100a9020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000909b @ 0x100a909b (89 bytes, 39 insns) */
void f_100a909b(void) {
  FTRACE(0x100a909bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a909b push ebp */
  push32((uint32_t)(EBP));
  /* 100a909c mov ebp, esp */
  EBP = (ESP);
  /* 100a909e push ebx */
  push32((uint32_t)(EBX));
  /* 100a909f push esi */
  push32((uint32_t)(ESI));
  /* 100a90a0 mov esi, 0x100b69a4 */
  ESI = (0x100b69a4u);
  /* 100a90a5 push edi */
  push32((uint32_t)(EDI));
  /* 100a90a6 push esi */
  push32((uint32_t)(ESI));
  /* 100a90a7 call dword ptr [0x100ae090] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae090))), 0x100a90adu);
  /* 100a90ad mov edi, dword ptr [0x100ae08c] */
  EDI = (r32((uint32_t)(0x100ae08c)));
  /* 100a90b3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100a90b5 cmp dword ptr [0x100b69a0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100b69a0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a90bb je 0x100a90cb */
  if (C.zf) goto L_100a90cb;
  /* 100a90bd push esi */
  push32((uint32_t)(ESI));
  /* 100a90be call edi */
  call_ind((uint32_t)(EDI), 0x100a90c0u);
  /* 100a90c0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100a90c2 call 0x100a9ff3 */
  push32(0x100a90c7u); f_100a9ff3();
  /* 100a90c7 pop ecx */
  ECX = (pop32());
  /* 100a90c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a90ca pop ebx */
  EBX = (pop32());
L_100a90cb:;
  /* 100a90cb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a90ce push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a90d1 call 0x100a90f4 */
  push32(0x100a90d6u); f_100a90f4();
  /* 100a90d6 pop ecx */
  ECX = (pop32());
  /* 100a90d7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100a90da test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100a90dc pop ecx */
  ECX = (pop32());
  /* 100a90dd je 0x100a90e9 */
  if (C.zf) goto L_100a90e9;
  /* 100a90df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100a90e1 call 0x100aa054 */
  push32(0x100a90e6u); f_100aa054();
  /* 100a90e6 pop ecx */
  ECX = (pop32());
  /* 100a90e7 jmp 0x100a90ec */
  goto L_100a90ec;
L_100a90e9:;
  /* 100a90e9 push esi */
  push32((uint32_t)(ESI));
  /* 100a90ea call edi */
  call_ind((uint32_t)(EDI), 0x100a90ecu);
L_100a90ec:;
  /* 100a90ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a90ef pop edi */
  EDI = (pop32());
  /* 100a90f0 pop esi */
  ESI = (pop32());
  /* 100a90f1 pop ebx */
  EBX = (pop32());
  /* 100a90f2 pop ebp */
  EBP = (pop32());
  /* 100a90f3 ret  */
  ESPCHK(0x100a909bu, _esp0);
  ESP += 4; return;
}

/* FUN_100090f4 @ 0x100a90f4 (105 bytes, 38 insns) */
void f_100a90f4(void) {
  FTRACE(0x100a90f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a90f4 push ebp */
  push32((uint32_t)(EBP));
  /* 100a90f5 mov ebp, esp */
  EBP = (ESP);
  /* 100a90f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a90fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a90fc jne 0x100a9100 */
  if (!C.zf) goto L_100a9100;
  /* 100a90fe pop ebp */
  EBP = (pop32());
  /* 100a90ff ret  */
  ESPCHK(0x100a90f4u, _esp0);
  ESP += 4; return;
L_100a9100:;
  /* 100a9100 cmp dword ptr [0x100b6828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100b6828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9107 jne 0x100a911b */
  if (!C.zf) goto L_100a911b;
  /* 100a9109 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 100a910d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100a9112 ja 0x100a914d */
  if ((!C.cf&&!C.zf)) goto L_100a914d;
  /* 100a9114 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a9116 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100a9118 pop eax */
  EAX = (pop32());
  /* 100a9119 pop ebp */
  EBP = (pop32());
  /* 100a911a ret  */
  ESPCHK(0x100a90f4u, _esp0);
  ESP += 4; return;
L_100a911b:;
  /* 100a911b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 100a911e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 100a9122 push ecx */
  push32((uint32_t)(ECX));
  /* 100a9123 push 0 */
  push32((uint32_t)(0x0u));
  /* 100a9125 push dword ptr [0x100b0bd0] */
  push32((uint32_t)(r32((uint32_t)(0x100b0bd0))));
  /* 100a912b push eax */
  push32((uint32_t)(EAX));
  /* 100a912c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 100a912f push 1 */
  push32((uint32_t)(0x1u));
  /* 100a9131 push eax */
  push32((uint32_t)(EAX));
  /* 100a9132 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 100a9137 push dword ptr [0x100b6838] */
  push32((uint32_t)(r32((uint32_t)(0x100b6838))));
  /* 100a913d call dword ptr [0x100ae060] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae060))), 0x100a9143u);
  /* 100a9143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a9145 je 0x100a914d */
  if (C.zf) goto L_100a914d;
  /* 100a9147 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a914b je 0x100a915b */
  if (C.zf) goto L_100a915b;
L_100a914d:;
  /* 100a914d call 0x100abf51 */
  push32(0x100a9152u); f_100abf51();
  /* 100a9152 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 100a9158 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100a915b:;
  /* 100a915b pop ebp */
  EBP = (pop32());
  /* 100a915c ret  */
  ESPCHK(0x100a90f4u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x100a9160 (104 bytes, 43 insns) */
void f_100a9160(void) {
  FTRACE(0x100a9160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9160 push ebx */
  push32((uint32_t)(EBX));
  /* 100a9161 push esi */
  push32((uint32_t)(ESI));
  /* 100a9162 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 100a9166 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a9168 jne 0x100a9182 */
  if (!C.zf) goto L_100a9182;
  /* 100a916a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 100a916e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100a9172 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100a9174 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a9176 mov ebx, eax */
  EBX = (EAX);
  /* 100a9178 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100a917c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a917e mov edx, ebx */
  EDX = (EBX);
  /* 100a9180 jmp 0x100a91c3 */
  goto L_100a91c3;
L_100a9182:;
  /* 100a9182 mov ecx, eax */
  ECX = (EAX);
  /* 100a9184 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100a9188 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 100a918c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_100a9190:;
  /* 100a9190 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100a9192 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 100a9194 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100a9196 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 100a9198 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100a919a jne 0x100a9190 */
  if (!C.zf) goto L_100a9190;
  /* 100a919c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a919e mov esi, eax */
  ESI = (EAX);
  /* 100a91a0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100a91a4 mov ecx, eax */
  ECX = (EAX);
  /* 100a91a6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100a91aa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100a91ac add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a91ae jb 0x100a91be */
  if (C.cf) goto L_100a91be;
  /* 100a91b0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a91b4 ja 0x100a91be */
  if ((!C.cf&&!C.zf)) goto L_100a91be;
  /* 100a91b6 jb 0x100a91bf */
  if (C.cf) goto L_100a91bf;
  /* 100a91b8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a91bc jbe 0x100a91bf */
  if ((C.cf||C.zf)) goto L_100a91bf;
L_100a91be:;
  /* 100a91be dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_100a91bf:;
  /* 100a91bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100a91c1 mov eax, esi */
  EAX = (ESI);
L_100a91c3:;
  /* 100a91c3 pop esi */
  ESI = (pop32());
  /* 100a91c4 pop ebx */
  EBX = (pop32());
  /* 100a91c5 ret 0x10 */
  ESPCHK(0x100a9160u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x100a91d0 (117 bytes, 44 insns) */
void f_100a91d0(void) {
  FTRACE(0x100a91d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a91d0 push ebx */
  push32((uint32_t)(EBX));
  /* 100a91d1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100a91d5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a91d7 jne 0x100a91f1 */
  if (!C.zf) goto L_100a91f1;
  /* 100a91d9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 100a91dd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100a91e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100a91e3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a91e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a91e9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a91eb mov eax, edx */
  EAX = (EDX);
  /* 100a91ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100a91ef jmp 0x100a9241 */
  goto L_100a9241;
L_100a91f1:;
  /* 100a91f1 mov ecx, eax */
  ECX = (EAX);
  /* 100a91f3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 100a91f7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 100a91fb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_100a91ff:;
  /* 100a91ff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100a9201 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 100a9203 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100a9205 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 100a9207 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100a9209 jne 0x100a91ff */
  if (!C.zf) goto L_100a91ff;
  /* 100a920b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a920d mov ecx, eax */
  ECX = (EAX);
  /* 100a920f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100a9213 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 100a9214 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100a9218 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a921a jb 0x100a922a */
  if (C.cf) goto L_100a922a;
  /* 100a921c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9220 ja 0x100a922a */
  if ((!C.cf&&!C.zf)) goto L_100a922a;
  /* 100a9222 jb 0x100a9232 */
  if (C.cf) goto L_100a9232;
  /* 100a9224 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9228 jbe 0x100a9232 */
  if ((C.cf||C.zf)) goto L_100a9232;
L_100a922a:;
  /* 100a922a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a922e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_100a9232:;
  /* 100a9232 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9236 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a923a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 100a923c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100a923e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_100a9241:;
  /* 100a9241 pop ebx */
  EBX = (pop32());
  /* 100a9242 ret 0x10 */
  ESPCHK(0x100a91d0u, _esp0);
  ESP += 20; return;
}

